// libs/game/runetek5/camera/effects/OldShake.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::camera {
    class OldShake : public ICameraEffect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OldShake();
        virtual void Update(float);
        virtual void Apply(math::Matrix44T<float>&);
        virtual void ToString(eastl::fixed_string<char, 256, true, eastl::allocator>&);
        OldShake(ShakeMode, float, float, float, float);

        // data members, from how the methods use this: 40 bytes, the first 20 are ICameraEffect
        float field_20; // offset 20
        float field_24; // offset 24
        float field_28; // offset 28
        float field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x10061d8d0, 96 bytes, inline, placed by class name
    // OldShake::ToString(eastl::fixed_string<char, 256, true, eastl::allocator>&)
    void OldShake::ToString(fixed_string* param_1) {
        undefined8 uVar1;

        uVar1 = ShakeModeString(field_12);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)field_16, (double)field_20, (double)field_24, (double)field_28,
            "OldShake (mode=%s, amp=%f, rate=%f, pos=%f, rand=%f)", uVar1);
    }

} // namespace jag::game::camera
