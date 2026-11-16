// libs/game/runetek5/scene/ObjStackList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ObjStackList.h"

namespace jag {
    // 0x10047b230
    ObjStackList::ObjStackList(const math::Point<int>& point, int arg2)
        : ZoneEntityManager<game::CoordGrid, game::Entity>(point, arg2, false) {}

    // 0x10047b300
    ObjStackList::~ObjStackList() {
        ClearObjStack();
    }

    // 0x10047b340
    void ObjStackList::ClearObjStack() {
        long lVar2;
        long* plVar3;
        shared_ptr<game::Entity>* this_01;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;

        auto local_38 = field_8.rbegin();
        local_30.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                lVar2 = *local_38;
                this_01 = (shared_ptr<game::Entity>*)(lVar2 + 16);
                plVar3 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar3 + 200))(plVar3);
                ((Entity*)(*this_01).operator->())->ResetWorld();
                this_01->reset();
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
        field_8.clear();
    }

    // 0x10047b450
    void ObjStackList::AddObjStack(const shared_ptr<game::World>& world, const game::ConfigProvider* configProvider,
                                   const game::CoordGrid& coordGrid, unsigned int arg4, unsigned int arg5) {
        ObjStackEntity* this_00;
        long lVar2;
        shared_ptr<oldscape::dash3d::Decor> local_68;
        GraphNode* local_50;
        int local_48[4];

        ConfigProvider* local_78 = configProvider;
        auto local_70 = field_8.find(coordGrid);
        local_48->end();
        if (local_70 == *local_48 == '\0') {
            lVar2 = *local_70;
            this_00 = (ObjStackEntity*)((lVar2 + 16))->end();
        } else {
            local_48[0] = 3;
            local_50 = graphics::GraphNode::Create<int>(*local_48);
            MakeSharedPool<ObjStackEntity, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<game::World> const&,
                                                            game::ConfigProvider const*&, game::CoordGrid const&>(
                (GraphNode**)local_48, (shared_ptr<game::World>*)&local_50, (ConfigProvider**)world,
                (CoordGrid*)&local_78);
            this_00 = (ObjStackEntity*)local_48->end();
            local_50->SetEntity(this_00);
            local_68 = shared_ptr(local_48);
            AddZoneEntity(coordGrid, local_68);
        }
        this_00->AddObj(arg4, arg5);
    }

    // 0x10047b890
    void ObjStackList::DelObjStack(const game::CoordGrid& coordGrid, unsigned int arg2) {
        long lVar2;
        ObjStackEntity* this_00;
        ReturnValue local_40;
        rbtree_iterator<eastl::pair<game::CoordGrid const, shared_ptr<game::Entity> _>,
                        eastl::pair<game::CoordGrid const, shared_ptr<game::Entity> _> const*,
                        eastl::pair<game::CoordGrid const, shared_ptr<game::Entity> _> const&>* local_38;

        auto local_30 = field_8.find(coordGrid);
        local_40.end();
        if (local_30 != local_40) {
            lVar2 = *local_30;
            this_00 = (ObjStackEntity*)((lVar2 + 16))->end();
            this_00->DelObj(arg2);
            if (this_00->IsEmpty()) {
                this_00->Destruct();
                new (&local_38) eastl::ListIterator(&local_30);
                local_40 = field_8.erase(local_38);
            }
        }
    }

    // 0x10047b9a0
    void ObjStackList::AdjustCount(const game::CoordGrid& coordGrid, unsigned int arg2, unsigned int arg3,
                                   unsigned int arg4) {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;

        auto local_40 = field_8.find(coordGrid);
        local_48.end();
        if (local_40 != local_48 != '\0') {
            lVar2 = *local_40;
            ((ObjStackEntity*)((lVar2 + 16))->end())->AdjustCount(arg2, arg3, arg4);
        }
    }

    // 0x10047ba30
    void ObjStackList::MainLogic(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder) {
        CoordGrid* coordGrid;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        auto local_48 = field_8.rbegin();
        local_40.end();
        bool cVar1 = local_48 != local_40;
        if (cVar1) {
            do {
                coordGrid = (CoordGrid*)*local_48;
                cVar1 = WithinBuiltArea(*coordGrid);
                if (cVar1) {
                    ((ObjStackEntity*)((coordGrid + 1))->end())->Build(rt7Core, assetBuilder);
                }
                ++local_48;
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
    }

} // namespace jag
