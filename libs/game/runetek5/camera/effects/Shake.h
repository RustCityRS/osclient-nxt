// libs/game/runetek5/camera/effects/Shake.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game::camera {
    class Shake : public ICameraEffect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Shake();
        virtual void Update(float);
        virtual void Apply(math::Matrix44T<float>&);
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void ToString(eastl::fixed_string<char, 256, true, eastl::allocator>&);
        Shake(int, ShakeMode, float, float);
        Shake(int, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 40 bytes, the first 20 are ICameraEffect
        float field_20; // offset 20
        float field_24; // offset 24
        float field_28; // offset 28
        float field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Shake::~Shake();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    Shake::~Shake();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Shake::~Shake();

    // 0x10061c6a0, 96 bytes, base-object constructor, placed by class name
    // Shake::Shake(int, ShakeMode, float, float)
    void Shake::Shake(float param_1_00, float param_2, Shake* this, undefined4 param_1, uint param_5) {
        new (this) ICameraEffect(0, param_1);
        field_0 = &PTR__ScriptOption_100f0c170;
        field_16 = param_5;
        field_20 = param_1_00;
        field_24 = param_2;
        field_28 = 0.0;
        field_32 = 0.0;
    }

    // 0x10061c700, 16 bytes, complete-object constructor, placed by class name
    // Shake::Shake(int, ShakeMode, float, float): jumps straight to the base-object constructor

    // 0x10061c710, 80 bytes, base-object constructor, placed by class name
    // Shake::Shake(int, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void Shake::Shake(int param_1, PacketT* param_2) {
        new (this) ICameraEffect(0, param_1);
        field_0 = &PTR__ScriptOption_100f0c170;
        field_28 = 0.0;
        field_32 = 0.0;
        ProcessServerUpdate(this, param_2);
    }

    // 0x10061c760, 16 bytes, complete-object constructor, placed by class name
    // Shake::Shake(int, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x10061c770, 48 bytes, placed by class name
    // Shake::Update(float)
    void Shake::Update(float param_1) {
        float fVar1;

        fVar1 = param_1 * field_24 + field_28;
        field_28 = fVar1;
        fVar1 = (float)::sin(fVar1);
        field_32 = fVar1 * field_20;
    }

    // 0x10061c7a0, 224 bytes, placed by class name
    // Shake::Apply(math::Matrix44T<float>&)
    void Shake::Apply(Matrix44T* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        ImVec4 local_48[48];

        switch (field_16) {
        case 0:
            fVar1 = field_32;
            fVar2 = 0.0;
            goto LAB_10061c7e5;
        case 1:
            fVar2 = field_32;
            fVar1 = 0.0;
        LAB_10061c7e5:
            fVar3 = 0.0;
        LAB_10061c7f9:
            ImVec4::ImVec4(local_48, fVar1, fVar2, fVar3, 0.0);
            math::QuaternionT<float>::operator+=((QuaternionT<float>*)&param_1->field_48, (QuaternionT*)local_48);
            return;
        case 2:
            fVar3 = field_32;
            fVar1 = 0.0;
            fVar2 = 0.0;
            goto LAB_10061c7f9;
        case 3:
            math::Matrix33RotationX<float>((math*)local_48, field_32);
            break;
        case 4:
            math::Matrix33RotationY<float>((math*)local_48, field_32);
            break;
        case 5:
            math::Matrix33RotationZ<float>((math*)local_48, field_32);
            break;
        default:
            goto switchD_10061c7c9_default;
        }
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)param_1, local_48);
    switchD_10061c7c9_default:
    }

    // 0x10061c880, 80 bytes, placed by class name
    // Shake::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void Shake::ProcessServerUpdate(PacketT* param_1) {
        byte bVar1;
        float fVar2;

        bVar1 = param_1->g1();
        field_16 = (uint)bVar1;
        fVar2 = (float)param_1->gFloat();
        field_20 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_24 = fVar2;
        field_28 = 0.0;
    }

    // 0x10061d930, 80 bytes, inline, placed by class name
    // Shake::ToString(eastl::fixed_string<char, 256, true, eastl::allocator>&)
    void Shake::ToString(fixed_string* param_1) {
        undefined8 uVar1;

        uVar1 = ShakeModeString(field_16);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)field_20, (double)field_24, (double)field_28,
            "Shake (mode=%s, amp=%f, rate=%f, pos=%f)", uVar1);
    }

} // namespace jag::game::camera
