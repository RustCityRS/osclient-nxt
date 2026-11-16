// libs/hal/render/buffers/OGL/BufferInterface_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/buffers/BufferInterface.h"

namespace jag::render {
    class GPUMemoryTrackingEntry {
    public:
        GPUMemoryTrackingEntry();
        GPUMemoryTrackingEntry* operator=(GPUMemoryTrackingEntry&&);
        ~GPUMemoryTrackingEntry();
        void Register(char const*, unsigned int);
        void Unregister();

        // data members, from how the methods use this: 24 bytes
        GPUMemoryAllocatorZone* field_0; // offset 0
        char* field_8;                   // offset 8
        uint field_16;                   // offset 16
        char _unknown_20[4];
    };

    // 0x100c0df40, 16 bytes, placed by class name and debug map
    // BufferInterface::GetNativeBuffer() const
    uint BufferInterface::GetNativeBuffer() {
        return m_nativeBuffer;
    }

    // 0x100c12f90, 96 bytes, base-object constructor, placed by class name and neighbouring functions
    // BufferInterface::BufferInterface()
    void BufferInterface::BufferInterface() {
        new (this) RenderResource();
        m_nativeBuffer = 0;
        field_16 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
        m_sizeInBytes = 0;
        m_physicalSizeInBytes = 0;
        m_creationFlags = 0;
        field_45 = 0;
        new (&field_48, false) std::atomic<bool>();
        new (field_56) game::EntityHighlightGlobalState::RadialHighlightState();
        field_0 = 0;
    }

    // 0x100c13000, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // BufferInterface::BufferInterface(): jumps straight to the base-object constructor

    // 0x100c13010, 256 bytes, base-object constructor, placed by __FILE__ string
    // BufferInterface::BufferInterface(BufferInterface&&)
    void BufferInterface::BufferInterface(BufferInterface* param_1) {
        undefined3 uVar1;
        bool bVar2;

        new (this) RenderResource(param_1);
        m_nativeBuffer = 0;
        field_16 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
        m_sizeInBytes = 0;
        m_physicalSizeInBytes = 0;
        m_creationFlags = 0;
        field_45 = 0;
        new (&field_48, false) std::atomic<bool>();
        new (field_56) game::EntityHighlightGlobalState::RadialHighlightState();
        m_sizeInBytes = param_1->m_sizeInBytes;
        m_physicalSizeInBytes = param_1->m_physicalSizeInBytes;
        uVar1 = param_1->field_45;
        m_creationFlags = param_1->m_creationFlags;
        field_45 = uVar1;
        bVar2 = (bool)std::__atomic_base<bool, false>::load(&param_1->field_48);
        std::atomic<bool>::operator=((atomic<bool>*)&field_48, bVar2);
        if (m_nativeBuffer != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLBuffer == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      43, (char*)0);
        }
        m_nativeBuffer = param_1->m_nativeBuffer;
        param_1->m_nativeBuffer = 0;
        field_16 = param_1->field_16;
        field_24 = param_1->field_24;
        field_28 = param_1->field_28;
        field_32 = param_1->field_32;
        GPUMemoryTrackingEntry::operator=((GPUMemoryTrackingEntry*)field_56,
                                          (GPUMemoryTrackingEntry*)param_1->field_56);
        UndoMarkAsDead();
    }

    // 0x100c131a0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // BufferInterface::BufferInterface(BufferInterface&&): jumps straight to the base-object constructor

    // 0x100c131b0, 176 bytes, placed by __FILE__ string
    // BufferInterface::operator=(BufferInterface&&)
    /* BufferInterface::TEMPNAMEPLACEHOLDERVALUE(BufferInterface&&) */

    BufferInterface* BufferInterface::operator=(BufferInterface* param_1) {
        undefined3 uVar1;
        bool bVar2;

        RenderResource::operator=((RenderResource*)this, (RenderResource*)param_1);
        m_sizeInBytes = param_1->m_sizeInBytes;
        m_physicalSizeInBytes = param_1->m_physicalSizeInBytes;
        uVar1 = param_1->field_45;
        m_creationFlags = param_1->m_creationFlags;
        field_45 = uVar1;
        bVar2 = (bool)std::__atomic_base<bool, false>::load(&param_1->field_48);
        std::atomic<bool>::operator=((atomic<bool>*)&field_48, bVar2);
        if (m_nativeBuffer != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLBuffer == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      62, (char*)0);
        }
        m_nativeBuffer = param_1->m_nativeBuffer;
        param_1->m_nativeBuffer = 0;
        field_16 = param_1->field_16;
        field_24 = param_1->field_24;
        field_28 = param_1->field_28;
        field_32 = param_1->field_32;
        GPUMemoryTrackingEntry::operator=((GPUMemoryTrackingEntry*)field_56,
                                          (GPUMemoryTrackingEntry*)param_1->field_56);
        UndoMarkAsDead();
        return this;
    }

    // 0x100c13280, 80 bytes, placed by class name and neighbouring functions
    // BufferInterface::UseDefaultVAO(unsigned int)
    bool BufferInterface::UseDefaultVAO(uint param_1) {
        RenderDevice* pRVar3;

        if ((param_1 & 4294967294) == 34962) {
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

    // 0x100c13350, 256 bytes, placed by __FILE__ string
    // BufferInterface::CreateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void const*)
    bool BufferInterface::CreateBuffer(char* param_1, uint param_2, uint param_3, uint param_4, uint param_5,
                                       uint param_6, void* param_7) {
        if (param_5 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sizeInBytes > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      86, "Attempting to create a %s of size 0 bytes", param_1);
        }
        if (m_nativeBuffer != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLBuffer == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      87, "Call Destroy() before calling Create() again");
        }
        field_0 = (param_6 & 8) >> 2 | 1;
        m_nativeBuffer = CreateBufferInternal(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
        m_physicalSizeInBytes = param_5;
        m_sizeInBytes = param_5;
        m_creationFlags = (undefined1)param_6;
        field_45 = param_6._1_3_;
        (field_56, param_1, param_5)->Register();
        UndoMarkAsDead();
        return GetNativeBufferInternal(this) != 0;
    }

    // 0x100c13450, 832 bytes, placed by __FILE__ string
    // BufferInterface::CreateBufferInternal(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void const*)
    int BufferInterface::CreateBufferInternal(char* param_1, uint param_2, uint param_3, uint param_4, uint param_5,
                                              uint param_6, void* param_7) {
        char cVar2;
        RenderDevice* pRVar3;
        RenderContext* pRVar4;
        MapArea* this_00;
        long lVar5;
        undefined8 uVar6;
        Singleton<RenderDevice>* this_01;
        undefined8* puVar7;
        uint uVar8;
        undefined8 in_stack_ffffffffffffffa8;
        undefined4 uVar9;
        char* local_50;
        int local_44;
        int local_40;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[4];

        uVar9 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 32);
        pRVar3 = (RenderDevice*)Instance();
        pRVar4 = (RenderContext*)pRVar3->GetCurrentThreadRenderContext();
        cVar2 = pRVar4->IsLocked();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      106, (char*)0);
        }
        local_38->~AutoSingleton("Buffer \'%s\' Create (size: %u)", param_1, param_5);
        this_01 = (Singleton<RenderDevice>*)(ulong)param_2;
        cVar2 = UseDefaultVAO(param_2);
        if (cVar2 != '\0') {
            pRVar3 = (RenderDevice*)this_01->Instance();
            pRVar4 = (RenderContext*)pRVar3->GetCurrentThreadRenderContext();
            pRVar4->SetDefaultVAO();
        }
        local_40 = 0;
        (*___glewGenBuffers)(1, &local_40);
        CheckBufferGlError(this, "glGenBuffers", param_1);
        if (local_40 == 0) {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/OGL/BufferInterface_OGL.cpp",
                                122, "\nUnable to create %s!", param_1);
            return 0;
        }
        (*___glewBindBuffer)(param_2);
        CheckBufferGlError(this, "glBindBuffer", param_1);
        if ((param_6 & 1) == 0) {
            param_4 = param_3;
        }
        this_00 = (MapArea*)((BufferInterface*)this)->Instance();
        lVar5 = this_00->GetOrigin();
        puVar7 = &___glewBufferData;
        local_50 = "glBufferData";
        if ((*(char*)(lVar5 + 325) == '\0') || (*(char*)(lVar5 + 180) == '\0'))
            goto LAB_100c136d5;
        cVar2 = IsRangeBufferMappingFast();
        if (cVar2 == '\0') {
            puVar7 = &___glewBufferData;
            if ((param_6 & 2) == 0)
                goto LAB_100c136d5;
            if (*(char*)(lVar5 + 181) == '\0') {
                puVar7 = &___glewBufferData;
                goto LAB_100c136d5;
            }
        }
        uVar8 = param_4 - 35041;
        if ((8 < uVar8) || (param_4 = 513, (273U >> (uVar8 & 31) & 1) == 0)) {
            param_4 = -(param_6 & 1) & 258;
        }
        puVar7 = &___glewBufferStorage;
        local_50 = "glBufferStorage";
        if (((param_6 & 2) != 0) && (*(char*)(lVar5 + 181) != '\0')) {
            if ((param_6 & 1) == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("(creationFlags & DYNAMIC_BUFFER)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          150, (char*)0);
            }
            if ((uVar8 < 9) && ((273U >> (uVar8 & 31) & 1) != 0)) {
                param_4 = param_4 | 192;
            } else {
                param_4 = param_4 | 64;
            }
        }
    LAB_100c136d5:
        uVar8 = param_2;
        (*(code*)*puVar7)(param_2, param_5, param_7, param_4);
        CheckBufferGlError(this, local_50, param_1);
        local_44 = 0;
        (*___glewGetBufferParameteriv)(uVar8, 34660, &local_44);
        CheckBufferGlError(this, "glGetBufferParameteriv", param_1);
        if (local_44 < (int)param_5) {
            /* WARNING: Subroutine does not return */
            LogAssert("actualSize >= (int)sizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      168, "Requested %s size %u but got %i", param_1, (ulong)param_5, CONCAT44(uVar9, local_44));
        }
        (*___glewBindBuffer)(uVar8, 0);
        CheckBufferGlError(this, "glBindBuffer", param_1);
        return local_40;
    }

    // 0x100c137e0, 16 bytes, placed by class name and neighbouring functions
    // BufferInterface::GetNativeBufferInternal() const
    uint BufferInterface::GetNativeBufferInternal() {
        return m_nativeBuffer;
    }

    // 0x100c138b0, 80 bytes, placed by __FILE__ string
    // BufferInterface::CheckBufferGlError(char const*, char const*)
    void BufferInterface::CheckBufferGlError(char* param_1, char* param_2) {
        uint uVar1;
        byte bVar2;
        undefined8 in_RAX;
        undefined4 uVar3;

        uVar3 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = m_sizeInBytes;
        bVar2 = IsPermanent(this);
        CheckGlErrorInternal("%s (type: %s, size: %u, permanent: %i)",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                             "OGL/BufferInterface_OGL.cpp",
                             488, param_1, param_2, (ulong)uVar1, CONCAT44(uVar3, (uint)bVar2));
    }

    // 0x100c13900, 256 bytes, placed by __FILE__ string
    // BufferInterface::ReleaseNativeResources(char const*, unsigned int)
    void BufferInterface::ReleaseNativeResources(char* param_1, uint param_2) {
        uint uVar1;
        long lVar2;
        char cVar3;
        RenderDevice* this_00;
        RenderContext* this_01;

        cVar3 = IsPermanent(this);
        if (cVar3 != '\0') {
            cVar3 = IsCreated(this);
            if (cVar3 != '\0') {
                this_00 = (RenderDevice*)((BufferInterface*)this)->Instance();
                this_01 = (RenderContext*)this_00->GetPrimaryRenderContext();
                cVar3 = this_01->IsDeviceResetInProgress();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
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
        cVar3 = IsMapped(this);
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsMapped()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      179, "Destroying %s while mapped", param_1);
        }
        uVar1 = m_nativeBuffer;
        if (uVar1 != 0) {
            field_56->Unregister();
            MarkAsDead();
            m_nativeBuffer = 0;
            lVar2 = field_16;
            field_16 = 0;
            this_thread::IsMainThread();
            ReleaseNativeResourcesInternal(param_1, param_2, uVar1, lVar2 != 0);
        }
        m_sizeInBytes = 0;
        m_physicalSizeInBytes = 0;
    }

    // 0x100c13a20, 64 bytes, placed by neighbouring functions
    // GPUMemoryTrackingEntry::Unregister()
    void GPUMemoryTrackingEntry::Unregister() {
        RenderDevice* this_00;

        if (field_0 != (GPUMemoryAllocatorZone*)0) {
            this_00 = (RenderDevice*)Instance();
            this_00->UnregisterObjectGPUMemory(field_8, field_16, field_0);
            field_0 = (GPUMemoryAllocatorZone*)0;
            field_8 = (char*)0;
            field_16 = 0;
        }
    }

    // 0x100c13a60, 272 bytes, placed by __FILE__ string
    // BufferInterface::ReleaseNativeResourcesInternal(char const*, unsigned int, unsigned int, bool)
    void BufferInterface::ReleaseNativeResourcesInternal(char* param_1, uint param_2, uint param_3, bool param_4) {
        char cVar1;
        RenderDevice* this;
        RenderContext* this_00;
        Singleton<RenderDevice>* this_01;
        uint local_34;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[8];

        if (param_3 != 0) {
            local_34 = param_3;
            local_30->~AutoSingleton("Buffer \'%s\' Destroy", param_1);
            this_01 = (Singleton<RenderDevice>*)(ulong)param_2;
            cVar1 = UseDefaultVAO(param_2);
            if (cVar1 != '\0') {
                this = (RenderDevice*)this_01->Instance();
                this_00 = (RenderContext*)GetCurrentThreadRenderContext();
                this_00->SetDefaultVAO();
            }
            cVar1 = (*___glewIsBuffer)(local_34);
            CheckGlErrorInternal("glIsBuffer %s",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "buffers/OGL/BufferInterface_OGL.cpp",
                                 229, param_1);
            if (cVar1 != '\0') {
                if (param_4) {
                    (*___glewBindBuffer)(param_2, local_34);
                    CheckBufferGlErrorStatic("glBindBuffer", param_1);
                    (*___glewUnmapBuffer)(param_2);
                    CheckBufferGlErrorStatic("glUnmapBuffer", param_1);
                    (*___glewBindBuffer)(param_2, 0);
                    CheckBufferGlErrorStatic("glBindBuffer", param_1);
                }
                (*___glewDeleteBuffers)(1, &local_34);
                CheckBufferGlErrorStatic("glDeleteBuffers", param_1);
            }
        }
    }

    // 0x100c13b70, 48 bytes, placed by __FILE__ string
    // BufferInterface::CheckBufferGlErrorStatic(char const*, char const*)
    void BufferInterface::CheckBufferGlErrorStatic(char* param_1, char* param_2) {
        CheckGlErrorInternal("%s (type: %s)",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                             "OGL/BufferInterface_OGL.cpp",
                             493, param_1, param_2);
    }

    // 0x100c13ba0, 1328 bytes, placed by __FILE__ string
    // BufferInterface::MapBuffer(char const*, unsigned int, unsigned int, unsigned int, LockType, unsigned int, unsigned int, unsigned int)
    long BufferInterface::MapBuffer(BufferInterface* param_1, char* param_2, uint param_3, undefined4 param_4,
                                    undefined4 param_5, int param_6, uint param_7, int param_8) {
        uint uVar1;
        code* pcVar2;
        char cVar3;
        undefined1 uVar5;
        int iVar6;
        undefined4 uVar7;
        RenderDevice* pRVar8;
        RenderContext* pRVar9;
        MapArea* this;
        long lVar10;
        uint uVar12;
        BufferInterface* this_00;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[4];

        if (param_6 != 1) {
            if (param_6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("lockType != LOCK_TYPE_INVALID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          245, (char*)0);
            }
            cVar3 = IsDynamic(param_1);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("lockType == LOCK_TYPE_READ || IsDynamic()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          246, "Attempting to write to or persistently map a static buffer");
            }
        }
        if ((&param_1->field_48)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_mapped == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      247, (char*)0);
        }
        if (param_1->m_sizeInBytes < param_7) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset <= m_sizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      248, (char*)0);
        }
        this_00 = param_1;
        cVar3 = IsCreated(param_1);
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      249, (char*)0);
        }
        pRVar8 = (RenderDevice*)this_00->Instance();
        iVar6 = pRVar8->GetReadyState();
        if (iVar6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      250, (char*)0);
        }
        pRVar8 = (RenderDevice*)pRVar8->Instance();
        pRVar9 = (RenderContext*)pRVar8->GetCurrentThreadRenderContext();
        cVar3 = pRVar9->IsLocked();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      251, (char*)0);
        }
        pRVar9 = (RenderContext*)(ulong)param_3;
        cVar3 = UseDefaultVAO(param_3);
        if (cVar3 != '\0') {
            pRVar8 = (RenderDevice*)pRVar9->Instance();
            pRVar9 = (RenderContext*)pRVar8->GetCurrentThreadRenderContext();
            pRVar9->SetDefaultVAO();
        }
        if (param_8 == 0) {
            param_8 = param_1->m_sizeInBytes - param_7;
        }
        if (param_1->m_physicalSizeInBytes < param_8 + param_7) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset + size <= m_physicalSizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      263, (char*)0);
        }
        if ((param_6 == 4) && (param_7 != 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      267,
                      "Orphaning a buffer but not mapping it from offset 0 - this will likely result in corruption");
        }
        this = (MapArea*)pRVar9->Instance();
        lVar10 = GetOrigin();
        if (*(char*)(lVar10 + 181) == '\0') {
            iVar6 = 6;
            if ((param_6 != 8) && (iVar6 = 1, param_6 != 7)) {
                iVar6 = param_6;
            }
        } else {
            iVar6 = param_6;
        }
        uVar5 = IsPermanent(param_1);
        local_38->~AutoSingleton("%s Map (size: %u, permanent: %i)", param_2, param_8, uVar5);
        std::atomic<bool>::operator=((atomic<bool>*)&param_1->field_48, true);
        param_1->field_28 = param_7;
        param_1->field_32 = param_8;
        pcVar2 = ___glewBindBuffer;
        uVar12 = iVar6 - 7;
        if ((uVar12 < 2) && ((param_1->m_creationFlags & 2) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!isPersistentLockType || (m_creationFlags & MAP_PERSISTENT_BUFFER)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      291, (char*)0);
        }
        if (param_1->field_16 == 0) {
            uVar7 = GetNativeBufferInternal(param_1);
            (*pcVar2)(param_3, uVar7);
            CheckBufferGlError(param_1, "glBindBuffer", param_2);
            pcVar2 = ___glewMapBufferRange;
            if (*(char*)(lVar10 + 180) == '\0') {
                if (uVar12 < 2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!isPersistentLockType",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              316, (char*)0);
                }
                if (*(char*)(lVar10 + 179) == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("deviceCaps.m_BufferMapping",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              317, (char*)0);
                }
                if (iVar6 == 4) {
                    cVar3 = IsDynamic(param_1);
                    if (cVar3 != '\0') {
                        param_4 = param_5;
                    }
                    (*___glewBufferData)(param_3, param_1->m_physicalSizeInBytes, 0, param_4);
                    CheckBufferGlError(param_1, "glBufferData", param_2);
                }
                pcVar2 = ___glewMapBuffer;
                uVar7 = GetGLMapAccessFlags(iVar6);
                uVar12 = param_3;
                lVar10 = (*pcVar2)(param_3, uVar7);
                lVar10 = (ulong)param_7 + lVar10;
            } else if (uVar12 < 2) {
                if (*(char*)(lVar10 + 181) == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("deviceCaps.m_PersistentBufferMapping",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              303, (char*)0);
                }
                param_1->field_24 = iVar6;
                pcVar2 = ___glewMapBufferRange;
                uVar1 = param_1->m_physicalSizeInBytes;
                GetGLMapLockFlags(iVar6);
                uVar12 = param_3;
                lVar10 = 0;
                param_1->field_16 = (*pcVar2)(param_3, 0, uVar1);
                CheckBufferGlError(param_1, "glMapBufferRange", param_2);
                if (param_1->field_16 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_persistentMappedPointer",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "buffers/OGL/BufferInterface_OGL.cpp",
                              307, (char*)0);
                }
            } else {
                GetGLMapLockFlags(iVar6);
                uVar12 = param_3;
                lVar10 = (*pcVar2)(param_3, param_7, param_8);
                CheckBufferGlError(param_1, "glMapBufferRange", param_2);
            }
            (*___glewBindBuffer)(uVar12, 0);
            CheckBufferGlError(param_1, "glBindBuffer", param_2);
        } else {
            lVar10 = 0;
        }
        if (param_1->field_16 != 0) {
            if ((((iVar6 != 7) && (iVar6 != 1)) || (param_1->field_24 != 7)) && (param_1->field_24 != 8)) {
                /* WARNING: Subroutine does not return */
                LogAssert("((lockType == LOCK_TYPE_READ || lockType == LOCK_TYPE_READ_PERSISTENT) && "
                          "m_persistentMappedLockType == LOCK_TYPE_READ_PERSISTENT) || m_persistentMappedLockType == "
                          "LOCK_TYPE_WRITE_PERSISTENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/BufferInterface_OGL.cpp",
                          335, (char*)0);
            }
            lVar10 = (ulong)param_7 + param_1->field_16;
        }
        return lVar10;
    }

    // 0x100c140e0, 592 bytes, placed by __FILE__ string
    // BufferInterface::UnmapBuffer(char const*, unsigned int)
    ulong BufferInterface::UnmapBuffer(char* param_1, uint param_2) {
        undefined1* this_00;
        uint uVar1;
        code* pcVar2;
        char cVar4;
        undefined1 uVar5;
        undefined4 uVar6;
        RenderDevice* pRVar7;
        RenderContext* this_01;
        ulong uVar8;
        __0 local_f8;
        undefined8 local_e0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_48;
        if (!this_00->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_mapped == true",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      344, (char*)0);
        }
        if (field_32 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_lastMapSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      345, (char*)0);
        }
        cVar4 = IsCreated(this);
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      346, (char*)0);
        }
        std::atomic<bool>::operator=((atomic<bool>*)this_00, false);
        this_01 = (RenderContext*)(ulong)param_2;
        cVar4 = UseDefaultVAO(param_2);
        if (cVar4 != '\0') {
            pRVar7 = (RenderDevice*)this_01->Instance();
            this_01 = (RenderContext*)pRVar7->GetCurrentThreadRenderContext();
            this_01->SetDefaultVAO();
        }
        pcVar2 = ___glewBindBuffer;
        if (field_16 == 0) {
            uVar6 = GetNativeBufferInternal(this);
            (*pcVar2)(param_2, uVar6);
            CheckBufferGlError(this, "glBindBuffer", param_1);
            uVar6 = (*___glewUnmapBuffer)(param_2);
            CheckBufferGlError(this, "glUnmapBuffer", param_1);
            if ((char)uVar6 == '\0') {
                local_e0 = logger::default_logger();
                uVar1 = m_sizeInBytes;
                uVar5 = IsPermanent(this);
                logger::Logger::Log(local_e0, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "buffers/OGL/BufferInterface_OGL.cpp",
                                    379, "%s store corrupted on Unmap (size: %u, permanent: %i)", param_1, uVar1,
                                    uVar5);
            }
            (*___glewBindBuffer)(param_2, 0);
            CheckBufferGlError(this, "glBindBuffer", param_1);
            uVar8 = (ulong)CONCAT31((int3)((uint)uVar6 >> 8), (char)uVar6 != '\0');
        } else {
            uVar8 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
            if (field_24 == 8) {
                pRVar7 = (RenderDevice*)this_01->Instance();
                local_f8.field_0 = this;
                local_f8.field_8 = param_2;
                local_f8.field_16 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BufferInterface::UnmapBuffer(char const*, unsigned int)::__0, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f8);
                pRVar7->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar8 & 4294967295;
    }

    // 0x100c14360, 1472 bytes, placed by __FILE__ string
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)
    void BufferInterface::UpdateBuffer(char* param_1, uint param_2, undefined4 param_3, ulong param_5_00, uint param_5,
                                       uchar* param_6, uint param_8) {
        code* pcVar1;
        uint uVar3;
        char cVar4;
        undefined1 uVar5;
        byte bVar6;
        int iVar7;
        undefined4 uVar8;
        RenderDevice* pRVar9;
        RenderContext* pRVar10;
        MapArea* this_00;
        long lVar11;
        uchar* puVar12;
        undefined8 uVar13;
        byte bVar14;
        AutoSingleton<ShaderThreadPoolSingleton>* this_02;
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>* this_03;
        Singleton<RenderDevice>* this_04;
        undefined4 uVar15;
        undefined8 in_stack_fffffffffffffe68;
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL> local_180[48];
        undefined1 local_150[80];
        uint local_100;
        AutoSingleton<ShaderThreadPoolSingleton> local_e0[4];
        function local_d8;
        long local_38;

        uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar7 = GetNativeBufferInternal(this);
        if (iVar7 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetNativeBufferInternal()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      389, (char*)0);
        }
        if (param_6 == (uchar*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      390, (char*)0);
        }
        if (m_physicalSizeInBytes < (int)param_5_00 + param_5) {
            /* WARNING: Subroutine does not return */
            LogAssert("byteOffset + dataSize <= m_physicalSizeInBytes",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      391, (char*)0);
        }
        cVar4 = IsDynamic(this);
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsDynamic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      392, (char*)0);
        }
        pRVar9 = (RenderDevice*)((BufferInterface*)this)->Instance();
        iVar7 = pRVar9->GetReadyState();
        if (iVar7 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      393, (char*)0);
        }
        pRVar9 = (RenderDevice*)pRVar9->Instance();
        pRVar10 = (RenderContext*)pRVar9->GetCurrentThreadRenderContext();
        cVar4 = pRVar10->IsLocked();
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      394, (char*)0);
        }
        uVar5 = IsPermanent(this);
        this_02 = local_e0;
        this_02->~AutoSingleton("%s Update (size: %u, permanent: %i, updateType: %i)", param_1, param_5, uVar5,
                                param_8);
        this_00 = (MapArea*)this_02->Instance();
        lVar11 = this_00->GetOrigin();
        pRVar9 = (RenderDevice*)(ulong)param_8;
        cVar4 = IsUpdateTypeCurrentThread();
        uVar3 = param_2;
        if (cVar4 == '\0') {
            pRVar9 = (RenderDevice*)pRVar9->Instance();
            cVar4 = pRVar9->ShouldDefer();
            if (cVar4 != '\0') {
                this_03 = local_180;
                WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(this_03, param_6,
                                                                                            (ulong)param_5, true);
                pRVar9 = (RenderDevice*)this_03->Instance();
                local_150._8_8_ = param_1;
                local_150._16_4_ = param_2;
                local_150._20_4_ = param_3;
                local_150._24_4_ = SUB84(param_5_00, 0);
                local_150._0_8_ = this;
                local_150._28_4_ = param_5;
                new ((local_150 + 32)) WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>(local_180);
                local_100 = param_8;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                  void_const*, UpdateType)::__1,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                          (__1*)local_150);
                pRVar9->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void_const*,
                             UpdateType)::$_1::~__1((__1*)local_150);
                local_180->~WrapArrayValueCopy();
                goto LAB_100c1488e;
            }
        }
        pRVar9 = (RenderDevice*)pRVar9->Instance();
        cVar4 = pRVar9->IsRenderThread();
        if ((cVar4 == '\0') && (cVar4 = IsUpdateTypeCurrentThread(param_8), cVar4 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread() || IsUpdateTypeCurrentThread(updateType)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterface_OGL.cpp",
                      414, (char*)0);
        }
        this_04 = (Singleton<RenderDevice>*)(ulong)uVar3;
        cVar4 = UseDefaultVAO(uVar3);
        if (cVar4 != '\0') {
            pRVar9 = (RenderDevice*)this_04->Instance();
            pRVar10 = (RenderContext*)pRVar9->GetCurrentThreadRenderContext();
            pRVar10->SetDefaultVAO();
        }
        if (*(char*)(lVar11 + 181) == '\0') {
            bVar14 = 0;
            cVar4 = *(char*)(lVar11 + 180);
        } else {
            bVar14 = 1;
            if (field_16 == 0) {
                bVar14 = (m_creationFlags & 2) >> 1;
            }
            cVar4 = *(char*)(lVar11 + 180);
        }
        if ((cVar4 != '\0') && (bVar6 = IsRangeBufferMappingFast(), (bVar6 | bVar14) == 1)) {
            uVar15 = 8;
            if (bVar14 == 0) {
                if (5 < param_8) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "buffers/OGL/BufferInterface_OGL.cpp",
                                    443, (char*)0);
                }
                uVar15 = *(undefined4*)(&DAT_100d99818 + (long)(int)param_8 * 4);
            }
            puVar12 = (uchar*)MapBuffer(this, param_1, param_2, param_3, param_3, uVar15,
                                        CONCAT44(uVar8, (int)param_5_00), param_5, 0);
            new (&local_d8) ResourceDataT<unsigned char const>(puVar12, 0, 0, false);
            if ((void*)local_d8.field_0 != (void*)0) {
                _memcpy((void*)local_d8.field_0, param_6, (ulong)param_5);
            }
            bVar14 = UnmapBuffer(this, param_1, param_2);
            if ((bVar14 ^ 1) == 0 && (void*)local_d8.field_0 != (void*)0) {
                local_d8.~ResourceDataT();
                goto LAB_100c1488e;
            }
            uVar13 = logger::default_logger();
            logger::Logger::Log(uVar13, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "buffers/OGL/BufferInterface_OGL.cpp",
                                459, "Failed to map buffer (%s)", param_1);
            ForceNoRecycling(this);
            local_d8.~ResourceDataT();
            if ((bVar14 ^ 1) == 0 && (void*)local_d8.field_0 != (void*)0)
                goto LAB_100c1488e;
        }
        pcVar1 = ___glewBindBuffer;
        uVar8 = GetNativeBufferInternal(this);
        uVar3 = param_2;
        (*pcVar1)(param_2, uVar8);
        CheckBufferGlError(this, "glBindBuffer", param_1);
        if (param_8 == 2) {
            if ((int)param_5_00 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "byteOffset == 0",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                    "BufferInterface_OGL.cpp",
                    472,
                    "Orphaning a buffer but not updating it from offset 0 - this will likely result in corruption");
            }
            (*___glewBufferData)(uVar3, m_physicalSizeInBytes, 0, param_3);
            CheckBufferGlError(this, "glBufferData", param_1);
        }
        (*___glewBufferSubData)(uVar3, param_5_00 & 4294967295, param_5, param_6);
        CheckBufferGlError(this, "glBufferSubData", param_1);
        (*___glewBindBuffer)(uVar3, 0);
        CheckBufferGlError(this, "glBindBuffer", param_1);
    LAB_100c1488e:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c14980, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, UpdateType)::$_1::~$_1(): jumps straight to the base-object destructor

} // namespace jag::render
