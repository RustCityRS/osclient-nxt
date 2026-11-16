// libs/ui/components/InputField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class InputField {
    public:
        // virtual methods in vtable order
        virtual ~InputField();
        virtual uint64_t GetType() const;
        virtual bool ShouldBlockInput(int arg1, int arg2) const;
        virtual void SetEnabled(bool arg1);
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DrawFocus(const ComponentDependencies& arg1);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual bool IsKeyReceiver() const;
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType optionClient) const;
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual auto GetAssociatedComponent();
        virtual bool IsAssociatedComponent(const shared_ptr<Component>& component) const;
        virtual void LogicFocus(const ComponentDependencies& componentDependencies, bool arg2);
        virtual void CancelFocus();
        virtual uint64_t HandleKeyInput(int arg1, int arg2, unsigned int arg3);
        virtual unsigned long NotifyFocusGain();
        InputField(InterfaceManager* interfaceManager);
        shared_ptr* UpdateTextRunSettings(graphics::FontManager* fontManager);
        bool IsMultiline() const;
        int ApplyScroll(int arg1);
        void EnsureCaretVisible();
        void UpdateCaretBlink(float arg1);
        void Init(graphics::TextContentVisibility textContentVisibility, FilterMode filterMode, unsigned long arg3);
        void SetContents(const eastl::string& str);
        uint8_t* GetContents() const;
        void ClearInternal();
        unsigned long AddContents(const char* str1, const char* str2, bool arg3, bool arg4);
        void Clear();
        bool ShouldIgnoreInput(int arg1, unsigned int arg2) const;
        void CopySelection();
        void PasteFromClipboard();
        void AddCharacter(unsigned int arg1, bool arg2);
        void ValidateQuantityInput();
        uint64_t HandleQuantityInput(unsigned int arg1);
        void UpdateCachedString() const;
        void IsCodepointAllowed(FilterMode filterMode, unsigned int arg2);
        void IsUnitQuantityCodepoint(unsigned int arg1);
        eastl::optional<int> GetQuantityInput() const;
        uint8_t GetSoftKeyboardType() const;

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
        uint8_t _unknown_360[48];
        uint8_t** field_408;
        uint8_t _unknown_416[48];
        TcpConnectionMessageBase field_464;
        uint8_t _unknown_512[16];
        unsigned int field_528;
        FilterMode field_532;
        TextContentVisibility field_536;
        uint8_t _unknown_540[4];
        unsigned long field_544;
        function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>* field_552;
        uint8_t _unknown_560[28];
        unsigned int field_588;
        unsigned int field_592;
        unsigned int field_596;
        uint8_t _unknown_600[168];
        Margin field_768;
        uint8_t _unknown_772[4];
        TextRun field_776;
        uint8_t _unknown_856[24];
        char field_880;
        uint8_t _unknown_881[1];
        uint8_t field_882;
        uint8_t _unknown_883[1];
        uint16_t field_884;
        uint8_t _unknown_886[2];
        uint64_t field_888;
        function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>* field_896;
        unsigned int field_904;
        uint8_t field_908;
        uint8_t _unknown_909[3];
        float field_912;
        int field_916;
        uint32_t field_920;
        uint8_t _unknown_924[4];
        InterfaceManager* field_928;
        uint8_t _unknown_936[6515368];
    };

    // 0x100698f40
    bool InputField::IsMultiline() const {
        uint8_t bVar1 = field_464->GetTextMaxLines();
        return 1 < bVar1;
    }

    // 0x100699f40
    uint8_t* InputField::GetContents() const {
        UpdateCachedString();
        return &field_856;
    }

    // 0x10069b390
    void InputField::IsUnitQuantityCodepoint(unsigned int arg1) {
        return (21474836485U >> ((unsigned long)(arg1 - 75) & 63) & 1) != 0 && arg1 - 75 < 35;
    }

    // 0x1006ad7f0
    void InputField::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 0) {
            field_768[0] = margin.field_0;
            field_768[1] = margin.field_1;
            field_768[2] = margin.field_2;
            field_768[3] = margin.field_3;
            return;
        }
    }

    // 0x1006ad810
    Margin InputField::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 0) {
            local_c.field_0 = field_768[0];
            local_c.field_1 = field_768[1];
            local_c.field_2 = field_768[2];
            local_c.field_3 = field_768[3];
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006ad840
    auto InputField::GetAssociatedComponent() {
        auto result;
        enable_shared_from_this<PathingEntity> local_28;

        local_28.shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&result);
        return result;
    }

    // 0x1006b2e10
    InputField::~InputField() {
        field_408 = &PTR__InputField_100f0f098;
        CancelFocus();
        field_856.~basic_string();
        field_776->~TextRun();
        field_600.~ScrollBar();
        field_560.~basic_string();
        field_464->~TextData();
        field_416.~Sprite();
        field_392.~enable_shared_from_this();
    }

} // namespace jag::ui
