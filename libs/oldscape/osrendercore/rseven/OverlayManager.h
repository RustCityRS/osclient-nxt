// libs/oldscape/osrendercore/rseven/OverlayManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class OverlayManager {
    public:
        class ModelOverlay;
        OverlayManager(jag::graphics::RT7Core&);
        void Render(unsigned int, int, jag::graphics::EffectManager&, jag::graphics::SceneViewData const&,
                    render::Viewport const&,
                    std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                       jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>&,
                    jag::graphics::GraphRoot*);
        CreateProjectionMatrix(render::Viewport const&, RenderState::OverlayViewportState const&);
        void UpdateModels(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*);
        void UpdateModel(ModelOverlay&, RenderState::OverlayRSeven const&);
        void SetModelUnlit(jag::graphics::Model&);
        ~OverlayManager();

        // data members, from how the methods use this: 6344 bytes
        RT7Core* field_0; // offset 0
        char _unknown_8[6336];
    };

    class OverlayManager::ModelOverlay {
    public:
        ~ModelOverlay();
        ModelOverlay(ModelOverlay&&);
        ModelOverlay();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[16];
        OverlayViewportState field_16; // offset 16
    };

    class SamplerOverride {
    public:
        SamplerOverride(jag::graphics::RT7Core&, render::SamplerState const*);
        ~SamplerOverride();

        // data members, from how the methods use this: 24 bytes
        RT7Core* field_0;      // offset 0
        SamplerState* field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1001eb700, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OverlayManager::ModelOverlay::ModelOverlay(OverlayManager::ModelOverlay&&): jumps straight to the base-object constructor

    // 0x1001eb710, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // OverlayManager::ModelOverlay::ModelOverlay(OverlayManager::ModelOverlay&&)
    void OverlayManager::ModelOverlay::ModelOverlay(ModelOverlay* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        new (field_16, (OverlayViewportState*)param_1->field_16) RenderState::OverlayViewportState();
    }

    // 0x1001eb7a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OverlayManager::ModelOverlay::ModelOverlay(): jumps straight to the base-object constructor

    // 0x1001eb7b0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OverlayManager::ModelOverlay::ModelOverlay()
    void OverlayManager::ModelOverlay::ModelOverlay() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (field_16) RenderState::OverlayViewportState();
    }

    // 0x1001ec4f0, 208 bytes, inline, placed by debug map only (low confidence)
    // SamplerOverride::SamplerOverride(jag::graphics::RT7Core&, render::SamplerState const*)::$_1::operator()(shared_ptr<jag::graphics::TextureAtlas>&) const
    /* SamplerOverride::SamplerOverride(jag::graphics::RT7Core&,
   render::SamplerState
   const*)::$_1::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<jag::graphics::TextureAtlas>&) const */

    void SamplerOverride::SamplerOverride(jag::graphics::RT7Core&,
                                          render::SamplerState_const*)::$_1::operator()(shared_ptr* param_1) {
        TextureAtlas* pTVar1;
        MaterialManager* this_00;
        SamplerState* pSVar2;
        long lVar3;
        pair local_98[24];
        TextureAtlas* local_80;
        pair<jag::graphics::TextureAtlas* const, render::SamplerState> local_78[80];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_80 = (TextureAtlas*)param_1->end();
        pTVar1 = (TextureAtlas*)shared_ptr<jag::graphics::TextureAtlas>::operator->(
            (shared_ptr<jag::graphics::TextureAtlas>*)param_1);
        this_00 = (MaterialManager*)pTVar1->GetTexture();
        pSVar2 = (SamplerState*)this_00->GetDefaultMaterial();
        eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>::pair<jag::graphics::TextureAtlas*, void>(
            local_78, &local_80, pSVar2);
        eastl::hashtable<jag::graphics::TextureAtlas*,
                         eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>, eastl::allocator,
                         eastl::use_first<eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>>,
                         eastl::equal_to<jag::graphics::TextureAtlas*>, eastl::hash<jag::graphics::TextureAtlas*>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::insert(local_98);
        eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>::~pair(local_78);
        pTVar1 = (TextureAtlas*)shared_ptr<jag::graphics::TextureAtlas>::operator->(
            (shared_ptr<jag::graphics::TextureAtlas>*)param_1);
        lVar3 = param_1->Instance();
        pTVar1->SetSamplerState((SamplerState*)(lVar3 + 80));
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001eda30, 16 bytes, complete-object destructor, inline, placed by class name
    // OverlayManager::~OverlayManager(): jumps straight to the base-object destructor

    // 0x1001eda40, 48 bytes, base-object destructor, inline, placed by class name
    // OverlayManager::~OverlayManager()
    void OverlayManager::~OverlayManager() {
        (&field_6336)->~vector();
        (&field_8)->~Renderer();
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001eb7e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rseven::DynamicGeometry* placement_new<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(void*, decltype(nullptr)&&)
    DynamicGeometry*
    placement_new<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(void* param_1,
                                                                        _func_decltype_nullptr** param_2) {
        oldscape::rseven::DynamicGeometry::DynamicGeometry(param_1, (GraphNode*)0);
        return param_1;
    }

    // 0x1001eb800, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rseven::DynamicGeometry>* placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int, oldscape::rseven::DynamicGeometry*&>(void*, int&&, oldscape::rseven::DynamicGeometry*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int, oldscape::rseven::DynamicGeometry*&>(
        void* param_1, int* param_2, DynamicGeometry** param_3) {
        ref_counter_shared<oldscape::rseven::DynamicGeometry>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001eb8b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rseven::DynamicGeometry>::ref_counter_shared(unsigned long, oldscape::rseven::DynamicGeometry*): jumps straight to the base-object constructor

    // 0x1001eb8c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rseven::DynamicGeometry>::ref_counter_shared(unsigned long, oldscape::rseven::DynamicGeometry*)
    void ref_counter_shared<oldscape::rseven::DynamicGeometry>::ref_counter_shared(ulong param_1,
                                                                                   DynamicGeometry* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7920 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DynamicGeometry**)(this + 24) = param_2;
    }

    // 0x1001eb900, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rseven::DynamicGeometry>::DeleteData()
    /* ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::DeleteData()
    */

    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 80;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::math {
    // 0x1001eb9f0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(Vector4T<float>&&, Vector4T<float>&&, Vector4T<float>&&, Vector4T<float>&&)
    void Matrix44T<float>::Matrix44T(Vector4T* param_1, Vector4T* param_2, Vector4T* param_3, Vector4T* param_4) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Rect<float>::operator=((Rect<float>*)this, (Rect*)param_1);
        Rect<float>::operator=((Rect<float>*)(this + 16), (Rect*)param_2);
        Rect<float>::operator=((Rect<float>*)(this + 32), (Rect*)param_3);
        Rect<float>::operator=((Rect<float>*)(this + 48), (Rect*)param_4);
    }

} // namespace jag::math
