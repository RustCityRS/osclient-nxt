// libs/ui/components/RadialProgressOverlay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class RadialProgressOverlay {
    public:
        // virtual methods in vtable order
        virtual ~RadialProgressOverlay();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        RadialProgressOverlay();
        void AdvanceTimer(float arg1);
        float GetProgressPercentage() const;
        int UpdateActiveSegmentGeometry(int arg1, int arg2, int arg3, int arg4, const math::Rect<float>& rect,
                                        float arg6);
        void Set(float arg1, float arg2, unsigned char arg3);
        unsigned long SetCurrentValue(float arg1);
        float GetValueRange() const;

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
        uint8_t _unknown_360[80];
        float field_440;
        float field_444;
        float field_448;
        uint8_t field_452;
        bitset<4ul, unsigned char> field_453;
        uint8_t _unknown_454[46];
    };

    // 0x1006a66f0
    float RadialProgressOverlay::GetProgressPercentage() const {
        float* pfVar1;
        float fVar2;
        float local_14;
        float local_c;

        if (field_448 == field_444) {
            fVar2 = 1.0;
        } else {
            local_c = field_440 - field_444;
            local_14 = (float)GetValueRange();
            local_14 = local_c / local_14;
            pfVar1 = std::min<float>(local_14, 1.0);
            fVar2 = *pfVar1;
        }
        return fVar2;
    }

    // 0x1006b2750
    float RadialProgressOverlay::GetValueRange() const {
        return field_448 - field_444;
    }

    // 0x1006b3040
    RadialProgressOverlay::~RadialProgressOverlay() {
        field_456.~vector();
        field_392.~Sprite();
    }

} // namespace jag::ui
