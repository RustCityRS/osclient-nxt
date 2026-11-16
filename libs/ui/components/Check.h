// libs/ui/components/Check.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Check {
    public:
        // virtual methods in vtable order
        virtual ~Check();
        virtual uint64_t GetType() const;
        virtual void SetEnabled(bool arg1);
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual bool NotifyInteracted();
        virtual unsigned long HasInteractionInProgress() const;
        virtual uint8_t* GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual bool HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual uint8_t GetPreviousValue() const;
        virtual uint8_t GetCurrentValue() const;
        Check();
        uint64_t UpdateState(bool arg1, bool arg2, bool arg3);
        void DrawCheckBox(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawLabel(const ComponentDependencies& componentDependencies, int arg2, int arg3);
        void SetChecked(bool arg1);
        void GetCheckBoxVisualSize() const;
        void IsChecked() const;
        static bool m_enableHold;

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
        uint8_t _unknown_400[112];
        int field_512;
        uint8_t field_516;
        uint8_t _unknown_517[3];
        uint32_t field_520;
        ButtonElement field_524;
        uint8_t _unknown_556[6515684];
    };

    // 0x10068d340
    void Check::SetChecked(bool arg1) {
        field_524->SetToggled(arg1, true);
        field_520 = 0;
    }

    // 0x10068d460
    void Check::GetCheckBoxVisualSize() const {
        if (field_516 == '\0') {
            GetMinMapX();
            return;
        }
    }

    // 0x1006ad270
    bool Check::HasRecentValueChange() const {
        return field_520 == 2;
    }

    // 0x1006ad280
    void Check::NotifyRecentValueChangeHandled() {
        field_520 = 3;
    }

    // 0x1006ad290
    uint8_t Check::GetPreviousValue() const {
        return IsChecked() ^ 1;
    }

    // 0x1006ad2a0
    uint8_t Check::GetCurrentValue() const {
        return IsChecked();
    }

    // 0x1006b2b50
    Check::~Check() {
        m_pValueRepresentation = &PTR__Check_100f0e940;
        field_464.~Sprite();
        field_400.~TextData();
        (&m_pValueRepresentation)->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006b2bb0
    void Check::IsChecked() const {
        field_524->IsToggled();
    }

} // namespace jag::ui
