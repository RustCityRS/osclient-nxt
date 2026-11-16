// libs/game/runetek5/camera/lookat/LookatPoint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LookatPoint.h"

namespace jag::game {
    // 0x100022b10: LookatPoint::~LookatPoint() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100029ea0: LookatPoint::GetFinishTriggers(eastl::fixed_vector<int, 2ul>&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002a770: LookatPoint::~LookatPoint() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1000b9950: LookatPoint::GetCurrentLookat() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x10014d2f0: LookatPoint::GetZRotation() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x1004491e0: LookatPoint::Ready() const has the same machine code as math::Sphere2D::IsValid() const

    // 0x100619970: LookatPoint::SetCurrentLookat(math::Vector3T<double> const&) has the same machine code as PositionPoint::SetCurrentPosition(math::Vector3T<double> const&)

    // 0x10061d690
    void LookatPoint::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                          const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        Vector3T<double> local_48;

        field_12 = 1;
        Vector3T<float> local_30(arg1, false);
        local_48.Vector3T<float>(local_30);
        *field_64 = local_48;
    }

    // 0x10061d6e0
    void LookatPoint::GetLookatData(LookatData& lookatData) {
        if (Ready() != '\0') {
            *(uint8_t**)(lookatData + 8) = m_currentLookat;
            *(uint8_t**)lookatData = field_40;
            *(uint8_t**)(lookatData + 16) = field_64;
            *(uint8_t**)(lookatData + 24) = field_96;
        }
    }

    // 0x10061d720
    void LookatPoint::SetLookat(const CoordFine& coordFine) {
        Vector3T<double> local_40;

        field_12 = 1;
        local_40.Vector3T<float>(coordFine.field_4);
        uint8_t* this_00 = field_64;
        *this_00 = local_40;
        if (field_88 == 4294967295) {
            *m_currentLookat = *this_00;
            *field_40 = *this_00;
            *field_96 = math::Vector3T<double>::SetToZero();
        }
        field_88 = coordFine.field_0;
    }

    // 0x10061d7a0
    void LookatPoint::GetLookatFine(CoordFine& coordFine) const {
        uint64_t local_20[2];

        coordFine.field_0 = field_88;
        local_20[0] = math::Vector3FromVector3T<double>(*m_currentLookat);
        coordFine.field_4.SetXYZ(*local_20);
    }

    // 0x10061d7e0
    void LookatPoint::ToString(eastl::fixed_string<char, 512>& str) const {
        uint8_t local_a0[120];

        local_a0->CoordFine<double>(0, *field_64);
        new ((local_a0 + 16)) eastl::fixed_string<char, 64>();
        auto pcVar1 = local_a0->ToString<64, true>(*((local_a0 + 16)));
        str.sprintf("{ LookatPoint : %s }", pcVar1);
        str.begin();
        ((local_a0 + 16))->~fixed_string();
    }

} // namespace jag::game
