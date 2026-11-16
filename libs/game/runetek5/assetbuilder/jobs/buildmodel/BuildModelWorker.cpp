// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildModelWorker.h"

namespace jag::game {
    // 0x1006333d0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildModelWorker::~BuildModelWorker();

    // 0x1006333e0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildModelWorker::~BuildModelWorker();

    // 0x1006339a0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildModelWorker::~BuildModelWorker();

    // 0x100643ee0, 32 bytes, base-object constructor, placed by class name and debug map
    // BuildModelWorker::BuildModelWorker()
    void BuildModelWorker::BuildModelWorker() {
        new (this) AssetWorker();
        field_0 = &PTR__BuildFunctionWorker_100f0d5b8;
    }

    // 0x100643f00, 16 bytes, complete-object constructor, placed by class name and debug map
    // BuildModelWorker::BuildModelWorker(): jumps straight to the base-object constructor

    // 0x100643f10, 3216 bytes, placed by class name and debug map
    // BuildModelWorker::Service(int)
    undefined* BuildModelWorker::Service(int param_1) {
        shared_ptr* this_00;
        byte bVar1;
        ushort uVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        undefined8* puVar6;
        Model* pMVar7;
        long lVar8;
        PacketView* pPVar9;
        ulong uVar10;
        float* pfVar11;
        ulong uVar12;
        Vector3T* pVVar13;
        vector<unsigned int, eastl::allocator>* pvVar14;
        vector<int, eastl::allocator>* pvVar15;
        int* piVar16;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        byte* pbVar18;
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>* pAVar19;
        Array<unsigned short, eastl::allocator>* pAVar20;
        ushort* puVar21;
        MapArea* this_01;
        RenderDevice* pRVar22;
        RenderContext* pRVar23;
        shared_ptr<graphics::Model>* this_02;
        shared_ptr* extraout_RDX;
        undefined* puVar24;
        MaterialManager* this_03;
        uint uVar25;
        ulong uVar26;
        PacketView aPStackY_14f8[128];
        PacketView in_stack_fffffffffffffb08;
        scoped_lock<std::mutex> local_4a8[8];
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>* local_4a0;
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>* local_498;
        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>* local_490;
        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>* local_488;
        Vector3T* local_480;
        Array<VarValue, eastl::allocator>* local_478;
        float local_470;
        float local_46c;
        shared_ptr local_468;
        Array<VarValue, eastl::allocator>* local_458;
        Array<VarValue, eastl::allocator>* local_450;
        vector<DecodedTerrainTile, eastl::allocator>* local_448;
        vector<unsigned int, eastl::allocator>* local_440;
        vector<oldscape::rseven::ModelFace, eastl::allocator>* local_438;
        vector<oldscape::rseven::ModelFace, eastl::allocator>* local_430;
        Array<VarValue, eastl::allocator>* local_428;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_420;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_418;
        Array<VarValue, eastl::allocator>* local_410;
        vector<oldscape::rseven::ModelFace, eastl::allocator>* local_408;
        Model* local_400;
        char local_3f1;
        ulong local_3f0;
        Model local_3e8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar3 = field_8->operator_cast_to_bool();
        if (bVar3) {
            puVar6 = (undefined8*)field_8->end();
            std::scoped_lock<std::mutex>::scoped_lock(local_4a8, (mutex*)(puVar6 + 2));
            this_00 = (shared_ptr*)(puVar6 + 85);
            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar3) {
                pMVar7 = (Model*)shared_ptr<graphics::Model>::operator*((shared_ptr<graphics::Model>*)this_00);
                pMVar7->StartTransform();
                local_3f1 = *(char*)(puVar6 + 48);
                local_448 = (vector<DecodedTerrainTile, eastl::allocator>*)(puVar6 + 10);
                local_400 = pMVar7;
                lVar8 = eastl::vector<DecodedTerrainTile, eastl::allocator>::size(local_448);
                if (lVar8 != 0) {
                    local_428 = (Array<VarValue, eastl::allocator>*)(puVar6 + 49);
                    local_410 = (Array<VarValue, eastl::allocator>*)(puVar6 + 52);
                    local_478 = (Array<VarValue, eastl::allocator>*)(puVar6 + 58);
                    local_440 = (vector<unsigned int, eastl::allocator>*)(puVar6 + 20);
                    local_408 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)(puVar6 + 24);
                    local_438 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)(puVar6 + 28);
                    local_420 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)(puVar6 +
                                                                                                               32);
                    local_418 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)(puVar6 +
                                                                                                               36);
                    local_430 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)(puVar6 + 42);
                    local_480 = (Vector3T*)((long)puVar6 + 372);
                    local_458 = (Array<VarValue, eastl::allocator>*)(puVar6 + 64);
                    local_4a0 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)(puVar6 + 67);
                    local_490 = (Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                       eastl::allocator>*)(puVar6 + 70);
                    local_450 = (Array<VarValue, eastl::allocator>*)(puVar6 + 73);
                    local_498 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)(puVar6 + 76);
                    local_488 = (Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                       eastl::allocator>*)(puVar6 + 79);
                    local_3f0 = 0;
                    do {
                        new (&local_3e8) graphics::Model();
                        pPVar9 = (PacketView*)eastl::vector<
                            PacketView, eastl::fixed_vector_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<PacketView,
                                           eastl::fixed_vector_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_448,
                                   local_3f0);
                        PacketView::PacketView(aPStackY_14f8 + 128, pPVar9);
                        local_3e8.LoadDataFromModelRawRT7(in_stack_fffffffffffffb08);
                        (aPStackY_14f8 + 128)->~PacketView();
                        local_3e8.StartTransform();
                        uVar10 = eastl::vector<unsigned int, eastl::allocator>::size(local_440);
                        if ((local_3f0 < uVar10) &&
                            (pfVar11 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                                 (vector<float, eastl::allocator>*)local_440, local_3f0),
                             *pfVar11 != 1.0)) {
                            pfVar11 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                                (vector<float, eastl::allocator>*)local_440, local_3f0);
                            new (&local_468) math::Vector3T<float>(*pfVar11);
                            local_3e8.Scale((Vector3T*)&local_468);
                        }
                        uVar10 = local_3f0;
                        uVar12 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(local_408);
                        if (uVar10 < uVar12) {
                            pVVar13 = (Vector3T*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                (vector<math::Vector3T<float>, eastl::allocator>*)local_408, uVar10);
                            bVar3 = math::operator!=(pVVar13, (Vector3T*)PTR_ZERO_100ee66e8);
                            uVar10 = local_3f0;
                            if (bVar3) {
                                new (&local_468) math::QuaternionT<float>();
                                pfVar11 = (float*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_408, local_3f0);
                                local_470 = *pfVar11;
                                lVar8 = eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_408, local_3f0);
                                local_46c = *(float*)(lVar8 + 4);
                                lVar8 = eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_408, local_3f0);
                                local_468.FromYawPitchRoll(local_470, local_46c, *(float*)(lVar8 + 8));
                                local_3e8.Rotate((QuaternionT*)&local_468, true);
                                uVar10 = local_3f0;
                            }
                        }
                        uVar12 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(local_438);
                        if (uVar10 < uVar12) {
                            pVVar13 = (Vector3T*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                (vector<math::Vector3T<float>, eastl::allocator>*)local_438, local_3f0);
                            bVar3 = math::operator!=(pVVar13, (Vector3T*)PTR_ZERO_100ee66e8);
                            if (bVar3) {
                                pVVar13 = (Vector3T*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_438, local_3f0);
                                local_3e8.Translate(pVVar13);
                            }
                        }
                        uVar10 = eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>::size(local_420);
                        if (local_3f0 < uVar10) {
                            uVar10 = 0;
                            while (true) {
                                pvVar14 = (vector<unsigned int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_420,
                                        local_3f0);
                                uVar12 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar14);
                                if (uVar12 <= uVar10)
                                    break;
                                pvVar15 = (vector<int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_420,
                                        local_3f0);
                                piVar16 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar15, uVar10);
                                iVar5 = *piVar16;
                                pvVar15 = (vector<int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_420,
                                        local_3f0);
                                piVar16 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar15, uVar10 + 1);
                                if ((iVar5 != -1) && (*piVar16 != -1)) {
                                    local_3e8.RecolourSingle((ushort)iVar5, (ushort)*piVar16);
                                }
                                uVar10 = uVar10 + 2;
                            }
                        }
                        uVar10 = eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>::size(local_418);
                        if (local_3f0 < uVar10) {
                            uVar10 = 0;
                            while (true) {
                                pvVar14 = (vector<unsigned int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_418,
                                        local_3f0);
                                uVar12 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar14);
                                if (uVar12 <= uVar10)
                                    break;
                                pvVar15 = (vector<int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_418,
                                        local_3f0);
                                piVar16 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar15, uVar10);
                                iVar5 = *piVar16;
                                pvVar15 = (vector<int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_418,
                                        local_3f0);
                                piVar16 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar15, uVar10 + 1);
                                if ((iVar5 != -1) && (*piVar16 != -1)) {
                                    local_3e8.RematerialSingle((ushort)iVar5, (ushort)*piVar16);
                                }
                                uVar10 = uVar10 + 2;
                            }
                        }
                        if (*(char*)(puVar6 + 46) != '\0') {
                            local_3e8.MirrorZ();
                        }
                        uVar10 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(local_430);
                        if (local_3f0 < uVar10) {
                            pVVar13 = (Vector3T*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                (vector<math::Vector3T<float>, eastl::allocator>*)local_430, local_3f0);
                            bVar3 = math::operator!=(pVVar13, (Vector3T*)PTR_ZERO_100ee66e8);
                            if (bVar3) {
                                pVVar13 = (Vector3T*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_430, local_3f0);
                                local_3e8.Translate(pVVar13);
                            }
                        }
                        bVar3 = math::operator!=(local_480, (Vector3T*)PTR_ONE_100ee66d8);
                        if (bVar3) {
                            local_3e8.Scale(local_480);
                        }
                        cVar4 = local_428->empty();
                        if (cVar4 == '\0') {
                            if (local_3f1 == '\0') {
                                cVar4 = ((puVar6 + 55))->empty();
                                if (cVar4 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssertAlways(
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.cpp",
                                        118,
                                        "BuildModelWorker: We have a recolourDestPalette, but haven\'t implemented "
                                        "that yet!");
                                }
                                cVar4 = local_410->empty();
                                if (cVar4 == '\0') {
                                    local_3e8.Recolour(local_428, local_410);
                                }
                            } else {
                                cVar4 = local_410->empty();
                                if (cVar4 == '\0') {
                                    local_3e8.Recolour(local_428, local_410);
                                }
                            }
                        }
                        cVar4 = local_478->empty();
                        if (cVar4 == '\0') {
                            local_3e8.Rematerial(local_478, (Array*)(puVar6 + 61));
                        }
                        cVar4 = local_458->empty();
                        if (cVar4 == '\0') {
                            uVar10 = 0;
                            do {
                                uVar25 = 0;
                                while (true) {
                                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                            local_4a0, uVar10);
                                    uVar26 = (ulong)uVar25;
                                    uVar12 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            pvVar17);
                                    if (uVar12 <= uVar26)
                                        break;
                                    pbVar18 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                        (Array<unsigned char, eastl::allocator>*)local_458, uVar10);
                                    bVar1 = *pbVar18;
                                    pAVar19 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                                        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>::operator[](local_490, uVar10);
                                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                            pAVar19, uVar26);
                                    iVar5 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            pvVar17);
                                    if ((int)(uint)bVar1 < iVar5) {
                                        pAVar20 = (Array<unsigned short, eastl::allocator>*)
                                            Array<Array<unsigned short, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_4a0, uVar10);
                                        puVar21 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](pAVar20,
                                                                                                               uVar26);
                                        uVar2 = *puVar21;
                                        pAVar19 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                                            Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_490, uVar10);
                                        pAVar20 = (Array<unsigned short, eastl::allocator>*)
                                            Array<Array<unsigned short, eastl::allocator>,
                                                  eastl::allocator>::operator[](pAVar19, uVar26);
                                        pbVar18 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)local_458, uVar10);
                                        puVar21 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                                            pAVar20, (ulong)*pbVar18);
                                        local_3e8.RecolourSingle(uVar2, *puVar21);
                                    }
                                    uVar25 = uVar25 + 1;
                                }
                                uVar10 = uVar10 + 1;
                            } while (uVar10 != 10);
                        }
                        cVar4 = local_450->empty();
                        if (cVar4 == '\0') {
                            uVar10 = 0;
                            do {
                                uVar25 = 0;
                                while (true) {
                                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                            local_498, uVar10);
                                    uVar26 = (ulong)uVar25;
                                    uVar12 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            pvVar17);
                                    if (uVar12 <= uVar26)
                                        break;
                                    pbVar18 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                        (Array<unsigned char, eastl::allocator>*)local_450, uVar10);
                                    bVar1 = *pbVar18;
                                    pAVar19 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                                        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>::operator[](local_488, uVar10);
                                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                            pAVar19, uVar26);
                                    iVar5 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            pvVar17);
                                    if ((int)(uint)bVar1 < iVar5) {
                                        pAVar20 = (Array<unsigned short, eastl::allocator>*)
                                            Array<Array<unsigned short, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_498, uVar10);
                                        puVar21 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](pAVar20,
                                                                                                               uVar26);
                                        uVar2 = *puVar21;
                                        pAVar19 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                                            Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_488, uVar10);
                                        pAVar20 = (Array<unsigned short, eastl::allocator>*)
                                            Array<Array<unsigned short, eastl::allocator>,
                                                  eastl::allocator>::operator[](pAVar19, uVar26);
                                        pbVar18 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)local_450, uVar10);
                                        puVar21 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                                            pAVar20, (ulong)*pbVar18);
                                        local_3e8.RematerialSingle(uVar2, *puVar21);
                                    }
                                    uVar25 = uVar25 + 1;
                                }
                                uVar10 = uVar10 + 1;
                            } while (uVar10 != 10);
                        }
                        if (*(char*)((long)puVar6 + 661) != '\0') {
                            local_3e8.TintAdjust((int)*(char*)((long)puVar6 + 658), (int)*(char*)((long)puVar6 + 659),
                                                 (int)*(char*)((long)puVar6 + 660), *(char*)((long)puVar6 + 661));
                        }
                        if (*(ushort*)(puVar6 + 82) != 0) {
                            local_3e8.AmbientAdjust(*(ushort*)(puVar6 + 82));
                        }
                        local_3e8.EndTransform(false);
                        local_3e8.UpdateAABB();
                        local_400->Append(&local_3e8);
                        local_3e8.~Model();
                        uVar12 = local_3f0 + 1;
                        uVar10 = eastl::vector<DecodedTerrainTile, eastl::allocator>::size(local_448);
                        local_3f0 = uVar12;
                    } while (uVar12 < uVar10);
                }
                if ((graphics::Model::m_DoModelWelding != '\0') &&
                    (uVar10 = eastl::vector<DecodedTerrainTile, eastl::allocator>::size(local_448), 1 < uVar10)) {
                    local_400->WeldTouchingBatches();
                }
                if (1 < *(byte*)(puVar6 + 84)) {
                    local_400->SetShareLightBatches(*(bool*)((long)puVar6 + 663));
                    pMVar7 = local_400;
                    local_400->SetUseUncompressedTextures(*(bool*)(puVar6 + 83));
                    pMVar7->SetupInitialMaterials(puVar6[1]);
                    if (*(char*)((long)puVar6 + 662) != '\0') {
                        local_400->CombineBatches((TextureManager*)*puVar6);
                    }
                    local_400->SortSections();
                    local_400->BakeHSLColors(puVar6[1]);
                }
                local_400->Translate((Vector3T*)(puVar6 + 40));
                local_400->EndTransform(false);
                local_400->CalculateLabelCentres();
                this_03 = (MaterialManager*)(ulong) * (uint*)((long)puVar6 + 668);
                pMVar7 = local_400;
                local_400->SetExternalID(*(uint*)((long)puVar6 + 668), false);
                if (2 < *(byte*)(puVar6 + 84)) {
                    this_01 = (MapArea*)pMVar7->Instance();
                    lVar8 = this_01->GetOrigin();
                    if (*(char*)(lVar8 + 227) != '\0') {
                        pRVar22 = (RenderDevice*)this_01->Instance();
                        lVar8 = pRVar22->GetCurrentThreadRenderContext();
                        if (lVar8 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("render::RenderDevice::Instance().GetCurrentThreadRenderContext()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.cpp",
                                      207, (char*)0);
                        }
                        pRVar22 = (RenderDevice*)pRVar22->Instance();
                        pRVar23 = (RenderContext*)pRVar22->GetCurrentThreadRenderContext();
                        new (&local_3e8) lock_guard<render::RenderContext>(pRVar23);
                        this_03 = (MaterialManager*)puVar6[1];
                        local_400->BakeMaterialInfoAndTextureMetaAndHSLColors(this_03, (TextureManager*)*puVar6, false);
                        if (3 < *(byte*)(puVar6 + 84)) {
                            local_400->ConstructFinishAndUpload();
                        }
                        local_3e8.~lock_guard();
                    }
                }
                MakeSharedPool<BuildModelResultData, 512>::MakeShared<>(
                    (shared_ptr*)&local_3e8, (MakeSharedPool<BuildModelResultData, 512>*)this_03);
                this_02 = (shared_ptr<graphics::Model>*)shared_ptr<BuildModelResultData>::operator->(
                    (shared_ptr<BuildModelResultData>*)&local_3e8);
                shared_ptr<graphics::Model>::operator=(this_02, this_00);
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                    &local_468, (jag*)&local_3e8, extraout_RDX);
                shared_ptr<void>::operator=((shared_ptr<void>*)&field_24, &local_468);
                local_468.~shared_ptr();
                puVar24 = DataStatus::READY;
                local_3e8.~shared_ptr();
            } else {
                shared_ptr<void>::reset();
                puVar24 = DataStatus::READY;
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_4a8);
        } else {
            shared_ptr<void>::reset();
            puVar24 = DataStatus::READY;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar24;
    }

} // namespace jag::game
