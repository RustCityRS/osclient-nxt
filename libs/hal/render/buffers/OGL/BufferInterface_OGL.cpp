// libs/hal/render/buffers/OGL/BufferInterface_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/buffers/BufferInterface.h"

namespace jag::render {
    class GPUMemoryTrackingEntry {
    public:
        GPUMemoryTrackingEntry();
        GPUMemoryTrackingEntry* operator=(GPUMemoryTrackingEntry&& gpuMemoryTrackingEntry);
        ~GPUMemoryTrackingEntry();
        void Register(const char* str, unsigned int arg2);
        void Unregister();

    private:
        GPUMemoryAllocatorZone* field_0;
        char* field_8;
        unsigned int field_16;
        uint8_t _unknown_20[4];
    };

    // 0x100c0df40
    unsigned int BufferInterface::GetNativeBuffer() const {
        return m_nativeBuffer;
    }

    // 0x100c12f90
    BufferInterface::BufferInterface()
        : RenderResource(), m_nativeBuffer(0), field_16(0), field_24(0), field_28(0), field_32(0), m_sizeInBytes(0),
          m_physicalSizeInBytes(0), m_creationFlags(0), field_45(0), field_48(false), field_0(0) {}

    // 0x100c13010
    BufferInterface::BufferInterface(BufferInterface&& bufferInterface)
        : RenderResource(bufferInterface), m_nativeBuffer(0), field_16(0), field_24(0), field_28(0), field_32(0),
          m_sizeInBytes(0), m_physicalSizeInBytes(0), m_creationFlags(0), field_45(0), field_48(false),
          m_sizeInBytes(bufferInterface.m_sizeInBytes), m_physicalSizeInBytes(bufferInterface.m_physicalSizeInBytes) {
        uint32_t uVar1 = bufferInterface.field_45;
        m_creationFlags = bufferInterface.m_creationFlags;
        field_45 = uVar1;
        field_48 = (bool)bufferInterface.field_48.load(0);
        if (m_nativeBuffer != 0) {
            LogAssert("m_GLBuffer == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      43, nullptr);
        }
        m_nativeBuffer = bufferInterface.m_nativeBuffer;
        bufferInterface.m_nativeBuffer = 0;
        field_16 = bufferInterface.field_16;
        field_24 = bufferInterface.field_24;
        field_28 = bufferInterface.field_28;
        field_32 = bufferInterface.field_32;
        *field_56 = bufferInterface.field_56;
        UndoMarkAsDead();
    }

    // 0x100c131b0
    BufferInterface* BufferInterface::operator=(BufferInterface&& bufferInterface) {
        *this = bufferInterface;
        m_sizeInBytes = bufferInterface.m_sizeInBytes;
        m_physicalSizeInBytes = bufferInterface.m_physicalSizeInBytes;
        uint32_t uVar1 = bufferInterface.field_45;
        m_creationFlags = bufferInterface.m_creationFlags;
        field_45 = uVar1;
        field_48 = (bool)bufferInterface.field_48.load((memory_order)bufferInterface);
        if (m_nativeBuffer != 0) {
            LogAssert("m_GLBuffer == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      62, nullptr);
        }
        m_nativeBuffer = bufferInterface.m_nativeBuffer;
        bufferInterface.m_nativeBuffer = 0;
        field_16 = bufferInterface.field_16;
        field_24 = bufferInterface.field_24;
        field_28 = bufferInterface.field_28;
        field_32 = bufferInterface.field_32;
        *field_56 = bufferInterface.field_56;
        UndoMarkAsDead();
        return this;
    }

    // 0x100c13280
    bool BufferInterface::UseDefaultVAO(unsigned int arg1) {
        RenderDevice* pRVar3;

        if ((arg1 & 4294967294) == 34962) {
            pRVar3 = (RenderDevice*)34962->Instance();
            if (pRVar3->GetPrimaryRenderContext() != 0) {
                pRVar3 = (RenderDevice*)pRVar3->Instance();
                if (pRVar3->IsRenderThread() != '\0') {
                    pRVar3 = (RenderDevice*)pRVar3->Instance();
                    return pRVar3->GetReadyState() == 0;
                }
            }
        }
        return false;
    }

    // 0x100c13350
    bool BufferInterface::CreateBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                       unsigned int arg5, unsigned int arg6, const void* arg7) {
        if (arg5 == 0) {
            LogAssert("sizeInBytes > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      86, "Attempting to create a %s of size 0 bytes", str);
        }
        if (m_nativeBuffer != 0) {
            LogAssert("m_GLBuffer == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      87, "Call Destroy() before calling Create() again");
        }
        field_0 = (arg6 & 8) >> 2 | 1;
        m_nativeBuffer = CreateBufferInternal(str, arg2, arg3, arg4, arg5, arg6, arg7);
        m_physicalSizeInBytes = arg5;
        m_sizeInBytes = arg5;
        m_creationFlags = (uint8_t)arg6;
        field_45 = arg6._1_3_;
        field_56->Register(str, arg5);
        UndoMarkAsDead();
        return GetNativeBufferInternal() != 0;
    }

    // 0x100c13450
    int BufferInterface::CreateBufferInternal(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                              unsigned int arg5, unsigned int arg6, const void* arg7) {
        uint64_t in_stack_ffffffffffffffa8;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        uint32_t uVar8 = (uint32_t)((unsigned long)in_stack_ffffffffffffffa8 >> 32);
        auto pRVar3 = Instance();
        auto pRVar4 = pRVar3->GetCurrentThreadRenderContext();
        if (!(pRVar4->IsLocked())) {
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      106, nullptr);
        }
        Singleton<RenderDevice>* this_02 = (Singleton<RenderDevice>*)(unsigned long)arg2;
        if (UseDefaultVAO(arg2)) {
            pRVar3 = (RenderDevice*)this_02->Instance();
            pRVar4 = pRVar3->GetCurrentThreadRenderContext();
            pRVar4->SetDefaultVAO();
        }
        return local_40 = 0;
        (*___glewGenBuffers)(1, &local_40);
        CheckBufferGlError("glGenBuffers", str);
        if (local_40 == 0) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      122, "\nUnable to create %s!", str);
            return 0;
        }
        (*___glewBindBuffer)(arg2);
        CheckBufferGlError("glBindBuffer", str);
        if ((arg6 & 1) == 0) {
            arg4 = arg3;
        }
        long lVar5 = ((MapArea*)Instance())->GetOrigin();
        uint64_t* puVar6 = &___glewBufferData;
        char* local_50 = "glBufferData";
        if ((*(char*)(lVar5 + 325) == '\0') || (*(char*)(lVar5 + 180) == '\0'))
            goto LAB_100c136d5;
        if (!(IsRangeBufferMappingFast())) {
            puVar6 = &___glewBufferData;
            if ((arg6 & 2) == 0)
                goto LAB_100c136d5;
            if (*(char*)(lVar5 + 181) == '\0') {
                puVar6 = &___glewBufferData;
                goto LAB_100c136d5;
            }
        }
        unsigned int uVar7 = arg4 - 35041;
        if ((8 < uVar7) || (arg4 = 513, (273U >> (uVar7 & 31) & 1) == 0)) {
            arg4 = -(arg6 & 1) & 258;
        }
        puVar6 = &___glewBufferStorage;
        local_50 = "glBufferStorage";
        if (((arg6 & 2) != 0) && (*(char*)(lVar5 + 181) != '\0')) {
            if ((arg6 & 1) == 0) {
                LogAssert("(creationFlags & DYNAMIC_BUFFER)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          150, nullptr);
            }
            if ((uVar7 < 9) && ((273U >> (uVar7 & 31) & 1) != 0)) {
                arg4 = arg4 | 192;
            } else {
                arg4 = arg4 | 64;
            }
        }
    LAB_100c136d5:
        uVar7 = arg2;
        (*(void (*)(...))*puVar6)(arg2, arg5, arg7, arg4);
        CheckBufferGlError(local_50, str);
        int local_44 = 0;
        (*___glewGetBufferParameteriv)(uVar7, 34660, &local_44);
        CheckBufferGlError("glGetBufferParameteriv", str);
        if (local_44 < (int)arg5) {
            LogAssert("actualSize >= (int)sizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      168, "Requested %s size %u but got %i", str, (unsigned long)arg5,
                      (((uint64_t)uVar8 << 32) | (uint32_t)local_44));
        }
        (*___glewBindBuffer)(uVar7, 0);
        CheckBufferGlError("glBindBuffer", str);
        return local_40;
    }

    // 0x100c137e0
    unsigned int BufferInterface::GetNativeBufferInternal() const {
        return m_nativeBuffer;
    }

    // 0x100c138b0
    void BufferInterface::CheckBufferGlError(const char* str1, const char* str2) {
        uint64_t in_RAX;

        uint32_t uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
        unsigned int uVar1 = m_sizeInBytes;
        uint8_t bVar2 = IsPermanent();
        CheckGlErrorInternal("%s (type: %s, size: %u, permanent: %i)",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                             "OGL/BufferInterface_OGL.cpp",
                             488, str1, str2, (unsigned long)uVar1,
                             (((uint64_t)uVar3 << 32) | (uint32_t)((unsigned int)bVar2)));
    }

    // 0x100c13900
    void BufferInterface::ReleaseNativeResources(const char* str, unsigned int arg2) {
        long lVar1;
        RenderDevice* this_00;

        if (IsPermanent()) {
            if (IsCreated()) {
                this_00 = (RenderDevice*)Instance();
                if (!(((RenderContext*)this_00->GetPrimaryRenderContext())->IsDeviceResetInProgress())) {
                    LogAssert("!IsPermanent() || !IsCreated() || "
                              "RenderDevice::Instance().GetPrimaryRenderContext()->IsDeviceResetInProgress()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              178,
                              "Attempting to destroy permanent buffer, check that buffer is seen as PooledBuffer type "
                              "at call to Create() and Destroy()");
                }
            }
        }
        if (IsMapped()) {
            LogAssert("!IsMapped()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      179, "Destroying %s while mapped", str);
        }
        unsigned int arg3 = m_nativeBuffer;
        if (arg3 != 0) {
            field_56->Unregister();
            MarkAsDead();
            m_nativeBuffer = 0;
            lVar1 = field_16;
            field_16 = 0;
            this_thread::IsMainThread();
            ReleaseNativeResourcesInternal(str, arg2, arg3, lVar1 != 0);
        }
        m_sizeInBytes = 0;
        m_physicalSizeInBytes = 0;
    }

    // 0x100c13a20
    void GPUMemoryTrackingEntry::Unregister() {
        if (field_0 != nullptr) {
            ((RenderDevice*)Instance())->UnregisterObjectGPUMemory(field_8, field_16, field_0);
            field_0 = nullptr;
            field_8 = nullptr;
            field_16 = 0;
        }
    }

    // 0x100c13a60
    void BufferInterface::ReleaseNativeResourcesInternal(const char* str, unsigned int arg2, unsigned int arg3,
                                                         bool arg4) {
        bool cVar1;
        Singleton<RenderDevice>* this_01;
        unsigned int local_34;
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        if (arg3 != 0) {
            local_34 = arg3;
            this_01 = (Singleton<RenderDevice>*)(unsigned long)arg2;
            cVar1 = UseDefaultVAO(arg2);
            if (cVar1) {
                (((RenderDevice*)this_01->Instance())->GetCurrentThreadRenderContext())->SetDefaultVAO();
            }
            cVar1 = (*___glewIsBuffer)(local_34);
            CheckGlErrorInternal("glIsBuffer %s",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "buffers/OGL/BufferInterface_OGL.cpp",
                                 229, str);
            if (cVar1) {
                if (arg4) {
                    (*___glewBindBuffer)(arg2, local_34);
                    CheckBufferGlErrorStatic("glBindBuffer", str);
                    (*___glewUnmapBuffer)(arg2);
                    CheckBufferGlErrorStatic("glUnmapBuffer", str);
                    (*___glewBindBuffer)(arg2, 0);
                    CheckBufferGlErrorStatic("glBindBuffer", str);
                }
                (*___glewDeleteBuffers)(1, &local_34);
                CheckBufferGlErrorStatic("glDeleteBuffers", str);
            }
        }
    }

    // 0x100c13b70
    void BufferInterface::CheckBufferGlErrorStatic(const char* str1, const char* str2) {
        CheckGlErrorInternal("%s (type: %s)",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                             "OGL/BufferInterface_OGL.cpp",
                             493, str1, str2);
    }

    // 0x100c13ba0
    long BufferInterface::MapBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                    LockType lockType, unsigned int arg6, unsigned int arg7, unsigned int arg8) {
        unsigned int uVar1;
        uint32_t uVar5;
        LockType lockType_00;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        if (lockType != 1) {
            if (lockType == 0) {
                LogAssert("lockType != LOCK_TYPE_INVALID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          245, nullptr);
            }
            if (!(IsDynamic())) {
                LogAssert("lockType == LOCK_TYPE_READ || IsDynamic()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          246, "Attempting to write to or persistently map a static buffer");
            }
        }
        if ((&field_48)->operator_cast_to_bool()) {
            LogAssert("m_mapped == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      247, nullptr);
        }
        if (m_sizeInBytes < arg6) {
            LogAssert("offset <= m_sizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      248, nullptr);
        }
        if (!(IsCreated())) {
            LogAssert("IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      249, nullptr);
        }
        auto pRVar6 = Instance();
        if (pRVar6->GetReadyState() != 0) {
            LogAssert("RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      250, nullptr);
        }
        pRVar6 = (RenderDevice*)pRVar6->Instance();
        auto pRVar7 = pRVar6->GetCurrentThreadRenderContext();
        if (!(pRVar7->IsLocked())) {
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      251, nullptr);
        }
        pRVar7 = (RenderContext*)(unsigned long)arg2;
        if (UseDefaultVAO(arg2)) {
            pRVar6 = (RenderDevice*)pRVar7->Instance();
            pRVar7 = pRVar6->GetCurrentThreadRenderContext();
            pRVar7->SetDefaultVAO();
        }
        if (arg7 == 0) {
            arg7 = m_sizeInBytes - arg6;
        }
        if (m_physicalSizeInBytes < arg7 + arg6) {
            LogAssert("offset + size <= m_physicalSizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      263, nullptr);
        }
        if ((lockType == 4) && (arg6 != 0)) {
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      267,
                      "Orphaning a buffer but not mapping it from offset 0 - this will likely result in corruption");
        }
        long lVar8 = ((MapArea*)pRVar7->Instance())->GetOrigin();
        if (*(char*)(lVar8 + 181) == '\0') {
            lockType_00 = 6;
            if ((lockType != 8) && (lockType_00 = 1, lockType != 7)) {
                lockType_00 = lockType;
            }
        } else {
            lockType_00 = lockType;
        }
        IsPermanent();
        field_48 = true;
        field_28 = arg6;
        field_32 = arg7;
        void* pcVar2 = ___glewBindBuffer;
        unsigned int uVar10 = lockType_00 - 7;
        if ((uVar10 < 2) && ((m_creationFlags & 2) == 0)) {
            LogAssert("!isPersistentLockType || (m_creationFlags & MAP_PERSISTENT_BUFFER)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      291, nullptr);
        }
        if (field_16 == 0) {
            uVar5 = GetNativeBufferInternal();
            (*pcVar2)(arg2, uVar5);
            CheckBufferGlError("glBindBuffer", str);
            pcVar2 = ___glewMapBufferRange;
            if (*(char*)(lVar8 + 180) == '\0') {
                if (uVar10 < 2) {
                    LogAssert("!isPersistentLockType",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              316, nullptr);
                }
                if (*(char*)(lVar8 + 179) == '\0') {
                    LogAssert("deviceCaps.m_BufferMapping",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              317, nullptr);
                }
                if (lockType_00 == 4) {
                    if (IsDynamic()) {
                        arg3 = arg4;
                    }
                    (*___glewBufferData)(arg2, m_physicalSizeInBytes, 0, arg3);
                    CheckBufferGlError("glBufferData", str);
                }
                pcVar2 = ___glewMapBuffer;
                uVar5 = GetGLMapAccessFlags(lockType_00);
                uVar10 = arg2;
                lVar8 = (*pcVar2)(arg2, uVar5);
                lVar8 = (unsigned long)arg6 + lVar8;
            } else if (uVar10 < 2) {
                if (*(char*)(lVar8 + 181) == '\0') {
                    LogAssert("deviceCaps.m_PersistentBufferMapping",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              303, nullptr);
                }
                field_24 = lockType_00;
                pcVar2 = ___glewMapBufferRange;
                uVar1 = m_physicalSizeInBytes;
                GetGLMapLockFlags(lockType_00);
                uVar10 = arg2;
                lVar8 = 0;
                field_16 = (*pcVar2)(arg2, 0, uVar1);
                CheckBufferGlError("glMapBufferRange", str);
                if (field_16 == 0) {
                    LogAssert("m_persistentMappedPointer",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              307, nullptr);
                }
            } else {
                GetGLMapLockFlags(lockType_00);
                uVar10 = arg2;
                lVar8 = (*pcVar2)(arg2, arg6, arg7);
                CheckBufferGlError("glMapBufferRange", str);
            }
            (*___glewBindBuffer)(uVar10, 0);
            CheckBufferGlError("glBindBuffer", str);
        } else {
            lVar8 = 0;
        }
        if (field_16 != 0) {
            if ((((lockType_00 != 7) && (lockType_00 != 1)) || (field_24 != 7)) && (field_24 != 8)) {
                LogAssert("((lockType == LOCK_TYPE_READ || lockType == LOCK_TYPE_READ_PERSISTENT) && "
                          "m_persistentMappedLockType == LOCK_TYPE_READ_PERSISTENT) || m_persistentMappedLockType == "
                          "LOCK_TYPE_WRITE_PERSISTENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          335, nullptr);
            }
            lVar8 = (unsigned long)arg6 + field_16;
        }
        return lVar8;
    }

    // 0x100c140e0
    unsigned long BufferInterface::UnmapBuffer(const char* str, unsigned int arg2) {
        unsigned int uVar1;
        uint8_t bVar4;
        uint32_t uVar5;
        RenderDevice* pRVar6;
        unsigned long uVar7;
        BufferInterface* local_f8;
        unsigned int local_f0;
        char* local_e8;
        Logger* local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        uint8_t* this_00 = &field_48;
        if (!(this_00->operator_cast_to_bool())) {
            LogAssert("m_mapped == true",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      344, nullptr);
        }
        if (field_32 == 0) {
            LogAssert("m_lastMapSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      345, nullptr);
        }
        if (!(IsCreated())) {
            LogAssert("IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      346, nullptr);
        }
        *this_00 = false;
        RenderContext* this_01 = (RenderContext*)(unsigned long)arg2;
        if (UseDefaultVAO(arg2)) {
            pRVar6 = (RenderDevice*)this_01->Instance();
            this_01 = pRVar6->GetCurrentThreadRenderContext();
            this_01->SetDefaultVAO();
        }
        void* pcVar2 = ___glewBindBuffer;
        if (field_16 == 0) {
            uVar5 = GetNativeBufferInternal();
            (*pcVar2)(arg2, uVar5);
            CheckBufferGlError("glBindBuffer", str);
            uVar5 = (*___glewUnmapBuffer)(arg2);
            CheckBufferGlError("glUnmapBuffer", str);
            if ((char)uVar5 == '\0') {
                local_e0 = logger::default_logger();
                uVar1 = m_sizeInBytes;
                bVar4 = IsPermanent();
                local_e0->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              379, "%s store corrupted on Unmap (size: %u, permanent: %i)", str, uVar1,
                              (unsigned int)bVar4);
            }
            (*___glewBindBuffer)(arg2, 0);
            CheckBufferGlError("glBindBuffer", str);
            uVar7 = (unsigned long)(((uint32_t)((int32_t)((unsigned int)uVar5 >> 8)) << 8) |
                                    (uint8_t)((char)uVar5 != '\0'));
        } else {
            uVar7 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
            if (field_24 == 8) {
                pRVar6 = (RenderDevice*)this_01->Instance();
                local_f8 = this;
                local_f0 = arg2;
                local_e8 = str;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BufferInterface::UnmapBuffer(char const*, unsigned int)::__0, void>(local_d8, (__0*)&local_f8);
                pRVar6->RunOnRenderThread(*local_d8);
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x100c14360
    void BufferInterface::UpdateBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                       unsigned int arg5, const void* arg6, UpdateType updateType) {
        uint8_t bVar4;
        unsigned char* arg1;
        uint8_t bVar10;
        uint32_t in_register_00000084;
        LockType lockType;
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL> local_180;
        uint8_t local_150[80];
        UpdateType local_100;
        AutoSingleton<ShaderThreadPoolSingleton> local_e0;
        void* local_d8[20];

        unsigned long local_f0 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        int iVar5 = GetNativeBufferInternal();
        if (iVar5 == 0) {
            LogAssert("GetNativeBufferInternal()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      389, nullptr);
        }
        if (arg6 == nullptr) {
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      390, nullptr);
        }
        if (m_physicalSizeInBytes < (int)local_f0 + arg5) {
            LogAssert("byteOffset + dataSize <= m_physicalSizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      391, nullptr);
        }
        bool cVar3 = IsDynamic();
        if (!cVar3) {
            LogAssert("IsDynamic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      392, nullptr);
        }
        auto pRVar7 = Instance();
        iVar5 = pRVar7->GetReadyState();
        if (iVar5 != 0) {
            LogAssert("RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      393, nullptr);
        }
        pRVar7 = (RenderDevice*)pRVar7->Instance();
        auto pRVar8 = pRVar7->GetCurrentThreadRenderContext();
        cVar3 = pRVar8->IsLocked();
        if (!cVar3) {
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      394, nullptr);
        }
        IsPermanent();
        long lVar9 = ((MapArea*)&local_e0->Instance())->GetOrigin();
        pRVar7 = (RenderDevice*)(unsigned long)updateType;
        cVar3 = IsUpdateTypeCurrentThread(updateType);
        unsigned int uVar2 = arg2;
        if (!cVar3) {
            pRVar7 = (RenderDevice*)pRVar7->Instance();
            cVar3 = pRVar7->ShouldDefer();
            if (cVar3) {
                local_180 = WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>(arg6, (unsigned long)arg5, true);
                pRVar7 = (RenderDevice*)&local_180->Instance();
                local_150._8_8_ = str;
                local_150._16_4_ = arg2;
                local_150._20_4_ = arg3;
                local_150._24_4_ = (uint32_t)local_f0;
                local_150._0_8_ = this;
                local_150._28_4_ = arg5;
                new ((local_150 + 32)) WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>(local_180);
                local_100 = updateType;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                  void const*, UpdateType)::__1,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8,
                          (__1*)local_150);
                pRVar7->RunOnRenderThread(*local_d8);
                UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                             UpdateType)::$_1::~__1((__1*)local_150);
                goto LAB_100c1488e;
            }
        }
        pRVar7 = (RenderDevice*)pRVar7->Instance();
        cVar3 = pRVar7->IsRenderThread();
        if ((!cVar3) && (cVar3 = IsUpdateTypeCurrentThread(updateType), !cVar3)) {
            LogAssert("RenderDevice::Instance().IsRenderThread() || IsUpdateTypeCurrentThread(updateType)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      414, nullptr);
        }
        Singleton<RenderDevice>* this_05 = (Singleton<RenderDevice>*)(unsigned long)uVar2;
        cVar3 = UseDefaultVAO(uVar2);
        if (cVar3) {
            pRVar7 = (RenderDevice*)this_05->Instance();
            pRVar8 = pRVar7->GetCurrentThreadRenderContext();
            pRVar8->SetDefaultVAO();
        }
        if (*(char*)(lVar9 + 181) == '\0') {
            bVar10 = 0;
            cVar3 = *(char*)(lVar9 + 180);
        } else {
            bVar10 = 1;
            if (field_16 == 0) {
                bVar10 = (m_creationFlags & 2) >> 1;
            }
            cVar3 = *(char*)(lVar9 + 180);
        }
        if ((cVar3) && (bVar4 = IsRangeBufferMappingFast(), (bVar4 | bVar10) == 1)) {
            lockType = 8;
            if (bVar10 == 0) {
                if (5 < updateType) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "buffers/OGL/BufferInterface_OGL.cpp",
                                    443, nullptr);
                }
                lockType = *(LockType*)(&DAT_100d99818 + (long)(int)updateType * 4);
            }
            arg1 = (unsigned char*)MapBuffer(str, arg2, arg3, arg3, lockType, (unsigned int)local_f0, arg5, 0);
            new (local_d8) ResourceDataT(arg1, 0, 0, false);
            if (local_d8[0] != nullptr) {
                _memcpy(local_d8[0], arg6, (unsigned long)arg5);
            }
            bVar10 = UnmapBuffer(str, arg2);
            if ((bVar10 ^ 1) == 0 && local_d8[0] != nullptr) {
                goto LAB_100c1488e;
            }
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      459, "Failed to map buffer (%s)", str);
            ForceNoRecycling();
            if ((bVar10 ^ 1) == 0 && local_d8[0] != nullptr)
                goto LAB_100c1488e;
        }
        void* pcVar1 = ___glewBindBuffer;
        uint32_t uVar6 = GetNativeBufferInternal();
        uVar2 = arg2;
        (*pcVar1)(arg2, uVar6);
        CheckBufferGlError("glBindBuffer", str);
        if (updateType == 2) {
            if ((int)local_f0 != 0) {
                LogAssert(
                    "byteOffset == 0",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                    "BufferInterface_OGL.cpp",
                    472,
                    "Orphaning a buffer but not updating it from offset 0 - this will likely result in corruption");
            }
            (*___glewBufferData)(uVar2, m_physicalSizeInBytes, 0, arg3);
            CheckBufferGlError("glBufferData", str);
        }
        (*___glewBufferSubData)(uVar2, local_f0 & 4294967295, (unsigned long)arg5, arg6);
        CheckBufferGlError("glBufferSubData", str);
        (*___glewBindBuffer)(uVar2, 0);
        CheckBufferGlError("glBindBuffer", str);
    LAB_100c1488e:
    }

} // namespace jag::render
