// libs/tweaky/Tweaky_Slider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    // 0x1007fe0f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig&&): jumps straight to the base-object constructor

    // 0x1007fe100, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig&&)
    void ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig* param_1) {
        undefined4 uVar1;
        uint uVar2;

        uVar1 = *(undefined4*)&param_1->field_0;
        uVar2 = param_1->field_4;
        *(undefined8*)((long)&field_4 + 1) = *(undefined8*)((long)&param_1->field_4 + 1);
        *(undefined4*)&field_0 = uVar1;
        field_4 = uVar2;
        new (field_16, (ColourCorrectionConfig*)param_1->field_16) ColourCorrectionConfig();
        _memcpy(&field_168, &param_1->field_168, 152);
    }

    // 0x1007ff4e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::SetBloomQuality(BloomQuality)
    void ColourGradingBloomEffectConfig::SetBloomQuality(uint param_2) {
        undefined4 uVar1;
        undefined4 uVar2;

        field_264 = param_2;
        if (param_2 < 3) {
            uVar1 = *(undefined4*)(&DAT_100d4ac30 + (long)(int)param_2 * 4);
            uVar2 = *(undefined4*)(&DAT_100d4ac3c + (long)(int)param_2 * 4);
            field_4 = param_2 + 3;
            field_8 = param_2 + 1;
            field_304 = uVar1;
            field_308 = uVar2;
        }
    }

} // namespace jag::postprocess

namespace jag::tweak {
    class Slider : public GradientSlider // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Slider();
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual bool OnClick(float, float, bool);
        virtual ulong OnMouseMove(float, float);
        virtual OnMouseOver(float, float);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        virtual void SetCurrentValue(float);
        void SetSlider<unsigned int>(unsigned int);
        void SetSlider<float>(float);
        float GetCurrentValue();
        void SetSliderDiscrete<float>(float);
        Slider(char const*, float, float, float);
        HandleBoundsCheck(float, float);

        // data members, from how the methods use this: 551 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24;        // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        int field_36;        // offset 36
        int field_40;        // offset 40
        char _unknown_44[92];
        ulong field_136;      // offset 136
        undefined8 field_144; // offset 144
        char _unknown_152[8];
        Event field_160; // offset 160
        char _unknown_184[24];
        bool field_208; // offset 208
        char field_209; // offset 209
        bool field_210; // offset 210
        char _unknown_211[1];
        float field_212; // offset 212
        float field_216; // offset 216
        int field_220;   // offset 220
        float field_224; // offset 224
        float field_228; // offset 228
        int field_232;   // offset 232
        int field_236;   // offset 236
        int field_240;   // offset 240
        int field_244;   // offset 244
        int field_248;   // offset 248
        int field_252;   // offset 252
        int field_256;   // offset 256
        int field_260;   // offset 260
        int field_264;   // offset 264
        int field_268;   // offset 268
        int field_272;   // offset 272
        int field_276;   // offset 276
        int field_280;   // offset 280
        char _unknown_284[220];
        int field_504;        // offset 504
        int field_508;        // offset 508
        float m_currentValue; // offset 512
        float field_516;      // offset 516
        float field_520;      // offset 520
        float field_524;      // offset 524
        float field_528;      // offset 528
        float field_532;      // offset 532
        float field_536;      // offset 536
        float field_540;      // offset 540
        char _unknown_544[1];
        undefined1 field_545; // offset 545
        char field_546;       // offset 546
        char _unknown_547[4];
    };

} // namespace jag::tweak
