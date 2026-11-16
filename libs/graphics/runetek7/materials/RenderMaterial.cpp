// libs/graphics/runetek7/materials/RenderMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RenderMaterial.h"

namespace jag::graphics {
    // 0x100009d50: RenderMaterial::GetOptions() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009d50: RenderMaterial::GetOptions() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009e70: RenderMaterial::Activate(render::RenderContext&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100016cf0: RenderMaterial::GetBlendMode() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x100023f30: RenderMaterial::GetAlphaMode() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x1000fa840: RenderMaterial::GetEnvironmentMaterialID() const has the same machine code as oldscape::graphics::NXTPixScreen::GetHeight() const

    // 0x100121c80: RenderMaterial::SetViewportMapID(int) has the same machine code as oldscape::LoginManager::SetAuthenticatorUserHash(int)

    // 0x1001a3d00: RenderMaterial::SetAlphaTestThreshold(unsigned char) has the same machine code as MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool)

    // 0x100293ee0: RenderMaterial::GetViewportMapID() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x10060da40: RenderMaterial::SetEnvironmentMaterialID(int) has the same machine code as game::option::Option<game::option::EnumAntialiasingMode>::SetMaxLowestValue(game::option::EnumAntialiasingMode)

    // 0x10080e330: RenderMaterial::GetAlphaTestThreshold() const has the same machine code as GeometryBatch::GetBoneCount() const

    // 0x1008c76c0
    RenderMaterial::RenderMaterial(RenderMaterial&& renderMaterial)
        : field_8(renderMaterial.field_8), m_alphaMode(renderMaterial.m_alphaMode),
          m_pBlendMode(renderMaterial.m_pBlendMode), m_alphaTestThreshold(renderMaterial.m_alphaTestThreshold),
          m_environmentMaterialID(renderMaterial.m_environmentMaterialID),
          m_viewportMapID(renderMaterial.m_viewportMapID), field_48(renderMaterial.field_48) {
        *(uint32_t*)field_528 = *(uint32_t*)renderMaterial.field_528;
    }

    // 0x1008c7740
    RenderMaterial::RenderMaterial(const RenderMaterial& renderMaterial)
        : field_8(renderMaterial.field_8), m_alphaMode(renderMaterial.m_alphaMode),
          m_pBlendMode(renderMaterial.m_pBlendMode), m_alphaTestThreshold(renderMaterial.m_alphaTestThreshold),
          m_environmentMaterialID(renderMaterial.m_environmentMaterialID),
          m_viewportMapID(renderMaterial.m_viewportMapID), field_48(renderMaterial.field_48) {
        *(uint32_t*)field_528 = *(uint32_t*)renderMaterial.field_528;
    }

    // 0x1008c77c0
    RenderMaterial* RenderMaterial::operator=(const RenderMaterial& renderMaterial) {
        field_8 = renderMaterial.field_8;
        m_alphaMode = renderMaterial.m_alphaMode;
        m_pBlendMode = renderMaterial.m_pBlendMode;
        m_alphaTestThreshold = renderMaterial.m_alphaTestThreshold;
        m_environmentMaterialID = renderMaterial.m_environmentMaterialID;
        m_viewportMapID = renderMaterial.m_viewportMapID;
        field_48 = renderMaterial.field_48;
        *(uint32_t*)field_528 = *(uint32_t*)renderMaterial.field_528;
        return this;
    }

    // 0x1008c7870
    void RenderMaterial::DestroyRenderingResources() {
        RenderPassEffect* this_00 = (RenderPassEffect*)std::array<RenderPassEffect, 10ul>::begin();
        RenderPassEffect* pRVar1 = (RenderPassEffect*)std::array<RenderPassEffect, 10ul>::end();
        for (; this_00 != pRVar1; this_00 = this_00 + 1) {
            this_00->Clear();
        }
    }

} // namespace jag::graphics
