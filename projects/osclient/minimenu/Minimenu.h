// projects/osclient/minimenu/Minimenu.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::minimenu {
    class Minimenu {
    public:
        bool IsOpen();
        Minimenu(jstring::PixfontGeneric& pixfontGeneric, const shared_ptr<Array<graphics::Pix32>>& pix32s, bool arg3,
                 jagex3::Js5& js5);
        ~Minimenu();
        void GameLoop();
        void AdvanceFeedback();
        void Sort();
        void LoopOpenMouseMode();
        void LoopClosedMouseMode();
        void Open(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2);
        void CalculateMinimenuDimensions(CoordType<UICoordSpecializer> coordType1,
                                         CoordType<UICoordSpecializer> coordType2);
        void ProcessClick(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2);
        bool IsMouseOverEntry(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                              int arg3);
        void DoEntry(int arg1);
        void Close();
        void DirtyArea();
        void DoAction(MinimenuEntry& minimenuEntry, CoordType<UICoordSpecializer> coordType1,
                      CoordType<UICoordSpecializer> coordType2);
        bool MenuOnly(int arg1);
        int RemovePriorityModifier(int arg1);
        bool IsMouseFarFromMenu(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2);
        void ResetPlayerOpChoices();
        void UpdatePlayerOpChoice(int arg1, const eastl::string& str, int arg3);
        void OnMapRebuild(int arg1, int arg2);
        void EnterTargetMode(int arg1, int arg2, int arg3, int arg4);
        void EndTargetMode();
        void SetTargetStrings(const eastl::string& str1, const eastl::string& str2);
        uint8_t GetTargetMode();
        void SetTargetMode(bool arg1);
        int GetTargetComponent();
        int GetTargetSubinterfaceId();
        int GetTargetLinkObject();
        void Draw(graphics::Pix2D& pix2D);
        auto GetLine(int arg1);
        void GetNumOps();
        void StartFeedback(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                           bool arg3);
        void StartFeedback(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                           bool arg3, const eastl::string& str1, const eastl::string& str2);
        void DrawFeedback(graphics::Pix2D& pix2D);
        void DrawFeedbackText(graphics::Pix2D& pix2D, int arg2);
        void LoadPendingFeedback();
        void Build(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2, int arg3,
                   int arg4);
        void AddEntry(const eastl::string& str, const MinimenuSubject& minimenuSubject, MinimenuOps::Value value,
                      bool arg4, int arg5, int arg6, int arg7, int arg8);
        void AddNpcOptionsOnSameTile(const ClientEntity* clientEntity, int arg2, int arg3);
        void AddPlayerOptionsOnSameTile(const ClientEntity* clientEntity, int arg2, int arg3);
        void AddNpcOptions(const ClientNpc* clientNpc, int arg2, int arg3, int arg4);
        void AddPlayerOptions(ClientPlayer* clientPlayer, int arg2, int arg3, int arg4);
        unsigned long IsPropertyAddable(OpProperty opProperty);
        bool IsShiftDown();
        unsigned long IsPropertyBlocked(OpProperty opProperty);
        long CanAddOp(const MinimenuOp& minimenuOp);
        unsigned long IsOpDeprioritised(const MinimenuOp& minimenuOp);
        void AddGlobalEntry(int arg1, const eastl::string& str, int arg3, Minimenu3DSubjectType minimenu3DSubjectType);
        void RemoveGlobalEntry(int arg1, Minimenu3DSubjectType minimenu3DSubjectType);
        void AddComponent(const shared_ptr<rs2lib::IfType>& ifType);
        auto GetIftypeOpName(const shared_ptr<rs2lib::IfType>& ifType, int arg2);
        int GetNumEntries();
        void StashEntry(int arg1);
        void ClearStashed();
        void GetStashed();
        auto GetNpcOpBase(const ClientNpc& clientNpc, const configdecoder::NpcType& npcType, int arg3);
        bool IsFollowerLowPriority();
        auto GetNpcOpBase(const eastl::string& str, int arg2, int arg3);
        auto GetNpcOpBase(const configdecoder::NpcType& npcType, int arg2);
        auto CombatColourCode(int arg1, int arg2);
        void UpdateWalkSubject(const eastl::string& str);
        int GetDefaultClickIndex() const;
        void GetHoveredIndex() const;
        bool IsDefaultShiftClickOption();
        bool IsDefaultIgnoreSingleClickOption();
        void SwapEntries(int arg1, int arg2);
        void Reset();
        void ResetMinimenu();
        void RemoveInterfaceEntries();
        void IsInterfaceEntry(int arg1);
        void RecalculateMinimenuDimensions();
        int GetAttackPriorityPlayer();
        int GetAttackPriorityNpc();
        void SetAttackPriorityPlayer(int arg1);
        void SetAttackPriorityNpc(int arg1);
        void SetFollowerLowPriority(bool arg1);
        void SetShiftClickEnabled(bool arg1);
        uint8_t InTouchMode();
        void SetSimulatedShiftActive(bool arg1);
        bool GetSimulatedShiftActive();
        void SetFeedbackSprite(int arg1, bool arg2);
        void SetFeedbackShowPopupText(bool arg1);
        void SetStartHoverIndex(int arg1);
        void SetDrawHeader(bool arg1);
        int CalculateMouseStartPosition();
        uint8_t* TestOps(const eastl::fixed_vector<eastl::string, 5ul>& strs);
        void GetEntryAtIndex(int arg1);
        void SetOpPropertyAddMode(OpProperty opProperty, MinimenuEntryAddMode minimenuEntryAddMode);
        void SetOpPropertyBlockMode(OpProperty opProperty, MinimenuEntryBlockMode minimenuEntryBlockMode);
        void SetOpPropertyPriorityMode(OpProperty opProperty, MinimenuEntryPriorityMode minimenuEntryPriorityMode);
        uint8_t* GetPlayerOps() const;
        static vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>> m_testOps;
        static unique_ptr<MinimenuEntry> CANCEL_ENTRY;
        static unique_ptr<MinimenuEntry> m_stashedEntry;

    private:
        char field_0;
        uint8_t field_1;
        uint8_t field_2;
        uint8_t _unknown_3[1];
        int field_4;
        MinimenuOps field_8;
        uint8_t _unknown_32[32];
        uint64_t field_64;
        uint8_t _unknown_72[24];
        PixfontGeneric* field_96;
        int field_104;
        uint32_t field_108;
        bool field_112;
        bool m_simulatedShiftActive;
        uint8_t _unknown_114[2];
        uint32_t field_116;
        bool m_targetMode;
        uint8_t _unknown_121[3];
        int m_targetComponent;
        int m_targetSubinterfaceId;
        int m_targetLinkObject;
        int field_136;
        uint8_t _unknown_140[68];
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
        uint8_t _unknown_240[264];
        uint64_t field_504;
        uint64_t field_512;
        uint32_t field_520;
        uint64_t field_524;
        uint64_t field_532;
        uint32_t field_540;
        uint64_t field_544;
        uint64_t field_552;
        uint32_t field_560;
        uint8_t _unknown_564[204];
        int field_768;
        int field_772;
        int field_776;
        int field_780;
        uint8_t m_open;
        uint8_t _unknown_785[3];
        unsigned int field_788;
        int m_startHoverIndex;
        int m_numEntries;
        uint8_t _unknown_800[68000];
        bool m_followerLowPriority;
        bool m_shiftClickEnabled;
        uint8_t _unknown_68802[2];
        int m_attackPriorityPlayer;
        int m_attackPriorityNpc;
        int field_68812;
        CoordMapSquare field_68816;
        uint8_t _unknown_68828[60];
        int field_68888;
        int field_68892;
        bool field_68896;
        uint8_t _unknown_68897[23];
        bool field_68920;
        uint8_t _unknown_68921[3];
        int field_68924;
        bool m_feedbackShowPopupText;
        uint8_t _unknown_68929[7];
        Js5* field_68936;
        uint8_t _unknown_68944[120];
        int field_69064;
        int field_69068;
        int field_69072;
        uint8_t _unknown_69076[4];
    };

    class MinimenuComponent {
    public:
        ~MinimenuComponent();
        char WhereToGetIfType(const shared_ptr<rs2lib::IfType>& ifType);
        auto lock(int arg1, int arg2) const;
        void operator=(const shared_ptr<rs2lib::IfType>& ifType);
        MinimenuComponent();
        MinimenuComponent* operator=(MinimenuComponent&& minimenuComponent);
        MinimenuComponent(const MinimenuComponent& minimenuComponent);
        MinimenuComponent* operator=(const MinimenuComponent& minimenuComponent);

    private:
        ref_counter_base* field_0;
        unsigned long field_8;
        uint32_t field_16;
        uint8_t _unknown_20[4];
    };

    class MinimenuGlobalEntryData {
    public:
        ~MinimenuGlobalEntryData();
        GameTokenResult* operator=(MinimenuGlobalEntryData&& minimenuGlobalEntryData);
        MinimenuGlobalEntryData();
        MinimenuGlobalEntryData(MinimenuGlobalEntryData&& minimenuGlobalEntryData);
    };

    class MinimenuOp {
    public:
        uint16_t HasProperty(OpProperty opProperty) const;

    private:
        unsigned short field_0;
    };

    class MinimenuSubject {
    public:
        ~MinimenuSubject();
        auto CreateSubject(const eastl::string& str, MinimenuSubjType minimenuSubjType, long long arg3, int arg4,
                           int arg5);
        auto CreateComponentSubject(const eastl::string& str, const shared_ptr<rs2lib::IfType>& ifType);
        MinimenuSubject();
        MinimenuSubject* operator=(MinimenuSubject&& minimenuSubject);
        auto CreateHeldObjSubject(const eastl::string& str, const shared_ptr<rs2lib::IfType>& ifType, int arg3,
                                  int arg4);
        MinimenuSubject(const MinimenuSubject& minimenuSubject);
        MinimenuSubject* operator=(const MinimenuSubject& minimenuSubject);

    private:
        uint8_t _unknown_0[32];
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        VisibleShadowCastingLightInfo field_56;
    };

    // 0x100079290
    MinimenuSubject::MinimenuSubject() : eastl::string() {}

    // 0x1000792d0
    MinimenuComponent::MinimenuComponent() : shared_ptr(), m_renderBehaviour(0) {}

    // 0x100079360
    MinimenuComponent* MinimenuComponent::operator=(MinimenuComponent&& minimenuComponent) {
        *this = minimenuComponent;
        field_16 = minimenuComponent.field_16;
        return this;
    }

    // 0x100079420
    MinimenuSubject::MinimenuSubject(const MinimenuSubject& minimenuSubject)
        : eastl::string(minimenuSubject), field_48(minimenuSubject.field_48) {
        uint64_t uVar1 = minimenuSubject.field_40;
        field_32 = minimenuSubject.field_32;
        field_40 = uVar1;
        new (field_56) MinimenuComponent(minimenuSubject.field_56);
    }

    // 0x100079480
    MinimenuComponent::MinimenuComponent(const MinimenuComponent& minimenuComponent)
        : weak_ptr(minimenuComponent), field_16(minimenuComponent.field_16) {}

    // 0x1000794a0
    MinimenuComponent* MinimenuComponent::operator=(const MinimenuComponent& minimenuComponent) {
        *this = minimenuComponent;
        field_16 = minimenuComponent.field_16;
        return this;
    }

    // 0x1000b78b0
    void Minimenu::GetEntryAtIndex(int arg1) {
        if (arg1 < 0) {
            LogAssert("index >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/minimenu/"
                      "Minimenu.h",
                      250, nullptr);
        }
        field_800[(long)arg1];
    }

    // 0x1000b8490
    void Minimenu::SetOpPropertyAddMode(OpProperty opProperty, MinimenuEntryAddMode minimenuEntryAddMode) {
        MinimenuEntryAddMode* pMVar1 = &field_68944[(long)(int)opProperty];
        *pMVar1 = minimenuEntryAddMode;
    }

    // 0x1000b84b0
    void Minimenu::SetOpPropertyBlockMode(OpProperty opProperty, MinimenuEntryBlockMode minimenuEntryBlockMode) {
        MinimenuEntryBlockMode* pMVar1 = &field_68984[(long)(int)opProperty];
        *pMVar1 = minimenuEntryBlockMode;
    }

    // 0x1000b84e0
    void Minimenu::SetOpPropertyPriorityMode(OpProperty opProperty,
                                             MinimenuEntryPriorityMode minimenuEntryPriorityMode) {
        MinimenuEntryPriorityMode* pMVar1 = &field_69024[(long)(int)opProperty];
        *pMVar1 = minimenuEntryPriorityMode;
    }

    // 0x10016ea80
    uint8_t* Minimenu::GetPlayerOps() const {
        return m_parentLocationType;
    }

} // namespace jag::oldscape::minimenu
