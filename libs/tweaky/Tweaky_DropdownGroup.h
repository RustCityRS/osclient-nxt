// libs/tweaky/Tweaky_DropdownGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class DropdownGroup {
    public:
        // virtual methods in vtable order
        virtual ~DropdownGroup();
        virtual void OnFocusChanged(bool arg1);
        virtual void Draw(int arg1, int arg2);
        virtual uint32_t GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint64_t OnMouseMove(float arg1, float arg2);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        virtual unsigned long OnMouseWheel(float arg1, float arg2, float arg3);
        virtual void DoOnShown();
        virtual void ResetToDefault();
        virtual void ResetAllToDefault();
        virtual uint64_t HandleChar(int arg1);
        virtual uint64_t HandleKeyDown(int arg1);
        virtual bool HasKeyboardNavigation() const;
        virtual void SetMouseOver(bool arg1);
        virtual DropdownGroup* AddPage(const eastl::string& str);
        uint64_t HandleMouseDown(float arg1, float arg2);
        void ShowList();
        void HideList();
        void ValidatePosition();
        unsigned long HandleMouseUp(float arg1, float arg2);
        void UpdateMouseSelection(float arg1, float arg2);
        void ScrollUp(int arg1);
        void ScrollDown(int arg1);
        ShaderVariablePrecision CalculateDropdownWidth(shared_ptr<Tweaky>& tweaky);
        void NavigateUp();
        void NavigateDown();
        void NavigateHome();
        void NavigateEnd();

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        uint8_t _unknown_32[4];
        int field_36;
        unsigned int field_40;
        uint8_t _unknown_44[92];
        int field_136;
        int field_140;
        int field_144;
        int field_148;
        uint8_t _unknown_152[8];
        Event field_160;
        uint8_t _unknown_184[24];
        bool m_mouseOver;
        uint8_t _unknown_209[71];
        EnumOptionToggle field_280;
        uint8_t _unknown_284[20];
        int field_304;
        int field_308;
        int field_312;
        int field_316;
        int field_320;
        int field_324;
        int field_328;
        uint8_t field_332;
        bool field_333;
        uint8_t m_hasKeyboardNavigation;
        uint8_t _unknown_335[1];
        EnumOptionToggle field_336;
        unsigned int field_340;
        unsigned int field_344;
        EnumOptionToggle field_348;
        int field_352;
        EnumOptionToggle field_356;
        uint32_t field_360;
        unsigned long field_364;
        int field_372;
        int field_376;
        int field_380;
        unsigned long field_384;
        int field_392;
        int field_396;
        int field_400;
        int field_404;
        float field_408;
        float field_412;
        uint8_t field_416;
        uint8_t field_417;
        uint8_t _unknown_418[6];
    };

    // 0x100a46a30
    void DropdownGroup::NavigateUp() {
        field_336 = field_336 - 1;
        ValidatePosition();
    }

    // 0x100a46a50
    void DropdownGroup::NavigateDown() {
        field_336 = field_336 + 1;
        ValidatePosition();
    }

    // 0x100a46a70
    void DropdownGroup::NavigateHome() {
        field_336 = 0;
        ValidatePosition();
    }

    // 0x100a46a90
    void DropdownGroup::NavigateEnd() {
        field_336 = field_248.size() - 1;
        ValidatePosition();
    }

    // 0x100a516f0
    bool DropdownGroup::HasKeyboardNavigation() const {
        return m_hasKeyboardNavigation;
    }

    // 0x100a52b00
    DropdownGroup::~DropdownGroup() {}

} // namespace jag::tweak
