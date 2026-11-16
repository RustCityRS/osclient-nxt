// libs/game/runetek5/scene/entities/SpotAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class SpotAnimation {
    public:
        // virtual methods in vtable order
        virtual ~SpotAnimation();
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void Destruct();
        virtual GetCombinedID() const;
        virtual ulong CanRender() const;
        AbortOnMove();
        ulong Build(unsigned int);
        IsReady();
        void SetHidden(bool);
        ulong IsFinished();
        bool IsDelayed() const;
        ulong MayMove(int);
        void TranslateParticles(math::Vector3T<float> const&);
        GetEffectAnimID() const;
        SpotAnimation(graphics::RT7Core&, game::AssetBuilder&, game::ConfigProvider&, graphics::GraphNode*,
                      shared_ptr<game::World> const&, SpotAnimPosition, SpotAnimData);
        void SetInitialPosition();
        void ReSync(SpotAnimData);
        GetSeqType() const;
        GetDuplicateBehaviour() const;
        FilterRenderPasses(graphics::SceneViewData const&);

        // data members, from how the methods use this: 460 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[48];
        byte field_64;       // offset 64
        undefined1 field_65; // offset 65
        undefined1 field_66; // offset 66
        bool field_67;       // offset 67
        uint field_68;       // offset 68
        int field_72;        // offset 72
        char _unknown_76[40];
        undefined4 field_116; // offset 116
        char _unknown_120[72];
        RT7Core* field_192;                                     // offset 192
        MakeSharedPool<game::AnimationWrapper, 512>* field_200; // offset 200
        ConfigProvider* field_208;                              // offset 208
        undefined1 field_216;                                   // offset 216
        char _unknown_217[3];
        undefined4 m_effectAnimID; // offset 220
        undefined8 field_224;      // offset 224
        undefined4 field_232;      // offset 232
        int field_236;             // offset 236
        float field_240;           // offset 240
        uint field_244;            // offset 244
        undefined4 field_248;      // offset 248
        char _unknown_252[4];
        shared_ptr field_256; // offset 256
        shared_ptr field_272; // offset 272
        char _unknown_288[88];
        shared_ptr field_376; // offset 376
        shared_ptr field_392; // offset 392
        shared_ptr field_408; // offset 408
        char field_424;       // offset 424
        undefined1 field_425; // offset 425
        undefined1 field_426; // offset 426
        char _unknown_427[1];
        undefined4 m_combinedID; // offset 428
        bool field_432;          // offset 432
        undefined1 field_433;    // offset 433
        undefined1 field_434;    // offset 434
        char _unknown_435[17];
        undefined1 field_452; // offset 452
        bool m_hidden;        // offset 453
        char _unknown_454[6];
    };

    // 0x1003f1f00, 16 bytes, inline, placed by class name and debug map
    // SpotAnimation::SetHidden(bool)
    void SpotAnimation::SetHidden(bool param_1) {
        m_hidden = param_1;
    }

    // 0x1003f2a20, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::RT5AnimationResourceManager>::type make_shared<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider const&>(game::AssetBuilder&, game::ConfigProvider const&)
    jag* jag::make_shared<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider_const&>(
        AssetBuilder* param_1, ConfigProvider* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        RT5AnimationResourceManager* local_38[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider_const&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<game::RT5AnimationResourceManager>, int,
                                   game::RT5AnimationResourceManager*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1003fdc80, 16 bytes, inline, placed by class name
    // SpotAnimation::GetCombinedID() const
    undefined4 SpotAnimation::GetCombinedID() {
        return m_combinedID;
    }

} // namespace jag
