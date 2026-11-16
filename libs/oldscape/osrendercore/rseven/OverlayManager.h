// libs/oldscape/osrendercore/rseven/OverlayManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class OverlayManager {
    public:
        class ModelOverlay;
        OverlayManager(jag::graphics::RT7Core& rt7Core);
        void Render(unsigned int arg1, int arg2, jag::graphics::EffectManager& effectManager,
                    const jag::graphics::SceneViewData& sceneViewData, const render::Viewport& viewport,
                    std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                       jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>&
                        callback,
                    jag::graphics::GraphRoot* graphRoot);
        OverlayManager* CreateProjectionMatrix(const render::Viewport& viewport,
                                               const RenderState::OverlayViewportState& overlayViewportState);
        void UpdateModels(RenderState::OverlayRSeven* overlayRSeven1, RenderState::OverlayRSeven* overlayRSeven2);
        void UpdateModel(ModelOverlay& modelOverlay, const RenderState::OverlayRSeven& overlayRSeven);
        void SetModelUnlit(jag::graphics::Model& model);
        ~OverlayManager();

    private:
        RT7Core* field_0;
        uint8_t _unknown_8[6336];
    };

    class OverlayManager::ModelOverlay {
    public:
        ~ModelOverlay();
        ModelOverlay(ModelOverlay&& modelOverlay);
        ModelOverlay();

    private:
        uint8_t _unknown_0[16];
        OverlayViewportState field_16;
    };

    class SamplerOverride {
    public:
        SamplerOverride(jag::graphics::RT7Core& rt7Core, const render::SamplerState* samplerState);
        ~SamplerOverride();

    private:
        RT7Core* field_0;
        SamplerState* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1001eb710
    OverlayManager::ModelOverlay::ModelOverlay(OverlayManager::ModelOverlay&& modelOverlay) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(modelOverlay);
        new (field_16) RenderState::OverlayViewportState(modelOverlay.field_16);
    }

    // 0x1001eb7b0
    OverlayManager::ModelOverlay::ModelOverlay() : shared_ptr() {}

    // 0x1001ec4f0
    void SamplerOverride::SamplerOverride(jag::graphics::RT7Core&, render::SamplerState const*)::$_1::operator()(
        shared_ptr<jag::graphics::TextureAtlas>& textureAtlas) const {
        pair<jag::graphics::TextureAtlas* const, render::SamplerState> local_78[80];

        long lVar2 = *(long*)this;
        auto local_80 = textureAtlas.end();
        auto pTVar1 = textureAtlas.operator->();
        auto this_00 = pTVar1->GetTexture();
        auto samplerState = this_00->GetDefaultMaterial();
        local_78->pair<jag::graphics::TextureAtlas*, void>(local_80, *samplerState);
        auto local_98 = ((lVar2 + 16))->insert(*local_78);
        pTVar1 = (TextureAtlas*)textureAtlas.operator->();
        lVar2 = textureAtlas.Instance();
        pTVar1->SetSamplerState((lVar2 + 80));
    }

    // 0x1001eda40
    OverlayManager::~OverlayManager() {
        field_6336.~vector();
        field_8.~Renderer();
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001eb7e0
    oldscape::rseven::DynamicGeometry*
    placement_new<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(void* arg1, decltype(nullptr)&& arg2) {
        new (arg1) oldscape::rseven::DynamicGeometry(nullptr);
        return arg1;
    }

    // 0x1001eb800
    ref_counter_shared<oldscape::rseven::DynamicGeometry>*
    placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int, oldscape::rseven::DynamicGeometry*&>(
        void* arg1, int&& arg2, oldscape::rseven::DynamicGeometry*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rseven::DynamicGeometry>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001eb8c0
    ref_counter_shared<oldscape::rseven::DynamicGeometry>::ref_counter_shared(
        unsigned long arg1, oldscape::rseven::DynamicGeometry* dynamicGeometry)
        : ref_counter_base() {}

    // 0x1001eb900
    void ref_counter_shared<oldscape::rseven::DynamicGeometry>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<
                              oldscape::rs2lib::social::ClanSettingsDelta::AddMember> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 80;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::math {
    // 0x1001eb9f0
    Matrix44T<float>::Matrix44T(Vector4T<float>&& vector41, Vector4T<float>&& vector42, Vector4T<float>&& vector43,
                                Vector4T<float>&& vector44) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        *this = vector41;
        (*((this + 16))) = vector42;
        (*((this + 32))) = vector43;
        (*((this + 48))) = vector44;
    }

} // namespace jag::math
