// libs/game/runetek5/camera/effects/Shake.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::camera {
    class Shake : public ICameraEffect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Shake();
        virtual void Update(float arg1);
        virtual void Apply(math::Matrix44T<float>& matrix44);
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1);
        virtual void ToString(eastl::fixed_string<char, 256>& str);
        Shake(int arg1, ShakeMode shakeMode, float arg3, float arg4);
        Shake(int arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        float field_20;
        float field_24;
        float field_28;
        float field_32;
        uint8_t _unknown_36[4];
    };

    // 0x100022b10: Shake::~Shake() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: Shake::~Shake() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10061c6a0
    Shake::Shake(int arg1, ShakeMode shakeMode, float arg3, float arg4)
        : ICameraEffect(0, arg1), field_16(shakeMode), field_20(arg3), field_24(arg4), field_28(0.0), field_32(0.0) {}

    // 0x10061c710
    Shake::Shake(int arg1, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2)
        : ICameraEffect(0, arg1), field_28(0.0), field_32(0.0) {
        ProcessServerUpdate(arg2);
    }

    // 0x10061c770
    void Shake::Update(float arg1) {
        float fVar1 = arg1 * field_24 + field_28;
        field_28 = fVar1;
        fVar1 = (float)::sin(fVar1);
        field_32 = fVar1 * field_20;
    }

    // 0x10061c7a0
    void Shake::Apply(math::Matrix44T<float>& matrix44) {
        float arg1;
        float arg2;
        float arg3;
        ImVec4 local_48;

        switch (field_16) {
        case 0:
            arg1 = field_32;
            arg2 = 0.0;
            goto LAB_10061c7e5;
        case 1:
            arg2 = field_32;
            arg1 = 0.0;
        LAB_10061c7e5:
            arg3 = 0.0;
        LAB_10061c7f9:
            local_48 = ImVec4(arg1, arg2, arg3, 0.0);
            (*((matrix44 + 48))) += local_48;
            return;
        case 2:
            arg3 = field_32;
            arg1 = 0.0;
            arg2 = 0.0;
            goto LAB_10061c7f9;
        case 3:
            math::Matrix33RotationX<float>(field_32);
            break;
        case 4:
            math::Matrix33RotationY<float>(field_32);
            break;
        case 5:
            math::Matrix33RotationZ<float>(field_32);
            break;
        default:
            goto switchD_10061c7c9_default;
        }
        matrix44 *= &local_48;
    switchD_10061c7c9_default:
    }

    // 0x10061c880
    void Shake::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        uint8_t bVar1 = arg1.g1();
        field_16 = (unsigned int)bVar1;
        float fVar2 = (float)arg1.gFloat();
        field_20 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_24 = fVar2;
        field_28 = 0.0;
    }

    // 0x10061d930
    void Shake::ToString(eastl::fixed_string<char, 256>& str) {
        uint64_t uVar1 = ShakeModeString(field_16);
        str.sprintf("Shake (mode=%s, amp=%f, rate=%f, pos=%f)", (double)field_20, (double)field_24, (double)field_28,
                    uVar1);
    }

} // namespace jag::game::camera
