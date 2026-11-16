// libs/game/runetek5/scene/entities/NPCEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "NPCEntity.h"

namespace jag {
    // 0x100f38875
    uint8_t NPCEntity::m_ShowNPCEntity[11] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // 0x1039b4e48
    bool NPCEntity::m_debugPrimitiveText;

    // 0x1039b4e49
    bool NPCEntity::m_debugPrimitiveTextOnMouseover;

    // 0x1039b4e4a
    bool NPCEntity::m_debugShowNPCRouting;

    // 0x1039b4e4b
    bool NPCEntity::m_debugShowNPCFacing;

    // 0x1039b4e4c
    int32_t NPCEntity::m_debugShowNPCPosition;

    // 0x1039b4e50, set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NPCEntity::NullNPC =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009e70: NPCEntity::DoReplaceHeld(game::SeqType const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: NPCEntity::DoUnreplaceHeld() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100269960: NPCEntity::GetTrackableType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1004178e0
    NPCEntity::NPCEntity(const PathingEntityParams& pathingEntityParams, const game::PlayerVarDomain* playerVarDomain,
                         graphics::GraphNode* graphNode, const shared_ptr<game::World>& world,
                         game::EntityType entityType, int arg6)
        : PathingEntity(pathingEntityParams, graphNode, world, entityType, arg6), MakeSharedPool<NPCEntity, 64>() {
        int local_40[4];

        field_8 = &PTR__NPCEntity_100eff828;
        field_4176 = playerVarDomain;
        m_nPCTypeID = -1;
        field_4188 = -1;
        new (m_parentNPCType) shared_ptr();
        new (m_nPCType) shared_ptr();
        new (field_4224) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        new (field_4256) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        field_4288 = 4294967295;
        field_4296.unique_ptr<true, void>();
        field_4304.unique_ptr<true, void>();
        new (field_4312) game::EntityHighlightState();
        field_4328 = 8;
        field_4332 = 0;
        field_4336 = 0;
        field_4344.unique_ptr<true, void>();
        new (field_4352) shared_ptr();
        m_visibleCombatLevel = 0;
        m_hiddenOpsMask = 0;
        int* piVar1 = std::array<int, 7ul>::begin();
        int* piVar2 = std::array<int, 7ul>::end();
        local_40[0] = 0;
        std::fill<int*, int>(piVar1, piVar2, *local_40);
        piVar1 = std::array<int, 7ul>::begin();
        piVar2 = std::array<int, 7ul>::end();
        local_40[1] = 0;
        std::fill<int*, int>(piVar1, piVar2, *(local_40 + 1));
    }

    // 0x100417bc0
    void NPCEntity::ToString() const {
        unsigned int uVar4;
        uint64_t extraout_var;
        unsigned long uVar7;
        uint8_t local_a0[120];

        bool cVar2 = m_nPCType->operator_cast_to_bool();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_parentNPCType;
        if (cVar2) {
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_nPCType;
        }
        auto this_00 = this_01->end();
        unsigned int uVar1 = field_68;
        uint8_t uVar3 = GetTranslation();
        new (local_a0) game::CoordFine(uVar1, (Vector3T<float>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3));
        new ((local_a0 + 16)) eastl::fixed_string<char, 64>();
        uVar1 = field_240;
        if (this_00 == nullptr) {
            uVar7 = 4294967295;
        } else {
            uVar4 = this_00->GetStatus();
            uVar7 = (unsigned long)uVar4;
        }
        GetDisplayName();
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto pcVar6 = local_a0->ToString<64, true>(*((local_a0 + 16)));
        ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)&game::Entity::__m_toString)
            ->sprintf("{ NPC: slot=%d, type=%d, name=%s, coord=%s }", (unsigned long)uVar1, uVar7, uVar5, pcVar6);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        ((local_a0 + 16))->~fixed_string();
    }

    // 0x100417d00
    uint8_t* NPCEntity::GetHeadIcons(HardCodedSprites& hardCodedSprites) {
        uint8_t* this_01;
        Layout* this_02;
        vector<unsigned int>* this_03;
        Model* this_04;
        JagException* this_05;
        NPCType* this_06;
        long lVar2;
        unsigned long uVar3;
        int* piVar4;
        uint32_t* puVar5;
        Array<HardCodedSprites::SpriteReference>* this_08;
        SpriteReference* spriteReference;
        SpriteReference* this_09;
        unsigned int uVar6;
        unsigned long arg1;
        shared_ptr local_48;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_38;

        uint8_t* this_00 = &field_3552;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            this_01 = &field_4344;
            cVar1 = this_01->operator_cast_to_bool();
            if (!cVar1) {
                this_04 = (Model*)(*m_parentNPCType).operator->();
                this_03 = (vector<unsigned int>*)this_04->GetIrradianceEffect();
            } else {
                this_02 = (Layout*)(*this_01).operator->();
                this_03 = (vector<unsigned int>*)this_02->SSOBeginPtr();
            }
            cVar1 = this_01->operator_cast_to_bool();
            if (!cVar1) {
                this_06 = (NPCType*)(*m_parentNPCType).operator->();
                local_38 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_06->GetHeadIconIndex();
            } else {
                this_05 = (JagException*)(*this_01).operator->();
                local_38 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_05->GetCallstackRaw();
            }
            lVar2 = this_03->size();
            if (lVar2 != 0) {
                uVar6 = 1;
                arg1 = 0;
                do {
                    piVar4 = (int*)(*this_03)[arg1];
                    if (*piVar4 < 0) {
                    LAB_100417dd0:
                        lVar2 = (*this_00)[arg1];
                        *(uint32_t*)(lVar2 + 4) = 0;
                        puVar5 = (uint32_t*)(*this_00)[arg1];
                        *puVar5 = 0;
                        lVar2 = (*this_00)[arg1];
                        ((lVar2 + 8))->reset();
                    } else {
                        piVar4 = (int*)(*local_38)[arg1];
                        if (*piVar4 < 0)
                            goto LAB_100417dd0;
                        piVar4 = (int*)(*this_03)[arg1];
                        local_48 = hardCodedSprites.GetSpriteReferencesFromGroupID(*piVar4, true);
                        cVar1 = shared_ptr::operator_cast_to_bool(&local_48);
                        if (!cVar1) {
                        LAB_100417e83:
                            lVar2 = (*this_00)[arg1];
                            *(uint32_t*)(lVar2 + 4) = 0;
                            puVar5 = (uint32_t*)(*this_00)[arg1];
                            *puVar5 = 0;
                            lVar2 = (*this_00)[arg1];
                            ((lVar2 + 8))->reset();
                        } else {
                            cVar1 = ((Array<game::VarValue>*)local_48.operator->())->empty();
                            if (cVar1)
                                goto LAB_100417e83;
                            this_08 = (Array<HardCodedSprites::SpriteReference>*)*local_48;
                            piVar4 = (int*)(*local_38)[arg1];
                            spriteReference = (SpriteReference*)(*this_08)[(long)*piVar4];
                            this_09 = (SpriteReference*)(*this_00)[arg1];
                            *this_09 = *spriteReference;
                        }
                    }
                    arg1 = (unsigned long)uVar6;
                    uVar3 = this_03->size();
                    uVar6 = uVar6 + 1;
                } while (arg1 < uVar3);
            }
        }
        return this_00;
    }

    // 0x100418190
    void NPCEntity::SetHeadIcon(int arg1, int arg2, int arg3) {
        ReturnValue local_40;
        int local_38;
        bool local_31;

        if (!((&field_4344)->operator_cast_to_bool())) {
            local_38 = arg2;
            if (!(m_nPCType->operator_cast_to_bool())) {
                local_31 = true;
                local_40 = std::make_unique<game::NPCHeadIconCustomisation, bool>(local_31);
            } else {
                local_40 = std::make_unique<game::NPCHeadIconCustomisation, shared_ptr<game::NPCType>&>(*m_nPCType);
            }
            SetHeadIconCustomisation(local_40);
            arg2 = local_38;
        }
        ((NPCHeadIconCustomisation*)field_4344.operator->())->SetSlot(arg1, arg2, arg3);
        ResetHeadIconSprites();
    }

    // 0x100418330
    void NPCEntity::ResetHeadIconSprites() {
        NPCHeadIconCustomisation* pNVar1;
        Model* this_01;

        uint8_t* this_00 = &field_4344;
        bool cVar2 = this_00->operator_cast_to_bool();
        if (!cVar2) {
            cVar2 = m_parentNPCType->operator_cast_to_bool();
            if (cVar2) {
                this_01 = (Model*)(*m_parentNPCType).operator->();
                cVar2 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                             this_01->GetIrradianceEffect())
                            ->empty();
                if (!cVar2)
                    goto LAB_1004183ba;
            }
            field_3552.clear();
        } else {
            pNVar1 = (NPCHeadIconCustomisation*)(*this_00).operator->();
            pNVar1->SetType(*m_parentNPCType);
            pNVar1 = (NPCHeadIconCustomisation*)(*this_00).operator->();
            cVar2 = pNVar1->HasValidIcons();
            if (!cVar2) {
                return;
            }
        LAB_1004183ba:
            field_3552.resize(8);
        }
    }

    // 0x1004183e0
    void NPCEntity::SetHeadIcons(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2) {
        ReturnValue local_38;

        if (!((&field_4344)->operator_cast_to_bool())) {
            if (!(m_nPCType->operator_cast_to_bool())) {
                local_38 = std::make_unique<game::NPCHeadIconCustomisation, eastl::fixed_vector<int, 8ul> const&,
                                            eastl::fixed_vector<int, 8ul> const&>(arg1, arg2);
                SetHeadIconCustomisation(local_38);
                return;
            }
            local_38 = std::make_unique<game::NPCHeadIconCustomisation, shared_ptr<game::NPCType>&>(*m_nPCType);
            SetHeadIconCustomisation(local_38);
        }
        ((NPCHeadIconCustomisation*)field_4344.operator->())->SetSlots(arg1, arg2);
        ResetHeadIconSprites();
    }

    // 0x100418500
    uint8_t* NPCEntity::GetEntityIcon() {
        int iVar2;
        NPCType* this_01;
        uint8_t local_40[8];
        int local_24;

        uint8_t* this_00 = field_4352;
        if (this_00->operator_cast_to_bool() == '\0') {
            this_01 = (NPCType*)m_nPCType->end();
            if (this_01 != nullptr) {
                iVar2 = this_01->GetIcon();
                if (iVar2 == -1) {
                    this_01 = (NPCType*)m_parentNPCType->end();
                }
                iVar2 = this_01->GetIcon();
                if (iVar2 != -1) {
                    local_24 = this_01->GetIcon();
                    new (local_40) oldscape::sidebars::SideBarData(0, 0);
                    make_shared<EntityIcon, int, math::Point<int>>((ReturnValue*)(local_40 + 8), &local_24,
                                                                   (Point<int>*)local_40);
                    *this_00 = (*((local_40 + 8)));
                    ((local_40 + 8))->~shared_ptr();
                    return this_00;
                }
            }
            this_00->reset();
        }
        return this_00;
    }

    // 0x100418740
    unsigned long NPCEntity::GetBasID() const {
        bool cVar1;
        NPCType* pNVar3;

        unsigned long uVar2 = (unsigned long)(unsigned int)field_4288;
        if ((field_4288 == 4294967295) && (uVar2 = (unsigned long)field_3848, field_3848 == 4294967295)) {
            cVar1 = m_nPCType->operator_cast_to_bool();
            uVar2 = 4294967295;
            if (cVar1) {
                pNVar3 = (NPCType*)(*m_nPCType).operator->();
                uVar2 = pNVar3->GetBaseAnimationSet();
            }
            if ((int)uVar2 == -1) {
                cVar1 = m_parentNPCType->operator_cast_to_bool();
                uVar2 = 4294967295;
                if (cVar1) {
                    pNVar3 = (NPCType*)(*m_parentNPCType).operator->();
                    uVar2 = pNVar3->GetBaseAnimationSet();
                }
            }
        }
        return uVar2;
    }

    // 0x1004187d0
    void NPCEntity::GetOverlayHeight() const {
        bool cVar1 = m_nPCType->operator_cast_to_bool();
        int iVar2 = -1;
        if (cVar1) {
            iVar2 = ((NPCType*)(*m_nPCType).operator->())->GetOverlayHeight();
        }
        if (iVar2 == -1) {
            GetOverlayHeightPathingEntity();
        }
    }

    // 0x100418830
    void NPCEntity::SetBodyModel(const shared_ptr<graphics::Model>& model) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        ActiveComponent local_50(model, local_30);
        *field_4224 = local_50;
        field_4168 = 1;
    }

    // 0x1004188f0
    void NPCEntity::ClearAppearance() {
        ClearAppearance();
        field_4224->Clear();
        field_4256->Clear();
        field_4168 = 1;
        ResetHeadIconSprites();
    }

    // 0x100418930
    void NPCEntity::SetAppearanceNPC(int arg1) {
        if (m_nPCTypeID != arg1) {
            m_nPCType->reset();
            m_parentNPCType->reset();
            m_nPCTypeID = arg1;
            ClearAppearance();
            LoadNPCType();
        }
        field_4344.reset(nullptr);
        ResetHeadIconSprites();
    }

    // 0x1004189f0
    void NPCEntity::LoadNPCType() {
        uint8_t* this_01;
        shared_ptr<game::NPCType>* npcType;
        bool* arg1;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;
        char local_21;

        uint8_t* this_00 = m_nPCType;
        bool cVar1 = this_00->operator_cast_to_bool();
        if ((!cVar1) && (m_nPCTypeID != -1)) {
            npcType = field_224->GetConfig<game::NPCType>(m_nPCTypeID, nullptr);
            this_01 = m_parentNPCType;
            *this_01 = *npcType;
            cVar1 = this_01->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((NPCType*)(*this_01).operator->())->IsMultiNPC();
                if (!cVar1) {
                    *this_00 = *this_01;
                } else {
                    arg1 = (bool*)(*this_01).operator->();
                    local_38.GetMultiNPC(*arg1, &local_21, *field_4176);
                    *this_00 = local_38;
                    if (local_21 != '\0') {
                        ClearAppearance();
                        return;
                    }
                }
                SetupNewNPCType();
            }
        }
    }

    // 0x100418b20
    unsigned long NPCEntity::RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const {
        bool cVar1;
        Model* this_02;
        unsigned long uVar4;

        uint8_t* this_00 = field_864;
        auto pvVar3 = this_00->GetOverrideAnimationModel();
        auto this_01 = pvVar3->end();
        if (this_01 == nullptr) {
            LogAssert("overrideModel",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/NPCEntity.cpp",
                      236, nullptr);
        }
        int iVar2 = this_01->GetExternalID();
        if (iVar2 != m_nPCTypeID) {
            pvVar3 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetDefaultAnimationModel();
            this_02 = (Model*)pvVar3->end();
            if (this_02 != nullptr) {
                iVar2 = this_02->GetExternalID();
                if (iVar2 != m_nPCTypeID) {
                    cVar1 = this_00->HasRequestedDefaultAnimation();
                    uVar4 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                    if (cVar1)
                        goto LAB_100418bbd;
                    cVar1 = this_00->HasRequestedOverrideAnimation();
                    if (cVar1)
                        goto LAB_100418bbd;
                }
            }
        }
        uVar4 = 0;
    LAB_100418bbd:
        return uVar4 & 4294967295;
    }

    // 0x100418c10
    void NPCEntity::SetupNewNPCType() {
        bool cVar1;
        bool arg2;
        long* plVar9;
        Layout* this_05;
        uint8_t local_98[24];
        ReturnValue local_80;
        NPCEntity* local_70;
        function<void()> local_68[56];
        long local_30;

        uint8_t* this_00 = m_nPCType;
        NPCType* pNVar6 = (NPCType*)(*this_00).operator->();
        int iVar3 = pNVar6->GetBaseAnimationSet();
        if (iVar3 == -1) {
            cVar1 = m_parentNPCType->operator_cast_to_bool();
            iVar3 = -1;
            if (cVar1) {
                pNVar6 = (NPCType*)(*m_parentNPCType).operator->();
                iVar3 = pNVar6->GetBaseAnimationSet();
            }
        }
        pNVar6 = (NPCType*)(*this_00).operator->();
        int iVar4 = pNVar6->GetAnimationStateMachineID();
        field_3872 = iVar4;
        SetBasID(iVar3);
        uint8_t* this_01 = m_parentNPCType;
        pNVar6 = (NPCType*)(*this_01).operator->();
        iVar3 = pNVar6->GetTurnSpeed();
        field_552->SetBaseTurnSpeed(iVar3 * 8);
        ComponentCollection* this_03 = (ComponentCollection*)(*this_00).operator->();
        this_03->GetStaticChildren();
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        SetDisplayName(str);
        pNVar6 = (NPCType*)(*this_01).operator->();
        uint32_t uVar5 = pNVar6->GetVisibleCombatLevel();
        m_visibleCombatLevel = uVar5;
        GameToken* this_04 = (GameToken*)(*this_00).operator->();
        iVar3 = this_04->GetStatus();
        field_4188 = iVar3;
        ResetHeadIconSprites();
        field_4168 = 1;
        pNVar6 = (NPCType*)(*this_01).operator->();
        cVar1 = pNVar6->GetWalkSmoothing();
        unique_ptr<EntityRoute>* this_02 = (unique_ptr<EntityRoute>*)(field_552 + 160);
        MSIType* pMVar7 = (MSIType*)(*this_02).operator->();
        char cVar2 = pMVar7->GetResize();
        if (cVar1 == cVar2)
            goto LAB_100418eb7;
        EntityRoute* pEVar8 = (EntityRoute*)(*this_02).operator->();
        iVar3 = pEVar8->Length();
        if (iVar3 != 0) {
            plVar9 = (long*)(*this_02).operator->();
            (**(void (**)(...))(*plVar9 + 32))(plVar9);
            pEVar8 = (EntityRoute*)(*this_02).operator->();
            this_05 = (Layout*)pEVar8->GetLastWaypoint();
            arg2 = (bool)this_05->SSOBeginPtr();
            TeleportFine(arg2);
        }
        pNVar6 = (NPCType*)(*this_01).operator->();
        cVar1 = pNVar6->GetWalkSmoothing();
        if (!cVar1) {
            pMVar7 = (MSIType*)(*this_02).operator->();
            cVar1 = pMVar7->GetResize();
            if (!cVar1)
                goto LAB_100418e06;
            local_70 = (NPCEntity*)((unsigned long)local_70 & 18446744073709551360);
            local_80 = std::make_unique<EntityStandardRoute, bool>(local_70);
            std::unique_ptr<EntityRoute>::operator=(
                this_02, (unique_ptr<EntityStandardRoute, std::default_delete<EntityStandardRoute> _>*)&local_80);
        } else {
        LAB_100418e06:
            pNVar6 = (NPCType*)(*this_01).operator->();
            cVar1 = pNVar6->GetWalkSmoothing();
            if (cVar1) {
                pMVar7 = (MSIType*)(*this_02).operator->();
                cVar1 = pMVar7->GetResize();
                if (!cVar1) {
                    local_80 = std::make_unique<EntitySmoothRoute>();
                    std::unique_ptr<EntityRoute>::operator=(
                        this_02, (unique_ptr<EntitySmoothRoute, std::default_delete<EntitySmoothRoute> _>*)&local_80);
                }
            }
        }
        pEVar8 = (EntityRoute*)(*this_02).operator->();
        local_80 = (ReturnValue)PTR_DecrementAnimationRoutePending_100ee5988;
        uint64_t local_78 = 0;
        ReturnValue* arg2_00 = &local_80;
        local_70 = this;
        member_function_ptr mVar10 =
            std::bind<void (PathingEntity::*)(), NPCEntity*>((void__jag__PathingEntity________)local_98, *arg2_00);
        mVar10.ptr = arg2_00;
        local_68->function<std::__bind<void (PathingEntity::*)(), NPCEntity*>, void>(mVar10);
        pEVar8->SetWaypointReachedCallback(local_68);
    LAB_100418eb7:
    }

    // 0x100419350
    uint8_t* NPCEntity::GetBodyModel(game::BuildRequest<graphics::Model, game::BuildModelMain>& buildRequest) {
        RT7Core* assetBuilder;
        AssetBuilder* buildRequest_00;
        uint8_t** ppuVar2;
        RT7Core* rt7Core;
        PlayerVarDomain* playerVarDomain;
        uint8_t* puVar3;

        uint8_t* npcTypeCustomisation = field_4224;
        if (!(npcTypeCustomisation->IsTaskDone())) {
            if (m_nPCType->operator_cast_to_bool()) {
                rt7Core = (RT7Core*)(*m_nPCType).operator->();
                assetBuilder = field_208;
                buildRequest_00 = field_216;
                playerVarDomain = (PlayerVarDomain*)field_4296.get();
                puVar3 = (uint8_t*)game::NPCType::GetBodyModels(rt7Core, *assetBuilder, *buildRequest_00,
                                                                npcTypeCustomisation, playerVarDomain, field_4176);
                buildRequest = *npcTypeCustomisation;
                if (puVar3 == DataStatus::READY) {
                    field_4168 = 1;
                    return puVar3;
                }
                return puVar3;
            }
            ppuVar2 = &DataStatus::NOTLOADED;
        } else {
            buildRequest = *npcTypeCustomisation;
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x100419480
    void NPCEntity::SetBodyCustomisation(eastl::vector<int>&& arg1, eastl::vector<float>&& arg2,
                                         eastl::vector<math::Vector3T<float>>&& vector3s1,
                                         eastl::vector<math::Vector3T<float>>&& vector3s2,
                                         eastl::vector<eastl::vector<int>>&& arg5,
                                         eastl::vector<eastl::vector<int>>&& arg6, Array<unsigned short>&& arg7,
                                         Array<unsigned short>&& arg8, bool arg9, Array<unsigned char>&& arg10) {
        vector<int> local_28;

        Array<unsigned char> local_19 = (Array<unsigned char>)arg9;
        bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int>, eastl::vector<float>,
                           eastl::vector<math::Vector3T<float>>, eastl::vector<math::Vector3T<float>>,
                           eastl::vector<eastl::vector<int>>, eastl::vector<eastl::vector<int>>, Array<unsigned short>,
                           Array<unsigned short>, bool&, Array<unsigned char>>(
            &local_28, (vector<float>*)arg1, (vector<math::Vector3T<float>>*)arg2, vector3s1,
            (vector<eastl::vector<int>>*)vector3s2, arg5, (Array<unsigned short>*)arg6, arg7, (bool*)arg8, &local_19);
        field_4296 = local_28;
    }

    // 0x1004195d0
    uint64_t NPCEntity::GetBodyModelPriority(unsigned int arg1) {
        unsigned int uVar2;
        NXTPixToolkit* this_00;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        CommandLine* this_02;
        CommandLine* pCVar3;

        bool cVar1 = (&field_3784)->operator_cast_to_bool();
        if (cVar1) {
            this_00 = (NXTPixToolkit*)field_3784.operator->();
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_00->GetScreen();
            this_02 = (CommandLine*)this_01->data();
            pCVar3 = (CommandLine*)this_01->end();
            for (; this_02 != pCVar3; this_02 = (CommandLine*)&this_02->field_24) {
                cVar1 = this_02->IsValid();
                if ((cVar1) && (uVar2 = this_02->GetPos(), arg1 < uVar2)) {
                    return 32768;
                }
            }
        }
        return 4096;
    }

    // 0x1004196c0
    void NPCEntity::Build(int arg1, bool arg2, PathingEntityPriorityData pathingEntityPriorityData) {
        LoadNPCType();
        Build(arg1, arg2, pathingEntityPriorityData);
    }

    // 0x100419700
    uint8_t* NPCEntity::GetHeadModel(game::BuildRequest<graphics::Model, game::BuildModelMain>& buildRequest) {
        RT7Core* assetBuilder;
        AssetBuilder* buildRequest_00;
        RT7Core* rt7Core;
        PlayerVarDomain* playerVarDomain;
        uint8_t* puVar2;

        uint8_t* npcTypeCustomisation = field_4256;
        if (npcTypeCustomisation->IsTaskDone() == '\0') {
            rt7Core = (RT7Core*)(*m_nPCType).operator->();
            assetBuilder = field_208;
            buildRequest_00 = field_216;
            playerVarDomain = (PlayerVarDomain*)field_4304.get();
            puVar2 = (uint8_t*)game::NPCType::GetHeadModels(rt7Core, *assetBuilder, *buildRequest_00,
                                                            npcTypeCustomisation, playerVarDomain, field_4176);
            buildRequest = *npcTypeCustomisation;
            if (puVar2 == DataStatus::READY) {
                field_4168 = 1;
            }
        } else {
            buildRequest = *npcTypeCustomisation;
            puVar2 = DataStatus::READY;
        }
        return puVar2;
    }

    // 0x1004197d0
    void NPCEntity::SetHeadCustomisation(eastl::vector<int>&& arg1, Array<unsigned short>&& arg2,
                                         Array<unsigned short>&& arg3) {
        ReturnValue local_20;

        bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int>, Array<unsigned short>,
                           Array<unsigned short>>(&local_20, arg1, arg2, arg3);
        field_4304 = local_20;
    }

    // 0x100419890
    void NPCEntity::SetChatLine(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                EntityChatLine::ChatColour chatColour, EntityChatLine::ChatEffect chatEffect) {
        long lVar1 = FrameTime::GetCurrentTimeMS();
        int iVar2 = ((MapSquare*)field_224->GetGraphicsDefaults())->GetMapSquareZ();
        SetPathingEntityChatLine(str, chatColour, chatEffect, (unsigned long)(unsigned int)(iVar2 * 1000) + lVar1);
    }

    // 0x100419900
    unsigned long NPCEntity::AllowAudio() const {
        uint8_t bVar2;
        bool* arg1;
        uint64_t unaff_R15;
        uint8_t local_38[23];
        char local_21;

        uint8_t* this_00 = m_parentNPCType;
        bool cVar1 = this_00->operator_cast_to_bool();
        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        unsigned long uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        if (cVar1) {
            cVar1 = ((NPCType*)(*this_00).operator->())->IsMultiNPC();
            if (cVar1) {
                arg1 = (bool*)(*this_00).operator->();
                local_38->GetMultiNPC(*arg1, &local_21, *field_4176);
                bVar2 = local_38->operator_cast_to_bool();
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(local_21 == '\0' & bVar2));
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1004199a0
    bool NPCEntity::UpdateAudio() {
        uint8_t*** this_00;
        uint8_t uVar2;
        int iVar3;
        int iVar4;
        uint32_t uVar5;
        int iVar6;
        NPCType* this_01;
        uint64_t extraout_var;
        shared_ptr<game::BASType>* this_02;
        BASType* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        CommandLine* this_05;
        uint64_t uVar7;
        bool bVar8;

        bool cVar1 = UpdateAudio();
        if (!cVar1) {
            bVar8 = false;
        } else {
            this_01 = (NPCType*)m_nPCType->end();
            if (this_01 == nullptr) {
                (*(void (*)(...))field_8[3])(&field_8);
            } else {
                iVar3 = this_01->HasBackgroundMovementSound();
                if (iVar3 != 0) {
                    iVar3 = this_01->GetBackgroundSoundReady();
                    uVar2 = GetBasID();
                    iVar4 = (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
                    if (iVar4 != -1) {
                        this_02 = field_224->GetConfig<game::BASType>(iVar4, nullptr);
                        this_03 = (BASType*)this_02->end();
                        if (this_03 != nullptr) {
                            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                          field_864->GetCurrentAnimation();
                            this_05 = (CommandLine*)this_04->end();
                            if (((this_05 != nullptr) && (cVar1 = this_05->IsReadyAnim(), !cVar1)) &&
                                (iVar4 = this_05->GetPos(), iVar4 != -1)) {
                                cVar1 = this_03->IsRunAnimation(iVar4);
                                if (!cVar1) {
                                    cVar1 = this_03->IsCrawlAnimation(iVar4);
                                    if (!cVar1) {
                                        iVar3 = this_01->GetBackgroundSoundWalk();
                                    } else {
                                        iVar3 = this_01->GetBackgroundSoundCrawl();
                                    }
                                } else {
                                    iVar3 = this_01->GetBackgroundSoundRun();
                                }
                            }
                        }
                    }
                    this_00 = &field_8;
                    cVar1 = this_00->HasSoundInstance(iVar3);
                    if ((!cVar1) && (this_00->StopSounds(13, 0.15), -1 < iVar3)) {
                        uVar5 = this_01->GetBackgroundSoundVolume();
                        iVar4 = this_01->GetBackgroundSoundDropoffRange();
                        iVar6 = this_01->GetBackgroundSoundRange();
                        uVar7 = GetWorldPosition();
                        (*(void (*)(...))field_8[2])(this_00, iVar3, uVar5, 0, iVar4 << 7, iVar6 << 7, uVar7,
                                                     18446744073709551615, 13, 13, field_68, 256);
                    }
                }
            }
            bVar8 = this_01 != nullptr;
        }
        return bVar8;
    }

    // 0x100419d50
    int NPCEntity::CalculateWorldPriority(unsigned int arg1,
                                          PathingEntityPriorityData pathingEntityPriorityData) const {
        short sVar3;
        NPCType* pNVar5;
        unsigned int in_register_00000014;
        unsigned short uVar7;

        uint8_t* this_00 = m_parentNPCType;
        bool cVar1 = this_00->operator_cast_to_bool();
        if ((!cVar1) || (cVar1 = m_nPCType->operator_cast_to_bool(), !cVar1)) {
            cVar1 = (field_864->GetCurrentModel())->operator_cast_to_bool();
            sVar3 = -1;
            if (cVar1) {
                sVar3 = field_3490;
            }
            goto LAB_100419ecd;
        }
        uint8_t bVar2 = GetHiddenByOtherEntity();
        unsigned short uVar6 =
            (unsigned short)(bVar2 ^ 1) |
            (unsigned short)((((uint64_t)in_register_00000014 << 32) | (uint32_t)pathingEntityPriorityData) >> 21) &
                2048;
        cVar1 = (&field_3784)->operator_cast_to_bool();
        if (cVar1) {
            cVar1 = ((HitmarksAndHeadbars*)field_3784.operator->())->HasHeadbars(arg1);
            if (cVar1) {
                uVar6 = uVar6 | 2;
            }
        }
        if (GetGridSize() < 5) {
            sVar3 = GetGridSize();
            uVar6 = uVar6 + sVar3 * -4 + 20;
        }
        if (pathingEntityPriorityData == 1) {
            pNVar5 = (NPCType*)(*this_00).operator->();
            cVar1 = pNVar5->IsFamiliar();
            if (!cVar1) {
            LAB_100419e79:
                uVar6 = uVar6 + 64;
            } else {
                uVar6 = uVar6 + 32;
            }
        } else if (pathingEntityPriorityData == 0) {
            pNVar5 = (NPCType*)(*this_00).operator->();
            cVar1 = pNVar5->IsFamiliar();
            if (cVar1)
                goto LAB_100419e79;
            uVar6 = uVar6 + 128;
        }
        pNVar5 = (NPCType*)(*this_00).operator->();
        cVar1 = pNVar5->IsAlwaysOnTop();
        if (!cVar1) {
            pNVar5 = (NPCType*)(*this_00).operator->();
            cVar1 = pNVar5->IsAlwaysOnBottom();
            uVar7 = uVar6 + 256;
            if (cVar1) {
                uVar7 = uVar6;
            }
        } else {
            uVar7 = uVar6 + 1024;
        }
        uVar6 = uVar7 + 2047;
        if ((in_register_00000014 >> 8 & 1) == 0) {
            uVar6 = uVar7;
        }
        sVar3 = uVar6 + 1;
    LAB_100419ecd:
        return (int)sVar3;
    }

    // 0x100419f30
    void NPCEntity::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44) {
        uint8_t* this_00;
        int iVar3;
        int iVar4;
        uint32_t uVar5;
        unsigned long uVar6;
        unsigned long uVar7;
        NPCType* pNVar8;
        bool* arg1;
        GraphNode* this_02;
        uint64_t local_68[2];
        shared_ptr local_48;
        unsigned int local_38;
        uint8_t local_31;

        uint8_t* puVar1 = m_parentNPCType;
        if (puVar1->operator_cast_to_bool()) {
            this_00 = &field_3792;
            if (this_00->IsInit()) {
                uVar6 = FrameTime::GetCurrentTimeMS();
                local_38 = arg2;
                uVar7 = this_00->capacity();
                arg2 = local_38;
                if (uVar7 < uVar6) {
                    this_00->Destroy();
                }
            }
            pNVar8 = (NPCType*)(*puVar1).operator->();
            iVar3 = pNVar8->GetGridSize();
            SetGridSize(iVar3);
            arg1 = (bool*)(*puVar1).operator->();
            local_48.GetMultiNPC(*arg1, &local_31, *field_4176);
            if (!(shared_ptr::operator_cast_to_bool(&local_48))) {
                Destruct();
                *m_nPCType = local_48;
                field_4188 = -1;
            } else {
                if (shared_ptr::operator_cast_to_bool(&local_48)) {
                    iVar3 = field_4188;
                    iVar4 = ((GameToken*)local_48.operator->())->GetStatus();
                    if (iVar3 != iVar4) {
                        pNVar8 = (NPCType*)(*puVar1).operator->();
                        if (pNVar8->IsMultiNPC()) {
                            Destruct();
                        }
                        *m_nPCType = local_48;
                        SetupNewNPCType();
                    }
                }
            }
            puVar1 = m_nPCType;
            if (!(puVar1->operator_cast_to_bool())) {
                this_02 = (GraphNode*)field_56.operator->();
                local_68[0] = GetSmoothPosition();
                this_02->SetTranslation(*local_68);
            } else {
                if (field_524 != '\0') {
                    pNVar8 = (NPCType*)(*puVar1).operator->();
                    iVar3 = pNVar8->GetFadeInDuration();
                    if (iVar3 < 1) {
                        uVar5 = 300;
                    } else {
                        pNVar8 = (NPCType*)(*puVar1).operator->();
                        uVar5 = pNVar8->GetFadeInDuration();
                    }
                    *(uint32_t*)&field_520 = uVar5;
                }
                MainLogic(rt7Core, arg2, matrix44);
                UpdateAABB();
            }
        }
    }

    // 0x10041a1a0
    void NPCEntity::UpdateAABB() {
        uint8_t* this_00;
        uint8_t bVar2;
        unsigned int arg1;
        unsigned int arg2;
        int iVar3;
        AABB* pAVar6;
        GraphicsApp* pGVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        NXTPixToolkit* this_02;
        float arg1_00;
        uint8_t local_88[48];
        ColourHSL local_58;
        uint8_t local_48[16];
        float local_2c;

        if (field_4168 == '\0') {
            return;
        }
        NPCType* pNVar4 = (NPCType*)(*m_nPCType).operator->();
        if (pNVar4->GetCustomBounding() == 0) {
            this_00 = field_864;
            pGVar7 = (GraphicsApp*)GraphicsApp::Instance();
            arg1 = pGVar7->GetFrameCount();
            pGVar7 = (GraphicsApp*)GraphicsApp::Instance();
            arg2 = pGVar7->GetLogicTick();
            if (this_00->IsReady(arg1, arg2) != '\0') {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetCurrentModel();
                this_02 = (NXTPixToolkit*)this_01->end();
                if (this_02 != nullptr) {
                    pAVar6 = (AABB*)this_02->GetScreen();
                    SetAABB(*pAVar6);
                    bVar2 = this_00->HasParticleSystems();
                    bVar2 = bVar2 ^ 1;
                    goto LAB_10041a1fe;
                }
            }
            iVar3 = GetGridSize();
            local_2c = (float)(iVar3 << 7);
            local_48 = (unsigned __int128)((unsigned int)(local_2c * 0.5));
            arg1_00 = -(local_2c * 0.5);
            new ((local_88 + 32)) math::ColourHSL(arg1_00, 0.0, arg1_00);
            local_58 = math::ColourHSL((float)local_48._0_4_, local_2c, (float)local_48._0_4_);
            new (local_88) math::AABB((local_88 + 32), &local_58);
            SetAABB(*local_88);
        } else {
            pNVar4 = (NPCType*)(*m_nPCType).operator->();
            pAVar6 = (AABB*)pNVar4->GetCustomBounding();
            SetAABB(*pAVar6);
            bVar2 = true;
        LAB_10041a1fe:
            SetNDCProjectionTestEnabled((bool)bVar2);
            field_4168 = 0;
        }
    }

    // 0x10041a340
    void NPCEntity::UpdateGridSize() {
        if (m_parentNPCType->operator_cast_to_bool() != '\0') {
            SetGridSize(((NPCType*)(*m_parentNPCType).operator->())->GetGridSize());
        }
    }

    // 0x10041a380
    bool NPCEntity::UsesTrianglePicking() const {
        bool bVar3;

        if (m_nPCType->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar3 = ((NPCType*)(*m_nPCType).operator->())->GetCustomBounding() == 0;
        }
        return bVar3;
    }

    // 0x10041a3c0
    bool NPCEntity::UsesFastPickingTests() const {
        bool cVar1 = m_nPCType->operator_cast_to_bool();
        uint32_t uVar2 = 1;
        if (cVar1) {
            uVar2 = ((NPCType*)(*m_nPCType).operator->())->UseFastPickingTests();
        }
        return uVar2;
    }

    // 0x10041a410
    uint64_t NPCEntity::PickTest(graphics::PickingHelper& pickingHelper) {
        uint8_t* this_00;
        bool arg4;
        int iVar2;
        NPCType* pNVar3;
        Matrix44T<float>* matrix44;
        vector<std::unique_ptr<graphics::GeometryBatchInstance,
                               MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*
            geometryBatchInstances;
        uint64_t uVar4;
        bool arg3;

        if (UsesTrianglePicking() == '\0') {
            LogAssert("UsesTrianglePicking()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/NPCEntity.cpp",
                      792, nullptr);
        }
        auto this_01 = field_864->GetCurrentModel();
        auto this_02 = this_01->end();
        if (this_02 == nullptr) {
            uVar4 = 0;
        } else {
            this_00 = m_nPCType;
            pNVar3 = (NPCType*)(*this_00).operator->();
            iVar2 = pNVar3->GetRoughBounding();
            arg3 = true;
            if (iVar2 != 1) {
                pNVar3 = (NPCType*)(*this_00).operator->();
                iVar2 = pNVar3->GetRoughBounding();
                if (iVar2 == -1) {
                    pNVar3 = (NPCType*)(*this_00).operator->();
                    iVar2 = pNVar3->GetGridSize();
                    arg3 = iVar2 == 1;
                } else {
                    arg3 = false;
                }
            }
            matrix44 = (Matrix44T<float>*)this_02->GetMaterial();
            geometryBatchInstances =
                (vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*)
                    this_02->GetBatchList();
            arg4 = (bool)UsesFastPickingTests();
            uVar4 = pickingHelper.PickTest(*matrix44, *geometryBatchInstances, arg3, arg4, -1);
        }
        return uVar4;
    }

    // 0x10041a520
    void NPCEntity::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                           const math::Matrix44T<float>& matrix44,
                                           const graphics::SceneViewData& sceneViewData,
                                           const graphics::EffectManager& effectManager) {

        DebugPrimitiveOutput(sceneViewData);
        if (CanRender()) {
            if (FilterRenderPasses(sceneViewData)) {
                GatherDrawableElements(drawableQueue, rt7Core, matrix44, sceneViewData, effectManager);
            }
        }
    }

    // 0x10041a590
    void NPCEntity::DebugPrimitiveOutput(const graphics::SceneViewData& sceneViewData) {
        uint8_t* puVar1;
        NPCEntity* this_00;
        uint32_t uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        Layout* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        ComponentCollection* this_02;
        ComponentCollection* this_03;
        uint32_t* puVar7;
        float* pfVar8;
        uint64_t uVar9;
        long* plVar10;
        compressed_pair<eastl::string*>* this_05;
        compressed_pair<eastl::string*>* pcVar11;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_06;
        SpotAnimation* this_07;
        shared_ptr<game::SeqType>* this_09;
        NXTPixToolkit* this_11;
        AABB* this_12;
        char* pcVar12;
        unsigned long uVar13;
        unsigned long uVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        SideBarData local_2b0;
        uint8_t local_288[20];
        float local_274;
        AnimatedModel* local_270;
        NPCEntity* local_268;
        fixed_string<char, 512> local_260;

        bool cVar2 = sceneViewData.HasRenderPass(4);
        if (cVar2) {
            if ((m_debugPrimitiveText != '\0') ||
                ((m_debugPrimitiveTextOnMouseover != '\0' && (cVar2 = PickTestDebugCursor(), cVar2)))) {
                this_01 = (Layout*)GetWorldPosition();
                local_260 = eastl::fixed_string<char, 512>();
                pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetNPCType();
                this_02 = (ComponentCollection*)pvVar6->end();
                pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetParentNPCType();
                this_03 = (ComponentCollection*)pvVar6->end();
                uVar3 = GetNPCTypeID();
                puVar7 = (uint32_t*)this_01->SSOBeginPtr();
                local_270 = (AnimatedModel*)(((uint64_t)local_270._4_4_ << 32) | (uint32_t)(*puVar7));
                local_288._8_8_ = this_01;
                pfVar8 = (float*)this_01->second();
                local_274 = *pfVar8;
                uVar4 = field_240;
                uVar5 = field_68;
                local_268 = this;
                cVar2 = CanRender();
                pcVar12 = " HIDDEN";
                if (cVar2) {
                    pcVar12 = "";
                }
                local_260.sprintf("[NPC] %d [%d,%d,%d] %d%s", (unsigned long)uVar4, (unsigned long)uVar5,
                                  (unsigned long)((int)(local_270._0_4_ * 0.0078125f) & 63),
                                  (unsigned long)((int)(local_274 * 0.0078125f) & 63), uVar3, pcVar12);
                if (this_02 != nullptr) {
                    cVar2 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                                 this_02->GetStaticChildren())
                                ->empty();
                    if (!cVar2) {
                        this_02->GetStaticChildren();
                        uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_260.append_sprintf("(%s)", uVar9);
                    }
                }
                if ((this_03 != nullptr) && (this_03 != this_02)) {
                    uVar4 = this_03->GetStatus();
                    local_260.append_sprintf("\nMultiNPC Parent: %d", (unsigned long)uVar4);
                }
                local_270 = (AnimatedModel*)local_268->field_864;
                local_270->DebugOutputAnimationState<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
                    local_260);
                puVar1 = &local_268->field_3912;
                cVar2 = puVar1->operator_cast_to_bool();
                if (cVar2) {
                    plVar10 = (long*)(*puVar1).operator->();
                    (**(void (**)(...))(*plVar10 + 72))(plVar10, &local_260);
                }
                puVar1 = &local_268->field_4088;
                this_05 = (compressed_pair<eastl::string*>*)puVar1->HeapBeginPtr();
                pcVar11 = (compressed_pair<eastl::string*>*)puVar1->end();
                if (this_05 != pcVar11) {
                    uVar14 = 1;
                    do {
                        this_05->first();
                        this_06 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                            eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
                        this_07 = (SpotAnimation*)this_06->get();
                        if (this_07 != nullptr) {
                            uVar4 = this_07->GetEffectAnimID();
                            cVar2 = (this_07->GetSeqType())->operator_cast_to_bool();
                            uVar13 = 4294967295;
                            if (cVar2) {
                                this_09 = (shared_ptr<game::SeqType>*)this_07->GetSeqType();
                                uVar5 = ((GameToken*)(*this_09).operator->())->GetStatus();
                                uVar13 = (unsigned long)uVar5;
                            }
                            local_260.append_sprintf("\nAnim%d: effect:%d seq:%d", uVar14, (unsigned long)uVar4,
                                                     uVar13);
                        }
                        this_05 = this_05 + 16;
                        uVar14 = (unsigned long)((int)uVar14 + 1);
                    } while (this_05 != pcVar11);
                }
                pvVar6 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_270->GetCurrentModel();
                this_11 = (NXTPixToolkit*)pvVar6->end();
                if (this_11 == nullptr) {
                    local_260.append_sprintf("\nModel: NONE");
                } else {
                    this_12 = (AABB*)this_11->GetScreen();
                    uVar4 = this_11->GetExternalID();
                    fVar15 = (float)this_12->GetWidth();
                    fVar16 = (float)this_12->GetLength();
                    fVar17 = (float)this_12->GetHeight();
                    local_260.append_sprintf("\nModel: extID=%d, p=%p size=%d x %d x %d", (unsigned long)uVar4, this_11,
                                             (unsigned long)(unsigned int)(int)fVar15,
                                             (unsigned long)(unsigned int)(int)fVar16, (int)fVar17);
                }
                this_00 = local_268;
                plVar10 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar10 != nullptr) {
                    pcVar12 = (char*)local_260.begin();
                    local_2b0 = eastl::string(pcVar12);
                    new (local_288) oldscape::sidebars::SideBarData(-32513, 0);
                    (**(void (**)(...))(*plVar10 + 136))(plVar10, local_288._8_8_, &local_2b0, local_288);
                }
                plVar10 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar10 != nullptr) {
                    uVar9 = this_00->GetWorldAABB();
                    local_2b0 = oldscape::sidebars::SideBarData(-12566273, 2);
                    (**(void (**)(...))(*plVar10 + 72))(plVar10, uVar9, &local_2b0);
                }
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
    }

    // 0x10041aab0
    uint64_t NPCEntity::FilterRenderPasses(const graphics::SceneViewData& sceneViewData) {
        if (sceneViewData.HasShadowPass() != '\0') {
            if (((NPCType*)(*m_nPCType).operator->())->CastsShadows() == 0) {
                return 0;
            }
        }
        return 1;
    }

    // 0x10041aaf0
    void NPCEntity::NotifyPickable(unsigned int arg1, bool arg2, float arg3) {
        shared_ptr<game::World>* psVar2;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar3;
        SceneManager* pSVar4;
        EntityHighlightGlobalState* pEVar5;

        if (!(RefreshCachedHighlightType(arg1))) {
            return;
        }
        int* piVar1 =
            (int*)((EntityHighlightVisualConfig*)(unsigned long)field_4328)->GetDefault((EntityHighlightType)arg1);
        if (*piVar1 != 2) {
            piVar1 =
                (int*)((EntityHighlightVisualConfig*)(unsigned long)field_4328)->GetDefault((EntityHighlightType)arg1);
            if (*piVar1 != 1) {
                return;
            }
            if (!((GetWorld())->operator_cast_to_bool())) {
                return;
            }
            psVar2 = (shared_ptr<game::World>*)GetWorld();
            phVar3 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*psVar2)
                         .operator->();
            pSVar4 = (SceneManager*)phVar3->size();
            pEVar5 = (EntityHighlightGlobalState*)pSVar4->GetEntityHighlightGlobalState();
            if (!(pEVar5->IsRadialHighlightActive())) {
                return;
            }
        }
        if (arg2) {
            new (field_4312) oldscape::ServerConnectionWorkItem(arg1);
        } else {
            psVar2 = (shared_ptr<game::World>*)GetWorld();
            phVar3 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*psVar2)
                         .operator->();
            pSVar4 = (SceneManager*)phVar3->size();
            pEVar5 = (EntityHighlightGlobalState*)pSVar4->GetEntityHighlightGlobalState();
            field_4312->TryKeepVisible(*pEVar5, arg1);
        }
        if (arg3 != -1.0) {
            *(float*)field_4312 = arg3;
        }
    }

    // 0x10041ac00
    bool NPCEntity::RefreshCachedHighlightType(unsigned int arg1) {
        uint8_t* this_00;
        bool cVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        EntityHighlightType EVar4;
        unsigned int uVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        unsigned int uVar10;
        unsigned int uVar11;
        shared_ptr* psVar12;
        NPCType* pNVar13;
        OldCamera* pOVar14;
        SkyBox* pSVar15;
        shared_ptr<game::World>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_02;
        SceneManager* this_03;
        TextRun* this_04;
        Logger* pLVar16;
        bool bVar17;

        if (arg1 < field_4332) {
        LAB_10041ac19:
            bVar17 = field_4328 != 8;
        } else {
            this_00 = m_nPCType;
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                psVar12 = (shared_ptr*)GetWorld();
                cVar1 = shared_ptr::operator_cast_to_bool(psVar12);
                if (cVar1) {
                    psVar12 = (shared_ptr*)field_864->GetCurrentModel();
                    cVar1 = shared_ptr::operator_cast_to_bool(psVar12);
                    if (cVar1) {
                        field_4328 = 8;
                        field_4332 = arg1 + 250;
                        EVar4 = 7;
                        if (field_4336 == '\0') {
                            pNVar13 = (NPCType*)(*this_00).operator->();
                            cVar1 = pNVar13->HasHighlightOverride();
                            if (!cVar1) {
                                uVar5 = GetHiddenOpsMask();
                                pOVar14 = (OldCamera*)(*this_00).operator->();
                                iVar6 = pOVar14->GetCamHeight();
                                pSVar15 = (SkyBox*)(*this_00).operator->();
                                iVar7 = pSVar15->GetPendingSkyID();
                                if (iVar6 < iVar7) {
                                    pOVar14 = (OldCamera*)(*this_00).operator->();
                                    iVar6 = pOVar14->GetCamHeight();
                                    pOVar14 = (OldCamera*)(*this_00).operator->();
                                    iVar7 = pOVar14->GetCamZoom();
                                    if (iVar6 < iVar7) {
                                        pOVar14 = (OldCamera*)(*this_00).operator->();
                                        bVar2 = pOVar14->GetCamHeight();
                                        pOVar14 = (OldCamera*)(*this_00).operator->();
                                        bVar3 = pOVar14->GetCamHeight();
                                        if ((1 << (bVar2 & 31) & uVar5) != 1 << (bVar3 & 31)) {
                                            this_01 = (shared_ptr<game::World>*)GetWorld();
                                            this_02 =
                                                (hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                           eastl::allocator,
                                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                           eastl::equal_to<long long>, eastl::hash<long long>,
                                                           eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                           eastl::prime_rehash_policy, false, true, true>*)(*this_01)
                                                    .operator->();
                                            this_03 = (SceneManager*)this_02->size();
                                            this_04 = (TextRun*)this_03->GetEntityHighlightGlobalState();
                                            uVar8 = this_04->GetMaxLineWidth();
                                            iVar6 = this_04->GetCompletedGold();
                                            iVar7 = GetVisibleCombatLevel();
                                            bVar17 = false;
                                            if (uVar8 == 1) {
                                                pNVar13 = (NPCType*)(*this_00).operator->();
                                                iVar9 = pNVar13->GetReprioritiseAttackOp();
                                                bVar17 = false;
                                                if (iVar9 != 0) {
                                                    bVar17 = iVar6 < iVar7;
                                                }
                                            }
                                            if ((uVar8 & 4294967294) != 2 && !bVar17) {
                                                field_4328 = 4;
                                            }
                                        }
                                    }
                                }
                                if (field_4328 == 8) {
                                    pNVar13 = (NPCType*)(*this_00).operator->();
                                    cVar1 = pNVar13->IsExamineOnly();
                                    if ((!cVar1) ||
                                        (game::EntityHighlightGlobalState::m_allowExamineOnlyHighlights != '\0')) {
                                        pOVar14 = (OldCamera*)(*this_00).operator->();
                                        uVar10 = pOVar14->GetCamHeight();
                                        pOVar14 = (OldCamera*)(*this_00).operator->();
                                        uVar11 = pOVar14->GetCamZoom();
                                        pSVar15 = (SkyBox*)(*this_00).operator->();
                                        uVar8 = pSVar15->GetPendingSkyID();
                                        pLVar16 = (Logger*)(*this_00).operator->();
                                        pLVar16->GetLogStreams();
                                        if ((int)uVar8 < 6) {
                                            do {
                                                if (((uVar5 | 1 << (uVar10 & 31) | 1 << (uVar11 & 31)) >> (uVar8 & 31) &
                                                     1) == 0) {
                                                    EVar4 = 3;
                                                    goto LAB_10041acbf;
                                                }
                                                uVar8 = uVar8 + 1;
                                                pLVar16 = (Logger*)(*this_00).operator->();
                                                pLVar16->GetLogStreams();
                                            } while (uVar8 != 6);
                                        }
                                    }
                                }
                                goto LAB_10041ac19;
                            }
                            pNVar13 = (NPCType*)(*this_00).operator->();
                            EVar4 = pNVar13->GetHighlightOverride();
                        }
                    LAB_10041acbf:
                        field_4328 = EVar4;
                        goto LAB_10041ac19;
                    }
                }
            }
            bVar17 = false;
        }
        return bVar17;
    }

    // 0x10041aed0
    bool NPCEntity::CanRender() const {
        bool cVar1 = m_nPCType->operator_cast_to_bool();
        uint64_t uVar2 = 0;
        if ((cVar1) && (m_ShowNPCEntity != '\0')) {
            uVar2 = CanRender();
        }
        return uVar2;
    }

    // 0x10041af20
    uint64_t NPCEntity::GetWalkSmoothing() const {
        uint64_t uVar2;

        if (m_parentNPCType->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((NPCType*)(*m_parentNPCType).operator->())->GetWalkSmoothing();
        }
        return uVar2;
    }

    // 0x10041af60
    void NPCEntity::SetVisibleCombatLevelToParent() {
        m_visibleCombatLevel = ((NPCType*)(*m_parentNPCType).operator->())->GetVisibleCombatLevel();
    }

    // 0x10041b010
    void NPCEntity::UpdateHighlighting(unsigned int arg1) {
        uint8_t bVar2;
        shared_ptr<game::World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        SceneManager* this_04;
        EntityHighlightGlobalState* this_05;
        EntityHighlightVisualConfig* this_06;
        Model* pMVar3;
        EntityHighlightType EVar4;
        float fVar5;
        float local_58[4];
        Vector4T<float> local_48;

        auto this_00 = field_864->GetCurrentModel();
        if ((GetWorld())->operator_cast_to_bool()) {
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                this_02 = (shared_ptr<game::World>*)GetWorld();
                this_03 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(*this_02)
                        .operator->();
                this_04 = (SceneManager*)this_03->size();
                this_05 = (EntityHighlightGlobalState*)this_04->GetEntityHighlightGlobalState();
                if (this_05->IsEnabled()) {
                    EVar4 = field_4328;
                    if (EVar4 == 8) {
                        bVar2 = field_4312->WasInteractedWithRecently();
                        EVar4 = (unsigned int)(bVar2 ^ 1) * 5 + 3;
                    }
                    if (EVar4 == 8) {
                        fVar5 = (float)FrameTime::GetFrameDelta();
                        field_4312->Update(*this_05, fVar5, arg1);
                    } else {
                        new (local_58) game::EntityHighlightVisualData();
                        this_06 = (EntityHighlightVisualConfig*)((EntityHighlightVisualConfig*)(unsigned long)EVar4)
                                      ->GetDefault((EntityHighlightType)arg1);
                        if (this_06->field_0 == 2) {
                            new (field_4312) oldscape::ServerConnectionWorkItem(arg1);
                        }
                        fVar5 = (float)FrameTime::GetFrameDelta();
                        field_4312->Update(*this_05, fVar5, arg1);
                        if (this_06->Evaluate(*field_4312, *this_05, *local_58, 1.0)) {
                            pMVar3 = (Model*)(*this_00).operator->();
                            pMVar3->SetHighlight(local_58[0], local_48);
                            goto LAB_10041b172;
                        }
                    }
                }
                pMVar3 = (Model*)(*this_00).operator->();
                pMVar3->ClearHighlight();
            }
        }
    LAB_10041b172:
    }

} // namespace jag
