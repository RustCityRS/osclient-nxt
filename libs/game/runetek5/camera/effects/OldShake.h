// libs/game/runetek5/camera/effects/OldShake.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::camera {
    class OldShake : public ICameraEffect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OldShake();
        virtual void Update(float arg1);
        virtual void Apply(math::Matrix44T<float>& matrix44);
        virtual void ToString(eastl::fixed_string<char, 256>& str);
        OldShake(ShakeMode shakeMode, float arg2, float arg3, float arg4, float arg5);

    private:
        float field_20;
        float field_24;
        float field_28;
        float field_32;
        uint8_t _unknown_36[4];
    };

    // 0x10061d8d0
    void OldShake::ToString(eastl::fixed_string<char, 256>& str) {
        uint64_t uVar1 = ShakeModeString(field_12);
        str.sprintf("OldShake (mode=%s, amp=%f, rate=%f, pos=%f, rand=%f)", (double)field_16, (double)field_20,
                    (double)field_24, (double)field_28, uVar1);
    }

} // namespace jag::game::camera
