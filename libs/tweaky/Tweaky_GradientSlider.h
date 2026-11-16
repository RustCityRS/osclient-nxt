// libs/tweaky/Tweaky_GradientSlider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::tweak {
    class Gradient {
    public:
        Gradient* operator=(Gradient const&);
        Gradient();

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[8];
    };

    class GradientSlider {
    public:
        // virtual methods in vtable order
        virtual ~GradientSlider();
        virtual void OnFocusChanged(bool);
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual OnClick(float, float, bool);
        virtual OnMouseMove(float, float);
        virtual ulong LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        virtual char HandleChar(int);
        virtual ulong HandleKeyDown(int);
        virtual void HandleKeyUp(int);
        virtual HasKeyboardNavigation() const;
        virtual void SetCurrentValue(float);
        void SetGradient(Gradient const&);
        void SetGradient(math::Vector4T<float> const&, math::Vector4T<float> const&);
        void SetGradient(unsigned int, unsigned int);
        GradientSlider(char const*, float, float, float);
        void DrawBar(shared_ptr<Tweaky>, int, int);
        void DrawAlphaBackground(shared_ptr<Tweaky>, int, int);
        void UpdateText();
        static eastl::string /* 32 bytes */ VALUE_TAG;       // = "value"
        static eastl::string /* 32 bytes */ LEFTCOLOUR_TAG;  // = "leftColour"
        static eastl::string /* 32 bytes */ RIGHTCOLOUR_TAG; // = "rightColour"

        // data members, from how the methods use this: 928 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24; // offset 24
        int field_28; // offset 28
        char _unknown_32[4];
        int field_36;  // offset 36
        uint field_40; // offset 40
        char _unknown_44[92];
        int field_136; // offset 136
        int field_140; // offset 140
        int field_144; // offset 144
        int field_148; // offset 148
        char _unknown_152[8];
        Event field_160; // offset 160
        char _unknown_184[24];
        undefined1 field_208; // offset 208
        char _unknown_209[3];
        float field_212; // offset 212
        float field_216; // offset 216
        int field_220;   // offset 220
        float field_224; // offset 224
        float field_228; // offset 228
        int field_232;   // offset 232
        int field_236;   // offset 236
        uint field_240;  // offset 240
        uint field_244;  // offset 244
        uint field_248;  // offset 248
        int field_252;   // offset 252
        int field_256;   // offset 256
        int field_260;   // offset 260
        int field_264;   // offset 264
        int field_268;   // offset 268
        int field_272;   // offset 272
        int field_276;   // offset 276
        int field_280;   // offset 280
        int field_284;   // offset 284
        int field_288;   // offset 288
        int field_292;   // offset 292
        int field_296;   // offset 296
        char _unknown_300[204];
        int field_504;   // offset 504
        int field_508;   // offset 508
        float field_512; // offset 512
        float field_516; // offset 516
        float field_520; // offset 520
        float field_524; // offset 524
        float field_528; // offset 528
        float field_532; // offset 532
        float field_536; // offset 536
        float field_540; // offset 540
        char _unknown_544[1];
        undefined1 field_545; // offset 545
        char field_546;       // offset 546
        char _unknown_547[13];
        Gradient field_560;   // offset 560
        undefined8 field_584; // offset 584
        char _unknown_592[312];
        int field_904;        // offset 904
        char field_908;       // offset 908
        undefined1 field_909; // offset 909
        undefined1 field_910; // offset 910
        char _unknown_911[1];
        long field_912; // offset 912
        int field_920;  // offset 920
        char _unknown_924[4];
    };

    // 0x1009256b0, 32 bytes, inline, placed by class name and debug map
    // GradientSlider::SetGradient(Gradient const&)
    void GradientSlider::SetGradient(Gradient* param_1) {
        Gradient::operator=((Gradient*)field_560, param_1);
    }

    // 0x100925730, 48 bytes, inline, placed by debug map only (low confidence)
    // Gradient::operator=(Gradient const&)
    /* Gradient::TEMPNAMEPLACEHOLDERVALUE(Gradient const&) */

    Gradient* Gradient::operator=(Gradient* param_1) {
        math::Rect<float>::operator=((Rect<float>*)this, (Rect*)param_1);
        math::Rect<float>::operator=((Rect<float>*)&field_16, (Rect*)&param_1->field_16);
        return this;
    }

    // 0x100a517a0, 16 bytes, complete-object destructor, inline, placed by class name
    // GradientSlider::~GradientSlider(): jumps straight to the base-object destructor

    // 0x100a517b0, 32 bytes, deleting destructor, inline, placed by class name
    // GradientSlider::~GradientSlider()
    void GradientSlider::~GradientSlider() {
        ~GradientSlider(this);
        operator_delete(this);
    }

    // 0x100a517d0, 32 bytes, inline, placed by class name
    // GradientSlider::HandleKeyUp(int)
    void GradientSlider::HandleKeyUp(int param_1) {
        (&field_592, param_1)->HandleKeyUp();
    }

    // 0x100a52c40, 48 bytes, base-object destructor, inline, placed by class name
    // GradientSlider::~GradientSlider()
    void GradientSlider::~GradientSlider() {
        field_0 = &PTR__GradientSlider_100f1d4c8;
        (&field_592)->~EditLine();
        ~Slider();
    }

} // namespace jag::tweak

namespace jag::graphics {
    // 0x100928620, 48 bytes, inline, placed by debug map only (low confidence)
    // SkyBoxEntry::operator=(SkyBoxEntry&&)
    /* SkyBoxEntry::TEMPNAMEPLACEHOLDERVALUE(SkyBoxEntry&&) */

    SkyBoxEntry* SkyBoxEntry::operator=(SkyBoxEntry* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<SkyBox>::operator=((shared_ptr<SkyBox>*)&field_8, (shared_ptr*)&param_1->field_8);
        field_24 = param_1->field_24;
        return this;
    }

    // 0x100928c10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SkyBoxEntry::SkyBoxEntry(SkyBoxEntry&&): jumps straight to the base-object constructor

    // 0x100928c10: the linker folded this into SkyBoxEntry::SkyBoxEntry(SkyBoxEntry&&), which has identical code
    ViewportMapEntry::ViewportMapEntry(ViewportMapEntry&&);

    // 0x100928ce0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SkyBoxEntry::SkyBoxEntry(SkyBoxEntry&&)
    /* ViewportMapEntry::ViewportMapEntry(ViewportMapEntry&&) */

    void ViewportMapEntry::ViewportMapEntry(ViewportMapEntry* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_8, (shared_ptr*)&param_1->field_8);
        field_24 = param_1->field_24;
    }

    // 0x100928ce0: the linker folded this into SkyBoxEntry::SkyBoxEntry(SkyBoxEntry&&), which has identical code
    ViewportMapEntry::ViewportMapEntry(ViewportMapEntry&&);

} // namespace jag::graphics

namespace jag {
    // 0x100928890, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::SkyBox* placement_new<graphics::SkyBox>(void*)
    SkyBox* placement_new<graphics::SkyBox>(void* param_1) {
        graphics::SkyBox::SkyBox(param_1);
        return param_1;
    }

    // 0x1009288b0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16> >* placement_new<MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16> >, MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData*&, graphics::SkyBox*>(void*, MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData*&, graphics::SkyBox*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>,
                       MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData*&, graphics::SkyBox*>(
        void* param_1, RefCounterAndData** param_2, SkyBox** param_3) {
        MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100928930, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16> >::MakeSharedPoolRefCounter(void*, graphics::SkyBox*): jumps straight to the base-object constructor

    // 0x100928940, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16> >::MakeSharedPoolRefCounter(void*, graphics::SkyBox*)
    void MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>* this, void* param_1,
        SkyBox* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c18 + 16;
        *(void**)(this + 16) = param_1;
        *(SkyBox**)(this + 24) = param_2;
    }

    // 0x100928980, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16> >::DeleteSelf()
    void MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::SkyBox, MakeSharedPool<graphics::SkyBox, 16>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::SkyBox, 16>::deallocate(pvVar1);
    }

} // namespace jag
