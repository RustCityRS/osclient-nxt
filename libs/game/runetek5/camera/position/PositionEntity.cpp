// libs/game/runetek5/camera/position/PositionEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PositionEntity.h"

namespace jag::game {
    // 0x100029ea0: PositionEntity::GetFinishTriggers(eastl::fixed_vector<int, 2ul>&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10036ce20: PositionEntity::Ready() const has the same machine code as eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short>> >::operator bool() const

    // 0x1004491e0: PositionEntity::CamLocked() const has the same machine code as math::Sphere2D::IsValid() const

    // 0x100615fe0
    void
    PositionEntity::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                        const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        uint8_t bVar2 = arg1.g1();
        unsigned short uVar4 = arg1.g2();
        field_32 = (unsigned int)bVar2;
        field_36 = (unsigned int)uVar4;
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_50, callback,
                                                                                (unsigned int)bVar2);
        (&field_16)->operator=(&local_50);
        Vector3T<float> local_60(arg1, false);
        QuaternionT<float> local_70(arg1, false);
        field_204 = arg1.g1() == '\x01';
        uVar4 = arg1.g2();
        field_208 = (unsigned int)uVar4;
        uVar4 = arg1.g2();
        field_212 = (unsigned int)uVar4;
        local_50.Vector3T<float>(local_60);
        unsigned int uVar1 = field_212;
        unsigned long long uVar5 = FrameTime::GetCurrentTimeMS();
        field_48.SetValue(local_50, (long)(int)uVar1, uVar5);
        shared_ptr<PathingEntity> local_50(local_70);
        uVar1 = field_212;
        uVar5 = FrameTime::GetCurrentTimeMS();
        field_112.SetValue(local_50, (long)(int)uVar1, uVar5);
        field_40 = 1;
    }

    // 0x1006161a0
    void
    PositionEntity::UpdatePositionEntity(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        shared_ptr<PathingEntity> local_28;

        if ((field_40 != '\0') && (field_32 != 4294967295)) {
            std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_28, callback, field_32,
                                                                                    field_36);
            (&field_16)->operator=(&local_28);
        }
    }

    // 0x100616200
    void PositionEntity::GetOrientationOffset(math::QuaternionT<double>& quaternion, math::Point<int>& point) {
        uint8_t* this_00;
        int iVar1;
        unsigned int uVar2;
        QuaternionT<double>* quaternion_00;
        QuaternionT<double>* in_RCX;
        Point<int> local_38;
        CameraHelpers local_30;
        int local_2c;

        quaternion_00 = (QuaternionT<double>*)field_112.GetMaterial();
        quaternion = *quaternion_00;
        local_30.QuaternionToOldJagexAngles(local_2c, quaternion, *in_RCX);
        auto piVar3 = point.SSOBeginPtr();
        *piVar3 = local_30.field_0;
        piVar3 = (int*)point.y();
        *piVar3 = local_2c;
        if (field_192 != '\0') {
            piVar3 = (int*)point.SSOBeginPtr();
            iVar1 = *piVar3;
            this_00 = &field_196;
            piVar3 = (int*)this_00->SSOBeginPtr();
            uVar2 = -(iVar1 - *piVar3);
            if ((int)uVar2 < 0) {
                uVar2 = iVar1 - *piVar3;
            }
            if (uVar2 < 3) {
                piVar3 = (int*)point.y();
                iVar1 = *piVar3;
                piVar3 = (int*)this_00->y();
                uVar2 = -(iVar1 - *piVar3);
                if ((int)uVar2 < 0) {
                    uVar2 = iVar1 - *piVar3;
                }
                if (uVar2 < 3) {
                    local_38 = math::Point(*this_00);
                    point = &local_38;
                    return;
                }
            }
            field_192 = 0;
        }
    }

    // 0x1006162e0
    void PositionEntity::SetOrientationOffset(const math::QuaternionT<double>& quaternion) {
        unsigned int uVar1 = field_212;
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        field_112.SetValue(quaternion, (long)(int)uVar1, arg3);
        field_192 = 0;
    }

    // 0x100616330
    void PositionEntity::SetOrientationOffset(const math::QuaternionT<double>& quaternion, int arg2, int arg3) {
        unsigned int uVar1 = field_212;
        unsigned long long arg3_00 = FrameTime::GetCurrentTimeMS();
        field_112.SetValue(quaternion, (long)(int)uVar1, arg3_00);
        auto piVar2 = field_196.SSOBeginPtr();
        *piVar2 = arg2;
        piVar2 = (int*)field_196.y();
        *piVar2 = arg3;
        field_192 = 1;
    }

    // 0x1006163a0
    void PositionEntity::SetPositionEntity(const shared_ptr<Entity>& entity, const math::Vector3T<double>& vector3,
                                           const math::QuaternionT<double>& quaternion, bool arg4, int arg5, int arg6) {
        uint64_t in_register_00000009;
        uint32_t in_stack_00000008;

        entity[40] = (shared_ptr<Entity>)1;
        ((entity + 16))->operator=(vector3);
        auto plVar3 = vector3.operator->();
        uint32_t uVar2 = (**(void (**)(...))(*plVar3 + 232))(plVar3);
        *(uint32_t*)(entity + 36) = uVar2;
        plVar3 = (long*)vector3.operator->();
        uVar2 = (**(void (**)(...))(*plVar3 + 224))(plVar3);
        *(uint32_t*)(entity + 32) = uVar2;
        entity[192] = (shared_ptr<Entity>)0;
        entity[204] = (uint8_t)arg5;
        *(int*)(entity + 208) = arg6;
        *(uint32_t*)(entity + 212) = in_stack_00000008;
        uVar2 = ((Entity*)vector3.operator->())->GetHeightMapLevel();
        *(uint32_t*)(entity + 272) = uVar2;
        int iVar1 = *(int*)(entity + 212);
        unsigned long long uVar4 = FrameTime::GetCurrentTimeMS();
        ((entity + 48))->SetValue(quaternion, (long)iVar1, uVar4);
        iVar1 = *(int*)(entity + 212);
        uVar4 = FrameTime::GetCurrentTimeMS();
        ((entity + 112))
            ->SetValue(*((QuaternionT<double>*)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4)), (long)iVar1,
                       uVar4);
    }

    // 0x100616490
    void PositionEntity::SetPositionEntity(const shared_ptr<Entity>& entity, const math::Vector3T<double>& vector3,
                                           const math::QuaternionT<double>& quaternion, bool arg4, int arg5, int arg6,
                                           int arg7, int arg8) {
        field_40 = 1;
        (&field_16)->operator=(entity);
        auto plVar3 = entity.operator->();
        unsigned int uVar1 = (**(void (**)(...))(*plVar3 + 232))(plVar3);
        field_36 = uVar1;
        plVar3 = (long*)entity.operator->();
        uVar1 = (**(void (**)(...))(*plVar3 + 224))(plVar3);
        field_32 = uVar1;
        auto piVar4 = field_196.SSOBeginPtr();
        *piVar4 = arg7;
        piVar4 = (int*)field_196.y();
        *piVar4 = arg8;
        field_192 = 1;
        field_204 = arg4;
        field_208 = arg5;
        field_212 = arg6;
        field_272 = ((Entity*)entity.operator->())->GetHeightMapLevel();
        uVar1 = field_212;
        unsigned long long uVar5 = FrameTime::GetCurrentTimeMS();
        field_48.SetValue(vector3, (long)(int)uVar1, uVar5);
        uVar1 = field_212;
        uVar5 = FrameTime::GetCurrentTimeMS();
        field_112.SetValue(quaternion, (long)(int)uVar1, uVar5);
    }

    // 0x1006165a0
    uint32_t PositionEntity::GetPositionData(PositionData& positionData, double arg2) {
        QuaternionT<float>* quaternion;
        double* pdVar3;
        uint64_t* puVar4;
        QuaternionT<double>* pQVar5;
        double dVar7;
        Vector3T<double> local_d0;
        double local_98[4];
        double local_78;
        double dStack_70;
        double local_68;
        double dStack_60;
        double local_58;
        uint64_t uStack_50;

        double local_38 = arg2;
        if (Ready() == '\0') {
            return 0;
        }
        QuaternionT<double> local_b8;
        shared_ptr local_48 = field_16.lock();
        uint32_t uVar2 = shared_ptr::operator_cast_to_bool(&local_48);
        if ((char)uVar2 == '\0')
            goto LAB_100616811;
        field_216 = local_38 == 1.0;
        if (field_204 == false) {
            pQVar5 = (QuaternionT<double>*)field_112.GetMaterial();
            local_b8 = *pQVar5;
        } else {
            quaternion = (((Entity*)local_48.operator->())->GetNode())->GetRotation();
            new (local_98) math::QuaternionT<double>(*quaternion);
            local_d0** PTR_LOOK_100ee66b8;
            pdVar3 = (double*)local_d0.SSOBeginPtr();
            local_58 = *pdVar3;
            puVar4 = (uint64_t*)local_d0.GetScreen();
            dVar7 = (double)_atan2(local_58, (int)*puVar4);
            local_b8.FromAxisAngle(*PTR_UP_100ee66b0, dVar7);
            pdVar3 = (double*)field_112.GetMaterial();
            local_78 = *pdVar3;
            dStack_70 = pdVar3[1];
            local_68 = pdVar3[2];
            dStack_60 = pdVar3[3];
            local_b8 *= &local_78;
        }
        uint32_t uVar8 = (uint32_t)local_38;
        if (local_38 == 1.0) {
            pQVar5 = &local_b8;
        LAB_1006167ae:
            field_304 = *pQVar5;
        } else {
            local_58 = local_38;
            uStack_50 = 0;
            dVar7 = (double)FrameTime::GetFrameDeltaD();
            local_38 = SQRT(dVar7 * 50.0) * ABS(local_58);
            local_98[0] = 0.0;
            local_78 = 1.0;
            local_38 = math::Clamp<double>(local_38, *local_98, local_78);
            uVar8 = 0;
            if (0.0 < local_38) {
                uVar8 = 2696277389;
                JagSlerp<math::QuaternionT<double>, double>((QuaternionT<double>*)local_98,
                                                            (QuaternionT<double>*)&field_304, local_38, 1e-06);
                pQVar5 = (QuaternionT<double>*)local_98;
                goto LAB_1006167ae;
            }
        }
        auto plVar6 = local_48.operator->();
        local_78 = (double)(**(void (**)(...))(*plVar6 + 144))(plVar6);
        dStack_70 = (double)(((uint64_t)dStack_70._4_4_ << 32) | (uint32_t)uVar8);
        local_98->Vector3T<float>(local_78);
        *field_248 = *local_98;
        *(uint8_t**)positionData = &field_224;
        *(uint8_t**)(positionData + 8) = field_248;
        *(uint8_t**)(positionData + 16) = field_280;
    LAB_100616811:
        return uVar2;
    }

    // 0x100616b30
    Vector3T<double>* PositionEntity::GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const {
        QuaternionT<double>* quaternion;
        ReturnValue local_58;
        Vector3T<double> local_40;

        if (field_216 == '\0') {
            local_58 = field_48.GetValue(arg2);
            local_40* local_58;
        } else {
            quaternion = (QuaternionT<double>*)field_48.get_overflow_allocator();
            local_40** quaternion;
        }
        vector3 = local_40;
        vector3 += field_224;
        return vector3;
    }

    // 0x100616bd0
    Vector3T<double>* PositionEntity::GetScaledPosition(math::Vector3T<double>& vector3, unsigned long long arg2,
                                                        float arg3) const {
        ReturnValue local_78;
        Vector3T<double> local_60;
        Vector3T<double> local_48;

        if (field_216 == '\0') {
            local_78 = field_48.GetValue(arg2);
            local_48** arg3;
            local_60* local_48;
        } else {
            field_48.get_overflow_allocator();
            local_48** arg3;
            local_60* local_48;
        }
        vector3 = local_60;
        vector3 += field_224;
        return vector3;
    }

    // 0x100616ce0
    Vector3T<double>* PositionEntity::GetDestinationPosition(math::Vector3T<double>& vector3) const {
        Vector3T<double> local_40;

        auto quaternion = field_48.get_overflow_allocator();
        field_112.GetMaterial();
        local_40** quaternion;
        vector3 = local_40;
        vector3 += *field_248;
        return vector3;
    }

    // 0x100616d50
    void PositionEntity::GetPositionFine(CoordFine& coordFine, unsigned long long arg2) const {
        uint8_t local_58[24];

        coordFine.field_0 = field_272;
        new (local_58) oldscape::dash3d::ModelLit::AABB();
        GetPosition((unsigned long long)local_58);
        auto pdVar1 = local_58->SSOBeginPtr();
        float local_30 = (float)*pdVar1;
        pdVar1 = (double*)local_58->second();
        float local_2c = (float)*pdVar1;
        pdVar1 = (double*)local_58->GetScreen();
        ColourHSL local_40(local_30, local_2c, (float)*pdVar1);
        coordFine.field_4.SetXYZ(local_40);
    }

    // 0x100616e00
    void PositionEntity::UpdateOrientationOffset(const math::QuaternionT<double>& quaternion, unsigned long long arg2) {
        QuaternionT<double>* in_RCX;
        ReturnValue local_58;
        int local_38;
        CameraHelpers local_34;

        field_112.GetMaterial();
        local_58 quaternion;
        local_34.QuaternionToOldJagexAngles(local_38, local_58, *in_RCX);
        if ((field_12 == '\0') || ((127 < local_34.field_0 && (local_34.field_0 < 385)))) {
            local_58 = math::QuaternionT<double>::Normalise();
            field_112.SetValue(local_58, (long)(int)field_212, arg2);
        }
    }

    // 0x1006171a0
    void PositionEntity::TestAndResolveCollision(const HeightMap* heightMap, const LinkMap* linkMap, bool arg3,
                                                 bool arg4) {
        unsigned int uVar1;
        double dVar2;
        bool arg5;
        int iVar5;
        int iVar6;
        uint64_t* puVar7;
        unsigned long long arg3_00;
        uint32_t uVar8;
        uint32_t uVar9;
        QuaternionT<double> local_158;
        Vector3T<double> local_138;
        uint64_t local_118;
        uint64_t uStack_110;
        uint64_t local_108;
        uint64_t uStack_100;
        double local_f8;
        uint64_t uStack_f0;
        ReturnValue local_e0;
        uint64_t uStack_d8;
        uint64_t local_d0;
        ReturnValue local_c8;
        uint64_t uStack_c0;
        uint64_t local_b8;
        uint8_t local_a8[16];
        double local_90;
        shared_ptr local_80;
        GeometryBatchInstance* local_70;
        double local_60;
        int local_54;
        unsigned int local_4c;
        double local_40;
        int local_34;

        bool cVar3 = Ready();
        if (((cVar3) && (heightMap != nullptr)) && (arg3)) {
            local_80 = field_16.lock();
            cVar3 = shared_ptr::operator_cast_to_bool(&local_80);
            if (cVar3) {
                iVar5 = ((Entity*)local_80.operator->())->GetHeightMapLevel();
                field_272 = iVar5;
                iVar6 = ((HitmarkType*)local_80.operator->())->GetDuration();
                if (iVar5 == iVar6) {
                    arg5 = field_272 < 3;
                } else {
                    arg5 = false;
                }
                local_4c = (unsigned int)arg5;
                if ((CollisionTestHeightDiff(local_34, heightMap, linkMap, arg4, arg5) & 0 < local_34) != 0) {
                    local_70 = (GeometryBatchInstance*)&field_112;
                    local_70->GetMaterial();
                    local_e0** PTR_LOOK_100ee66b8;
                    local_b8 = local_d0;
                    local_c8 = local_e0;
                    uStack_c0 = uStack_d8;
                    puVar7 = (uint64_t*)local_c8.second();
                    *puVar7 = 0;
                    local_c8 = math::Vector3T<double>::Normalize();
                    local_60 = math::Vector3Dot<double>(local_e0, local_c8);
                    local_40 = 1.570796327;
                    iVar5 = 10;
                    do {
                        uVar8 = 0;
                        uVar9 = 0;
                        local_90 = (local_60 + local_40) * 0.5;
                        local_f8 = local_90 - local_60;
                        uStack_f0 = 0;
                        dVar2 = local_f8;
                        if (0 < local_34) {
                            dVar2 = (double)((unsigned long)local_f8 ^ (unsigned long)DAT_100d99950);
                            uVar8 = DAT_100d99950._8_4_;
                            uVar9 = DAT_100d99950._12_4_;
                        }
                        local_a8._8_4_ = uVar8;
                        local_a8._0_8_ = dVar2;
                        local_a8._12_4_ = uVar9;
                        local_54 = iVar5;
                        puVar7 = (uint64_t*)local_70->GetMaterial();
                        local_118 = *puVar7;
                        uStack_110 = puVar7[1];
                        local_108 = puVar7[2];
                        uStack_100 = puVar7[3];
                        local_138** PTR_RIGHT_100ee66c8;
                        local_e0 = local_138;
                        local_138 = math::QuaternionT<double>();
                        local_138.FromAxisAngle(local_e0, (double)local_a8._0_8_);
                        local_158* local_138;
                        uVar1 = field_212;
                        arg3_00 = FrameTime::GetCurrentTimeMS();
                        local_70->SetValue(local_158, (long)(int)uVar1, arg3_00);
                        cVar3 = CollisionTestHeightDiff(local_34, heightMap, linkMap, (uint8_t)(unsigned int)arg4,
                                                        (uint8_t)local_4c);
                        if (cVar3) {
                            if (local_34 < 1) {
                                local_40 = local_40 - local_f8;
                            } else {
                                local_60 = local_90;
                            }
                        }
                    } while ((cVar3) && (iVar5 = local_54 - 1, iVar5 != 0));
                }
            }
        }
    }

    // 0x1006174a0
    uint64_t PositionEntity::CollisionTestHeightDiff(int& arg1, const HeightMap* heightMap, const LinkMap* linkMap,
                                                     bool arg4, bool arg5) {
        double dVar1;
        unsigned int uVar4;
        double* pdVar5;
        uint64_t in_register_00000081;
        uint64_t in_register_00000089;
        int local_34;

        HeightOffsetType local_38 = (HeightOffsetType)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        AABB local_58;
        GetDestinationPosition();
        int iVar8 = field_272;
        if ((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5) != 0) {
            pdVar5 = (double*)local_58.SSOBeginPtr();
            dVar1 = *pdVar5;
            pdVar5 = (double*)local_58.GetScreen();
            if (linkMap->IsLinkBelow((unsigned int)((unsigned long)(long)dVar1 >> 7) & 33554431,
                                     (unsigned int)((unsigned long)(long)*pdVar5 >> 7) & 33554431) != '\0') {
                iVar8 = field_272 + 1;
            }
        }
        pdVar5 = (double*)local_58.SSOBeginPtr();
        dVar1 = *pdVar5;
        pdVar5 = (double*)local_58.GetScreen();
        auto puVar6 = heightMap->GetFineHeight(local_34, iVar8, (int)dVar1, (int)*pdVar5, true, local_38 & 255);
        iVar8 = local_34;
        uint8_t* puVar2 = DataStatus::NOTLOADED;
        uint8_t** ppuVar7 = &DataStatus::NOTLOADED;
        if (puVar6 != DataStatus::NOTLOADED) {
            local_34 = local_34 + 153;
            pdVar5 = (double*)local_58.second();
            uVar4 = (iVar8 - (int)*pdVar5) + 153;
            ppuVar7 = (uint8_t**)(unsigned long)uVar4;
            arg1 = uVar4;
        }
        return puVar6 != puVar2;
    }

    // 0x1006175c0
    unsigned long PositionEntity::GetFollowAngle() const {
        Vector3T<double> local_38;

        auto quaternion = field_48.get_overflow_allocator();
        local_38** quaternion;
        double* pdVar1 = &local_38[0];
        double local_20 = *pdVar1;
        pdVar1 = &local_38[2];
        return math::conversion::JagAtan2(local_20, *pdVar1) ^ 9223372036854775808;
    }

    // 0x100617630
    unsigned long PositionEntity::GetFollowAngle(math::Point<int>& point) const {
        Vector3T<double> local_48;

        Point<int> local_30(field_196);
        point = &local_30;
        auto quaternion = field_48.get_overflow_allocator();
        local_48** quaternion;
        double* pdVar1 = &local_48[0];
        double local_28 = *pdVar1;
        pdVar1 = &local_48[2];
        return math::conversion::JagAtan2(local_28, *pdVar1) ^ 9223372036854775808;
    }

    // 0x1006176d0
    double PositionEntity::GetDeclination() const {
        QuaternionT<double>* in_RCX;
        int local_10;
        CameraHelpers local_c;

        local_c.QuaternionToOldJagexAngles(local_10, field_304, *in_RCX);
        float fVar1 = (float)math::conversion::OldJagexAngleToRadians(local_c.field_0);
        return (double)fVar1;
    }

    // 0x100617700
    uint64_t PositionEntity::ToString(eastl::fixed_string<char, 512>& str) const {
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
            str.sprintf("{ PositionEntity : %s @ %s }", uVar3, pcVar4);
        }
        str.sprintf("{ PositionEntity : expired }");
        uVar3 = str.begin();
        ((local_a8 + 16))->~shared_ptr();
        return uVar3;
    }

} // namespace jag::game

namespace jag::math {
    // 0x100616a00
    double Clamp<double>(const double& arg1, const double& arg2, const double& arg3) {
        auto pdVar1 = std::max<double>(arg2, arg1);
        pdVar1 = std::min<double>(arg3, *pdVar1);
        return *pdVar1;
    }

    // 0x100616ca0
    Vector3T<double> operator* <double>(const Vector3T<double>& vector3, float arg2) {
        double* in_RSI;

        new (vector3) Vector3T(*in_RSI * (double)arg2, in_RSI[1] * (double)arg2, (double)arg2 * in_RSI[2]);
        return vector3;
    }

    // 0x100616ea0
    QuaternionT<double> operator*
        <double>(const QuaternionT<double>& quaternion1, const QuaternionT<double>& quaternion2) {
        NXTPixToolkit* in_RDX;

        auto pdVar32 = quaternion2.second();
        double dVar1 = *pdVar32;
        pdVar32 = (double*)in_RDX->SSOBeginPtr();
        double dVar2 = *pdVar32;
        pdVar32 = (double*)quaternion2.SSOBeginPtr();
        double dVar3 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar4 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar5 = *pdVar32;
        pdVar32 = (double*)in_RDX->GetScreen();
        double dVar6 = *pdVar32;
        pdVar32 = (double*)quaternion2.GetScreen();
        double dVar7 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar8 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar9 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar10 = *pdVar32;
        pdVar32 = (double*)quaternion2.SSOBeginPtr();
        double dVar11 = *pdVar32;
        pdVar32 = (double*)in_RDX->GetScreen();
        double dVar12 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar13 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar14 = *pdVar32;
        pdVar32 = (double*)quaternion2.GetScreen();
        double dVar15 = *pdVar32;
        pdVar32 = (double*)in_RDX->SSOBeginPtr();
        double dVar16 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar17 = *pdVar32;
        pdVar32 = (double*)in_RDX->GetScreen();
        double dVar18 = *pdVar32;
        pdVar32 = (double*)quaternion2.SSOBeginPtr();
        double dVar19 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar20 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar21 = *pdVar32;
        pdVar32 = (double*)in_RDX->SSOBeginPtr();
        double dVar22 = *pdVar32;
        pdVar32 = (double*)quaternion2.GetScreen();
        double dVar23 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar24 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar25 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar26 = *pdVar32;
        pdVar32 = (double*)quaternion2.SSOBeginPtr();
        double dVar27 = *pdVar32;
        pdVar32 = (double*)in_RDX->SSOBeginPtr();
        double dVar28 = *pdVar32;
        pdVar32 = (double*)quaternion2.second();
        double dVar29 = *pdVar32;
        pdVar32 = (double*)in_RDX->second();
        double dVar30 = *pdVar32;
        pdVar32 = (double*)quaternion2.GetScreen();
        double dVar31 = *pdVar32;
        pdVar32 = (double*)in_RDX->GetScreen();
        new (quaternion1)
            QuaternionT<double>((dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2) - dVar7 * dVar8,
                                dVar15 * dVar16 + dVar13 * dVar14 + (dVar9 * dVar10 - dVar11 * dVar12),
                                dVar23 * dVar24 + ((dVar19 * dVar20 + dVar17 * dVar18) - dVar21 * dVar22),
                                dVar25 * dVar26 - (dVar31 * *pdVar32 + dVar29 * dVar30 + dVar27 * dVar28));
        return quaternion1;
    }

} // namespace jag::math
