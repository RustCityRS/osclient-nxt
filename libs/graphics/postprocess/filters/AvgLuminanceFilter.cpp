// libs/graphics/postprocess/filters/AvgLuminanceFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "AvgLuminanceFilter.h"

namespace jag::postprocess {
    // 0x100f37100, set at startup by ___cxx_global_var_init.3
    HashedString AvgLuminanceFilter::VIEWRT_LUMINANCE_ADAPTED = HashedString("LUMINANCE_ADAPTED");

    // 0x100f37120, set at startup by ___cxx_global_var_init.6
    HashedString AvgLuminanceFilter::VIEWRT_LUMINANCE_AVERAGE = HashedString("VIEWRT_LUMINANCE_AVERAGE");

    // 0x100f38f10, set at startup by ___cxx_global_var_init.4
    HashedString AvgLuminanceFilter::VIEWRT_LUMINANCE_ADAPTED_PREVIOUS = HashedString("LUMINANCE_ADAPTED_PREVIOUS");

    // 0x100009e70: AvgLuminanceFilter::~AvgLuminanceFilter() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1003cf2a0: AvgLuminanceFilter::GetShaderOutputFormat() const has the same machine code as game::WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x1009b4d20
    uint64_t AvgLuminanceFilter::EnsureRenderTargetsAvailable(graphics::ViewRenderTargets* viewRenderTargets) {
        long* plVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        bool bVar9;
        RenderTargets* pRVar12;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar13;
        uint64_t* puVar14;
        uint64_t* puVar15;
        long lVar16;
        array<render::Texture::Desc, 2ul> local_120;
        uint8_t local_a0[64];
        shared_ptr local_50;
        shared_ptr local_40;

        uint8_t* puVar10 = PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580;
        bool cVar11 =
            (viewRenderTargets->Get(*(HashedString*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580))->operator_cast_to_bool();
        if (!cVar11) {
            bVar9 = true;
            luminance::TryCreateRenderTarget(*((local_a0 + 64)), m_shaderOutputFormat, field_8, 14779914, 1, 1);
            cVar11 = ((local_a0 + 64))->operator_cast_to_bool();
            if (cVar11) {
                pRVar12 = (RenderTargets*)(*((local_a0 + 64))).operator->();
                cVar11 = pRVar12->IsCreated();
                if (cVar11) {
                    new (local_a0) render::Texture::Desc();
                    local_120 = std::array<render::Texture::Desc, 2ul>();
                    pRVar12 = (RenderTargets*)(*((local_a0 + 64))).operator->();
                    pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar12->GetColourTargetTextures();
                    puVar14 = (uint64_t*)(*pvVar13)[0];
                    puVar14 = (uint64_t*)(*puVar14)->second();
                    puVar15 = &local_120[0];
                    uVar2 = puVar14[1];
                    uVar3 = puVar14[2];
                    uVar4 = puVar14[3];
                    uVar5 = puVar14[4];
                    uVar6 = puVar14[5];
                    uVar7 = puVar14[6];
                    uVar8 = puVar14[7];
                    *puVar15 = *puVar14;
                    puVar15[1] = uVar2;
                    puVar15[2] = uVar3;
                    puVar15[3] = uVar4;
                    puVar15[4] = uVar5;
                    puVar15[5] = uVar6;
                    puVar15[6] = uVar7;
                    puVar15[7] = uVar8;
                    local_50.Register(field_8, 14779931, *3553, (int)&local_120, DAT_00000001, (unsigned int)local_a0,
                                      false);
                    local_40.Register(field_8, 14779950, *3553, (int)&local_120, DAT_00000001, (unsigned int)local_a0,
                                      false);
                    cVar11 = shared_ptr::operator_cast_to_bool(&local_50);
                    if (!cVar11) {
                    LAB_1009b4fe8:
                        (logger::default_logger())
                            ->Log(false, 2,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/filters/AvgLuminanceFilter.cpp",
                                  40, "Failed to create adapted luminance textures for view %p", viewRenderTargets, 0,
                                  1);
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/postprocess/filters/AvgLuminanceFilter.cpp",
                                        41, nullptr);
                    }
                    pRVar12 = (RenderTargets*)local_50.operator->();
                    cVar11 = pRVar12->HasColourTargets();
                    if ((!cVar11) || (cVar11 = shared_ptr::operator_cast_to_bool(&local_40), !cVar11))
                        goto LAB_1009b4fe8;
                    pRVar12 = (RenderTargets*)local_40.operator->();
                    cVar11 = pRVar12->HasColourTargets();
                    if (!cVar11)
                        goto LAB_1009b4fe8;
                    pRVar12 = (RenderTargets*)(*((local_a0 + 64))).operator->();
                    pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar12->GetColourTargetTextures();
                    puVar14 = (uint64_t*)(*pvVar13)[0];
                    plVar1 = (long*)*puVar14;
                    lVar16 = pvVar13->Instance();
                    (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar16 + 80, 0);
                    pRVar12 = (RenderTargets*)local_50.operator->();
                    pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar12->GetColourTargetTextures();
                    puVar14 = (uint64_t*)(*pvVar13)[0];
                    plVar1 = (long*)*puVar14;
                    lVar16 = pvVar13->Instance();
                    (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar16 + 80, 0);
                    pRVar12 = (RenderTargets*)local_40.operator->();
                    pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar12->GetColourTargetTextures();
                    puVar14 = (uint64_t*)(*pvVar13)[0];
                    plVar1 = (long*)*puVar14;
                    lVar16 = pvVar13->Instance();
                    (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar16 + 80, 0);
                    viewRenderTargets->Set(*(HashedString*)puVar10, *((local_a0 + 64)));
                    viewRenderTargets->Set(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578, local_50);
                    viewRenderTargets->Set(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588, local_40);
                    field_28 = 1;
                    bVar9 = false;
                }
            }
            ((local_a0 + 64))->~shared_ptr();
            if (bVar9) {
                return 0;
            }
        }
        return 1;
    }

} // namespace jag::postprocess
