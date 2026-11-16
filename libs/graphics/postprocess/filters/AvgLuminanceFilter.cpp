// libs/graphics/postprocess/filters/AvgLuminanceFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "AvgLuminanceFilter.h"

namespace jag::postprocess {
    // 0x100f37100, 16 bytes, __data; set at startup by ___cxx_global_var_init.3
    HashedString AvgLuminanceFilter::VIEWRT_LUMINANCE_ADAPTED = HashedString("LUMINANCE_ADAPTED");

    // 0x100f37120, 16 bytes, __data; set at startup by ___cxx_global_var_init.6
    HashedString AvgLuminanceFilter::VIEWRT_LUMINANCE_AVERAGE = HashedString("VIEWRT_LUMINANCE_AVERAGE");

    // 0x100f38f10, 16 bytes, __data; set at startup by ___cxx_global_var_init.4
    HashedString AvgLuminanceFilter::VIEWRT_LUMINANCE_ADAPTED_PREVIOUS = HashedString("LUMINANCE_ADAPTED_PREVIOUS");

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AvgLuminanceFilter::~AvgLuminanceFilter();

    // 0x100059250, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1000592b0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100059310, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1003cf2a0: the linker folded this into game::WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    AvgLuminanceFilter::GetShaderOutputFormat() const;

    // 0x1009b4d20, 912 bytes, placed by class name and debug map
    // AvgLuminanceFilter::EnsureRenderTargetsAvailable(graphics::ViewRenderTargets*)
    undefined8 AvgLuminanceFilter::EnsureRenderTargetsAvailable(ViewRenderTargets* param_1) {
        long* plVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        undefined4 uVar15;
        undefined* puVar16;
        bool bVar17;
        bool bVar18;
        char cVar19;
        shared_ptr* this_00;
        undefined7 extraout_var;
        RenderTargets* pRVar20;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar21;
        undefined8* puVar22;
        undefined4* puVar23;
        undefined4* puVar24;
        long lVar25;
        undefined8 uVar26;
        undefined7 extraout_var_00;
        undefined7 uVar27;
        HashedString HVar28;
        HashedString HVar29;
        HashedString HVar30;
        undefined8 in_stack_fffffffffffffec8;
        undefined4 uVar31;
        array<render::Texture::Desc, 2ul> local_120[128];
        undefined1 local_a0[64];
        shared_ptr local_60;
        shared_ptr local_50;
        shared_ptr local_40;

        puVar16 = PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580;
        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
        this_00 = (shared_ptr*)param_1->Get(*(HashedString*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580);
        bVar17 = shared_ptr::operator_cast_to_bool(this_00);
        uVar27 = extraout_var;
        if (!bVar17) {
            bVar17 = true;
            ((local_a0 + 64))
                ->TryCreateRenderTarget(&m_shaderOutputFormat, field_8, "View_AvgLum1x1RT", 1, 1,
                                        CONCAT44(uVar31, 37305));
            bVar18 = ((local_a0 + 64))->operator_cast_to_bool();
            if (bVar18) {
                pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)(local_a0 + 64));
                cVar19 = pRVar20->IsCreated();
                if (cVar19 != '\0') {
                    new (local_a0) render::Texture::Desc();
                    std::array<render::Texture::Desc, 2ul>::array(local_120);
                    pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)(local_a0 + 64));
                    pvVar21 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar20->GetColourTargetTextures();
                    puVar22 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar21,
                                                                                                               0);
                    puVar23 = (undefined4*)(*puVar22)->second();
                    puVar24 = (undefined4*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_120);
                    uVar31 = puVar23[1];
                    uVar2 = puVar23[2];
                    uVar3 = puVar23[3];
                    uVar4 = puVar23[4];
                    uVar5 = puVar23[5];
                    uVar6 = puVar23[6];
                    uVar7 = puVar23[7];
                    uVar8 = puVar23[8];
                    uVar9 = puVar23[9];
                    uVar10 = puVar23[10];
                    uVar11 = puVar23[11];
                    uVar12 = puVar23[12];
                    uVar13 = puVar23[13];
                    uVar14 = puVar23[14];
                    uVar15 = puVar23[15];
                    *puVar24 = *puVar23;
                    puVar24[1] = uVar31;
                    puVar24[2] = uVar2;
                    puVar24[3] = uVar3;
                    puVar24[4] = uVar4;
                    puVar24[5] = uVar5;
                    puVar24[6] = uVar6;
                    puVar24[7] = uVar7;
                    puVar24[8] = uVar8;
                    puVar24[9] = uVar9;
                    puVar24[10] = uVar10;
                    puVar24[11] = uVar11;
                    puVar24[12] = uVar12;
                    puVar24[13] = uVar13;
                    puVar24[14] = uVar14;
                    puVar24[15] = uVar15;
                    local_50.Register(field_8, "View_AdaptedLum0RT", 3553, local_120, 1, local_a0, 0, 1);
                    local_40.Register(field_8, "View_AdaptedLum1RT", 3553, local_120, 1, local_a0, 0, 1);
                    bVar17 = shared_ptr::operator_cast_to_bool(&local_50);
                    if (!bVar17) {
                    LAB_1009b4fe8:
                        uVar26 = logger::default_logger();
                        logger::Logger::Log(uVar26, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/postprocess/filters/AvgLuminanceFilter.cpp",
                                            40, "Failed to create adapted luminance textures for view %p", param_1);
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/postprocess/filters/AvgLuminanceFilter.cpp",
                                        41, (char*)0);
                    }
                    pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)&local_50);
                    cVar19 = pRVar20->HasColourTargets();
                    if ((cVar19 == '\0') || (bVar17 = shared_ptr::operator_cast_to_bool(&local_40), !bVar17))
                        goto LAB_1009b4fe8;
                    pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)&local_40);
                    cVar19 = pRVar20->HasColourTargets();
                    if (cVar19 == '\0')
                        goto LAB_1009b4fe8;
                    pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)(local_a0 + 64));
                    pvVar21 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar20->GetColourTargetTextures();
                    puVar22 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar21,
                                                                                                               0);
                    plVar1 = (long*)*puVar22;
                    lVar25 = pvVar21->Instance();
                    (**(code**)(*plVar1 + 24))(plVar1, lVar25 + 80, 0);
                    pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)&local_50);
                    pvVar21 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar20->GetColourTargetTextures();
                    puVar22 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar21,
                                                                                                               0);
                    plVar1 = (long*)*puVar22;
                    lVar25 = pvVar21->Instance();
                    (**(code**)(*plVar1 + 24))(plVar1, lVar25 + 80, 0);
                    pRVar20 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)&local_40);
                    pvVar21 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar20->GetColourTargetTextures();
                    puVar22 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar21,
                                                                                                               0);
                    plVar1 = (long*)*puVar22;
                    lVar25 = pvVar21->Instance();
                    (**(code**)(*plVar1 + 24))(plVar1, lVar25 + 80, 0);
                    HVar28.field_8 = *(undefined8*)puVar16;
                    HVar28.field_0 = (char*)param_1;
                    graphics::ViewRenderTargets::Set(HVar28, *(shared_ptr**)(puVar16 + 8));
                    HVar29.field_8 = *(undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
                    HVar29.field_0 = (char*)param_1;
                    graphics::ViewRenderTargets::Set(HVar29,
                                                     *(shared_ptr**)(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578 + 8));
                    HVar30.field_8 = *(undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588;
                    HVar30.field_0 = (char*)param_1;
                    graphics::ViewRenderTargets::Set(
                        HVar30, *(shared_ptr**)(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588 + 8));
                    field_28 = 1;
                    bVar17 = false;
                    local_40.~shared_ptr();
                    local_50.~shared_ptr();
                }
            }
            ((local_a0 + 64))->~shared_ptr();
            uVar27 = extraout_var_00;
            if (bVar17) {
                return 0;
            }
        }
        return CONCAT71(uVar27, 1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AvgLuminanceFilter::~AvgLuminanceFilter();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AvgLuminanceFilter::~AvgLuminanceFilter();

} // namespace jag::postprocess
