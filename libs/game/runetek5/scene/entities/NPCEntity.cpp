// libs/game/runetek5/scene/entities/NPCEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "NPCEntity.h"

namespace jag {
    // 0x100f38875, 11 bytes, __data
    NPCEntity::m_ShowNPCEntity = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // 0x1039b4e48, 1 bytes, __common; zero-initialised
    NPCEntity::m_debugPrimitiveText;

    // 0x1039b4e49, 1 bytes, __common; zero-initialised
    NPCEntity::m_debugPrimitiveTextOnMouseover;

    // 0x1039b4e4a, 1 bytes, __common; zero-initialised
    NPCEntity::m_debugShowNPCRouting;

    // 0x1039b4e4b, 1 bytes, __common; zero-initialised
    NPCEntity::m_debugShowNPCFacing;

    // 0x1039b4e4c, 4 bytes, __common; zero-initialised
    NPCEntity::m_debugShowNPCPosition;

    // 0x1039b4e50, 16 bytes, __common; set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NPCEntity::NullNPC;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NPCEntity::DoReplaceHeld(game::SeqType const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NPCEntity::DoUnreplaceHeld();

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    NPCEntity::GetTrackableType() const;

    // 0x1004178e0, 496 bytes, base-object constructor, placed by class name
    // NPCEntity::NPCEntity(PathingEntityParams const&, game::PlayerVarDomain const*, graphics::GraphNode*, shared_ptr<game::World> const&, game::EntityType, int)
    void NPCEntity::NPCEntity(_func_decltype_nullptr* param_1, ConfigProvider* param_2, undefined8 param_3,
                              undefined8 param_4, undefined4 param_6, undefined4 param_7) {
        int* piVar1;
        int* piVar2;
        int local_40[4];

        new (this) PathingEntity(param_1, param_3, param_4, param_6, param_7);
        new (this) MakeSharedPool<NPCEntity, 64>();
        field_0 = &PTR__NPCEntity_100eff5e0;
        field_8 = &PTR__NPCEntity_100eff828;
        field_4176 = param_2;
        m_nPCTypeID = -1;
        field_4188 = -1;
        new (m_parentNPCType, param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_nPCType, param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_4224) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        new (field_4256) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        field_4288 = 4294967295;
        std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>::unique_ptr<true, void>(
            (unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>*)&field_4296);
        std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>::unique_ptr<true, void>(
            (unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>*)&field_4304);
        new (field_4312) game::EntityHighlightState();
        field_4328 = 8;
        field_4332 = 0;
        field_4336 = 0;
        std::unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>::
            unique_ptr<true, void>((unique_ptr<game::NPCHeadIconCustomisation,
                                               std::default_delete<game::NPCHeadIconCustomisation>>*)&field_4344);
        new (field_4352, param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_visibleCombatLevel = 0;
        m_hiddenOpsMask = 0;
        piVar1 = (int*)(&field_4368)->begin();
        piVar2 = (int*)(&field_4368)->end();
        local_40[0] = 0;
        std::fill<int*, int>(piVar1, piVar2, local_40);
        piVar1 = (int*)(&field_4396)->begin();
        piVar2 = (int*)(&field_4396)->end();
        local_40[1] = 0;
        std::fill<int*, int>(piVar1, piVar2, local_40 + 1);
    }

    // 0x100417ba0, 32 bytes, complete-object constructor, placed by class name
    // NPCEntity::NPCEntity(PathingEntityParams const&, game::PlayerVarDomain const*, graphics::GraphNode*, shared_ptr<game::World> const&, game::EntityType, int)
    void NPCEntity::NPCEntity() {
        NPCEntity();
    }

    // 0x100417bc0, 304 bytes, placed by class name
    // NPCEntity::ToString() const
    void NPCEntity::ToString() {
        uint uVar1;
        bool bVar2;
        uint uVar3;
        GameToken* this_00;
        Vector3T* pVVar4;
        undefined8 uVar5;
        char* pcVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        ulong uVar7;
        undefined1 local_a0[120];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        bVar2 = m_nPCType->operator_cast_to_bool();
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_parentNPCType;
        if (bVar2) {
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_nPCType;
        }
        this_00 = (GameToken*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        uVar1 = field_68;
        pVVar4 = (Vector3T*)(*(code*)field_0[13])(this);
        new (local_a0) game::CoordFine(uVar1, pVVar4);
        new ((local_a0 + 16)) eastl::fixed_string<char, 64, true, eastl::allocator>();
        uVar1 = field_240;
        if (this_00 == (GameToken*)0) {
            uVar7 = 4294967295;
        } else {
            uVar3 = this_00->GetStatus();
            uVar7 = (ulong)uVar3;
        }
        GetDisplayName();
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar6 = game::CoordFine::ToString<64, true>((CoordFine*)local_a0, (fixed_string*)(local_a0 + 16));
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &game::Entity::__m_toString, "{ NPC: slot=%d, type=%d, name=%s, coord=%s }", (ulong)uVar1, uVar7, uVar5,
            pcVar6);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        /* WARNING: Subroutine does not return */
        ((local_a0 + 16))->~fixed_string();
    }

    // 0x100417d00, 576 bytes, placed by class name
    // NPCEntity::GetHeadIcons(HardCodedSprites&)
    undefined1* NPCEntity::GetHeadIcons(HardCodedSprites* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        bool bVar2;
        Layout* this_02;
        vector<unsigned int, eastl::allocator>* this_03;
        Model* this_04;
        JagException* this_05;
        NPCType* this_06;
        long lVar3;
        ulong uVar4;
        int* piVar5;
        undefined4* puVar6;
        Array<game::VarValue, eastl::allocator>* this_07;
        Array<HardCodedSprites::SpriteReference, eastl::allocator>* this_08;
        SpriteReference* pSVar7;
        SpriteReference* this_09;
        uint uVar9;
        ulong uVar10;
        shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>> local_48[16];
        ConfigProvider* local_38;

        this_00 = &field_3552;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            this_01 = &field_4344;
            bVar2 = this_01->operator_cast_to_bool();
            if (bVar2) {
                this_02 = (Layout*)std::unique_ptr<game::NPCHeadIconCustomisation,
                                                   std::default_delete<game::NPCHeadIconCustomisation>>::
                          operator->((unique_ptr<game::NPCHeadIconCustomisation,
                                                 std::default_delete<game::NPCHeadIconCustomisation>>*)this_01);
                this_03 = (vector<unsigned int, eastl::allocator>*)eastl::string::Layout::SSOBeginPtr(this_02,
                                                                                                      (type*)param_1);
            } else {
                this_04 = (Model*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
                this_03 = (vector<unsigned int, eastl::allocator>*)this_04->GetIrradianceEffect();
            }
            bVar2 = this_01->operator_cast_to_bool();
            if (bVar2) {
                this_05 = (JagException*)std::unique_ptr<game::NPCHeadIconCustomisation,
                                                         std::default_delete<game::NPCHeadIconCustomisation>>::
                          operator->((unique_ptr<game::NPCHeadIconCustomisation,
                                                 std::default_delete<game::NPCHeadIconCustomisation>>*)this_01);
                local_38 = (ConfigProvider*)this_05->GetCallstackRaw();
            } else {
                this_06 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
                local_38 = (ConfigProvider*)this_06->GetHeadIconIndex();
            }
            lVar3 = eastl::vector<unsigned int, eastl::allocator>::size(this_03);
            if (lVar3 != 0) {
                uVar9 = 1;
                uVar10 = 0;
                do {
                    piVar5 = (int*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_03,
                            uVar10);
                    if (*piVar5 < 0) {
                    LAB_100417dd0:
                        lVar3 =
                            eastl::vector<HardCodedSprites::SpriteReference,
                                          eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<HardCodedSprites::SpriteReference,
                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar10);
                        *(undefined4*)(lVar3 + 4) = 0;
                        puVar6 = (undefined4*)
                            eastl::vector<HardCodedSprites::SpriteReference,
                                          eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<HardCodedSprites::SpriteReference,
                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar10);
                        *puVar6 = 0;
                        eastl::vector<HardCodedSprites::SpriteReference,
                                      eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<HardCodedSprites::SpriteReference,
                                           eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       this_00,
                                   uVar10);
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                    } else {
                        piVar5 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                local_38,
                            uVar10);
                        if (*piVar5 < 0)
                            goto LAB_100417dd0;
                        puVar6 = (undefined4*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_03,
                            uVar10);
                        local_48->GetSpriteReferencesFromGroupID((int)param_1, SUB41(*puVar6, 0));
                        bVar2 = local_48->operator_cast_to_bool();
                        if (bVar2) {
                            this_07 =
                                (Array<game::VarValue, eastl::allocator>*)
                                    shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator->(
                                        local_48);
                            cVar1 = this_07->empty();
                            if (cVar1 != '\0')
                                goto LAB_100417e83;
                            this_08 = (Array<HardCodedSprites::SpriteReference, eastl::allocator>*)
                                shared_ptr<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::operator*(
                                    local_48);
                            piVar5 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    local_38,
                                uVar10);
                            pSVar7 = (SpriteReference*)
                                Array<HardCodedSprites::SpriteReference, eastl::allocator>::operator[](this_08,
                                                                                                       (long)*piVar5);
                            this_09 = (SpriteReference*)eastl::vector<
                                HardCodedSprites::SpriteReference,
                                eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<HardCodedSprites::SpriteReference,
                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar10);
                            HardCodedSprites::SpriteReference::operator=(this_09, pSVar7);
                        } else {
                        LAB_100417e83:
                            lVar3 = eastl::vector<
                                HardCodedSprites::SpriteReference,
                                eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<HardCodedSprites::SpriteReference,
                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar10);
                            *(undefined4*)(lVar3 + 4) = 0;
                            puVar6 = (undefined4*)eastl::vector<
                                HardCodedSprites::SpriteReference,
                                eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<HardCodedSprites::SpriteReference,
                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar10);
                            *puVar6 = 0;
                            eastl::vector<HardCodedSprites::SpriteReference,
                                          eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<HardCodedSprites::SpriteReference,
                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar10);
                            shared_ptr<graphics::SpriteAtlasReference>::reset();
                        }
                        local_48->~shared_ptr();
                    }
                    uVar10 = (ulong)uVar9;
                    uVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_03);
                    uVar9 = uVar9 + 1;
                } while (uVar10 < uVar4);
            }
        }
        return this_00;
    }

    // 0x100418190, 192 bytes, placed by class name
    // NPCEntity::SetHeadIcon(int, int, int)
    void NPCEntity::SetHeadIcon(int param_1, int param_2, int param_3) {
        NPCHeadIconCustomisation* this_00;
        bool bVar1;
        shared_ptr local_40;

        bVar1 = (&field_4344)->operator_cast_to_bool();
        if (!bVar1) {
            local_40.field_8._0_4_ = param_2;
            bVar1 = m_nPCType->operator_cast_to_bool();
            if (bVar1) {
                std::make_unique<game::NPCHeadIconCustomisation, shared_ptr<game::NPCType>&>(&local_40);
            } else {
                local_40.field_8._7_1_ = 1;
                std::make_unique<game::NPCHeadIconCustomisation, bool>((bool*)&local_40);
            }
            SetHeadIconCustomisation(this, (unique_ptr*)&local_40);
            local_40.~unique_ptr();
            param_2 = (int)local_40.field_8;
        }
        this_00 =
            (NPCHeadIconCustomisation*)
                std::unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>::
                operator->((unique_ptr<game::NPCHeadIconCustomisation,
                                       std::default_delete<game::NPCHeadIconCustomisation>>*)&field_4344);
        this_00->SetSlot(param_1, param_2, param_3);
        ResetHeadIconSprites(this);
    }

    // 0x100418330, 176 bytes, placed by class name
    // NPCEntity::ResetHeadIconSprites()
    void NPCEntity::ResetHeadIconSprites() {
        undefined1* this_00;
        NPCHeadIconCustomisation* pNVar1;
        Model* this_01;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        bool bVar2;
        char cVar3;

        this_00 = &field_4344;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            pNVar1 =
                (NPCHeadIconCustomisation*)std::unique_ptr<game::NPCHeadIconCustomisation,
                                                           std::default_delete<game::NPCHeadIconCustomisation>>::
                operator->(
                    (unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>*)
                        this_00);
            pNVar1->SetType(m_parentNPCType);
            pNVar1 =
                (NPCHeadIconCustomisation*)std::unique_ptr<game::NPCHeadIconCustomisation,
                                                           std::default_delete<game::NPCHeadIconCustomisation>>::
                operator->(
                    (unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>*)
                        this_00);
            cVar3 = pNVar1->HasValidIcons();
            if (cVar3 == '\0') {
                return;
            }
        LAB_1004183ba:
            (&field_3552, 8)->resize();
        } else {
            bVar2 = m_parentNPCType->operator_cast_to_bool();
            if (bVar2) {
                this_01 = (Model*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
                this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                              this_01->GetIrradianceEffect();
                cVar3 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_02);
                if (cVar3 == '\0')
                    goto LAB_1004183ba;
            }
            (&field_3552)->clear();
        }
    }

    // 0x1004183e0, 192 bytes, placed by class name
    // NPCEntity::SetHeadIcons(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&)
    void NPCEntity::SetHeadIcons(fixed_vector* param_1, fixed_vector* param_2) {
        NPCHeadIconCustomisation* this_00;
        bool bVar1;
        unique_ptr local_38[8];

        bVar1 = (&field_4344)->operator_cast_to_bool();
        if (!bVar1) {
            bVar1 = m_nPCType->operator_cast_to_bool();
            if (!bVar1) {
                std::make_unique<game::NPCHeadIconCustomisation,
                                 eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                                 eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&>((fixed_vector*)local_38,
                                                                                               param_1);
                SetHeadIconCustomisation(this, local_38);
                local_38->~unique_ptr();
                return;
            }
            std::make_unique<game::NPCHeadIconCustomisation, shared_ptr<game::NPCType>&>((shared_ptr*)local_38);
            SetHeadIconCustomisation(this, local_38);
            local_38->~unique_ptr();
        }
        this_00 =
            (NPCHeadIconCustomisation*)
                std::unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>::
                operator->((unique_ptr<game::NPCHeadIconCustomisation,
                                       std::default_delete<game::NPCHeadIconCustomisation>>*)&field_4344);
        this_00->SetSlots(param_1, param_2);
        ResetHeadIconSprites(this);
    }

    // 0x100418500, 224 bytes, placed by class name
    // NPCEntity::GetEntityIcon()
    undefined1* NPCEntity::GetEntityIcon() {
        undefined1* this_00;
        int iVar2;
        NPCType* this_01;
        undefined1 local_40[8];
        int local_24;

        this_00 = field_4352;
        if (!this_00->operator_cast_to_bool()) {
            this_01 = (NPCType*)m_nPCType->end();
            if (this_01 != (NPCType*)0) {
                iVar2 = this_01->GetIcon();
                if (iVar2 == -1) {
                    this_01 = (NPCType*)m_parentNPCType->end();
                }
                iVar2 = this_01->GetIcon();
                if (iVar2 != -1) {
                    local_24 = this_01->GetIcon();
                    new (local_40) oldscape::sidebars::SideBarData(0, 0);
                    make_shared<EntityIcon, int, math::Point<int>>((jag*)(local_40 + 8), &local_24, (Point*)local_40);
                    shared_ptr<EntityIcon>::operator=((shared_ptr<EntityIcon>*)this_00, (shared_ptr*)(local_40 + 8));
                    ((local_40 + 8))->~shared_ptr();
                    return this_00;
                }
            }
            shared_ptr<EntityIcon>::reset();
        }
        return this_00;
    }

    // 0x100418740, 128 bytes, placed by class name
    // NPCEntity::GetBasID() const
    ulong NPCEntity::GetBasID() {
        bool bVar1;
        ulong uVar2;
        NPCType* pNVar3;

        uVar2 = (ulong)(uint)field_4288;
        if ((field_4288 == 4294967295) && (uVar2 = (ulong)field_3848, field_3848 == 4294967295)) {
            bVar1 = m_nPCType->operator_cast_to_bool();
            uVar2 = 4294967295;
            if (bVar1) {
                pNVar3 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
                uVar2 = pNVar3->GetBaseAnimationSet();
            }
            if ((int)uVar2 == -1) {
                bVar1 = m_parentNPCType->operator_cast_to_bool();
                uVar2 = 4294967295;
                if (bVar1) {
                    pNVar3 =
                        (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
                    uVar2 = pNVar3->GetBaseAnimationSet();
                }
            }
        }
        return uVar2;
    }

    // 0x1004187d0, 80 bytes, placed by class name
    // NPCEntity::GetOverlayHeight() const
    void NPCEntity::GetOverlayHeight() {
        bool bVar1;
        int iVar2;
        NPCType* this_00;

        bVar1 = m_nPCType->operator_cast_to_bool();
        iVar2 = -1;
        if (bVar1) {
            this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
            iVar2 = this_00->GetOverlayHeight();
        }
        if (iVar2 == -1) {
            GetOverlayHeightPathingEntity();
        }
    }

    // 0x100418830, 144 bytes, placed by class name
    // NPCEntity::SetBodyModel(shared_ptr<graphics::Model> const&)
    void NPCEntity::SetBodyModel(shared_ptr* param_1) {
        ActiveComponent local_50;
        shared_ptr local_30;

        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&local_50) game::BuildRequest<graphics::Model, game::BuildModelMain>(param_1, &local_30);
        game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
            (BuildRequest<graphics::Model, game::BuildModelMain>*)field_4224, (BuildRequest*)&local_50);
        local_50.~ActiveComponent();
        local_30.~shared_ptr();
        field_4168 = 1;
    }

    // 0x1004188f0, 64 bytes, placed by class name
    // NPCEntity::ClearAppearance()
    void NPCEntity::ClearAppearance() {
        ClearAppearance();
        field_4224->Clear();
        field_4256->Clear();
        field_4168 = 1;
        ResetHeadIconSprites(this);
    }

    // 0x100418930, 112 bytes, placed by class name
    // NPCEntity::SetAppearanceNPC(int)
    void NPCEntity::SetAppearanceNPC(int param_1) {
        if (m_nPCTypeID != param_1) {
            shared_ptr<game::NPCType>::reset();
            shared_ptr<game::NPCType>::reset();
            m_nPCTypeID = param_1;
            (*(code*)field_0[54])(this);
            LoadNPCType(this);
        }
        (&field_4344, (NPCHeadIconCustomisation*)0)->reset();
        ResetHeadIconSprites(this);
    }

    // 0x1004189f0, 256 bytes, placed by class name
    // NPCEntity::LoadNPCType()
    void NPCEntity::LoadNPCType() {
        undefined1* this_00;
        undefined1* this_01;
        bool bVar1;
        shared_ptr* psVar3;
        NPCType* this_02;
        bool* pbVar4;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[23];
        char local_21;

        this_00 = m_nPCType;
        bVar1 = this_00->operator_cast_to_bool();
        if ((!bVar1) && (m_nPCTypeID != -1)) {
            psVar3 = game::ConfigProvider::GetConfig<game::NPCType>(field_224, m_nPCTypeID, (DataStatus**)0);
            this_01 = m_parentNPCType;
            shared_ptr<game::NPCType>::operator=((shared_ptr<game::NPCType>*)this_01, psVar3);
            bVar1 = this_01->operator_cast_to_bool();
            if (bVar1) {
                this_02 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
                if (this_02->IsMultiNPC() == '\0') {
                    shared_ptr<game::NPCType>::operator=((shared_ptr<game::NPCType>*)this_00, (shared_ptr*)this_01);
                } else {
                    pbVar4 = (bool*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
                    local_38->GetMultiNPC(pbVar4, (PlayerVarDomain*)&local_21, field_4176);
                    shared_ptr<game::NPCType>::operator=((shared_ptr<game::NPCType>*)this_00, (shared_ptr*)local_38);
                    local_38->~shared_ptr();
                    if (local_21 != '\0') {
                        (*(code*)field_0[54])(this);
                        return;
                    }
                }
                (*(code*)field_0[70])(this);
            }
        }
    }

    // 0x100418b20, 176 bytes, placed by class name
    // NPCEntity::RepeatLastOverrideAnimationFrameWhenFinished(int) const
    ulong NPCEntity::RepeatLastOverrideAnimationFrameWhenFinished(int param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar3;
        Model* this_01;
        Model* this_02;
        ulong uVar4;

        this_00 = field_864;
        pvVar3 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetOverrideAnimationModel();
        this_01 = (Model*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar3);
        if (this_01 == (Model*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("overrideModel",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/NPCEntity.cpp",
                      236, (char*)0);
        }
        iVar2 = this_01->GetExternalID();
        if (iVar2 != m_nPCTypeID) {
            pvVar3 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetDefaultAnimationModel();
            this_02 = (Model*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar3);
            if (this_02 != (Model*)0) {
                iVar2 = this_02->GetExternalID();
                if (iVar2 != m_nPCTypeID) {
                    cVar1 = this_00->HasRequestedDefaultAnimation();
                    uVar4 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
                    if (cVar1 != '\0')
                        goto LAB_100418bbd;
                    cVar1 = this_00->HasRequestedOverrideAnimation();
                    if (cVar1 != '\0')
                        goto LAB_100418bbd;
                }
            }
        }
        uVar4 = 0;
    LAB_100418bbd:
        return uVar4 & 4294967295;
    }

    // 0x100418c10, 736 bytes, placed by class name
    // NPCEntity::SetupNewNPCType()
    void NPCEntity::SetupNewNPCType() {
        undefined1* this_00;
        undefined1* this_01;
        unique_ptr<EntityRoute, std::default_delete<EntityRoute>>* this_02;
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        NPCType* pNVar6;
        ComponentCollection* this_03;
        type* ptVar7;
        GameToken* this_04;
        MSIType* pMVar8;
        EntityRoute* pEVar9;
        long* plVar10;
        Layout* this_05;
        vector* pvVar11;
        undefined1 local_98[24];
        NPCEntity* local_80;
        undefined8 local_78;
        NPCEntity* local_70;
        function<void()> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = m_nPCType;
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
        iVar3 = pNVar6->GetBaseAnimationSet();
        if (iVar3 == -1) {
            bVar1 = m_parentNPCType->operator_cast_to_bool();
            iVar3 = -1;
            if (bVar1) {
                pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
                iVar3 = pNVar6->GetBaseAnimationSet();
            }
        }
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
        iVar4 = pNVar6->GetAnimationStateMachineID();
        field_3872 = iVar4;
        SetBasID(iVar3);
        this_01 = m_parentNPCType;
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
        iVar3 = pNVar6->GetTurnSpeed();
        (field_552, iVar3 * 8)->SetBaseTurnSpeed();
        this_03 = (ComponentCollection*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
        this_03->GetStaticChildren();
        ptVar7 = (type*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        SetDisplayName(ptVar7);
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
        uVar5 = pNVar6->GetVisibleCombatLevel();
        m_visibleCombatLevel = uVar5;
        this_04 = (GameToken*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
        iVar3 = this_04->GetStatus();
        field_4188 = iVar3;
        ResetHeadIconSprites(this);
        field_4168 = 1;
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
        cVar2 = pNVar6->GetWalkSmoothing();
        this_02 = (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160);
        pMVar8 = (MSIType*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
        bVar1 = pMVar8->GetResize();
        if ((bool)cVar2 == bVar1)
            goto LAB_100418eb7;
        pEVar9 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
        iVar3 = pEVar9->Length();
        if (iVar3 != 0) {
            plVar10 = (long*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
            (**(code**)(*plVar10 + 32))(plVar10);
            pEVar9 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
            this_05 = (Layout*)pEVar9->GetLastWaypoint();
            pvVar11 = eastl::string::Layout::SSOBeginPtr(this_05, ptVar7);
            (*(code*)field_0[47])(this, pvVar11, 1);
        }
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
        cVar2 = pNVar6->GetWalkSmoothing();
        if (cVar2 == '\0') {
            pMVar8 = (MSIType*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
            bVar1 = pMVar8->GetResize();
            if (!bVar1)
                goto LAB_100418e06;
            local_70 = (NPCEntity*)((ulong)local_70 & 18446744073709551360);
            std::make_unique<EntityStandardRoute, bool>((bool*)&local_80);
            std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator=(this_02, (unique_ptr*)&local_80);
            local_80.~unique_ptr();
        } else {
        LAB_100418e06:
            pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_01);
            cVar2 = pNVar6->GetWalkSmoothing();
            if (cVar2 != '\0') {
                pMVar8 = (MSIType*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
                bVar1 = pMVar8->GetResize();
                if (!bVar1) {
                    std::make_unique<EntitySmoothRoute>();
                    std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator=(this_02,
                                                                                              (unique_ptr*)&local_80);
                    local_80.~unique_ptr();
                }
            }
        }
        pEVar9 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_02);
        local_80 = (NPCEntity*)PTR_DecrementAnimationRoutePending_100ee5988;
        local_78 = 0;
        local_70 = this;
        std::bind<void (PathingEntity::*)(), NPCEntity*>((_func_void*)local_98, &local_80);
        std::function<void()>::function<std::__bind<void (PathingEntity::*)(), NPCEntity*>, void>(local_68);
        pEVar9->SetWaypointReachedCallback(local_68);
        std::function<void()>::~function(local_68);
    LAB_100418eb7:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100419350, 240 bytes, placed by class name
    // NPCEntity::GetBodyModel(game::BuildRequest<graphics::Model, game::BuildModelMain>&)
    undefined* NPCEntity::GetBodyModel(BuildRequest* param_1) {
        undefined1* this_00;
        RT7Core* pRVar1;
        AssetBuilder* pAVar2;
        char cVar3;
        undefined** ppuVar5;
        NPCType* this_01;
        NPCTypeCustomisation* pNVar6;
        undefined* puVar7;

        this_00 = field_4224;
        cVar3 = this_00->IsTaskDone();
        if (cVar3 == '\0') {
            if (m_nPCType->operator_cast_to_bool()) {
                this_01 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
                pRVar1 = field_208;
                pAVar2 = field_216;
                pNVar6 = (NPCTypeCustomisation*)(&field_4296)->get();
                puVar7 = (undefined*)this_01->GetBodyModels(pRVar1, pAVar2, this_00, pNVar6,
                                                            (PlayerVarDomain*)field_4176, field_224);
                game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
                    (BuildRequest<graphics::Model, game::BuildModelMain>*)param_1, (BuildRequest*)this_00);
                if (puVar7 == DataStatus::READY) {
                    field_4168 = 1;
                    return puVar7;
                }
                return puVar7;
            }
            ppuVar5 = &DataStatus::NOTLOADED;
        } else {
            game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
                (BuildRequest<graphics::Model, game::BuildModelMain>*)param_1, (BuildRequest*)this_00);
            ppuVar5 = &DataStatus::READY;
        }
        return *ppuVar5;
    }

    // 0x100419480, 112 bytes, placed by class name
    // NPCEntity::SetBodyCustomisation(eastl::vector<int, eastl::allocator>&&, eastl::vector<float, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, bool, Array<unsigned char, eastl::allocator>&&)
    void NPCEntity::SetBodyCustomisation(vector* param_1, vector* param_2, vector* param_3, vector* param_4,
                                         vector* param_5, vector* param_6, Array* param_7, Array* param_8, bool param_9,
                                         Array* param_10) {
        jag local_28[15];
        bool local_19;

        local_19 = param_9;
        bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>,
                           eastl::vector<float, eastl::allocator>,
                           eastl::vector<math::Vector3T<float>, eastl::allocator>,
                           eastl::vector<math::Vector3T<float>, eastl::allocator>,
                           eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                           eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                           Array<unsigned short, eastl::allocator>, Array<unsigned short, eastl::allocator>, bool&,
                           Array<unsigned char, eastl::allocator>>(
            local_28, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, &local_19, param_10);
        std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>::operator=(
            (unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>*)&field_4296,
            (unique_ptr*)local_28);
        local_28->~unique_ptr();
    }

    // 0x1004195d0, 160 bytes, placed by class name
    // NPCEntity::GetBodyModelPriority(unsigned int)
    undefined8 NPCEntity::GetBodyModelPriority(uint param_1) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        NXTPixToolkit* this_00;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        CommandLine* this_02;
        CommandLine* pCVar4;

        bVar1 = (&field_3784)->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (NXTPixToolkit*)
                          std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::operator->(
                              (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)&field_3784);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)this_00->GetScreen();
            this_02 = (CommandLine*)this_01->data();
            pCVar4 = (CommandLine*)this_01->end();
            for (; this_02 != pCVar4; this_02 = (CommandLine*)&this_02->field_24) {
                cVar2 = this_02->IsValid();
                if ((cVar2 != '\0') && (uVar3 = this_02->GetPos(), param_1 < uVar3)) {
                    return 32768;
                }
            }
        }
        return 4096;
    }

    // 0x1004196c0, 64 bytes, placed by class name
    // NPCEntity::Build(int, bool, PathingEntityPriorityData)
    void NPCEntity::Build(undefined4 param_1, undefined4 param_3, undefined8 param_4) {
        LoadNPCType(this);
        Build(param_1, param_3, param_4);
    }

    // 0x100419700, 208 bytes, placed by class name
    // NPCEntity::GetHeadModel(game::BuildRequest<graphics::Model, game::BuildModelMain>&)
    undefined* NPCEntity::GetHeadModel(BuildRequest* param_1) {
        undefined1* this_00;
        RT7Core* pRVar1;
        AssetBuilder* pAVar2;
        char cVar3;
        NPCType* this_01;
        NPCTypeCustomisation* pNVar4;
        undefined* puVar5;

        this_00 = field_4256;
        cVar3 = this_00->IsTaskDone();
        if (cVar3 == '\0') {
            this_01 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
            pRVar1 = field_208;
            pAVar2 = field_216;
            pNVar4 = (NPCTypeCustomisation*)(&field_4304)->get();
            puVar5 = (undefined*)this_01->GetHeadModels(pRVar1, pAVar2, this_00, pNVar4, (PlayerVarDomain*)field_4176,
                                                        field_224);
            game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
                (BuildRequest<graphics::Model, game::BuildModelMain>*)param_1, (BuildRequest*)this_00);
            if (puVar5 == DataStatus::READY) {
                field_4168 = 1;
            }
        } else {
            game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
                (BuildRequest<graphics::Model, game::BuildModelMain>*)param_1, (BuildRequest*)this_00);
            puVar5 = DataStatus::READY;
        }
        return puVar5;
    }

    // 0x1004197d0, 64 bytes, placed by class name
    // NPCEntity::SetHeadCustomisation(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&)
    void NPCEntity::SetHeadCustomisation(vector* param_1, Array* param_2, Array* param_3) {
        jag local_20[8];

        bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int, eastl::allocator>,
                           Array<unsigned short, eastl::allocator>, Array<unsigned short, eastl::allocator>>(
            local_20, param_1, param_2, param_3);
        std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>::operator=(
            (unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>*)&field_4304,
            (unique_ptr*)local_20);
        local_20->~unique_ptr();
    }

    // 0x100419890, 96 bytes, placed by class name
    // NPCEntity::SetChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&, EntityChatLine::ChatColour, EntityChatLine::ChatEffect)
    void NPCEntity::SetChatLine(undefined8 param_1, undefined4 param_3, undefined4 param_4) {
        long lVar1;
        MapSquare* this_00;
        int iVar2;

        lVar1 = FrameTime::GetCurrentTimeMS();
        this_00 = (MapSquare*)field_224->GetGraphicsDefaults();
        iVar2 = this_00->GetMapSquareZ();
        PathingEntity::SetPathingEntityChatLine(this, param_1, param_3, param_4, (ulong)(uint)(iVar2 * 1000) + lVar1);
    }

    // 0x100419900, 144 bytes, placed by class name
    // NPCEntity::AllowAudio() const
    ulong NPCEntity::AllowAudio() {
        undefined1* this_00;
        bool bVar1;
        NPCType* this_01;
        bool* pbVar3;
        undefined8 unaff_R15;
        undefined7 uVar5;
        ulong uVar4;
        undefined1 local_38[23];
        char local_21;

        this_00 = m_parentNPCType;
        bVar1 = this_00->operator_cast_to_bool();
        uVar5 = (undefined7)((ulong)unaff_R15 >> 8);
        uVar4 = CONCAT71(uVar5, 1);
        if (bVar1) {
            this_01 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
            if (this_01->IsMultiNPC() != '\0') {
                pbVar3 = (bool*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
                local_38->GetMultiNPC(pbVar3, (PlayerVarDomain*)&local_21, field_4176);
                bVar1 = local_38->operator_cast_to_bool();
                uVar4 = CONCAT71(uVar5, local_21 == '\0' && bVar1);
                local_38->~shared_ptr();
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1004199a0, 448 bytes, placed by class name
    // NPCEntity::UpdateAudio()
    bool NPCEntity::UpdateAudio() {
        undefined*** this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        NPCType* this_01;
        shared_ptr* this_02;
        BASType* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        CommandLine* this_05;
        undefined8 uVar6;
        bool bVar7;

        cVar1 = UpdateAudio();
        if (cVar1 == '\0') {
            bVar7 = false;
        } else {
            this_01 = (NPCType*)m_nPCType->end();
            if (this_01 == (NPCType*)0) {
                (*(code*)field_8[3])(&field_8);
            } else {
                iVar2 = this_01->HasBackgroundMovementSound();
                if (iVar2 != 0) {
                    iVar2 = this_01->GetBackgroundSoundReady();
                    iVar3 = (*(code*)field_0[60])(this);
                    if (iVar3 != -1) {
                        this_02 = game::ConfigProvider::GetConfig<game::BASType>(field_224, iVar3, (DataStatus**)0);
                        this_03 = (BASType*)this_02->end();
                        if (this_03 != (BASType*)0) {
                            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                          field_864->GetCurrentAnimation();
                            this_05 = (CommandLine*)
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                            if (((this_05 != (CommandLine*)0) && (cVar1 = this_05->IsReadyAnim(), cVar1 == '\0')) &&
                                (iVar3 = this_05->GetPos(), iVar3 != -1)) {
                                cVar1 = this_03->IsRunAnimation(iVar3);
                                if (cVar1 == '\0') {
                                    cVar1 = this_03->IsCrawlAnimation(iVar3);
                                    if (cVar1 == '\0') {
                                        iVar2 = this_01->GetBackgroundSoundWalk();
                                    } else {
                                        iVar2 = this_01->GetBackgroundSoundCrawl();
                                    }
                                } else {
                                    iVar2 = this_01->GetBackgroundSoundRun();
                                }
                            }
                        }
                    }
                    this_00 = &field_8;
                    cVar1 = this_00->HasSoundInstance(iVar2);
                    if ((cVar1 == '\0') && (1041865114->StopSounds(this_00, 13), -1 < iVar2)) {
                        uVar4 = this_01->GetBackgroundSoundVolume();
                        iVar3 = this_01->GetBackgroundSoundDropoffRange();
                        iVar5 = this_01->GetBackgroundSoundRange();
                        uVar6 = GetWorldPosition();
                        (*(code*)field_8[2])(this_00, iVar2, uVar4, 0, iVar3 << 7, iVar5 << 7, uVar6,
                                             18446744073709551615, 13, 13, field_68, 256);
                    }
                }
            }
            bVar7 = this_01 != (NPCType*)0;
        }
        return bVar7;
    }

    // 0x100419d50, 400 bytes, placed by class name
    // NPCEntity::CalculateWorldPriority(unsigned int, PathingEntityPriorityData) const
    int NPCEntity::CalculateWorldPriority(uint param_1, ulong param_3) {
        undefined1* this_00;
        bool bVar1;
        byte bVar2;
        char cVar3;
        short sVar4;
        HitmarksAndHeadbars* this_01;
        NPCType* pNVar6;
        shared_ptr* this_02;
        ushort uVar7;
        ushort uVar8;

        this_00 = m_parentNPCType;
        bVar1 = this_00->operator_cast_to_bool();
        if ((!bVar1) || (bVar1 = m_nPCType->operator_cast_to_bool(), !bVar1)) {
            this_02 = (shared_ptr*)field_864->GetCurrentModel();
            bVar1 = shared_ptr::operator_cast_to_bool(this_02);
            sVar4 = -1;
            if (bVar1) {
                sVar4 = field_3490;
            }
            goto LAB_100419ecd;
        }
        bVar2 = GetHiddenByOtherEntity();
        uVar7 = (ushort)(bVar2 ^ 1) | (ushort)(param_3 >> 21) & 2048;
        bVar1 = (&field_3784)->operator_cast_to_bool();
        if (bVar1) {
            this_01 = (HitmarksAndHeadbars*)
                          std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::operator->(
                              (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)&field_3784);
            cVar3 = this_01->HasHeadbars(param_1);
            if (cVar3 != '\0') {
                uVar7 = uVar7 | 2;
            }
        }
        if (GetGridSize() < 5) {
            sVar4 = GetGridSize();
            uVar7 = uVar7 + sVar4 * -4 + 20;
        }
        if ((int)param_3 == 1) {
            pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
            cVar3 = pNVar6->IsFamiliar();
            if (cVar3 == '\0') {
            LAB_100419e79:
                uVar7 = uVar7 + 64;
            } else {
                uVar7 = uVar7 + 32;
            }
        } else if ((int)param_3 == 0) {
            pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
            cVar3 = pNVar6->IsFamiliar();
            if (cVar3 != '\0')
                goto LAB_100419e79;
            uVar7 = uVar7 + 128;
        }
        pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
        cVar3 = pNVar6->IsAlwaysOnTop();
        if (cVar3 == '\0') {
            pNVar6 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
            cVar3 = pNVar6->IsAlwaysOnBottom();
            uVar8 = uVar7 + 256;
            if (cVar3 != '\0') {
                uVar8 = uVar7;
            }
        } else {
            uVar8 = uVar7 + 1024;
        }
        uVar7 = uVar8 + 2047;
        if ((param_3 >> 40 & 1) == 0) {
            uVar7 = uVar8;
        }
        sVar4 = uVar7 + 1;
    LAB_100419ecd:
        return (int)sVar4;
    }

    // 0x100419f30, 560 bytes, placed by class name
    // NPCEntity::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void NPCEntity::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* puVar1;
        undefined1* this_00;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        ulong uVar7;
        ulong uVar8;
        NPCType* pNVar9;
        bool* pbVar10;
        GameToken* this_01;
        GraphNode* this_02;
        undefined8 local_68[2];
        shared_ptr local_48;
        uint local_38;
        undefined1 local_31;

        puVar1 = m_parentNPCType;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            this_00 = &field_3792;
            cVar3 = this_00->IsInit();
            if (cVar3 != '\0') {
                uVar7 = FrameTime::GetCurrentTimeMS();
                local_38 = param_2;
                uVar8 = this_00->capacity();
                param_2 = local_38;
                if (uVar8 < uVar7) {
                    this_00->Destroy();
                }
            }
            pNVar9 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)puVar1);
            iVar4 = pNVar9->GetGridSize();
            SetGridSize(iVar4);
            pbVar10 = (bool*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)puVar1);
            local_48.GetMultiNPC(pbVar10, (PlayerVarDomain*)&local_31, field_4176);
            bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
            if (bVar2) {
                bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (bVar2) {
                    iVar4 = field_4188;
                    this_01 = (GameToken*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)&local_48);
                    iVar5 = this_01->GetStatus();
                    if (iVar4 != iVar5) {
                        pNVar9 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)puVar1);
                        cVar3 = pNVar9->IsMultiNPC();
                        if (cVar3 != '\0') {
                            (*(code*)field_0[25])(this);
                        }
                        shared_ptr<game::NPCType>::operator=((shared_ptr<game::NPCType>*)m_nPCType, &local_48);
                        (*(code*)field_0[70])(this);
                    }
                }
            } else {
                (*(code*)field_0[25])(this);
                shared_ptr<game::NPCType>::operator=((shared_ptr<game::NPCType>*)m_nPCType, &local_48);
                field_4188 = -1;
            }
            puVar1 = m_nPCType;
            bVar2 = puVar1->operator_cast_to_bool();
            if (bVar2) {
                if (field_524 != '\0') {
                    pNVar9 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)puVar1);
                    iVar4 = pNVar9->GetFadeInDuration();
                    if (iVar4 < 1) {
                        uVar6 = 300;
                    } else {
                        pNVar9 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)puVar1);
                        uVar6 = pNVar9->GetFadeInDuration();
                    }
                    *(undefined4*)&field_520 = uVar6;
                }
                MainLogic(param_1, param_2, param_3);
                (*(code*)field_0[64])(this);
            } else {
                this_02 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                    (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
                local_68[0] = GetSmoothPosition();
                this_02->SetTranslation(local_68);
            }
            local_48.~shared_ptr();
        }
    }

    // 0x10041a1a0, 352 bytes, placed by class name
    // NPCEntity::UpdateAABB()
    void NPCEntity::UpdateAABB() {
        undefined1* this_00;
        byte bVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        GraphicsApp* pGVar6;
        NPCType* this_01;
        AABB* pAVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        NXTPixToolkit* this_03;
        float fVar9;
        undefined1 local_88[48];
        ColourHSL local_58;
        undefined1 local_48[16];
        float local_2c;

        if (field_4168 == '\0') {
            return;
        }
        pGVar6 = (GraphicsApp*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
        if (pGVar6->GetCustomBounding() == 0) {
            this_00 = field_864;
            pGVar6 = (GraphicsApp*)pGVar6->Instance();
            uVar3 = pGVar6->GetFrameCount();
            pGVar6 = (GraphicsApp*)pGVar6->Instance();
            uVar4 = pGVar6->GetLogicTick();
            if (this_00->IsReady(uVar3, uVar4) != '\0') {
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetCurrentModel();
                this_03 = (NXTPixToolkit*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    this_02);
                if (this_03 != (NXTPixToolkit*)0) {
                    pAVar8 = (AABB*)this_03->GetScreen();
                    SetAABB(pAVar8);
                    bVar2 = this_00->HasParticleSystems();
                    bVar2 = bVar2 ^ 1;
                    goto LAB_10041a1fe;
                }
            }
            iVar5 = GetGridSize();
            local_2c = (float)(iVar5 << 7);
            local_48 = ZEXT416((uint)(local_2c * 0.5));
            fVar9 = -(local_2c * 0.5);
            new ((local_88 + 32)) math::ColourHSL(fVar9, 0.0, fVar9);
            new (&local_58) math::ColourHSL((float)local_48._0_4_, local_2c, (float)local_48._0_4_);
            new (local_88) math::AABB((Vector3T*)(local_88 + 32), (Vector3T*)&local_58);
            SetAABB(local_88);
        } else {
            this_01 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
            pAVar8 = (AABB*)this_01->GetCustomBounding();
            SetAABB(pAVar8);
            bVar2 = true;
        LAB_10041a1fe:
            SetNDCProjectionTestEnabled((bool)bVar2);
            field_4168 = 0;
        }
    }

    // 0x10041a340, 64 bytes, placed by class name
    // NPCEntity::UpdateGridSize()
    void NPCEntity::UpdateGridSize() {
        NPCType* this_00;
        int iVar2;

        if (m_parentNPCType->operator_cast_to_bool()) {
            this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
            iVar2 = this_00->GetGridSize();
            SetGridSize(iVar2);
        }
    }

    // 0x10041a380, 64 bytes, placed by class name
    // NPCEntity::UsesTrianglePicking() const
    bool NPCEntity::UsesTrianglePicking() {
        bool bVar1;
        NPCType* this_00;

        bVar1 = m_nPCType->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
            bVar1 = this_00->GetCustomBounding() == 0;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10041a3c0, 64 bytes, placed by class name
    // NPCEntity::UsesFastPickingTests() const
    undefined4 NPCEntity::UsesFastPickingTests() {
        NPCType* this_00;
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = m_nPCType->operator_cast_to_bool();
        uVar2 = CONCAT31(extraout_var, 1);
        if (bVar1) {
            this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
            uVar2 = this_00->UseFastPickingTests();
        }
        return uVar2;
    }

    // 0x10041a410, 256 bytes, placed by class name
    // NPCEntity::PickTest(graphics::PickingHelper&)
    undefined8 NPCEntity::PickTest(PickingHelper* param_1) {
        undefined1* this_00;
        bool bVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Model* this_02;
        NPCType* pNVar4;
        Matrix44T* pMVar5;
        vector* pvVar6;
        undefined8 uVar7;
        bool bVar8;

        if ((*(code*)field_0[15])() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("UsesTrianglePicking()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/NPCEntity.cpp",
                      792, (char*)0);
        }
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_864->GetCurrentModel();
        this_02 = (Model*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (this_02 == (Model*)0) {
            uVar7 = 0;
        } else {
            this_00 = m_nPCType;
            pNVar4 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
            iVar3 = pNVar4->GetRoughBounding();
            bVar8 = true;
            if (iVar3 != 1) {
                pNVar4 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
                iVar3 = pNVar4->GetRoughBounding();
                if (iVar3 == -1) {
                    pNVar4 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
                    iVar3 = pNVar4->GetGridSize();
                    bVar8 = iVar3 == 1;
                } else {
                    bVar8 = false;
                }
            }
            pMVar5 = (Matrix44T*)this_02->GetMaterial();
            pvVar6 = (vector*)this_02->GetBatchList();
            bVar2 = (bool)(*(code*)field_0[16])(this);
            uVar7 = param_1->PickTest(pMVar5, pvVar6, bVar8, bVar2, -1);
        }
        return uVar7;
    }

    // 0x10041a520, 112 bytes, placed by class name
    // NPCEntity::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void NPCEntity::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                           SceneViewData* param_4, EffectManager* param_5) {
        char cVar1;

        DebugPrimitiveOutput(this, param_4);
        cVar1 = (*(code*)field_0[35])(this);
        if (cVar1 != '\0') {
            cVar1 = FilterRenderPasses(this, param_4);
            if (cVar1 != '\0') {
                GatherDrawableElements(param_1, param_2, param_3, param_4, param_5);
            }
        }
    }

    // 0x10041a590, 1312 bytes, placed by class name
    // NPCEntity::DebugPrimitiveOutput(graphics::SceneViewData const&)
    void NPCEntity::DebugPrimitiveOutput(SceneViewData* param_1) {
        undefined1* puVar1;
        NPCEntity* this_00;
        char cVar2;
        bool bVar3;
        undefined4 uVar4;
        uint uVar5;
        uint uVar6;
        Layout* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        ComponentCollection* this_02;
        ComponentCollection* this_03;
        vector* pvVar8;
        float* pfVar9;
        undefined8 uVar10;
        long* plVar11;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_04;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar12;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_05;
        SpotAnimation* this_06;
        shared_ptr* this_07;
        shared_ptr<game::SeqType>* this_08;
        GameToken* this_09;
        NXTPixToolkit* this_10;
        AABB* this_11;
        char* pcVar13;
        type* ptVar14;
        ulong uVar15;
        ulong uVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        SideBarData local_2b0[2];
        allocator local_290[8];
        undefined1 local_288[20];
        float local_274;
        AnimatedModel* local_270;
        NPCEntity* local_268;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ptVar14 = (type*)4;
        cVar2 = param_1->HasRenderPass();
        if (cVar2 != '\0') {
            if ((m_debugPrimitiveText != '\0') ||
                ((m_debugPrimitiveTextOnMouseover != '\0' && (cVar2 = PickTestDebugCursor(), cVar2 != '\0')))) {
                this_01 = (Layout*)GetWorldPosition();
                eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
                pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetNPCType(this);
                this_02 =
                    (ComponentCollection*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        pvVar7);
                pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetParentNPCType(this);
                this_03 =
                    (ComponentCollection*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        pvVar7);
                uVar4 = GetNPCTypeID(this);
                pvVar8 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar14);
                local_270 = (AnimatedModel*)CONCAT44(local_270._4_4_, *(undefined4*)pvVar8);
                local_288._8_8_ = this_01;
                pfVar9 = (float*)this_01->second();
                local_274 = *pfVar9;
                uVar5 = field_240;
                uVar6 = field_68;
                local_268 = this;
                cVar2 = (*(code*)field_0[35])();
                pcVar13 = " HIDDEN";
                if (cVar2 != '\0') {
                    pcVar13 = "";
                }
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_260, "[NPC] %d [%d,%d,%d] %d%s", (ulong)uVar5, (ulong)uVar6,
                            (ulong)((int)(local_270._0_4_ * 0.0078125) & 63),
                            (ulong)((int)(local_274 * 0.0078125) & 63), uVar4, pcVar13);
                if (this_02 != (ComponentCollection*)0) {
                    this_02->GetStaticChildren();
                    cVar2 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar2 == '\0') {
                        this_02->GetStaticChildren();
                        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf((char*)local_260, "(%s)", uVar10);
                    }
                }
                if ((this_03 != (ComponentCollection*)0) && (this_03 != this_02)) {
                    uVar5 = this_03->GetStatus();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "\nMultiNPC Parent: %d", (ulong)uVar5);
                }
                local_270 = (AnimatedModel*)local_268->field_864;
                game::AnimatedModel::DebugOutputAnimationState<
                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(
                    local_270, (basic_string*)local_260);
                puVar1 = &local_268->field_3912;
                bVar3 = puVar1->operator_cast_to_bool();
                if (bVar3) {
                    plVar11 = (long*)shared_ptr<graphics::AnimationStateSystem>::operator->(
                        (shared_ptr<graphics::AnimationStateSystem>*)puVar1);
                    (**(code**)(*plVar11 + 72))(plVar11, local_260);
                }
                puVar1 = &local_268->field_4088;
                this_04 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator>*)puVar1->HeapBeginPtr();
                pcVar12 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator>*)puVar1->end();
                if (this_04 != pcVar12) {
                    uVar16 = 1;
                    do {
                        eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                        this_05 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                            eastl::compressed_pair<
                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                eastl::allocator>::second(this_04);
                        this_06 = (SpotAnimation*)
                            std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::get(
                                this_05);
                        if (this_06 != (SpotAnimation*)0) {
                            uVar5 = this_06->GetEffectAnimID();
                            this_07 = (shared_ptr*)this_06->GetSeqType();
                            bVar3 = shared_ptr::operator_cast_to_bool(this_07);
                            uVar15 = 4294967295;
                            if (bVar3) {
                                this_08 = (shared_ptr<game::SeqType>*)this_06->GetSeqType();
                                this_09 = (GameToken*)shared_ptr<game::SeqType>::operator->(this_08);
                                uVar6 = this_09->GetStatus();
                                uVar15 = (ulong)uVar6;
                            }
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                append_sprintf((char*)local_260, "\nAnim%d: effect:%d seq:%d", uVar16, (ulong)uVar5,
                                               uVar15);
                        }
                        this_04 = this_04 + 16;
                        uVar16 = (ulong)((int)uVar16 + 1);
                    } while (this_04 != pcVar12);
                }
                pvVar7 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_270->GetCurrentModel();
                this_10 = (NXTPixToolkit*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar7);
                if (this_10 == (NXTPixToolkit*)0) {
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "\nModel: NONE");
                } else {
                    this_11 = (AABB*)this_10->GetScreen();
                    uVar5 = this_10->GetExternalID();
                    fVar17 = (float)this_11->GetWidth();
                    fVar18 = (float)this_11->GetLength();
                    fVar19 = (float)this_11->GetHeight();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "\nModel: extID=%d, p=%p size=%d x %d x %d", (ulong)uVar5,
                                       this_10, (ulong)(uint)(int)fVar17, (ulong)(uint)(int)fVar18, (int)fVar19);
                }
                this_00 = local_268;
                plVar11 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar11 != (long*)0) {
                    pcVar13 = (char*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                    eastl::allocator::allocator(local_290, "EASTL basic_string");
                    new (local_2b0) eastl::string(pcVar13, local_290);
                    new (local_288) oldscape::sidebars::SideBarData(-32513, 0);
                    (**(code**)(*plVar11 + 136))(plVar11, local_288._8_8_, local_2b0, local_288);
                    local_2b0->~basic_string();
                }
                plVar11 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar11 != (long*)0) {
                    uVar10 = this_00->GetWorldAABB();
                    oldscape::sidebars::SideBarData::SideBarData(local_2b0, -12566273, 2);
                    (**(code**)(*plVar11 + 72))(plVar11, uVar10, local_2b0);
                }
                /* WARNING: Subroutine does not return */
                local_260->~fixed_string();
            }
            if (m_debugShowNPCRouting != '\0') {
                DebugRenderRouting(4278190335);
            }
            if (m_debugShowNPCFacing != '\0') {
                DebugRenderFacing();
            }
            if (m_debugShowNPCPosition != '\0') {
                DebugRenderPosition(4278190335);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10041aab0, 64 bytes, placed by class name
    // NPCEntity::FilterRenderPasses(graphics::SceneViewData const&)
    undefined8 NPCEntity::FilterRenderPasses(SceneViewData* param_1) {
        NPCType* this_00;

        if (param_1->HasShadowPass() != '\0') {
            this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_nPCType);
            if (this_00->CastsShadows() == 0) {
                return 0;
            }
        }
        return 1;
    }

    // 0x10041aaf0, 272 bytes, placed by class name
    // NPCEntity::NotifyPickable(unsigned int, bool, float)
    void NPCEntity::NotifyPickable(uint param_1, bool param_2, float param_3) {
        int* piVar1;
        shared_ptr<game::World>* psVar2;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar3;
        SceneManager* pSVar4;
        EntityHighlightGlobalState* pEVar5;
        shared_ptr* this_00;
        char cVar6;
        bool bVar7;

        cVar6 = RefreshCachedHighlightType(this, param_1);
        if (cVar6 == '\0') {
            return;
        }
        piVar1 = (int*)game::EntityHighlightVisualConfig::GetDefault(field_4328);
        if (*piVar1 != 2) {
            piVar1 = (int*)game::EntityHighlightVisualConfig::GetDefault(field_4328);
            if (*piVar1 != 1) {
                return;
            }
            this_00 = (shared_ptr*)GetWorld();
            bVar7 = shared_ptr::operator_cast_to_bool(this_00);
            if (!bVar7) {
                return;
            }
            psVar2 = (shared_ptr<game::World>*)GetWorld();
            phVar3 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)shared_ptr<game::World>::operator->(psVar2);
            pSVar4 =
                (SceneManager*)eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                eastl::equal_to<long long>, eastl::hash<long long>,
                                                eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                eastl::prime_rehash_policy, false, true, true>::size(phVar3);
            pEVar5 = (EntityHighlightGlobalState*)pSVar4->GetEntityHighlightGlobalState();
            cVar6 = pEVar5->IsRadialHighlightActive();
            if (cVar6 == '\0') {
                return;
            }
        }
        if (param_2) {
            new (field_4312, param_1) oldscape::ServerConnectionWorkItem();
        } else {
            psVar2 = (shared_ptr<game::World>*)GetWorld();
            phVar3 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)shared_ptr<game::World>::operator->(psVar2);
            pSVar4 =
                (SceneManager*)eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                eastl::equal_to<long long>, eastl::hash<long long>,
                                                eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                eastl::prime_rehash_policy, false, true, true>::size(phVar3);
            pEVar5 = (EntityHighlightGlobalState*)pSVar4->GetEntityHighlightGlobalState();
            (field_4312, pEVar5, param_1)->TryKeepVisible();
        }
        if (param_3 != -1.0) {
            *(float*)field_4312 = param_3;
        }
    }

    // 0x10041ac00, 720 bytes, placed by class name
    // NPCEntity::RefreshCachedHighlightType(unsigned int)
    bool NPCEntity::RefreshCachedHighlightType(uint param_1) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        shared_ptr* psVar11;
        NPCType* pNVar12;
        OldCamera* pOVar13;
        SkyBox* pSVar14;
        shared_ptr<game::World>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_02;
        SceneManager* this_03;
        TextRun* this_04;
        Logger* pLVar15;
        bool bVar16;

        if (param_1 < field_4332) {
        LAB_10041ac19:
            bVar16 = field_4328 != 8;
        } else {
            this_00 = m_nPCType;
            bVar16 = this_00->operator_cast_to_bool();
            if (bVar16) {
                psVar11 = (shared_ptr*)GetWorld();
                bVar16 = shared_ptr::operator_cast_to_bool(psVar11);
                if (bVar16) {
                    psVar11 = (shared_ptr*)field_864->GetCurrentModel();
                    bVar16 = shared_ptr::operator_cast_to_bool(psVar11);
                    if (bVar16) {
                        field_4328 = 8;
                        field_4332 = param_1 + 250;
                        iVar4 = 7;
                        if (field_4336 == '\0') {
                            pNVar12 =
                                (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
                            cVar1 = pNVar12->HasHighlightOverride();
                            if (cVar1 == '\0') {
                                uVar5 = GetHiddenOpsMask(this);
                                pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                    (shared_ptr<game::NPCType>*)this_00);
                                iVar4 = pOVar13->GetCamHeight();
                                pSVar14 =
                                    (SkyBox*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
                                iVar6 = pSVar14->GetPendingSkyID();
                                if (iVar4 < iVar6) {
                                    pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                        (shared_ptr<game::NPCType>*)this_00);
                                    iVar4 = pOVar13->GetCamHeight();
                                    pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                        (shared_ptr<game::NPCType>*)this_00);
                                    iVar6 = pOVar13->GetCamZoom();
                                    if (iVar4 < iVar6) {
                                        pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                            (shared_ptr<game::NPCType>*)this_00);
                                        bVar2 = pOVar13->GetCamHeight();
                                        pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                            (shared_ptr<game::NPCType>*)this_00);
                                        bVar3 = pOVar13->GetCamHeight();
                                        if ((1 << (bVar2 & 31) & uVar5) != 1 << (bVar3 & 31)) {
                                            this_01 = (shared_ptr<game::World>*)GetWorld();
                                            this_02 =
                                                (hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                           eastl::allocator,
                                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                           eastl::equal_to<long long>, eastl::hash<long long>,
                                                           eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                           eastl::prime_rehash_policy, false, true, true>*)
                                                    shared_ptr<game::World>::operator->(this_01);
                                            this_03 = (SceneManager*)eastl::hashtable<
                                                long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                eastl::equal_to<long long>, eastl::hash<long long>,
                                                eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                eastl::prime_rehash_policy, false, true, true>::size(this_02);
                                            this_04 = (TextRun*)this_03->GetEntityHighlightGlobalState();
                                            uVar7 = this_04->GetMaxLineWidth();
                                            iVar4 = this_04->GetCompletedGold();
                                            iVar6 = GetVisibleCombatLevel(this);
                                            bVar16 = false;
                                            if (uVar7 == 1) {
                                                pNVar12 = (NPCType*)shared_ptr<game::NPCType>::operator->(
                                                    (shared_ptr<game::NPCType>*)this_00);
                                                iVar8 = pNVar12->GetReprioritiseAttackOp();
                                                bVar16 = false;
                                                if (iVar8 != 0) {
                                                    bVar16 = iVar4 < iVar6;
                                                }
                                            }
                                            if ((uVar7 & 4294967294) != 2 && !bVar16) {
                                                field_4328 = 4;
                                            }
                                        }
                                    }
                                }
                                if (field_4328 == 8) {
                                    pNVar12 = (NPCType*)shared_ptr<game::NPCType>::operator->(
                                        (shared_ptr<game::NPCType>*)this_00);
                                    cVar1 = pNVar12->IsExamineOnly();
                                    if ((cVar1 == '\0') ||
                                        (game::EntityHighlightGlobalState::m_allowExamineOnlyHighlights != '\0')) {
                                        pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                            (shared_ptr<game::NPCType>*)this_00);
                                        uVar9 = pOVar13->GetCamHeight();
                                        pOVar13 = (OldCamera*)shared_ptr<game::NPCType>::operator->(
                                            (shared_ptr<game::NPCType>*)this_00);
                                        uVar10 = pOVar13->GetCamZoom();
                                        pSVar14 = (SkyBox*)shared_ptr<game::NPCType>::operator->(
                                            (shared_ptr<game::NPCType>*)this_00);
                                        uVar7 = pSVar14->GetPendingSkyID();
                                        pLVar15 = (Logger*)shared_ptr<game::NPCType>::operator->(
                                            (shared_ptr<game::NPCType>*)this_00);
                                        pLVar15->GetLogStreams();
                                        if ((int)uVar7 < 6) {
                                            do {
                                                if (((uVar5 | 1 << (uVar9 & 31) | 1 << (uVar10 & 31)) >> (uVar7 & 31) &
                                                     1) == 0) {
                                                    iVar4 = 3;
                                                    goto LAB_10041acbf;
                                                }
                                                uVar7 = uVar7 + 1;
                                                pLVar15 = (Logger*)shared_ptr<game::NPCType>::operator->(
                                                    (shared_ptr<game::NPCType>*)this_00);
                                                pLVar15->GetLogStreams();
                                            } while (uVar7 != 6);
                                        }
                                    }
                                }
                                goto LAB_10041ac19;
                            }
                            pNVar12 =
                                (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)this_00);
                            iVar4 = pNVar12->GetHighlightOverride();
                        }
                    LAB_10041acbf:
                        field_4328 = iVar4;
                        goto LAB_10041ac19;
                    }
                }
            }
            bVar16 = false;
        }
        return bVar16;
    }

    // 0x10041aed0, 64 bytes, placed by class name
    // NPCEntity::CanRender() const
    undefined8 NPCEntity::CanRender() {
        bool bVar1;
        undefined8 uVar2;

        bVar1 = m_nPCType->operator_cast_to_bool();
        uVar2 = 0;
        if ((bVar1) && (m_ShowNPCEntity != '\0')) {
            uVar2 = CanRender();
        }
        return uVar2;
    }

    // 0x10041af20, 64 bytes, placed by class name
    // NPCEntity::GetWalkSmoothing() const
    undefined8 NPCEntity::GetWalkSmoothing() {
        NPCType* this_00;
        undefined8 uVar2;

        if (m_parentNPCType->operator_cast_to_bool()) {
            this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
            uVar2 = this_00->GetWalkSmoothing();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10041af60, 48 bytes, placed by class name
    // NPCEntity::SetVisibleCombatLevelToParent()
    void NPCEntity::SetVisibleCombatLevelToParent() {
        NPCType* this_00;

        this_00 = (NPCType*)shared_ptr<game::NPCType>::operator->((shared_ptr<game::NPCType>*)m_parentNPCType);
        m_visibleCombatLevel = this_00->GetVisibleCombatLevel();
    }

    // 0x10041b010, 400 bytes, placed by class name
    // NPCEntity::UpdateHighlighting(unsigned int)
    void NPCEntity::UpdateHighlighting(uint param_1) {
        bool bVar1;
        char cVar2;
        byte bVar3;
        shared_ptr* this_00;
        shared_ptr* this_01;
        shared_ptr<game::World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        SceneManager* this_04;
        EntityHighlightGlobalState* this_05;
        EntityHighlightVisualConfig* this_06;
        Model* pMVar4;
        int iVar5;
        float fVar6;
        float local_58[4];
        Vector4T local_48[16];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (shared_ptr*)field_864->GetCurrentModel();
        this_01 = (shared_ptr*)GetWorld();
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                this_02 = (shared_ptr<game::World>*)GetWorld();
                this_03 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                              shared_ptr<game::World>::operator->(this_02);
                this_04 = (SceneManager*)eastl::hashtable<
                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                    eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::size(this_03);
                this_05 = (EntityHighlightGlobalState*)this_04->GetEntityHighlightGlobalState();
                cVar2 = this_05->IsEnabled();
                if (cVar2 != '\0') {
                    iVar5 = field_4328;
                    if (iVar5 == 8) {
                        bVar3 = field_4312->WasInteractedWithRecently();
                        iVar5 = (uint)(bVar3 ^ 1) * 5 + 3;
                    }
                    if (iVar5 == 8) {
                        fVar6 = (float)FrameTime::GetFrameDelta();
                        (field_4312, this_05, fVar6, param_1)->Update();
                    } else {
                        new (local_58) game::EntityHighlightVisualData();
                        this_06 = (EntityHighlightVisualConfig*)game::EntityHighlightVisualConfig::GetDefault(iVar5);
                        if (this_06->field_0 == 2) {
                            new (field_4312, param_1) oldscape::ServerConnectionWorkItem();
                        }
                        fVar6 = (float)FrameTime::GetFrameDelta();
                        (field_4312, this_05, fVar6, param_1)->Update();
                        cVar2 = this_06->Evaluate((EntityHighlightState*)field_4312, this_05,
                                                  (EntityHighlightVisualData*)local_58, 1.0);
                        if (cVar2 != '\0') {
                            pMVar4 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                            pMVar4->SetHighlight(local_58[0], local_48);
                            goto LAB_10041b172;
                        }
                    }
                }
                pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                pMVar4->ClearHighlight();
            }
        }
    LAB_10041b172:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100427240, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&NPCEntity::NullNPC) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5548, &NPCEntity::NullNPC, 4294967296);
    }

} // namespace jag
