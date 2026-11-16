// libs/game/runetek5/scene/ObjStackList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ObjStackList.h"

namespace jag {
    // 0x10047b230, 48 bytes, base-object constructor, placed by class name and debug map
    // ObjStackList::ObjStackList(math::Point<int> const&, int)
    void ObjStackList::ObjStackList(Point* param_1, int param_2) {
        new (this) ZoneEntityManager<game::CoordGrid, game::Entity>(param_1, param_2, false);
        field_0 = &PTR__ObjStackList_100f00f18;
    }

    // 0x10047b2f0, 16 bytes, complete-object constructor, placed by class name
    // ObjStackList::ObjStackList(math::Point<int> const&, int): jumps straight to the base-object constructor

    // 0x10047b300, 64 bytes, base-object destructor, placed by class name
    // ObjStackList::~ObjStackList()
    void ObjStackList::~ObjStackList() {
        field_0 = &PTR__ObjStackList_100f00f18;
        ClearObjStack(this);
        ~ZoneEntityManager();
    }

    // 0x10047b340, 192 bytes, placed by class name
    // ObjStackList::ClearObjStack()
    void ObjStackList::ClearObjStack() {
        long lVar1;
        Entity* this_00;
        bool bVar2;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_38[8];
        hashtable_iterator_base local_30[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_38, local_30, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                plVar3 = (long*)shared_ptr<game::Entity>::operator->((shared_ptr<game::Entity>*)(lVar1 + 16));
                (**(code**)(*plVar3 + 200))(plVar3);
                this_00 = (Entity*)shared_ptr<game::Entity>::operator->((shared_ptr<game::Entity>*)(lVar1 + 16));
                this_00->ResetWorld();
                shared_ptr<game::Entity>::reset();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                bVar2 = eastl::operator!=(local_38, local_30, extraout_RDX_00);
            } while (bVar2);
        }
        (&field_8)->clear();
    }

    // 0x10047b420, 16 bytes, complete-object destructor, placed by class name
    // ObjStackList::~ObjStackList(): jumps straight to the base-object destructor

    // 0x10047b430, 32 bytes, deleting destructor, placed by class name
    // ObjStackList::~ObjStackList()
    void ObjStackList::~ObjStackList() {
        ~ObjStackList(this);
        operator_delete(this);
    }

    // 0x10047b450, 304 bytes, placed by class name
    // ObjStackList::AddObjStack(shared_ptr<game::World> const&, game::ConfigProvider const*, game::CoordGrid const&, unsigned int, unsigned int)
    void ObjStackList::AddObjStack(shared_ptr* param_1, ConfigProvider* param_2, CoordGrid* param_3, uint param_4,
                                   uint param_5) {
        ObjStackEntity* this_00;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_0000008c;
        ConfigProvider* local_78;
        undefined1 local_70[8];
        GraphNode* local_50;
        shared_ptr local_48;

        local_78 = param_2;
        eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>,
                      eastl::less<game::CoordGrid>, eastl::allocator,
                      eastl::use_first<eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>>, true,
                      false>::find((CoordGrid*)local_70);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator==((eastl*)local_70, (hashtable_iterator_base*)&local_48, extraout_RDX)) {
            local_48._0_4_ = 3;
            local_50 = graphics::GraphNode::Create<int>((int*)&local_48);
            MakeSharedPool<ObjStackEntity, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<game::World> const&,
                                                            game::ConfigProvider_const*&, game::CoordGrid_const&>(
                &local_48, (MakeSharedPool<ObjStackEntity, 256>*)&local_50, (GraphNode**)param_1,
                (shared_ptr*)&local_78, (ConfigProvider**)param_3, (CoordGrid*)CONCAT44(in_register_0000008c, param_5));
            this_00 = (ObjStackEntity*)local_48.end();
            local_50->SetEntity(this_00);
            new ((local_70 + 8)) shared_ptr<oldscape::dash3d::Decor>(&local_48);
            AddZoneEntity(param_3, (shared_ptr*)(local_70 + 8));
            ((local_70 + 8))->~shared_ptr();
            local_48.~shared_ptr();
        } else {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_70);
            this_00 = (ObjStackEntity*)((lVar2 + 16))->end();
        }
        this_00->AddObj(param_4, param_5);
    }

    // 0x10047b890, 176 bytes, placed by class name
    // ObjStackList::DelObjStack(game::CoordGrid const&, unsigned int)
    void ObjStackList::DelObjStack(CoordGrid* param_1, uint param_2) {
        bool bVar1;
        char cVar2;
        long lVar3;
        ObjStackEntity* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        undefined8 local_38;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_30[8];

        eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>,
                      eastl::less<game::CoordGrid>, eastl::allocator,
                      eastl::use_first<eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>>, true,
                      false>::find((CoordGrid*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_30, local_40, extraout_RDX);
        if (bVar1) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const,
                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_30);
            this_00 = (ObjStackEntity*)((lVar3 + 16))->end();
            this_00->DelObj(param_2);
            cVar2 = this_00->IsEmpty();
            if (cVar2 != '\0') {
                (*(code*)this_00->field_0[25])(this_00);
                new (&local_38)
                    eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_30);
                eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>,
                              eastl::less<game::CoordGrid>, eastl::allocator,
                              eastl::use_first<eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>>, true,
                              false>::erase(local_40, &field_8, local_38);
            }
        }
    }

    // 0x10047b9a0, 144 bytes, placed by class name
    // ObjStackList::AdjustCount(game::CoordGrid const&, unsigned int, unsigned int, unsigned int)
    void ObjStackList::AdjustCount(CoordGrid* param_1, uint param_2, uint param_3, uint param_4) {
        long lVar1;
        ObjStackEntity* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[8];
        CoordGrid local_40;

        local_40._12_4_ = param_4;
        eastl::rbtree<game::CoordGrid, eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>,
                      eastl::less<game::CoordGrid>, eastl::allocator,
                      eastl::use_first<eastl::pair<game::CoordGrid_const, shared_ptr<game::Entity>>>, true,
                      false>::find(&local_40);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=((eastl*)&local_40, local_48, extraout_RDX)) {
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
            this_00 = (ObjStackEntity*)((lVar1 + 16))->end();
            this_00->AdjustCount(param_2, param_3, local_40._12_4_);
        }
    }

    // 0x10047ba30, 192 bytes, placed by class name
    // ObjStackList::MainLogic(graphics::RT7Core&, game::AssetBuilder&)
    void ObjStackList::MainLogic(RT7Core* param_1, AssetBuilder* param_2) {
        ObjStackEntity* this_00;
        bool bVar1;
        char cVar2;
        CoordGrid* pCVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_48, local_40, extraout_RDX);
        if (bVar1) {
            do {
                pCVar3 = (CoordGrid*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_48);
                cVar2 = WithinBuiltArea(pCVar3);
                if (cVar2 != '\0') {
                    this_00 = (ObjStackEntity*)((pCVar3 + 1))->end();
                    this_00->Build(param_1, param_2);
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_48);
                bVar1 = eastl::operator!=(local_48, local_40, extraout_RDX_00);
            } while (bVar1);
        }
    }

} // namespace jag
