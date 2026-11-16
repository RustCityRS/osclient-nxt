// libs/ui/components/List.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class List {
    public:
        class Entry;
        class EntryIconData;
        class InteractionVisualData;
        // virtual methods in vtable order
        virtual ~List();
        virtual GetType() const;
        virtual GetSwipeable() const;
        virtual void SetEnabled(bool);
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual bool SupportsMargin(Component::MarginType) const;
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual List* GetAssociatedComponent();
        virtual bool IsAssociatedComponent(shared_ptr<Component> const&) const;
        virtual void DrawFocus(ComponentDependencies const&);
        virtual void LogicFocus(ComponentDependencies const&, bool);
        virtual void CancelFocus();
        virtual ShouldBlockInput(int, int) const;
        virtual GetRecentValueChanges() const;
        virtual void ClearRecentValueChanges();
        virtual NotifyFocusGain();
        GetDropdownListWidth() const;
        List(InterfaceManager*);
        bool IsDropdown() const;
        ulong PrepareEntryIcons(graphics::SpriteAtlasManager&);
        void DrawDropdown(ComponentDependencies const&, int, int);
        int GetDropdownListHeight() const;
        void DrawEntries(ComponentDependencies const&, int, int);
        int ScrollList(int);
        bool IsScrollBarNeeded() const;
        short GetNumVisibleEntries() const;
        GetScrollAreaBounds(int, int) const;
        ScrollListWithScaling(int);
        GetEntryIndexAtPos(int, int, math::Vector2T<float> const&, unsigned short&) const;
        ulong SetEntrySelectedByIndex(unsigned short, bool, bool);
        GetScrollAreaBounds() const;
        void GetEntryAreaHeight() const;
        ulong ConvertVisibleIndexToEntryIndex(unsigned short&) const;
        GetEntryById(int) const;
        GetEntryIndexById(int) const;
        bool SetEntryVisible(int, bool);
        bool SetEntryEnabled(int, bool);
        GetEntryVisible(int) const;
        GetEntryEnabled(int) const;
        void SetEntrySelected(int, bool, bool);
        bool GetEntrySelected(int) const;
        bool SetEntryIcon(int, int);
        void SetSelectionLimit(unsigned char);
        uint AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&, int);
        bool HasEntry(int) const;
        void ReserveEntries(unsigned long);
        void ClearEntries();
        GetDropdownHeaderVisualState() const;
        GetVisualUV(math::Rect<float> const&, EntryVisualState) const;
        float GetGraphicSliceOffset(EntryVisualState);
        GetGraphicSliceHeightPercent();
        static float /* 4 bytes */ m_dropdownExpandTimeMultiplier; // = 1.0f
        static /* 4 bytes */ m_entryPadding;                       // = 3

        // data members, from how the methods use this: 26552 bytes
        undefined** field_0; // offset 0, vtable pointer
        ushort field_8;      // offset 8
        ushort field_10;     // offset 10
        ushort field_12;     // offset 12
        ushort field_14;     // offset 14
        char _unknown_16[32];
        uchar field_48; // offset 48
        char _unknown_49[1];
        char field_50; // offset 50
        char field_51; // offset 51
        char field_52; // offset 52
        char field_53; // offset 53
        char field_54; // offset 54
        char _unknown_55[1];
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        int field_72;        // offset 72
        int field_76;        // offset 76
        int field_80;        // offset 80
        int field_84;        // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[1];
        short field_102; // offset 102
        char _unknown_104[8];
        ComponentOpConfig field_112; // offset 112
        char _unknown_256[8];
        VisibleShadowCastingLightInfo field_264; // offset 264
        ComponentSwipeConfig field_288;          // offset 288
        char _unknown_293[59];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[32];
        FocusComponent field_392;           // offset 392
        ComponentMultiValueMixin field_400; // offset 400
        char _unknown_408[16];
        SpriteData field_424;            // offset 424
        SpriteData field_472;            // offset 472
        SpriteData field_520;            // offset 520
        TextData field_568;              // offset 568
        InteractionVisualData field_632; // offset 632
        char field_656;                  // offset 656
        byte field_657;                  // offset 657
        byte field_658;                  // offset 658
        byte field_659;                  // offset 659
        byte field_660;                  // offset 660
        byte field_661;                  // offset 661
        char _unknown_662[474];
        ushort field_1136; // offset 1136
        char _unknown_1138[46];
        short field_1184; // offset 1184
        char _unknown_1186[177];
        byte field_1363; // offset 1363
        char _unknown_1364[3];
        byte field_1367;       // offset 1367
        undefined2 field_1368; // offset 1368
        ushort field_1370;     // offset 1370
        uint field_1372;       // offset 1372
        char _unknown_1376[4];
        undefined1 field_1380; // offset 1380
        char _unknown_1381[3];
        float field_1384;      // offset 1384
        int field_1388;        // offset 1388
        uint field_1392;       // offset 1392
        undefined1 field_1396; // offset 1396
        char _unknown_1397[3];
        InterfaceManager* field_1400; // offset 1400
        char _unknown_1408[25144];
    };

    class List::Entry {
    public:
        ~Entry();
        bool IsEnabled() const;
        byte IsSelected() const;
        void SetSelected(bool);
        bool IsVisible() const;
        void SetVisible(bool);
        void SetEnabled(bool);
        Entry(Entry&&);
        Entry();
        Entry(eastl::basic_string<char, BucketAllocatorEASTL>, int);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        undefined4 field_24; // offset 24
        byte field_28;       // offset 28
        char _unknown_29[3];
    };

    class List::EntryIconData {
    public:
        ~EntryIconData();
        EntryIconData(EntryIconData&&);
        EntryIconData();

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8; // offset 8
        char _unknown_16[8];
    };

    class List::InteractionVisualData {
    public:
        InteractionVisualData();

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
    };

    // 0x10069be80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // List::InteractionVisualData::InteractionVisualData(): jumps straight to the base-object constructor

    // 0x10069c100, 16 bytes, inline, placed by class name and debug map
    // List::IsDropdown() const
    bool List::IsDropdown() {
        return field_656 != '\0';
    }

    // 0x10069cc50, 64 bytes, inline, placed by class name and debug map
    // List::GetDropdownListHeight() const
    int List::GetDropdownListHeight() {
        undefined2 uVar1;
        undefined4 in_EAX;
        ushort* puVar2;
        undefined8 uStack_18;

        uStack_18._0_4_ = in_EAX;
        uVar1 = GetNumVisibleEntries(this);
        uStack_18._0_6_ = CONCAT24(uVar1, (undefined4)uStack_18);
        uStack_18 = (ulong)CONCAT16(field_656, (undefined6)uStack_18);
        puVar2 = std::min<unsigned short>((ushort*)((long)&uStack_18 + 4), (ushort*)((long)&uStack_18 + 6));
        return (uint)field_658 * (uint)*puVar2;
    }

    // 0x10069dac0, 96 bytes, inline, placed by class name and debug map
    // List::IsScrollBarNeeded() const
    bool List::IsScrollBarNeeded() {
        byte bVar1;
        char cVar2;
        bool bVar3;
        ushort uVar4;

        cVar2 = (&field_1192)->GetAutoHide();
        bVar3 = true;
        if ((cVar2 != '\0') && (field_1372 == 0)) {
            uVar4 = GetNumVisibleEntries(this);
            bVar1 = field_658;
            bVar3 = GetEntryAreaHeight(this) < (int)((uint)bVar1 * (uint)uVar4);
        }
        return bVar3;
    }

    // 0x10069db20, 48 bytes, inline, placed by class name and debug map
    // List::GetNumVisibleEntries() const
    short List::GetNumVisibleEntries() {
        short sVar1;

        sVar1 = (&field_664)->size();
        return sVar1 - field_1184;
    }

    // 0x10069de90, 16 bytes, inline, placed by class name and debug map
    // List::Entry::IsEnabled() const
    bool List::Entry::IsEnabled() {
        return (field_28 & 2) == 0;
    }

    // 0x10069e1b0, 16 bytes, inline, placed by class name and debug map
    // List::Entry::IsSelected() const
    byte List::Entry::IsSelected() {
        return (field_28 & 4) >> 2;
    }

    // 0x10069e4d0, 32 bytes, inline, placed by class name and debug map
    // List::GetScrollAreaBounds() const
    List* List::GetScrollAreaBounds() {
        int in_ESI;

        GetScrollAreaBounds(this, in_ESI, 0);
        return this;
    }

    // 0x10069ec80, 32 bytes, inline, placed by class name and debug map
    // List::Entry::SetSelected(bool)
    void List::Entry::SetSelected(bool param_1) {
        field_28 = param_1 << 2 | field_28 & 251;
    }

    // 0x10069f2d0, 16 bytes, inline, placed by class name and debug map
    // List::Entry::IsVisible() const
    bool List::Entry::IsVisible() {
        return (field_28 & 1) == 0;
    }

    // 0x10069f2e0, 32 bytes, inline, placed by class name and debug map
    // List::Entry::SetVisible(bool)
    void List::Entry::SetVisible(bool param_1) {
        field_28 = !param_1 | field_28 & 254;
    }

    // 0x10069f360, 32 bytes, inline, placed by class name and debug map
    // List::Entry::SetEnabled(bool)
    void List::Entry::SetEnabled(bool param_1) {
        field_28 = !param_1 * '\x02' | field_28 & 253;
    }

    // 0x10069f9b0, 32 bytes, inline, placed by class name and debug map
    // List::HasEntry(int) const
    bool List::HasEntry(int param_1) {
        return GetEntryIndexById(this, param_1) != -1;
    }

    // 0x10069ff00, 32 bytes, inline, placed by class name and debug map
    // List::GetGraphicSliceOffset(List::EntryVisualState)
    float List::GetGraphicSliceOffset(int param_1) {
        return (float)param_1 * 0.25;
    }

    // 0x10069ff20, 16 bytes, inline, placed by class name and debug map
    // List::GetGraphicSliceHeightPercent()
    undefined8 List::GetGraphicSliceHeightPercent() {
        return 1048576000;
    }

    // 0x1006ada30, 96 bytes, inline, placed by class name
    // List::GetAssociatedComponent()
    List* List::GetAssociatedComponent() {
        shared_ptr local_28;

        local_28.shared_from_this();
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x1006ada90, 32 bytes, inline, placed by class name
    // List::GetRecentValueChanges() const
    List* List::GetRecentValueChanges() {
        long in_RSI;

        WrapArray<ComponentMultiValueMixin::ValueChangeEvent_const>::WrapArray<
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            (WrapArray<ComponentMultiValueMixin::ValueChangeEvent_const>*)this, (fixed_vector*)(in_RSI + 1080));
        return this;
    }

    // 0x1006adab0, 32 bytes, inline, placed by class name
    // List::ClearRecentValueChanges()
    void List::ClearRecentValueChanges() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1006b2390, 32 bytes, base-object constructor, inline, placed by class name
    // List::InteractionVisualData::InteractionVisualData()
    void List::InteractionVisualData::InteractionVisualData() {
        field_0 = 858993663;
        field_8 = 18446743415714956543;
        field_16 = 18446743197535078655;
    }

    // 0x1006d4f80, 16 bytes, complete-object constructor, inline, placed by class name
    // List::Entry::Entry(): jumps straight to the base-object constructor

    // 0x1006d4f90, 32 bytes, base-object constructor, inline, placed by class name
    // List::Entry::Entry()
    void List::Entry::Entry() {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_24 = 4294967295;
        field_28 = 0;
    }

    // 0x1006d5850, 16 bytes, complete-object constructor, inline, placed by class name
    // List::EntryIconData::EntryIconData(): jumps straight to the base-object constructor

    // 0x1006d5860, 32 bytes, base-object constructor, inline, placed by class name
    // List::EntryIconData::EntryIconData()
    void List::EntryIconData::EntryIconData() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 4294967295;
        field_8 = 18446744073709551615;
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1006d5880, 16 bytes, complete-object constructor, inline, placed by class name
    // List::Entry::Entry(eastl::basic_string<char, BucketAllocatorEASTL>, int): jumps straight to the base-object constructor

    // 0x1006d59c0, 32 bytes, base-object constructor, inline, placed by class name
    // List::Entry::Entry(eastl::basic_string<char, BucketAllocatorEASTL>, int)
    void List::Entry::Entry(undefined8 param_2, undefined4 param_3) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_24 = param_3;
        field_28 = 0;
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x1006bd040, 16 bytes, complete-object constructor, inline, placed by class name
    // List::List(char const*, eastl::vector<eastl::string, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x1006bd050, 208 bytes, base-object constructor, inline, placed by class name
    // List::List(char const*, eastl::vector<eastl::string, eastl::allocator>&&)
    void List::List(char* param_1, vector* param_2) {
        new (this) Control(0, 0, 7, param_1);
        field_0 = &PTR__List_100f1e230;
        new (&field_216) eastl::vector<eastl::string, eastl::allocator>();
        field_248 = 10;
        field_252 = 0;
        field_256 = -1;
        field_260 = 0;
        field_264 = 0;
        field_268 = 0;
        field_272 = 0;
        field_276 = 0;
        field_280 = -1;
        new (&field_284, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_308 = false;
        field_309 = '\0';
        field_300 = 0.0;
        field_304 = 0.0;
        (&field_216, param_2)->swap();
    }

    // 0x100a4ad60, 32 bytes, inline, placed by class name
    // List::NavigateUp()
    void List::NavigateUp() {
        field_252 = field_252 + -1;
        ValidatePosition(this);
    }

    // 0x100a4ad80, 32 bytes, inline, placed by class name
    // List::NavigateDown()
    void List::NavigateDown() {
        field_252 = field_252 + 1;
        ValidatePosition(this);
    }

    // 0x100a4ada0, 32 bytes, inline, placed by class name
    // List::NavigatePageUp()
    void List::NavigatePageUp() {
        field_252 = field_252 - field_272;
        field_260 = field_260 - field_272;
        ValidatePosition(this);
    }

    // 0x100a4adc0, 32 bytes, inline, placed by class name
    // List::NavigatePageDown()
    void List::NavigatePageDown() {
        field_252 = field_252 + field_272;
        field_260 = field_260 + field_272;
        ValidatePosition(this);
    }

    // 0x100a4ade0, 32 bytes, inline, placed by class name
    // List::NavigateHome()
    void List::NavigateHome() {
        field_252 = 0;
        ValidatePosition(this);
    }

    // 0x100a4ae00, 48 bytes, inline, placed by class name
    // List::NavigateEnd()
    void List::NavigateEnd() {
        int iVar1;

        iVar1 = (&field_216)->size();
        field_252 = iVar1 + -1;
        ValidatePosition(this);
    }

    // 0x100a517f0, 16 bytes, complete-object destructor, inline, placed by class name
    // List::~List(): jumps straight to the base-object destructor

    // 0x100a51800, 32 bytes, deleting destructor, inline, placed by class name
    // List::~List()
    void List::~List() {
        ~List(this);
        operator_delete(this);
    }

    // 0x100a51820, 96 bytes, inline, placed by class name
    // List::GetCurrentListItemText() const
    undefined1* List::GetCurrentListItemText() {
        int iVar1;
        int iVar2;
        undefined1* puVar3;

        iVar1 = field_252;
        puVar3 = &eastl::EMPTY_STRING;
        if (-1 < iVar1) {
            iVar2 = (&field_216)->size();
            if (iVar1 < iVar2) {
                puVar3 = (undefined1*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)&field_216, (long)field_252);
            }
        }
        return puVar3;
    }

    // 0x100a52c70, 48 bytes, base-object destructor, inline, placed by class name
    // List::~List()
    void List::~List() {
        field_0 = &PTR__List_100f1e230;
        (&field_216)->~vector();
        ~Control();
    }

} // namespace jag::tweak
