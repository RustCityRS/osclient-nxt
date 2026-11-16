// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildSingleLocationWorker.h"

namespace jag::game {
    // 0x100269ba0: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetClanName::GetID() const, which has identical code
    BuildSingleLocationWorker::GetWorkerJobType() const;

    // 0x100625800, 32 bytes, base-object constructor, placed by class name and debug map
    // BuildSingleLocationWorker::BuildSingleLocationWorker()
    void BuildSingleLocationWorker::BuildSingleLocationWorker() {
        new (this) AssetWorker();
        field_0 = &PTR__BuildFunctionWorker_100f0ca30;
    }

    // 0x100625870, 16 bytes, complete-object constructor, placed by class name
    // BuildSingleLocationWorker::BuildSingleLocationWorker(): jumps straight to the base-object constructor

    // 0x100625880, 736 bytes, placed by class name
    // BuildSingleLocationWorker::Service(int)
    undefined* BuildSingleLocationWorker::Service(int param_1) {
        shared_ptr* this_00;
        uint uVar1;
        undefined* puVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        MakeSharedPool<graphics::Model, 3072>* this_01;
        Model* pMVar6;
        MapArea* this_02;
        RenderDevice* this_03;
        RenderContext* pRVar7;
        Model* pMVar8;
        Location* this_04;
        shared_ptr<graphics::Model>* this_05;
        ModelCopyType* in_RCX;
        undefined1 uVar9;
        undefined1 auVar10[16];
        undefined8 in_stack_ffffffffffffff40;
        undefined4 uVar11;
        Matrix44T local_a8;
        shared_ptr local_60;
        shared_ptr local_50;
        shared_ptr local_40;

        uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff40 >> 32);
        bVar3 = field_8->operator_cast_to_bool();
        if (!bVar3) {
        LAB_100625978:
            shared_ptr<void>::reset();
            return DataStatus::READY;
        }
        lVar5 = field_8->end();
        this_00 = (shared_ptr*)(lVar5 + 32);
        bVar3 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar3)
            goto LAB_100625978;
        this_01 = (MakeSharedPool<graphics::Model, 3072>*)shared_ptr<graphics::Model>::operator*(
            (shared_ptr<graphics::Model>*)this_00);
        local_a8._0_4_ = 1;
        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
            &local_50, this_01, (Model*)&local_a8, in_RCX);
        new (&local_a8) math::Matrix44T<float>();
        pMVar8 = (Model*)(lVar5 + 56);
        pMVar6 = pMVar8;
        cVar4 = pMVar8->empty();
        if (cVar4 == '\0') {
        LAB_10062591c:
            if (*(int*)(lVar5 + 112) != 0) {
                if (*(int*)(lVar5 + 112) == 3) {
                    uVar1 = *(uint*)(lVar5 + 116);
                    this_01 = (MakeSharedPool<graphics::Model, 3072>*)(ulong)((uVar1 & 255) << 2);
                    uVar9 = 1;
                    pMVar6 = (Model*)&local_a8;
                    graphics::LocationHelpers::CalculateHillRotateMatrix(
                        pMVar6, this_01, uVar1 >> 6 & 1020, uVar1 >> 14 & 1020, uVar1 >> 22 & 4294967292,
                        *(undefined1*)(lVar5 + 48), pMVar8, CONCAT44(uVar11, *(undefined4*)(lVar5 + 52)));
                    goto LAB_1006259f4;
                }
                pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_50);
                pMVar6->StartTransform();
                pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_50);
                pMVar6->HillChange(*(undefined4*)(lVar5 + 112), *(undefined4*)(lVar5 + 116),
                                   *(undefined4*)(lVar5 + 104), *(undefined4*)(lVar5 + 108), *(undefined1*)(lVar5 + 48),
                                   pMVar8, lVar5 + 80, *(undefined4*)(lVar5 + 52));
                pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_50);
                this_01 = (MakeSharedPool<graphics::Model, 3072>*)&DAT_00000001;
                pMVar6->EndTransform(true);
            }
        } else {
            pMVar6 = (Model*)(lVar5 + 80);
            cVar4 = pMVar6->empty();
            if (cVar4 == '\0')
                goto LAB_10062591c;
        }
        uVar9 = 0;
    LAB_1006259f4:
        this_02 = (MapArea*)pMVar6->Instance();
        lVar5 = this_02->GetOrigin();
        if (*(char*)(lVar5 + 227) != '\0') {
            this_03 = (RenderDevice*)this_02->Instance();
            pRVar7 = (RenderContext*)this_03->GetCurrentThreadRenderContext();
            new (&local_40) lock_guard<render::RenderContext>(pRVar7);
            pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_50);
            this_04 = (Location*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
            this_01 = (MakeSharedPool<graphics::Model, 3072>*)this_04->GetServerPosition();
            pMVar8->SetTextureAtlasReferences(this_01);
            pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_50);
            pMVar8->ConstructFinishAndUpload();
            local_40.~lock_guard();
        }
        MakeSharedPool<BuildSingleLocationResultData, 160>::MakeShared<>(
            &local_40, (MakeSharedPool<BuildSingleLocationResultData, 160>*)this_01);
        this_05 = (shared_ptr<graphics::Model>*)shared_ptr<BuildSingleLocationResultData>::operator->(
            (shared_ptr<BuildSingleLocationResultData>*)&local_40);
        shared_ptr<graphics::Model>::operator=(this_05, &local_50);
        lVar5 = shared_ptr<BuildSingleLocationResultData>::operator->(
            (shared_ptr<BuildSingleLocationResultData>*)&local_40);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)(lVar5 + 32), &local_a8);
        auVar10 = shared_ptr<BuildSingleLocationResultData>::operator->(
            (shared_ptr<BuildSingleLocationResultData>*)&local_40);
        *(undefined1*)(auVar10._0_8_ + 16) = uVar9;
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_60, (jag*)&local_40,
                                                                                     auVar10._8_8_);
        shared_ptr<void>::operator=((shared_ptr<void>*)&field_24, &local_60);
        local_60.~shared_ptr();
        puVar2 = DataStatus::READY;
        local_40.~shared_ptr();
        local_50.~shared_ptr();
        return puVar2;
    }

} // namespace jag::game
