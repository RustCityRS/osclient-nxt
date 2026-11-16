// libs/tweaky/Tweaky_GradientSlider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::tweak {
    class Gradient {
    public:
        Gradient* operator=(const Gradient& gradient);
        Gradient();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[8];
    };

    class GradientSlider {
    public:
        // virtual methods in vtable order
        virtual ~GradientSlider();
        virtual void OnFocusChanged(bool arg1);
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint32_t OnMouseMove(float arg1, float arg2);
        virtual unsigned long LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        virtual char HandleChar(int arg1);
        virtual unsigned long HandleKeyDown(int arg1);
        virtual void HandleKeyUp(int arg1);
        virtual bool HasKeyboardNavigation() const;
        virtual void SetCurrentValue(float arg1);
        void SetGradient(const Gradient& gradient);
        void SetGradient(const math::Vector4T<float>& vector41, const math::Vector4T<float>& vector42);
        void SetGradient(unsigned int arg1, unsigned int arg2);
        GradientSlider(const char* str, float arg2, float arg3, float arg4);
        void DrawBar(shared_ptr<Tweaky> tweaky, int arg2, int arg3);
        void DrawAlphaBackground(shared_ptr<Tweaky> tweaky, int arg2, int arg3);
        void UpdateText();
        static eastl::string VALUE_TAG;       // = "value"
        static eastl::string LEFTCOLOUR_TAG;  // = "leftColour"
        static eastl::string RIGHTCOLOUR_TAG; // = "rightColour"

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
        uint8_t field_208;
        uint8_t _unknown_209[3];
        float field_212;
        float field_216;
        int field_220;
        float field_224;
        float field_228;
        int field_232;
        int field_236;
        unsigned int field_240;
        unsigned int field_244;
        unsigned int field_248;
        int field_252;
        int field_256;
        int field_260;
        int field_264;
        int field_268;
        int field_272;
        int field_276;
        int field_280;
        int field_284;
        int field_288;
        int field_292;
        int field_296;
        uint8_t _unknown_300[204];
        int field_504;
        int field_508;
        float field_512;
        float field_516;
        float field_520;
        float field_524;
        float field_528;
        float field_532;
        float field_536;
        float field_540;
        uint8_t _unknown_544[1];
        uint8_t field_545;
        char field_546;
        uint8_t _unknown_547[13];
        Gradient field_560;
        uint64_t field_584;
        uint8_t _unknown_592[312];
        int field_904;
        char field_908;
        uint8_t field_909;
        uint8_t field_910;
        uint8_t _unknown_911[1];
        long field_912;
        int field_920;
        uint8_t _unknown_924[4];
    };

    // 0x1009256b0
    void GradientSlider::SetGradient(const Gradient& gradient) {
        *field_560 = gradient;
    }

    // 0x100925730
    Gradient* Gradient::operator=(const Gradient& gradient) {
        *this = gradient;
        field_16 = gradient.field_16;
        return this;
    }

    // 0x100a517d0
    void GradientSlider::HandleKeyUp(int arg1) {
        field_592.HandleKeyUp(arg1);
    }

    // 0x100a52c40
    GradientSlider::~GradientSlider() {
        field_592.~EditLine();
    }

} // namespace jag::tweak

namespace jag {
    // 0x100928890
    graphics::SkyBox* placement_new<graphics::SkyBox>(void* arg1) {
        new (arg1) graphics::SkyBox();
        return arg1;
    }

    // 0x1009288b0
    MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>*
    placement_new<MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>,
                  MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData*&, graphics::SkyBox*>(
        void* arg1, MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData*& arg2, graphics::SkyBox*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>(arg2, arg3);
        return arg1;
    }

    // 0x100928940
    MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>::MakeSharedPoolRefCounter(
        void* arg1, graphics::SkyBox* skyBox)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c18 + 16;
        *(void**)(this + 16) = arg1;
        *(SkyBox**)(this + 24) = skyBox;
    }

    // 0x100928980
    void MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::SkyBox, 16>::deallocate(arg1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x100928620
    SkyBoxEntry* SkyBoxEntry::operator=(SkyBoxEntry&& skyBoxEntry) {
        field_0 = skyBoxEntry.field_0;
        field_8 = skyBoxEntry.field_8;
        field_24 = skyBoxEntry.field_24;
        return this;
    }

    // 0x100928ce0
    SkyBoxEntry::SkyBoxEntry(SkyBoxEntry&& skyBoxEntry) : field_0(skyBoxEntry.field_0) {
        field_8.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(skyBoxEntry.field_8);
        field_24 = skyBoxEntry.field_24;
    }

    // 0x100928ce0: ViewportMapEntry::ViewportMapEntry(ViewportMapEntry&&) has the same machine code as SkyBoxEntry::SkyBoxEntry(SkyBoxEntry&&)

} // namespace jag::graphics
