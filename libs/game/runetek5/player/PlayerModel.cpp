// libs/game/runetek5/player/PlayerModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerModel.h"

namespace jag::game {
    // 0x100d42d78, 32 bytes, __const
    PlayerModel::BASE_PART_MAP = {8, 11, 4, 6, 9, 7, 10, 0};

    // 0x100d42d98, 32 bytes, __const
    PlayerModel::BASE_PART_MALE = {0, 1, 2, 3, 4, 5, 6, 14};

    // 0x100d42db8, 32 bytes, __const
    PlayerModel::BASE_PART_FEMALE = {7, 8, 9, 10, 11, 12, 13, 15};

    // 0x10005d8c0: the linker folded this into oldscape::OSClientConsoleUI::GetBounds() const, which has identical code
    PlayerModel::GetPlayerRematerialSlots() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    PlayerModel::GetPlayerRecolourSlots() const;

    // 0x1003cf2c0: the linker folded this into MapElementType::GetTextRGBA() const, which has identical code
    PlayerModel::GetGender() const;

    // 0x100494d80, 800 bytes, base-object constructor, placed by class name
    // PlayerModel::PlayerModel(ConfigProvider*, PlayerVarDomain*)
    void PlayerModel::PlayerModel(ConfigProvider* param_1, PlayerVarDomain* param_2) {
        undefined1* this_00;
        Layout* this_01;
        vector* this_02;
        ulong uVar1;
        long lVar2;
        undefined1* puVar3;
        ulong uVar4;
        undefined1* puVar5;
        uint uVar6;

        new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (this) MakeSharedPool<PlayerModel, 32>();
        field_16 = param_1;
        field_24 = param_2;
        new (&field_32) Array<PlayerModelWearSlot, eastl::allocator>();
        new (&field_56) Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>();
        puVar5 = &field_80;
        new (puVar5) Array<unsigned char, eastl::allocator>();
        this_00 = &field_104;
        new (this_00) Array<unsigned char, eastl::allocator>();
        field_128 = -1;
        field_132 = 4294967295;
        field_136 = 64;
        m_playerAppearanceChangedTime = 0;
        new (field_152) PlayerModelReplaceHeldStatus();
        new (field_208) PlayerModelReplaceHeldStatus();
        new (&field_264) PlayerModelCache();
        new (&field_776) PlayerModelCache();
        new (&field_1288, 100, "PlayerModel") AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>();
        eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::vector();
        new (field_9608) BuildRequest<graphics::Model, BuildModelMain>();
        eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::vector();
        new (field_9664) BuildRequest<graphics::Model, BuildModelMain>();
        this_01 = (Layout*)field_16->GetWearposDefaults();
        this_02 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)100);
        uVar1 = this_02->end();
        (&field_32, uVar1, 0)->set_max_size();
        uVar1 = this_02->end();
        (&field_56, uVar1, 0)->set_max_size();
        uVar1 = this_02->end();
        (&field_9584, uVar1)->resize();
        uVar1 = this_02->end();
        (&field_9640, uVar1)->resize();
        puVar5->set_max_size(10, 0);
        lVar2 = puVar5->end();
        if (lVar2 != 0) {
            uVar6 = 1;
            uVar1 = 0;
            do {
                puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)puVar5, uVar1);
                *puVar3 = 0;
                uVar1 = (ulong)uVar6;
                uVar4 = puVar5->end();
                uVar6 = uVar6 + 1;
            } while (uVar1 < uVar4);
        }
        this_00->set_max_size(10, 0);
        lVar2 = this_00->end();
        if (lVar2 != 0) {
            uVar6 = 1;
            uVar1 = 0;
            do {
                puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this_00, uVar1);
                *puVar5 = 0;
                uVar1 = (ulong)uVar6;
                uVar4 = this_00->end();
                uVar6 = uVar6 + 1;
            } while (uVar1 < uVar4);
        }
    }

    // 0x1004954b0, 16 bytes, complete-object constructor, placed by class name
    // PlayerModel::PlayerModel(ConfigProvider*, PlayerVarDomain*): jumps straight to the base-object constructor

    // 0x1004954c0, 400 bytes, placed by class name
    // PlayerModel::SetAppearance(Array<PlayerModelWearSlot, BucketAllocatorEASTL> const&, Array<shared_ptr<ObjTypeCustomisation>, BucketAllocatorEASTL> const&, Array<unsigned char, BucketAllocatorEASTL> const&, Array<unsigned char, BucketAllocatorEASTL> const&, PlayerGender, int)
    void PlayerModel::SetAppearance(Array* param_1, Array* param_2, Array* param_3, Array* param_4, int param_6,
                                    uint param_7) {
        ulong uVar1;
        Array<PlayerModelWearSlot, eastl::allocator> local_48[24];

        Array<PlayerModelWearSlot, eastl::allocator>::Array<BucketAllocatorEASTL>(local_48, param_1);
        Array<PlayerModelWearSlot, eastl::allocator>::operator=(
            (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, (Array*)local_48);
        local_48->~Array();
        Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::Array<BucketAllocatorEASTL>(
            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)local_48, param_2);
        Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator=(
            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, (Array*)local_48);
        local_48->~Array();
        (&field_9584)->clear();
        uVar1 = param_1->end();
        (&field_9584, uVar1)->resize();
        (&field_9640)->clear();
        uVar1 = param_1->end();
        (&field_9640, uVar1)->resize();
        Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(
            (Array<unsigned char, eastl::allocator>*)local_48, param_3);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_80,
                                                          (Array*)local_48);
        local_48->~Array();
        Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(
            (Array<unsigned char, eastl::allocator>*)local_48, param_4);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_104,
                                                          (Array*)local_48);
        local_48->~Array();
        field_128 = param_6;
        field_132 = param_7;
        field_152->Reset();
        field_208->Reset();
        ClearAppearance(this);
        ClearRecolouredCache(this);
        m_playerAppearanceChangedTime = FrameTime::GetCurrentTimeMS();
    }

    // 0x100495740, 16 bytes, placed by class name
    // PlayerModel::GetPlayerAppearanceChangedTime()
    undefined8 PlayerModel::GetPlayerAppearanceChangedTime() {
        return m_playerAppearanceChangedTime;
    }

    // 0x100495750, 176 bytes, placed by class name
    // PlayerModel::SetIDKPart(unsigned int, int)
    void PlayerModel::SetIDKPart(uint param_1, int param_2) {
        undefined1* this_00;
        int* piVar1;
        long lVar2;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar3;
        ulong uVar4;

        piVar1 =
            (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&BASE_PART_MAP, (ulong)param_1);
        uVar4 = (ulong)*piVar1;
        this_00 = &field_32;
        piVar1 = (int*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
            (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, uVar4);
        if (((*piVar1 == -1) || (lVar2 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                     (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, uVar4),
                                 *(int*)(lVar2 + 4) != -1)) ||
            (piVar1 = (int*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                 (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, uVar4),
             *piVar1 != param_2)) {
            piVar1 = (int*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, uVar4);
            *piVar1 = param_2;
            pBVar3 = (BuildRequest<graphics::Model, BuildModelMain>*)
                eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                    (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9584, uVar4);
            pBVar3->Clear();
            pBVar3 = (BuildRequest<graphics::Model, BuildModelMain>*)
                eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                    (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9640, uVar4);
            pBVar3->Clear();
            ClearAppearance(this);
            return;
        }
    }

    // 0x1004958d0, 160 bytes, placed by class name
    // PlayerModel::SetIDKRecolourSlot(unsigned int, unsigned char)
    void PlayerModel::SetIDKRecolourSlot(uint param_1, uchar param_2) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)&field_80, (ulong)param_1);
        if (*puVar1 != param_2) {
            puVar1 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)&field_80, (ulong)param_1);
            *puVar1 = param_2;
            (&field_9584)->clear();
            uVar2 = (&field_32)->end();
            (&field_9584, uVar2)->resize();
            (&field_9640)->clear();
            uVar2 = (&field_32)->end();
            (&field_9640, uVar2)->resize();
            ClearAppearance(this);
            ClearRecolouredCache(this);
        }
    }

    // 0x100495970, 160 bytes, placed by class name
    // PlayerModel::SetIDKRematerialSlot(unsigned int, unsigned char)
    void PlayerModel::SetIDKRematerialSlot(uint param_1, uchar param_2) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)&field_104, (ulong)param_1);
        if (*puVar1 != param_2) {
            puVar1 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)&field_104, (ulong)param_1);
            *puVar1 = param_2;
            (&field_9584)->clear();
            uVar2 = (&field_32)->end();
            (&field_9584, uVar2)->resize();
            (&field_9640)->clear();
            uVar2 = (&field_32)->end();
            (&field_9640, uVar2)->resize();
            ClearAppearance(this);
            ClearRecolouredCache(this);
        }
    }

    // 0x100495a10, 112 bytes, placed by class name
    // PlayerModel::SetGender(PlayerGender)
    void PlayerModel::SetGender(int param_2) {
        ulong uVar1;

        field_128 = param_2;
        (&field_9584)->clear();
        uVar1 = (&field_32)->end();
        (&field_9584, uVar1)->resize();
        (&field_9640)->clear();
        uVar1 = (&field_32)->end();
        (&field_9640, uVar1)->resize();
        ClearAppearance(this);
    }

    // 0x100495a80, 176 bytes, placed by class name
    // PlayerModel::SetObject(unsigned int, int)
    void PlayerModel::SetObject(uint param_1, int param_2) {
        undefined1* this_00;
        long lVar2;
        int* piVar3;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar4;

        if ((param_2 == -1) && (lVar2 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                    (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, (ulong)param_1),
                                *(int*)(lVar2 + 4) == -1)) {
            return;
        }
        this_00 = &field_32;
        lVar2 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
            (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, (ulong)param_1);
        if (((*(int*)(lVar2 + 4) == -1) || (piVar3 = (int*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                                (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, (ulong)param_1),
                                            *piVar3 != -1)) ||
            (lVar2 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                 (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, (ulong)param_1),
             *(int*)(lVar2 + 4) != param_2)) {
            lVar2 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                (Array<PlayerModelWearSlot, eastl::allocator>*)this_00, (ulong)param_1);
            *(int*)(lVar2 + 4) = param_2;
            pBVar4 = (BuildRequest<graphics::Model, BuildModelMain>*)
                eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                    (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9584,
                    (ulong)param_1);
            pBVar4->Clear();
            pBVar4 = (BuildRequest<graphics::Model, BuildModelMain>*)
                eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                    (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9640,
                    (ulong)param_1);
            pBVar4->Clear();
            ClearAppearance(this);
            return;
        }
    }

    // 0x100495b30, 1808 bytes, placed by class name
    // PlayerModel::GetBodyModel(bool, graphics::RT7Core&, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&)
    undefined* PlayerModel::GetBodyModel(bool param_1, RT7Core* param_2, AssetBuilder* param_3, BuildRequest* param_4) {
        undefined1* this_00;
        undefined1* this_01;
        ushort uVar1;
        uint uVar2;
        int iVar3;
        ConfigProvider* pCVar4;
        undefined* puVar5;
        bool bVar6;
        char cVar7;
        shared_ptr* psVar8;
        NPCType* this_02;
        undefined* this_03;
        vector* pvVar9;
        Model* pMVar10;
        undefined** ppuVar11;
        long lVar12;
        RT7Core* pRVar13;
        int* piVar14;
        uint* puVar15;
        IDKType* this_04;
        BuildRequest* pBVar16;
        undefined* puVar17;
        ObjType* this_05;
        BuildRequest<graphics::Model, BuildModelMain>* this_06;
        BuildRequest<graphics::Animation, BuildAnimationMain>* this_07;
        BuildRequest<graphics::Animation, BuildAnimationMain>* pBVar18;
        TextureManager* pTVar19;
        undefined7 in_register_00000031;
        char* this_08;
        type* ptVar21;
        bool bVar22;
        bool bVar23;
        RT7Core* pRVar24;
        undefined* local_58;
        shared_ptr local_48;
        ScopedGPUMemoryZone local_38[8];

        this_08 = "PlayerBodyModel";
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "PlayerBodyModel");
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
        LAB_100495bc2:
            this_00 = field_9608;
            cVar7 = this_00->IsTaskDone();
            if (cVar7 == '\0') {
                cVar7 = this_00->IsEmpty();
                if (cVar7 == '\0') {
                    BuildRequest<graphics::Model, BuildModelMain>::operator=(
                        (BuildRequest<graphics::Model, BuildModelMain>*)param_4, (BuildRequest*)this_00);
                } else {
                    cVar7 = graphics::Model::IsReadyToConstruct(param_2);
                    if (cVar7 != '\0') {
                        cVar7 = LoadFromBodyCache(this);
                        if (cVar7 != '\0') {
                            this_08 = this_00;
                            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                                (BuildRequest<graphics::Model, BuildModelMain>*)param_4, (BuildRequest*)this_00);
                            cVar7 = param_4->IsTaskDone();
                            if (cVar7 != '\0') {
                                pvVar9 = param_4->SSOBeginPtr(this_08);
                                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)pvVar9);
                                cVar7 = pMVar10->IsLoaded();
                                if (cVar7 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("model.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              201, (char*)0);
                                }
                                goto LAB_100495c1a;
                            }
                            cVar7 = param_4->IsEmpty();
                            if (cVar7 == '\0')
                                goto LAB_100495cb0;
                        }
                        this_03 = &field_32;
                        this_01 = &field_9584;
                        lVar12 = this_03->end();
                        if (lVar12 == 0) {
                            bVar23 = true;
                            bVar6 = true;
                        } else {
                            bVar23 = true;
                            pRVar13 = (RT7Core*)0;
                            pRVar24 = (RT7Core*)&DAT_00000001;
                            do {
                                this_08 = (char*)pRVar13;
                                piVar14 = (int*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                    (Array<PlayerModelWearSlot, eastl::allocator>*)this_03, (ulong)this_08);
                                if (*piVar14 == -1) {
                                    lVar12 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                        (Array<PlayerModelWearSlot, eastl::allocator>*)this_03, (ulong)this_08);
                                    if (*(int*)(lVar12 + 4) != -1) {
                                        pCVar4 = field_16;
                                        lVar12 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                            (Array<PlayerModelWearSlot, eastl::allocator>*)this_03, (ulong)this_08);
                                        pRVar13 = (RT7Core*)(ulong) * (uint*)(lVar12 + 4);
                                        psVar8 = ConfigProvider::GetConfig<ObjType>(pCVar4, *(uint*)(lVar12 + 4),
                                                                                    (DataStatus**)0);
                                        bVar6 = shared_ptr::operator_cast_to_bool(psVar8);
                                        if (bVar6) {
                                            this_05 =
                                                (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)psVar8);
                                            pBVar16 = (BuildRequest*)eastl::vector<
                                                BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::
                                            operator[]((vector<BuildRequest<graphics::Model, BuildModelMain>,
                                                               BucketAllocatorEASTL>*)this_01,
                                                       (ulong)this_08);
                                            iVar3 = field_128;
                                            psVar8 = (shared_ptr*)
                                                Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                                                    (Array<shared_ptr<ObjTypeCustomisation>,
                                                           eastl::allocator>*)&field_56,
                                                    (ulong)this_08);
                                            uVar1 = field_136;
                                            local_48.shared_from_this();
                                            this_08 = (char*)param_2;
                                            puVar17 = (undefined*)this_05->GetBodyModel(
                                                param_2, param_3, pBVar16, iVar3 == 1, psVar8, uVar1, &local_48);
                                            local_48.~shared_ptr();
                                            bVar6 = false;
                                            bVar22 = false;
                                            if (puVar17 != DataStatus::NOTLOADED) {
                                                bVar22 = bVar23;
                                            }
                                            puVar5 = DataStatus::MISSING;
                                            if (puVar17 != DataStatus::MISSING)
                                                goto LAB_100495d53;
                                            goto LAB_100495d55;
                                        }
                                        goto LAB_100495d50;
                                    }
                                    this_06 = (BuildRequest<graphics::Model, BuildModelMain>*)eastl::vector<
                                        BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::
                                    operator[](
                                        (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)
                                            this_01,
                                        (ulong)this_08);
                                    this_06->Clear();
                                } else {
                                    pCVar4 = field_16;
                                    puVar15 = (uint*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                        (Array<PlayerModelWearSlot, eastl::allocator>*)this_03, (ulong)this_08);
                                    pRVar13 = (RT7Core*)(ulong)*puVar15;
                                    psVar8 = ConfigProvider::GetConfig<IDKType>(pCVar4, *puVar15, (DataStatus**)0);
                                    bVar6 = shared_ptr::operator_cast_to_bool(psVar8);
                                    if (bVar6) {
                                        this_04 =
                                            (IDKType*)shared_ptr<IDKType>::operator->((shared_ptr<IDKType>*)psVar8);
                                        pBVar16 =
                                            (BuildRequest*)eastl::vector<BuildRequest<graphics::Model, BuildModelMain>,
                                                                         BucketAllocatorEASTL>::
                                            operator[]((vector<BuildRequest<graphics::Model, BuildModelMain>,
                                                               BucketAllocatorEASTL>*)this_01,
                                                       (ulong)this_08);
                                        uVar1 = field_136;
                                        local_48.shared_from_this();
                                        this_08 = (char*)param_2;
                                        puVar17 = (undefined*)this_04->GetBodyModel(param_2, param_3, pBVar16, uVar1,
                                                                                    &local_48);
                                        local_48.~shared_ptr();
                                        bVar6 = false;
                                        bVar22 = false;
                                        if (puVar17 != DataStatus::NOTLOADED) {
                                            bVar22 = bVar23;
                                        }
                                        puVar5 = DataStatus::MISSING;
                                        if (puVar17 != DataStatus::MISSING)
                                            goto LAB_100495d53;
                                    } else {
                                    LAB_100495d50:
                                        this_08 = (char*)pRVar13;
                                        bVar22 = false;
                                    LAB_100495d53:
                                        bVar23 = bVar22;
                                        bVar6 = true;
                                        puVar5 = local_58;
                                    }
                                LAB_100495d55:
                                    local_58 = puVar5;
                                    if (!bVar6) {
                                        bVar6 = false;
                                        goto LAB_100495fac;
                                    }
                                }
                                pRVar13 = (RT7Core*)this_03->end();
                                bVar6 = pRVar24 < pRVar13;
                                pRVar13 = pRVar24;
                                pRVar24 = (RT7Core*)(ulong)((int)pRVar24 + 1);
                            } while (bVar6);
                            bVar6 = true;
                        LAB_100495fac:
                            this_03 = local_58;
                        }
                        if (!bVar6)
                            goto LAB_100495cc3;
                        if (bVar23) {
                            MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                                &local_48, (MakeSharedPool<graphics::Model, 3072>*)this_08);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->StartTransform();
                            this_07 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_01->HeapBeginPtr();
                            pBVar18 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_01->end();
                            if (this_07 != pBVar18) {
                                do {
                                    cVar7 = this_07->IsEmpty();
                                    if (cVar7 == '\0') {
                                        pvVar9 = this_07->SSOBeginPtr(this_08);
                                        pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)pvVar9);
                                        cVar7 = pMVar10->TransformStarted();
                                        if (cVar7 != '\0') {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("!wearModel.GetAsset()->TransformStarted()",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      288, (char*)0);
                                        }
                                        pvVar9 = this_07->SSOBeginPtr(this_08);
                                        pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)pvVar9);
                                        cVar7 = pMVar10->GetConstructedState();
                                        if (cVar7 != '\x02') {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("wearModel.GetAsset()->GetConstructedState() == "
                                                      "graphics::ModelConstructedState::DATA_AND_MAT",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      289, (char*)0);
                                        }
                                        pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)&local_48);
                                        pvVar9 = this_07->SSOBeginPtr(this_08);
                                        this_08 = (char*)shared_ptr<graphics::Model>::operator*(
                                            (shared_ptr<graphics::Model>*)pvVar9);
                                        pMVar10->Append(this_08);
                                    }
                                    this_07 = this_07 + 32;
                                } while (this_07 != pBVar18);
                            }
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->WeldTouchingBatches();
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->EndTransform(false);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pTVar19 = (TextureManager*)param_2->GetTextureManager();
                            pMVar10->CombineBatches(pTVar19);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->SortSections();
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->CalculateLabelCentres();
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->BakeMaterialInfoAndTextureMetaAndHSLColors(param_2, false);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->ConstructFinishAndUpload();
                            this_00->SetConstructedObj(&local_48);
                            (&field_264, this, (BuildRequest*)this_00)->CacheModelSet();
                            m_playerAppearanceChangedTime = FrameTime::GetCurrentTimeMS();
                            ptVar21 = (type*)this_00;
                            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                                (BuildRequest<graphics::Model, BuildModelMain>*)param_4, (BuildRequest*)this_00);
                            cVar7 = this_00->IsTaskDone();
                            if (cVar7 == '\0') {
                                ppuVar11 = &DataStatus::NOTLOADED;
                            } else {
                                pvVar9 = this_00->SSOBeginPtr(ptVar21);
                                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)pvVar9);
                                cVar7 = pMVar10->IsLoaded();
                                ppuVar11 = &DataStatus::READY;
                                if (cVar7 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_bodyModel.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              312, (char*)0);
                                }
                            }
                            this_03 = *ppuVar11;
                            local_48.~shared_ptr();
                            goto LAB_100495cc3;
                        }
                    }
                }
            LAB_100495cb0:
                ppuVar11 = &DataStatus::NOTLOADED;
            } else {
                pvVar9 = this_00->SSOBeginPtr(this_08);
                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar9);
                cVar7 = pMVar10->IsLoaded();
                if (cVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_bodyModel.GetAsset()->IsLoaded()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "player/PlayerModel.cpp",
                              182, (char*)0);
                }
                BuildRequest<graphics::Model, BuildModelMain>::operator=(
                    (BuildRequest<graphics::Model, BuildModelMain>*)param_4, (BuildRequest*)this_00);
            LAB_100495c1a:
                ppuVar11 = &DataStatus::READY;
            }
        } else {
            uVar2 = field_132;
            this_08 = (char*)(ulong)uVar2;
            if (uVar2 == 4294967295)
                goto LAB_100495bc2;
            psVar8 = ConfigProvider::GetConfig<NPCType>(field_16, uVar2, (DataStatus**)0);
            bVar6 = shared_ptr::operator_cast_to_bool(psVar8);
            if (bVar6) {
                this_02 = (NPCType*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)psVar8);
                this_03 = (undefined*)this_02->GetBodyModels(param_2, param_3, param_4, 0, field_24, field_16);
                goto LAB_100495cc3;
            }
            ppuVar11 = &DataStatus::MISSING;
        }
        this_03 = *ppuVar11;
    LAB_100495cc3:
        local_38->~ScopedGPUMemoryZone();
        return this_03;
    }

    // 0x100496240, 96 bytes, placed by class name
    // PlayerModel::LoadFromBodyCache()
    ulong PlayerModel::LoadFromBodyCache() {
        bool bVar1;
        shared_ptr* this_00;
        undefined7 extraout_var;
        Layout* this_01;
        vector* pvVar2;

        this_00 = (shared_ptr*)(&field_264, this)->GetModelSet();
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            this_01 = (Layout*)shared_ptr<PlayerModelModelSet>::operator->((shared_ptr<PlayerModelModelSet>*)this_00);
            pvVar2 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)(PlayerModel*)this);
            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                (BuildRequest<graphics::Model, BuildModelMain>*)field_9608, (BuildRequest*)pvVar2);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100496530, 1792 bytes, placed by class name
    // PlayerModel::GetHeadModel(bool, graphics::RT7Core&, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, Array<PlayerModelWearSlot, BucketAllocatorEASTL> const&)
    undefined* PlayerModel::GetHeadModel(bool param_1, RT7Core* param_2, AssetBuilder* param_3, BuildRequest* param_4,
                                         Array* param_5) {
        undefined1* this;
        undefined1* this_00;
        ushort uVar1;
        uint uVar2;
        int iVar3;
        ConfigProvider* pCVar4;
        undefined* puVar5;
        bool bVar6;
        char cVar7;
        shared_ptr* psVar8;
        NPCType* this_01;
        undefined* this_02;
        vector* pvVar9;
        Model* pMVar10;
        undefined** ppuVar11;
        long lVar12;
        int* piVar13;
        uint* puVar14;
        IDKType* this_03;
        BuildRequest* pBVar15;
        undefined* puVar16;
        ObjType* this_04;
        BuildRequest<graphics::Model, BuildModelMain>* this_05;
        BuildRequest<graphics::Animation, BuildAnimationMain>* this_06;
        BuildRequest<graphics::Animation, BuildAnimationMain>* pBVar17;
        TextureManager* pTVar18;
        char* this_07;
        undefined7 in_register_00000039;
        PlayerModel* this_08;
        bool bVar21;
        bool bVar22;
        Model* pMVar23;
        undefined* local_58;
        shared_ptr local_48;
        ScopedGPUMemoryZone local_38[8];

        this_08 = (PlayerModel*)CONCAT71(in_register_00000039, param_1);
        this_07 = "PlayerHeadModel";
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "PlayerHeadModel");
        if ((int)param_2 == 0) {
        LAB_1004965c2:
            this = this_08->field_9664;
            cVar7 = IsTaskDone();
            if (cVar7 == '\0') {
                cVar7 = IsEmpty();
                if (cVar7 == '\0') {
                    BuildRequest<graphics::Model, BuildModelMain>::operator=(
                        (BuildRequest<graphics::Model, BuildModelMain>*)param_5, (BuildRequest*)this);
                } else {
                    cVar7 = graphics::Model::IsReadyToConstruct((RT7Core*)param_3);
                    if (cVar7 != '\0') {
                        cVar7 = LoadFromHeadCache(this_08);
                        if (cVar7 != '\0') {
                            this_07 = this;
                            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                                (BuildRequest<graphics::Model, BuildModelMain>*)param_5, (BuildRequest*)this);
                            cVar7 = param_5->IsTaskDone();
                            if (cVar7 != '\0') {
                                pvVar9 = param_5->SSOBeginPtr(this_07);
                                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)pvVar9);
                                cVar7 = pMVar10->IsLoaded();
                                if (cVar7 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("model.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              361, (char*)0);
                                }
                                goto LAB_10049661a;
                            }
                            cVar7 = param_5->IsEmpty();
                            if (cVar7 == '\0')
                                goto LAB_1004966b0;
                        }
                        this_02 = &this_08->field_32;
                        this_00 = &this_08->field_9640;
                        lVar12 = this_02->end();
                        if (lVar12 == 0) {
                            bVar22 = true;
                            bVar6 = true;
                        } else {
                            bVar22 = true;
                            pMVar10 = (Model*)0;
                            pMVar23 = (Model*)&DAT_00000001;
                            do {
                                this_07 = (char*)pMVar10;
                                piVar13 = (int*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                    (Array<PlayerModelWearSlot, eastl::allocator>*)this_02, (ulong)this_07);
                                if (*piVar13 == -1) {
                                    lVar12 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                        (Array<PlayerModelWearSlot, eastl::allocator>*)this_02, (ulong)this_07);
                                    if (*(int*)(lVar12 + 4) != -1) {
                                        pCVar4 = this_08->field_16;
                                        lVar12 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                            (Array<PlayerModelWearSlot, eastl::allocator>*)this_02, (ulong)this_07);
                                        pMVar10 = (Model*)(ulong) * (uint*)(lVar12 + 4);
                                        psVar8 = ConfigProvider::GetConfig<ObjType>(pCVar4, *(uint*)(lVar12 + 4),
                                                                                    (DataStatus**)0);
                                        bVar6 = shared_ptr::operator_cast_to_bool(psVar8);
                                        if (bVar6) {
                                            this_04 =
                                                (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)psVar8);
                                            pBVar15 = (BuildRequest*)eastl::vector<
                                                BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::
                                            operator[]((vector<BuildRequest<graphics::Model, BuildModelMain>,
                                                               BucketAllocatorEASTL>*)this_00,
                                                       (ulong)this_07);
                                            iVar3 = this_08->field_128;
                                            psVar8 = (shared_ptr*)
                                                Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                                                    (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&this_08
                                                        ->field_56,
                                                    (ulong)this_07);
                                            uVar1 = this_08->field_136;
                                            local_48.shared_from_this();
                                            this_07 = (char*)param_3;
                                            puVar16 = (undefined*)this_04->GetHeadModel(
                                                param_3, param_4, pBVar15, iVar3 == 1, psVar8, uVar1, &local_48);
                                            local_48.~shared_ptr();
                                            bVar6 = false;
                                            bVar21 = false;
                                            if (puVar16 != DataStatus::NOTLOADED) {
                                                bVar21 = bVar22;
                                            }
                                            puVar5 = DataStatus::MISSING;
                                            if (puVar16 != DataStatus::MISSING)
                                                goto LAB_100496743;
                                            goto LAB_100496745;
                                        }
                                        goto LAB_100496740;
                                    }
                                    this_05 = (BuildRequest<graphics::Model, BuildModelMain>*)eastl::vector<
                                        BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::
                                    operator[](
                                        (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)
                                            this_00,
                                        (ulong)this_07);
                                    this_05->Clear();
                                } else {
                                    pCVar4 = this_08->field_16;
                                    puVar14 = (uint*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                                        (Array<PlayerModelWearSlot, eastl::allocator>*)this_02, (ulong)this_07);
                                    pMVar10 = (Model*)(ulong)*puVar14;
                                    psVar8 = ConfigProvider::GetConfig<IDKType>(pCVar4, *puVar14, (DataStatus**)0);
                                    bVar6 = shared_ptr::operator_cast_to_bool(psVar8);
                                    if (bVar6) {
                                        this_03 =
                                            (IDKType*)shared_ptr<IDKType>::operator->((shared_ptr<IDKType>*)psVar8);
                                        pBVar15 =
                                            (BuildRequest*)eastl::vector<BuildRequest<graphics::Model, BuildModelMain>,
                                                                         BucketAllocatorEASTL>::
                                            operator[]((vector<BuildRequest<graphics::Model, BuildModelMain>,
                                                               BucketAllocatorEASTL>*)this_00,
                                                       (ulong)this_07);
                                        uVar1 = this_08->field_136;
                                        local_48.shared_from_this();
                                        this_07 = (char*)param_3;
                                        puVar16 = (undefined*)this_03->GetHeadModel(param_3, param_4, pBVar15, uVar1,
                                                                                    &local_48);
                                        local_48.~shared_ptr();
                                        bVar6 = false;
                                        bVar21 = false;
                                        if (puVar16 != DataStatus::NOTLOADED) {
                                            bVar21 = bVar22;
                                        }
                                        puVar5 = DataStatus::MISSING;
                                        if (puVar16 != DataStatus::MISSING)
                                            goto LAB_100496743;
                                    } else {
                                    LAB_100496740:
                                        this_07 = (char*)pMVar10;
                                        bVar21 = false;
                                    LAB_100496743:
                                        bVar22 = bVar21;
                                        bVar6 = true;
                                        puVar5 = local_58;
                                    }
                                LAB_100496745:
                                    local_58 = puVar5;
                                    if (!bVar6) {
                                        bVar6 = false;
                                        goto LAB_10049699c;
                                    }
                                }
                                pMVar10 = (Model*)this_02->end();
                                bVar6 = pMVar23 < pMVar10;
                                pMVar10 = pMVar23;
                                pMVar23 = (Model*)(ulong)((int)pMVar23 + 1);
                            } while (bVar6);
                            bVar6 = true;
                        LAB_10049699c:
                            this_02 = local_58;
                        }
                        if (!bVar6)
                            goto LAB_1004966ba;
                        if (bVar22) {
                            MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                                &local_48, (MakeSharedPool<graphics::Model, 3072>*)this_07);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->StartTransform();
                            this_06 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_00->HeapBeginPtr();
                            pBVar17 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_00->end();
                            if (this_06 != pBVar17) {
                                do {
                                    cVar7 = this_06->IsEmpty();
                                    if (cVar7 == '\0') {
                                        pvVar9 = this_06->SSOBeginPtr(this_07);
                                        pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)pvVar9);
                                        cVar7 = pMVar10->TransformStarted();
                                        if (cVar7 != '\0') {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("!wearModel.GetAsset()->TransformStarted()",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      449, (char*)0);
                                        }
                                        pvVar9 = this_06->SSOBeginPtr(this_07);
                                        pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)pvVar9);
                                        cVar7 = pMVar10->GetConstructedState();
                                        if (cVar7 != '\x02') {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("wearModel.GetAsset()->GetConstructedState() == "
                                                      "graphics::ModelConstructedState::DATA_AND_MAT",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      450, (char*)0);
                                        }
                                        pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)&local_48);
                                        pvVar9 = this_06->SSOBeginPtr(this_07);
                                        this_07 = (char*)shared_ptr<graphics::Model>::operator*(
                                            (shared_ptr<graphics::Model>*)pvVar9);
                                        pMVar10->Append(this_07);
                                    }
                                    this_06 = this_06 + 32;
                                } while (this_06 != pBVar17);
                            }
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->WeldTouchingBatches();
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->EndTransform(false);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pTVar18 = (TextureManager*)param_3->GetTextureManager();
                            pMVar10->CombineBatches(pTVar18);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->SortSections();
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->CalculateLabelCentres();
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->BakeMaterialInfoAndTextureMetaAndHSLColors(param_3, false);
                            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_48);
                            pMVar10->ConstructFinishAndUpload();
                            SetConstructedObj(&local_48);
                            (&this_08->field_776, this_08, (BuildRequest*)this)->CacheModelSet();
                            this_08->m_playerAppearanceChangedTime = FrameTime::GetCurrentTimeMS();
                            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                                (BuildRequest<graphics::Model, BuildModelMain>*)param_5, (BuildRequest*)this);
                            cVar7 = IsTaskDone();
                            if (cVar7 == '\0') {
                                ppuVar11 = &DataStatus::NOTLOADED;
                            } else {
                                pvVar9 = SSOBeginPtr(this);
                                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)pvVar9);
                                cVar7 = pMVar10->IsLoaded();
                                ppuVar11 = &DataStatus::READY;
                                if (cVar7 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_headModel.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              473, (char*)0);
                                }
                            }
                            this_02 = *ppuVar11;
                            local_48.~shared_ptr();
                            goto LAB_1004966ba;
                        }
                    }
                }
                goto LAB_1004966b0;
            }
            pvVar9 = SSOBeginPtr(this_07);
            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar9);
            cVar7 = pMVar10->IsLoaded();
            if (cVar7 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_headModel.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/player/"
                          "PlayerModel.cpp",
                          342, (char*)0);
            }
            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                (BuildRequest<graphics::Model, BuildModelMain>*)param_5, (BuildRequest*)this);
        LAB_10049661a:
            ppuVar11 = &DataStatus::READY;
        } else {
            uVar2 = this_08->field_132;
            this_07 = (char*)(ulong)uVar2;
            if (uVar2 == 4294967295)
                goto LAB_1004965c2;
            psVar8 = ConfigProvider::GetConfig<NPCType>(this_08->field_16, uVar2, (DataStatus**)0);
            bVar6 = shared_ptr::operator_cast_to_bool(psVar8);
            if (bVar6) {
                this_01 = (NPCType*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)psVar8);
                this_02 = (undefined*)this_01->GetHeadModels(param_3, param_4, param_5, 0, this_08->field_24,
                                                             this_08->field_16);
                goto LAB_1004966ba;
            }
        LAB_1004966b0:
            ppuVar11 = &DataStatus::NOTLOADED;
        }
        this_02 = *ppuVar11;
    LAB_1004966ba:
        local_38->~ScopedGPUMemoryZone();
        return this_02;
    }

    // 0x100496c30, 96 bytes, placed by class name
    // PlayerModel::LoadFromHeadCache()
    ulong PlayerModel::LoadFromHeadCache() {
        bool bVar1;
        shared_ptr* this_00;
        undefined7 extraout_var;
        Layout* this_01;
        vector* pvVar2;

        this_00 = (shared_ptr*)(&field_776, this)->GetModelSet();
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            this_01 = (Layout*)shared_ptr<PlayerModelModelSet>::operator->((shared_ptr<PlayerModelModelSet>*)this_00);
            pvVar2 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)(PlayerModel*)this);
            BuildRequest<graphics::Model, BuildModelMain>::operator=(
                (BuildRequest<graphics::Model, BuildModelMain>*)field_9664, (BuildRequest*)pvVar2);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100496c90, 32 bytes, placed by class name
    // PlayerModel::GetPlayerRecolSource() const
    void PlayerModel::GetPlayerRecolSource() {
        OpenGLView* this_00;

        this_00 = (OpenGLView*)field_16->GetGraphicsDefaults();
        this_00->GetCursorMutex();
    }

    // 0x100496cb0, 32 bytes, placed by class name
    // PlayerModel::GetPlayerRecolDest() const
    void PlayerModel::GetPlayerRecolDest() {
        NPCTypeList* this_00;

        this_00 = (NPCTypeList*)field_16->GetGraphicsDefaults();
        this_00->GetBodyModelCache();
    }

    // 0x100496ce0, 32 bytes, placed by class name
    // PlayerModel::GetPlayerRematSource() const
    void PlayerModel::GetPlayerRematSource() {
        RT7Core* this_00;

        this_00 = (RT7Core*)field_16->GetGraphicsDefaults();
        this_00->GetImmediateThreadPool();
    }

    // 0x100496d00, 32 bytes, placed by class name
    // PlayerModel::GetPlayerRematDest() const
    void PlayerModel::GetPlayerRematDest() {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)field_16->GetGraphicsDefaults();
        this_00->GetJointIDMap();
    }

    // 0x100496d20, 128 bytes, placed by class name
    // PlayerModel::DoReplaceHeld(SeqType const&)
    void PlayerModel::DoReplaceHeld(SeqType* param_1) {
        int iVar1;

        iVar1 = param_1->GetReplaceHeldLeft();
        if (iVar1 == -1) {
            UnreplaceHeld(this, true);
        } else {
            iVar1 = param_1->GetReplaceHeldLeft();
            ReplaceHeld(this, iVar1, true);
        }
        iVar1 = param_1->GetReplaceHeldRight();
        if (iVar1 == -1) {
            UnreplaceHeld(this, false);
        } else {
            iVar1 = param_1->GetReplaceHeldRight();
            ReplaceHeld(this, iVar1, false);
        }
    }

    // 0x100496db0, 176 bytes, placed by class name
    // PlayerModel::ReplaceHeld(int, bool)
    undefined8 PlayerModel::ReplaceHeld(int param_1, bool param_2) {
        int iVar1;
        GeometryBatch* this_00;
        Array* pAVar2;
        PlayerModelWearSlot* pPVar3;
        PlayerModelReplaceHeldStatus* pPVar5;

        if (-1 < param_1) {
            this_00 = (GeometryBatch*)field_16->GetWearposDefaults();
            if (param_2) {
                iVar1 = this_00->GetSpriteID();
            } else {
                iVar1 = this_00->GetTint();
            }
            if (iVar1 != -1) {
                pPVar5 = (PlayerModelReplaceHeldStatus*)field_152;
                if (param_2) {
                    pAVar2 = (Array*)this_00->GetDevCredentialsOutputDirectory();
                } else {
                    pAVar2 = (Array*)this_00->GetBoneIDMap();
                    pPVar5 = (PlayerModelReplaceHeldStatus*)field_208;
                }
                pPVar3 = (PlayerModelWearSlot*)Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                    (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, (long)iVar1);
                return ReplaceHeldInner(this, pPVar5, pPVar3, param_1, iVar1, pAVar2);
            }
        }
        return 0;
    }

    // 0x100496e60, 128 bytes, placed by class name
    // PlayerModel::UnreplaceHeld(bool)
    undefined4 PlayerModel::UnreplaceHeld(bool param_1) {
        int iVar1;
        undefined4 uVar2;
        MSIType* this_00;
        PlayerModelReplaceHeldStatus* pPVar3;
        undefined7 in_register_00000031;

        pPVar3 = (PlayerModelReplaceHeldStatus*)field_208;
        if ((int)CONCAT71(in_register_00000031, param_1) != 0) {
            pPVar3 = (PlayerModelReplaceHeldStatus*)field_152;
        }
        if (pPVar3->field_0 == '\0') {
            uVar2 = 0;
        } else {
            this_00 = (MSIType*)field_16->GetWearposDefaults();
            if (param_1) {
                iVar1 = this_00->GetSpriteID();
            } else {
                iVar1 = this_00->GetTint();
            }
            uVar2 = UnreplaceHeldInner(this, pPVar3, iVar1);
            if ((char)uVar2 != '\0') {
                ClearAppearance(this);
            }
        }
        return uVar2;
    }

    // 0x100496ef0, 96 bytes, placed by class name
    // PlayerModel::GetIDKSlot(unsigned int, bool)
    ulong PlayerModel::GetIDKSlot(uint param_1, bool param_2) {
        uint* puVar1;
        ulong uVar2;
        undefined7 in_register_00000031;
        undefined** this;

        this = &BASE_PART_MALE;
        if ((int)CONCAT71(in_register_00000031, param_2) != 0) {
            this = (undefined**)&BASE_PART_FEMALE;
        }
        uVar2 = 0;
        do {
            puVar1 = (uint*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)this, uVar2);
            if (*puVar1 == param_1)
                goto LAB_100496f3f;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        uVar2 = 4294967295;
    LAB_100496f3f:
        return uVar2 & 4294967295;
    }

    // 0x100497030, 608 bytes, placed by class name
    // PlayerModel::ReplaceHeldInner(PlayerModelReplaceHeldStatus&, PlayerModelWearSlot&, int, int, Array<unsigned int, eastl::allocator> const&)
    ulong PlayerModel::ReplaceHeldInner(PlayerModelReplaceHeldStatus* param_1, PlayerModelWearSlot* param_2,
                                        int param_3, int param_4, Array* param_5) {
        int iVar1;
        long lVar4;
        shared_ptr* psVar5;
        uint* puVar6;
        uint* puVar7;
        undefined4* puVar8;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar9;
        ulong uVar10;
        ulong uVar11;
        uint local_38;

        if (param_1->field_0 == '\0') {
            param_1->field_0 = 1;
            lVar4 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, (long)param_4);
            param_1->field_4 = *(undefined4*)(lVar4 + 4);
            psVar5 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, (long)param_4);
            shared_ptr<ObjTypeCustomisation>::operator=((shared_ptr<ObjTypeCustomisation>*)&param_1->field_8, psVar5);
            puVar6 = (uint*)param_5->data();
            puVar7 = (uint*)param_5->end();
            if (puVar6 != puVar7) {
                do {
                    local_38 = *puVar6;
                    puVar8 = (undefined4*)eastl::vector_map<
                        unsigned int, eastl::pair<int, shared_ptr<ObjTypeCustomisation>>, eastl::less<unsigned int>,
                        BucketAllocatorEASTL,
                        eastl::vector<eastl::pair<unsigned int, eastl::pair<int, shared_ptr<ObjTypeCustomisation>>>,
                                      BucketAllocatorEASTL>>::
                    operator[](
                        (vector_map<
                            unsigned int, eastl::pair<int, shared_ptr<ObjTypeCustomisation>>, eastl::less<unsigned int>,
                            BucketAllocatorEASTL,
                            eastl::vector<eastl::pair<unsigned int, eastl::pair<int, shared_ptr<ObjTypeCustomisation>>>,
                                          BucketAllocatorEASTL>>*)&param_1->field_24,
                        &local_38);
                    lVar4 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                        (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, (ulong)local_38);
                    *puVar8 = *(undefined4*)(lVar4 + 4);
                    psVar5 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                        (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, (ulong)local_38);
                    shared_ptr<ObjTypeCustomisation>::operator=((shared_ptr<ObjTypeCustomisation>*)(puVar8 + 2),
                                                                psVar5);
                    puVar6 = puVar6 + 1;
                } while (puVar6 != puVar7);
            }
        }
        iVar1 = *(int*)((long)&param_2->field_0 + 4);
        if (param_3 == 65535) {
            if (iVar1 == -1) {
            LAB_1004971a0:
                uVar11 = 0;
                goto LAB_1004971a3;
            }
            *(undefined4*)((long)&param_2->field_0 + 4) = 4294967295;
        } else {
            if ((iVar1 != -1) && (iVar1 == param_3)) {
                psVar5 = (shared_ptr*)Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                    (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, (long)param_4);
                if (!shared_ptr::operator_cast_to_bool(psVar5))
                    goto LAB_1004971a0;
            }
            *(int*)((long)&param_2->field_0 + 4) = param_3;
        }
        pBVar9 = (BuildRequest<graphics::Model, BuildModelMain>*)
            eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9584,
                (long)param_4);
        pBVar9->Clear();
        pBVar9 = (BuildRequest<graphics::Model, BuildModelMain>*)
            eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9640,
                (long)param_4);
        pBVar9->Clear();
        uVar11 = CONCAT71((int7)(int3)((uint)param_4 >> 8), 1);
    LAB_1004971a3:
        Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, (long)param_4);
        shared_ptr<ObjTypeCustomisation>::reset();
        puVar6 = (uint*)param_5->data();
        puVar7 = (uint*)param_5->end();
        if (puVar6 != puVar7) {
            do {
                uVar10 = (ulong)*puVar6;
                lVar4 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                    (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, uVar10);
                if (*(int*)(lVar4 + 4) != -1) {
                    lVar4 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                        (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, uVar10);
                    *(undefined4*)(lVar4 + 4) = 4294967295;
                    pBVar9 = (BuildRequest<graphics::Model, BuildModelMain>*)
                        eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                            (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9584,
                            uVar10);
                    pBVar9->Clear();
                    pBVar9 = (BuildRequest<graphics::Model, BuildModelMain>*)
                        eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                            (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9640,
                            uVar10);
                    pBVar9->Clear();
                    uVar11 = CONCAT71((int7)(uVar11 >> 8), 1);
                }
                puVar6 = puVar6 + 1;
            } while (puVar6 != puVar7);
        }
        if ((uVar11 & 1) != 0) {
            ClearAppearance(this);
        }
        return uVar11 & 4294967041;
    }

    // 0x1004973f0, 416 bytes, placed by class name
    // PlayerModel::UnreplaceHeldInner(PlayerModelReplaceHeldStatus&, int)
    ulong PlayerModel::UnreplaceHeldInner(PlayerModelReplaceHeldStatus* param_1, int param_2) {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        shared_ptr<ObjTypeCustomisation>* psVar5;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar6;
        uint* puVar7;
        uint* puVar8;
        ulong uVar9;

        uVar9 = (ulong)param_2;
        lVar4 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
            (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, uVar9);
        if (*(int*)(lVar4 + 4) == param_1->field_4) {
            bVar2 = (&param_1->field_8)->operator_cast_to_bool();
            if (!bVar2) {
                uVar9 = 0;
                goto LAB_10049749d;
            }
        }
        *(undefined4*)(lVar4 + 4) = param_1->field_4;
        bVar2 = (&param_1->field_8)->operator_cast_to_bool();
        if (bVar2) {
            psVar5 = (shared_ptr<ObjTypeCustomisation>*)
                Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                    (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, uVar9);
            shared_ptr<ObjTypeCustomisation>::operator=(psVar5, (shared_ptr*)&param_1->field_8);
        }
        pBVar6 = (BuildRequest<graphics::Model, BuildModelMain>*)
            eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9584, uVar9);
        pBVar6->Clear();
        pBVar6 = (BuildRequest<graphics::Model, BuildModelMain>*)
            eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9640, uVar9);
        pBVar6->Clear();
        uVar9 = CONCAT71((int7)(int3)((uint)param_2 >> 8), 1);
    LAB_10049749d:
        this_00 = &param_1->field_24;
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            puVar7 = (uint*)this_00->HeapBeginPtr();
            puVar8 = (uint*)this_00->end();
            uVar9 = CONCAT71((int7)(uVar9 >> 8), 1);
            if (puVar7 != puVar8) {
                do {
                    uVar1 = puVar7[2];
                    lVar4 = Array<PlayerModelWearSlot, eastl::allocator>::operator[](
                        (Array<PlayerModelWearSlot, eastl::allocator>*)&field_32, (ulong)*puVar7);
                    *(uint*)(lVar4 + 4) = uVar1;
                    psVar5 = (shared_ptr<ObjTypeCustomisation>*)
                        Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>::operator[](
                            (Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>*)&field_56, (ulong)*puVar7);
                    shared_ptr<ObjTypeCustomisation>::operator=(psVar5, (shared_ptr*)(puVar7 + 4));
                    pBVar6 = (BuildRequest<graphics::Model, BuildModelMain>*)
                        eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                            (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9584,
                            (ulong)*puVar7);
                    pBVar6->Clear();
                    pBVar6 = (BuildRequest<graphics::Model, BuildModelMain>*)
                        eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>::operator[](
                            (vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>*)&field_9640,
                            (ulong)*puVar7);
                    pBVar6->Clear();
                    puVar7 = puVar7 + 8;
                } while (puVar7 != puVar8);
                uVar9 = CONCAT71((int7)((ulong)puVar8 >> 8), 1);
            }
        }
        param_1->Reset();
        return uVar9 & 4294967295;
    }

} // namespace jag::game
