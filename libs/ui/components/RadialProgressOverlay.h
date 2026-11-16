// libs/ui/components/RadialProgressOverlay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class RadialProgressOverlay {
    public:
        // virtual methods in vtable order
        virtual ~RadialProgressOverlay();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        RadialProgressOverlay();
        void AdvanceTimer(float);
        float GetProgressPercentage() const;
        int UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float);
        void Set(float, float, unsigned char);
        ulong SetCurrentValue(float);
        float GetValueRange() const;

        // data members, from how the methods use this: 500 bytes
        undefined** field_0; // offset 0, vtable pointer
        ushort field_8;      // offset 8
        ushort field_10;     // offset 10
        ushort field_12;     // offset 12
        ushort field_14;     // offset 14
        char _unknown_16[32];
        uchar field_48; // offset 48
        char _unknown_49[1];
        char field_50; // offset 50
        char field_51; // offset 51
        char field_52; // offset 52
        char field_53; // offset 53
        char field_54; // offset 54
        char _unknown_55[1];
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        int field_72;        // offset 72
        int field_76;        // offset 76
        int field_80;        // offset 80
        int field_84;        // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[1];
        short field_102; // offset 102
        char _unknown_104[160];
        VisibleShadowCastingLightInfo field_264; // offset 264
        ComponentSwipeConfig field_288;          // offset 288
        char _unknown_293[59];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[80];
        float field_440;                      // offset 440
        float field_444;                      // offset 444
        float field_448;                      // offset 448
        undefined1 field_452;                 // offset 452
        bitset<4ul, unsigned char> field_453; // offset 453
        char _unknown_454[2];
        undefined1 field_456; // offset 456
        char _unknown_457[43];
    };

    // 0x1006a66f0, 112 bytes, inline, placed by class name and debug map
    // RadialProgressOverlay::GetProgressPercentage() const
    float RadialProgressOverlay::GetProgressPercentage() {
        float* pfVar1;
        float fVar2;
        float local_14;
        float local_10;
        float local_c;

        if (field_448 == field_444) {
            fVar2 = 1.0;
        } else {
            local_c = field_440 - field_444;
            local_14 = (float)GetValueRange(this);
            local_14 = local_c / local_14;
            local_10 = 1.0;
            pfVar1 = std::min<float>(&local_14, &local_10);
            fVar2 = *pfVar1;
        }
        return fVar2;
    }

    // 0x1006ae010, 16 bytes, complete-object destructor, inline, placed by class name
    // RadialProgressOverlay::~RadialProgressOverlay(): jumps straight to the base-object destructor

    // 0x1006ae020, 32 bytes, deleting destructor, inline, placed by class name
    // RadialProgressOverlay::~RadialProgressOverlay()
    void RadialProgressOverlay::~RadialProgressOverlay() {
        ~RadialProgressOverlay(this);
        operator_delete(this);
    }

    // 0x1006b2750, 32 bytes, inline, placed by class name
    // RadialProgressOverlay::GetValueRange() const
    float RadialProgressOverlay::GetValueRange() {
        return field_448 - field_444;
    }

    // 0x1006b3040, 64 bytes, base-object destructor, inline, placed by class name
    // RadialProgressOverlay::~RadialProgressOverlay()
    void RadialProgressOverlay::~RadialProgressOverlay() {
        field_0 = &PTR__RadialProgressOverlay_100f0f8d8;
        (&field_456)->~vector();
        (&field_392)->~Sprite();
        ~Component();
    }

} // namespace jag::ui
