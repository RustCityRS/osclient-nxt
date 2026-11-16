// libs/oldscape/rs2lib/util/playermodel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "playermodel.h"

namespace jag::oldscape::rs2lib {
    // 0x100d3fc90, 28 bytes, __const
    PlayerModel::m_basePartMap = {8, 11, 4, 6, 9, 7, 10};

    // 0x100fcf998, 16 bytes, __common; zero-initialised
    PlayerModel::m_recol1s;

    // 0x100fcf9a8, 120 bytes, __common; set at startup by ___cxx_global_var_init.81
    std::array<Array<short, eastl::allocator>, 5ul> PlayerModel::m_recol1d =
        array<Array<short, eastl::allocator>, 5ul>();

    // 0x100fcfa20, 16 bytes, __common; zero-initialised
    PlayerModel::m_recol2s;

    // 0x100fcfa30, 120 bytes, __common; set at startup by ___cxx_global_var_init.82
    std::array<Array<short, eastl::allocator>, 5ul> PlayerModel::m_recol2d =
        array<Array<short, eastl::allocator>, 5ul>();

    // 0x100fcfaa8, 21056 bytes, __common; zero-initialised
    PlayerModel::m_modelCache;

    // 0x100fd4ce8, 1536 bytes, __common; set at startup by ___cxx_global_var_init.85
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long> PlayerModel::m_headModelHashToModelCacheID =
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>(16, "LRUHashCache");

    // 0x100fd52e8, 8 bytes, __common; zero-initialised
    PlayerModel::m_nextHeadModelCacheID;

    // 0x1000baea0: the linker folded this into HiscoresManager::SetDataSource(HiscoresDataSource), which has identical code
    PlayerModel::SetBodytype(int);

    // 0x1001fe750, 48 bytes, placed by class name and debug map
    // PlayerModel::RefreshAppearance()
    void PlayerModel::RefreshAppearance() {
        SetAppearance(this, (fixed_vector*)&field_88, (fixed_vector*)this, (fixed_vector*)&field_176, m_bodytype,
                      field_240);
    }

    // 0x1001feb70, 224 bytes, placed by class name and debug map
    // PlayerModel::SetDefaultTypeForIdkSlot(int, eastl::fixed_vector<int, 12ul, true, eastl::allocator>&, int)
    void PlayerModel::SetDefaultTypeForIdkSlot(int param_1, fixed_vector* param_2, int param_3) {
        long lVar2;
        int* piVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        shared_ptr<RSevenDebugPresetProvider> local_48[16];

        iVar6 = param_3 + 7;
        if (param_1 != 1) {
            iVar6 = param_3;
        }
        if (0 < configdecoder::IdkType::m_numDefinitions) {
            iVar5 = 256;
            do {
                local_48->List(iVar5 + -256);
                if (((operator!=((shared_ptr*)local_48, (_func_decltype_nullptr*)0)) &&
                     (lVar2 =
                          shared_ptr<configdecoder::IdkType>::operator->((shared_ptr<configdecoder::IdkType>*)local_48),
                      *(char*)(lVar2 + 148) == '\0')) &&
                    (piVar3 = (int*)shared_ptr<configdecoder::IdkType>::operator->(
                         (shared_ptr<configdecoder::IdkType>*)local_48),
                     *piVar3 == iVar6)) {
                    piVar3 = (int*)std::array<int, 7ul>::operator[]((long)param_3);
                    piVar3 = (int*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                                param_2,
                            (long)*piVar3);
                    *piVar3 = iVar5;
                    local_48->~shared_ptr();
                    return;
                }
                local_48->~shared_ptr();
                iVar4 = iVar5 + -255;
                iVar5 = iVar5 + 1;
            } while (iVar4 < configdecoder::IdkType::m_numDefinitions);
        }
    }

    // 0x100202b70, 1136 bytes, placed by class name
    // PlayerModel::GetHeadModel() const
    PlayerModel* PlayerModel::GetHeadModel() {
        short sVar1;
        uint uVar2;
        bool bVar3;
        char cVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        NPCTypeCustomisation* pNVar8;
        IdkType* this_00;
        ObjType* this_01;
        uint* puVar9;
        shared_ptr<dash3d::ModelUnlit>* psVar10;
        int* piVar11;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar12;
        long* plVar13;
        short* psVar14;
        NpcUID* extraout_RDX;
        NpcUID* pNVar15;
        NpcUID* extraout_RDX_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>* in_RSI;
        vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        ulong uVar16;
        undefined1 auVar17[16];
        undefined1 local_88[16];
        ulong local_78;
        shared_ptr<RSevenDebugPresetProvider> local_68[24];
        undefined1 local_50[28];
        int local_34;

        if (*(int*)(in_RSI + 240) == -1) {
            uVar16 = 0;
            bVar3 = false;
            bVar5 = false;
            local_50._16_8_ = in_RSI;
            do {
                auVar17 = eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_50._16_8_,
                        uVar16);
                pNVar15 = auVar17._8_8_;
                uVar2 = *auVar17._0_8_;
                if ((uVar2 & 4294967040) == 256) {
                    local_68->List(uVar2 - 256);
                    this_00 = (IdkType*)shared_ptr<configdecoder::IdkType>::operator->(
                        (shared_ptr<configdecoder::IdkType>*)local_68);
                    cVar4 = this_00->CheckHead();
                    local_68->~shared_ptr();
                    pNVar15 = extraout_RDX_00;
                    bVar3 = bVar5;
                    if (cVar4 == '\0') {
                        bVar3 = true;
                        bVar5 = true;
                    }
                }
                if (511 < (int)uVar2) {
                    local_68->List(uVar2 - 512);
                    this_01 = (ObjType*)shared_ptr<configdecoder::ObjType>::operator->(
                        (shared_ptr<configdecoder::ObjType>*)local_68);
                    cVar4 = this_01->CheckHeadModel(*(int*)(local_50._16_8_ + 296));
                    local_68->~shared_ptr();
                    pNVar15 = extraout_RDX;
                    bVar5 = bVar3;
                    if (cVar4 == '\0') {
                        bVar5 = true;
                        bVar3 = true;
                    }
                }
                this = (PlayerModel*)this;
                uVar16 = uVar16 + 1;
            } while (uVar16 != 12);
            if (bVar5) {
                new ((PlayerModel*)this) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
            } else {
                eastl::destruct<highlight::NpcUID*>((eastl*)local_50, (NpcUID*)"EASTL vector", pNVar15);
                new (local_68) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(12, local_50);
                uVar16 = 0;
                local_34 = 0;
                this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                              local_50._16_8_;
                do {
                    local_78 = uVar16;
                    puVar9 =
                        (uint*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_02,
                                                                                                               uVar16);
                    uVar2 = *puVar9;
                    if ((uVar2 & 4294967040) == 256) {
                        local_88->List(uVar2 - 256);
                        shared_ptr<configdecoder::IdkType>::operator->((shared_ptr<configdecoder::IdkType>*)local_88);
                        local_50->GetHeadNoCheck();
                        local_88->~shared_ptr();
                        bVar5 = operator!=((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            psVar10 = (shared_ptr<dash3d::ModelUnlit>*)
                                eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                                    (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_68,
                                    (long)local_34);
                            shared_ptr<dash3d::ModelUnlit>::operator=(psVar10, (shared_ptr*)local_50);
                            local_34 = local_34 + 1;
                        }
                        local_50->~shared_ptr();
                    }
                    if ((int)uVar2 < 512) {
                        this_02 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                                local_50._16_8_;
                    } else {
                        local_88->List(uVar2 - 512);
                        iVar6 = shared_ptr<configdecoder::ObjType>::operator->(
                            (shared_ptr<configdecoder::ObjType>*)local_88);
                        this_02 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                                local_50._16_8_;
                        local_50->GetHeadModelNoCheck(iVar6);
                        local_88->~shared_ptr();
                        bVar5 = operator!=((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            psVar10 = (shared_ptr<dash3d::ModelUnlit>*)
                                eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                                    (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_68,
                                    (long)local_34);
                            shared_ptr<dash3d::ModelUnlit>::operator=(psVar10, (shared_ptr*)local_50);
                            local_34 = local_34 + 1;
                        }
                        local_50->~shared_ptr();
                    }
                    uVar16 = local_78 + 1;
                } while (uVar16 != 12);
                local_50->Combine(local_68);
                this_03 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)(this_02 +
                                                                                                              176);
                uVar16 = 0;
                do {
                    piVar11 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](this_03,
                                                                                                              uVar16);
                    iVar6 = *piVar11;
                    pvVar12 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<Array<short, eastl::allocator>, 5ul>::operator[](
                            (array<Array<short, eastl::allocator>, 5ul>*)&m_recol1d, uVar16);
                    iVar7 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar12);
                    if (iVar6 < iVar7) {
                        plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_50);
                        psVar14 = (short*)std::array<short, 5ul>::operator[]((array<short, 5ul>*)&m_recol1s, uVar16);
                        sVar1 = *psVar14;
                        piVar11 = (int*)
                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::operator[](this_03,
                                                                                                            uVar16);
                        psVar14 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pvVar12, (long)*piVar11);
                        (**(code**)(*plVar13 + 160))(plVar13, (int)sVar1, (int)*psVar14);
                    }
                    piVar11 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](this_03,
                                                                                                              uVar16);
                    iVar6 = *piVar11;
                    pvVar12 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<Array<short, eastl::allocator>, 5ul>::operator[](
                            (array<Array<short, eastl::allocator>, 5ul>*)&m_recol2d, uVar16);
                    iVar7 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar12);
                    if (iVar6 < iVar7) {
                        plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_50);
                        psVar14 = (short*)std::array<short, 5ul>::operator[]((array<short, 5ul>*)&m_recol2s, uVar16);
                        sVar1 = *psVar14;
                        piVar11 = (int*)
                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::operator[](this_03,
                                                                                                            uVar16);
                        psVar14 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pvVar12, (long)*piVar11);
                        (**(code**)(*plVar13 + 160))(plVar13, (int)sVar1, (int)*psVar14);
                    }
                    this = (PlayerModel*)this;
                    uVar16 = uVar16 + 1;
                } while (uVar16 != 5);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(PlayerModel*)this, (shared_ptr*)local_50);
                local_50->~shared_ptr();
                local_68->~vector();
            }
        } else {
            local_68->List(*(int*)(in_RSI + 240));
            pNVar8 = (NPCTypeCustomisation*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)local_68);
            GetHead(pNVar8);
            local_68->~shared_ptr();
        }
        return this;
    }

    // 0x100204890, 144 bytes, base-object constructor, placed by class name
    // PlayerModel::PlayerModel()
    void PlayerModel::PlayerModel() {
        new (this) eastl::fixed_vector<int, 12ul, true, eastl::allocator>();
        new (&field_88) eastl::fixed_vector<int, 12ul, true, eastl::allocator>();
        new (&field_176) eastl::fixed_vector<int, 5ul, true, eastl::allocator>();
        new (&field_264) Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>();
        field_288 = 0;
        m_pronoun = 4294967295;
        m_bodytype = 0;
    }

    // 0x100204930, 16 bytes, complete-object constructor, placed by class name
    // PlayerModel::PlayerModel(): jumps straight to the base-object constructor

    // 0x100204940, 208 bytes, base-object constructor, placed by class name
    // PlayerModel::PlayerModel(PlayerModel&)
    void PlayerModel::PlayerModel(PlayerModel* param_1) {
        new (this) eastl::fixed_vector<int, 12ul, true, eastl::allocator>();
        new (&field_88) eastl::fixed_vector<int, 12ul, true, eastl::allocator>();
        new (&field_176) eastl::fixed_vector<int, 5ul, true, eastl::allocator>();
        new (&field_264) Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>();
        field_288 = 0;
        m_pronoun = 4294967295;
        m_bodytype = 0;
        SetAppearance(this, (fixed_vector*)&param_1->field_88, (fixed_vector*)param_1,
                      (fixed_vector*)&param_1->field_176, param_1->m_bodytype, param_1->field_240);
    }

    // 0x100204a10, 304 bytes, placed by class name
    // PlayerModel::SetAppearance(eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 5ul, true, eastl::allocator> const&, int, int)
    void PlayerModel::SetAppearance(fixed_vector* param_1, fixed_vector* param_2, fixed_vector* param_3, int param_4,
                                    int param_5) {
        char cVar1;
        int iVar2;
        PlayerModel* this_00;
        fixed_vector<int, 12ul, true, eastl::allocator> local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = param_1->empty();
        if (cVar1 == '\0') {
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::operator=(
                (fixed_vector<int, 12ul, true, eastl::allocator>*)&field_88, param_1);
            iVar2 = (int)param_1;
        } else {
            this_00 = (PlayerModel*)local_90;
            BuildDefaultAppearance(this_00, (int)param_1);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::operator=(
                (fixed_vector<int, 12ul, true, eastl::allocator>*)&field_88, (fixed_vector*)this_00);
            iVar2 = (int)this_00;
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::~fixed_vector(local_90);
        }
        cVar1 = param_2->empty();
        if (cVar1 == '\0') {
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::operator=(
                (fixed_vector<int, 12ul, true, eastl::allocator>*)this, param_2);
        } else {
            BuildDefaultAppearance((PlayerModel*)local_90, iVar2);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::operator=(
                (fixed_vector<int, 12ul, true, eastl::allocator>*)this, (fixed_vector*)local_90);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::~fixed_vector(local_90);
        }
        eastl::fixed_vector<int, 5ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 5ul, true, eastl::allocator>*)&field_176, param_3);
        m_bodytype = param_4;
        field_240 = param_5;
        CalcBaseId(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100204b40, 16 bytes, complete-object constructor, placed by class name
    // PlayerModel::PlayerModel(PlayerModel&): jumps straight to the base-object constructor

    // 0x100204b50, 96 bytes, placed by class name
    // PlayerModel::BuildDefaultAppearance(int)
    PlayerModel* PlayerModel::BuildDefaultAppearance(int param_1) {
        int in_EDX;
        int iVar1;

        eastl::fixed_vector<int, 12ul, true, eastl::allocator>::fixed_vector((ulong)this);
        iVar1 = 0;
        do {
            SetDefaultTypeForIdkSlot(in_EDX, (fixed_vector*)this, iVar1);
            iVar1 = iVar1 + 1;
        } while (iVar1 != 7);
        return this;
    }

    // 0x100204c60, 464 bytes, placed by class name
    // PlayerModel::CalcBaseId()
    void PlayerModel::CalcBaseId() {
        undefined4 uVar1;
        undefined4 uVar2;
        ulong uVar3;
        undefined4* puVar4;
        int* piVar5;
        ulong uVar6;
        ulong uVar7;

        uVar3 = field_248;
        puVar4 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 5);
        uVar1 = *puVar4;
        puVar4 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 9);
        uVar2 = *puVar4;
        puVar4 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 5);
        *puVar4 = uVar2;
        puVar4 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 9);
        *puVar4 = uVar1;
        field_248 = 0;
        uVar7 = 0;
        do {
            field_248 = field_248 << 4;
            piVar5 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                    uVar7);
            if (255 < *piVar5) {
                piVar5 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar7);
                field_248 = ((long)*piVar5 + field_248) - 256;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 12);
        piVar5 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 0);
        if (255 < *piVar5) {
            piVar5 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 0);
            field_248 = field_248 + (long)(*piVar5 + -256 >> 4);
        }
        piVar5 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 1);
        if (255 < *piVar5) {
            piVar5 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 1);
            field_248 = field_248 + (long)(*piVar5 + -256 >> 8);
        }
        uVar7 = 0;
        do {
            field_248 = field_248 << 3;
            piVar5 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)&field_176,
                    uVar7);
            uVar6 = (long)*piVar5 + field_248;
            field_248 = uVar6;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 5);
        field_248 = (long)m_bodytype + uVar6 * 2;
        puVar4 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 5);
        *puVar4 = uVar1;
        puVar4 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this, 9);
        *puVar4 = uVar2;
        if (((uVar3 != 0) && (uVar3 != field_248)) || (field_288 != '\0')) {
            LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)&m_modelCache);
        }
    }

    // 0x100204e70, 304 bytes, placed by class name
    // PlayerModel::IdkChangePart(int, bool)
    void PlayerModel::IdkChangePart(int param_1, bool param_2) {
        int* piVar2;
        long lVar3;
        int iVar4;
        int iVar5;
        shared_ptr<RSevenDebugPresetProvider> local_58[16];
        ulong local_48;
        int* local_40;

        local_40 = (int*)std::array<int, 7ul>::operator[]((long)param_1);
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                (long)*local_40);
        if (*piVar2 == 0) {
            return;
        }
        iVar5 = *piVar2 + -256;
        local_48 = (ulong)(uint)param_1;
        do {
            if (param_2) {
                iVar5 = iVar5 + 1;
                if (configdecoder::IdkType::m_numDefinitions <= iVar5) {
                    iVar5 = 0;
                }
            } else {
                if (iVar5 < 1) {
                    iVar5 = configdecoder::IdkType::m_numDefinitions;
                }
                iVar5 = iVar5 + -1;
            }
            local_58->List(iVar5);
            if ((operator!=((shared_ptr*)local_58, (_func_decltype_nullptr*)0)) &&
                (lVar3 = shared_ptr<configdecoder::IdkType>::operator->((shared_ptr<configdecoder::IdkType>*)local_58),
                 *(char*)(lVar3 + 148) == '\0')) {
                piVar2 =
                    (int*)shared_ptr<configdecoder::IdkType>::operator->((shared_ptr<configdecoder::IdkType>*)local_58);
                iVar4 = param_1 + 7;
                if (((PlayerModel*)this)->m_bodytype != 1) {
                    iVar4 = (int)local_48;
                }
                if (*piVar2 == iVar4) {
                    local_58->~shared_ptr();
                    piVar2 = (int*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)(PlayerModel*)this,
                                   (long)*local_40);
                    *piVar2 = iVar5 + 256;
                    CalcBaseId((PlayerModel*)this);
                    return;
                }
            }
            local_58->~shared_ptr();
        } while (true);
    }

    // 0x100204fa0, 208 bytes, placed by class name
    // PlayerModel::IdkChangeColour(int, bool)
    void PlayerModel::IdkChangeColour(int param_1, bool param_2) {
        int* piVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar2;
        char cVar3;
        int iVar4;
        undefined3 in_register_00000011;
        int iVar5;

        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)&field_176,
                (ulong)param_1);
        iVar5 = *piVar1;
        if (CONCAT31(in_register_00000011, param_2) == 0) {
            do {
                if (iVar5 < 1) {
                    pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<Array<short, eastl::allocator>, 5ul>::operator[](
                            (array<Array<short, eastl::allocator>, 5ul>*)&m_recol1d, (ulong)param_1);
                    iVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar2);
                }
                iVar5 = iVar5 + -1;
                cVar3 = RecolsRunescape::IsRecolSelectable(param_1, iVar5);
            } while (cVar3 == '\0');
        } else {
            pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<Array<short, eastl::allocator>, 5ul>::operator[](
                    (array<Array<short, eastl::allocator>, 5ul>*)&m_recol1d, (ulong)param_1);
            do {
                iVar5 = iVar5 + 1;
                iVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar2);
                if (iVar4 <= iVar5) {
                    iVar5 = 0;
                }
                cVar3 = RecolsRunescape::IsRecolSelectable(param_1, iVar5);
            } while (cVar3 == '\0');
        }
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)&field_176,
                (ulong)param_1);
        *piVar1 = iVar5;
        CalcBaseId(this);
    }

    // 0x1002050a0, 192 bytes, placed by class name
    // PlayerModel::IdkChangeBodytype(int)
    void PlayerModel::IdkChangeBodytype(int param_1) {
        fixed_vector<int, 12ul, true, eastl::allocator> local_d0[88];
        fixed_vector<int, 12ul, true, eastl::allocator> local_78[88];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_bodytype != param_1) {
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::fixed_vector(local_78);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::fixed_vector(local_d0);
            SetAppearance(this, (fixed_vector*)local_78, (fixed_vector*)local_d0, (fixed_vector*)&field_176, param_1,
                          -1);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::~fixed_vector(local_d0);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::~fixed_vector(local_78);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100205160, 160 bytes, placed by class name
    // PlayerModel::IdkSaveDesign(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void PlayerModel::IdkSaveDesign(PacketJ* param_1) {
        int* piVar1;
        undefined4* puVar2;
        ulong uVar3;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_bodytype);
        uVar3 = 0;
        do {
            piVar1 = (int*)std::array<int, 7ul>::operator[](uVar3);
            piVar1 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                    (long)*piVar1);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, -(uint)(*piVar1 == 0) | *piVar1 - 256U);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 7);
        uVar3 = 0;
        do {
            puVar2 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)&field_176,
                    uVar3);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *puVar2);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 5);
    }

    // 0x100205200, 3200 bytes, placed by class name
    // PlayerModel::GetTempModel(configdecoder::SeqType*, int, configdecoder::SeqType*, int)
    PlayerModel* PlayerModel::GetTempModel(SeqType* param_1, int param_2, SeqType* param_3, int param_4) {
        undefined1* this_00;
        short sVar1;
        uint uVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        SeqType* pSVar6;
        undefined4* puVar7;
        int* piVar8;
        shared_ptr* psVar9;
        long* plVar10;
        uint* puVar11;
        IdkType* this_01;
        ObjType* this_02;
        shared_ptr<dash3d::ModelUnlit>* psVar12;
        shared_ptr<configdecoder::ObjTypeCustomisation>* this_03;
        long lVar13;
        long lVar14;
        ulong uVar15;
        short* psVar16;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        undefined4 in_register_00000014;
        ModelLit* pMVar18;
        NpcUID* extraout_RDX;
        ulong uVar19;
        ulong uVar20;
        undefined4 in_register_00000084;
        uint in_R9D;
        long lVar21;
        int iVar22;
        undefined8 in_stack_fffffffffffffed8;
        undefined4 uVar23;
        shared_ptr local_100;
        ModelLit* local_f0;
        shared_ptr local_e8;
        uint local_cc;
        ModelLit* local_c8;
        Array<game::VarValue, eastl::allocator>* local_c0;
        shared_ptr local_b8;
        SeqType* local_a8;
        undefined1 local_a0[104];
        long local_38;

        local_f0 = (ModelLit*)CONCAT44(in_register_00000084, param_4);
        pMVar18 = (ModelLit*)CONCAT44(in_register_00000014, param_2);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_cc = in_R9D;
        if (param_1->field_240 != 4294967295) {
            ((local_a0 + 16))->List(param_1->field_240);
            pSVar6 = (SeqType*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)(local_a0 + 16));
            GetTempModel(pSVar6, param_2, (SeqType*)(ulong)(uint)param_3, (int)local_f0,
                         (NPCTypeCustomisation*)(ulong)local_cc);
            ((local_a0 + 16))->~shared_ptr();
            goto LAB_100205cf5;
        }
        lVar21 = *(long*)&param_1->field_248;
        new ((local_a0 + 16)) eastl::fixed_vector<int, 12ul, true, eastl::allocator>(param_1);
        local_c8 = pMVar18;
        local_a8 = param_1;
        if ((pMVar18 != (ModelLit*)0) &&
            ((-1 < *(int*)((long)&pMVar18[13].field_8 + 3) || (-1 < *(int*)((long)&pMVar18[13].field_8 + 7))))) {
            uVar19 = 0;
            do {
                puVar7 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_a8,
                        uVar19);
                uVar23 = *puVar7;
                puVar7 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)(local_a0 +
                                                                                                              16),
                        uVar19);
                *puVar7 = uVar23;
                uVar19 = uVar19 + 1;
            } while (uVar19 != 12);
            iVar22 = *(int*)((long)&local_c8[13].field_8 + 3);
            if (-1 < iVar22) {
                piVar8 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_a8,
                        5);
                iVar5 = *piVar8;
                uVar23 = *(undefined4*)((long)&local_c8[13].field_8 + 3);
                puVar7 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)(local_a0 +
                                                                                                              16),
                        5);
                lVar21 = lVar21 + ((ulong)(uint)(iVar22 - iVar5) << 40);
                *puVar7 = uVar23;
            }
            iVar22 = *(int*)((long)&local_c8[13].field_8 + 7);
            if (-1 < iVar22) {
                piVar8 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_a8,
                        3);
                iVar5 = *piVar8;
                uVar23 = *(undefined4*)((long)&local_c8[13].field_8 + 7);
                puVar7 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)(local_a0 +
                                                                                                              16),
                        3);
                lVar21 = lVar21 + ((ulong)(uint)(iVar22 - iVar5) << 48);
                *puVar7 = uVar23;
            }
        }
        pMVar18 = local_c8;
        local_e8._0_8_ = lVar21;
        psVar9 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Find(
            (ulonglong*)&m_modelCache);
        new (&local_b8) shared_ptr<dash3d::Decor>(psVar9);
        bVar3 = operator!=(&local_b8, (_func_decltype_nullptr*)0);
        if (bVar3) {
            plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_b8);
            cVar4 = (**(code**)(*plVar10 + 56))(plVar10);
            if (dash3d::g_usingRSeven != cVar4) {
                shared_ptr<dash3d::ModelLit>::reset();
            }
        }
        psVar9 = (shared_ptr*)0;
        bVar3 = operator==(&local_b8, (_func_decltype_nullptr*)0);
        if (bVar3) {
            uVar19 = 0;
            bVar3 = false;
            do {
                puVar11 = (uint*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)(local_a0 +
                                                                                                              16),
                        uVar19);
                uVar2 = *puVar11;
                if ((uVar2 & 4294967040) == 256) {
                    local_e8.List(uVar2 - 256);
                    this_01 = (IdkType*)shared_ptr<configdecoder::IdkType>::operator->(
                        (shared_ptr<configdecoder::IdkType>*)&local_e8);
                    cVar4 = this_01->CheckModel();
                    local_e8.~shared_ptr();
                    if (cVar4 == '\0') {
                        bVar3 = true;
                    }
                    pMVar18 = local_c8;
                }
                if (511 < (int)uVar2) {
                    local_e8.List(uVar2 - 512);
                    this_02 = (ObjType*)shared_ptr<configdecoder::ObjType>::operator->(
                        (shared_ptr<configdecoder::ObjType>*)&local_e8);
                    cVar4 = this_02->CheckWearModel(*(int*)&local_a8[1].field_32);
                    local_e8.~shared_ptr();
                    if (cVar4 == '\0') {
                        bVar3 = true;
                    }
                }
                pSVar6 = local_a8;
                uVar19 = uVar19 + 1;
            } while (uVar19 != 12);
            if (!bVar3) {
            LAB_1002055da:
                psVar9 = (shared_ptr*)0;
                bVar3 = operator==(&local_b8, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    eastl::destruct<highlight::NpcUID*>((eastl*)local_a0, (NpcUID*)"EASTL vector", extraout_RDX);
                    new (&local_e8) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(12, local_a0);
                    pSVar6 = pSVar6 + 1;
                    uVar19 = 0;
                    iVar22 = 0;
                    do {
                        puVar11 = (uint*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)(local_a0 + 16),
                                   uVar19);
                        uVar2 = *puVar11;
                        if ((uVar2 & 4294967040) == 256) {
                            local_100.List(uVar2 - 256);
                            shared_ptr<configdecoder::IdkType>::operator->(
                                (shared_ptr<configdecoder::IdkType>*)&local_100);
                            local_a0->GetModelNoCheck();
                            local_100.~shared_ptr();
                            bVar3 = operator!=((shared_ptr*)local_a0, (_func_decltype_nullptr*)0);
                            if (bVar3) {
                                psVar12 = (shared_ptr<dash3d::ModelUnlit>*)
                                    eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                                        (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&local_e8,
                                        (long)iVar22);
                                shared_ptr<dash3d::ModelUnlit>::operator=(psVar12, (shared_ptr*)local_a0);
                                iVar22 = iVar22 + 1;
                            }
                            local_a0->~shared_ptr();
                        }
                        if (511 < (int)uVar2) {
                            local_a0->List(uVar2 - 512);
                            iVar5 = shared_ptr<configdecoder::ObjType>::operator->(
                                (shared_ptr<configdecoder::ObjType>*)local_a0);
                            local_100.GetWearModelNoCheck(iVar5);
                            bVar3 = operator!=(&local_100, (_func_decltype_nullptr*)0);
                            if ((bVar3) && (cVar4 = pSVar6->empty(), cVar4 == '\0')) {
                                psVar9 = (shared_ptr*)
                                    Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>::
                                    operator[](
                                        (Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>*)
                                            pSVar6,
                                        uVar19);
                                bVar3 = operator!=(psVar9, (_func_decltype_nullptr*)0);
                                if (bVar3) {
                                    this_03 = (shared_ptr<configdecoder::ObjTypeCustomisation>*)
                                        Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>::
                                        operator[](
                                            (Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>*)
                                                pSVar6,
                                            uVar19);
                                    local_c0 = (Array<game::VarValue, eastl::allocator>*)
                                        shared_ptr<configdecoder::ObjTypeCustomisation>::operator*(this_03);
                                    cVar4 = local_c0->empty();
                                    if (cVar4 == '\0') {
                                        lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)local_a0);
                                        cVar4 = ((lVar13 + 80))->empty();
                                        if (cVar4 == '\0') {
                                            lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                                (shared_ptr<configdecoder::ObjType>*)local_a0);
                                            lVar13 = ((lVar13 + 104))->end();
                                            lVar14 = local_c0->end();
                                            if (lVar13 == lVar14) {
                                                uVar20 = 0;
                                                while (true) {
                                                    lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                                        (shared_ptr<configdecoder::ObjType>*)local_a0);
                                                    uVar15 = ((lVar13 + 80))->end();
                                                    if (uVar15 <= uVar20)
                                                        break;
                                                    plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                                        (shared_ptr<dash3d::ModelUnlit>*)&local_100);
                                                    lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                                        (shared_ptr<configdecoder::ObjType>*)local_a0);
                                                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                                        (Array<short, eastl::allocator>*)(lVar13 + 104), uVar20);
                                                    sVar1 = *psVar16;
                                                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                                        (Array<short, eastl::allocator>*)local_c0, uVar20);
                                                    (**(code**)(*plVar10 + 160))(plVar10, (int)sVar1, (int)*psVar16);
                                                    uVar20 = uVar20 + 1;
                                                }
                                            }
                                        }
                                    }
                                    local_c0 = local_c0 + 24;
                                    cVar4 = local_c0->empty();
                                    if (cVar4 == '\0') {
                                        lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)local_a0);
                                        cVar4 = ((lVar13 + 128))->empty();
                                        if (cVar4 == '\0') {
                                            lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                                (shared_ptr<configdecoder::ObjType>*)local_a0);
                                            lVar13 = ((lVar13 + 152))->end();
                                            lVar14 = local_c0->end();
                                            if (lVar13 == lVar14) {
                                                uVar20 = 0;
                                                while (true) {
                                                    lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                                        (shared_ptr<configdecoder::ObjType>*)local_a0);
                                                    uVar15 = ((lVar13 + 128))->end();
                                                    if (uVar15 <= uVar20)
                                                        break;
                                                    plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                                        (shared_ptr<dash3d::ModelUnlit>*)&local_100);
                                                    lVar13 = shared_ptr<configdecoder::ObjType>::operator->(
                                                        (shared_ptr<configdecoder::ObjType>*)local_a0);
                                                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                                        (Array<short, eastl::allocator>*)(lVar13 + 152), uVar20);
                                                    sVar1 = *psVar16;
                                                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                                        (Array<short, eastl::allocator>*)local_c0, uVar20);
                                                    (**(code**)(*plVar10 + 168))(plVar10, (int)sVar1, (int)*psVar16);
                                                    uVar20 = uVar20 + 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            psVar12 = (shared_ptr<dash3d::ModelUnlit>*)
                                eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                                    (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&local_e8,
                                    (long)iVar22);
                            shared_ptr<dash3d::ModelUnlit>::operator=(psVar12, &local_100);
                            iVar22 = iVar22 + 1;
                            local_100.~shared_ptr();
                            local_a0->~shared_ptr();
                        }
                        uVar19 = uVar19 + 1;
                    } while (uVar19 != 12);
                    local_a0->Combine((vector*)&local_e8);
                    this_00 = &local_a8->field_176;
                    uVar19 = 0;
                    do {
                        piVar8 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_00,
                            uVar19);
                        iVar22 = *piVar8;
                        pvVar17 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            std::array<Array<short, eastl::allocator>, 5ul>::operator[](
                                (array<Array<short, eastl::allocator>, 5ul>*)&m_recol1d, uVar19);
                        iVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                        if (iVar22 < iVar5) {
                            plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                (shared_ptr<dash3d::ModelUnlit>*)local_a0);
                            psVar16 =
                                (short*)std::array<short, 5ul>::operator[]((array<short, 5ul>*)&m_recol1s, uVar19);
                            sVar1 = *psVar16;
                            piVar8 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar19);
                            psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)pvVar17, (long)*piVar8);
                            (**(code**)(*plVar10 + 160))(plVar10, (int)sVar1, (int)*psVar16);
                        }
                        piVar8 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_00,
                            uVar19);
                        iVar22 = *piVar8;
                        pvVar17 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            std::array<Array<short, eastl::allocator>, 5ul>::operator[](
                                (array<Array<short, eastl::allocator>, 5ul>*)&m_recol2d, uVar19);
                        iVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                        if (iVar22 < iVar5) {
                            plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                (shared_ptr<dash3d::ModelUnlit>*)local_a0);
                            psVar16 =
                                (short*)std::array<short, 5ul>::operator[]((array<short, 5ul>*)&m_recol2s, uVar19);
                            sVar1 = *psVar16;
                            piVar8 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar19);
                            psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)pvVar17, (long)*piVar8);
                            (**(code**)(*plVar10 + 160))(plVar10, (int)sVar1, (int)*psVar16);
                        }
                        uVar23 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 32);
                        uVar19 = uVar19 + 1;
                    } while (uVar19 != 5);
                    plVar10 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_a0);
                    (**(code**)(*plVar10 + 72))(&local_100, plVar10, 64, 850, 4294967266, 4294967246,
                                                CONCAT44(uVar23, 4294967266));
                    shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_b8, &local_100);
                    pSVar6 = local_a8;
                    pMVar18 = local_c8;
                    local_100.~shared_ptr();
                    psVar9 = &local_b8;
                    local_100._0_8_ = lVar21;
                    m_modelCache.Put(psVar9, 1, (ulonglong*)&local_100);
                    *(long*)&pSVar6->field_256 = lVar21;
                    local_a0->~shared_ptr();
                    local_e8.~vector();
                }
                goto LAB_100205b7e;
            }
            if (*(long*)&local_a8->field_256 != -1) {
                local_e8._0_8_ = *(long*)&local_a8->field_256;
                psVar9 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Find(
                    (ulonglong*)&m_modelCache);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_b8, psVar9);
                bVar3 = operator!=(&local_b8, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_b8);
                    cVar4 = (**(code**)(*plVar10 + 56))(plVar10);
                    if (dash3d::g_usingRSeven != cVar4) {
                        shared_ptr<dash3d::ModelLit>::reset();
                    }
                }
            }
            bVar3 = operator==(&local_b8, (_func_decltype_nullptr*)0);
            if (!bVar3)
                goto LAB_1002055da;
            new (this) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
        } else {
        LAB_100205b7e:
            new (&local_e8) shared_ptr<worldmap::WorldmapAreaMetadata>(psVar9);
            if (pMVar18 == (ModelLit*)0 && local_f0 == (ModelLit*)0) {
                plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_b8);
                (**(code**)(*plVar10 + 80))(local_a0, plVar10, 1, 1);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_e8,
                                                        (shared_ptr*)local_a0);
            } else if ((pMVar18 == (ModelLit*)0) || (local_f0 == (ModelLit*)0)) {
                if (pMVar18 == (ModelLit*)0) {
                    iVar22 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_b8);
                    local_a0->AnimateModel(local_f0, iVar22, local_cc);
                    shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_e8,
                                                            (shared_ptr*)local_a0);
                } else {
                    iVar22 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_b8);
                    local_a0->AnimateModel(pMVar18, iVar22, (uint)param_3);
                    shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_e8,
                                                            (shared_ptr*)local_a0);
                }
            } else {
                iVar22 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_b8);
                local_a0->SplitAnimateModel(pMVar18, iVar22, (SeqType*)(ulong)(uint)param_3, (int)local_f0);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_e8,
                                                        (shared_ptr*)local_a0);
            }
            local_a0->~shared_ptr();
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_e8);
            local_e8.~shared_ptr();
        }
        local_b8.~shared_ptr();
        ((local_a0 + 16))->~fixed_vector();
    LAB_100205cf5:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1002061d0, 240 bytes, placed by class name
    // PlayerModel::GetHeadModelCacheId()
    int PlayerModel::GetHeadModelCacheId() {
        shared_ptr* this_00;
        int* piVar2;
        shared_ptr local_30;
        ulong local_20;
        int local_14;

        local_20 = field_248;
        if ((ulong)field_240 != 4294967295) {
            local_20 = (ulong)field_240 | 18446744073709486080;
        }
        this_00 = (shared_ptr*)LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Find(
            (ulonglong*)&m_headModelHashToModelCacheID);
        if (operator==(this_00, (_func_decltype_nullptr*)0)) {
            local_14 = m_nextHeadModelCacheID;
            m_nextHeadModelCacheID = m_nextHeadModelCacheID + 1;
            make_shared<int, int&>((jag*)&local_30, &local_14);
            m_headModelHashToModelCacheID.Put(&local_30, 1, &local_20);
            local_30.~shared_ptr();
            m_nextHeadModelCacheID = m_nextHeadModelCacheID % 65535;
        } else {
            piVar2 = (int*)shared_ptr<int>::operator*((shared_ptr<int>*)this_00);
            local_14 = *piVar2;
        }
        return local_14;
    }

    // 0x100206530, 32 bytes, placed by class name
    // PlayerModel::ResetCache()
    void PlayerModel::ResetCache() {
        m_modelCache.Reset();
    }

    // 0x100206590, 112 bytes, placed by class name
    // PlayerModel::SetAppearance(eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&, Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>, bool, eastl::fixed_vector<int, 5ul, true, eastl::allocator> const&, int, int, int)
    void PlayerModel::SetAppearance(fixed_vector* param_1, fixed_vector* param_2, Array* param_4, undefined1 param_5,
                                    fixed_vector* param_6, int param_7, int param_8, undefined4 param_9) {
        Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>::operator=(
            (Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>*)&field_264, param_4);
        field_288 = param_5;
        m_pronoun = param_9;
        SetAppearance(this, param_1, param_2, param_6, param_7, param_8);
    }

    // 0x100226de0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.81
    void ___cxx_global_var_init_81() {
        new (&PlayerModel::m_recol1d) std::array<Array<short, eastl::allocator>, 5ul>();
        ___cxa_atexit(PTR__array_100ee6ea8, &PlayerModel::m_recol1d, 4294967296);
    }

    // 0x100226e20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82() {
        new (&PlayerModel::m_recol2d) std::array<Array<short, eastl::allocator>, 5ul>();
        ___cxa_atexit(PTR__array_100ee6ea8, &PlayerModel::m_recol2d, 4294967296);
    }

    // 0x100226ea0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
        new (&PlayerModel::m_headModelHashToModelCacheID)
            LRUHashCache<int, 16ul, 17ul, false, unsigned long long>(16, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5918, &PlayerModel::m_headModelHashToModelCacheID, 4294967296);
    }

} // namespace jag::oldscape::rs2lib
