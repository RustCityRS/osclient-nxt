// libs/game/runetek5/camera/OldCamera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "OldCamera.h"

namespace jag::game {
    // 0x10041b1d0: the linker folded this into NPCType::GetAttackOpIndex() const, which has identical code
    OldCamera::GetCamHeight() const;

    // 0x10041b1f0: the linker folded this into NPCType::GetExamineOpIndex() const, which has identical code
    OldCamera::GetCamZoom() const;

    // 0x1006200e0, 464 bytes, base-object constructor, placed by class name
    // OldCamera::OldCamera(std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* OldCamera::OldCamera(std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void OldCamera::OldCamera(function* param_1) {
        undefined** ppuVar1;
        function* pfVar2;

        pfVar2 = param_1 + 8;
        new (this) Camera(pfVar2);
        ppuVar1 = *(undefined***)param_1;
        field_0 = ppuVar1;
        *(undefined8*)(field_208 + (long)(ppuVar1[-33] + -208)) = *(undefined8*)(param_1 + 24);
        *(undefined8*)&m_cameraMode = 0;
        *(undefined8*)&field_632 = 0;
        field_640 = 0;
        new (field_648, (_func_decltype_nullptr*)pfVar2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_664, (_func_decltype_nullptr*)pfVar2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_680 = 0;
        field_688 = 0.0;
        field_696 = 0.0;
        field_704 = '\0';
        field_705 = '\0';
        m_camHeight = 400;
        m_camZoom = -4500;
        new (&field_720, 0.0, 400.0, 0.0) math::Vector3T<double>();
        new (&field_744, 0.0, (double)m_camHeight, (double)m_camZoom) math::Vector3T<double>();
        new (&field_768) math::QuaternionT<double>();
        m_camZoomScales = 256;
        m_camZoomScaleBig = 320;
        m_verticalFOV = 90.0;
        m_verticalFOVBig = 90.0;
        field_816 = 90.0;
        field_820 = 90.0;
        field_824 = -1.0;
        field_828 = -1.0;
        field_832 = -1.0;
        field_836 = -1.0;
        new (&field_840) math::Vector2T<int>();
        new (field_848) oldscape::dash3d::ModelLit::AABB();
        new (field_872) oldscape::dash3d::ModelLit::AABB();
        new (&field_896, (_func_decltype_nullptr*)pfVar2)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        SetAngularLookatInterpolant(1.0);
        SetAngularPositionInterpolant(1.0);
        CameraHelpers::OldJagexAnglesToQuaternion((QuaternionT*)&field_768, 128, 1024, 0);
    }

    // 0x1006202b0, 464 bytes, complete-object constructor, placed by class name
    // OldCamera::OldCamera(std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* OldCamera::OldCamera(std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void OldCamera::OldCamera(function* param_1) {
        undefined** ppuVar1;

        new (this) ICamera();
        ppuVar1 = &PTR_PTR_100f0c738;
        new (this) Camera((function*)&PTR_PTR_100f0c738);
        field_0 = &PTR_Ready_100f0c538;
        *(undefined8*)&m_cameraMode = 0;
        *(undefined8*)&field_632 = 0;
        field_640 = 0;
        new (field_648, (_func_decltype_nullptr*)ppuVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_664, (_func_decltype_nullptr*)ppuVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_680 = 0;
        field_688 = 0.0;
        field_696 = 0.0;
        field_704 = '\0';
        field_705 = '\0';
        m_camHeight = 400;
        m_camZoom = -4500;
        new (&field_720, 0.0, 400.0, 0.0) math::Vector3T<double>();
        new (&field_744, 0.0, (double)m_camHeight, (double)m_camZoom) math::Vector3T<double>();
        new (&field_768) math::QuaternionT<double>();
        m_camZoomScales = 256;
        m_camZoomScaleBig = 320;
        m_verticalFOV = 90.0;
        m_verticalFOVBig = 90.0;
        field_816 = 90.0;
        field_820 = 90.0;
        field_824 = -1.0;
        field_828 = -1.0;
        field_832 = -1.0;
        field_836 = -1.0;
        new (&field_840) math::Vector2T<int>();
        new (field_848) oldscape::dash3d::ModelLit::AABB();
        new (field_872) oldscape::dash3d::ModelLit::AABB();
        new (&field_896, (_func_decltype_nullptr*)ppuVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        SetAngularLookatInterpolant(1.0);
        SetAngularPositionInterpolant(1.0);
        CameraHelpers::OldJagexAnglesToQuaternion((QuaternionT*)&field_768, 128, 1024, 0);
    }

    // 0x100620480, 32 bytes, placed by class name
    // OldCamera::GetVerticalFOV() const
    double OldCamera::GetVerticalFOV() {
        float fVar1;

        fVar1 = (float)math::Deg2Rad(field_816);
        return (double)(fVar1 * 0.5);
    }

    // 0x1006204c0, 64 bytes, placed by class name
    // OldCamera::GetAspectRatio() const
    double OldCamera::GetAspectRatio() {
        int iVar1;
        int iVar2;

        iVar1 = (&field_840)->GetX();
        iVar2 = (&field_840)->GetZ();
        return (double)iVar1 / (double)iVar2;
    }

    // 0x100620520, 352 bytes, placed by class name
    // OldCamera::ClampCinematicXAngle(LookatData&, PositionData&)
    void OldCamera::ClampCinematicXAngle(LookatData* param_1, PositionData* param_2) {
        ulong* puVar1;
        vector* pvVar2;
        double* pdVar3;
        undefined8* puVar4;
        Vector3T* pVVar5;
        double dVar6;
        undefined4 uVar7;
        undefined1 local_70[28];
        uint uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        double local_40;
        undefined1 local_38[16];
        double local_28;

        math::Vector3T<double>::operator=(*(Vector3T<double>**)(param_1 + 8), *(Vector3T**)param_1);
        pVVar5 = *(Vector3T**)(param_1 + 8);
        math::operator-((math*)local_70, pVVar5, *(Vector3T**)param_2);
        puVar1 = (ulong*)local_70->second();
        local_38._0_8_ = *puVar1;
        local_70._24_4_ = SUB84(local_38._0_8_, 0);
        local_38._8_8_ = 0;
        uStack_54 = (uint)((ulong)local_38._0_8_ >> 32) ^ 2147483648;
        uStack_50 = 0;
        uStack_4c = 2147483648;
        pvVar2 = local_70->SSOBeginPtr(pVVar5);
        local_28 = *(double*)pvVar2;
        pvVar2 = local_70->SSOBeginPtr(pVVar5);
        local_28 = local_28 * *(double*)pvVar2;
        pdVar3 = (double*)local_70->GetScreen();
        local_40 = *pdVar3;
        pdVar3 = (double*)local_70->GetScreen();
        local_28 = SQRT(local_40 * *pdVar3 + local_28);
        dVar6 = (double)_atan(SUB84((double)CONCAT44(uStack_54, local_70._24_4_) / local_28, 0));
        if (0.39269909262657166 <= dVar6) {
            if (dVar6 <= 1.1780972480773926) {
                return;
            }
            if (local_28 == 0.0) {
                pdVar3 = (double*)(*(NXTPixToolkit**)param_2)->GetScreen();
                uVar7 = local_38._12_4_;
                local_38._8_4_ = local_38._8_4_;
                local_38._0_8_ = local_38._0_8_ * -0.4142136100914581 + *pdVar3;
                local_38._12_4_ = uVar7;
                puVar4 = (undefined8*)(*(NXTPixToolkit**)(param_1 + 8))->GetScreen();
                goto LAB_10062065f;
            }
            local_28 = local_28 * -2.4142135827301394;
        } else {
            local_28 = local_28 * -0.4142135751758648;
        }
        pdVar3 = (double*)eastl::compressed_pair_imp<
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
            0>::second(*(compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>**)param_2);
        local_28 = local_28 + *pdVar3;
        puVar4 = (undefined8*)eastl::compressed_pair_imp<
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
            0>::second(*(compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>**)(param_1 + 8));
        local_38._0_4_ = SUB84(local_28, 0);
        local_38._4_4_ = SUB84((ulong)local_28 >> 32, 0);
    LAB_10062065f:
        *puVar4 = CONCAT44(local_38._4_4_, local_38._0_4_);
    }

    // 0x100620680, 416 bytes, placed by class name
    // OldCamera::UpdateLookAt(unsigned long long, float, math::QuaternionT<double> const&)
    void OldCamera::UpdateLookAt(ulonglong param_1, float param_2, QuaternionT* param_3) {
        char cVar1;
        shared_ptr<ILookatManager>* psVar3;
        ILookatManager* this;
        long* plVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        shared_ptr* this_00;
        shared_ptr<IPositionManager>* this_01;
        OldCamera* this_02;
        QuaternionT* in_RDX;
        float extraout_XMM0_Da;
        Vector3T* local_68[2];
        Vector3T* local_58;
        OldCamera* local_48[3];

        if (*(int*)(param_1 + 624) != 3) {
            psVar3 = (shared_ptr<ILookatManager>*)(**(code**)(*(long*)param_1 + 192))(param_1);
            this = (ILookatManager*)shared_ptr<ILookatManager>::operator->(psVar3);
            cVar1 = IsSpline();
            if (cVar1 == '\0') {
                new (local_68) eastl::DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                                    render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                                    render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>();
                psVar3 = (shared_ptr<ILookatManager>*)(**(code**)(*(long*)param_1 + 192))(param_1);
                plVar4 = (long*)shared_ptr<ILookatManager>::operator->(psVar3);
                cVar1 = (**(code**)(*plVar4 + 40))(
                    plVar4, (DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                           render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                           render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>*)local_68);
                if (cVar1 == '\0') {
                    return;
                }
                if (*(int*)(param_1 + 624) == 2) {
                    this_00 = (shared_ptr*)(**(code**)(*(long*)param_1 + 200))(param_1);
                    if (!shared_ptr::operator_cast_to_bool(this_00)) {
                        return;
                    }
                    new (local_48) oldscape::dash3d::ModelLit::AABB();
                    this_01 = (shared_ptr<IPositionManager>*)(**(code**)(*(long*)param_1 + 200))(param_1);
                    this_02 = (OldCamera*)shared_ptr<IPositionManager>::operator->(this_01);
                    param_1->GetAngularPositionInterpolant();
                    cVar1 = (*(code*)this_02->field_0[9])(this_02, (AABB*)local_48);
                    if (cVar1 != '\0') {
                        DeceleratingMovement::DeceleratingLookatUpdateWorldSpace(
                            extraout_XMM0_Da, (Vector3T*)local_48[0], local_68[0], local_58, *(int*)(param_1 + 628),
                            *(int*)(param_1 + 636));
                        this_02 = local_48[0];
                    }
                    ClampCinematicXAngle(this_02, (LookatData*)local_68, (PositionData*)local_48);
                    return;
                }
                param_1->UpdateLookAt((ulonglong)param_3, param_2, in_RDX);
                if (*(int*)(param_1 + 624) != 5) {
                    return;
                }
                cVar1 = param_1->DoingTimedMove();
                if (cVar1 == '\0') {
                    *(undefined4*)(param_1 + 624) = 1;
                    return;
                }
                return;
            }
        }
        psVar3 = (shared_ptr<ILookatManager>*)(**(code**)(*(long*)param_1 + 192))(param_1);
        plVar4 = (long*)shared_ptr<ILookatManager>::operator->(psVar3);
        uVar5 = param_1->GetEmissiveUVScale();
        uVar6 = param_1->GetLinearLookatAcceleration();
        (**(code**)(*plVar4 + 24))(param_2, plVar4, uVar5, uVar6);
    }

    // 0x100620830, 736 bytes, placed by class name
    // OldCamera::UpdatePosition(unsigned long long, float, HeightMap const*, LinkMap const*, math::QuaternionT<double> const&, int, int)
    void OldCamera::UpdatePosition(ulonglong param_1, float param_2, HeightMap* param_3, LinkMap* param_4,
                                   QuaternionT* param_5, int param_6, int param_7) {
        double dVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        shared_ptr<IPositionManager>* psVar7;
        long* plVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        PositionSpline* this;
        undefined8 uVar10;
        undefined8 uVar11;
        conversion* this_00;
        double* pdVar12;
        CommandLine* this_01;
        PositionEntity* this_02;
        undefined4 in_register_00000084;
        QuaternionT* pQVar13;
        float extraout_XMM0_Da;
        int in_stack_00000008;
        undefined1 local_80[24];
        undefined** local_68;
        NXTRenderer* pNStack_60;
        undefined8 local_58;
        QuaternionT* local_40;
        double local_38;

        local_38 = (double)CONCAT44(local_38._4_4_, param_2);
        if (*(int*)(param_1 + 624) != 3) {
            pQVar13 = (QuaternionT*)CONCAT44(in_register_00000084, param_6);
            psVar7 = (shared_ptr<IPositionManager>*)(**(code**)(*(long*)param_1 + 200))(param_1);
            iVar3 = (int)pQVar13;
            plVar8 = (long*)shared_ptr<IPositionManager>::operator->(psVar7);
            cVar2 = (**(code**)(*plVar8 + 16))(plVar8);
            if (cVar2 == '\0') {
                local_40 = (QuaternionT*)CONCAT44(in_register_00000084, param_6);
                DoRotationUpdate((OldCamera*)param_1, (ulonglong)param_3);
                new (local_80) oldscape::dash3d::ModelLit::AABB();
                psVar7 = (shared_ptr<IPositionManager>*)(**(code**)(*(long*)param_1 + 200))(param_1);
                plVar8 = (long*)shared_ptr<IPositionManager>::operator->(psVar7);
                param_1->GetAngularPositionInterpolant();
                cVar2 = (**(code**)(*plVar8 + 72))(plVar8, local_80);
                if (cVar2 != '\0') {
                    if (*(int*)(param_1 + 624) == 2) {
                        local_80._0_8_->DeceleratingMovementUpdateWorldSpace(
                            extraout_XMM0_Da, local_80._8_8_, (Vector3T*)(ulong) * (uint*)(param_1 + 632),
                            *(int*)(param_1 + 640), iVar3);
                    } else {
                        param_1->UpdatePosition((ulonglong)param_3, local_38._0_4_, param_4, param_5, local_40, param_7,
                                                in_stack_00000008);
                        if ((*(int*)(param_1 + 624) == 5) && (cVar2 = param_1->DoingTimedMove(), cVar2 == '\0')) {
                            *(undefined4*)(param_1 + 624) = 1;
                        }
                    }
                }
                if (5 < *(uint*)(param_1 + 624)) {
                    return;
                }
                if ((50U >> (*(uint*)(param_1 + 624) & 31) & 1) == 0) {
                    return;
                }
                iVar3 = eastl::min<graphics::GraphicsQuality>(100, param_7 + -334);
                iVar4 = eastl::max<int>(0, iVar3);
                iVar3 = *(int*)(param_1 + 800);
                iVar6 = *(int*)(param_1 + 804);
                psVar7 = (shared_ptr<IPositionManager>*)(**(code**)(*(long*)param_1 + 200))(param_1);
                this_00 = (conversion*)shared_ptr<IPositionManager>::operator->(psVar7);
                dVar1 = (double)(**(code**)(*(long*)this_00 + 136))();
                iVar5 = this_00->RadiansToOldJagexAngle((float)dVar1);
                iVar6 = (iVar5 * 3 + 600) * (((iVar6 - iVar3) * iVar4) / 100 + iVar3);
                iVar3 = iVar6 + 255;
                if (-1 < iVar6) {
                    iVar3 = iVar6;
                }
                local_58 = *(undefined8*)(param_1 + 760);
                local_68 = *(undefined***)(param_1 + 744);
                pNStack_60 = *(NXTRenderer**)(param_1 + 752);
                local_38 = (double)(iVar3 >> 8);
                pdVar12 = (double*)local_68.GetScreen();
                *pdVar12 = local_38;
                psVar7 = (shared_ptr<IPositionManager>*)(**(code**)(*(long*)param_1 + 200))(param_1);
                this_01 = (CommandLine*)shared_ptr<IPositionManager>::operator->(psVar7);
                iVar3 = this_01->GetPos();
                if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "camera/OldCamera.cpp",
                              181, (char*)0);
                }
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(
                    code**)(*(long*)param_1 + 200))(param_1);
                this_02 = (PositionEntity*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar9);
                this_02->SetPositionOffset((Vector3T*)&local_68);
                return;
            }
        }
        pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(code**)(*(long*)param_1 + 200))(
            param_1);
        this = (PositionSpline*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar9);
        psVar7 = (shared_ptr<IPositionManager>*)(**(code**)(*(long*)param_1 + 200))(param_1);
        plVar8 = (long*)shared_ptr<IPositionManager>::operator->(psVar7);
        uVar10 = param_1->GetLinearPositionMaxSpeed();
        uVar11 = param_1->GetServerPosition();
        (**(code**)(*plVar8 + 24))(local_38._0_4_, plVar8, uVar10, uVar11);
        cVar2 = Finished();
        if (cVar2 != '\0') {
            *(undefined1*)(param_1 + 680) = 1;
        }
    }

    // 0x100620b20, 528 bytes, placed by class name
    // OldCamera::DoRotationUpdate(unsigned long long)
    void OldCamera::DoRotationUpdate(ulonglong param_1) {
        char cVar1;
        shared_ptr<IPositionManager>* this_00;
        CommandLine* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        PositionEntity* this_03;
        QuaternionT* pQVar3;
        double dVar4;
        undefined1 local_68[24];
        QuaternionT<double> local_50[32];

        if (((m_cameraMode == 4) || (m_cameraMode == 1)) && (cVar1 = ManagersReady(), cVar1 != '\0')) {
            this_00 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
            this_01 = (CommandLine*)shared_ptr<IPositionManager>::operator->(this_00);
            if (this_01->GetPos() != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          551, (char*)0);
            }
            this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[25])(this);
            this_03 =
                (PositionEntity*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            math::QuaternionT<double>::QuaternionT(local_50);
            if (field_696 == 0.0) {
                if (field_705 != '\0') {
                    field_705 = '\0';
                    if (field_688 == 0.0) {
                        if (field_704 == '\0') {
                            return;
                        }
                    } else {
                        this_03->GetOrientationOffset(local_50);
                        math::operator*((math*)local_68, (Vector3T*)PTR_RIGHT_100ee66c8, (QuaternionT*)local_50);
                        local_50->FromAxisAngle(local_68, field_688 * 0.0016666666666666668);
                        pQVar3 = (QuaternionT*)local_50->Normalise();
                        this_03->UpdateOrientationOffset(pQVar3, param_1);
                        if (field_704 == '\0') {
                            dVar4 = field_688 * 0.5;
                            field_688 = dVar4;
                            if (1.0 <= ABS(dVar4)) {
                                return;
                            }
                            field_688 = 0.0;
                            return;
                        }
                    }
                    field_704 = '\0';
                }
            } else {
                local_50->FromAxisAngle(PTR_UP_100ee66b0, field_696 * 0.0016666666666666668);
                pQVar3 = (QuaternionT*)local_50->Normalise();
                this_03->UpdateOrientationOffset(pQVar3, param_1);
                if (field_705 == '\0') {
                    dVar4 = field_696 * 0.5;
                    field_696 = dVar4;
                    if (ABS(dVar4) < 1.0) {
                        field_696 = 0.0;
                    }
                } else {
                    field_705 = '\0';
                }
            }
        }
    }

    // 0x100620d50, 528 bytes, placed by class name
    // OldCamera::MoveTo(int, int, int, int, int, bool, math::Vector3T<double> const&)
    void OldCamera::MoveTo(int param_1, int param_2, int param_3, int param_4, int param_5, bool param_6,
                           Vector3T* param_7) {
        char cVar1;
        int iVar3;
        undefined8 uVar4;
        shared_ptr* psVar5;
        shared_ptr<IPositionManager>* this_00;
        CommandLine* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        PositionPoint* this_03;
        Vector3T<double> local_78[24];
        ColourHSL local_60;
        Vector3T<double>* local_50[3];
        int local_34;

        cVar1 = ManagersReady();
        if (cVar1 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/OldCamera.cpp",
                                196, "%s - managers not ready!", "MoveTo");
        } else {
            if (m_cameraMode == 1) {
                local_34 = param_2;
                if (field_648->operator_cast_to_bool()) {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/camera/OldCamera.cpp",
                                        206,
                                        "Camera.moveTo - Overwriting currently stored player position manager, this "
                                        "may be problematic");
                }
                psVar5 = (shared_ptr*)(*(code*)field_0[25])(this);
                shared_ptr<IPositionManager>::operator=((shared_ptr<IPositionManager>*)field_648, psVar5);
                param_2 = local_34;
            }
            iVar3 = GetMinGridZ();
            if (iVar3 != 0) {
                SetPositionMode(0, param_6);
            }
            local_34 = param_5;
            this_00 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
            this_01 = (CommandLine*)shared_ptr<IPositionManager>::operator->(this_00);
            iVar3 = this_01->GetPos();
            if (iVar3 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetPositionManager()->GetMode() == PositionMode::POINT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          218, (char*)0);
            }
            this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[25])(this);
            this_03 =
                (PositionPoint*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            new (&local_60) math::ColourHSL((float)param_1, (float)param_3, (float)param_2);
            new (local_50) CoordFine(0, (Vector3T*)&local_60);
            this_03->SetDestination(local_50);
            new (local_50) oldscape::dash3d::ModelLit::AABB();
            cVar1 = (*(code*)this_03->field_0[9])(9221120237041090560, this_03, (AABB*)local_50);
            iVar3 = local_34;
            if (cVar1 != '\0') {
                if ((param_6) && (99 < local_34)) {
                    param_7 = (Vector3T*)local_78;
                    math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)param_7, (Vector3T*)&local_60);
                }
                iVar3 = local_34;
                math::Vector3T<double>::operator=(local_50[0], param_7);
            }
            field_632 = param_4;
            field_640 = iVar3;
            m_cameraMode = 2;
        }
    }

    // 0x100620fb0, 512 bytes, placed by class name
    // OldCamera::LookAt(int, int, int, int, int, bool, math::Vector3T<double> const&)
    void OldCamera::LookAt(int param_1, int param_2, int param_3, int param_4, int param_5, bool param_6,
                           Vector3T* param_7) {
        undefined1* this_00;
        char cVar1;
        int iVar3;
        undefined8 uVar4;
        shared_ptr* psVar5;
        shared_ptr<ILookatManager>* this_01;
        CommandLine* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        LookatPoint* this_04;
        int iVar6;
        Vector3T<double> local_88[24];
        Vector3T<double>* local_70[4];
        ColourHSL local_50;
        OldCamera* local_40;

        cVar1 = ManagersReady();
        if (cVar1 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/OldCamera.cpp",
                                268, "%s - managers not ready!", "LookAt");
        } else {
            local_40 = this;
            if (m_cameraMode == 1) {
                this_00 = field_664;
                if (this_00->operator_cast_to_bool()) {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(
                        uVar4, 0, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "OldCamera.cpp",
                        277,
                        "Camera.lookAt - Overwriting currently stored player lookAt manager, this may be problematic");
                }
                this = local_40;
                psVar5 = (shared_ptr*)(*(code*)local_40->field_0[24])(local_40);
                shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)this_00, psVar5);
            }
            iVar3 = SampleRate();
            if (iVar3 != 0) {
                SetLookatMode(0, param_6);
            }
            this_01 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
            this_02 = (CommandLine*)shared_ptr<ILookatManager>::operator->(this_01);
            iVar3 = this_02->GetPos();
            if (iVar3 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetLookatManager()->GetMode() == LookatMode::POINT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          288, (char*)0);
            }
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[24])(this);
            this_04 =
                (LookatPoint*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
            new (&local_50) math::ColourHSL((float)param_1, (float)param_3, (float)param_2);
            new (local_70) CoordFine(0, (Vector3T*)&local_50);
            this_04->SetLookat(local_70);
            new (local_70) eastl::DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                                render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                                render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>();
            cVar1 = (*(code*)this_04->field_0[5])(this_04, (CoordFine*)local_70);
            iVar3 = param_4;
            iVar6 = param_5;
            if (cVar1 != '\0') {
                if (99 < param_5) {
                    param_7 = (Vector3T*)local_88;
                    math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)param_7, (Vector3T*)&local_50);
                }
                iVar6 = param_5;
                math::Vector3T<double>::operator=(local_70[0], param_7);
            }
            *(int*)&local_40->field_628 = iVar3;
            *(int*)&local_40->field_636 = iVar6;
            local_40->m_cameraMode = 2;
        }
    }

    // 0x100621200, 384 bytes, placed by class name
    // OldCamera::SmoothReset(shared_ptr<Entity> const&, unsigned long long)
    void OldCamera::SmoothReset(shared_ptr* param_1, ulonglong param_2) {
        undefined1* puVar1;
        undefined1* puVar2;
        shared_ptr<IPositionManager>* psVar4;
        long* plVar5;
        shared_ptr<ILookatManager>* psVar6;
        undefined8 uVar7;
        Vector3T<double>* local_68[3];
        Vector3T<double>* local_50;
        Vector3T<double>* local_48;

        if (ManagersReady() == '\0') {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/OldCamera.cpp",
                                332, "%s - managers not ready!", "SmoothReset");
        } else {
            psVar4 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
            plVar5 = (long*)shared_ptr<IPositionManager>::operator->(psVar4);
            puVar1 = field_848;
            (**(code**)(*plVar5 + 80))(plVar5, puVar1, param_2);
            psVar6 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
            plVar5 = (long*)shared_ptr<ILookatManager>::operator->(psVar6);
            puVar2 = field_872;
            (**(code**)(*plVar5 + 56))(plVar5, puVar2);
            TimedMovement(puVar1, puVar2, param_2, -1);
            (*(code*)field_0[39])(this, param_1, 1);
            new (local_68) oldscape::dash3d::ModelLit::AABB();
            new (&local_50) eastl::DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                                 render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                                 render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>();
            psVar4 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
            plVar5 = (long*)shared_ptr<IPositionManager>::operator->(psVar4);
            (**(code**)(*plVar5 + 72))(9221120237041090560, plVar5, (AABB*)local_68);
            psVar6 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
            plVar5 = (long*)shared_ptr<ILookatManager>::operator->(psVar6);
            (**(code**)(*plVar5 + 40))(
                plVar5, (DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                       render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                       render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>*)&local_50);
            math::Vector3T<double>::operator=(local_68[0], (Vector3T*)puVar1);
            math::Vector3T<double>::operator=(local_50, (Vector3T*)puVar2);
            math::Vector3T<double>::operator=(local_48, (Vector3T*)puVar2);
            m_cameraMode = 5;
        }
    }

    // 0x100621380, 480 bytes, placed by class name
    // OldCamera::SetGradientParametricSplines(BSplineCubic const&, float, float, BSplineCubic const&, float, float)
    void OldCamera::SetGradientParametricSplines(BSplineCubic* param_1, float param_2, float param_3,
                                                 BSplineCubic* param_4, float param_5, float param_6) {
        int iVar2;
        undefined8 uVar3;
        shared_ptr<IPositionManager>* this_00;
        CommandLine* pCVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        NXTPixToolkit* this_01;
        SplineMovement* pSVar6;
        shared_ptr<ILookatManager>* this_02;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_03;

        if (ManagersReady() == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/OldCamera.cpp",
                                371, "%s - managers not ready!", "SetGradientParametricSplines");
        }
        m_cameraMode = 3;
        SetPositionMode(4, 1);
        SetLookatMode(6, 1);
        this_00 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
        pCVar4 = (CommandLine*)shared_ptr<IPositionManager>::operator->(this_00);
        iVar2 = pCVar4->GetPos();
        if (iVar2 != 4) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetPositionManager()->GetMode() == PositionMode::SPLINE_GRADIENTSPEEDPARAMETRICPROFILE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      379, (char*)0);
        }
        pvVar5 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[25])(this);
        this_01 = (NXTPixToolkit*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
        pSVar6 = (SplineMovement*)this_01->GetScreen();
        pSVar6->AddSpline(param_1, -1, 0.0);
        pSVar6 = (SplineMovement*)this_01->GetScreen();
        pSVar6->SetSpeedParameters((double)param_2, (double)param_3);
        this_02 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
        pCVar4 = (CommandLine*)shared_ptr<ILookatManager>::operator->(this_02);
        iVar2 = pCVar4->GetPos();
        if (iVar2 != 6) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetLookatManager()->GetMode() == LookatMode::SPLINE_GRADIENTSPEEDPARAMETRICPROFILE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      384, (char*)0);
        }
        pvVar5 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[24])(this);
        this_03 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
        pSVar6 = (SplineMovement*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                                   eastl::allocator>::get_overflow_allocator(this_03);
        pSVar6->AddSpline(param_4, -1, 0.0);
        pSVar6 = (SplineMovement*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                                   eastl::allocator>::get_overflow_allocator(this_03);
        pSVar6->SetSpeedParameters((double)param_5, (double)param_6);
    }

    // 0x100621630, 192 bytes, placed by class name
    // OldCamera::Shake(camera::ShakeMode, int, int, int, int)
    void OldCamera::Shake(undefined4 param_2, int param_3, int param_4, int param_5, int param_6) {
        shared_ptr local_50;
        shared_ptr local_40;
        undefined4 local_2c;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_28 = (float)param_3;
        local_24 = (float)param_4;
        local_20 = (float)param_5;
        local_1c = (float)param_6;
        local_2c = param_2;
        make_shared<camera::OldShake, camera::ShakeMode&, float, float, float, float>(
            (jag*)&local_50, (ShakeMode*)&local_2c, &local_28, &local_24, &local_20, &local_1c);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_40, &local_50);
        AddEffect(&local_40);
        local_40.~shared_ptr();
        local_50.~shared_ptr();
    }

    // 0x1006217b0, 16 bytes, placed by class name
    // OldCamera::StopShake()
    void OldCamera::StopShake() {
        RemoveAllEffects();
    }

    // 0x1006217c0, 208 bytes, placed by class name
    // OldCamera::AlterRotationSpeed(bool, bool)
    void OldCamera::AlterRotationSpeed(bool param_1, bool param_2) {
        double dVar2;

        if ((IsClientControlled() != '\0') && ((m_cameraMode == 4 || (m_cameraMode == 1)))) {
            if (param_1) {
                if (field_704 == '\0') {
                    if (param_2) {
                        dVar2 = 6.0;
                    } else {
                        dVar2 = -6.0;
                    }
                    field_688 = field_688 * 0.5 + dVar2;
                    field_704 = '\x01';
                }
            } else if (field_705 == '\0') {
                if (param_2) {
                    dVar2 = 12.0;
                } else {
                    dVar2 = -12.0;
                }
                field_696 = field_696 * 0.5 + dVar2;
                field_705 = '\x01';
            }
        }
    }

    // 0x100621890, 1056 bytes, placed by class name
    // OldCamera::TrackPlayer(shared_ptr<Entity> const&, bool)
    /* WARNING: Removing unreachable block (ram,4301396284) */
    /* WARNING: Removing unreachable block (ram,4301396674) */
    /* OldCamera::TrackPlayer(shared_ptr<Entity> const&, bool) */

    void OldCamera::TrackPlayer(shared_ptr* param_1, bool param_2) {
        bool bVar1;
        bool bVar2;
        int iVar3;
        shared_ptr<ILookatManager>* psVar4;
        LookatEntity* this_00;
        shared_ptr* psVar5;
        shared_ptr<IPositionManager>* psVar6;
        long* plVar7;
        CommandLine* pCVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        PositionEntity* pPVar10;
        undefined7 in_register_00000011;
        Vector3T local_a0[24];
        AABB local_88;
        shared_ptr local_70;
        shared_ptr local_60;
        AABB local_50;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
        LAB_1006218da:
            iVar3 = SampleRate();
            bVar1 = true;
            if (iVar3 == 1) {
                psVar5 = (shared_ptr*)(*(code*)field_0[24])(this);
                bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
                if (bVar2) {
                    psVar4 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
                    plVar7 = (long*)shared_ptr<ILookatManager>::operator->(psVar4);
                    (**(code**)(*plVar7 + 16))(&local_70, plVar7);
                    bVar1 = operator!=(&local_70, param_1);
                    local_70.~shared_ptr();
                }
            }
            if (bVar1 != false) {
                new (&local_50) oldscape::dash3d::ModelLit::AABB();
                psVar5 = (shared_ptr*)(*(code*)field_0[24])(this);
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if ((bVar1) && (iVar3 = SampleRate(), iVar3 == 1)) {
                    psVar4 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
                    plVar7 = (long*)shared_ptr<ILookatManager>::operator->(psVar4);
                    (**(code**)(*plVar7 + 48))(plVar7, &local_50);
                } else {
                    SetLookatMode(1, 0);
                    math::Vector3T<double>::operator=((Vector3T<double>*)&local_50, (Vector3T*)&field_720);
                }
                psVar4 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
                pCVar8 = (CommandLine*)shared_ptr<ILookatManager>::operator->(psVar4);
                iVar3 = pCVar8->GetPos();
                if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("GetLookatManager()->GetMode() == LookatMode::ENTITY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "camera/OldCamera.cpp",
                              460, (char*)0);
                }
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[24])(this);
                this_00 =
                    (LookatEntity*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar9);
                this_00->SetLookatEntity(param_1, (Vector3T*)&local_50, false);
            }
        } else {
            bVar1 = field_664->operator_cast_to_bool();
            if (!bVar1)
                goto LAB_1006218da;
            SetLookatManager(field_664);
        }
        if (param_2) {
            bVar1 = field_648->operator_cast_to_bool();
            if (bVar1) {
                SetPositionManager(field_648);
                goto LAB_100621c48;
            }
        }
        iVar3 = GetMinGridZ();
        bVar1 = true;
        if (iVar3 == 1) {
            psVar5 = (shared_ptr*)(*(code*)field_0[25])(this);
            bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
            if (bVar2) {
                psVar6 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
                plVar7 = (long*)shared_ptr<IPositionManager>::operator->(psVar6);
                (**(code**)(*plVar7 + 64))(&local_60, plVar7);
                bVar1 = operator!=(&local_60, param_1);
                local_60.~shared_ptr();
            }
        }
        if (bVar1 != false) {
            new (&local_88) oldscape::dash3d::ModelLit::AABB();
            new (&local_50) math::QuaternionT<double>();
            psVar5 = (shared_ptr*)(*(code*)field_0[25])(this);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if ((bVar1) && (iVar3 = GetMinGridZ(), iVar3 == 1)) {
                psVar6 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
                pCVar8 = (CommandLine*)shared_ptr<IPositionManager>::operator->(psVar6);
                iVar3 = pCVar8->GetPos();
                if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "camera/OldCamera.cpp",
                              486, (char*)0);
                }
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[25])(this);
                pPVar10 = (PositionEntity*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar9);
                (*(code*)pPVar10->field_0[7])(local_a0, pPVar10);
                math::Vector3T<double>::operator=((Vector3T<double>*)&local_88, local_a0);
                pPVar10->GetOrientationOffset((QuaternionT*)&local_50);
            } else {
                SetPositionMode(1, 0);
                math::Vector3T<double>::operator=((Vector3T<double>*)&local_88, (Vector3T*)&field_744);
                math::QuaternionT<double>::operator=((QuaternionT<double>*)&local_50, (QuaternionT*)&field_768);
            }
            psVar6 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
            pCVar8 = (CommandLine*)shared_ptr<IPositionManager>::operator->(psVar6);
            iVar3 = pCVar8->GetPos();
            if (iVar3 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          492, (char*)0);
            }
            pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[25])(this);
            pPVar10 =
                (PositionEntity*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar9);
            pPVar10->SetPositionEntity(param_1, (Vector3T*)&local_88, (QuaternionT*)&local_50, false, 200, 100);
        }
    LAB_100621c48:
        shared_ptr<IPositionManager>::reset();
        shared_ptr<ILookatManager>::reset();
        shared_ptr<Entity>::reset();
        m_cameraMode = 1;
    }

    // 0x100621d80, 256 bytes, placed by class name
    // OldCamera::TrackEntity(shared_ptr<Entity> const&, unsigned long long)
    void OldCamera::TrackEntity(shared_ptr* param_1, ulonglong param_2) {
        shared_ptr<IPositionManager>* this_00;
        long* plVar2;
        shared_ptr<ILookatManager>* this_01;
        undefined8 uVar3;

        if (ManagersReady() == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/OldCamera.cpp",
                                525, "%s - managers not ready!", "TrackEntity");
        } else {
            this_00 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
            plVar2 = (long*)shared_ptr<IPositionManager>::operator->(this_00);
            (**(code**)(*plVar2 + 80))(plVar2, field_848, param_2);
            this_01 = (shared_ptr<ILookatManager>*)(*(code*)field_0[24])(this);
            plVar2 = (long*)shared_ptr<ILookatManager>::operator->(this_01);
            (**(code**)(*plVar2 + 56))(plVar2, field_872);
            TimedMovement((Vector3T*)field_848, (Vector3T*)field_872, param_2, -1);
            (*(code*)field_0[39])(this, param_1, 0);
            shared_ptr<Entity>::operator=((shared_ptr<Entity>*)&field_896, param_1);
            m_cameraMode = 4;
        }
    }

    // 0x100621ed0, 96 bytes, placed by class name
    // OldCamera::SetFOVClamping(float, float, float, float)
    void OldCamera::SetFOVClamping(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        float fVar3;

        fVar1 = -1.0;
        fVar2 = -1.0;
        fVar3 = -1.0;
        if (param_1 != 0.0) {
            fVar1 = param_3;
            fVar2 = param_2;
            fVar3 = param_4;
        }
        field_824 = (float)(~-(uint)(param_1 == 0.0) & (uint)param_1 | -(uint)(param_1 == 0.0) & 3212836864);
        field_828 = fVar2;
        field_832 = fVar1;
        field_836 = fVar3;
    }

    // 0x100621f30, 496 bytes, placed by class name
    // OldCamera::UpdateFOV(int, int)
    void OldCamera::UpdateFOV(int param_1, int param_2) {
        undefined1* this_00;
        float fVar1;
        int iVar2;
        undefined4 uVar3;
        vector* pvVar4;
        int* piVar5;
        undefined4* puVar6;
        int iVar7;
        undefined4 in_register_00000034;
        type* ptVar8;
        float fVar10;
        float fVar11;
        float fVar12;

        iVar2 = 334;
        if (334 < param_1) {
            iVar2 = param_1;
        }
        iVar7 = 434;
        if (iVar2 < 434) {
            iVar7 = iVar2;
        }
        fVar12 = (float)(iVar7 + -334) * 0.01 * (m_verticalFOVBig - m_verticalFOV) + m_verticalFOV;
        fVar11 = (float)param_2;
        field_816 = fVar12;
        field_820 = (fVar12 * fVar11) / (float)param_1;
        this_00 = &field_840;
        pvVar4 = this_00->SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        *(int*)pvVar4 = param_2;
        piVar5 = (int*)this_00->y();
        *piVar5 = param_1;
        if (field_824 != -1.0) {
            fVar12 = field_832;
            if (field_820 < fVar12) {
                field_820 = fVar12;
                fVar10 = (fVar12 * (float)param_1) / fVar11;
                field_816 = fVar10;
                fVar1 = field_828;
                fVar10 = (float)::abs(fVar10 - fVar1);
                if (2.0 < fVar10) {
                    field_816 = fVar1;
                    uVar3 =
                        eastl::min<graphics::GraphicsQuality>(param_1, (int)((fVar1 * fVar11) / fVar12) & 4294967294);
                    puVar6 = (undefined4*)this_00->y();
                    *puVar6 = uVar3;
                }
            }
            fVar12 = field_836;
            if (fVar12 < field_820) {
                field_820 = fVar12;
                fVar11 = ((float)param_1 * fVar12) / fVar11;
                field_816 = fVar11;
                fVar1 = field_824;
                fVar11 = (float)::abs(fVar11 - fVar1);
                if (2.0 < fVar11) {
                    field_816 = fVar1;
                    ptVar8 = (type*)(ulong)((int)(((float)param_1 * fVar12) / fVar1) & 4294967294);
                    uVar3 = eastl::min<graphics::GraphicsQuality>(param_2);
                    pvVar4 = this_00->SSOBeginPtr(ptVar8);
                    *(undefined4*)pvVar4 = uVar3;
                }
            }
        }
    }

    // 0x100622130, 32 bytes, placed by class name
    // OldCamera::ResetRotation()
    void OldCamera::ResetRotation() {
        field_688 = 0.0;
        field_696 = 0.0;
        field_704 = '\0';
        field_705 = '\x01';
    }

} // namespace jag::game

// 0x100622120, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
