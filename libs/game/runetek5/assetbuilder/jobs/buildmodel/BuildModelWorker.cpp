// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildModelWorker.h"

namespace jag::game {
    // 0x1006339a0: BuildModelWorker::~BuildModelWorker() has the same machine code as BuildSingleLocationWorker::~BuildSingleLocationWorker()

    // 0x100643ee0
    BuildModelWorker::BuildModelWorker() : AssetWorker() {}

    // 0x100643f10
    uint8_t* BuildModelWorker::Service(int arg1) {
        uint8_t bVar1;
        unsigned short uVar2;
        bool bVar4;
        int iVar5;
        uint64_t* puVar6;
        Model* pMVar7;
        long lVar8;
        PacketView* packetView;
        unsigned long uVar9;
        float* pfVar10;
        unsigned long uVar11;
        Vector3T<float>* pVVar12;
        vector<unsigned int>* pvVar13;
        vector<int>* pvVar14;
        int* piVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar16;
        uint8_t* pbVar17;
        Array<Array<unsigned short>>* pAVar18;
        Array<unsigned short>* pAVar19;
        unsigned short* puVar20;
        MapArea* this_00;
        RenderDevice* pRVar21;
        RenderContext* pRVar22;
        shared_ptr<graphics::Model>* this_01;
        uint8_t* puVar23;
        shared_ptr* this_02;
        unsigned int uVar24;
        unsigned long uVar25;
        PacketView local_4f8;
        shared_ptr* local_4c8;
        uint64_t* local_4c0;
        Array<unsigned short>* local_4b8;
        Array<VarValue>* local_4b0;
        scoped_lock<std::mutex> local_4a8;
        Array<Array<unsigned short>>* local_4a0;
        Array<Array<unsigned short>>* local_498;
        Array<Array<Array<unsigned short>>>* local_490;
        Array<Array<Array<unsigned short>>>* local_488;
        Vector3T<float>* local_480;
        Array<VarValue>* local_478;
        float local_470;
        float local_46c;
        Vector3T<float> local_468;
        Array<VarValue>* local_458;
        Array<VarValue>* local_450;
        vector<DecodedTerrainTile>* local_448;
        vector<unsigned int>* local_440;
        vector<oldscape::rseven::ModelFace>* local_438;
        vector<oldscape::rseven::ModelFace>* local_430;
        Array<VarValue>* local_428;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_420;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_418;
        Array<VarValue>* local_410;
        vector<oldscape::rseven::ModelFace>* local_408;
        Model* local_400;
        char local_3f1;
        unsigned long local_3f0;
        Model local_3e8;

        if (!(field_8->operator_cast_to_bool())) {
            field_24.reset();
            puVar23 = DataStatus::READY;
        } else {
            puVar6 = (uint64_t*)field_8->end();
            local_4a8 = std::scoped_lock(*((puVar6 + 2)));
            this_02 = (shared_ptr*)(puVar6 + 85);
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                field_24.reset();
                puVar23 = DataStatus::READY;
            } else {
                pMVar7 = (Model*)**this_02;
                pMVar7->StartTransform();
                local_3f1 = *(char*)(puVar6 + 48);
                local_448 = (vector<DecodedTerrainTile>*)(puVar6 + 10);
                local_400 = pMVar7;
                lVar8 = local_448->size();
                if (lVar8 != 0) {
                    local_428 = (Array<VarValue>*)(puVar6 + 49);
                    local_410 = (Array<VarValue>*)(puVar6 + 52);
                    local_4b0 = (Array<VarValue>*)(puVar6 + 55);
                    local_478 = (Array<VarValue>*)(puVar6 + 58);
                    local_4b8 = (Array<unsigned short>*)(puVar6 + 61);
                    local_440 = (vector<unsigned int>*)(puVar6 + 20);
                    local_408 = (vector<oldscape::rseven::ModelFace>*)(puVar6 + 24);
                    local_438 = (vector<oldscape::rseven::ModelFace>*)(puVar6 + 28);
                    local_420 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(puVar6 + 32);
                    local_418 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(puVar6 + 36);
                    local_430 = (vector<oldscape::rseven::ModelFace>*)(puVar6 + 42);
                    local_480 = (Vector3T<float>*)((long)puVar6 + 372);
                    local_458 = (Array<VarValue>*)(puVar6 + 64);
                    local_4a0 = (Array<Array<unsigned short>>*)(puVar6 + 67);
                    local_490 = (Array<Array<Array<unsigned short>>>*)(puVar6 + 70);
                    local_450 = (Array<VarValue>*)(puVar6 + 73);
                    local_498 = (Array<Array<unsigned short>>*)(puVar6 + 76);
                    local_488 = (Array<Array<Array<unsigned short>>>*)(puVar6 + 79);
                    local_3f0 = 0;
                    local_4c8 = this_02;
                    local_4c0 = puVar6;
                    do {
                        local_3e8 = graphics::Model();
                        packetView = (PacketView*)(*local_448)[local_3f0];
                        local_4f8 = PacketView(packetView);
                        local_3e8.LoadDataFromModelRawRT7(&local_4f8);
                        local_3e8.StartTransform();
                        uVar9 = local_440->size();
                        if ((local_3f0 < uVar9) && (pfVar10 = (float*)(*local_440)[local_3f0], *pfVar10 != 1.0)) {
                            pfVar10 = (float*)(*local_440)[local_3f0];
                            local_468 = math::Vector3T(*pfVar10);
                            local_3e8.Scale(local_468);
                        }
                        uVar9 = local_3f0;
                        uVar11 = local_408->size();
                        if (uVar9 < uVar11) {
                            pVVar12 = (Vector3T<float>*)(*local_408)[uVar9];
                            bVar4 = *pVVar12 != *PTR_ZERO_100ee66e8;
                            uVar9 = local_3f0;
                            if (bVar4) {
                                local_468 = math::QuaternionT<float>();
                                pfVar10 = (float*)(*local_408)[local_3f0];
                                local_470 = *pfVar10;
                                lVar8 = (*local_408)[local_3f0];
                                local_46c = *(float*)(lVar8 + 4);
                                lVar8 = (*local_408)[local_3f0];
                                local_468.FromYawPitchRoll(local_470, local_46c, *(float*)(lVar8 + 8));
                                local_3e8.Rotate(local_468, true);
                                uVar9 = local_3f0;
                            }
                        }
                        uVar11 = local_438->size();
                        if (uVar9 < uVar11) {
                            pVVar12 = (Vector3T<float>*)(*local_438)[local_3f0];
                            bVar4 = *pVVar12 != *PTR_ZERO_100ee66e8;
                            if (bVar4) {
                                pVVar12 = (Vector3T<float>*)(*local_438)[local_3f0];
                                local_3e8.Translate(*pVVar12);
                            }
                        }
                        uVar9 = local_420->size();
                        if (local_3f0 < uVar9) {
                            uVar9 = 0;
                            while (true) {
                                pvVar13 = (vector<unsigned int>*)(*local_420)[local_3f0];
                                uVar11 = pvVar13->size();
                                if (uVar11 <= uVar9)
                                    break;
                                pvVar14 = (vector<int>*)(*local_420)[local_3f0];
                                piVar15 = (int*)(*pvVar14)[uVar9];
                                iVar5 = *piVar15;
                                pvVar14 = (vector<int>*)(*local_420)[local_3f0];
                                piVar15 = (int*)(*pvVar14)[uVar9 + 1];
                                if ((iVar5 != -1) && (*piVar15 != -1)) {
                                    local_3e8.RecolourSingle((unsigned short)iVar5, (unsigned short)*piVar15);
                                }
                                uVar9 = uVar9 + 2;
                            }
                        }
                        uVar9 = local_418->size();
                        if (local_3f0 < uVar9) {
                            uVar9 = 0;
                            while (true) {
                                pvVar13 = (vector<unsigned int>*)(*local_418)[local_3f0];
                                uVar11 = pvVar13->size();
                                if (uVar11 <= uVar9)
                                    break;
                                pvVar14 = (vector<int>*)(*local_418)[local_3f0];
                                piVar15 = (int*)(*pvVar14)[uVar9];
                                iVar5 = *piVar15;
                                pvVar14 = (vector<int>*)(*local_418)[local_3f0];
                                piVar15 = (int*)(*pvVar14)[uVar9 + 1];
                                if ((iVar5 != -1) && (*piVar15 != -1)) {
                                    local_3e8.RematerialSingle((unsigned short)iVar5, (unsigned short)*piVar15);
                                }
                                uVar9 = uVar9 + 2;
                            }
                        }
                        if (*(char*)(puVar6 + 46) != '\0') {
                            local_3e8.MirrorZ();
                        }
                        uVar9 = local_430->size();
                        if (local_3f0 < uVar9) {
                            pVVar12 = (Vector3T<float>*)(*local_430)[local_3f0];
                            bVar4 = *pVVar12 != *PTR_ZERO_100ee66e8;
                            if (bVar4) {
                                pVVar12 = (Vector3T<float>*)(*local_430)[local_3f0];
                                local_3e8.Translate(*pVVar12);
                            }
                        }
                        bVar4 = *local_480 != *PTR_ONE_100ee66d8;
                        if (bVar4) {
                            local_3e8.Scale(*local_480);
                        }
                        if (!(local_428->empty())) {
                            if (local_3f1 == '\0') {
                                if (!(local_4b0->empty())) {
                                    LogAssertAlways(
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.cpp",
                                        118,
                                        "BuildModelWorker: We have a recolourDestPalette, but haven\'t implemented "
                                        "that yet!");
                                }
                                if (!(local_410->empty())) {
                                    local_3e8.Recolour(*local_428, *local_410);
                                }
                            } else {
                                if (!(local_410->empty())) {
                                    local_3e8.Recolour(*local_428, *local_410);
                                }
                            }
                        }
                        if (!(local_478->empty())) {
                            local_3e8.Rematerial(*local_478, *local_4b8);
                        }
                        if (!(local_458->empty())) {
                            uVar9 = 0;
                            do {
                                uVar24 = 0;
                                while (true) {
                                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*,
                                                      BucketAllocatorEASTL>*)(*local_4a0)[uVar9];
                                    uVar25 = (unsigned long)uVar24;
                                    uVar11 = pvVar16->end();
                                    if (uVar11 <= uVar25)
                                        break;
                                    pbVar17 = (uint8_t*)(*local_458)[uVar9];
                                    bVar1 = *pbVar17;
                                    pAVar18 = (Array<Array<unsigned short>>*)(*local_490)[uVar9];
                                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*,
                                                      BucketAllocatorEASTL>*)(*pAVar18)[uVar25];
                                    iVar5 = pvVar16->end();
                                    if ((int)(unsigned int)bVar1 < iVar5) {
                                        pAVar19 = (Array<unsigned short>*)(*local_4a0)[uVar9];
                                        puVar20 = (unsigned short*)(*pAVar19)[uVar25];
                                        uVar2 = *puVar20;
                                        pAVar18 = (Array<Array<unsigned short>>*)(*local_490)[uVar9];
                                        pAVar19 = (Array<unsigned short>*)(*pAVar18)[uVar25];
                                        pbVar17 = (uint8_t*)(*local_458)[uVar9];
                                        puVar20 = (unsigned short*)(*pAVar19)[(unsigned long)*pbVar17];
                                        local_3e8.RecolourSingle(uVar2, *puVar20);
                                    }
                                    uVar24 = uVar24 + 1;
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 != 10);
                        }
                        if (!(local_450->empty())) {
                            uVar9 = 0;
                            do {
                                uVar24 = 0;
                                while (true) {
                                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*,
                                                      BucketAllocatorEASTL>*)(*local_498)[uVar9];
                                    uVar25 = (unsigned long)uVar24;
                                    uVar11 = pvVar16->end();
                                    if (uVar11 <= uVar25)
                                        break;
                                    pbVar17 = (uint8_t*)(*local_450)[uVar9];
                                    bVar1 = *pbVar17;
                                    pAVar18 = (Array<Array<unsigned short>>*)(*local_488)[uVar9];
                                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*,
                                                      BucketAllocatorEASTL>*)(*pAVar18)[uVar25];
                                    iVar5 = pvVar16->end();
                                    if ((int)(unsigned int)bVar1 < iVar5) {
                                        pAVar19 = (Array<unsigned short>*)(*local_498)[uVar9];
                                        puVar20 = (unsigned short*)(*pAVar19)[uVar25];
                                        uVar2 = *puVar20;
                                        pAVar18 = (Array<Array<unsigned short>>*)(*local_488)[uVar9];
                                        pAVar19 = (Array<unsigned short>*)(*pAVar18)[uVar25];
                                        pbVar17 = (uint8_t*)(*local_450)[uVar9];
                                        puVar20 = (unsigned short*)(*pAVar19)[(unsigned long)*pbVar17];
                                        local_3e8.RematerialSingle(uVar2, *puVar20);
                                    }
                                    uVar24 = uVar24 + 1;
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 != 10);
                        }
                        puVar6 = local_4c0;
                        this_02 = local_4c8;
                        this = this;
                        if (*(unsigned char*)((long)local_4c0 + 661) != '\0') {
                            local_3e8.TintAdjust(*(schar*)((long)local_4c0 + 658), *(schar*)((long)local_4c0 + 659),
                                                 *(schar*)((long)local_4c0 + 660),
                                                 *(unsigned char*)((long)local_4c0 + 661));
                        }
                        if (*(unsigned short*)(puVar6 + 82) != 0) {
                            local_3e8.AmbientAdjust(*(unsigned short*)(puVar6 + 82));
                        }
                        local_3e8.EndTransform(false);
                        local_3e8.UpdateAABB();
                        local_400->Append(local_3e8);
                        uVar11 = local_3f0 + 1;
                        uVar9 = local_448->size();
                        local_3f0 = uVar11;
                    } while (uVar11 < uVar9);
                }
                if ((graphics::Model::m_DoModelWelding != '\0') && (uVar9 = local_448->size(), 1 < uVar9)) {
                    local_400->WeldTouchingBatches();
                }
                if (1 < *(uint8_t*)(puVar6 + 84)) {
                    local_400->SetShareLightBatches(*(bool*)((long)puVar6 + 663));
                    pMVar7 = local_400;
                    local_400->SetUseUncompressedTextures(*(bool*)(puVar6 + 83));
                    pMVar7->SetupInitialMaterials(*puVar6[1]);
                    if (*(char*)((long)puVar6 + 662) != '\0') {
                        local_400->CombineBatches(*(*puVar6));
                    }
                    local_400->SortSections();
                    local_400->BakeHSLColors(*puVar6[1]);
                }
                local_400->Translate(*((puVar6 + 40)));
                local_400->EndTransform(false);
                local_400->CalculateLabelCentres();
                pMVar7 = local_400;
                local_400->SetExternalID(*(int*)((long)puVar6 + 668), false);
                if (2 < *(uint8_t*)(puVar6 + 84)) {
                    this_00 = (MapArea*)pMVar7->Instance();
                    lVar8 = this_00->GetOrigin();
                    if (*(char*)(lVar8 + 227) != '\0') {
                        pRVar21 = (RenderDevice*)this_00->Instance();
                        pRVar22 = pRVar21->GetCurrentThreadRenderContext();
                        if (pRVar22 == nullptr) {
                            LogAssert("render::RenderDevice::Instance().GetCurrentThreadRenderContext()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.cpp",
                                      207, nullptr);
                        }
                        pRVar21 = (RenderDevice*)pRVar21->Instance();
                        pRVar22 = pRVar21->GetCurrentThreadRenderContext();
                        local_3e8 = lock_guard<render::RenderContext>(*pRVar22);
                        local_400->BakeMaterialInfoAndTextureMetaAndHSLColors(*puVar6[1], *(*puVar6), false);
                        if (3 < *(uint8_t*)(puVar6 + 84)) {
                            local_400->ConstructFinishAndUpload();
                        }
                    }
                }
                MakeSharedPool<BuildModelResultData, 512>::MakeShared<>();
                this_01 = (shared_ptr<graphics::Model>*)local_3e8.operator->();
                *this_01 = *this_02;
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_468);
                field_24 = local_468;
                puVar23 = DataStatus::READY;
            }
        }
        return puVar23;
    }

} // namespace jag::game
