// libs/game/runetek5/scene/Entity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Entity.h"

namespace jag::game {
    // 0x1039b4ef0, 16 bytes, __common; set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Entity::NullEntity;

    // 0x1039b4f00, 296 bytes, __common; set at startup by ___cxx_global_var_init.9
    eastl::fixed_string<char, 256, true, eastl::allocator> Entity::__m_toString =
        fixed_string<char, 256, true, eastl::allocator>();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::NotifyPickable(unsigned int, bool, float);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::NotifyMouseover(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::NotifyInteracted(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::AddPickableEntity(World&, math::Matrix44T<float> const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                   graphics::SceneViewData const&, graphics::EffectManager const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::Destruct();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Entity::RenderDebug(graphics::RenderPassType) const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Entity::PickTest(graphics::PickingHelper&);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Entity::GetTrackableID() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Entity::GetVarDomainType() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Entity::GetWorldPriority() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Entity::UsesTrianglePicking() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Entity::UsesFastPickingTests() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Entity::CanRender() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    Entity::GetTrackableType() const;

    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    Entity::GetMaximumRemoveRoofLevel() const;

    // 0x1001cdb80: the linker folded this into Entity::GetPosition() const, which has identical code
    Entity::GetTranslation();

    // 0x1001cdb80: the linker folded this into Entity::GetPosition() const, which has identical code
    Entity::GetTranslation() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    Entity::GetWorld() const;

    // 0x1003cbc60: the linker folded this into MapArea::GetBackgroundRGBA() const, which has identical code
    Entity::GetPickingPrepassType() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    Entity::GetLevel() const;

    // 0x1003f7700: the linker folded this into Entity::GetAABB() const, which has identical code
    Entity::GetAABB();

    // 0x10048ecb0, 256 bytes, base-object constructor, placed by class name and debug map
    // Entity::Entity(graphics::GraphNode*, shared_ptr<World> const&, EntityType, int)
    void Entity::Entity(GraphNode* param_1, shared_ptr* param_2, byte param_4, int param_5) {
        Entity* local_48;
        undefined*** local_40;
        undefined1* local_38;

        new (this) graphics::GraphEntity();
        local_40 = &field_8;
        new (local_40) MiniSoundManager();
        field_0 = &PTR__Entity_100f01240;
        field_8 = &PTR__Entity_100f01380;
        local_38 = &field_56;
        std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::unique_ptr<true, void>(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)local_38, param_1);
        field_64 = param_4;
        field_65 = 6;
        m_targetLOD = 6;
        m_occludesView = false;
        field_68 = param_5;
        m_maximumRemoveRoofLevel = -1;
        new (&field_76) math::Capsule2D();
        new (&field_100) math::Sphere2D();
        m_pickingPrepassType = 0;
        std::function<void(int, int, int, int, int, int)>::function(
            (function<void(int, int, int, int, int, int)>*)&field_128);
        new (m_world, param_2) shared_ptr<oldscape::dash3d::Decor>();
        local_48 = this;
        std::function<void(int, int, int, int, int, int)>::operator=(
            (function<void(int, int, int, int, int, int)>*)&field_128, (__0*)&local_48);
    }

    // 0x10048ee40, 16 bytes, complete-object constructor, placed by class name and debug map
    // Entity::Entity(graphics::GraphNode*, shared_ptr<World> const&, EntityType, int): jumps straight to the base-object constructor

    // 0x10048ee50, 208 bytes, base-object destructor, placed by class name and debug map
    // Entity::~Entity()
    void Entity::~Entity() {
        undefined*** pppuVar1;
        undefined1* this_00;
        GraphNode* this_01;

        field_0 = &PTR__Entity_100f01240;
        pppuVar1 = &field_8;
        field_8 = &PTR__Entity_100f01380;
        this_00 = &field_56;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)this_00);
            this_01->Detach();
        }
        (*(code*)(*pppuVar1)[3])(pppuVar1);
        m_world->~shared_ptr();
        std::function<void(int, int, int, int, int, int)>::~function(
            (function<void(int, int, int, int, int, int)>*)&field_128);
        this_00->~unique_ptr();
        pppuVar1->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x10048ef50, 16 bytes, complete-object destructor, placed by class name and debug map
    // Entity::~Entity(): jumps straight to the base-object destructor

    // 0x10048ef70, 32 bytes, deleting destructor, placed by class name and debug map
    // Entity::~Entity()
    void Entity::~Entity() {
        ~Entity(this);
        operator_delete(this);
    }

    // 0x10048efa0, 144 bytes, placed by class name and debug map
    // Entity::MarkAsNoLongerAtTargetLOD()
    void Entity::MarkAsNoLongerAtTargetLOD() {
        GraphNode* pGVar1;
        long lVar2;
        Text* pTVar3;
        long* plVar6;
        undefined1* this_00;

        if (IsAtTargetLOD(this) != '\0') {
            field_65 = game::operator+(field_65, 1);
            this_00 = &field_56;
            pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)this_00);
            lVar2 = pGVar1->GetParent();
            if (lVar2 != 0) {
                pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                    (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)this_00);
                pTVar3 = (Text*)pGVar1->GetParent();
                lVar2 = pTVar3->GetLinkObjCount();
                if (lVar2 != 0) {
                    pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                        (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)this_00);
                    pTVar3 = (Text*)pGVar1->GetParent();
                    plVar6 = (long*)pTVar3->GetLinkObjCount();
                    (**(code**)(*plVar6 + 48))(plVar6);
                }
            }
        }
    }

    // 0x10048f030, 64 bytes, placed by class name and debug map
    // Entity::GetHeightMapLevel() const
    void Entity::GetHeightMapLevel() {
        GraphNode* this_00;
        float* pfVar1;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        pfVar1 = (float*)this_00->GetWorldTranslation();
        GetHeightMapLevel(this, (int)*pfVar1, (int)pfVar1[2]);
    }

    // 0x10048f070, 112 bytes, placed by class name and debug map
    // Entity::GetHeightMapLevel(int, int) const
    int Entity::GetHeightMapLevel(int param_1, int param_2) {
        byte bVar2;
        shared_ptr* this_00;
        World* this_01;
        LinkMap* this_02;
        int iVar3;
        int iVar4;
        int iVar5;

        iVar5 = field_68;
        this_00 = (shared_ptr*)GetWorld(this);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
            this_02 = (LinkMap*)this_01->GetLinkMap();
            iVar4 = param_1 + 127;
            if (-1 < param_1) {
                iVar4 = param_1;
            }
            iVar3 = param_2 + 127;
            if (-1 < param_2) {
                iVar3 = param_2;
            }
            bVar2 = this_02->IsLinkBelow(iVar4 >> 7, iVar3 >> 7);
            iVar5 = iVar5 + (uint)bVar2;
        }
        return iVar5;
    }

    // 0x10048f0e0, 176 bytes, placed by class name and debug map
    // Entity::GetFloorHeight(math::Vector3T<float> const&, HeightOffsetType) const
    undefined8 Entity::GetFloorHeight(Layout* param_1, undefined4 param_3) {
        undefined4 uVar2;
        shared_ptr* this_00;
        World* this_01;
        HeightMap* pHVar3;
        vector* pvVar4;
        float* pfVar5;
        type* ptVar6;
        float fVar7;
        undefined4 extraout_XMM0_Db;
        int local_34;

        ptVar6 = (type*)(ulong)(uint)(int)*(float*)param_1;
        uVar2 = GetHeightMapLevel(this, (int)*(float*)param_1, (int)*(float*)(param_1 + 8));
        this_00 = (shared_ptr*)GetWorld(this);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
            pHVar3 = (HeightMap*)this_01->GetHeightMap();
            pvVar4 = eastl::string::Layout::SSOBeginPtr(param_1, ptVar6);
            fVar7 = *(float*)pvVar4;
            pfVar5 = (float*)param_1->second();
            pHVar3->GetFineHeight(&local_34, uVar2, (int)fVar7, (int)*pfVar5, 1, param_3);
            fVar7 = (float)local_34;
            uVar2 = extraout_XMM0_Db;
        } else {
            fVar7 = -1.0;
            uVar2 = 0;
        }
        return CONCAT44(uVar2, fVar7);
    }

    // 0x10048f340, 64 bytes, placed by class name
    // Entity::GetRelativeFloorHeight(int, int, HeightOffsetType) const
    float Entity::GetRelativeFloorHeight() {
        GraphNode* this_00;
        Vector2T<int>* this_01;
        float* pfVar1;
        float fVar2;

        fVar2 = (float)GetAbsoluteFloorHeight();
        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_01 = (Vector2T<int>*)this_00->GetWorldTranslation();
        pfVar1 = (float*)this_01->y();
        return fVar2 - *pfVar1;
    }

    // 0x10048f380, 192 bytes, placed by class name
    // Entity::GetAbsoluteFloorHeight(int, int, HeightOffsetType) const
    void Entity::GetAbsoluteFloorHeight(type* param_2_00, int param_2, undefined4 param_4) {
        GraphNode* pGVar1;
        undefined8* puVar2;
        vector* pvVar3;
        float* pfVar4;
        Layout* this_00;
        undefined8 local_38;
        undefined4 local_30;
        float local_2c;

        if ((int)param_2_00 == 0 && param_2 == 0) {
            pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            this_00 = (Layout*)pGVar1->GetWorldTranslation();
        } else {
            pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            puVar2 = (undefined8*)pGVar1->GetWorldTranslation();
            local_38 = *puVar2;
            local_30 = *(undefined4*)(puVar2 + 1);
            local_2c = (float)(int)param_2_00;
            this_00 = (Layout*)&local_38;
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, param_2_00);
            *(float*)pvVar3 = local_2c + *(float*)pvVar3;
            local_2c = (float)param_2;
            pfVar4 = (float*)this_00->second();
            *pfVar4 = local_2c + *pfVar4;
        }
        GetFloorHeight(this, this_00, param_4);
    }

    // 0x10048f440, 160 bytes, placed by class name
    // Entity::GetCeilingHeight(math::Vector3T<float> const&) const
    float Entity::GetCeilingHeight(Vector3T* param_1) {
        World* this_00;
        HeightMap* pHVar1;
        bool bVar2;
        int iVar3;
        shared_ptr* this_01;
        float fVar4;
        int local_2c;

        iVar3 = GetHeightMapLevel(this, (int)*(float*)param_1, (int)*(float*)(param_1 + 8));
        this_01 = (shared_ptr*)GetWorld(this);
        bVar2 = shared_ptr::operator_cast_to_bool(this_01);
        fVar4 = -1.0;
        if ((bVar2) && (iVar3 < 3)) {
            this_00 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_01);
            pHVar1 = (HeightMap*)this_00->GetHeightMap();
            pHVar1->GetFineHeight(&local_2c, iVar3, (int)*(float*)param_1, (int)*(float*)(param_1 + 8), 1, 0);
            fVar4 = (float)local_2c;
        }
        return fVar4;
    }

    // 0x10048f4e0, 96 bytes, placed by class name
    // Entity::GetRelativeCeilingHeight(int, int) const
    ulong Entity::GetRelativeCeilingHeight(int param_1, int param_2) {
        GraphNode* this_00;
        Vector2T<int>* this_01;
        float* pfVar1;
        ulong uVar2;

        uVar2 = GetAbsoluteCeilingHeight(this, param_1, param_2);
        if ((float)uVar2 != -1.0) {
            this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            this_01 = (Vector2T<int>*)this_00->GetWorldTranslation();
            pfVar1 = (float*)this_01->y();
            uVar2 = (ulong)(uint)((float)uVar2 - *pfVar1);
        }
        return uVar2;
    }

    // 0x10048f540, 176 bytes, placed by class name
    // Entity::GetAbsoluteCeilingHeight(int, int) const
    void Entity::GetAbsoluteCeilingHeight(int param_1, int param_2) {
        GraphNode* pGVar1;
        undefined8* puVar2;
        vector* pvVar3;
        float* pfVar4;
        Layout* this_00;
        undefined4 in_register_00000034;
        type* ptVar5;
        undefined8 local_30;
        undefined4 local_28;
        float local_24;

        ptVar5 = (type*)CONCAT44(in_register_00000034, param_1);
        if (param_1 == 0 && param_2 == 0) {
            pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            this_00 = (Layout*)pGVar1->GetWorldTranslation();
        } else {
            pGVar1 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            puVar2 = (undefined8*)pGVar1->GetWorldTranslation();
            local_30 = *puVar2;
            local_28 = *(undefined4*)(puVar2 + 1);
            local_24 = (float)param_1;
            this_00 = (Layout*)&local_30;
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar5);
            *(float*)pvVar3 = local_24 + *(float*)pvVar3;
            local_24 = (float)param_2;
            pfVar4 = (float*)this_00->second();
            *pfVar4 = local_24 + *pfVar4;
        }
        GetCeilingHeight(this, (Vector3T*)this_00);
    }

    // 0x10048f5f0, 64 bytes, placed by class name
    // Entity::GetOverlayHeight() const
    int Entity::GetOverlayHeight() {
        char cVar1;
        int iVar2;
        NXTPixToolkit* this_00;
        Vector2T<int>* this_01;
        float* pfVar3;

        cVar1 = HasAABB(this);
        iVar2 = 0;
        if (cVar1 != '\0') {
            this_00 = (NXTPixToolkit*)GetAABB(this);
            this_01 = (Vector2T<int>*)this_00->GetScreen();
            pfVar3 = (float*)this_01->y();
            iVar2 = (int)*pfVar3;
        }
        return iVar2;
    }

    // 0x10048f650, 80 bytes, placed by class name
    // Entity::GetHeightMapLevelAtCoord(CoordFine const&, LinkMap const*)
    uint Entity::GetHeightMapLevelAtCoord(CoordFine* param_1, LinkMap* param_2) {
        byte bVar1;
        uint uVar2;
        CoordGrid local_30;

        uVar2 = param_1->field_0;
        if ((param_2 != (LinkMap*)0) && ((int)uVar2 < 3)) {
            new (&local_30) game::CoordGrid(param_1);
            bVar1 = param_2->IsLinkBelow(&local_30);
            uVar2 = uVar2 + bVar1;
        }
        return uVar2;
    }

    // 0x10048f6a0, 96 bytes, placed by class name
    // Entity::GetFloorHeightAtCoord(CoordFine const&, HeightMap const&, LinkMap const*, bool, HeightOffsetType)
    undefined4 Entity::GetFloorHeightAtCoord(CoordFine* param_1, HeightMap* param_2, LinkMap* param_3,
                                             undefined4 param_4, undefined4 param_5) {
        undefined4 uVar1;
        undefined4 local_2c;

        uVar1 = GetHeightMapLevelAtCoord(param_1, param_3);
        param_2->GetFineHeight(&local_2c, uVar1, (int)param_1->field_4, (int)param_1->field_12, param_4, param_5);
        return local_2c;
    }

    // 0x10048f700, 64 bytes, placed by class name
    // Entity::GetLoadImportance() const
    undefined8 Entity::GetLoadImportance() {
        World* pWVar1;
        bool bVar2;
        undefined8 uVar3;

        bVar2 = m_world->operator_cast_to_bool();
        uVar3 = 0;
        if (bVar2) {
            pWVar1 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)m_world);
            uVar3 = pWVar1->GetEntityLoadImportance((int)(char)field_64);
        }
        return uVar3;
    }

    // 0x10048f740, 32 bytes, placed by class name
    // Entity::GetAnimationAudioBussType() const
    int Entity::GetAnimationAudioBussType() {
        int iVar1;

        iVar1 = 12;
        if (field_64 < 3) {
            iVar1 = 11 - (uint)field_64;
        }
        return iVar1;
    }

    // 0x10048f760, 32 bytes, placed by class name
    // Entity::GetAnimationAudioSoundType() const
    char Entity::GetAnimationAudioSoundType() {
        char cVar1;

        cVar1 = '\x04';
        if (field_64 != 0) {
            cVar1 = (field_64 == 4) * '\x02' + '\x05';
        }
        return cVar1;
    }

    // 0x10048f780, 336 bytes, placed by class name
    // Entity::PickTestDebugCursor() const
    undefined8 Entity::PickTestDebugCursor() {
        float fVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        shared_ptr<World>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar5;
        SceneManager* this_01;
        RT7Core* this_02;
        Layout* this_03;
        Minimap* this_04;
        World* pWVar6;
        Matrix44T* this_05;
        Matrix44T* pMVar7;
        Matrix44T* pMVar8;
        GraphNode* this_06;
        AABB* pAVar9;
        vector* pvVar10;
        float* pfVar11;
        undefined8 uVar12;
        Sphere2D local_40;

        this_00 = (shared_ptr<World>*)GetWorld(this);
        phVar5 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)shared_ptr<World>::operator->(this_00);
        this_01 = (SceneManager*)
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar5);
        phVar5 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)shared_ptr<World>::operator->(this_00);
        this_02 = (RT7Core*)
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar5);
        this_03 = (Layout*)this_02->GetRenderTargetsManager();
        this_04 = (Minimap*)this_01->GetGameSceneRect();
        new (&local_40) math::Sphere2D();
        this_05 = (Matrix44T*)&field_100;
        cVar2 = this_05->Ready();
        if (cVar2 == '\0') {
            pWVar6 = (World*)shared_ptr<World>::operator->(this_00);
            this_05 = (Matrix44T*)pWVar6->GetLastCameraViewMatrix();
            pWVar6 = (World*)shared_ptr<World>::operator->(this_00);
            pMVar7 = (Matrix44T*)pWVar6->GetLastCameraProjectionMatrix();
            pWVar6 = (World*)shared_ptr<World>::operator->(this_00);
            pMVar8 = (Matrix44T*)pWVar6->GetLastViewProjectionMatrix();
            iVar3 = this_04->GetPos();
            iVar4 = this_04->GetLevel();
            this_06 = (GraphNode*)GetNode(this);
            pAVar9 = (AABB*)this_06->GetWorldAABB();
            local_40.Set(this_05, pMVar7, pMVar8, iVar3, iVar4, pAVar9);
        } else {
            math::Sphere2D::operator=(&local_40, (Sphere2D*)this_05);
        }
        cVar2 = local_40.Ready();
        if (cVar2 == '\0') {
            uVar12 = 0;
        } else {
            pvVar10 = eastl::string::Layout::SSOBeginPtr(this_03, (type*)this_05);
            fVar1 = *(float*)pvVar10;
            pfVar11 = (float*)this_03->y();
            uVar12 = local_40.PointInside((int)fVar1, (int)*pfVar11, 0);
        }
        return uVar12;
    }

    // 0x1004943b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Entity::NullEntity) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5258, &Entity::NullEntity, 4294967296);
    }

    // 0x1004943f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
        new (&Entity::__m_toString) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_string_100ee6c90, &Entity::__m_toString, 4294967296);
    }

} // namespace jag::game
