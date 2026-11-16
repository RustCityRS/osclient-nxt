// libs/game/runetek5/scene/Entity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Entity.h"

namespace jag::game {
    // 0x1039b4ef0, set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Entity::NullEntity =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1039b4f00, set at startup by ___cxx_global_var_init.9
    eastl::fixed_string<char, 256> Entity::__m_toString = fixed_string<char, 256>();

    // 0x100009e70: Entity::NotifyPickable(unsigned int, bool, float) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::NotifyMouseover(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::NotifyInteracted(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::AddPickableEntity(World&, math::Matrix44T<float> const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::Destruct() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Entity::RenderDebug(graphics::RenderPassType) const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: Entity::PickTest(graphics::PickingHelper&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Entity::GetTrackableID() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Entity::GetVarDomainType() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Entity::GetWorldPriority() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Entity::UsesTrianglePicking() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: Entity::UsesFastPickingTests() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: Entity::CanRender() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100120420: Entity::GetTrackableType() const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x10012dc00: Entity::GetMaximumRemoveRoofLevel() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x1001cdb80: Entity::GetTranslation() has the same machine code as Entity::GetPosition() const

    // 0x1001cdb80: Entity::GetTranslation() const has the same machine code as Entity::GetPosition() const

    // 0x100324d40: Entity::GetWorld() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x1003cbc60: Entity::GetPickingPrepassType() const has the same machine code as MapArea::GetBackgroundRGBA() const

    // 0x1003f65a0: Entity::GetLevel() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x1003f7700: Entity::GetAABB() has the same machine code as Entity::GetAABB() const

    // 0x10048ecb0
    Entity::Entity(graphics::GraphNode* graphNode, const shared_ptr<World>& world, EntityType entityType, int arg4)
        : graphics::GraphEntity() {
        uint8_t*** local_40 = &field_8;
        new (local_40) MiniSoundManager();
        field_8 = &PTR__Entity_100f01380;
        &field_56->unique_ptr<true, void>(graphNode);
        field_64 = (uint8_t)entityType;
        m_currentLOD = 6;
        m_targetLOD = '\x06';
        m_occludesView = false;
        m_level = arg4;
        m_maximumRemoveRoofLevel = -1;
        new (&field_76) math::Capsule2D();
        new (&field_100) math::Sphere2D();
        m_pickingPrepassType = 0;
        new (&field_128) std::function<void(int, int, int, int, int, int)>();
        new (m_world) shared_ptr(world);
        field_128 = this;
    }

    // 0x10048ee50
    Entity::~Entity() {
        uint8_t*** this_00 = &field_8;
        field_8 = &PTR__Entity_100f01380;
        uint8_t* this_01 = &field_56;
        if (this_01->operator_cast_to_bool() != '\0') {
            ((GraphNode*)(*this_01).operator->())->Detach();
        }
        (*(void (*)(...))(*this_00)[3])(this_00);
        m_world->~shared_ptr();
        field_128.~function();
        this_01->~unique_ptr();
        this_00->~AutoSingleton();
    }

    // 0x10048efa0
    void Entity::MarkAsNoLongerAtTargetLOD() {
        GraphNode* pGVar1;
        long lVar2;
        Text* pTVar3;
        long* plVar6;
        uint8_t* this_00;

        if (IsAtTargetLOD() != '\0') {
            m_currentLOD = ((unsigned int)m_currentLOD) + 1;
            this_00 = &field_56;
            pGVar1 = (GraphNode*)(*this_00).operator->();
            lVar2 = pGVar1->GetParent();
            if (lVar2 != 0) {
                pGVar1 = (GraphNode*)(*this_00).operator->();
                pTVar3 = (Text*)pGVar1->GetParent();
                lVar2 = pTVar3->GetLinkObjCount();
                if (lVar2 != 0) {
                    pGVar1 = (GraphNode*)(*this_00).operator->();
                    pTVar3 = (Text*)pGVar1->GetParent();
                    plVar6 = (long*)pTVar3->GetLinkObjCount();
                    (**(void (**)(...))(*plVar6 + 48))(plVar6);
                }
            }
        }
    }

    // 0x10048f030
    void Entity::GetHeightMapLevel() const {
        auto this_00 = field_56.operator->();
        auto pfVar1 = this_00->GetWorldTranslation();
        GetHeightMapLevel((int)*pfVar1, (int)pfVar1[2]);
    }

    // 0x10048f070
    int Entity::GetHeightMapLevel(int arg1, int arg2) const {
        uint8_t bVar2;
        LinkMap* this_02;
        int iVar3;
        int iVar4;

        int iVar5 = m_level;
        auto this_00 = GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            this_02 = ((World*)(*this_00).operator->())->GetLinkMap();
            iVar4 = arg1 + 127;
            if (-1 < arg1) {
                iVar4 = arg1;
            }
            iVar3 = arg2 + 127;
            if (-1 < arg2) {
                iVar3 = arg2;
            }
            bVar2 = this_02->IsLinkBelow(iVar4 >> 7, iVar3 >> 7);
            iVar5 = iVar5 + (unsigned int)bVar2;
        }
        return iVar5;
    }

    // 0x10048f0e0
    uint64_t Entity::GetFloorHeight(const math::Vector3T<float>& vector3, HeightOffsetType heightOffsetType) const {
        HeightMap* this_02;
        float* pfVar2;
        float fVar3;
        uint32_t extraout_XMM0_Db;
        uint32_t uVar4;
        int local_34;

        int arg2 = GetHeightMapLevel((int)*(float*)vector3, (int)*(float*)(vector3 + 8));
        auto this_00 = GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            fVar3 = -1.0;
            uVar4 = 0;
        } else {
            this_02 = ((World*)(*this_00).operator->())->GetHeightMap();
            pfVar2 = (float*)vector3.SSOBeginPtr();
            fVar3 = *pfVar2;
            pfVar2 = (float*)vector3.second();
            this_02->GetFineHeight(local_34, arg2, (int)fVar3, (int)*pfVar2, true, heightOffsetType);
            fVar3 = (float)local_34;
            uVar4 = extraout_XMM0_Db;
        }
        return (((uint64_t)uVar4 << 32) | (uint32_t)fVar3);
    }

    // 0x10048f340
    float Entity::GetRelativeFloorHeight(int arg1, int arg2, HeightOffsetType heightOffsetType) const {
        float fVar2 = (float)GetAbsoluteFloorHeight(arg1, arg2, heightOffsetType);
        auto this_00 = field_56.operator->();
        auto this_01 = this_00->GetWorldTranslation();
        auto pfVar1 = this_01->y();
        return fVar2 - *pfVar1;
    }

    // 0x10048f380
    void Entity::GetAbsoluteFloorHeight(int arg1, int arg2, HeightOffsetType heightOffsetType) const {
        GraphNode* pGVar1;
        uint64_t* puVar2;
        float* pfVar3;
        Layout* this_00;
        uint64_t local_38;
        uint32_t local_30;
        float local_2c;

        if (arg1 == 0 && arg2 == 0) {
            pGVar1 = (GraphNode*)field_56.operator->();
            this_00 = (Layout*)pGVar1->GetWorldTranslation();
        } else {
            pGVar1 = (GraphNode*)field_56.operator->();
            puVar2 = (uint64_t*)pGVar1->GetWorldTranslation();
            local_38 = *puVar2;
            local_30 = *(uint32_t*)(puVar2 + 1);
            local_2c = (float)arg1;
            this_00 = (Layout*)&local_38;
            pfVar3 = (float*)this_00->SSOBeginPtr();
            *pfVar3 = local_2c + *pfVar3;
            local_2c = (float)arg2;
            pfVar3 = (float*)this_00->second();
            *pfVar3 = local_2c + *pfVar3;
        }
        GetFloorHeight(*this_00, heightOffsetType);
    }

    // 0x10048f440
    float Entity::GetCeilingHeight(const math::Vector3T<float>& vector3) const {
        int local_2c;

        int arg2 = GetHeightMapLevel((int)*(float*)vector3, (int)*(float*)(vector3 + 8));
        auto this_00 = GetWorld();
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_00);
        float fVar2 = -1.0;
        if ((cVar1) && (arg2 < 3)) {
            (((World*)(*this_00).operator->())->GetHeightMap())
                ->GetFineHeight(local_2c, arg2, (int)*(float*)vector3, (int)*(float*)(vector3 + 8), true, 0);
            fVar2 = (float)local_2c;
        }
        return fVar2;
    }

    // 0x10048f4e0
    unsigned long Entity::GetRelativeCeilingHeight(int arg1, int arg2) const {
        GraphNode* this_00;
        Vector2T<int>* this_01;
        float* pfVar1;

        unsigned long uVar2 = GetAbsoluteCeilingHeight(arg1, arg2);
        if ((float)uVar2 != -1.0) {
            this_00 = (GraphNode*)field_56.operator->();
            this_01 = (Vector2T<int>*)this_00->GetWorldTranslation();
            pfVar1 = (float*)this_01->y();
            uVar2 = (unsigned long)(unsigned int)((float)uVar2 - *pfVar1);
        }
        return uVar2;
    }

    // 0x10048f540
    void Entity::GetAbsoluteCeilingHeight(int arg1, int arg2) const {
        GraphNode* pGVar1;
        uint64_t* puVar2;
        float* pfVar3;
        Layout* this_00;
        uint64_t local_30;
        uint32_t local_28;
        float local_24;

        if (arg1 == 0 && arg2 == 0) {
            pGVar1 = (GraphNode*)field_56.operator->();
            this_00 = (Layout*)pGVar1->GetWorldTranslation();
        } else {
            pGVar1 = (GraphNode*)field_56.operator->();
            puVar2 = (uint64_t*)pGVar1->GetWorldTranslation();
            local_30 = *puVar2;
            local_28 = *(uint32_t*)(puVar2 + 1);
            local_24 = (float)arg1;
            this_00 = (Layout*)&local_30;
            pfVar3 = (float*)this_00->SSOBeginPtr();
            *pfVar3 = local_24 + *pfVar3;
            local_24 = (float)arg2;
            pfVar3 = (float*)this_00->second();
            *pfVar3 = local_24 + *pfVar3;
        }
        GetCeilingHeight(*this_00);
    }

    // 0x10048f5f0
    int Entity::GetOverlayHeight() const {
        NXTPixToolkit* this_00;
        Vector2T<int>* this_01;
        float* pfVar3;

        bool cVar1 = HasAABB();
        int iVar2 = 0;
        if (cVar1) {
            this_00 = (NXTPixToolkit*)GetAABB();
            this_01 = (Vector2T<int>*)this_00->GetScreen();
            pfVar3 = (float*)this_01->y();
            iVar2 = (int)*pfVar3;
        }
        return iVar2;
    }

    // 0x10048f650
    unsigned int Entity::GetHeightMapLevelAtCoord(const CoordFine& coordFine, const LinkMap* linkMap) {
        uint8_t bVar1;
        CoordGrid local_30;

        unsigned int uVar2 = coordFine.field_0;
        if ((linkMap != nullptr) && ((int)uVar2 < 3)) {
            local_30 = game::CoordGrid(coordFine);
            bVar1 = linkMap->IsLinkBelow(local_30);
            uVar2 = uVar2 + bVar1;
        }
        return uVar2;
    }

    // 0x10048f6a0
    int Entity::GetFloorHeightAtCoord(const CoordFine& coordFine, const HeightMap& heightMap, const LinkMap* linkMap,
                                      bool arg4, HeightOffsetType heightOffsetType) {
        int local_2c;

        int arg2 = GetHeightMapLevelAtCoord(coordFine, linkMap);
        heightMap.GetFineHeight(local_2c, arg2, (int)coordFine.field_4, (int)coordFine.field_12, arg4,
                                heightOffsetType);
        return local_2c;
    }

    // 0x10048f700
    uint64_t Entity::GetLoadImportance() const {
        bool cVar1 = m_world->operator_cast_to_bool();
        uint64_t uVar2 = 0;
        if (cVar1) {
            uVar2 = ((World*)(*m_world).operator->())->GetEntityLoadImportance((int)(char)field_64);
        }
        return uVar2;
    }

    // 0x10048f740
    int Entity::GetAnimationAudioBussType() const {
        int iVar1 = 12;
        if (field_64 < 3) {
            iVar1 = 11 - (unsigned int)field_64;
        }
        return iVar1;
    }

    // 0x10048f760
    char Entity::GetAnimationAudioSoundType() const {
        char cVar1 = '\x04';
        if (field_64 != 0) {
            cVar1 = (field_64 == 4) * '\x02' + '\x05';
        }
        return cVar1;
    }

    // 0x10048f780
    uint64_t Entity::PickTestDebugCursor() const {
        float fVar1;
        int arg5;
        unsigned int uVar3;
        World* pWVar5;
        Matrix44T<float>* matrix442;
        Matrix44T<float>* matrix443;
        Matrix44T<float>* pMVar6;
        float* pfVar7;
        uint64_t uVar8;

        auto this_00 = GetWorld();
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar4 =
            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                       eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(*this_00)
                .operator->();
        auto this_01 = phVar4->size();
        phVar4 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)(*this_00)
                     .operator->();
        auto this_02 = phVar4->size();
        auto this_03 = this_02->GetRenderTargetsManager();
        auto this_04 = this_01->GetGameSceneRect();
        Sphere2D local_40;
        if (!(field_100.Ready())) {
            pWVar5 = (World*)(*this_00).operator->();
            matrix442 = (Matrix44T<float>*)pWVar5->GetLastCameraViewMatrix();
            pWVar5 = (World*)(*this_00).operator->();
            matrix443 = pWVar5->GetLastCameraProjectionMatrix();
            pWVar5 = (World*)(*this_00).operator->();
            pMVar6 = pWVar5->GetLastViewProjectionMatrix();
            arg5 = this_04->GetPos();
            uVar3 = this_04->GetLevel();
            GetNode()->GetWorldAABB();
            math::Sphere2D::Set(local_40, *matrix442, *matrix443, (int)pMVar6, arg5, *((AABB*)(unsigned long)uVar3));
        } else {
            local_40 = field_100;
        }
        if (!(local_40.Ready())) {
            uVar8 = 0;
        } else {
            pfVar7 = (float*)this_03->SSOBeginPtr();
            fVar1 = *pfVar7;
            pfVar7 = (float*)this_03->y();
            uVar8 = local_40.PointInside((int)fVar1, (int)*pfVar7, 0);
        }
        return uVar8;
    }

} // namespace jag::game
