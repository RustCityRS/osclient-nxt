// libs/tweaky/Tweaky.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky.h"

namespace jag::tweak {
    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    Tweaky::GetFont() const;

    // 0x10005d8c0: the linker folded this into oldscape::OSClientConsoleUI::GetBounds() const, which has identical code
    Tweaky::GetPlacement() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    Tweaky::GetRoot() const;

    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    Tweaky::GetRT7Core() const;

    // 0x1004f3660: the linker folded this into game::BaseConfigTypeList::GetLanguage() const, which has identical code
    Tweaky::GetFontHelper() const;

    // 0x1006924c0: the linker folded this into ui::Component::GetDynamicRoot() const, which has identical code
    Tweaky::GetFocus() const;

    // 0x100a3b3b0, 304 bytes, base-object constructor, placed by class name and debug map
    // Tweaky::Tweaky(graphics::RT7Core*, graphics::FontHelpers*, input::Input*)
    void Tweaky::Tweaky(RT7Core* param_1, FontHelpers* param_2, Input* param_3) {
        shared_ptr local_50;
        undefined1* local_40;
        int local_38[2];

        new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_40 = &field_32;
        new (local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_48 = param_1;
        field_56 = param_2;
        new (field_64, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_80 = 0;
        field_88 = param_3;
        field_96 = 0;
        new (&field_104, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_120 = 0;
        field_132 = 0;
        field_136 = 0;
        m_visibleX = -1;
        m_visibleY = -1;
        m_colour = 4294967295;
        field_152 = 538976384;
        *(undefined4*)&field_156 = 16843009;
        local_38[0] = 0;
        local_38[1] = 0;
        make_shared<Container, int, int, char const(&)[1]>((jag*)&local_50, local_38, local_38 + 1, "");
        shared_ptr<Container>::operator=((shared_ptr<Container>*)field_16, &local_50);
        local_50.~shared_ptr();
    }

    // 0x100a3b5d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Tweaky::Tweaky(graphics::RT7Core*, graphics::FontHelpers*, input::Input*): jumps straight to the base-object constructor

    // 0x100a3b5e0, 144 bytes, base-object destructor, placed by class name and debug map
    // Tweaky::~Tweaky()
    void Tweaky::~Tweaky() {
        long* plVar1;

        plVar1 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)field_16);
        (**(code**)(*plVar1 + 16))(plVar1);
        shared_ptr<Container>::reset();
        field_64->~shared_ptr();
        (&field_32)->~weak_ptr();
        field_16->~shared_ptr();
        ~enable_shared_from_this();
    }

    // 0x100a3b6b0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Tweaky::~Tweaky(): jumps straight to the base-object destructor

    // 0x100a3b6c0, 256 bytes, placed by class name and debug map
    // Tweaky::AddGlobalControls()
    void Tweaky::AddGlobalControls() {
        shared_ptr local_68;
        shared_ptr local_58[3];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(Event_const&)>::function<Tweaky::AddGlobalControls()::__0, void>(local_58, this);
        AddButton(this, "ResetMenu", (function*)local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        std::function<void(Event_const&)>::function<Tweaky::AddGlobalControls()::__1, void>(local_58, this);
        AddButton(this, "ResetAll", (function*)local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        make_shared<SizeControl>((jag*)local_58);
        new (&local_68) shared_ptr<oldscape::dash3d::Decor>(local_58);
        Add(this, &local_68);
        local_68.~shared_ptr();
        local_58->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a3b7c0, 160 bytes, placed by class name and debug map
    // Tweaky::AddButton(char const*, std::function<void (Event const&)> const&)
    /* Tweaky::AddButton(char const*, std::function<void (Event const&)> const&)
    */

    void Tweaky::AddButton(char* param_1, function* param_2) {
        Control* this_00;
        char* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_48 = param_1;
        make_shared<Button, char const*&>((jag*)&local_40, &local_48);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)&local_40);
        this_00->SetHandler(param_2);
        local_40.~shared_ptr();
    }

    // 0x100a3b920, 176 bytes, placed by class name and debug map
    // Tweaky::Add(shared_ptr<Control> const&)
    void Tweaky::Add(shared_ptr* param_1) {
        long* plVar1;
        Container* this_00;
        enable_shared_from_this<PathingEntity> local_50[16];
        weak_ptr<oldscape::dash3d::Decor> local_40[16];

        plVar1 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)field_16);
        local_50->shared_from_this();
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_40, (weak_ptr*)local_50);
        (**(code**)(*plVar1 + 232))(plVar1, local_40);
        local_40->~weak_ptr();
        local_50->~shared_ptr();
        this_00 = (Container*)shared_ptr<Container>::operator->((shared_ptr<Container>*)field_16);
        this_00->Add(param_1);
    }

    // 0x100a3ddd0, 528 bytes, placed by __FILE__ string
    // Tweaky::SetFocusNext()
    void Tweaky::SetFocusNext() {
        bool bVar1;
        bool bVar2;
        shared_ptr* this_00;
        long* plVar4;
        BucketAllocatorEASTL* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar5;
        shared_ptr* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        undefined1 auVar6[16];
        RT7Core* local_80;
        RT7Core* local_78;
        shared_ptr local_68;
        shared_ptr local_58;
        weak_ptr<oldscape::dash3d::Decor> local_48[16];
        RT7Core* local_38;

        GetFocus((Tweaky*)&local_68);
        bVar1 = shared_ptr::operator_cast_to_bool(&local_68);
        if (bVar1) {
            shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_68);
            local_48->GetParent();
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            local_48->~weak_ptr();
            bVar1 = shared_ptr::operator_cast_to_bool(&local_58);
            if (bVar1) {
                shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_58);
                local_48->end();
                shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_58);
                local_80.begin();
                new (&local_78)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(0, extraout_RDX);
                new (&local_38) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                    (ListIterator*)&local_80);
                bVar1 = true;
                phVar5 = extraout_RDX_00;
            LAB_100a3deba:
                if (bVar1) {
                    auVar6 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                    bVar2 = operator==(auVar6._0_8_, &local_68, auVar6._8_8_);
                    if (bVar2) {
                        local_78 = local_38;
                        bVar1 = false;
                    }
                } else {
                    bVar2 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_48, phVar5);
                    if (!bVar2)
                        goto LAB_100a3df86;
                    this_00 =
                        (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                    plVar4 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_00);
                    if ((**(code**)(*plVar4 + 216))(plVar4) != '\0') {
                        SetFocus((Tweaky*)this, this_00);
                        goto LAB_100a3df86;
                    }
                    bVar2 = operator==((jag*)this_00, &local_68, extraout_RDX_01);
                    if (bVar2)
                        goto LAB_100a3df86;
                }
                auVar6 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                bVar2 = eastl::operator==(auVar6._0_8_, (hashtable_iterator_base*)local_48, auVar6._8_8_);
                phVar5 = extraout_RDX_02;
                if (bVar2) {
                    if (bVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "!finding",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky.cpp",
                            653, "Did not find the Control in the Container it says it belongs in");
                    }
                    local_38 = local_80;
                }
                goto LAB_100a3deba;
            }
        LAB_100a3df86:
            local_58.~shared_ptr();
        }
        local_68.~shared_ptr();
    }

    // 0x100a3e000, 544 bytes, placed by __FILE__ string
    // Tweaky::SetFocusPrevious()
    void Tweaky::SetFocusPrevious() {
        bool bVar1;
        bool bVar2;
        bool bVar3;
        shared_ptr* this_00;
        long* plVar5;
        BucketAllocatorEASTL* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* phVar6;
        shared_ptr* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        undefined1 auVar7[16];
        list<console::Line, eastl::allocator> local_80[8];
        undefined** local_78;
        shared_ptr local_68;
        shared_ptr local_58;
        undefined** local_48;
        undefined** local_40[2];

        GetFocus((Tweaky*)&local_68);
        bVar2 = shared_ptr::operator_cast_to_bool(&local_68);
        if (bVar2) {
            shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_68);
            local_40->GetParent();
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            local_40->~weak_ptr();
            bVar2 = shared_ptr::operator_cast_to_bool(&local_58);
            if (bVar2) {
                shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_58);
                local_40->end();
                shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_58);
                eastl::list<console::Line, eastl::allocator>::begin(local_80);
                new (&local_78)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(0, extraout_RDX);
                new (&local_48)
                    eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                bVar1 = true;
                bVar2 = false;
                phVar6 = extraout_RDX_00;
                do {
                    if (((!bVar1) && (bVar2)) &&
                        (bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)local_80, phVar6),
                         !bVar3))
                        break;
                    auVar7 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                    this_00 = auVar7._0_8_;
                    if (bVar1) {
                        bVar3 = operator==((jag*)this_00, &local_68, auVar7._8_8_);
                        phVar6 = extraout_RDX_04;
                        if (bVar3) {
                            local_78 = local_48;
                            bVar1 = false;
                        }
                    } else {
                        plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_00);
                        if ((**(code**)(*plVar5 + 216))(plVar5) != '\0') {
                            SetFocus((Tweaky*)this, this_00);
                            break;
                        }
                        bVar3 = operator==((jag*)this_00, &local_68, extraout_RDX_02);
                        phVar6 = extraout_RDX_03;
                        if (bVar3)
                            break;
                    }
                    bVar3 = eastl::operator==((eastl*)&local_48, (hashtable_iterator_base*)local_80, phVar6);
                    if (bVar3) {
                        if (bVar1) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("!finding",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/"
                                      "Tweaky.cpp",
                                      700, "Did not find the Control in the Container it says it belongs in");
                        }
                        local_48 = local_40[0];
                        bVar2 = true;
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                    phVar6 = extraout_RDX_01;
                } while (true);
            }
            local_58.~shared_ptr();
        }
        local_68.~shared_ptr();
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a3b4e0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Container>::type make_shared<tweak::Container, int, int, char const (&) [1]>(int&&, int&&, char const (&) [1])
    jag* make_shared<tweak::Container, int, int, char const (&)[1]>(int* param_1, int* param_2, char* param_3) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        Container* local_40[2];

        pvVar1 = (void*)aligned_alloc(336, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::Container, int, int, char const(&)[1]>((void*)((long)pvVar1 + 32),
                                                                                      param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a3b880, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::SizeControl>::type make_shared<tweak::SizeControl>()
    jag* make_shared<tweak::SizeControl>() {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_2c;
        SizeControl* local_28[2];

        pvVar1 = (void*)aligned_alloc(336, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<tweak::SizeControl>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::SizeControl>, int, tweak::SizeControl*&>(
                    pvVar1, &local_2c, local_28);
            shared_ptr_do_enable_shared_from_this<tweak::SizeControl>(prVar2, local_28[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
