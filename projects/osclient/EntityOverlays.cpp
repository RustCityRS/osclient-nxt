// projects/osclient/EntityOverlays.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "EntityOverlays.h"

namespace jag::oldscape {
    // 0x1001842d0, 16 bytes, placed by class name and debug map
    // EntityOverlays::OverlayExistsAtIndex(int)
    void EntityOverlays::OverlayExistsAtIndex(int param_1) {
        IsValidObject((long)param_1);
    }

    // 0x100184320, 16 bytes, placed by class name and debug map
    // EntityOverlays::DestroyOverlay(int)
    void EntityOverlays::DestroyOverlay(int param_1) {
        Destroy((long)param_1);
    }

    // 0x100184460, 112 bytes, placed by class name and debug map
    // EntityOverlays::GetLayer(int)
    undefined1* EntityOverlays::GetLayer(int param_1) {
        char cVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar2;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_01;
        undefined1* puVar3;

        puVar3 = &rs2lib::NULL_IFTYPE;
        if (-1 < param_1) {
            cVar1 = IsValidObject((ulong)param_1);
            if (cVar1 != '\0') {
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](
                        (RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>*)this,
                        (ulong)param_1);
                lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (lVar2 != 0) {
                    this_01 = (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)
                        RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](
                            (RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>*)this,
                            (ulong)param_1);
                    puVar3 = (undefined1*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_01, 0);
                }
            }
        }
        return puVar3;
    }

    // 0x100184570, 64 bytes, placed by class name and debug map
    // EntityOverlays::GetOverlay(int)
    undefined8 EntityOverlays::GetOverlay(int param_1) {
        char cVar1;
        undefined8 uVar2;

        if (-1 < param_1) {
            cVar1 = IsValidObject((long)param_1);
            if (cVar1 != '\0') {
                uVar2 = RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](
                    (RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>*)this, (long)param_1);
                return uVar2;
            }
        }
        return 0;
    }

    // 0x1001845b0, 112 bytes, placed by class name and debug map
    // EntityOverlays::ForEachOverlay(std::function<void (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>)
    /* EntityOverlays::ForEachOverlay(std::function<void
   (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>) */

    void EntityOverlays::ForEachOverlay(function<void(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>* param_2) {
        char cVar1;
        int iVar2;
        Array* pAVar3;
        ulong uVar4;

        iVar2 = capacity();
        if (0 < iVar2) {
            uVar4 = 0;
            do {
                cVar1 = IsValidObject(uVar4);
                if (cVar1 != '\0') {
                    pAVar3 =
                        (Array*)RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](
                            (RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>*)this, uVar4);
                    std::function<void(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>::operator()(param_2,
                                                                                                          pAVar3);
                }
                uVar4 = uVar4 + 1;
                iVar2 = capacity();
            } while ((long)uVar4 < (long)iVar2);
        }
    }

    // 0x100184640, 16 bytes, placed by class name and debug map
    // EntityOverlays::OverlayTypeFromLocLayer(LocLayer)
    undefined4 EntityOverlays::OverlayTypeFromLocLayer(undefined4 param_1) {
        return param_1;
    }

    // 0x100184650, 128 bytes, placed by class name and debug map
    // EntityOverlays::AnyOverlaysOnTile(rs2lib::CoordGrid const&)
    ulong EntityOverlays::AnyOverlaysOnTile(CoordGrid* param_1) {
        char cVar1;
        array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>* this_00;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_01;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* prVar2;
        ulong uVar3;

        cVar1 = ClientConstants::IsCoordInBuildArea(param_1);
        if ((cVar1 != '\0') &&
            (this_00 =
                 (array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>*)
                     GetStaticEntityOverlays(this, param_1),
             this_00 !=
                 (array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>*)0)) {
            this_01 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                           5ul>::begin(this_00);
            prVar2 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                             eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                           5ul>::end(this_00);
            if (this_01 != prVar2) {
                do {
                    uVar3 = eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                          eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                          eastl::use_first<eastl::pair<int const, unsigned long>>, true,
                                          true>::empty(this_01);
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

    // 0x1001847c0, 512 bytes, placed by class name
    // EntityOverlays::CreateStaticOverlay(int, rs2lib::CoordGrid const&, StaticEntityOverlayType)
    ulong EntityOverlays::CreateStaticOverlay(uint param_1, CommandLine* param_2, undefined4 param_4) {
        char cVar1;
        bool bVar2;
        int iVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        long lVar6;
        array<std::array<
                  std::unique_ptr<
                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                 5ul>,
                      std::default_delete<std::array<
                          eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                  104ul>,
              104ul>* this_00;
        array<std::unique_ptr<
                  std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                  std::default_delete<std::array<
                      eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
              104ul>* this_01;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*
            this_02;
        map<int, unsigned long, eastl::less<int>,
            eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>>* pmVar7;
        undefined8 uVar8;
        ulong* puVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar10;
        hashtable_iterator_base local_60[8];
        map<int, unsigned long, eastl::less<int>,
            eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>>* local_58;
        ulong local_50;
        undefined8 local_48;
        unique_ptr local_40[12];
        uint local_34;

        local_34 = param_1;
        cVar1 = IsTypeValid(param_4);
        uVar10 = 4294967295;
        if (cVar1 != '\0') {
            cVar1 = ClientConstants::IsCoordInBuildArea((CoordGrid*)param_2);
            if (cVar1 != '\0') {
                LogStaticOverlayCreated(local_34, param_2, param_4);
                lVar6 = GetStaticEntityOverlays(this, (CoordGrid*)param_2);
                if (lVar6 == 0) {
                    std::make_unique<std::array<
                        eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>();
                    iVar3 = param_2->GetX();
                    this_00 = (array<std::array<std::unique_ptr<
                                                    std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                eastl::less<int>, eastl::allocator>,
                                                               5ul>,
                                                    std::default_delete<std::array<
                                                        eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                         eastl::less<int>, eastl::allocator>,
                                                        5ul>>>,
                                                104ul>,
                                     104ul>*)
                        std::array<
                            std::array<std::array<std::unique_ptr<
                                                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                  eastl::less<int>, eastl::allocator>,
                                                                 5ul>,
                                                      std::default_delete<std::array<
                                                          eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                           eastl::less<int>, eastl::allocator>,
                                                          5ul>>>,
                                                  104ul>,
                                       104ul>,
                            4ul>::
                        operator[](
                            (array<std::array<
                                       std::array<std::unique_ptr<
                                                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                  eastl::less<int>, eastl::allocator>,
                                                                 5ul>,
                                                      std::default_delete<std::array<
                                                          eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                           eastl::less<int>, eastl::allocator>,
                                                          5ul>>>,
                                                  104ul>,
                                       104ul>,
                                   4ul>*)&field_2104,
                            (long)iVar3);
                    iVar3 = param_2->GetZ();
                    this_01 = (array<
                               std::unique_ptr<
                                   std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>,
                                                               eastl::allocator>,
                                              5ul>,
                                   std::default_delete<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>>>,
                               104ul>*)
                        std::array<
                            std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                       104ul>,
                            104ul>::operator[](this_00, (long)iVar3);
                    iVar3 = param_2->GetPos();
                    this_02 = (unique_ptr<
                               std::array<
                                   eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                               std::default_delete<std::array<
                                   eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>>>*)
                        std::array<
                            std::unique_ptr<
                                std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>,
                                std::default_delete<std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>>>,
                            104ul>::operator[](this_01, (long)iVar3);
                    std::unique_ptr<
                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                        std::default_delete<std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                            5ul>>>::operator=(this_02, local_40);
                    local_40->~unique_ptr();
                }
                lVar6 = GetStaticEntityOverlays(this, (CoordGrid*)param_2);
                if (lVar6 != 0) {
                    pmVar7 = (map<int, unsigned long, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                        GetOverlaysForEntityUnchecked(this, param_2, param_4);
                    eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, unsigned long>>, true,
                                  true>::find((int*)local_40);
                    local_58 = pmVar7;
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_40, local_60, extraout_RDX);
                    if (bVar2) {
                        uVar8 = logger::default_logger();
                        local_50 = (ulong)local_34;
                        local_48 = param_2->GetX();
                        uVar4 = param_2->GetZ();
                        uVar5 = param_2->GetPos();
                        logger::Logger::Log(uVar8, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/EntityOverlays.cpp",
                                            100, "Overlay with ID %d already exists for type %d at %d,%d,%d", local_50,
                                            param_4, local_48, uVar4, uVar5);
                        lVar6 = eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                      local_40);
                        Destroy(*(ulong*)(lVar6 + 8));
                    }
                    iVar3 = CreateOverlay(this);
                    pmVar7 = local_58;
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_40, local_60, extraout_RDX_00);
                    uVar10 = (ulong)iVar3;
                    if (bVar2) {
                        lVar6 = eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                      local_40);
                        puVar9 = (ulong*)(lVar6 + 8);
                    } else {
                        puVar9 = (ulong*)
                            eastl::map<int, unsigned long, eastl::less<int>,
                                       eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](pmVar7, (int*)&local_34);
                    }
                    *puVar9 = uVar10;
                }
            }
        }
        return uVar10 & 4294967295;
    }

    // 0x100184d00, 224 bytes, placed by class name
    // EntityOverlays::CreateOverlay()
    int EntityOverlays::CreateOverlay() {
        ulong uVar1;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_00;
        shared_ptr<rs2lib::IfType>* psVar2;
        long lVar3;
        undefined1* puVar4;
        shared_ptr local_28;
        int local_14;

        local_28._0_4_ = 1;
        uVar1 = RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>::Create<int>(
            (RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>*)this, (int*)&local_28);
        local_14 = (int)uVar1;
        this_00 = (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)
            RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](
                (RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>*)this, (long)local_14);
        make_shared<rs2lib::IfType, int const&>((jag*)&local_28, &local_14);
        psVar2 =
            (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_00, 0);
        shared_ptr<rs2lib::IfType>::operator=(psVar2, &local_28);
        local_28.~shared_ptr();
        psVar2 =
            (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_00, 0);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->(psVar2);
        *(undefined4*)(lVar3 + 88) = 4294967295;
        psVar2 =
            (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_00, 0);
        puVar4 = (undefined1*)shared_ptr<rs2lib::IfType>::operator->(psVar2);
        *puVar4 = 1;
        psVar2 =
            (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_00, 0);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->(psVar2);
        *(undefined4*)(lVar3 + 12) = 0;
        psVar2 =
            (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_00, 0);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->(psVar2);
        *(undefined1*)(lVar3 + 24) = 1;
        return local_14;
    }

    // 0x100184e90, 192 bytes, placed by class name
    // EntityOverlays::GetStaticOverlayIndex(int, rs2lib::CoordGrid const&, StaticEntityOverlayType)
    undefined4 EntityOverlays::GetStaticOverlayIndex(undefined4 param_1, CoordGrid* param_2, undefined4 param_4) {
        char cVar1;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        eastl local_38[12];
        undefined4 local_2c;

        local_2c = param_1;
        cVar1 = IsTypeValid(param_4);
        if (((cVar1 != '\0') && (cVar1 = ClientConstants::IsCoordInBuildArea(param_2), cVar1 != '\0')) &&
            (lVar3 = GetStaticEntityOverlays(this, param_2), lVar3 != 0)) {
            GetOverlaysForEntityUnchecked(this, param_2, param_4);
            eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                          eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::find((int*)local_38);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            if (eastl::operator!=(local_38, local_40, extraout_RDX)) {
                lVar3 = eastl::rbtree_iterator<
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
                return *(undefined4*)(lVar3 + 8);
            }
        }
        return 4294967295;
    }

    // 0x100184f50, 304 bytes, placed by class name
    // EntityOverlays::DestroyStaticOverlay(int, rs2lib::CoordGrid const&, StaticEntityOverlayType)
    void EntityOverlays::DestroyStaticOverlay(undefined4 param_1, CommandLine* param_2, undefined4 param_4) {
        long lVar1;
        int* piVar2;
        array<std::array<
                  std::unique_ptr<
                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                 5ul>,
                      std::default_delete<std::array<
                          eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                  104ul>,
              104ul>* this_00;
        array<std::unique_ptr<
                  std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                  std::default_delete<std::array<
                      eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
              104ul>* this_01;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*
            this_02;
        char cVar3;
        bool bVar4;
        int iVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[8];
        eastl local_40[12];
        undefined4 local_34;

        local_34 = param_1;
        cVar3 = IsTypeValid(param_4);
        if (cVar3 != '\0') {
            cVar3 = ClientConstants::IsCoordInBuildArea((CoordGrid*)param_2);
            if (cVar3 != '\0') {
                lVar1 = GetStaticEntityOverlays(this, (CoordGrid*)param_2);
                if (lVar1 != 0) {
                    piVar2 = (int*)GetOverlaysForEntityUnchecked(this, param_2, param_4);
                    eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, unsigned long>>, true,
                                  true>::find((int*)local_40);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar4 = eastl::operator!=(local_40, local_48, extraout_RDX);
                    if (bVar4) {
                        lVar1 = eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                      local_40);
                        Destroy(*(ulong*)(lVar1 + 8));
                        eastl::map<
                            int, unsigned long, eastl::less<int>,
                            eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::erase(piVar2);
                        cVar3 = AnyOverlaysOnTile(this, (CoordGrid*)param_2);
                        if (cVar3 == '\0') {
                            iVar5 = param_2->GetX();
                            this_00 = (array<std::array<
                                                 std::unique_ptr<
                                                     std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                 eastl::less<int>, eastl::allocator>,
                                                                5ul>,
                                                     std::default_delete<std::array<
                                                         eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                          eastl::less<int>, eastl::allocator>,
                                                         5ul>>>,
                                                 104ul>,
                                             104ul>*)
                                std::array<
                                    std::array<
                                        std::array<std::unique_ptr<
                                                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                                   104ul>,
                                        104ul>,
                                    4ul>::
                                operator[](
                                    (array<std::array<
                                               std::array<
                                                   std::unique_ptr<
                                                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                                   104ul>,
                                               104ul>,
                                           4ul>*)&field_2104,
                                    (long)iVar5);
                            iVar5 = param_2->GetZ();
                            this_01 =
                                (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                       104ul>*)
                                    std::array<
                                        std::array<std::unique_ptr<
                                                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                                   104ul>,
                                        104ul>::operator[](this_00, (long)iVar5);
                            iVar5 = param_2->GetPos();
                            this_02 = (unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                              eastl::less<int>, eastl::allocator>,
                                                             5ul>,
                                                  std::default_delete<
                                                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                  eastl::less<int>, eastl::allocator>,
                                                                 5ul>>>*)
                                std::array<
                                    std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                eastl::less<int>, eastl::allocator>,
                                                               5ul>,
                                                    std::default_delete<
                                                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                    eastl::less<int>, eastl::allocator>,
                                                                   5ul>>>,
                                    104ul>::operator[](this_01, (long)iVar5);
                            std::unique_ptr<
                                std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>,
                                std::default_delete<std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>>>::reset(this_02, (array*)0);
                        }
                    }
                }
            }
        }
    }

    // 0x100185130, 336 bytes, placed by class name
    // EntityOverlays::DestroyStaticOverlays(rs2lib::CoordGrid const&, StaticEntityOverlayType)
    void EntityOverlays::DestroyStaticOverlays(CommandLine* param_1, undefined4 param_3) {
        long lVar1;
        rbtree<int, eastl::pair<int const, game::ServerSyncingCycle::SyncUserEntry>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, game::ServerSyncingCycle::SyncUserEntry>>, true, true>* this_00;
        array<std::array<
                  std::unique_ptr<
                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                 5ul>,
                      std::default_delete<std::array<
                          eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                  104ul>,
              104ul>* this_01;
        array<std::unique_ptr<
                  std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                  std::default_delete<std::array<
                      eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
              104ul>* this_02;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*
            this_03;
        char cVar2;
        bool bVar3;
        int iVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        cVar2 = IsTypeValid(param_3);
        if (cVar2 != '\0') {
            cVar2 = ClientConstants::IsCoordInBuildArea((CoordGrid*)param_1);
            if (cVar2 != '\0') {
                lVar1 = GetStaticEntityOverlays(this, (CoordGrid*)param_1);
                if (lVar1 != 0) {
                    this_00 =
                        (rbtree<int, eastl::pair<int const, game::ServerSyncingCycle::SyncUserEntry>, eastl::less<int>,
                                eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>,
                                eastl::use_first<eastl::pair<int const, game::ServerSyncingCycle::SyncUserEntry>>, true,
                                true>*)GetOverlaysForEntityUnchecked(this, param_1, param_3);
                    eastl::vector<unsigned long,
                                  eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar3 = eastl::operator!=(local_40, local_38, extraout_RDX);
                    if (bVar3) {
                        do {
                            lVar1 = eastl::rbtree_iterator<
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                            operator*((rbtree_iterator<
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                          local_40);
                            Destroy(*(ulong*)(lVar1 + 8));
                            eastl::rbtree_iterator<
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                            operator++((rbtree_iterator<
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                           local_40);
                            bVar3 = eastl::operator!=(local_40, local_38, extraout_RDX_00);
                        } while (bVar3);
                    }
                    eastl::rbtree<int, eastl::pair<int const, game::ServerSyncingCycle::SyncUserEntry>,
                                  eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, game::ServerSyncingCycle::SyncUserEntry>>,
                                  true, true>::clear(this_00);
                    cVar2 = AnyOverlaysOnTile(this, (CoordGrid*)param_1);
                    if (cVar2 == '\0') {
                        iVar4 = param_1->GetX();
                        this_01 = (array<std::array<std::unique_ptr<
                                                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                    eastl::less<int>, eastl::allocator>,
                                                                   5ul>,
                                                        std::default_delete<std::array<
                                                            eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                             eastl::less<int>, eastl::allocator>,
                                                            5ul>>>,
                                                    104ul>,
                                         104ul>*)
                            std::array<
                                std::array<
                                    std::array<
                                        std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                    eastl::less<int>, eastl::allocator>,
                                                                   5ul>,
                                                        std::default_delete<std::array<
                                                            eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                             eastl::less<int>, eastl::allocator>,
                                                            5ul>>>,
                                        104ul>,
                                    104ul>,
                                4ul>::
                            operator[](
                                (array<
                                    std::array<
                                        std::array<std::unique_ptr<
                                                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                                   104ul>,
                                        104ul>,
                                    4ul>*)&field_2104,
                                (long)iVar4);
                        iVar4 = param_1->GetZ();
                        this_02 =
                            (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                               eastl::less<int>, eastl::allocator>,
                                                              5ul>,
                                                   std::default_delete<
                                                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>>>,
                                   104ul>*)
                                std::array<
                                    std::array<
                                        std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                    eastl::less<int>, eastl::allocator>,
                                                                   5ul>,
                                                        std::default_delete<std::array<
                                                            eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                             eastl::less<int>, eastl::allocator>,
                                                            5ul>>>,
                                        104ul>,
                                    104ul>::operator[](this_01, (long)iVar4);
                        iVar4 = param_1->GetPos();
                        this_03 =
                            (unique_ptr<
                                std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>,
                                std::default_delete<std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>>>*)
                                std::array<
                                    std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                eastl::less<int>, eastl::allocator>,
                                                               5ul>,
                                                    std::default_delete<
                                                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                    eastl::less<int>, eastl::allocator>,
                                                                   5ul>>>,
                                    104ul>::operator[](this_02, (long)iVar4);
                        std::unique_ptr<
                            std::array<
                                eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                5ul>,
                            std::default_delete<std::array<
                                eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                5ul>>>::reset(this_03, (array*)0);
                    }
                }
            }
        }
    }

    // 0x1001852b0, 368 bytes, placed by class name
    // EntityOverlays::DestroyAllStaticOverlays()
    void EntityOverlays::DestroyAllStaticOverlays() {
        bool bVar1;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*
            this_00;
        long lVar2;
        array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>* this_01;
        long lVar3;
        long lVar4;
        undefined8 extraout_RDX;
        ulong uVar5;
        hashtable_iterator_base* phVar6;
        hashtable_iterator_base* phVar7;
        undefined1 auVar8[16];
        undefined8 local_78;
        undefined8 local_70;
        hashtable_iterator_base* local_68;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*
            local_60;
        array<std::unique_ptr<
                  std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                  std::default_delete<std::array<
                      eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
              104ul>* local_58;
        ulong local_50;
        array<std::array<
                  std::unique_ptr<
                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                 5ul>,
                      std::default_delete<std::array<
                          eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                  104ul>,
              104ul>* local_48;
        ulong local_40;
        array<
            std::array<
                std::array<
                    std::unique_ptr<
                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                        std::default_delete<std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                    104ul>,
                104ul>,
            4ul>* local_38;

        local_38 =
            (array<
                std::array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                  eastl::less<int>, eastl::allocator>,
                                                                 5ul>,
                                                      std::default_delete<std::array<
                                                          eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                           eastl::less<int>, eastl::allocator>,
                                                          5ul>>>,
                                      104ul>,
                           104ul>,
                4ul>*)&field_2104;
        local_40 = 0;
        do {
            local_48 =
                (array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                              eastl::less<int>, eastl::allocator>,
                                                             5ul>,
                                                  std::default_delete<
                                                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                  eastl::less<int>, eastl::allocator>,
                                                                 5ul>>>,
                                  104ul>,
                       104ul>*)
                    std::array<
                        std::array<
                            std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                       104ul>,
                            104ul>,
                        4ul>::operator[](local_38, local_40);
            uVar5 = 0;
            do {
                local_50 = uVar5;
                local_58 =
                    (array<std::unique_ptr<
                               std::array<
                                   eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                               std::default_delete<std::array<
                                   eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>>>,
                           104ul>*)
                        std::array<
                            std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                       104ul>,
                            104ul>::operator[](local_48, uVar5);
                phVar7 = (hashtable_iterator_base*)0;
                do {
                    phVar6 = phVar7;
                    this_00 = (unique_ptr<
                               std::array<
                                   eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                               std::default_delete<std::array<
                                   eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>>>*)
                        std::array<
                            std::unique_ptr<
                                std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>,
                                std::default_delete<std::array<
                                    eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                    5ul>>>,
                            104ul>::operator[](local_58, (ulong)phVar7);
                    lVar2 = std::unique_ptr<
                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                        std::default_delete<std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                            5ul>>>::get(this_00);
                    if (lVar2 != 0) {
                        local_68 = phVar7;
                        local_60 = this_00;
                        this_01 =
                            (array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>*)
                                std::unique_ptr<
                                    std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>,
                                                                eastl::allocator>,
                                               5ul>,
                                    std::default_delete<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                    eastl::less<int>, eastl::allocator>,
                                                                   5ul>>>::operator*(this_00);
                        lVar2 = std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                            5ul>::begin(this_01);
                        lVar3 = std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                            5ul>::end(this_01);
                        for (; lVar2 != lVar3; lVar2 = lVar2 + 192) {
                            local_78 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                                     eastl::less<eastl::string>, eastl::allocator,
                                                     eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                                     true>::begin();
                            auVar8 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                                   eastl::less<eastl::string>, eastl::allocator,
                                                   eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                                   true>::end();
                            while (true) {
                                local_70 = auVar8._0_8_;
                                phVar6 = (hashtable_iterator_base*)&local_70;
                                bVar1 = eastl::operator!=((eastl*)&local_78, (hashtable_iterator_base*)&local_70,
                                                          auVar8._8_8_);
                                if (!bVar1)
                                    break;
                                lVar4 = eastl::rbtree_iterator<
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                                operator*(
                                    (rbtree_iterator<
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                      eastl::allocator>>&>*)&local_78);
                                Destroy(*(ulong*)(lVar4 + 8));
                                eastl::rbtree_iterator<
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                                operator++(
                                    (rbtree_iterator<
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                      eastl::allocator>>&>*)&local_78);
                                auVar8._8_8_ = extraout_RDX;
                                auVar8._0_8_ = local_70;
                            }
                        }
                        std::unique_ptr<
                            std::array<
                                eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                5ul>,
                            std::default_delete<std::array<
                                eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                5ul>>>::operator=(local_60, (_func_decltype_nullptr*)phVar6);
                        phVar7 = local_68;
                    }
                    phVar7 = phVar7 + 1;
                } while (phVar7 != (hashtable_iterator_base*)104);
                uVar5 = local_50 + 1;
            } while (uVar5 != 104);
            local_40 = local_40 + 1;
        } while (local_40 != 4);
    }

} // namespace jag::oldscape
