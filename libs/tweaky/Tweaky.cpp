// libs/tweaky/Tweaky.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky.h"

namespace jag::tweak {
    // 0x100049810: Tweaky::GetFont() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x10005d8c0: Tweaky::GetPlacement() const has the same machine code as oldscape::OSClientConsoleUI::GetBounds() const

    // 0x1000b9950: Tweaky::GetRoot() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000fcbb0: Tweaky::GetRT7Core() const has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x1004f3660: Tweaky::GetFontHelper() const has the same machine code as game::BaseConfigTypeList::GetLanguage() const

    // 0x1006924c0: Tweaky::GetFocus() const has the same machine code as ui::Component::GetDynamicRoot() const

    // 0x100a3b3b0
    Tweaky::Tweaky(graphics::RT7Core* rt7Core, graphics::FontHelpers* fontHelpers, input::Input* input)
        : oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob() {
        ReturnValue local_50;
        int local_38[2];

        uint8_t* local_40 = &field_32;
        new (local_40) shared_ptr();
        m_pRT7Core = rt7Core;
        m_pFontHelper = fontHelpers;
        new (m_font) shared_ptr();
        field_80 = 0;
        field_88 = input;
        field_96 = 0;
        new (&m_placement) shared_ptr();
        field_120 = 0;
        field_132 = 0;
        field_136 = 0;
        m_visibleX = -1;
        m_visibleY = -1;
        *(uint64_t*)&m_colour = 2314885946891304959;
        *(uint32_t*)&field_156 = 16843009;
        local_38[0] = 0;
        local_38[1] = 0;
        make_shared<Container, int, int, char const(&)[1]>(&local_50, local_38, local_38 + 1, "");
        *m_root = local_50;
    }

    // 0x100a3b5e0
    Tweaky::~Tweaky() {
        uint8_t* this_00 = m_root;
        long* plVar1 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
        this_00->reset();
        m_font->~shared_ptr();
        field_32.~weak_ptr();
        this_00->~shared_ptr();
    }

    // 0x100a3b6c0
    void Tweaky::AddGlobalControls() {
        ReturnValue local_58;

        std::function<void(Event const&)>::function<Tweaky::AddGlobalControls()::__0, void>(
            (function<void(Event const&)>*)&local_58, (__0*)this);
        AddButton("ResetMenu", local_58);
        std::function<void(Event const&)>::function<Tweaky::AddGlobalControls()::__1, void>(
            (function<void(Event const&)>*)&local_58, (__1*)this);
        AddButton("ResetAll", local_58);
        make_shared<SizeControl>(&local_58);
        shared_ptr<oldscape::dash3d::Decor> local_68(&local_58);
        Add(local_68);
    }

    // 0x100a3b7c0
    void Tweaky::AddButton(const char* str, std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;

        char* local_48 = str;
        make_shared<Button, char const*&>(&local_40, &local_48);
        shared_ptr<oldscape::dash3d::Decor> local_30(&local_40);
        Add(local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a3b920
    void Tweaky::Add(const shared_ptr<Control>& control) {
        enable_shared_from_this<PathingEntity> local_50;

        long* plVar1 = (long*)(*m_root).operator->();
        local_50.shared_from_this();
        weak_ptr<oldscape::dash3d::Decor> local_40(local_50);
        (**(void (**)(...))(*plVar1 + 232))(plVar1, &local_40);
        ((Container*)(*m_root).operator->())->Add(control);
    }

    // 0x100a3ddd0
    void Tweaky::SetFocusNext() {
        bool bVar1;
        bool bVar3;
        long lVar4;
        shared_ptr<Control>* this_01;
        long* plVar5;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        eastl* this_02;
        ReturnValue local_80;
        ReturnValue local_78;
        shared_ptr local_68;
        shared_ptr local_58;
        ReturnValue local_48;
        ReturnValue local_38;

        GetFocus((ReturnValue*)&local_68, this);
        bool cVar2 = shared_ptr::operator_cast_to_bool(&local_68);
        if (cVar2) {
            local_48 = ((Control*)local_68.operator->())->GetParent();
            local_58 = local_48.lock();
            cVar2 = shared_ptr::operator_cast_to_bool(&local_58);
            if (cVar2) {
                lVar4 = local_58.operator->();
                local_48 = ((lVar4 + 216))->end();
                lVar4 = local_58.operator->();
                local_80 = ((lVar4 + 216))->begin();
                new (&local_78)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(nullptr);
                new (&local_38) eastl::ListIterator(&local_80);
                bVar1 = true;
            LAB_100a3deba:
                if (bVar1) {
                    midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)*local_38;
                    bVar3 = *midiRequest1 == local_68;
                    if (bVar3) {
                        local_78 = local_38;
                        bVar1 = false;
                    }
                } else {
                    cVar2 = local_38 != local_48;
                    if (!cVar2)
                        goto LAB_100a3df86;
                    this_01 = (shared_ptr<Control>*)*local_38;
                    plVar5 = (long*)(*this_01).operator->();
                    cVar2 = (**(void (**)(...))(*plVar5 + 216))(plVar5);
                    if (cVar2) {
                        SetFocus(*this_01);
                        goto LAB_100a3df86;
                    }
                    bVar3 = *this_01 == local_68;
                    if (bVar3)
                        goto LAB_100a3df86;
                }
                this_02 = (eastl*)++local_38;
                cVar2 = *this_02 == local_48;
                if (cVar2) {
                    if (bVar1) {
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
        }
    }

    // 0x100a3e000
    void Tweaky::SetFocusPrevious() {
        bool bVar1;
        bool bVar2;
        bool bVar4;
        long lVar5;
        shared_ptr<Control>* midiRequest1;
        long* plVar6;
        ReturnValue local_80;
        ReturnValue local_78;
        shared_ptr local_68;
        shared_ptr local_58;
        ReturnValue local_48;
        ReturnValue local_40;

        GetFocus((ReturnValue*)&local_68, this);
        bool cVar3 = shared_ptr::operator_cast_to_bool(&local_68);
        if (cVar3) {
            local_40 = ((Control*)local_68.operator->())->GetParent();
            local_58 = local_40.lock();
            cVar3 = shared_ptr::operator_cast_to_bool(&local_58);
            if (cVar3) {
                lVar5 = local_58.operator->();
                local_40 = ((lVar5 + 216))->end();
                lVar5 = local_58.operator->();
                local_80 = ((lVar5 + 216))->begin();
                new (&local_78)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(nullptr);
                new (&local_48) eastl::ListIterator(&local_40);
                --local_48;
                bVar2 = true;
                bVar1 = false;
                do {
                    if (((!bVar2) && (bVar1)) && (cVar3 = local_48 != local_80, !cVar3))
                        break;
                    midiRequest1 = (shared_ptr<Control>*)*local_48;
                    if (bVar2) {
                        bVar4 = *midiRequest1 == local_68;
                        if (bVar4) {
                            local_78 = local_48;
                            bVar2 = false;
                        }
                    } else {
                        plVar6 = (long*)(*midiRequest1).operator->();
                        cVar3 = (**(void (**)(...))(*plVar6 + 216))(plVar6);
                        if (cVar3) {
                            SetFocus(*midiRequest1);
                            break;
                        }
                        bVar4 = *midiRequest1 == local_68;
                        if (bVar4)
                            break;
                    }
                    cVar3 = local_48 == local_80;
                    if (cVar3) {
                        if (bVar2) {
                            LogAssert("!finding",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/"
                                      "Tweaky.cpp",
                                      700, "Did not find the Control in the Container it says it belongs in");
                        }
                        local_48 = local_40[0];
                        bVar1 = true;
                    }
                    --local_48;
                } while (true);
            }
        }
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a3b4e0
    shared_ptr_if_not_array<tweak::Container>::type
    make_shared<tweak::Container, int, int, char const (&)[1]>(int&& arg1, int&& arg2, char const (&arg3)[1]) {
        ref_counter_base* ref_counter_base;
        int local_44;
        Container* local_40[2];

        auto arg1_00 = aligned_alloc(336, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Container>::type result;
        } else {
            local_40[0] = placement_new<tweak::Container, int, int, char const(&)[1]>((void*)((long)arg1_00 + 32), arg1,
                                                                                      arg2, arg3);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a3b880
    shared_ptr_if_not_array<tweak::SizeControl>::type make_shared<tweak::SizeControl>() {
        ref_counter_base* ref_counter_base;
        int local_2c;
        SizeControl* local_28[2];

        auto arg1 = aligned_alloc(336, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<tweak::SizeControl>::type result;
        } else {
            local_28[0] = placement_new<tweak::SizeControl>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::SizeControl>, int, tweak::SizeControl*&>(
                    arg1, &local_2c, local_28);
            shared_ptr_do_enable_shared_from_this<tweak::SizeControl>(ref_counter_base, local_28[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
