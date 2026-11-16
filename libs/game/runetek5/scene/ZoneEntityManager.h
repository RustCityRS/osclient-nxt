// libs/game/runetek5/scene/ZoneEntityManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ZoneBuiltArea {
    public:
        AllowStacking() const;
        uint GetBuildMode() const;
        WithinBuiltArea(game::CoordGrid const&) const;
        void SetBuiltArea(math::Point<int> const&, int);
        ZoneBuiltArea(bool);

        // data members, from how the methods use this: 28 bytes
        bool field_0; // offset 0
        char _unknown_1[3];
        uint m_buildMode; // offset 4
        int field_8;      // offset 8
        int field_12;     // offset 12
        int field_16;     // offset 16
        int field_20;     // offset 20
        char _unknown_24[4];
    };

    template <typename...> // 1 instantiations, e.g. <game::CoordGrid, game::Entity>
    class ZoneEntityManager {
    public:
        // virtual methods in vtable order
        virtual ~ZoneEntityManager();
        virtual void SetBuiltArea(math::Point<int> const&, int);
        ZoneEntityManager(math::Point<int> const&, int, bool);
        void AddZoneEntity(game::CoordGrid const&, shared_ptr<game::Entity> const&);
        void WithinBuiltArea(game::CoordGrid const&) const;
    };

    // 0x10047b260, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // ZoneEntityManager<game::CoordGrid, game::Entity>::ZoneEntityManager(math::Point<int> const&, int, bool)
    void ZoneEntityManager<game::CoordGrid, game::Entity>::ZoneEntityManager(
        ZoneEntityManager<game::CoordGrid, game::Entity>* this, Point* param_1, int param_2, bool param_3) {
        allocator local_48[8];
        allocator* local_40;

        *(undefined**)this = PTR_vtable_100ee7170 + 16;
        eastl::allocator::allocator(local_48, "EASTL multimap");
        local_40 = (allocator*)(this + 8);
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 8));
        new ((this + 56)) ZoneBuiltArea(param_3);
        (**(code**)(*(long*)this + 16))(this, param_1, param_2);
    }

    // 0x10047b400, 32 bytes, base-object destructor, inline, placed by class name and debug map
    // ZoneEntityManager<game::CoordGrid, game::Entity>::~ZoneEntityManager()
    void ZoneEntityManager<game::CoordGrid, game::Entity>::~ZoneEntityManager(
        ZoneEntityManager<game::CoordGrid, game::Entity>* this) {
        *(undefined**)this = PTR_vtable_100ee7170 + 16;
        ((this + 8))->~multimap();
    }

    // 0x10047b780, 272 bytes, inline, placed by class name and debug map
    // ZoneEntityManager<game::CoordGrid, game::Entity>::AddZoneEntity(game::CoordGrid const&, shared_ptr<game::Entity> const&)
    void ZoneEntityManager<game::CoordGrid, game::Entity>::AddZoneEntity(
        ZoneEntityManager<game::CoordGrid, game::Entity>* this, CoordGrid* param_1, shared_ptr* param_2) {
        Skybox* this_00;
        char cVar1;
        int iVar3;
        undefined8 uVar4;
        hashtable_iterator_base* extraout_RDX;
        InterfaceMouseEvent local_60;
        hashtable_iterator_base local_40[8];
        shared_ptr* local_38;

        this_00 = (Skybox*)(this + 56);
        cVar1 = this_00->ShowSkybox();
        if (cVar1 == '\0') {
            local_38 = param_2;
            eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>,
                          eastl::less<game::CoordGrid>, eastl::allocator,
                          eastl::use_first<eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>>, true,
                          false>::find((CoordGrid*)&local_60);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            if (eastl::operator!=((eastl*)&local_60, local_40, extraout_RDX)) {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/ZoneEntityManager.h",
                                    104,
                                    "ZoneEntityManager: Tried to add an entity to a location which is already used");
                return;
            }
            param_2 = local_38;
        }
        iVar3 = this_00->GetZ();
        if (((iVar3 == 7) || (iVar3 = this_00->GetZ(), iVar3 == 6)) ||
            (cVar1 = WithinBuiltArea(this, param_1), cVar1 != '\0')) {
            eastl::make_pair<game::CoordGrid_const&, shared_ptr<game::Entity> const&>((eastl*)&local_60, param_1,
                                                                                      param_2);
            eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>,
                          eastl::less<game::CoordGrid>, eastl::allocator,
                          eastl::use_first<eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>>, true,
                          false>::insert<eastl::pair<game::CoordGrid, shared_ptr<game::Entity>>, void>((pair*)local_40);
            local_60.~InterfaceMouseEvent();
            return;
        }
    }

    // 0x10047baf0, 16 bytes, inline, placed by class name
    // ZoneEntityManager<game::CoordGrid, game::Entity>::WithinBuiltArea(game::CoordGrid const&) const
    void ZoneEntityManager<game::CoordGrid, game::Entity>::WithinBuiltArea(
        ZoneEntityManager<game::CoordGrid, game::Entity>* this, CoordGrid* param_1) {
        ((this + 56))->WithinBuiltArea(param_1);
    }

    // 0x10047f050, 320 bytes, inline, placed by class name
    // ZoneEntityManager<game::CoordGrid, game::Entity>::SetBuiltArea(math::Point<int> const&, int)
    void ZoneEntityManager<game::CoordGrid, game::Entity>::SetBuiltArea(
        ZoneEntityManager<game::CoordGrid, game::Entity>* this, Point* param_1, int param_2) {
        ZoneBuiltArea* this_00;
        undefined4 uVar1;
        undefined4 uVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        CoordGrid* pCVar6;
        long* plVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar8;
        CoordGrid CVar9;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_378[8];
        hashtable_iterator_base local_370[8];
        ScopedContainerElementEraser<
            eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>,
            game::CoordGrid>
            local_368[816];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (ZoneBuiltArea*)(this + 56);
        this_00->SetBuiltArea(param_1, param_2);
        iVar5 = this_00->GetZ();
        if (iVar5 != 7) {
            iVar5 = this_00->GetZ();
            if (iVar5 != 6) {
                ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>,
                                                             eastl::less<game::CoordGrid>, eastl::allocator>,
                                             game::CoordGrid>::ScopedContainerElementEraser(local_368,
                                                                                            (multimap*)(this + 8));
                eastl::vector<unsigned long,
                              eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                phVar8 = extraout_RDX;
                while (true) {
                    bVar3 = eastl::operator!=((eastl*)local_378, local_370, phVar8);
                    if (!bVar3)
                        break;
                    pCVar6 = (CoordGrid*)eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                      eastl::allocator>>&>::operator*(local_378);
                    cVar4 = WithinBuiltArea(this, pCVar6);
                    if (cVar4 == '\0') {
                        plVar7 = (long*)shared_ptr<game::Entity>::operator->((shared_ptr<game::Entity>*)(pCVar6 + 1));
                        (**(code**)(*plVar7 + 200))(plVar7);
                        uVar1 = pCVar6->field_0;
                        uVar2 = pCVar6->field_4;
                        CVar9._12_4_ = uVar2;
                        CVar9.field_8 = uVar1;
                        CVar9._0_8_ = local_368;
                        ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>,
                                                                     eastl::less<game::CoordGrid>, eastl::allocator>,
                                                     game::CoordGrid>::erase(CVar9);
                    }
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                      eastl::allocator>>&>::operator++(local_378);
                    phVar8 = extraout_RDX_00;
                }
                local_368->~ScopedContainerElementEraser();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004869a0, 16 bytes, complete-object destructor, inline, placed by class name
    // ZoneEntityManager<game::CoordGrid, game::Entity>::~ZoneEntityManager(): jumps straight to the base-object destructor

    // 0x1004869b0, 32 bytes, deleting destructor, inline, placed by class name
    // ZoneEntityManager<game::CoordGrid, game::Entity>::~ZoneEntityManager()
    void ZoneEntityManager<game::CoordGrid, game::Entity>::~ZoneEntityManager(
        ZoneEntityManager<game::CoordGrid, game::Entity>* this) {
        ~ZoneEntityManager(this);
        operator_delete(this);
    }

    // 0x100486a90, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ZoneBuiltArea::ZoneBuiltArea(bool): jumps straight to the base-object constructor

    // 0x100486aa0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ZoneBuiltArea::ZoneBuiltArea(bool)
    void ZoneBuiltArea::ZoneBuiltArea(bool param_1) {
        field_0 = param_1;
        m_buildMode = 3;
        field_8 = 0;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0;
    }

} // namespace jag
