// libs/ui/components/ComboField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ComboField {
    public:
        class Entry;
        class InteractionVisualData;
        // virtual methods in vtable order
        virtual ~ComboField();
        virtual uint64_t GetType() const;
        virtual uint64_t GetSwipeable() const;
        virtual void SetEnabled(bool arg1);
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual bool IsKeyReceiver() const;
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType marginType) const;
        virtual uint64_t ProcessSwipeMovement(const math::Vector2T<int>& vector21, const math::Vector2T<int>& vector22,
                                              float arg3);
        virtual uint8_t* GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual auto GetAssociatedComponent();
        virtual bool IsAssociatedComponent(const shared_ptr<Component>& component) const;
        virtual void DrawFocus(const ComponentDependencies& componentDependencies);
        virtual void LogicFocus(const ComponentDependencies& componentDependencies, bool arg2);
        virtual void CancelFocus();
        virtual bool ShouldBlockInput(int arg1, int arg2) const;
        virtual unsigned long HandleKeyInput(int arg1, int arg2, unsigned int arg3);
        virtual void ClearEntries();
        virtual auto GetRecentValueChanges() const;
        virtual void ClearRecentValueChanges();
        ComboField(InterfaceManager* interfaceManager);
        uint8_t* GetSelectedLabel() const;
        void UpdateFilteredEntries(FilterUpdateType filterUpdateType);
        int ScrollComboField(int arg1);
        bool ScrollbarNeeded() const;
        uint16_t GetNumVisibleEntries() const;
        auto GetDropdownAreaBounds() const;
        int GetDropdownHeight() const;
        uint64_t ScrollComboFieldWithScaling(int arg1);
        unsigned short ConvertVisibleIndex(unsigned short arg1) const;
        void SelectEntryByIndex(unsigned short arg1, bool arg2);
        void GetDropdownWidth() const;
        void GetTextAreaWidth() const;
        void DrawInputBox(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                          graphics::FontHelpers* fontHelpers, int arg4, int arg5);
        void DrawEntries(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                         graphics::FontHelpers* fontHelpers, int arg4, int arg5);
        uint8_t GetHeaderVisualState() const;
        ComboField* GetVisualUV(const math::Rect<float>& rect, EntryVisualState entryVisualState) const;
        void DrawInputBoxContents(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                  graphics::FontHelpers* fontHelpers, int arg4, int arg5, int arg6, int arg7);
        uint8_t GetDropdownMaxVisibleEntries() const;
        uint8_t GetEntryHeight() const;
        void CopySelection();
        void PasteFromClipboard();
        void AddCodepoint(unsigned int arg1);
        uint64_t GetEntryIndexAtPos(int arg1, int arg2, const math::Vector2T<float>& vector2,
                                    unsigned short& arg4) const;
        float GetGraphicSliceOffset(EntryVisualState entryVisualState);
        void GetGraphicSliceHeightPercent();
        bool IsCodepointAllowed(unsigned int arg1) const;
        void BuildIndexMap();
        bool SelectEntry(int arg1, bool arg2);
        uint64_t GetEntryById(int arg1) const;
        uint16_t GetEntryIndexById(int arg1) const;
        void ClearSelection(bool arg1);
        uint32_t FlushSelectEvents();
        bool HasValidSelection() const;
        uint32_t GetSelectedValue() const;
        unsigned int SetEntries(const UIDataMappingProvider<int, StringView>& uiDataMappingProvider);
        unsigned int AddEntry(const eastl::string& str, int arg2);
        bool HasEntry(int arg1) const;
        bool RemoveEntry(int arg1);
        void ReserveEntries(unsigned long arg1);
        static float m_dropdownExpandTimeMultiplier; // = 1.0f
        static int32_t m_entryPadding;               // = 3

    private:
        unsigned short field_8;
        unsigned short field_10;
        unsigned short field_12;
        unsigned short field_14;
        uint8_t _unknown_16[32];
        unsigned char field_48;
        uint8_t _unknown_49[1];
        uint8_t field_50;
        uint8_t field_51;
        uint8_t field_52;
        uint8_t field_53;
        char field_54;
        uint8_t _unknown_55[1];
        int field_56;
        int field_60;
        int field_64;
        int field_68;
        int field_72;
        int field_76;
        int field_80;
        int field_84;
        unsigned int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[1];
        short field_102;
        uint8_t _unknown_104[160];
        VisibleShadowCastingLightInfo field_264;
        ComponentSwipeConfig field_288;
        uint8_t _unknown_293[59];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint32_t field_356;
        uint8_t _unknown_360[32];
        uint8_t** m_pValueRepresentation;
        uint8_t** field_400;
        uint8_t _unknown_408[16];
        Sprite field_424;
        uint8_t _unknown_532[36];
        TcpConnectionMessageBase field_568;
        uint8_t _unknown_616[200];
        unsigned int field_816;
        uint8_t _unknown_820[8];
        unsigned int field_828;
        uint8_t m_entryHeight;
        uint8_t m_dropdownMaxVisibleEntries;
        uint8_t field_834;
        uint8_t field_835;
        uint8_t _unknown_836[28];
        uint32_t field_864;
        uint8_t _unknown_868[364];
        int field_1232;
        uint8_t _unknown_1236[28];
        unsigned short field_1264;
        Margin field_1266;
        Margin field_1270;
        uint8_t _unknown_1274[46];
        unsigned short field_1320;
        unsigned short field_1322;
        int field_1324;
        uint32_t field_1328;
        float field_1332;
        int field_1336;
        unsigned int field_1340;
        uint8_t _unknown_1344[8];
        TextRun field_1352;
        unsigned long field_1432;
        uint8_t _unknown_1440[1];
        uint8_t field_1441;
        uint8_t field_1442;
        uint8_t _unknown_1443[5];
        uint64_t field_1448;
        uint8_t field_1456;
        uint8_t _unknown_1457[71];
        InterfaceManager* field_1528;
        uint8_t _unknown_1536[6514872];
    };

    class ComboField::Entry {
    public:
        ~Entry();
        Entry(StringView stringView, int arg2);
        Entry(Entry&& entry);
        Entry();
        Entry(const Entry& entry);
        Entry* operator=(Entry&& entry);

    private:
        uint8_t _unknown_0[24];
        int field_24;
        uint8_t field_28;
        uint8_t _unknown_29[3];
    };

    class ComboField::InteractionVisualData {
    public:
        InteractionVisualData();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
    };

    // 0x10068d800
    ComponentMultiValueMixin::ComponentMultiValueMixin() : ComponentValueMixin() {}

    // 0x10068d900
    void ComboField::SetEnabled(bool arg1) {
        SetEnabled(arg1);
        CancelFocus();
    }

    // 0x10068de50
    uint8_t* ComboField::GetSelectedLabel() const {
        uint8_t* puVar3;

        if (*PTR_empty_100ee50f8 == '\0') {
            if (___cxa_guard_acquire(PTR_empty_100ee50f8) != 0) {
                new (PTR_empty_100ee9d68) eastl::basic_string<char, BucketAllocatorEASTL>();
                ___cxa_atexit(PTR__basic_string_100ee6c78, PTR_empty_100ee9d68, 4294967296);
                ___cxa_guard_release(PTR_empty_100ee50f8);
            }
        }
        if (HasValidSelection() == '\0') {
            puVar3 = PTR_empty_100ee9d68;
        } else {
            puVar3 = &field_872[(unsigned long)field_1264];
        }
        return puVar3;
    }

    // 0x10068e720
    bool ComboField::ScrollbarNeeded() const {
        uint8_t uVar2;
        uint8_t extraout_AH;

        bool bVar1 = true;
        if (field_1324 == 0) {
            uVar2 = GetNumVisibleEntries();
            bVar1 = (unsigned short)m_dropdownMaxVisibleEntries < (((uint16_t)extraout_AH << 8) | (uint8_t)uVar2);
        }
        return bVar1;
    }

    // 0x10068e750
    uint16_t ComboField::GetNumVisibleEntries() const {
        uint16_t uVar2;

        if (field_1352->IsEmpty() == '\0') {
            uVar2 = field_1464.size();
        } else {
            uVar2 = field_872.size();
        }
        return uVar2;
    }

    // 0x10068e8c0
    int ComboField::GetDropdownHeight() const {
        uint64_t in_RAX;
        uint8_t auStack_18[6];

        unsigned short local_12 = (unsigned short)((unsigned long)in_RAX >> 48);
        auStack_18._0_4_ = (uint32_t)in_RAX;
        auStack_18 =
            (uint8_t[6])(((uint64_t)0 << 40) |
                         (uint64_t)((((uint64_t)m_dropdownMaxVisibleEntries << 32) | (uint32_t)auStack_18._0_4_)));
        uint16_t uVar1 = GetNumVisibleEntries();
        _auStack_18 = (((uint64_t)uVar1 << 48) | (uint64_t)auStack_18);
        auto puVar2 = std::min<unsigned short>(*((auStack_18 + 4)), local_12);
        return (unsigned int)m_entryHeight * (unsigned int)*puVar2;
    }

    // 0x10068ec20
    void ComboField::GetDropdownWidth() const {
        GetStreamCountLastMix();
    }

    // 0x100690890
    uint8_t ComboField::GetDropdownMaxVisibleEntries() const {
        return m_dropdownMaxVisibleEntries;
    }

    // 0x1006908a0
    uint8_t ComboField::GetEntryHeight() const {
        return m_entryHeight;
    }

    // 0x100690e20
    float ComboField::GetGraphicSliceOffset(ComboField::EntryVisualState entryVisualState) {
        return (float)(int)entryVisualState * 0.25;
    }

    // 0x100690e40
    void ComboField::GetGraphicSliceHeightPercent() {
        return 1048576000;
    }

    // 0x1006919e0
    bool ComboField::HasValidSelection() const {
        unsigned short uVar1 = field_1264;
        unsigned long uVar2 = field_872.size();
        return uVar1 < uVar2;
    }

    // 0x100691a90
    uint32_t ComboField::GetSelectedValue() const {
        long lVar3;

        bool cVar1 = HasValidSelection();
        uint32_t uVar2 = 4294967295;
        if (cVar1) {
            lVar3 = field_872[(unsigned long)field_1264];
            uVar2 = *(uint32_t*)(lVar3 + 24);
        }
        return uVar2;
    }

    // 0x100691e30
    bool ComboField::HasEntry(int arg1) const {
        return GetEntryIndexById(arg1) != -1;
    }

    // 0x1006ad3a0
    bool ComboField::SupportsMargin(Component::MarginType marginType) const {
        return marginType < 2;
    }

    // 0x1006ad3b0
    auto ComboField::GetAssociatedComponent() {
        auto result;
        enable_shared_from_this<PathingEntity> local_28;

        local_28.shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&result);
        return result;
    }

    // 0x1006ad410
    bool ComboField::IsAssociatedComponent(const shared_ptr<Component>& component) const {
        auto pIVar1 = component.end();
        return this == pIVar1;
    }

    // 0x1006ad430
    auto ComboField::GetRecentValueChanges() const {
        auto result;
        result.WrapArray<
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            field_1280);
        return result;
    }

    // 0x1006ad450
    void ComboField::ClearRecentValueChanges() {
        field_1280.clear();
    }

    // 0x1006b0170
    ComboField::InteractionVisualData::InteractionVisualData()
        : field_0(18446743415714956543), field_8(18446743197535078655), field_16(18446744071418902527),
          field_24(8608480570004996351) {}

    // 0x1006b0450
    ComboField::Entry::Entry(StringView stringView, int arg2) {
        *this = stringView->to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>();
        field_24 = arg2;
        field_28 = 1;
    }

    // 0x1006b2bd0
    ComboField::~ComboField() {
        m_pValueRepresentation = &PTR__ComboField_100f0eaf0;
        field_400 = &PTR__ComboField_100f0eb28;
        CancelFocus();
        field_1464.~fixed_vector();
        field_1352->~TextRun();
        field_1280.~fixed_vector();
        field_872.~fixed_vector();
        field_840.~basic_string();
        field_632.~ScrollBar();
        field_568->~TextData();
        ((field_424 + 96))->~Sprite();
        ((field_424 + 48))->~Sprite();
        field_424->~Sprite();
        field_408.~enable_shared_from_this();
        (&m_pValueRepresentation)->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006c8de0
    ComboField::Entry::Entry(ComboField::Entry&& entry)
        : eastl::basic_string<char, BucketAllocatorEASTL>(entry), field_28(entry.field_28), field_24(entry.field_24) {}

    // 0x1006c8e60
    ComboField::Entry::Entry() : eastl::basic_string<char, BucketAllocatorEASTL>(), field_24(-1), field_28(1) {}

    // 0x1006c94c0
    ComboField::Entry::Entry(const ComboField::Entry& entry)
        : eastl::basic_string<char, BucketAllocatorEASTL>(entry), field_28(entry.field_28), field_24(entry.field_24) {}

    // 0x1006c94f0
    void ComboField::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&,
                                                    int)::$_27::operator()(const ComboField::Entry& entry1,
                                                                           const ComboField::Entry& entry2) const {
        eastl::operator<((eastl::string*)this, (eastl::string*)entry1);
    }

    // 0x1006c9590
    Entry* ComboField::Entry::operator=(ComboField::Entry&& entry) {
        *this = entry;
        field_24 = entry.field_24;
        field_28 = entry.field_28;
        return this;
    }

    // 0x1006c9d90
    void ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_28::operator()(
        int arg1, StringView stringView) const {
        ((vector<ComboField::Entry,
                 eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)(*(long*)this + 872))
            ->emplace_back<StringView&, int&>(*stringView, arg1);
    }

    // 0x1006ca5c0
    void ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_29::operator()(
        const ComboField::Entry& entry1, const ComboField::Entry& entry2) const {
        eastl::operator<((eastl::string*)this, (eastl::string*)entry1);
    }

    // 0x1006caa00
    void ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::$_30::operator()(
        const ComboField::Entry& entry, StringView stringView) const {
        *this == entry;
    }

    // 0x1006caa10
    void ComboField::AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&,
                              int)::$_31::operator()(const ComboField::Entry& entry,
                                                     const eastl::basic_string<char, BucketAllocatorEASTL>& str) const {
        eastl::operator<((eastl::string*)this, (eastl::string*)entry);
    }

} // namespace jag::ui
