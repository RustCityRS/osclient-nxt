// libs/graphics/runetek7/materials/RenderMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RenderMaterial.h"

namespace jag::graphics {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    RenderMaterial::GetOptions();

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    RenderMaterial::GetOptions() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderMaterial::Activate(render::RenderContext&);

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    RenderMaterial::GetBlendMode() const;

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    RenderMaterial::GetAlphaMode() const;

    // 0x1000fa840: the linker folded this into oldscape::graphics::NXTPixScreen::GetHeight() const, which has identical code
    RenderMaterial::GetEnvironmentMaterialID() const;

    // 0x100121c80: the linker folded this into oldscape::LoginManager::SetAuthenticatorUserHash(int), which has identical code
    RenderMaterial::SetViewportMapID(int);

    // 0x1001a3d00: the linker folded this into MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool), which has identical code
    RenderMaterial::SetAlphaTestThreshold(unsigned char);

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    RenderMaterial::GetViewportMapID() const;

    // 0x10060da40: the linker folded this into game::option::Option<game::option::EnumAntialiasingMode>::SetMaxLowestValue(game::option::EnumAntialiasingMode), which has identical code
    RenderMaterial::SetEnvironmentMaterialID(int);

    // 0x10080e330: the linker folded this into GeometryBatch::GetBoneCount() const, which has identical code
    RenderMaterial::GetAlphaTestThreshold() const;

    // 0x1008c76c0, 96 bytes, base-object constructor, placed by class name and debug map
    // RenderMaterial::RenderMaterial(RenderMaterial&&)
    void RenderMaterial::RenderMaterial(RenderMaterial* param_1) {
        field_0 = &PTR__SkyBoxMaterial_100f184f0;
        field_8 = param_1->field_8;
        field_16 = param_1->field_16;
        field_24 = param_1->field_24;
        m_alphaTestThreshold = param_1->m_alphaTestThreshold;
        field_36 = param_1->field_36;
        field_40 = param_1->field_40;
        new (&field_48, (array*)&param_1->field_48) std::array<RenderPassEffect, 10ul>();
        *(undefined4*)field_528 = *(undefined4*)param_1->field_528;
    }

    // 0x1008c7730, 16 bytes, complete-object constructor, placed by class name and debug map
    // RenderMaterial::RenderMaterial(RenderMaterial&&): jumps straight to the base-object constructor

    // 0x1008c7740, 96 bytes, base-object constructor, placed by class name and debug map
    // RenderMaterial::RenderMaterial(RenderMaterial const&)
    void RenderMaterial::RenderMaterial(RenderMaterial* param_1) {
        field_0 = &PTR__SkyBoxMaterial_100f184f0;
        field_8 = param_1->field_8;
        field_16 = param_1->field_16;
        field_24 = param_1->field_24;
        m_alphaTestThreshold = param_1->m_alphaTestThreshold;
        field_36 = param_1->field_36;
        field_40 = param_1->field_40;
        new (&field_48, (array*)&param_1->field_48) std::array<RenderPassEffect, 10ul>();
        *(undefined4*)field_528 = *(undefined4*)param_1->field_528;
    }

    // 0x1008c77b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // RenderMaterial::RenderMaterial(RenderMaterial const&): jumps straight to the base-object constructor

    // 0x1008c77c0, 96 bytes, placed by class name and debug map
    // RenderMaterial::operator=(RenderMaterial const&)
    /* RenderMaterial::TEMPNAMEPLACEHOLDERVALUE(RenderMaterial const&) */

    RenderMaterial* RenderMaterial::operator=(RenderMaterial* param_1) {
        field_8 = param_1->field_8;
        field_16 = param_1->field_16;
        field_24 = param_1->field_24;
        m_alphaTestThreshold = param_1->m_alphaTestThreshold;
        field_36 = param_1->field_36;
        field_40 = param_1->field_40;
        std::array<RenderPassEffect, 10ul>::operator=((array<RenderPassEffect, 10ul>*)&field_48,
                                                      (array*)&param_1->field_48);
        *(undefined4*)field_528 = *(undefined4*)param_1->field_528;
        return this;
    }

    // 0x1008c7870, 80 bytes, placed by class name and debug map
    // RenderMaterial::DestroyRenderingResources()
    void RenderMaterial::DestroyRenderingResources() {
        RenderPassEffect* this_00;
        RenderPassEffect* pRVar1;

        this_00 = (RenderPassEffect*)(&field_48)->begin();
        pRVar1 = (RenderPassEffect*)(&field_48)->end();
        for (; this_00 != pRVar1; this_00 = this_00 + 1) {
            this_00->Clear();
        }
    }

} // namespace jag::graphics
