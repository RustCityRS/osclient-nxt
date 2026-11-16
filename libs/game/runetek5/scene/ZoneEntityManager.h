// libs/game/runetek5/scene/ZoneEntityManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ZoneBuiltArea {
    public:
        uint8_t AllowStacking() const;
        unsigned int GetBuildMode() const;
        uint32_t WithinBuiltArea(const game::CoordGrid& coordGrid) const;
        void SetBuiltArea(const math::Point<int>& point, int arg2);
        ZoneBuiltArea(bool arg1);

    private:
        bool field_0;
        uint8_t _unknown_1[3];
        unsigned int m_buildMode;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        uint8_t _unknown_24[4];
    };

    template <typename...> // 1 instantiations, e.g. <game::CoordGrid, game::Entity>
    class ZoneEntityManager {
    public:
        // virtual methods in vtable order
        virtual ~ZoneEntityManager();
        virtual void SetBuiltArea(const math::Point<int>& point, int arg2);
        ZoneEntityManager(const math::Point<int>& point, int arg2, bool arg3);
        void AddZoneEntity(const game::CoordGrid& coordGrid, const shared_ptr<game::Entity>& entity);
        void WithinBuiltArea(const game::CoordGrid& coordGrid) const;
    };

    // 0x10047b260
    ZoneEntityManager<game::CoordGrid, game::Entity>::ZoneEntityManager(const math::Point<int>& point, int arg2,
                                                                        bool arg3) {
        *(uint8_t**)this = PTR_vtable_100ee7170 + 16;
        map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>>* local_40 =
            (map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>>*)(this + 8);
        new ((this + 8)) eastl::map(local_48);
        new ((this + 56)) ZoneBuiltArea(arg3);
        (**(void (**)(...))(*(long*)this + 16))(this, point, arg2);
    }

    // 0x10047b400
    ZoneEntityManager<game::CoordGrid, game::Entity>::~ZoneEntityManager() {
        *(uint8_t**)this = PTR_vtable_100ee7170 + 16;
        ((this + 8))->~multimap();
    }

    // 0x10047b780
    void ZoneEntityManager<game::CoordGrid, game::Entity>::AddZoneEntity(const game::CoordGrid& coordGrid,
                                                                         const shared_ptr<game::Entity>& entity) {
        InterfaceMouseEvent local_60;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        shared_ptr<game::Entity>* local_38;

        Skybox* this_00 = (Skybox*)(this + 56);
        bool cVar1 = this_00->ShowSkybox();
        if (!cVar1) {
            local_38 = entity;
            local_60 = ((this + 8))->find(coordGrid);
            local_40.end();
            cVar1 = local_60 != local_40;
            if (cVar1) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ZoneEntityManager.h",
                          104, "ZoneEntityManager: Tried to add an entity to a location which is already used");
                return;
            }
            entity = local_38;
        }
        int iVar2 = this_00->GetZ();
        if (((iVar2 == 7) || (iVar2 = this_00->GetZ(), iVar2 == 6)) ||
            (cVar1 = WithinBuiltArea(this, coordGrid), cVar1)) {
            local_60 = eastl::make_pair<game::CoordGrid const&, shared_ptr<game::Entity> const&>(coordGrid, entity);
            eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid const, shared_ptr<game::Entity>>,
                          eastl::less<game::CoordGrid>, eastl::allocator,
                          eastl::use_first<eastl::pair<game::CoordGrid const, shared_ptr<game::Entity>>>, true,
                          false>::insert<eastl::pair<game::CoordGrid, shared_ptr<game::Entity>>,
                                         void>(&local_40,
                                               (pair<game::CoordGrid, shared_ptr<game::Entity> _>*)(this + 8));
            return;
        }
    }

    // 0x10047baf0
    void ZoneEntityManager<game::CoordGrid, game::Entity>::WithinBuiltArea(const game::CoordGrid& coordGrid) const {
        ((this + 56))->WithinBuiltArea(coordGrid);
    }

    // 0x10047f050
    void ZoneEntityManager<game::CoordGrid, game::Entity>::SetBuiltArea(const math::Point<int>& point, int arg2) {
        uint32_t uVar1;
        uint32_t uVar2;
        bool cVar4;
        CoordGrid* coordGrid;
        long* plVar6;
        CoordGrid coordGrid_00;
        ReturnValue local_378;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_370;
        ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>, game::CoordGrid>
            local_368;

        ZoneBuiltArea* this_00 = (ZoneBuiltArea*)(this + 56);
        this_00->SetBuiltArea(point, arg2);
        int iVar5 = this_00->GetZ();
        if (iVar5 != 7) {
            iVar5 = this_00->GetZ();
            if (iVar5 != 6) {
                local_368 = ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>,
                                                         game::CoordGrid>(*((this + 8)));
                local_378 = ((this + 8))->rbegin();
                local_370.end();
                while (true) {
                    cVar4 = local_378 != local_370;
                    if (!cVar4)
                        break;
                    coordGrid = (CoordGrid*)*local_378;
                    cVar4 = WithinBuiltArea(this, coordGrid);
                    if (!cVar4) {
                        plVar6 = (long*)(*((coordGrid + 1))).operator->();
                        (**(void (**)(...))(*plVar6 + 200))(plVar6);
                        uVar1 = coordGrid->field_0;
                        uVar2 = coordGrid->field_4;
                        coordGrid_00.field_8 = coordGrid->field_8;
                        coordGrid_00.field_4 = uVar2;
                        coordGrid_00.field_0 = uVar1;
                        coordGrid_00._12_4_ = 0;
                        local_368.erase(coordGrid_00);
                    }
                    ++local_378;
                }
            }
        }
    }

    // 0x100486aa0
    ZoneBuiltArea::ZoneBuiltArea(bool arg1)
        : field_0(arg1), m_buildMode(3), field_8(0), field_12(0), field_16(0), field_20(0) {}

} // namespace jag
