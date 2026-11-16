// libs/ui/components/ComboField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ComboField {
    public:
        class Entry;
        class InteractionVisualData;
        // virtual methods in vtable order
        virtual ~ComboField();
        virtual GetType() const;
        virtual GetSwipeable() const;
        virtual void SetEnabled(bool);
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual IsKeyReceiver() const;
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual bool SupportsMargin(Component::MarginType) const;
        virtual ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float);
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual ComboField* GetAssociatedComponent();
        virtual bool IsAssociatedComponent(shared_ptr<Component> const&) const;
        virtual void DrawFocus(ComponentDependencies const&);
        virtual void LogicFocus(ComponentDependencies const&, bool);
        virtual void CancelFocus();
        virtual bool ShouldBlockInput(int, int) const;
        virtual ulong HandleKeyInput(int, int, unsigned int);
        virtual void ClearEntries();
        virtual GetRecentValueChanges() const;
        virtual void ClearRecentValueChanges();
        ComboField(InterfaceManager*);
        GetSelectedLabel() const;
        void UpdateFilteredEntries(FilterUpdateType);
        int ScrollComboField(int);
        bool ScrollbarNeeded() const;
        GetNumVisibleEntries() const;
        GetDropdownAreaBounds() const;
        int GetDropdownHeight() const;
        ScrollComboFieldWithScaling(int);
        ushort ConvertVisibleIndex(unsigned short) const;
        void SelectEntryByIndex(unsigned short, bool);
        GetDropdownWidth() const;
        void GetTextAreaWidth() const;
        void DrawInputBox(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int);
        void DrawEntries(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int);
        GetHeaderVisualState() const;
        GetVisualUV(math::Rect<float> const&, EntryVisualState) const;
        void DrawInputBoxContents(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int, int,
                                  int);
        byte GetDropdownMaxVisibleEntries() const;
        byte GetEntryHeight() const;
        void CopySelection();
        void PasteFromClipboard();
        void AddCodepoint(unsigned int);
        GetEntryIndexAtPos(int, int, math::Vector2T<float> const&, unsigned short&) const;
        float GetGraphicSliceOffset(EntryVisualState);
        GetGraphicSliceHeightPercent();
        byte IsCodepointAllowed(unsigned int) const;
        void BuildIndexMap();
        bool SelectEntry(int, bool);
        GetEntryById(int) const;
        GetEntryIndexById(int) const;
        void ClearSelection(bool);
        ulong FlushSelectEvents();
        bool HasValidSelection() const;
        GetSelectedValue() const;
        uint SetEntries(UIDataMappingProvider<int, StringView> const&);
        uint AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&, int);
        bool HasEntry(int) const;
        bool RemoveEntry(int);
        void ReserveEntries(unsigned long);
        static float /* 4 bytes */ m_dropdownExpandTimeMultiplier; // = 1.0f
        static /* 4 bytes */ m_entryPadding;                       // = 3

        // data members, from how the methods use this: 6516408 bytes
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
        char _unknown_104[160];
        VisibleShadowCastingLightInfo field_264; // offset 264
        ComponentSwipeConfig field_288;          // offset 288
        char _unknown_293[59];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[32];
        undefined** field_392; // offset 392
        undefined** field_400; // offset 400
        char _unknown_408[16];
        Sprite field_424; // offset 424
        char _unknown_532[36];
        TcpConnectionMessageBase field_568; // offset 568
        char _unknown_616[200];
        uint field_816; // offset 816
        char _unknown_820[8];
        uint field_828;                   // offset 828
        byte m_entryHeight;               // offset 832
        byte m_dropdownMaxVisibleEntries; // offset 833
        byte field_834;                   // offset 834
        byte field_835;                   // offset 835
        char _unknown_836[4];
        undefined1 field_840; // offset 840
        char _unknown_841[23];
        undefined4 field_864; // offset 864
        char _unknown_868[396];
        ushort field_1264;     // offset 1264
        undefined4 field_1266; // offset 1266
        undefined4 field_1270; // offset 1270
        char _unknown_1274[46];
        ushort field_1320;     // offset 1320
        ushort field_1322;     // offset 1322
        int field_1324;        // offset 1324
        undefined4 field_1328; // offset 1328
        float field_1332;      // offset 1332
        int field_1336;        // offset 1336
        uint field_1340;       // offset 1340
        char _unknown_1344[8];
        TextRun field_1352; // offset 1352
        ulong field_1432;   // offset 1432
        char _unknown_1440[1];
        undefined1 field_1441; // offset 1441
        byte field_1442;       // offset 1442
        char _unknown_1443[5];
        undefined8 field_1448; // offset 1448
        undefined1 field_1456; // offset 1456
        char _unknown_1457[71];
        InterfaceManager* field_1528; // offset 1528
        char _unknown_1536[6514872];
    };

    class ComboField::Entry {
    public:
        ~Entry();
        Entry(StringView, int);
        Entry(Entry&&);
        Entry();
        Entry(Entry const&);
        Entry* operator=(Entry&&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        int field_24;        // offset 24
        undefined1 field_28; // offset 28
        char _unknown_29[3];
    };

    class ComboField::InteractionVisualData {
    public:
        InteractionVisualData();

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
    };

    // 0x10068d800, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentMultiValueMixin::ComponentMultiValueMixin()
    void ComponentMultiValueMixin::ComponentMultiValueMixin() {
        new (this) ComponentValueMixin();
        field_0 = PTR_vtable_100ee7d98 + 16;
    }

    // 0x10068d8b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ComboField::InteractionVisualData::InteractionVisualData(): jumps straight to the base-object constructor

    // 0x10068d900, 32 bytes, inline, placed by class name
    // ComboField::SetEnabled(bool)
    void ComboField::SetEnabled(bool param_1) {
        SetEnabled(param_1);
        CancelFocus(this);
    }

    // 0x10068de50, 176 bytes, inline, placed by class name
    // ComboField::GetSelectedLabel() const
    undefined* ComboField::GetSelectedLabel() {
        undefined* puVar3;

        if (*PTR_empty_100ee50f8 == '\0') {
            if (___cxa_guard_acquire(PTR_empty_100ee50f8) != 0) {
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                ___cxa_atexit(PTR__basic_string_100ee6c78, PTR_empty_100ee9d68, 4294967296);
                ___cxa_guard_release(PTR_empty_100ee50f8);
            }
        }
        if (HasValidSelection(this) == '\0') {
            puVar3 = PTR_empty_100ee9d68;
        } else {
            puVar3 = (undefined*)eastl::vector<
                ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<ComboField::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_872,
                (ulong)field_1264);
        }
        return puVar3;
    }

    // 0x10068e720, 48 bytes, inline, placed by class name
    // ComboField::ScrollbarNeeded() const
    bool ComboField::ScrollbarNeeded() {
        bool bVar1;
        undefined1 uVar2;
        undefined1 extraout_AH;

        bVar1 = true;
        if (field_1324 == 0) {
            uVar2 = GetNumVisibleEntries(this);
            bVar1 = (ushort)m_dropdownMaxVisibleEntries < CONCAT11(extraout_AH, uVar2);
        }
        return bVar1;
    }

    // 0x10068e750, 80 bytes, inline, placed by class name
    // ComboField::GetNumVisibleEntries() const
    undefined2 ComboField::GetNumVisibleEntries() {
        undefined2 uVar2;

        if (field_1352->IsEmpty() == '\0') {
            uVar2 = (&field_1464)->size();
        } else {
            uVar2 = (&field_872)->size();
        }
        return uVar2;
    }

    // 0x10068e8c0, 64 bytes, inline, placed by class name
    // ComboField::GetDropdownHeight() const
    int ComboField::GetDropdownHeight() {
        undefined2 uVar1;
        undefined8 in_RAX;
        ushort* puVar2;
        undefined1 auStack_18[6];
        ushort local_12;

        local_12 = (ushort)((ulong)in_RAX >> 48);
        auStack_18._0_4_ = SUB84(in_RAX, 0);
        auStack_18 = (undefined1[6])CONCAT15(0, CONCAT14(m_dropdownMaxVisibleEntries, auStack_18._0_4_));
        uVar1 = GetNumVisibleEntries(this);
        _auStack_18 = CONCAT26(uVar1, auStack_18);
        puVar2 = std::min<unsigned short>((ushort*)(auStack_18 + 4), &local_12);
        return (uint)m_entryHeight * (uint)*puVar2;
    }

    // 0x10068ec20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ComboField::GetDropdownWidth() const
    /* ComboField::GetTextAreaWidth() const */

    void ComboField::GetTextAreaWidth() {
        GetStreamCountLastMix();
    }

    // 0x100690890, 16 bytes, inline, placed by class name
    // ComboField::GetDropdownMaxVisibleEntries() const
    byte ComboField::GetDropdownMaxVisibleEntries() {
        return m_dropdownMaxVisibleEntries;
    }

    // 0x1006908a0, 16 bytes, inline, placed by class name
    // ComboField::GetEntryHeight() const
    byte ComboField::GetEntryHeight() {
        return m_entryHeight;
    }

    // 0x100690e20, 32 bytes, inline, placed by class name
    // ComboField::GetGraphicSliceOffset(ComboField::EntryVisualState)
    float ComboField::GetGraphicSliceOffset(int param_1) {
        return (float)param_1 * 0.25;
    }

    // 0x100690e40, 16 bytes, inline, placed by class name
    // ComboField::GetGraphicSliceHeightPercent()
    undefined8 ComboField::GetGraphicSliceHeightPercent() {
        return 1048576000;
    }

    // 0x1006919e0, 48 bytes, inline, placed by class name
    // ComboField::HasValidSelection() const
    bool ComboField::HasValidSelection() {
        ushort uVar1;
        ulong uVar2;

        uVar1 = field_1264;
        uVar2 = (&field_872)->size();
        return uVar1 < uVar2;
    }

    // 0x100691a90, 64 bytes, inline, placed by class name
    // ComboField::GetSelectedValue() const
    undefined4 ComboField::GetSelectedValue() {
        char cVar1;
        undefined4 uVar2;
        long lVar3;

        cVar1 = HasValidSelection(this);
        uVar2 = 4294967295;
        if (cVar1 != '\0') {
            lVar3 = eastl::vector<ComboField::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<ComboField::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_872,
                (ulong)field_1264);
            uVar2 = *(undefined4*)(lVar3 + 24);
        }
        return uVar2;
    }

    // 0x100691e30, 32 bytes, inline, placed by class name
    // ComboField::HasEntry(int) const
    bool ComboField::HasEntry(int param_1) {
        return GetEntryIndexById(this, param_1) != -1;
    }

    // 0x100691f00, 16 bytes, complete-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(StringView, int): jumps straight to the base-object constructor

    // 0x1006ad370, 16 bytes, complete-object destructor, inline, placed by class name
    // ComboField::~ComboField(): jumps straight to the base-object destructor

    // 0x1006ad380, 32 bytes, deleting destructor, inline, placed by class name
    // ComboField::~ComboField()
    void ComboField::~ComboField() {
        ~ComboField(this);
        operator_delete(this);
    }

    // 0x1006ad3a0, 16 bytes, inline, placed by class name
    // ComboField::SupportsMargin(Component::MarginType) const
    /* List::SupportsMargin(Component::MarginType) const */

    bool List::SupportsMargin(undefined8 param_1, uint param_2) {
        return param_2 < 2;
    }

    // 0x1006ad3b0, 96 bytes, inline, placed by class name
    // ComboField::GetAssociatedComponent()
    ComboField* ComboField::GetAssociatedComponent() {
        shared_ptr* extraout_RDX;
        enable_shared_from_this<PathingEntity> local_28[16];

        local_28->shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)this, (jag*)local_28,
                                                                                     extraout_RDX);
        local_28->~shared_ptr();
        return this;
    }

    // 0x1006ad410, 32 bytes, inline, placed by class name
    // ComboField::IsAssociatedComponent(shared_ptr<Component> const&) const
    /* InputField::IsAssociatedComponent(shared_ptr<Component> const&) const */

    bool InputField::IsAssociatedComponent(shared_ptr* param_1) {
        InputField* pIVar1;

        pIVar1 = (InputField*)param_1->end();
        return this == pIVar1;
    }

    // 0x1006ad430, 32 bytes, inline, placed by class name
    // ComboField::GetRecentValueChanges() const
    ComboField* ComboField::GetRecentValueChanges() {
        long in_RSI;

        WrapArray<ComponentMultiValueMixin::ValueChangeEvent_const>::WrapArray<
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            (WrapArray<ComponentMultiValueMixin::ValueChangeEvent_const>*)this, (fixed_vector*)(in_RSI + 1280));
        return this;
    }

    // 0x1006ad450, 32 bytes, inline, placed by class name
    // ComboField::ClearRecentValueChanges()
    void ComboField::ClearRecentValueChanges() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1006b0170, 32 bytes, base-object constructor, inline, placed by class name
    // ComboField::InteractionVisualData::InteractionVisualData()
    void ComboField::InteractionVisualData::InteractionVisualData() {
        field_0 = 18446743415714956543;
        field_8 = 18446743197535078655;
        field_16 = 18446744071418902527;
        field_24 = 8608480570004996351;
    }

    // 0x1006b0450, 32 bytes, base-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(StringView, int)
    void ComboField::Entry::Entry(StringView param_1, int param_2) {
        StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>((StringView*)this);
        field_24 = (int)param_1.field_8;
        field_28 = 1;
    }

    // 0x1006b2bd0, 432 bytes, base-object destructor, inline, placed by class name
    // ComboField::~ComboField()
    void ComboField::~ComboField() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__ComboField_100f0e988;
        field_392 = &PTR__ComboField_100f0eaf0;
        field_400 = &PTR__ComboField_100f0eb28;
        CancelFocus(this);
        (&field_1464)->~fixed_vector();
        field_1352->~TextRun();
        (&field_1280)->~fixed_vector();
        (&field_1232)->~vector_map();
        (&field_872)->~fixed_vector();
        (&field_840)->~basic_string();
        (&field_632)->~ScrollBar();
        field_568->~TextData();
        ((field_424 + 96))->~Sprite();
        ((field_424 + 48))->~Sprite();
        field_424->~Sprite();
        (&field_408)->~enable_shared_from_this();
        (&field_400)->~AutoSingleton();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_392, in_RSI, extraout_RDX);
        ~Component();
    }

    // 0x1006c8dd0, 16 bytes, complete-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(ComboField::Entry&&): jumps straight to the base-object constructor

    // 0x1006c8de0, 48 bytes, base-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(ComboField::Entry&&)
    /* List::Entry::Entry(List::Entry&&) */

    void List::Entry::Entry(Entry* param_1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_28 = param_1->field_28;
        field_24 = param_1->field_24;
    }

    // 0x1006c8e50, 16 bytes, complete-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(): jumps straight to the base-object constructor

    // 0x1006c8e60, 32 bytes, base-object constructor, inline, placed by class name
    // ComboField::Entry::Entry()
    void ComboField::Entry::Entry() {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_24 = -1;
        field_28 = 1;
    }

    // 0x1006c93f0, 16 bytes, complete-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(ComboField::Entry const&): jumps straight to the base-object constructor

    // 0x1006c94c0, 48 bytes, base-object constructor, inline, placed by class name
    // ComboField::Entry::Entry(ComboField::Entry const&)
    void ComboField::Entry::Entry(Entry* param_1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_28 = param_1->field_28;
        field_24 = param_1->field_24;
    }

    // 0x1006c94f0, 16 bytes, inline, placed by class name
    // ComboField::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)::$_27::operator()(ComboField::Entry const&, ComboField::Entry const&) const
    /* ComboField::DecodeTypedComponentProperties(PacketT<Array<unsigned char,
   eastl::allocator> >&, int)::$_27::TEMPNAMEPLACEHOLDERVALUE(ComboField::Entry const&,
   ComboField::Entry const&) const */

    void ComboField::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&,
                                                    int)::$_27::operator()(Entry* param_1, Entry* param_2) {
        eastl::operator<((basic_string*)param_1, (basic_string*)param_2);
    }

    // 0x1006c9590, 48 bytes, inline, placed by class name
    // ComboField::Entry::operator=(ComboField::Entry&&)
    /* ComboField::Entry::TEMPNAMEPLACEHOLDERVALUE(ComboField::Entry&&) */

    Entry* ComboField::Entry::operator=(Entry* param_1) {
        eastl::basic_string<char, BucketAllocatorEASTL>::operator=((basic_string<char, BucketAllocatorEASTL>*)this,
                                                                   (basic_string*)param_1);
        field_24 = param_1->field_24;
        field_28 = param_1->field_28;
        return this;
    }

    // 0x1006c9d90, 48 bytes, inline, placed by class name
    // ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_28::operator()(int, StringView) const
    /* ComboField::SetEntries(UIDataMappingProvider<int, StringView>
   const&)::$_28::TEMPNAMEPLACEHOLDERVALUE(int, StringView) const */

    void ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_28::operator()(int param_1,
                                                                                                 StringView param_2) {
        int local_c;

        local_c = param_1;
        eastl::vector<ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                       BucketAllocatorEASTL>>::emplace_back<StringView&,
                                                                                                            int&>(
            (vector<ComboField::Entry,
                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)(*(long*)this +
                                                                                                       872),
            (StringView*)param_2.field_0, &local_c);
    }

    // 0x1006ca5c0, 16 bytes, inline, placed by class name
    // ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_29::operator()(ComboField::Entry const&, ComboField::Entry const&) const
    /* ComboField::SetEntries(UIDataMappingProvider<int, StringView>
   const&)::$_29::TEMPNAMEPLACEHOLDERVALUE(ComboField::Entry const&,
   ComboField::Entry const&) const */

    void ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_29::operator()(Entry* param_1,
                                                                                                 Entry* param_2) {
        eastl::operator<((basic_string*)param_1, (basic_string*)param_2);
    }

    // 0x1006caa00, 16 bytes, inline, placed by class name
    // ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_30::operator()(ComboField::Entry const&, StringView) const
    /* ComboField::SetEntries(UIDataMappingProvider<int, StringView>
   const&)::$_30::TEMPNAMEPLACEHOLDERVALUE(ComboField::Entry const&, StringView) const
    */

    void ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_30::operator()(Entry* param_1,
                                                                                                 StringView param_2) {
        operator==((basic_string*)param_1, (StringView*)param_2.field_0);
    }

    // 0x1006caa10, 16 bytes, inline, placed by class name
    // ComboField::AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&, int)::$_31::operator()(ComboField::Entry const&, eastl::basic_string<char, BucketAllocatorEASTL> const&) const
    /* ComboField::AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&,
   int)::$_31::TEMPNAMEPLACEHOLDERVALUE(ComboField::Entry const&, eastl::basic_string<char,
   BucketAllocatorEASTL> const&) const */

    void ComboField::AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&,
                              int)::$_31::operator()(Entry* param_1, basic_string* param_2) {
        eastl::operator<((basic_string*)param_1, param_2);
    }

} // namespace jag::ui
