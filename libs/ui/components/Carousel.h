// libs/ui/components/Carousel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Carousel {
    public:
        class Entry;
        // virtual methods in vtable order
        virtual ~Carousel();
        virtual GetType() const;
        virtual GetSwipeable() const;
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual RequiresSeparatePreviousValueTrigger() const;
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float);
        virtual ComponentSingleValueMultiOptionMixin GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual GetPreviousValue() const;
        virtual void GetCurrentValue() const;
        virtual void ClearEntries();
        Carousel();
        short WrapSelectedEntryOffset(int) const;
        void SetEntrySelectedByIndex(unsigned short, bool);
        void ApplyScroll(float);
        ulong PrepareEntryIcons(graphics::SpriteAtlasManager&);
        void UpdateAnimations(float);
        void DrawBackground(graphics::RT7Core*, int, int);
        void DrawSelectedEntry(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int);
        void DrawButtons(graphics::RT7Core*, int, int);
        GetEntryIndexById(int) const;
        bool SetEntryEnabled(int, bool);
        bool GetEntryEnabled(int) const;
        bool SetSelectedEntry(int, bool);
        uint AddEntry(int, eastl::basic_string<char, BucketAllocatorEASTL> const&);
        bool HasEntry(int) const;
        uint AddEntry(int, int);
        GetSelectedEntryID() const;

        // data members, from how the methods use this: 1000 bytes
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
        ComponentSingleValueMultiOptionMixin m_valueRepresentation; // offset 392
        SpriteData field_400;                                       // offset 400
        SpriteData field_448;                                       // offset 448
        TextData field_496;                                         // offset 496
        ushort field_560;                                           // offset 560
        ushort field_562;                                           // offset 562
        ushort field_564;                                           // offset 564
        char _unknown_566[362];
        ushort m_entrySelectedByIndex; // offset 928
        ushort field_930;              // offset 930
        byte field_932;                // offset 932
        byte field_933;                // offset 933
        byte field_934;                // offset 934
        byte field_935;                // offset 935
        float field_936;               // offset 936
        undefined1 field_940;          // offset 940
        char _unknown_941[27];
        ButtonElement field_968; // offset 968
    };

    class Carousel::Entry {
    public:
        ~Entry();
        Entry(Entry&&);
        Entry();
        Entry(int, eastl::basic_string<char, BucketAllocatorEASTL> const&);
        Entry(int, int);

        // data members, from how the methods use this: 56 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        int field_4; // offset 4
        char _unknown_8[24];
        int field_32; // offset 32
        char _unknown_36[4];
        undefined8 field_40; // offset 40
        char _unknown_48[8];
    };

    // 0x10068b3b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentSingleValueMultiOptionMixin::ComponentSingleValueMultiOptionMixin()
    void ComponentSingleValueMultiOptionMixin::ComponentSingleValueMultiOptionMixin() {
        new (this) ComponentValueMixin();
        field_0 = PTR_vtable_100ee7da8 + 16;
    }

    // 0x10068c8b0, 32 bytes, inline, placed by class name and debug map
    // Carousel::HasRecentValueChange() const
    undefined2 Carousel::HasRecentValueChange() {
        return CONCAT11((char)(field_930 >> 8), field_930 != m_entrySelectedByIndex);
    }

    // 0x10068c930, 32 bytes, inline, placed by class name and debug map
    // Carousel::HasEntry(int) const
    bool Carousel::HasEntry(int param_1) {
        return GetEntryIndexById(this, param_1) != -1;
    }

    // 0x1006ad040, 16 bytes, complete-object destructor, inline, placed by class name
    // Carousel::~Carousel(): jumps straight to the base-object destructor

    // 0x1006ad050, 32 bytes, deleting destructor, inline, placed by class name
    // Carousel::~Carousel()
    void Carousel::~Carousel() {
        ~Carousel(this);
        operator_delete(this);
    }

    // 0x1006ad070, 32 bytes, inline, placed by class name
    // Carousel::SetMargin(Component::MarginType, Margin)
    void Carousel::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 0) {
            field_932 = (char)param_3;
            field_933 = (char)((uint)param_3 >> 8);
            field_934 = (char)((uint)param_3 >> 16);
            field_935 = (char)((uint)param_3 >> 24);
            return;
        }
    }

    // 0x1006ad090, 48 bytes, inline, placed by class name
    // Carousel::GetMargin(Component::MarginType) const
    Margin Carousel::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 0) {
            local_c.field_0 = field_932;
            local_c.field_1 = field_933;
            local_c.field_2 = field_934;
            local_c.field_3 = field_935;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006ad0c0, 32 bytes, inline, placed by class name
    // Carousel::NotifyRecentValueChangeHandled()
    void Carousel::NotifyRecentValueChangeHandled() {
        field_930 = m_entrySelectedByIndex;
    }

    // 0x1006ad0e0, 112 bytes, inline, placed by class name
    // Carousel::GetPreviousValue() const
    undefined4 Carousel::GetPreviousValue() {
        undefined4 uVar1;
        ulong uVar2;
        long lVar3;

        uVar2 = (&field_568)->size();
        if (uVar2 <= field_930) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_entries.size() > m_lastSelectedEntryIndex",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.h",
                      56, (char*)0);
        }
        if ((ulong)field_930 == 65535) {
            uVar1 = 0;
        } else {
            lVar3 = eastl::vector<Carousel::Entry,
                                  eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<Carousel::Entry,
                        eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                (ulong)field_930);
            uVar1 = *(undefined4*)(lVar3 + 4);
        }
        return uVar1;
    }

    // 0x1006ad150, 16 bytes, inline, placed by class name
    // Carousel::GetCurrentValue() const
    void Carousel::GetCurrentValue() {
        GetSelectedEntryID(this);
    }

    // 0x1006b0110, 16 bytes, complete-object destructor, inline, placed by class name
    // Carousel::Entry::~Entry(): jumps straight to the base-object destructor

    // 0x1006b0120, 48 bytes, base-object destructor, inline, placed by class name
    // Carousel::Entry::~Entry()
    void Carousel::Entry::~Entry() {
        (&field_48)->~shared_ptr();
        (&field_8)->~basic_string();
    }

    // 0x1006b2a70, 112 bytes, base-object destructor, inline, placed by class name
    // Carousel::~Carousel()
    void Carousel::~Carousel() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__Carousel_100f0e680;
        *(undefined***)m_valueRepresentation = &PTR__Carousel_100f0e7c0;
        (&field_568)->~fixed_vector();
        field_496->~TextData();
        field_448->~Sprite();
        field_400->~Sprite();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)m_valueRepresentation, in_RSI, extraout_RDX);
        ~Component();
    }

    // 0x1006b2ae0, 112 bytes, inline, placed by class name
    // Carousel::GetSelectedEntryID() const
    undefined4 Carousel::GetSelectedEntryID() {
        undefined4 uVar1;
        ulong uVar2;
        long lVar3;

        uVar2 = (&field_568)->size();
        if (uVar2 <= m_entrySelectedByIndex) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_entries.size() > m_selectedEntryIndex",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.h",
                      45, (char*)0);
        }
        if ((ulong)m_entrySelectedByIndex == 65535) {
            uVar1 = 0;
        } else {
            lVar3 = eastl::vector<Carousel::Entry,
                                  eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<Carousel::Entry,
                        eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                (ulong)m_entrySelectedByIndex);
            uVar1 = *(undefined4*)(lVar3 + 4);
        }
        return uVar1;
    }

    // 0x1006c5b90, 16 bytes, complete-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(Carousel::Entry&&): jumps straight to the base-object constructor

    // 0x1006c5ba0, 96 bytes, base-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(Carousel::Entry&&)
    void Carousel::Entry::Entry(Entry* param_1) {
        undefined8 uVar1;
        undefined3 uVar2;
        int iVar3;
        undefined4 uVar4;

        uVar2 = *(undefined3*)&param_1->field_1;
        iVar3 = param_1->field_4;
        field_0 = param_1->field_0;
        *(undefined3*)&field_1 = uVar2;
        field_4 = iVar3;
        new (&field_8) eastl::basic_string<char, BucketAllocatorEASTL>();
        uVar4 = *(undefined4*)&param_1->field_36;
        uVar1 = param_1->field_40;
        field_32 = param_1->field_32;
        *(undefined4*)&field_36 = uVar4;
        field_40 = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_48, (shared_ptr*)&param_1->field_48);
    }

    // 0x1006c5c40, 16 bytes, complete-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(): jumps straight to the base-object constructor

    // 0x1006c5c50, 96 bytes, base-object constructor, inline, placed by class name
    // Carousel::Entry::Entry()
    void Carousel::Entry::Entry() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 1;
        field_4 = -1;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_32 = -1;
        field_40 = 18446744073709551615;
        new (&field_48, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1006c5d20, 16 bytes, complete-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(int, eastl::basic_string<char, BucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x1006c5e40, 96 bytes, base-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(int, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    void Carousel::Entry::Entry(int param_1, basic_string* param_2) {
        field_0 = 1;
        field_4 = param_1;
        new (&field_8) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_32 = -1;
        field_40 = 18446744073709551615;
        new (&field_48, (_func_decltype_nullptr*)param_2)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1006c5ea0, 16 bytes, complete-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(int, int): jumps straight to the base-object constructor

    // 0x1006c5f80, 96 bytes, base-object constructor, inline, placed by class name
    // Carousel::Entry::Entry(int, int)
    void Carousel::Entry::Entry(int param_1, int param_2) {
        undefined4 in_register_00000034;

        field_0 = 1;
        field_4 = param_1;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_32 = param_2;
        field_40 = 18446744073709551615;
        new (&field_48, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
    }

} // namespace jag::ui

namespace jag::math {
    // 0x10068b780, 32 bytes, inline, placed by debug map only (low confidence)
    // int sign<int>(int)
    int sign<int>(int param_1) {
        return (uint)(0 < param_1) + (param_1 >> 31);
    }

} // namespace jag::math
