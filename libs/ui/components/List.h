// libs/ui/components/List.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class List {
    public:
        class Entry;
        class EntryIconData;
        class InteractionVisualData;
        // virtual methods in vtable order
        virtual ~List();
        virtual uint64_t GetType() const;
        virtual uint64_t GetSwipeable() const;
        virtual void SetEnabled(bool arg1);
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType marginType) const;
        virtual ComponentMultiValueMixin GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual auto GetAssociatedComponent();
        virtual bool IsAssociatedComponent(const shared_ptr<Component>& component) const;
        virtual void DrawFocus(const ComponentDependencies& componentDependencies);
        virtual void LogicFocus(const ComponentDependencies& componentDependencies, bool arg2);
        virtual void CancelFocus();
        virtual bool ShouldBlockInput(int arg1, int arg2) const;
        virtual auto GetRecentValueChanges() const;
        virtual void ClearRecentValueChanges();
        virtual uint64_t NotifyFocusGain();
        void GetDropdownListWidth() const;
        List(InterfaceManager* interfaceManager);
        bool IsDropdown() const;
        unsigned long PrepareEntryIcons(graphics::SpriteAtlasManager& spriteAtlasManager);
        void DrawDropdown(const ComponentDependencies& componentDependencies, int arg2, int arg3);
        int GetDropdownListHeight() const;
        void DrawEntries(const ComponentDependencies& componentDependencies, int arg2, int arg3);
        int ScrollList(int arg1);
        bool IsScrollBarNeeded() const;
        short GetNumVisibleEntries() const;
        auto GetScrollAreaBounds(int arg1, int arg2) const;
        uint64_t ScrollListWithScaling(int arg1);
        uint64_t GetEntryIndexAtPos(int arg1, int arg2, const math::Vector2T<float>& vector2,
                                    unsigned short& arg4) const;
        unsigned long SetEntrySelectedByIndex(unsigned short arg1, bool arg2, bool arg3);
        auto GetScrollAreaBounds() const;
        void GetEntryAreaHeight() const;
        unsigned long ConvertVisibleIndexToEntryIndex(unsigned short& arg1) const;
        uint64_t GetEntryById(int arg1) const;
        uint16_t GetEntryIndexById(int arg1) const;
        bool SetEntryVisible(int arg1, bool arg2);
        bool SetEntryEnabled(int arg1, bool arg2);
        uint64_t GetEntryVisible(int arg1) const;
        uint64_t GetEntryEnabled(int arg1) const;
        void SetEntrySelected(int arg1, bool arg2, bool arg3);
        bool GetEntrySelected(int arg1) const;
        bool SetEntryIcon(int arg1, int arg2);
        void SetSelectionLimit(unsigned char arg1);
        unsigned int AddEntry(const eastl::string& str, int arg2);
        bool HasEntry(int arg1) const;
        void ReserveEntries(unsigned long arg1);
        void ClearEntries();
        uint8_t GetDropdownHeaderVisualState() const;
        List* GetVisualUV(const math::Rect<float>& rect, EntryVisualState entryVisualState) const;
        float GetGraphicSliceOffset(EntryVisualState entryVisualState);
        void GetGraphicSliceHeightPercent();
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
        uint8_t _unknown_104[8];
        ComponentOpConfig field_112;
        uint8_t _unknown_256[8];
        VisibleShadowCastingLightInfo field_264;
        ComponentSwipeConfig field_288;
        uint8_t _unknown_293[59];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint32_t field_356;
        uint8_t _unknown_360[32];
        FocusComponent field_392;
        ComponentMultiValueMixin m_valueRepresentation;
        uint8_t _unknown_408[16];
        SpriteData field_424;
        SpriteData field_472;
        SpriteData field_520;
        TextData field_568;
        InteractionVisualData field_632;
        char field_656;
        uint8_t field_657;
        uint8_t field_658;
        uint8_t field_659;
        uint8_t field_660;
        uint8_t field_661;
        uint8_t _unknown_662[386];
        int field_1048;
        uint8_t _unknown_1052[132];
        short field_1184;
        uint8_t _unknown_1186[174];
        uint8_t field_1360;
        uint8_t field_1361;
        uint8_t field_1362;
        uint8_t field_1363;
        uint8_t field_1364;
        uint8_t field_1365;
        uint8_t field_1366;
        uint8_t field_1367;
        uint16_t field_1368;
        unsigned short field_1370;
        unsigned int field_1372;
        uint8_t _unknown_1376[4];
        uint8_t field_1380;
        uint8_t _unknown_1381[3];
        float field_1384;
        int field_1388;
        unsigned int field_1392;
        uint8_t field_1396;
        uint8_t _unknown_1397[3];
        InterfaceManager* field_1400;
        uint8_t _unknown_1408[25144];
    };

    class List::Entry {
    public:
        ~Entry();
        bool IsEnabled() const;
        bool IsSelected() const;
        void SetSelected(bool arg1);
        bool IsVisible() const;
        void SetVisible(bool arg1);
        void SetEnabled(bool arg1);
        Entry(Entry&& entry);
        Entry();
        Entry(eastl::string str, int arg2);

    private:
        uint8_t _unknown_0[24];
        int field_24;
        uint8_t field_28;
        uint8_t _unknown_29[3];
    };

    class List::EntryIconData {
    public:
        ~EntryIconData();
        EntryIconData(EntryIconData&& fileState);
        EntryIconData();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        long field_8;
        uint8_t _unknown_16[8];
    };

    class List::InteractionVisualData {
    public:
        InteractionVisualData();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
    };

    // 0x10069c100
    bool List::IsDropdown() const {
        return field_656 != '\0';
    }

    // 0x10069cc50
    int List::GetDropdownListHeight() const {
        uint32_t in_EAX;
        uint64_t uStack_18;

        uStack_18._0_4_ = in_EAX;
        uint16_t uVar1 = GetNumVisibleEntries();
        uStack_18._0_6_ = (((uint64_t)uVar1 << 32) | (uint32_t)((uint32_t)uStack_18));
        uStack_18 = (unsigned long)(((uint64_t)field_656 << 48) | (uint64_t)((uint64_t)uStack_18));
        auto puVar2 = std::min<unsigned short>(*((unsigned short*)((long)&uStack_18 + 4)),
                                               *((unsigned short*)((long)&uStack_18 + 6)));
        return (unsigned int)field_658 * (unsigned int)*puVar2;
    }

    // 0x10069dac0
    bool List::IsScrollBarNeeded() const {
        uint8_t bVar1;
        unsigned short uVar4;

        bool cVar2 = field_1192.GetAutoHide();
        bool bVar3 = true;
        if ((cVar2) && (field_1372 == 0)) {
            uVar4 = GetNumVisibleEntries();
            bVar1 = field_658;
            bVar3 = GetEntryAreaHeight() < (int)((unsigned int)bVar1 * (unsigned int)uVar4);
        }
        return bVar3;
    }

    // 0x10069db20
    short List::GetNumVisibleEntries() const {
        return field_664.size() - field_1184;
    }

    // 0x10069de90
    bool List::Entry::IsEnabled() const {
        return (field_28 & 2) == 0;
    }

    // 0x10069e1b0
    bool List::Entry::IsSelected() const {
        return (field_28 & 4) >> 2;
    }

    // 0x10069e4d0
    auto List::GetScrollAreaBounds() const {
        auto result;
        GetScrollAreaBounds(&result, this, 0, 0);
        return result;
    }

    // 0x10069ec80
    void List::Entry::SetSelected(bool arg1) {
        field_28 = arg1 << 2 | field_28 & 251;
    }

    // 0x10069f2d0
    bool List::Entry::IsVisible() const {
        return (field_28 & 1) == 0;
    }

    // 0x10069f2e0
    void List::Entry::SetVisible(bool arg1) {
        field_28 = !arg1 | field_28 & 254;
    }

    // 0x10069f360
    void List::Entry::SetEnabled(bool arg1) {
        field_28 = !arg1 * '\x02' | field_28 & 253;
    }

    // 0x10069f9b0
    bool List::HasEntry(int arg1) const {
        return GetEntryIndexById(arg1) != -1;
    }

    // 0x10069ff00
    float List::GetGraphicSliceOffset(List::EntryVisualState entryVisualState) {
        return (float)(int)entryVisualState * 0.25;
    }

    // 0x10069ff20
    void List::GetGraphicSliceHeightPercent() {
        return 1048576000;
    }

    // 0x1006ada30
    auto List::GetAssociatedComponent() {
        auto result;
        enable_shared_from_this<PathingEntity> local_28;

        local_28.shared_from_this();
        result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return result;
    }

    // 0x1006ada90
    auto List::GetRecentValueChanges() const {
        auto result;
        result.WrapArray<
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            field_1080);
        return result;
    }

    // 0x1006adab0
    void List::ClearRecentValueChanges() {
        field_1080.clear();
    }

    // 0x1006b2390
    List::InteractionVisualData::InteractionVisualData()
        : field_0(858993663), field_8(18446743415714956543), field_16(18446743197535078655) {}

    // 0x1006d4f90
    List::Entry::Entry() : eastl::basic_string<char, BucketAllocatorEASTL>(), field_24(-1), field_28(0) {}

    // 0x1006d5860
    List::EntryIconData::EntryIconData() : field_0(4294967295), field_8(-1) {
        new (&field_16) shared_ptr();
    }

    // 0x1006d59c0
    List::Entry::Entry(eastl::basic_string<char, BucketAllocatorEASTL> str, int arg2)
        : eastl::basic_string<char, BucketAllocatorEASTL>(*str), field_24(arg2), field_28(0) {}

} // namespace jag::ui

namespace jag::tweak {
    // 0x1006bd050
    List::List(const char* str, eastl::vector<eastl::string>&& strs)
        : Control(0, 0, 7, str), field_248(10), field_252(0), field_256(4294967295), field_260(0), field_264(0),
          field_268(0), field_272(0), field_276(0), field_280(4294967295), field_308(false) {
        field_309 = '\0';
        field_300 = 0.0;
        field_304 = 0.0;
        field_216.swap(strs);
    }

    // 0x100a4ad60
    void List::NavigateUp() {
        field_252 = field_252 - 1;
        ValidatePosition();
    }

    // 0x100a4ad80
    void List::NavigateDown() {
        field_252 = field_252 + 1;
        ValidatePosition();
    }

    // 0x100a4ada0
    void List::NavigatePageUp() {
        field_252 = field_252 - field_272;
        field_260 = field_260 - field_272;
        ValidatePosition();
    }

    // 0x100a4adc0
    void List::NavigatePageDown() {
        field_252 = field_252 + field_272;
        field_260 = field_260 + field_272;
        ValidatePosition();
    }

    // 0x100a4ade0
    void List::NavigateHome() {
        field_252 = 0;
        ValidatePosition();
    }

    // 0x100a4ae00
    void List::NavigateEnd() {
        field_252 = field_216.size() - 1;
        ValidatePosition();
    }

    // 0x100a51820
    uint8_t* List::GetCurrentListItemText() const {
        int iVar2;

        EnumOptionToggle EVar1 = field_252;
        uint8_t* puVar3 = &eastl::EMPTY_STRING;
        if (-1 < (int)EVar1) {
            iVar2 = field_216.size();
            if ((int)EVar1 < iVar2) {
                puVar3 = &field_216[(long)(int)field_252];
            }
        }
        return puVar3;
    }

    // 0x100a52c70
    List::~List() {
        field_216.~vector();
    }

} // namespace jag::tweak
