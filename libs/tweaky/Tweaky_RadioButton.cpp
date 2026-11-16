// libs/tweaky/Tweaky_RadioButton.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

namespace jag::tweak {
    class RadioButton {
    public:
        // virtual methods in vtable order
        virtual ~RadioButton();
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void SetTicked(bool arg1);
        virtual uint32_t GetRadioValue() const;
        virtual void DrawTick(int arg1, int arg2);

    private:
        uint8_t _unknown_8[32];
        int field_40;
        uint8_t _unknown_44[116];
        Event field_160;
        uint8_t _unknown_184[24];
        bool field_208;
        uint8_t _unknown_209[2];
        char field_211;
        long field_212;
    };

    // 0x100029ea0: RadioButton::OnMouseOver(float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100a4b570
    uint32_t RadioButton::GetRadioValue() const {
        shared_ptr<oldscape::ClientNpc> local_20;

        auto local_30 = field_120.lock();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_20);
        if (((GameToken*)local_20.operator->())->GetStatus() != 8) {
            LogAssert(
                "radioGroup->GetType() == Control::Type::RADIOGROUP",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_RadioButton.cpp",
                12, nullptr);
        }
        auto plVar3 = local_20.operator->();
        uint32_t uVar2 = (**(void (**)(...))(*plVar3 + 152))(plVar3);
        return uVar2;
    }

    // 0x100a4b670
    void RadioButton::DrawTick(int arg1, int arg2) {
        Tweaky* pTVar2;

        shared_ptr local_38 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_38) != '\0') {
            SetColour(1886417151, field_208);
            pTVar2 = (Tweaky*)local_38.operator->();
            pTVar2->FillRect(arg1 + 2, arg2 + 2, field_40 - 7, field_40 - 5);
            pTVar2 = (Tweaky*)local_38.operator->();
            pTVar2->FillRect(arg1 + 1, arg2 + 3, field_40 - 5, field_40 - 7);
            if (field_211 != '\0') {
                SetColour(4294967295, false);
                pTVar2 = (Tweaky*)local_38.operator->();
                pTVar2->FillRect(arg1 + 4, arg2 + 4, field_40 - 11, field_40 - 9);
                pTVar2 = (Tweaky*)local_38.operator->();
                pTVar2->FillRect(arg1 + 3, arg2 + 5, field_40 - 9, field_40 - 11);
            }
        }
    }

    // 0x100a4b7a0
    void RadioButton::SetTicked(bool arg1) {
        char cVar1;
        bool bVar2;
        long lVar5;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        uint64_t extraout_RAX;
        Control* pCVar6;
        uint64_t in_register_00000031;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_b8;
        enable_shared_from_this<PathingEntity> local_a8;
        ReturnValue local_98;
        shared_ptr<oldscape::ClientNpc> local_90;
        ReturnValue local_80;
        shared_ptr<oldscape::dash3d::Decor> local_78;
        uint8_t* local_50;
        unsigned int local_38;
        uint8_t local_31;

        uint32_t local_44 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        RadioButton* local_40 = this;
        Event local_68 = field_120.lock();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_90);
        auto pGVar4 = local_90.operator->();
        int iVar3 = pGVar4->GetStatus();
        if (iVar3 == 8) {
            lVar5 = local_90.operator->();
            local_80 = ((lVar5 + 216))->begin();
            local_98 = ((lVar5 + 216))->end();
            local_50 = &local_40->field_8;
            cVar1 = local_80 != local_98;
            if (!cVar1) {
                local_38 = 0;
            } else {
                local_31 = (uint8_t)local_44 ^ 1;
                local_38 = 0;
                do {
                    groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)*local_80;
                    local_78 = shared_ptr(groundDecor);
                    pGVar4 = (GameToken*)local_78.operator->();
                    iVar3 = pGVar4->GetStatus();
                    if (iVar3 == 9) {
                        local_68.shared_from_this();
                        bVar2 = local_78 == local_68;
                        if (bVar2) {
                            cVar1 = local_40->field_211;
                            local_40->field_211 = (char)local_44;
                            if (cVar1 != (char)local_44) {
                                local_b8.shared_from_this();
                                local_68 = Event(local_b8, 3);
                                local_40->DoCallback(local_68);
                                local_38 =
                                    (unsigned int)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) |
                                                   (uint8_t)1);
                            }
                        } else {
                            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_b8);
                            cVar1 = local_40->field_211;
                            lVar5 = local_b8.operator->();
                            *(uint8_t*)(lVar5 + 211) = local_31;
                            if (local_40->field_211 != cVar1) {
                                pCVar6 = (Control*)local_b8.operator->();
                                local_a8.shared_from_this();
                                local_68 = Event(local_a8, 3);
                                pCVar6->DoCallback(local_68);
                            }
                        }
                    }
                    ++local_80;
                    cVar1 = local_80 != local_98;
                } while (cVar1);
            }
            if ((local_38 & 1) != 0) {
                pCVar6 = (Control*)local_90.operator->();
                local_78.shared_from_this();
                local_68 = Event(local_78, 3);
                pCVar6->DoCallback(local_68);
            }
        }
    }

    // 0x100a4bb80
    uint64_t RadioButton::OnClick(float arg1, float arg2, bool arg3) {
        uint64_t in_register_00000031;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            SetTicked((uint8_t)this);
            local_28.shared_from_this();
            local_40 = Event(local_28, 2);
            DoCallback(local_40);
        } else {
            SetFocus();
        }
        return 1;
    }

    // 0x100a4bc20
    void RadioButton::ResetToDefault() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        char cVar1 = (char)field_212;
        if (field_211 != cVar1) {
            field_211 = cVar1;
            local_28.shared_from_this();
            local_40 = Event(local_28, 2);
            DoCallback(local_40);
        }
    }

    // 0x100a514a0: RadioButton::~RadioButton() has the same machine code as Button::~Button()

    // 0x100a514d0: RadioButton::InitDefault() has the same machine code as Tickable::InitDefault()

} // namespace jag::tweak
