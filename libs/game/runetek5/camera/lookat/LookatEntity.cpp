// libs/game/runetek5/camera/lookat/LookatEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LookatEntity.h"

namespace jag::game {
    // 0x100029ea0: LookatEntity::GetFinishTriggers(eastl::fixed_vector<int, 2ul>&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100102fc0: LookatEntity::GetCurrentLookat() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x10014d2f0: LookatEntity::GetZRotation() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x10036ce20: LookatEntity::Ready() const has the same machine code as eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short>> >::operator bool() const

    // 0x100619950: LookatEntity::GetLookatEntity() const has the same machine code as PositionEntity::GetPositionEntity() const

    // 0x10061c9e0
    void
    LookatEntity::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                      const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        shared_ptr<PathingEntity> local_48;

        uint8_t bVar1 = arg1.g1();
        unsigned short uVar3 = arg1.g2();
        field_32 = (unsigned int)bVar1;
        field_36 = (unsigned int)uVar3;
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_48, callback,
                                                                                (unsigned int)bVar1);
        (&field_16)->operator=(&local_48);
        Vector3T<float> local_58(arg1, false);
        local_48.Vector3T<float>(local_58);
        *field_48 = local_48;
        field_72 = arg1.g1() == '\x01';
        field_40 = 1;
    }

    // 0x10061cae0
    void LookatEntity::UpdateLookAtEntity(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        shared_ptr<PathingEntity> local_28;

        if ((field_40 != '\0') && (field_32 != 4294967295)) {
            std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_28, callback, field_32,
                                                                                    field_36);
            (&field_16)->operator=(&local_28);
        }
    }

    // 0x10061cb40
    void LookatEntity::SetLookatEntity(const shared_ptr<Entity>& entity, const math::Vector3T<double>& vector3,
                                       bool arg3) {
        field_40 = 1;
        (&field_16)->operator=(entity);
        auto plVar3 = entity.operator->();
        unsigned int uVar1 = (**(void (**)(...))(*plVar3 + 224))(plVar3);
        field_32 = uVar1;
        plVar3 = (long*)entity.operator->();
        uVar1 = (**(void (**)(...))(*plVar3 + 232))(plVar3);
        field_36 = uVar1;
        *field_48 = vector3;
        field_72 = arg3;
        field_152 = ((Entity*)entity.operator->())->GetHeightMapLevel();
    }

    // 0x10061cbd0
    uint32_t LookatEntity::GetLookatData(LookatData& lookatData) {
        uint32_t uVar2;
        long* plVar3;
        Vector3T<double> local_60;
        shared_ptr local_48;
        uint64_t local_38[2];

        if (Ready() == '\0') {
            uVar2 = 0;
        } else {
            local_48 = field_16.lock();
            uVar2 = shared_ptr::operator_cast_to_bool(&local_48);
            if ((char)uVar2 != '\0') {
                plVar3 = (long*)local_48.operator->();
                local_38[0] = (**(void (**)(...))(*plVar3 + 144))(plVar3);
                local_60.Vector3T<float>(*local_38);
                *field_128 = local_60;
                *(uint8_t**)(lookatData + 8) = m_currentLookat;
                *(uint8_t**)lookatData = field_104;
                *(uint8_t**)(lookatData + 16) = field_128;
                *(uint8_t**)(lookatData + 24) = field_160;
            }
        }
        return uVar2;
    }

    // 0x10061cca0
    void LookatEntity::GetLookatPosition(math::Vector3T<double>& vector3) const {
        bool cVar1;
        QuaternionT<float>* quaternion;
        QuaternionT<double> local_50;
        shared_ptr local_30;

        vector3 = *field_48;
        if (field_72 != false) {
            local_30 = field_16.lock();
            cVar1 = shared_ptr::operator_cast_to_bool(&local_30);
            if (!cVar1) {
                return;
            }
            quaternion = (((Entity*)local_30.operator->())->GetNode())->GetRotation();
            local_50 = math::QuaternionT<double>(*quaternion);
            vector3 *= &local_50;
            if (!cVar1) {
                return;
            }
        }
        vector3 += *m_currentLookat;
    }

    // 0x10061cd70
    void LookatEntity::SetCurrentLookat(const math::Vector3T<double>& vector3) {
        *m_currentLookat = vector3;
        *field_104 = vector3;
    }

    // 0x10061cda0
    void LookatEntity::GetDestinationLookat(math::Vector3T<double>& vector3) const {
        bool cVar1;
        QuaternionT<float>* quaternion;
        QuaternionT<double> local_50;
        shared_ptr local_30;

        vector3 = *field_48;
        if (field_72 != false) {
            local_30 = field_16.lock();
            cVar1 = shared_ptr::operator_cast_to_bool(&local_30);
            if (!cVar1) {
                return;
            }
            quaternion = (((Entity*)local_30.operator->())->GetNode())->GetRotation();
            local_50 = math::QuaternionT<double>(*quaternion);
            vector3 *= &local_50;
            if (!cVar1) {
                return;
            }
        }
        vector3 += *field_128;
    }

    // 0x10061ce60
    void LookatEntity::GetLookatFine(CoordFine& coordFine) const {
        uint64_t extraout_var;
        uint64_t local_20[2];

        coordFine.field_0 = field_152;
        uint8_t uVar1 = GetCurrentLookat();
        local_20[0] =
            math::Vector3FromVector3T<double>(*((Vector3T<double>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
        coordFine.field_4.SetXYZ(*local_20);
    }

    // 0x10061ceb0
    uint64_t LookatEntity::ToString(eastl::fixed_string<char, 512>& str) const {
        int arg1;
        Entity* pEVar2;
        Vector3T<float>* vector3;
        uint64_t uVar3;
        char* pcVar4;
        uint8_t local_a8[16];
        fixed_string<char, 64> local_88;

        *((local_a8 + 16)) = field_16.lock();
        bool cVar1 = ((local_a8 + 16))->operator_cast_to_bool();
        if (cVar1) {
            arg1 = ((HitmarkType*)(*((local_a8 + 16))).operator->())->GetDuration();
            pEVar2 = (Entity*)(*((local_a8 + 16))).operator->();
            vector3 = (Vector3T<float>*)pEVar2->GetWorldPosition();
            new (local_a8) CoordFine(arg1, vector3);
            local_88 = eastl::fixed_string<char, 64>();
            pEVar2 = (Entity*)(*((local_a8 + 16))).operator->();
            cVar1 = pEVar2->GetEntityType();
            uVar3 = GetEntityTypeString((int)cVar1);
            pcVar4 = local_a8->ToString<64, true>(local_88);
            str.sprintf("{ LookatEntity : %s @ %s }", uVar3, pcVar4);
        }
        str.sprintf("{ LookatEntity : expired }");
        uVar3 = str.begin();
        ((local_a8 + 16))->~shared_ptr();
        return uVar3;
    }

} // namespace jag::game
