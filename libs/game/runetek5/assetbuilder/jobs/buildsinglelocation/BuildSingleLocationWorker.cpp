// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildSingleLocationWorker.h"

namespace jag::game {
    // 0x100269ba0: BuildSingleLocationWorker::GetWorkerJobType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetClanName::GetID() const

    // 0x100625800
    BuildSingleLocationWorker::BuildSingleLocationWorker() : AssetWorker() {}

    // 0x100625880
    uint8_t* BuildSingleLocationWorker::Service(int arg1) {
        unsigned int uVar1;
        ModelCopyType* modelCopyType;
        RenderContext* renderContext;
        Location* this_03;
        fixed_vector<shared_ptr<graphics::TextureAtlasReference>, _1ul>* textureAtlasReferences;
        uint8_t uVar7;
        uint64_t in_stack_ffffffffffffff40;
        int in_stack_ffffffffffffff48;
        uint32_t local_a8[18];
        shared_ptr<oldscape::ClientNpc> local_60;
        shared_ptr<graphics::Model> local_50;
        lock_guard<render::RenderContext> local_40;

        uint32_t uVar8 = (uint32_t)((unsigned long)in_stack_ffffffffffffff40 >> 32);
        bool cVar3 = field_8->operator_cast_to_bool();
        if (!cVar3) {
        LAB_100625978:
            field_24.reset();
            return DataStatus::READY;
        }
        long lVar4 = field_8->end();
        shared_ptr* this_00 = (shared_ptr*)(lVar4 + 32);
        cVar3 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar3)
            goto LAB_100625978;
        modelCopyType = (ModelCopyType*)**this_00;
        local_a8[0] = 1;
        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(&local_50,
                                                                                                     modelCopyType);
        new (local_a8) math::Matrix44T<float>();
        Model* pMVar6 = (Model*)(lVar4 + 56);
        Model* pMVar5 = pMVar6;
        cVar3 = pMVar6->empty();
        if (!cVar3) {
        LAB_10062591c:
            if (*(int*)(lVar4 + 112) != 0) {
                if (*(int*)(lVar4 + 112) == 3) {
                    uVar1 = *(unsigned int*)(lVar4 + 116);
                    uVar7 = 1;
                    pMVar5 = (Model*)local_a8;
                    pMVar5->CalculateHillRotateMatrix(
                        *((Matrix44T<float>*)(unsigned long)((uVar1 & 255) << 2)), uVar1 >> 6 & 1020,
                        uVar1 >> 14 & 1020, uVar1 >> 22 & 4294967292, (unsigned int)*(uint8_t*)(lVar4 + 48),
                        (Rotation90)pMVar6,
                        *((Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)uVar8 << 32) |
                                                                                           (uint32_t)(*(
                                                                                               uint32_t*)(lVar4 +
                                                                                                          52)))),
                        in_stack_ffffffffffffff48);
                    goto LAB_1006259f4;
                }
                pMVar5 = (Model*)local_50.operator->();
                pMVar5->StartTransform();
                pMVar5 = (Model*)local_50.operator->();
                pMVar5->HillChange(*(uint32_t*)(lVar4 + 112), *(uint32_t*)(lVar4 + 116), *(uint32_t*)(lVar4 + 104),
                                   *(uint32_t*)(lVar4 + 108), *(uint8_t*)(lVar4 + 48), *pMVar6, *(lVar4 + 80),
                                   *(uint32_t*)(lVar4 + 52));
                pMVar5 = (Model*)local_50.operator->();
                pMVar5->EndTransform(true);
            }
        } else {
            pMVar5 = (Model*)(lVar4 + 80);
            cVar3 = pMVar5->empty();
            if (!cVar3)
                goto LAB_10062591c;
        }
        uVar7 = 0;
    LAB_1006259f4:
        auto this_01 = pMVar5->Instance();
        lVar4 = this_01->GetOrigin();
        if (*(char*)(lVar4 + 227) != '\0') {
            renderContext = ((RenderDevice*)this_01->Instance())->GetCurrentThreadRenderContext();
            local_40 = lock_guard<render::RenderContext>(*renderContext);
            pMVar6 = (Model*)local_50.operator->();
            this_03 = (Location*)(*this_00).operator->();
            textureAtlasReferences =
                (fixed_vector<shared_ptr<graphics::TextureAtlasReference>, _1ul>*)this_03->GetServerPosition();
            pMVar6->SetTextureAtlasReferences(*textureAtlasReferences);
            pMVar6 = (Model*)local_50.operator->();
            pMVar6->ConstructFinishAndUpload();
        }
        MakeSharedPool<BuildSingleLocationResultData, 160>::MakeShared<>();
        auto this_04 = local_40.operator->();
        *this_04 = local_50;
        lVar4 = local_40.operator->();
        (*((lVar4 + 32))) = *local_a8;
        lVar4 = local_40.operator->();
        *(uint8_t*)(lVar4 + 16) = uVar7;
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_60);
        field_24 = local_60;
        uint8_t* puVar2 = DataStatus::READY;
        return puVar2;
    }

} // namespace jag::game
