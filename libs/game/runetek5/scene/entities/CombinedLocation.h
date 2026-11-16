// libs/game/runetek5/scene/entities/CombinedLocation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class CombinedLocation {
    public:
        class SectionVFXData;
        class SectionsToRender;
        class VFXData;
        // virtual methods in vtable order
        virtual ~CombinedLocation();
        virtual IsAnimatable() const;
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void Destruct();
        virtual GetID() const;
        virtual CombinedLocation* GetTransform() const;
        virtual char UpdateAudio();
        GetModel() const;
        CombinedLocation(graphics::RT7Core&, graphics::GraphNode*, shared_ptr<World> const&, bool, bool, bool, bool,
                         shared_ptr<graphics::Model> const&,
                         eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator> const&);
        void BuildSectionVFX(graphics::RT7Core&, BuildCombinedLocationResult_GroupSection*);
        void HideSection(SectionsToRender&, BuildCombinedLocationResult_GroupSection const&, unsigned char);
        void HideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char);
        void UnhideSection(SectionsToRender&, BuildCombinedLocationResult_GroupSection const&, unsigned char);
        void UnhideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char);
        void HideSection(LocShape);
        void UnhideSection(LocShape);
        ulong HideActiveSection(int, int, int, int, LocShape);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>* UnhideActiveSection(int, int, int, int, LocShape,
                                                                                          Rotation90);
        void UnhideActiveSectionsArea(CoordFine const&, CoordFine const&);
        FindActiveSection(int, int, int, LocShape);
        FindActiveSection(int, int, int, int);
        void HideHiddenAudioCombinableSections();
        void UpdateRandomSounds(unsigned int);
        void UpdateHighlighting(unsigned int);
        FilterRenderPasses(graphics::SceneViewData const&) const;
        SectionsToRender* CalculateSectionsToRender(graphics::SceneViewData const&, bool, bool, bool, bool);
        void SelectiveRemoveRoofHideUnhide(World&, SectionsToRender*);
        void NonSelectiveRemoveRoofHideUnhide(int, bool, SectionsToRender*);
        void UpdateGroundDecorVisibility(SectionsToRender&, bool);
        void DebugShowPrimitiveCombinedLocationSections(bool);
        PickTestSection(CombinedLocationSection const*, graphics::PickingHelper&) const;
        GetMajorityShape() const;
        void FlagHighlightingDirty();
        SetConfigProviderDebug(ConfigProvider*);
        void SetBackgroundSoundList(eastl::vector<LocationAudioProperties, eastl::allocator>&);
        static /* 1 bytes */ m_ShowCombinedLocations; // = 1
        static /* 1 bytes */ m_enableFadeIn;          // = 1
        static /* 1 bytes */ m_debugPrimitiveInactiveSection;
        static /* 1 bytes */ m_debugPrimitiveActiveSection;
        static /* 1 bytes */ m_debugPrimitiveSectionMouseoverEnabled;
        static /* 1 bytes */ m_debugPrimitiveAABBOnHighlight;

        // data members, from how the methods use this: 649 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[49];
        undefined1 field_65; // offset 65
        char _unknown_66[2];
        int field_68; // offset 68
        char _unknown_72[136];
        uint field_208;       // offset 208
        undefined4 field_212; // offset 212
        char _unknown_216[8];
        bool field_224; // offset 224
        bool field_225; // offset 225
        char _unknown_226[38];
        undefined1 field_264; // offset 264
        char _unknown_265[63];
        shared_ptr m_model; // offset 328
        char _unknown_344[162];
        undefined1 field_506; // offset 506
        char _unknown_507[45];
        char field_552;       // offset 552
        undefined1 field_553; // offset 553
        char _unknown_554[94];
        undefined1 field_648; // offset 648
    };

    class CombinedLocation::SectionVFXData {
    public:
        ~SectionVFXData();
        SectionVFXData();
        SectionVFXData(SectionVFXData&&);

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
    };

    class CombinedLocation::SectionsToRender {
    public:
        bool HideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char);
        UnhideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char);
        bool AppendSectionRenderCustomisationMask(BuildCombinedLocationResult_GroupSection const&, unsigned char);
        RemoveSectionRenderCustomisationMask(BuildCombinedLocationResult_GroupSection const&, unsigned char);
        IsHidden(BuildCombinedLocationResult_GroupSection const&, unsigned char) const;
        HasRenderCustomisationMask(BuildCombinedLocationResult_GroupSection const&, unsigned char) const;
        ulong CheckIfActiveSectionsChangedFromDefault() const;
        SectionsToRender(int);
        ~SectionsToRender();

        // data members, from how the methods use this: 16 bytes
        undefined2 field_0; // offset 0
        undefined1 field_2; // offset 2
        char _unknown_3[13];
    };

    class CombinedLocation::VFXData {
    public:
        ~VFXData();
        VFXData();
        VFXData(VFXData&&);
        VFXData* operator=(VFXData&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x100445ed0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CombinedLocation::SectionsToRender::SectionsToRender(int): jumps straight to the base-object constructor

    // 0x100446290, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CombinedLocation::SectionsToRender::~SectionsToRender(): jumps straight to the base-object destructor

    // 0x100449900, 16 bytes, complete-object constructor, inline, placed by class name
    // CombinedLocation::VFXData::VFXData(): jumps straight to the base-object constructor

    // 0x10044a480, 16 bytes, inline, placed by class name
    // CombinedLocation::FlagHighlightingDirty()
    void CombinedLocation::FlagHighlightingDirty() {
        field_648 = 1;
    }

    // 0x10044b560, 176 bytes, inline, placed by class name
    // CombinedLocation::GetID() const
    undefined8 CombinedLocation::GetID() {
        undefined8 uVar1;
        LogStream local_b0;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = logger::default_logger();
        new (&local_b0) logger::LogStream((LogStream*)&LOGGER_SCENE);
        logger::Logger::Log(uVar1, 0, &local_b0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "entities/CombinedLocation.h",
                            106, "CombinedLocation::GetID() called which is not really appropriate");
        local_b0.~LogStream();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return 4294967295;
    }

    // 0x10044b610, 32 bytes, inline, placed by class name
    // CombinedLocation::GetTransform() const
    CombinedLocation* CombinedLocation::GetTransform() {
        new (this) math::RotTransScale();
        return this;
    }

    // 0x10044d410, 80 bytes, base-object constructor, inline, placed by class name
    // CombinedLocation::SectionsToRender::SectionsToRender(int)
    void CombinedLocation::SectionsToRender::SectionsToRender(int param_1) {
        field_0 = 0;
        field_2 = 1;
        new (&field_8)
            eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>();
        (&field_8, (long)param_1)->reserve();
    }

    // 0x10044d590, 16 bytes, base-object destructor, inline, placed by class name
    // CombinedLocation::SectionsToRender::~SectionsToRender()
    void CombinedLocation::SectionsToRender::~SectionsToRender() {
        (&field_8)->~vector_map();
    }

    // 0x10044d690, 48 bytes, base-object constructor, inline, placed by class name
    // CombinedLocation::VFXData::VFXData()
    void CombinedLocation::VFXData::VFXData() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10045ca20, 16 bytes, complete-object destructor, inline, placed by class name
    // CombinedLocation::SectionVFXData::~SectionVFXData(): jumps straight to the base-object destructor

    // 0x10045ca30, 16 bytes, base-object destructor, inline, placed by class name
    // CombinedLocation::SectionVFXData::~SectionVFXData()
    void CombinedLocation::SectionVFXData::~SectionVFXData() {
        (&field_8)->~fixed_vector();
    }

    // 0x10045db80, 16 bytes, complete-object constructor, inline, placed by class name
    // CombinedLocation::SectionVFXData::SectionVFXData(): jumps straight to the base-object constructor

    // 0x10045dcc0, 16 bytes, base-object constructor, inline, placed by class name
    // CombinedLocation::SectionVFXData::SectionVFXData()
    void CombinedLocation::SectionVFXData::SectionVFXData() {
        new (&field_8) eastl::fixed_vector<CombinedLocation::VFXData, 2ul, true, eastl::allocator>();
    }

    // 0x10045dff0, 16 bytes, complete-object constructor, inline, placed by class name
    // CombinedLocation::SectionVFXData::SectionVFXData(CombinedLocation::SectionVFXData&&): jumps straight to the base-object constructor

    // 0x10045e000, 32 bytes, base-object constructor, inline, placed by class name
    // CombinedLocation::SectionVFXData::SectionVFXData(CombinedLocation::SectionVFXData&&)
    void CombinedLocation::SectionVFXData::SectionVFXData(SectionVFXData* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8)
            eastl::fixed_vector<CombinedLocation::VFXData, 2ul, true, eastl::allocator>();
    }

    // 0x10045e550, 16 bytes, complete-object constructor, inline, placed by class name
    // CombinedLocation::VFXData::VFXData(CombinedLocation::VFXData&&): jumps straight to the base-object constructor

    // 0x10045e560, 64 bytes, base-object constructor, inline, placed by class name
    // CombinedLocation::VFXData::VFXData(CombinedLocation::VFXData&&)
    void CombinedLocation::VFXData::VFXData(VFXData* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
    }

    // 0x10045e670, 48 bytes, inline, placed by class name
    // CombinedLocation::VFXData::operator=(CombinedLocation::VFXData&&)
    /* CombinedLocation::VFXData::TEMPNAMEPLACEHOLDERVALUE(CombinedLocation::VFXData&&)
    */

    VFXData* CombinedLocation::VFXData::operator=(VFXData* param_1) {
        shared_ptr<graphics::ModularParticleSystem>::operator=((shared_ptr<graphics::ModularParticleSystem>*)this,
                                                               (shared_ptr*)param_1);
        shared_ptr<graphics::VFXAttachmentInfo>::operator=((shared_ptr<graphics::VFXAttachmentInfo>*)&field_16,
                                                           (shared_ptr*)&param_1->field_16);
        return this;
    }

    // 0x10064c750, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CombinedLocation::SetConfigProviderDebug(ConfigProvider*)
    /* Js5HTTPQueueRequest::SetProxyPassword(char const*) */

    void Js5HTTPQueueRequest::SetProxyPassword(char* param_1) {
        m_pProxyPassword = param_1;
    }

    // 0x10064c770, 96 bytes, inline, placed by class name
    // CombinedLocation::SetBackgroundSoundList(eastl::vector<LocationAudioProperties, eastl::allocator>&)
    void CombinedLocation::SetBackgroundSoundList(vector* param_1) {
        ulong uVar1;
        uint* puVar2;
        uint* puVar3;
        undefined1* this_00;

        (&field_272, param_1)->swap();
        this_00 = &field_304;
        uVar1 = (&field_272)->size();
        this_00->set_max_size(uVar1, 0);
        puVar2 = (uint*)this_00->data();
        puVar3 = (uint*)this_00->end();
        eastl::fill<unsigned int>(puVar2, puVar3, 0);
    }

} // namespace jag::game
