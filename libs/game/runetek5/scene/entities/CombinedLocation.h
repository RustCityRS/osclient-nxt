// libs/game/runetek5/scene/entities/CombinedLocation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class CombinedLocation {
    public:
        class SectionVFXData;
        class SectionsToRender;
        class VFXData;
        // virtual methods in vtable order
        virtual ~CombinedLocation();
        virtual bool IsAnimatable() const;
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void Destruct();
        virtual uint64_t GetID() const;
        virtual CombinedLocation* GetTransform() const;
        virtual char UpdateAudio();
        shared_ptr GetModel() const;
        CombinedLocation(
            graphics::RT7Core& rt7Core, graphics::GraphNode* graphNode, const shared_ptr<World>& world, bool arg4,
            bool arg5, bool arg6, bool arg7, const shared_ptr<graphics::Model>& model,
            const eastl::vector<BuildCombinedLocationResult_GroupSection>& buildCombinedLocationResult_GroupSections);
        void BuildSectionVFX(graphics::RT7Core& rt7Core,
                             BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection);
        void HideSection(SectionsToRender& sectionsToRender,
                         const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                         unsigned char arg3);
        void HideSection(const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                         unsigned char arg2);
        void UnhideSection(SectionsToRender& sectionsToRender,
                           const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                           unsigned char arg3);
        void UnhideSection(const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                           unsigned char arg2);
        void HideSection(LocShape locShape);
        void UnhideSection(LocShape locShape);
        unsigned long HideActiveSection(int arg1, int arg2, int arg3, int arg4, LocShape locShape);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
        UnhideActiveSection(int arg1, int arg2, int arg3, int arg4, LocShape locShape, Rotation90 rotation90);
        void UnhideActiveSectionsArea(const CoordFine& coordFine1, const CoordFine& coordFine2);
        shared_ptr* FindActiveSection(int arg1, int arg2, int arg3, LocShape locShape);
        shared_ptr* FindActiveSection(int arg1, int arg2, int arg3, int arg4);
        void HideHiddenAudioCombinableSections();
        void UpdateRandomSounds(unsigned int arg1);
        void UpdateHighlighting(unsigned int arg1);
        uint64_t FilterRenderPasses(const graphics::SceneViewData& sceneViewData) const;
        SectionsToRender* CalculateSectionsToRender(const graphics::SceneViewData& sceneViewData, bool arg2, bool arg3,
                                                    bool arg4, bool arg5);
        void SelectiveRemoveRoofHideUnhide(World& world, SectionsToRender* sectionsToRender);
        void NonSelectiveRemoveRoofHideUnhide(int arg1, bool arg2, SectionsToRender* sectionsToRender);
        void UpdateGroundDecorVisibility(SectionsToRender& sectionsToRender, bool arg2);
        void DebugShowPrimitiveCombinedLocationSections(bool arg1);
        uint64_t PickTestSection(const CombinedLocationSection* combinedLocationSection,
                                 graphics::PickingHelper& pickingHelper) const;
        uint8_t GetMajorityShape() const;
        void FlagHighlightingDirty();
        void SetConfigProviderDebug(ConfigProvider* configProvider);
        void SetBackgroundSoundList(eastl::vector<LocationAudioProperties>& locationAudioPropertiess);
        static bool m_ShowCombinedLocations; // = 1
        static bool m_enableFadeIn;          // = 1
        static bool m_debugPrimitiveInactiveSection;
        static bool m_debugPrimitiveActiveSection;
        static bool m_debugPrimitiveSectionMouseoverEnabled;
        static bool m_debugPrimitiveAABBOnHighlight;

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[49];
        uint8_t field_65;
        uint8_t _unknown_66[2];
        int field_68;
        uint8_t _unknown_72[136];
        unsigned int field_208;
        LocationInterfaceType field_212;
        uint8_t _unknown_216[8];
        bool field_224;
        bool field_225;
        uint8_t _unknown_226[38];
        uint8_t field_264;
        uint8_t _unknown_265[63];
        shared_ptr m_model;
        uint8_t _unknown_344[162];
        uint8_t field_506;
        uint8_t _unknown_507[45];
        char field_552;
        uint8_t field_553;
        uint8_t _unknown_554[94];
        uint8_t field_648;
    };

    class CombinedLocation::SectionVFXData {
    public:
        ~SectionVFXData();
        SectionVFXData();
        SectionVFXData(SectionVFXData&& sectionVFXData);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
    };

    class CombinedLocation::SectionsToRender {
    public:
        bool HideSection(const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                         unsigned char arg2);
        uint64_t UnhideSection(const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                               unsigned char arg2);
        bool AppendSectionRenderCustomisationMask(
            const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
            unsigned char arg2);
        uint64_t RemoveSectionRenderCustomisationMask(
            const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
            unsigned char arg2);
        bool IsHidden(const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
                      unsigned char arg2) const;
        bool HasRenderCustomisationMask(
            const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
            unsigned char arg2) const;
        unsigned long CheckIfActiveSectionsChangedFromDefault() const;
        SectionsToRender(int arg1);
        ~SectionsToRender();

    private:
        uint16_t field_0;
        uint8_t field_2;
        uint8_t _unknown_3[5];
        int field_8;
        uint8_t _unknown_12[4];
    };

    class CombinedLocation::VFXData {
    public:
        ~VFXData();
        VFXData();
        VFXData(VFXData&& vfxData);
        VFXData* operator=(VFXData&& vfxData);

        uint8_t _unknown_0[24];
    };

    // 0x10044a480
    void CombinedLocation::FlagHighlightingDirty() {
        field_648 = 1;
    }

    // 0x10044b560
    uint64_t CombinedLocation::GetID() const {
        auto pLVar1 = logger::default_logger();
        LogStream local_b0(LOGGER_SCENE);
        ((uint8_t)pLVar1)
            ->Log(nullptr, (LogLevel)&local_b0, 3, 14433829, 106,
                  "CombinedLocation::GetID() called which is not really appropriate");
        return 4294967295;
    }

    // 0x10044b610
    CombinedLocation* CombinedLocation::GetTransform() const {
        new (this) math::RotTransScale();
        return this;
    }

    // 0x10044d410
    CombinedLocation::SectionsToRender::SectionsToRender(int arg1) : field_0(0), field_2(1) {
        field_8.reserve((long)arg1);
    }

    // 0x10044d590
    CombinedLocation::SectionsToRender::~SectionsToRender() {}

    // 0x10044d690
    CombinedLocation::VFXData::VFXData() : shared_ptr() {
        new (&field_16) shared_ptr();
    }

    // 0x10045ca30
    CombinedLocation::SectionVFXData::~SectionVFXData() {
        field_8.~fixed_vector();
    }

    // 0x10045dcc0
    CombinedLocation::SectionVFXData::SectionVFXData() {
        new (&field_8) eastl::fixed_vector<CombinedLocation::VFXData, 2ul>();
    }

    // 0x10045e000
    CombinedLocation::SectionVFXData::SectionVFXData(CombinedLocation::SectionVFXData&& sectionVFXData)
        : field_0(sectionVFXData.field_0), field_8(sectionVFXData.field_8) {}

    // 0x10045e560
    CombinedLocation::VFXData::VFXData(CombinedLocation::VFXData&& vfxData) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vfxData);
        field_16.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vfxData.field_16);
    }

    // 0x10045e670
    VFXData* CombinedLocation::VFXData::operator=(CombinedLocation::VFXData&& vfxData) {
        *this = vfxData;
        field_16 = vfxData.field_16;
        return this;
    }

    // 0x10064c750
    void CombinedLocation::SetConfigProviderDebug(ConfigProvider* configProvider) {
        m_pProxyPassword = configProvider;
    }

    // 0x10064c770
    void CombinedLocation::SetBackgroundSoundList(eastl::vector<LocationAudioProperties>& locationAudioPropertiess) {
        field_272.swap(locationAudioPropertiess);
        uint8_t* this_00 = &field_304;
        this_00->set_max_size(field_272.size(), 0);
        auto arg1_00 = this_00->data();
        auto arg2 = this_00->end();
        eastl::fill<unsigned int>(arg1_00, arg2, 0);
    }

} // namespace jag::game
