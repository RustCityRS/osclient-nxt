// libs/tweaky/Tweaky_RadioButton.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

namespace jag::tweak {
    class RadioButton {
    public:
        // virtual methods in vtable order
        virtual ~RadioButton();
        virtual OnClick(float, float, bool);
        virtual OnMouseOver(float, float);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void SetTicked(bool);
        virtual GetRadioValue() const;
        virtual void DrawTick(int, int);

        // data members, from how the methods use this: 220 bytes
        long field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        int field_40; // offset 40
        char _unknown_44[116];
        Event field_160; // offset 160
        char _unknown_184[24];
        bool field_208; // offset 208
        char _unknown_209[2];
        char field_211; // offset 211
        long field_212; // offset 212
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    RadioButton::OnMouseOver(float, float);

    // 0x100a4b570, 192 bytes, placed by class name and debug map
    // RadioButton::GetRadioValue() const
    undefined4 RadioButton::GetRadioValue() {
        undefined4 uVar2;
        GameToken* this_00;
        long* plVar3;
        shared_ptr* extraout_RDX;
        jag local_30[16];
        shared_ptr local_20;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_20, local_30, extraout_RDX);
        local_30->~shared_ptr();
        this_00 = (GameToken*)shared_ptr<RadioGroup>::operator->((shared_ptr<RadioGroup>*)&local_20);
        if (this_00->GetStatus() != 8) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "radioGroup->GetType() == Control::Type::RADIOGROUP",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_RadioButton.cpp",
                12, (char*)0);
        }
        plVar3 = (long*)shared_ptr<RadioGroup>::operator->((shared_ptr<RadioGroup>*)&local_20);
        uVar2 = (**(code**)(*plVar3 + 152))(plVar3);
        local_20.~shared_ptr();
        return uVar2;
    }

    // 0x100a4b670, 304 bytes, placed by class name and debug map
    // RadioButton::DrawTick(int, int)
    void RadioButton::DrawTick(int param_1, int param_2) {
        Tweaky* pTVar1;
        shared_ptr local_38;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            SetColour(1886417151, field_208);
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            pTVar1->FillRect(param_1 + 2, param_2 + 2, field_40 + -7, field_40 + -5);
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            pTVar1->FillRect(param_1 + 1, param_2 + 3, field_40 + -5, field_40 + -7);
            if (field_211 != '\0') {
                SetColour(4294967295, false);
                pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
                pTVar1->FillRect(param_1 + 4, param_2 + 4, field_40 + -11, field_40 + -9);
                pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
                pTVar1->FillRect(param_1 + 3, param_2 + 5, field_40 + -9, field_40 + -11);
            }
        }
        local_38.~shared_ptr();
    }

    // 0x100a4b7a0, 928 bytes, placed by class name and debug map
    // RadioButton::SetTicked(bool)
    void RadioButton::SetTicked(bool param_1) {
        char cVar1;
        bool bVar2;
        int iVar3;
        GameToken* pGVar4;
        shared_ptr* psVar5;
        undefined8 uVar6;
        long lVar7;
        Control* pCVar8;
        shared_ptr* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        shared_ptr* extraout_RDX_02;
        shared_ptr* extraout_RDX_03;
        undefined7 in_register_00000031;
        shared_ptr local_b8;
        enable_shared_from_this<PathingEntity> local_a8[16];
        list<console::Line, eastl::allocator> local_98[8];
        shared_ptr local_90;
        list<console::Line, eastl::allocator> local_80[8];
        shared_ptr<oldscape::dash3d::Decor> local_78[16];
        Event local_68;
        undefined1* local_50;
        undefined4 local_44;
        RadioButton* local_40;
        uint local_38;
        byte local_31;

        local_44 = (undefined4)CONCAT71(in_register_00000031, param_1);
        local_40 = this;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_90, (jag*)&local_68,
                                                                                     extraout_RDX);
        local_68.~shared_ptr();
        pGVar4 = (GameToken*)shared_ptr<RadioGroup>::operator->((shared_ptr<RadioGroup>*)&local_90);
        iVar3 = pGVar4->GetStatus();
        if (iVar3 == 8) {
            shared_ptr<RadioGroup>::operator->((shared_ptr<RadioGroup>*)&local_90);
            eastl::list<console::Line, eastl::allocator>::begin(local_80);
            eastl::list<console::Line, eastl::allocator>::end(local_98);
            local_50 = &local_40->field_8;
            bVar2 = eastl::operator!=((eastl*)local_80, (hashtable_iterator_base*)local_98, extraout_RDX_00);
            if (bVar2) {
                local_31 = (byte)local_44 ^ 1;
                local_38 = 0;
                do {
                    psVar5 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_80);
                    shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_78, psVar5);
                    pGVar4 = (GameToken*)shared_ptr<Control>::operator->((shared_ptr<Control>*)local_78);
                    iVar3 = pGVar4->GetStatus();
                    if (iVar3 == 9) {
                        local_68.shared_from_this();
                        bVar2 = operator==((jag*)local_78, (shared_ptr*)&local_68, extraout_RDX_02);
                        local_68.~shared_ptr();
                        if (bVar2) {
                            cVar1 = local_40->field_211;
                            local_40->field_211 = (char)local_44;
                            if (cVar1 != (char)local_44) {
                                local_b8.shared_from_this();
                                new (&local_68) Event(&local_b8, 3);
                                local_40->DoCallback(&local_68);
                                local_68.~LRUHashCacheWrapper();
                                uVar6 = local_b8.~shared_ptr();
                                local_38 = (uint)CONCAT71((int7)((ulong)uVar6 >> 8), 1);
                            }
                        } else {
                            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                                &local_b8, (jag*)local_78, extraout_RDX_03);
                            cVar1 = local_40->field_211;
                            lVar7 = shared_ptr<RadioButton>::operator->((shared_ptr<RadioButton>*)&local_b8);
                            *(byte*)(lVar7 + 211) = local_31;
                            if (local_40->field_211 != cVar1) {
                                pCVar8 =
                                    (Control*)shared_ptr<RadioButton>::operator->((shared_ptr<RadioButton>*)&local_b8);
                                local_a8->shared_from_this();
                                new (&local_68) Event(local_a8, 3);
                                pCVar8->DoCallback(&local_68);
                                local_68.~LRUHashCacheWrapper();
                                local_a8->~shared_ptr();
                            }
                            local_b8.~shared_ptr();
                        }
                    }
                    local_78->~shared_ptr();
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_80);
                    bVar2 = eastl::operator!=((eastl*)local_80, (hashtable_iterator_base*)local_98, extraout_RDX_01);
                } while (bVar2);
            } else {
                local_38 = 0;
            }
            if ((local_38 & 1) != 0) {
                pCVar8 = (Control*)shared_ptr<RadioGroup>::operator->((shared_ptr<RadioGroup>*)&local_90);
                local_78->shared_from_this();
                new (&local_68) Event(local_78, 3);
                pCVar8->DoCallback(&local_68);
                local_68.~LRUHashCacheWrapper();
                local_78->~shared_ptr();
            }
        }
        local_90.~shared_ptr();
    }

    // 0x100a4bb80, 160 bytes, placed by class name and debug map
    // RadioButton::OnClick(float, float, bool)
    undefined8 RadioButton::OnClick(float param_1, float param_2, bool param_3) {
        undefined7 in_register_00000031;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        if ((int)CONCAT71(in_register_00000031, param_3) == 0) {
            (**(code**)(field_0 + 128))(this, 1);
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 2);
            DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
        } else {
            Control::SetFocus();
        }
        return 1;
    }

    // 0x100a4bc20, 144 bytes, placed by class name and debug map
    // RadioButton::ResetToDefault()
    void RadioButton::ResetToDefault() {
        char cVar1;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        cVar1 = (char)field_212;
        if (field_211 != cVar1) {
            field_211 = cVar1;
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 2);
            DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
        }
    }

    // 0x100a514a0: the linker folded this into Button::~Button(), which has identical code
    RadioButton::~RadioButton();

    // 0x100a514d0: the linker folded this into Tickable::InitDefault(), which has identical code
    RadioButton::InitDefault();

    // 0x100a51510: the linker folded this into CheckBox::~CheckBox(), which has identical code
    RadioButton::~RadioButton();

    // 0x100a51520: the linker folded this into CheckBox::~CheckBox(), which has identical code
    RadioButton::~RadioButton();

} // namespace jag::tweak
