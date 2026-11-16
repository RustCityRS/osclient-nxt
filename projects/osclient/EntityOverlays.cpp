// projects/osclient/EntityOverlays.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "EntityOverlays.h"

namespace jag::oldscape {
    // 0x1001842d0
    void EntityOverlays::OverlayExistsAtIndex(int arg1) {
        IsValidObject((long)arg1);
    }

    // 0x100184320
    void EntityOverlays::DestroyOverlay(int arg1) {
        Destroy((long)arg1);
    }

    // 0x100184460
    uint8_t* EntityOverlays::GetLayer(int arg1) {
        Array<shared_ptr<rs2lib::IfType>>* this_01;

        uint8_t* puVar3 = &rs2lib::NULL_IFTYPE;
        if (-1 < arg1) {
            if (IsValidObject((unsigned long)arg1) != '\0') {
                if (((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[(unsigned long)arg1])->end() !=
                    0) {
                    this_01 = (Array<shared_ptr<rs2lib::IfType>>*)(*this)[(unsigned long)arg1];
                    puVar3 = (uint8_t*)(*this_01)[0];
                }
            }
        }
        return puVar3;
    }

    // 0x100184570
    uint64_t EntityOverlays::GetOverlay(int arg1) {
        if (-1 < arg1) {
            if (IsValidObject((long)arg1) != '\0') {
                return (*this)[(long)arg1];
            }
        }
        return 0;
    }

    // 0x1001845b0
    void EntityOverlays::ForEachOverlay(std::function<void(Array<shared_ptr<rs2lib::IfType>>&)> callback) {
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;
        unsigned long arg1;

        int iVar2 = capacity();
        if (0 < iVar2) {
            arg1 = 0;
            do {
                if (IsValidObject(arg1) != '\0') {
                    ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*this)[arg1];
                    std::function<void(Array<shared_ptr<rs2lib::IfType>>&)>::operator()(
                        (function<void(Array<shared_ptr<rs2lib::IfType>>&)>*)callback, ifTypes);
                }
                arg1 = arg1 + 1;
                iVar2 = capacity();
            } while ((long)arg1 < (long)iVar2);
        }
    }

    // 0x100184640
    LocLayer EntityOverlays::OverlayTypeFromLocLayer(LocLayer locLayer) {
        return locLayer;
    }

    // 0x100184650
    unsigned long EntityOverlays::AnyOverlaysOnTile(const rs2lib::CoordGrid& coordGrid) {
        array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>* this_00;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_01;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* prVar2;
        unsigned long uVar3;

        if ((ClientConstants::IsCoordInBuildArea(coordGrid) != '\0') &&
            (this_00 = (array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>*)GetStaticEntityOverlays(coordGrid),
             this_00 != nullptr)) {
            this_01 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)this_00->begin();
            prVar2 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                             eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                             eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)this_00->end();
            if (this_01 != prVar2) {
                do {
                    uVar3 = this_01->empty();
                    if ((char)uVar3 != '\x01') {
                        return uVar3 ^ 1;
                    }
                    this_01 = this_01 + 192;
                } while (this_01 != prVar2);
                return uVar3 ^ 1;
            }
        }
        return 0;
    }

    // 0x1001847c0
    unsigned long EntityOverlays::CreateStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid,
                                                      StaticEntityOverlayType staticEntityOverlayType) {
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        long lVar5;
        array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>, 104ul>*
            this_00;
        array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>* this_01;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>* this_02;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* prVar6;
        Logger* this_03;
        unsigned long* puVar7;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_60;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* local_58;
        unsigned long local_50;
        uint64_t local_48;
        ReturnValue local_40;

        bool cVar1 = IsTypeValid(staticEntityOverlayType);
        unsigned long uVar8 = 4294967295;
        if (cVar1) {
            cVar1 = ClientConstants::IsCoordInBuildArea(coordGrid);
            if (cVar1) {
                LogStaticOverlayCreated((unsigned int)arg1, coordGrid, staticEntityOverlayType);
                lVar5 = GetStaticEntityOverlays(coordGrid);
                if (lVar5 == 0) {
                    local_40 = std::make_unique<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>();
                    iVar2 = coordGrid.GetX();
                    this_00 = &field_2104[(long)iVar2];
                    iVar2 = coordGrid.GetZ();
                    this_01 = (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>,
                                     104ul>*)(*this_00)[(long)iVar2];
                    iVar2 = coordGrid.GetPos();
                    this_02 = (unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>*)(*this_01)[(
                        long)iVar2];
                    *this_02 = &local_40;
                }
                lVar5 = GetStaticEntityOverlays(coordGrid);
                if (lVar5 != 0) {
                    prVar6 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                     eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                                     eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                        GetOverlaysForEntityUnchecked(coordGrid, staticEntityOverlayType);
                    local_40 = prVar6->find((unsigned int)arg1);
                    local_58 = prVar6;
                    local_60.end();
                    cVar1 = local_40 != local_60;
                    if (cVar1) {
                        this_03 = logger::default_logger();
                        local_50 = (unsigned long)(unsigned int)arg1;
                        local_48 = coordGrid.GetX();
                        uVar3 = coordGrid.GetZ();
                        uVar4 = coordGrid.GetPos();
                        this_03->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/EntityOverlays.cpp",
                                     100, "Overlay with ID %d already exists for type %d at %d,%d,%d", local_50,
                                     (unsigned long)staticEntityOverlayType, local_48, (unsigned long)uVar3,
                                     (unsigned long)uVar4);
                        lVar5 = *local_40;
                        Destroy(*(unsigned long*)(lVar5 + 8));
                    }
                    iVar2 = CreateOverlay();
                    prVar6 = local_58;
                    local_60.end();
                    cVar1 = local_40 != local_60;
                    uVar8 = (unsigned long)iVar2;
                    if (!cVar1) {
                        puVar7 = (unsigned long*)(*prVar6)[(unsigned int)arg1];
                    } else {
                        lVar5 = *local_40;
                        puVar7 = (unsigned long*)(lVar5 + 8);
                    }
                    *puVar7 = uVar8;
                }
            }
        }
        return uVar8 & 4294967295;
    }

    // 0x100184d00
    int EntityOverlays::CreateOverlay() {
        ReturnValue local_28;

        local_28[0]._0_4_ = 1;
        unsigned long uVar1 = Create<int>(local_28);
        return local_14 = (int)uVar1;
        Array<shared_ptr<rs2lib::IfType>>* this_00 = (Array<shared_ptr<rs2lib::IfType>>*)(*this)[(long)local_14];
        make_shared<rs2lib::IfType, int const&>(&local_28, &local_14);
        shared_ptr<rs2lib::IfType>* psVar2 = (shared_ptr<rs2lib::IfType>*)(*this_00)[0];
        *psVar2 = local_28;
        psVar2 = (shared_ptr<rs2lib::IfType>*)(*this_00)[0];
        long lVar3 = (*psVar2).operator->();
        *(uint32_t*)(lVar3 + 88) = 4294967295;
        psVar2 = (shared_ptr<rs2lib::IfType>*)(*this_00)[0];
        uint8_t* puVar4 = (uint8_t*)(*psVar2).operator->();
        *puVar4 = 1;
        psVar2 = (shared_ptr<rs2lib::IfType>*)(*this_00)[0];
        lVar3 = (*psVar2).operator->();
        *(uint32_t*)(lVar3 + 12) = 0;
        psVar2 = (shared_ptr<rs2lib::IfType>*)(*this_00)[0];
        lVar3 = (*psVar2).operator->();
        *(uint8_t*)(lVar3 + 24) = 1;
        return local_14;
    }

    // 0x100184e90
    uint32_t EntityOverlays::GetStaticOverlayIndex(int arg1, const rs2lib::CoordGrid& coordGrid,
                                                   StaticEntityOverlayType staticEntityOverlayType) {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        ReturnValue local_38;

        bool cVar1 = IsTypeValid(staticEntityOverlayType);
        if (((cVar1) && (cVar1 = ClientConstants::IsCoordInBuildArea(coordGrid), cVar1)) &&
            (lVar2 = GetStaticEntityOverlays(coordGrid), lVar2 != 0)) {
            local_38 = ((rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                                eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                            GetOverlaysForEntityUnchecked(coordGrid, staticEntityOverlayType))
                           ->find(arg1);
            local_40.end();
            cVar1 = local_38 != local_40;
            if (cVar1) {
                lVar2 = *local_38;
                return *(uint32_t*)(lVar2 + 8);
            }
        }
        return 4294967295;
    }

    // 0x100184f50
    void EntityOverlays::DestroyStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid,
                                              StaticEntityOverlayType staticEntityOverlayType) {
        int iVar2;
        long lVar3;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_00;
        array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>, 104ul>*
            this_01;
        array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>* this_02;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        ReturnValue local_40;

        if (IsTypeValid(staticEntityOverlayType)) {
            if (ClientConstants::IsCoordInBuildArea(coordGrid)) {
                lVar3 = GetStaticEntityOverlays(coordGrid);
                if (lVar3 != 0) {
                    this_00 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                      eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                                      eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                        GetOverlaysForEntityUnchecked(coordGrid, staticEntityOverlayType);
                    local_40 = this_00->find(arg1);
                    local_48.end();
                    if (local_40 != local_48) {
                        lVar3 = *local_40;
                        Destroy(*(unsigned long*)(lVar3 + 8));
                        this_00->erase(arg1);
                        if (!(AnyOverlaysOnTile(coordGrid))) {
                            iVar2 = coordGrid.GetX();
                            this_01 = &field_2104[(long)iVar2];
                            iVar2 = coordGrid.GetZ();
                            this_02 =
                                (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>,
                                       104ul>*)(*this_01)[(long)iVar2];
                            iVar2 = coordGrid.GetPos();
                            ((unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>*)(*this_02)[(
                                 long)iVar2])
                                ->reset(nullptr);
                        }
                    }
                }
            }
        }
    }

    // 0x100185130
    void EntityOverlays::DestroyStaticOverlays(const rs2lib::CoordGrid& coordGrid,
                                               StaticEntityOverlayType staticEntityOverlayType) {
        int iVar2;
        long lVar3;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* this_00;
        array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>, 104ul>*
            this_01;
        array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>* this_02;
        ReturnValue local_40;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        bool cVar1 = IsTypeValid(staticEntityOverlayType);
        if (cVar1) {
            cVar1 = ClientConstants::IsCoordInBuildArea(coordGrid);
            if (cVar1) {
                lVar3 = GetStaticEntityOverlays(coordGrid);
                if (lVar3 != 0) {
                    this_00 = (vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)
                        GetOverlaysForEntityUnchecked(coordGrid, staticEntityOverlayType);
                    local_40 = this_00->rbegin();
                    local_38.end();
                    cVar1 = local_40 != local_38;
                    if (cVar1) {
                        do {
                            lVar3 = *local_40;
                            Destroy(*(unsigned long*)(lVar3 + 8));
                            ++local_40;
                            cVar1 = local_40 != local_38;
                        } while (cVar1);
                    }
                    this_00->clear();
                    cVar1 = AnyOverlaysOnTile(coordGrid);
                    if (!cVar1) {
                        iVar2 = coordGrid.GetX();
                        this_01 = &field_2104[(long)iVar2];
                        iVar2 = coordGrid.GetZ();
                        this_02 = (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>,
                                         104ul>*)(*this_01)[(long)iVar2];
                        iVar2 = coordGrid.GetPos();
                        ((unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>*)(*this_02)[(
                             long)iVar2])
                            ->reset(nullptr);
                    }
                }
            }
        }
    }

    // 0x1001852b0
    void EntityOverlays::DestroyAllStaticOverlays() {
        bool cVar1;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>* this_00;
        long lVar2;
        rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>* this_01;
        rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>* prVar3;
        unsigned long arg1;
        obj_iterator* arg1_00;
        obj_iterator* arg1_01;
        uint64_t local_78;
        uint64_t local_70;
        obj_iterator* local_68;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>* local_60;
        array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>* local_58;
        unsigned long local_50;
        array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>, 104ul>*
            local_48;

        array<std::array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>,
                         104ul>,
              4ul>* local_38 =
            (array<std::array<
                       std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>,
                       104ul>,
                   4ul>*)&field_2104;
        unsigned long local_40 = 0;
        do {
            local_48 =
                (array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>,
                       104ul>*)(*local_38)[local_40];
            arg1 = 0;
            do {
                local_50 = arg1;
                local_58 = (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>,
                                  104ul>*)(*local_48)[arg1];
                arg1_01 = nullptr;
                do {
                    arg1_00 = arg1_01;
                    this_00 = (unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>*)(*local_58)[(
                        unsigned long)arg1_01];
                    lVar2 = this_00->get();
                    if (lVar2 != 0) {
                        local_68 = arg1_01;
                        local_60 = this_00;
                        **this_00;
                        this_01 =
                            (rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>*)std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>::begin();
                        prVar3 =
                            (rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>*)std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>::end();
                        for (; this_01 != prVar3; this_01 = this_01 + 192) {
                            local_78 = this_01->begin();
                            local_70 = this_01->end();
                            while (arg1_00 = (obj_iterator*)&local_70, cVar1 = local_78 != local_70, cVar1) {
                                lVar2 = *local_78;
                                Destroy(*(unsigned long*)(lVar2 + 8));
                                ++local_78;
                            }
                        }
                        *local_60 = arg1_00;
                        arg1_01 = local_68;
                    }
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != (obj_iterator*)104);
                arg1 = local_50 + 1;
            } while (arg1 != 104);
            local_40 = local_40 + 1;
        } while (local_40 != 4);
    }

} // namespace jag::oldscape
