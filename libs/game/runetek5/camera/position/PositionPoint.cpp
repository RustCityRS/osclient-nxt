// libs/game/runetek5/camera/position/PositionPoint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PositionPoint.h"

namespace jag::game {
    // 0x100022b10: PositionPoint::~PositionPoint() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100029ea0: PositionPoint::GetFinishTriggers(eastl::fixed_vector<int, 2ul>&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002a770: PositionPoint::~PositionPoint() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1004491e0: PositionPoint::Ready() const has the same machine code as math::Sphere2D::IsValid() const

    // 0x100617850
    void
    PositionPoint::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                       const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        Vector3T<double> local_48;

        field_12 = 1;
        Vector3T<float> local_30(arg1, false);
        local_48.Vector3T<float>(local_30);
        *field_40 = local_48;
    }

    // 0x1006178a0
    void PositionPoint::GetPositionData(PositionData& positionData, double arg2) {
        if (Ready() != '\0') {
            *(uint8_t**)positionData = &field_16;
            *(uint8_t**)(positionData + 8) = field_40;
            *(uint8_t**)(positionData + 16) = field_64;
        }
    }

    // 0x1006178e0
    void PositionPoint::GetPositionFine(CoordFine& coordFine, unsigned long long arg2) const {
        uint64_t extraout_var;
        uint64_t local_38[2];

        coordFine.field_0 = field_88;
        AABB local_50;
        uint8_t uVar1 = GetScaledPosition((unsigned long long)&local_50);
        local_38[0] =
            math::Vector3FromVector3T<double>(*((Vector3T<double>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
        coordFine.field_4.SetXYZ(*local_38);
    }

    // 0x100617950
    void PositionPoint::SetDestination(const CoordFine& coordFine) {
        Vector3T<double> local_40;

        field_12 = 1;
        local_40.Vector3T<float>(coordFine.field_4);
        *field_40 = local_40;
        if (field_88 == 4294967295) {
            local_40.Vector3T<float>(coordFine.field_4);
            field_16 = local_40;
            *field_64 = math::Vector3T<double>::SetToZero();
        }
        field_88 = coordFine.field_0;
    }

    // 0x1006179d0
    void PositionPoint::TestAndResolveCollision(const HeightMap* heightMap, const LinkMap* linkMap, bool arg3,
                                                bool arg4) {
        double dVar1;
        double* pdVar3;
        unsigned int arg2;
        uint64_t in_register_00000081;
        AABB local_60;
        unsigned int local_44;
        double local_40;
        int local_34;

        bool cVar2 = Ready();
        if ((((cVar2) && (heightMap != nullptr)) && (arg3)) && (m_groundCollision != false)) {
            local_40 = (double)(((uint64_t)local_40._4_4_ << 32) |
                                (uint32_t)((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4)));
            local_60 = oldscape::dash3d::ModelLit::AABB();
            GetDestinationPosition();
            local_44 = field_88;
            pdVar3 = &local_60[0];
            dVar1 = *pdVar3;
            pdVar3 = &local_60[2];
            arg2 = local_44;
            cVar2 = linkMap->IsLinkBelow((unsigned int)((unsigned long)(long)dVar1 >> 7) & 33554431,
                                         (unsigned int)((unsigned long)(long)*pdVar3 >> 7) & 33554431);
            if (cVar2) {
                arg2 = field_88 + 1;
            }
            pdVar3 = &local_60[0];
            dVar1 = *pdVar3;
            pdVar3 = &local_60[2];
            if ((uint8_t*)heightMap->GetFineHeight(local_34, arg2, (int)dVar1, (int)*pdVar3, true,
                                                   (unsigned int)local_40._0_1_) != DataStatus::NOTLOADED) {
                local_34 = local_34 + 128;
                pdVar3 = &local_60[1];
                local_40 = (double)local_34;
                if (*pdVar3 <= local_40 && local_40 != *pdVar3) {
                    pdVar3 = (double*)(*field_40)[1];
                    *pdVar3 = local_40;
                }
            }
        }
    }

    // 0x100617b20
    void PositionPoint::ToString(eastl::fixed_string<char, 512>& str) const {
        uint8_t local_a0[120];

        local_a0->CoordFine<double>(0, *field_40);
        new ((local_a0 + 16)) eastl::fixed_string<char, 64>();
        auto pcVar1 = local_a0->ToString<64, true>(*((local_a0 + 16)));
        str.sprintf("{ PositionPoint : %s) }", pcVar1);
        str.begin();
        ((local_a0 + 16))->~fixed_string();
    }

    // 0x1006199c0: PositionPoint::GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const has the same machine code as PositionPoint::GetPosition(math::Vector3T<double>&, unsigned long long) const

} // namespace jag::game
