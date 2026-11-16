// projects/osclient/minimenu/Minimenu.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::minimenu {
    class Minimenu {
    public:
        IsOpen();
        Minimenu(jstring::PixfontGeneric&, shared_ptr<Array<graphics::Pix32, eastl::allocator>> const&, bool,
                 jagex3::Js5&);
        ~Minimenu();
        void GameLoop();
        void AdvanceFeedback();
        void Sort();
        void LoopOpenMouseMode();
        void LoopClosedMouseMode();
        void Open(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        void CalculateMinimenuDimensions(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        void ProcessClick(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        bool IsMouseOverEntry(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, int);
        void DoEntry(int);
        void Close();
        void DirtyArea();
        void DoAction(MinimenuEntry&, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        bool MenuOnly(int);
        int RemovePriorityModifier(int);
        IsMouseFarFromMenu(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        void ResetPlayerOpChoices();
        void UpdatePlayerOpChoice(int, eastl::string const&, int);
        void OnMapRebuild(int, int);
        void EnterTargetMode(int, int, int, int);
        void EndTargetMode();
        void SetTargetStrings(eastl::string const&, eastl::string const&);
        GetTargetMode();
        void SetTargetMode(bool);
        int GetTargetComponent();
        int GetTargetSubinterfaceId();
        int GetTargetLinkObject();
        void Draw(graphics::Pix2D&);
        GetLine(int);
        void GetNumOps();
        void StartFeedback(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool);
        void StartFeedback(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, eastl::string const&,
                           eastl::string const&);
        void DrawFeedback(graphics::Pix2D&);
        void DrawFeedbackText(graphics::Pix2D&, int);
        void LoadPendingFeedback();
        void Build(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, int, int);
        void AddEntry(eastl::string const&, MinimenuSubject const&, MinimenuOps::Value, bool, int, int, int, int);
        void AddNpcOptionsOnSameTile(ClientEntity const*, int, int);
        void AddPlayerOptionsOnSameTile(ClientEntity const*, int, int);
        void AddNpcOptions(ClientNpc const*, int, int, int);
        void AddPlayerOptions(ClientPlayer*, int, int, int);
        ulong IsPropertyAddable(OpProperty);
        IsShiftDown();
        ulong IsPropertyBlocked(OpProperty);
        long CanAddOp(MinimenuOp const&);
        ulong IsOpDeprioritised(MinimenuOp const&);
        void AddGlobalEntry(int, eastl::string const&, int, Minimenu3DSubjectType);
        void RemoveGlobalEntry(int, Minimenu3DSubjectType);
        void AddComponent(shared_ptr<rs2lib::IfType> const&);
        GetIftypeOpName(shared_ptr<rs2lib::IfType> const&, int);
        int GetNumEntries();
        void StashEntry(int);
        void ClearStashed();
        void GetStashed();
        Minimenu* GetNpcOpBase(ClientNpc const&, configdecoder::NpcType const&, int);
        IsFollowerLowPriority();
        Minimenu* GetNpcOpBase(eastl::string const&, int, int);
        Minimenu* GetNpcOpBase(configdecoder::NpcType const&, int);
        Minimenu* CombatColourCode(int, int);
        void UpdateWalkSubject(eastl::string const&);
        int GetDefaultClickIndex() const;
        void GetHoveredIndex() const;
        IsDefaultShiftClickOption();
        IsDefaultIgnoreSingleClickOption();
        void SwapEntries(int, int);
        void Reset();
        void ResetMinimenu();
        void RemoveInterfaceEntries();
        IsInterfaceEntry(int);
        void RecalculateMinimenuDimensions();
        int GetAttackPriorityPlayer();
        int GetAttackPriorityNpc();
        void SetAttackPriorityPlayer(int);
        void SetAttackPriorityNpc(int);
        void SetFollowerLowPriority(bool);
        void SetShiftClickEnabled(bool);
        InTouchMode();
        void SetSimulatedShiftActive(bool);
        GetSimulatedShiftActive();
        void SetFeedbackSprite(int, bool);
        void SetFeedbackShowPopupText(bool);
        void SetStartHoverIndex(int);
        void SetDrawHeader(bool);
        int CalculateMouseStartPosition();
        TestOps(eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator> const&);
        void GetEntryAtIndex(int);
        void SetOpPropertyAddMode(OpProperty, MinimenuEntryAddMode);
        void SetOpPropertyBlockMode(OpProperty, MinimenuEntryBlockMode);
        void SetOpPropertyPriorityMode(OpProperty, MinimenuEntryPriorityMode);
        GetPlayerOps() const;
        static /* 200 bytes */ m_testOps;
        static /* 8 bytes */ CANCEL_ENTRY;
        static /* 8 bytes */ m_stashedEntry;

        // data members, from how the methods use this: 69080 bytes
        char field_0;       // offset 0
        undefined1 field_1; // offset 1
        undefined1 field_2; // offset 2
        char _unknown_3[1];
        int field_4;         // offset 4
        MinimenuOps field_8; // offset 8
        char _unknown_32[32];
        undefined8 field_64; // offset 64
        char _unknown_72[24];
        PixfontGeneric* field_96;    // offset 96
        int field_104;               // offset 104
        undefined4 field_108;        // offset 108
        bool field_112;              // offset 112
        bool m_simulatedShiftActive; // offset 113
        char _unknown_114[2];
        undefined4 field_116; // offset 116
        bool m_targetMode;    // offset 120
        char _unknown_121[3];
        int m_targetComponent;      // offset 124
        int m_targetSubinterfaceId; // offset 128
        int m_targetLinkObject;     // offset 132
        int field_136;              // offset 136
        char _unknown_140[68];
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
        undefined8 field_232; // offset 232
        char _unknown_240[264];
        undefined8 field_504; // offset 504
        undefined8 field_512; // offset 512
        undefined4 field_520; // offset 520
        undefined8 field_524; // offset 524
        undefined8 field_532; // offset 532
        undefined4 field_540; // offset 540
        undefined8 field_544; // offset 544
        undefined8 field_552; // offset 552
        undefined4 field_560; // offset 560
        char _unknown_564[204];
        int field_768;     // offset 768
        int field_772;     // offset 772
        int field_776;     // offset 776
        int field_780;     // offset 780
        undefined1 m_open; // offset 784
        char _unknown_785[3];
        uint field_788;        // offset 788
        int m_startHoverIndex; // offset 792
        int m_numEntries;      // offset 796
        char _unknown_800[68000];
        bool m_followerLowPriority; // offset 68800
        bool m_shiftClickEnabled;   // offset 68801
        char _unknown_68802[2];
        int m_attackPriorityPlayer; // offset 68804
        int m_attackPriorityNpc;    // offset 68808
        undefined4 field_68812;     // offset 68812
        CoordMapSquare field_68816; // offset 68816
        char _unknown_68828[60];
        int field_68888;  // offset 68888
        int field_68892;  // offset 68892
        char field_68896; // offset 68896
        char _unknown_68897[7];
        shared_ptr field_68904; // offset 68904
        bool field_68920;       // offset 68920
        char _unknown_68921[3];
        int m_feedbackSprite;         // offset 68924
        bool m_feedbackShowPopupText; // offset 68928
        char _unknown_68929[7];
        Js5* field_68936; // offset 68936
        char _unknown_68944[120];
        int field_69064; // offset 69064
        int field_69068; // offset 69068
        int field_69072; // offset 69072
        char _unknown_69076[4];
    };

    class MinimenuComponent {
    public:
        ~MinimenuComponent();
        char WhereToGetIfType(shared_ptr<rs2lib::IfType> const&);
        lock(int, int) const;
        void operator=(shared_ptr<rs2lib::IfType> const&);
        MinimenuComponent();
        MinimenuComponent* operator=(MinimenuComponent&&);
        MinimenuComponent(MinimenuComponent const&);
        MinimenuComponent* operator=(MinimenuComponent const&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    class MinimenuGlobalEntryData {
    public:
        ~MinimenuGlobalEntryData();
        GameTokenResult* operator=(MinimenuGlobalEntryData&&);
        MinimenuGlobalEntryData();
        MinimenuGlobalEntryData(MinimenuGlobalEntryData&&);
    };

    class MinimenuOp {
    public:
        HasProperty(OpProperty) const;

        // data members, from how the methods use this: 2 bytes
        ushort field_0; // offset 0
    };

    class MinimenuSubject {
    public:
        ~MinimenuSubject();
        MinimenuSubject* CreateSubject(eastl::string const&, MinimenuSubjType, long long, int, int);
        MinimenuSubject* CreateComponentSubject(eastl::string const&, shared_ptr<rs2lib::IfType> const&);
        MinimenuSubject();
        MinimenuSubject* operator=(MinimenuSubject&&);
        MinimenuSubject* CreateHeldObjSubject(eastl::string const&, shared_ptr<rs2lib::IfType> const&, int, int);
        MinimenuSubject(MinimenuSubject const&);
        MinimenuSubject* operator=(MinimenuSubject const&);

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[32];
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined8 field_40; // offset 40
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        char _unknown_56[8];
    };

    // 0x100079290, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // MinimenuSubject::MinimenuSubject()
    void MinimenuSubject::MinimenuSubject() {
        new (this) eastl::string();
        new (&field_56) ui::ComponentDragConfig();
    }

    // 0x1000792c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MinimenuComponent::MinimenuComponent(): jumps straight to the base-object constructor

    // 0x1000792d0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuComponent::MinimenuComponent()
    /* ui::ComponentDragConfig::ComponentDragConfig() */

    void ui::ComponentDragConfig::ComponentDragConfig() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = 0;
    }

    // 0x100079360, 48 bytes, inline, placed by class header (inline)
    // MinimenuComponent::operator=(MinimenuComponent&&)
    /* MinimenuComponent::TEMPNAMEPLACEHOLDERVALUE(MinimenuComponent&&)
    */

    MinimenuComponent* MinimenuComponent::operator=(MinimenuComponent* param_1) {
        weak_ptr<rs2lib::IfType>::operator=((weak_ptr<rs2lib::IfType>*)this, (weak_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x100079420, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // MinimenuSubject::MinimenuSubject(MinimenuSubject const&)
    void MinimenuSubject::MinimenuSubject(MinimenuSubject* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;

        new (this) eastl::string(param_1);
        uVar2 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = uVar2;
        uVar2 = param_1->field_36;
        uVar1 = param_1->field_40;
        field_32 = param_1->field_32;
        field_36 = uVar2;
        field_40 = uVar1;
        new (&field_56, (MinimenuComponent*)&param_1->field_56) MinimenuComponent();
    }

    // 0x100079470, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MinimenuComponent::MinimenuComponent(MinimenuComponent const&): jumps straight to the base-object constructor

    // 0x100079480, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // MinimenuComponent::MinimenuComponent(MinimenuComponent const&)
    void MinimenuComponent::MinimenuComponent(MinimenuComponent* param_1) {
        new (this) weak_ptr<dash3d::Decor>(param_1);
        field_16 = param_1->field_16;
    }

    // 0x1000794a0, 48 bytes, inline, placed by class header (inline)
    // MinimenuComponent::operator=(MinimenuComponent const&)
    /* MinimenuComponent::TEMPNAMEPLACEHOLDERVALUE(MinimenuComponent
   const&) */

    MinimenuComponent* MinimenuComponent::operator=(MinimenuComponent* param_1) {
        weak_ptr<rs2lib::IfType>::operator=((weak_ptr<rs2lib::IfType>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x1000b78b0, 80 bytes, inline, placed by class name
    // Minimenu::GetEntryAtIndex(int)
    void Minimenu::GetEntryAtIndex(int param_1) {
        if (param_1 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("index >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/minimenu/"
                      "Minimenu.h",
                      250, (char*)0);
        }
        std::array<MinimenuEntry, 500ul>::operator[]((array<MinimenuEntry, 500ul>*)&field_800, (long)param_1);
    }

    // 0x1000b8490, 32 bytes, inline, placed by class name
    // Minimenu::SetOpPropertyAddMode(OpProperty, MinimenuEntryAddMode)
    void Minimenu::SetOpPropertyAddMode(int param_2, undefined4 param_3) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<MinimenuEntryAddMode, 10ul>::operator[](
            (array<MinimenuEntryAddMode, 10ul>*)&field_68944, (long)param_2);
        *puVar1 = param_3;
    }

    // 0x1000b84b0, 32 bytes, inline, placed by class name
    // Minimenu::SetOpPropertyBlockMode(OpProperty, MinimenuEntryBlockMode)
    void Minimenu::SetOpPropertyBlockMode(int param_2, undefined4 param_3) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<MinimenuEntryBlockMode, 10ul>::operator[](
            (array<MinimenuEntryBlockMode, 10ul>*)&field_68984, (long)param_2);
        *puVar1 = param_3;
    }

    // 0x1000b84e0, 32 bytes, inline, placed by class name
    // Minimenu::SetOpPropertyPriorityMode(OpProperty, MinimenuEntryPriorityMode)
    void Minimenu::SetOpPropertyPriorityMode(int param_2, undefined4 param_3) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<MinimenuEntryPriorityMode, 10ul>::operator[](
            (array<MinimenuEntryPriorityMode, 10ul>*)&field_69024, (long)param_2);
        *puVar1 = param_3;
    }

    // 0x10016ea80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Minimenu::GetPlayerOps() const
    /* game::Location::GetParentLocationType() const */

    undefined1* game::Location::GetParentLocationType() {
        return m_parentLocationType;
    }

} // namespace jag::oldscape::minimenu
