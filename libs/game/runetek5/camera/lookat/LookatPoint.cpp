// libs/game/runetek5/camera/lookat/LookatPoint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LookatPoint.h"

namespace jag::game {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LookatPoint::~LookatPoint();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LookatPoint::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LookatPoint::~LookatPoint();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LookatPoint::~LookatPoint();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    AABB LookatPoint::GetCurrentLookat() const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    LookatPoint::GetZRotation() const;

    // 0x1004491e0: the linker folded this into math::Sphere2D::IsValid() const, which has identical code
    LookatPoint::Ready() const;

    // 0x100619970: the linker folded this into PositionPoint::SetCurrentPosition(math::Vector3T<double> const&), which has identical code
    LookatPoint::SetCurrentLookat(math::Vector3T<double> const&);

    // 0x10061d690, 80 bytes, placed by class name and debug map
    // LookatPoint::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* LookatPoint::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void LookatPoint::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        Vector3T<double> local_48[24];
        Vector3T<float> local_30[16];

        field_12 = 1;
        math::Vector3T<float>::Vector3T(local_30, param_1, false);
        math::Vector3T<double>::Vector3T<float>(local_48, (Vector3T*)local_30);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_64, (Vector3T*)local_48);
    }

    // 0x10061d6e0, 64 bytes, placed by class name and debug map
    // LookatPoint::GetLookatData(LookatData&)
    void LookatPoint::GetLookatData(LookatData* param_1) {
        if ((*(code*)field_0[13])() != '\0') {
            *(undefined1**)(param_1 + 8) = m_currentLookat;
            *(undefined1**)param_1 = field_40;
            *(undefined1**)(param_1 + 16) = field_64;
            *(undefined1**)(param_1 + 24) = field_96;
        }
    }

    // 0x10061d720, 128 bytes, placed by class name and debug map
    // LookatPoint::SetLookat(CoordFine const&)
    void LookatPoint::SetLookat(CoordFine* param_1) {
        undefined1* this_00;
        Vector3T<double> local_40[24];

        field_12 = 1;
        math::Vector3T<double>::Vector3T<float>(local_40, (Vector3T*)&param_1->field_4);
        this_00 = field_64;
        math::Vector3T<double>::operator=((Vector3T<double>*)this_00, (Vector3T*)local_40);
        if (field_88 == 4294967295) {
            math::Vector3T<double>::operator=((Vector3T<double>*)m_currentLookat, (Vector3T*)this_00);
            math::Vector3T<double>::operator=((Vector3T<double>*)field_40, (Vector3T*)this_00);
            field_96->SetToZero();
        }
        field_88 = param_1->field_0;
    }

    // 0x10061d7a0, 64 bytes, placed by class name and debug map
    // LookatPoint::GetLookatFine(CoordFine&) const
    void LookatPoint::GetLookatFine(CoordFine* param_1) {
        undefined8 local_20[2];

        param_1->field_0 = field_88;
        local_20[0] = math::Vector3FromVector3T<double>((math*)m_currentLookat, (Vector3T*)param_1);
        (&param_1->field_4, (Vector3T*)local_20)->SetXYZ();
    }

    // 0x10061d7e0, 192 bytes, placed by class name and debug map
    // LookatPoint::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void LookatPoint::ToString(fixed_string* param_1) {
        char* pcVar1;
        undefined1 local_a0[120];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        CoordFine::CoordFine<double>((CoordFine*)local_a0, 0, (Vector3T*)field_64);
        new ((local_a0 + 16)) eastl::fixed_string<char, 64, true, eastl::allocator>();
        pcVar1 = CoordFine::ToString<64, true>((CoordFine*)local_a0, (fixed_string*)(local_a0 + 16));
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ LookatPoint : %s }", pcVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        /* WARNING: Subroutine does not return */
        ((local_a0 + 16))->~fixed_string();
    }

} // namespace jag::game
