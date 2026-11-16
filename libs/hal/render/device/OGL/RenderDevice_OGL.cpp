// libs/hal/render/device/OGL/RenderDevice_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/device/RenderDevice.h"

namespace jag::render {
    // 0x100bdc800
    RenderDevice::RenderDevice() : Singleton<RenderDevice>(), eastl::string() {
        allocator* allocator;

        uint8_t* local_a8 = &field_32;
        new (&field_64) eastl::string();
        m_gPUVendor = 4294967295;
        uint8_t* local_a0 = &field_64;
        new (&field_104) RenderDeviceCaps();
        field_448.unique_ptr<true, void>();
        uint8_t* local_88 = &field_456;
        uint8_t* local_98 = &field_104;
        uint8_t* local_90 = &field_448;
        new (local_88) thread_specific_ptr<RenderContext>();
        new (&field_464) MemoryProfileInfo();
        new (&field_480) MemoryProfileInfo();
        uint8_t* local_40 = &field_496;
        new (local_40) std::array<DeviceCallbacks, 4ul>();
        uint8_t* local_80 = &field_848;
        new (local_80) std::mutex();
        uint8_t* local_78 = &field_912;
        allocator = &local_b0;
        new (local_78) eastl::hash_set<RenderDeviceCallback*>(*allocator);
        uint8_t arg1 = (uint8_t)allocator;
        vector<RenderDeviceOnEndFrame*>* local_38 = (vector<RenderDeviceOnEndFrame*>*)&field_968;
        new (local_38) eastl::vector<RenderDeviceOnEndFrame*>();
        uint8_t* local_70 = &field_1000;
        new (local_70) eastl::vector<RenderDeviceOnEndFrame*>();
        uint8_t* local_68 = &field_1032;
        new (local_68) std::recursive_mutex();
        field_1096 = 0;
        RenderDeviceSecondaryContext** local_60 = &field_1104;
        new (local_60) eastl::vector_set<RenderDeviceSecondaryContext*, eastl::less<RenderDeviceSecondaryContext*>,
                                         eastl::allocator, eastl::vector<RenderDeviceSecondaryContext*>>();
        field_1144 = 0;
        new (&field_1145) std::atomic<bool>((bool)arg1);
        m_totalAllocatedGPUMemory = 0;
        uint8_t* local_58 = &field_1160;
        new (local_58) GPUMemoryAllocatorZoneMonitor();
        uint8_t* local_50 = &field_60269944;
        new (local_50)
            eastl::fixed_map<eastl::fixed_string<char, 512>,
                             eastl::fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul>, 64ul>();
        uint8_t* local_48 = &field_62199760;
        new (local_48)
            eastl::fixed_map<eastl::fixed_string<char, 512>,
                             eastl::fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul>*, 64ul>();
        new (&field_62238336) std::mutex();
        long lVar1 = std::array<DeviceCallbacks, 4ul>::begin();
        long lVar2 = std::array<DeviceCallbacks, 4ul>::end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 88) {
            ((lVar1 + 56))->reserve(16);
        }
        local_38->reserve(128);
    }

    // 0x100bdcce0
    void RenderDevice::OnRenderContextInit(const ImmediateRenderContext& immediateRenderContext,
                                           std::function<void(RenderDeviceCaps const&)> callback) {
        LogLevel logLevel;
        char* pcVar5;
        function<void_(RenderDeviceCaps const&)>* local_78;
        function<void(RenderDeviceCaps const&)> local_68[48];
        long local_38;

        RenderDevice* this_01 = this;
        if (IsRenderContextInit()) {
            LogAssert("!IsRenderContextInit()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                      "RenderDevice_OGL.cpp",
                      53,
                      "Only the first render context to be initialised should call this (check IsRenderContextInit)");
        }
        this_01->Create<>();
        GetGLString<eastl::string>((eastl::string*)this, 7937);
        uint8_t* str = &field_32;
        GetGLString<eastl::string>((eastl::string*)str, 7936);
        GetGLString<eastl::string>((eastl::string*)&field_64, 7938);
        long lVar4 = str->find("Qualcomm", 0);
        local_78 = callback;
        if (lVar4 == -1) {
            lVar4 = str->find("ARM", 0);
            if (lVar4 == -1) {
                lVar4 = str->find("Broadcom", 0);
                if (lVar4 == -1) {
                    lVar4 = str->find("Vivante", 0);
                    if (lVar4 == -1) {
                        lVar4 = str->find("Imagination", 0);
                        if (lVar4 == -1) {
                            lVar4 = str->find("Apple", 0);
                            if (lVar4 == -1) {
                                pcVar5 = (char*)(*str)[0];
                                if (*pcVar5 == 'N') {
                                    m_gPUVendor = 2;
                                } else {
                                    pcVar5 = (char*)(*str)[0];
                                    if (*pcVar5 == 'I') {
                                        m_gPUVendor = 1;
                                    } else {
                                        pcVar5 = (char*)(*str)[0];
                                        if (*pcVar5 == 'A') {
                                            m_gPUVendor = 0;
                                        } else {
                                            m_gPUVendor = 4294967295;
                                        }
                                    }
                                }
                            } else {
                                m_gPUVendor = 9;
                            }
                        } else {
                            m_gPUVendor = 3;
                        }
                    } else {
                        m_gPUVendor = 7;
                    }
                } else {
                    m_gPUVendor = 6;
                }
            } else {
                lVar4 = find("Mali", 0);
                if (lVar4 == -1) {
                    m_gPUVendor = 5;
                } else {
                    m_gPUVendor = 10;
                }
            }
        } else {
            m_gPUVendor = 4;
        }
        int iVar3 = GetUIHeight();
        auto this_00 = logger::default_logger();
        if (iVar3 == -1) {
            pcVar5 = "Unknown GPU vendor";
            logLevel = 3;
            iVar3 = 145;
        } else {
            GetUIHeight();
            pcVar5 = "GPU vendor ID: %i";
            logLevel = 8;
            iVar3 = 141;
        }
        this_00->Log(false, logLevel,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                     "RenderDevice_OGL.cpp",
                     iVar3, pcVar5);
        unsigned int local_6c = GetUIHeight();
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_a0(pcVar5);
        iVar3 = immediateRenderContext.GetGLCoreProfileVerMajor();
        bool arg5 = (bool)immediateRenderContext.GetGLCoreProfileVerMinor();
        lVar4 = immediateRenderContext.second();
        uint8_t bVar1 = *(uint8_t*)(lVar4 + 9);
        new (local_68) std::function<void(RenderDeviceCaps const&)>(*local_78);
        RenderDeviceCaps::Initialise((int)this + 104, *((eastl::string*)(unsigned long)local_6c), (int)&local_a0, iVar3,
                                     arg5, (function<void_(RenderDeviceCaps const&)>*)(unsigned long)bVar1);
        EvaluateDeviceProfiles();
    }

    // 0x100bdd090
    long RenderDevice::GetAvailableGPUMemory() const {
        long lVar3;
        uint64_t local_28;
        uint64_t uStack_20;

        int local_2c = 0;
        if (QueryGLExtension("GL_NVX_gpu_memory_info", field_136) == '\0') {
            if (GetUIHeight() != 0) {
                lVar3 = (long)local_2c;
                goto LAB_100bdd148;
            }
            local_28 = 0;
            uStack_20 = 0;
            _glGetIntegerv(34812, &local_28);
            CheckGlErrorInternal("glGetIntegerv GL_TEXTURE_FREE_MEMORY_ATI",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 177);
            lVar3 = (long)local_2c + (long)(int)local_28;
            local_2c = (int)lVar3;
        } else {
            _glGetIntegerv(36937, &local_2c);
            CheckGlErrorInternal("glGetIntegerv GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 166);
            lVar3 = (long)local_2c;
        }
        lVar3 = lVar3 << 10;
    LAB_100bdd148:
        return lVar3;
    }

    // 0x100bdd170
    long RenderDevice::GetTotalGPUMemory() const {
        uint64_t local_38;
        uint64_t uStack_30;

        int local_3c = 0;
        if (QueryGLExtension("GL_NVX_gpu_memory_info", field_136) != '\0') {
            _glGetIntegerv(36936, &local_3c);
            CheckGlErrorInternal("glGetIntegerv GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 192);
        }
        if (GetUIHeight() == 0) {
            local_38 = 0;
            uStack_30 = 0;
            _glGetIntegerv(34811, &local_38);
            CheckGlErrorInternal("glGetIntegerv GL_VBO_FREE_MEMORY_ATI",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 202);
            local_3c = local_3c + (int)local_38;
            _glGetIntegerv(34812, &local_38);
            CheckGlErrorInternal("glGetIntegerv GL_TEXTURE_FREE_MEMORY_ATI",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 204);
            local_3c = local_3c + (int)local_38;
            _glGetIntegerv(34813, &local_38);
            CheckGlErrorInternal("glGetIntegerv GL_RENDERBUFFER_FREE_MEMORY_ATI",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 206);
            local_3c = local_3c + (int)local_38;
        }
        return (long)local_3c << 10;
    }

    // 0x100bdd2a0
    uint64_t RenderDevice::GetDeviceInfo(eastl::string& str, RenderDeviceInfoType renderDeviceInfoType) const {
        unsigned long in_RAX;
        char* str_00;
        int iVar4;
        unsigned int arg2;

        uint64_t uStack_38 = in_RAX;
        switch (renderDeviceInfoType) {
        case 0:
            str.sprintf("%s %s", "OpenGL", " (CGL)");
            goto switchD_100bdd2c6_default;
        case 1:
        case 4:
            arg2 = 7938;
            break;
        case 2:
            arg2 = 7936;
            break;
        case 3:
            arg2 = 7937;
            break;
        case 5:
            uStack_38 = in_RAX & 4294967295;
            _glGetIntegerv(33309, (long)&uStack_38 + 4);
            CheckGlErrorInternal("glGetIntegerv GL_NUM_EXTENSIONS",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 278);
            if ((long)uStack_38._4_4_ == 0) {
                str.clear();
            } else {
                str.reserve((long)uStack_38._4_4_ * 40);
                if (0 < uStack_38._4_4_) {
                    iVar4 = 0;
                    do {
                        str_00 = (char*)(*___glewGetStringi)(7939, iVar4);
                        CheckGlErrorInternal("glGetStringi GL_EXTENSIONS",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/device/OGL/RenderDevice_OGL.cpp",
                                             284);
                        if (str_00 != nullptr) {
                            if (str.empty() == '\0') {
                                str += ' ';
                            }
                            str += str_00;
                        }
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < uStack_38._4_4_);
                }
            }
        default:
            goto switchD_100bdd2c6_default;
        }
        if (!CopyGlStringToBuffer<eastl::string>(str, arg2)) {
            return 0;
        }
    switchD_100bdd2c6_default:
        return eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::render
