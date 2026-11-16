// libs/hal/render/device/OGL/RenderDevice_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/device/RenderDevice.h"

namespace jag::render {
    // 0x100bdc800, 784 bytes, base-object constructor, placed by class name and neighbouring functions
    // RenderDevice::RenderDevice()
    void RenderDevice::RenderDevice() {
        array<DeviceCallbacks, 4ul>* this_00;
        long lVar1;
        long lVar2;
        allocator local_b0[8];
        undefined1* local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        undefined1* local_80;
        undefined1* local_78;
        RenderDeviceOnEndFrame** local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        array<DeviceCallbacks, 4ul>* local_40;
        vector<RenderDeviceOnEndFrame*, eastl::allocator>* local_38;

        new (this) Singleton<RenderDevice>();
        new (this) eastl::string();
        new (&field_32) eastl::string();
        local_a8 = &field_32;
        new (&field_64) eastl::string();
        m_gPUVendor = 4294967295;
        local_a0 = &field_64;
        new (&field_104) RenderDeviceCaps();
        std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::unique_ptr<true, void>(
            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)&field_448);
        local_88 = &field_456;
        local_98 = &field_104;
        local_90 = &field_448;
        new (local_88) thread_specific_ptr<RenderContext>();
        new (&field_464) MemoryProfileInfo<GpuMemoryProfile>();
        new (&field_480) MemoryProfileInfo<GpuMemoryProfile>();
        local_40 = (array<DeviceCallbacks, 4ul>*)&field_496;
        std::array<DeviceCallbacks, 4ul>::array(local_40);
        local_80 = &field_848;
        new (local_80) std::mutex();
        eastl::allocator::allocator(local_b0, "EASTL hash_set");
        local_78 = &field_912;
        new (local_78) eastl::hash_set<RenderDeviceCallback*, eastl::hash<RenderDeviceCallback*>,
                                       eastl::equal_to<RenderDeviceCallback*>, eastl::allocator, false>(local_b0);
        local_38 = (vector<RenderDeviceOnEndFrame*, eastl::allocator>*)&field_968;
        eastl::vector<RenderDeviceOnEndFrame*, eastl::allocator>::vector(local_38);
        local_70 = &field_1000;
        new (local_70) eastl::vector<RenderDeviceOnEndFrame*, eastl::allocator>();
        local_68 = &field_1032;
        new (local_68) std::recursive_mutex();
        field_1096 = 0;
        local_60 = &field_1104;
        new (local_60)
            eastl::vector_set<RenderDeviceSecondaryContext*, eastl::less<RenderDeviceSecondaryContext*>,
                              eastl::allocator, eastl::vector<RenderDeviceSecondaryContext*, eastl::allocator>>();
        field_1144 = 0;
        std::atomic<bool>::atomic((bool)((char)this + 'y'));
        m_totalAllocatedGPUMemory = 0;
        local_58 = &field_1160;
        new (local_58) GPUMemoryAllocatorZoneMonitor();
        local_50 = &field_60269944;
        new (local_50) eastl::fixed_map<
            eastl::fixed_string<char, 512, true, eastl::allocator>,
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>,
            64ul, true, eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>();
        local_48 = &field_62199760;
        new (local_48) eastl::fixed_map<
            eastl::fixed_string<char, 512, true, eastl::allocator>,
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>*,
            64ul, true, eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>();
        new (&field_62238336) std::mutex();
        this_00 = local_40;
        lVar1 = std::array<DeviceCallbacks, 4ul>::begin(local_40);
        lVar2 = std::array<DeviceCallbacks, 4ul>::end(this_00);
        for (; lVar1 != lVar2; lVar1 = lVar1 + 88) {
            ((lVar1 + 56))->reserve(16);
        }
        eastl::vector<RenderDeviceOnEndFrame*, eastl::allocator>::reserve(local_38, 128);
    }

    // 0x100bdccd0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // RenderDevice::RenderDevice(): jumps straight to the base-object constructor

    // 0x100bdcce0, 848 bytes, placed by __FILE__ string
    // RenderDevice::OnRenderContextInit(ImmediateRenderContext const&, std::function<void (RenderDeviceCaps const&)>)
    /* RenderDevice::OnRenderContextInit(ImmediateRenderContext const&,
   std::function<void (RenderDeviceCaps const&)>) */

    void RenderDevice::OnRenderContextInit(ImmediateRenderContext* param_1, function* param_3) {
        undefined1* this_00;
        undefined1 uVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        long lVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        RenderDevice* this_01;
        undefined8 uVar9;
        char* pcVar10;
        eastl::string local_a0[32];
        allocator local_80[8];
        function* local_78;
        undefined4 local_6c;
        function<void(RenderDeviceCaps_const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_01 = this;
        cVar2 = IsRenderContextInit(this);
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsRenderContextInit()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                      "RenderDevice_OGL.cpp",
                      53,
                      "Only the first render context to be initialised should call this (check IsRenderContextInit)");
        }
        Singleton<BuiltinStates>::Create<>((Singleton<BuiltinStates>*)this_01);
        GetGLString<eastl::string>((basic_string*)this, 7937);
        this_00 = &field_32;
        GetGLString<eastl::string>((basic_string*)this_00, 7936);
        GetGLString<eastl::string>((basic_string*)&field_64, 7938);
        lVar6 = this_00->find("Qualcomm", 0);
        local_78 = param_3;
        if (lVar6 == -1) {
            lVar6 = this_00->find("ARM", 0);
            if (lVar6 == -1) {
                lVar6 = this_00->find("Broadcom", 0);
                if (lVar6 == -1) {
                    lVar6 = this_00->find("Vivante", 0);
                    if (lVar6 == -1) {
                        lVar6 = this_00->find("Imagination", 0);
                        if (lVar6 == -1) {
                            lVar6 = this_00->find("Apple", 0);
                            if (lVar6 == -1) {
                                pcVar10 = (char*)eastl::string::operator[]((eastl::string*)this_00, 0);
                                if (*pcVar10 == 'N') {
                                    m_gPUVendor = 2;
                                } else {
                                    pcVar10 = (char*)eastl::string::operator[]((eastl::string*)this_00, 0);
                                    if (*pcVar10 == 'I') {
                                        m_gPUVendor = 1;
                                    } else {
                                        pcVar10 = (char*)eastl::string::operator[]((eastl::string*)this_00, 0);
                                        if (*pcVar10 == 'A') {
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
                lVar6 = find("Mali", 0);
                if (lVar6 == -1) {
                    m_gPUVendor = 5;
                } else {
                    m_gPUVendor = 10;
                }
            }
        } else {
            m_gPUVendor = 4;
        }
        iVar3 = GetUIHeight();
        uVar7 = logger::default_logger();
        if (iVar3 == -1) {
            pcVar10 = "Unknown GPU vendor";
            uVar8 = 3;
            uVar9 = 145;
        } else {
            GetUIHeight();
            pcVar10 = "GPU vendor ID: %i";
            uVar8 = 8;
            uVar9 = 141;
        }
        logger::Logger::Log(uVar7, 0, uVar8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "OGL/RenderDevice_OGL.cpp",
                            uVar9, pcVar10);
        local_6c = GetUIHeight();
        pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_80, "EASTL basic_string");
        eastl::string::basic_string(local_a0, pcVar10, local_80);
        uVar4 = param_1->GetGLCoreProfileVerMajor();
        uVar5 = param_1->GetGLCoreProfileVerMinor();
        lVar6 = param_1->second();
        uVar1 = *(undefined1*)(lVar6 + 9);
        std::function<void(RenderDeviceCaps_const&)>::function(local_68, local_78);
        (&field_104, local_6c, local_a0, uVar4, uVar5, uVar1, local_68)->Initialise();
        std::function<void(RenderDeviceCaps_const&)>::~function(local_68);
        eastl::string::~basic_string(local_a0);
        EvaluateDeviceProfiles(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bdd090, 224 bytes, placed by __FILE__ string
    // RenderDevice::GetAvailableGPUMemory() const
    long RenderDevice::GetAvailableGPUMemory() {
        long lVar3;
        int local_2c;
        undefined8 local_28;
        undefined8 uStack_20;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2c = 0;
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
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar3;
    }

    // 0x100bdd170, 304 bytes, placed by __FILE__ string
    // RenderDevice::GetTotalGPUMemory() const
    long RenderDevice::GetTotalGPUMemory() {
        int local_3c;
        undefined8 local_38;
        undefined8 uStack_30;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_3c = 0;
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
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (long)local_3c << 10;
    }

    // 0x100bdd2a0, 384 bytes, placed by __FILE__ string
    // RenderDevice::GetDeviceInfo(eastl::string&, RenderDeviceInfoType) const
    undefined8 RenderDevice::GetDeviceInfo(undefined8 param_1_00, basic_string* param_1, undefined4 param_3) {
        ulong in_RAX;
        char* pcVar4;
        int iVar5;
        uint uVar6;
        undefined8 uStack_38;

        uStack_38 = in_RAX;
        switch (param_3) {
        case 0:
            eastl::string::sprintf((char*)param_1, "%s %s", "OpenGL", " (CGL)");
            goto switchD_100bdd2c6_default;
        case 1:
        case 4:
            uVar6 = 7938;
            break;
        case 2:
            uVar6 = 7936;
            break;
        case 3:
            uVar6 = 7937;
            break;
        case 5:
            uStack_38 = in_RAX & 4294967295;
            _glGetIntegerv(33309, (long)&uStack_38 + 4);
            CheckGlErrorInternal("glGetIntegerv GL_NUM_EXTENSIONS",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDevice_OGL.cpp",
                                 278);
            if ((long)uStack_38._4_4_ == 0) {
                eastl::string::clear();
            } else {
                param_1->reserve((long)uStack_38._4_4_ * 40);
                if (0 < uStack_38._4_4_) {
                    iVar5 = 0;
                    do {
                        pcVar4 = (char*)(*___glewGetStringi)(7939, iVar5);
                        CheckGlErrorInternal("glGetStringi GL_EXTENSIONS",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/device/OGL/RenderDevice_OGL.cpp",
                                             284);
                        if (pcVar4 != (char*)0) {
                            if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::empty() ==
                                '\0') {
                                eastl::string::operator+=((eastl::string*)param_1, ' ');
                            }
                            eastl::string::operator+=((eastl::string*)param_1, pcVar4);
                        }
                        iVar5 = iVar5 + 1;
                    } while (iVar5 < uStack_38._4_4_);
                }
            }
        default:
            goto switchD_100bdd2c6_default;
        }
        if (!CopyGlStringToBuffer<eastl::string>(param_1, uVar6)) {
            return 0;
        }
    switchD_100bdd2c6_default:
        return eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::render
