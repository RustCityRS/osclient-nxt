// libs/tweaky/Tweaky_Slider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    // 0x1007fe100
    ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(
        ColourGradingBloomEffectConfig&& colourGradingBloomEffectConfig) {
        uint32_t uVar1 = *(uint32_t*)&colourGradingBloomEffectConfig.field_0;
        BloomQuality BVar2 = colourGradingBloomEffectConfig.field_4;
        *(uint64_t*)((long)&field_4 + 1) = *(uint64_t*)((long)&colourGradingBloomEffectConfig.field_4 + 1);
        *(uint32_t*)&field_0 = uVar1;
        field_4 = BVar2;
        new (field_16) ColourCorrectionConfig(colourGradingBloomEffectConfig.field_16);
        _memcpy(&field_168, &colourGradingBloomEffectConfig.field_168, 152);
    }

    // 0x1007ff4e0
    void ColourGradingBloomEffectConfig::SetBloomQuality(BloomQuality bloomQuality) {
        uint32_t uVar1;
        uint32_t uVar2;

        field_264 = bloomQuality;
        if (bloomQuality < 3) {
            uVar1 = *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&DEF_EXPOSURE_SPEED_MUL)[2] +
                                 (long)(int)bloomQuality * 4);
            uVar2 = *(uint32_t*)(&DAT_100d4ac3c + (long)(int)bloomQuality * 4);
            field_4 = bloomQuality + 3;
            field_8 = bloomQuality + 1;
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
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual bool OnClick(float arg1, float arg2, bool arg3);
        virtual unsigned long OnMouseMove(float arg1, float arg2);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual uint8_t LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        virtual void SetCurrentValue(float arg1);
        void SetSlider<unsigned int>(unsigned int arg1);
        void SetSlider<float>(float arg1);
        float GetCurrentValue();
        void SetSliderDiscrete<float>(float arg1);
        Slider(const char* str, float arg2, float arg3, float arg4);
        uint32_t HandleBoundsCheck(float arg1, float arg2);

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        Type field_32;
        int field_36;
        int field_40;
        uint8_t _unknown_44[92];
        unsigned long field_136;
        uint64_t field_144;
        uint8_t _unknown_152[8];
        Event field_160;
        uint8_t _unknown_184[24];
        bool field_208;
        char field_209;
        bool field_210;
        uint8_t _unknown_211[1];
        float field_212;
        float field_216;
        int field_220;
        float field_224;
        float field_228;
        int field_232;
        int field_236;
        int field_240;
        int field_244;
        int field_248;
        int field_252;
        int field_256;
        int field_260;
        int field_264;
        int field_268;
        int field_272;
        int field_276;
        unsigned int field_280;
        uint8_t _unknown_284[220];
        int field_504;
        int field_508;
        float m_currentValue;
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
        uint8_t _unknown_547[4];
    };

} // namespace jag::tweak
