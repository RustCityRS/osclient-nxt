// libs/ui/components/ComponentCollectionBase.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ComponentCollectionBase.h"

namespace jag::ui {
    // 0x100d43370, 96 bytes, __const
    ComponentCollectionBase::DYNAMIC_COMPONENT_LIST_MIN_INITIAL_SIZE = {
        50, 0, 1, 2, 1, 3, 2, 0, 0, 0, 1, 1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, -1, -1,
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ComponentCollectionBase::UpdateLayout(bool);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ComponentCollectionBase::IsLayoutDirty() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    ComponentCollectionBase::SupportsScrolling() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    ComponentCollectionBase::IsComponentCollection() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    ComponentCollectionBase::SupportsChildComponentType(ComponentType) const;

    // 0x100694910, 32 bytes, placed by class name and debug map
    // ComponentCollectionBase::ChildDynamicIDExists(int) const
    void ComponentCollectionBase::ChildDynamicIDExists(int param_1) {
        shared_ptr* psVar1;

        psVar1 = (shared_ptr*)GetDynamicChild(this, param_1);
        operator!=(psVar1, (_func_decltype_nullptr*)0);
    }

    // 0x100694b40, 144 bytes, placed by class name and debug map
    // ComponentCollectionBase::RootSetUnownedDynamicChild(int, shared_ptr<Component> const&)
    void ComponentCollectionBase::RootSetUnownedDynamicChild(int param_1, shared_ptr* param_2) {
        DynamicNestedChildren* this_00;
        char cVar1;
        uint uVar2;
        int iVar3;
        ComponentCollectionBase* this_01;

        this_01 = (ComponentCollectionBase*)GetRootCollection(this);
        if (this_01 != (ComponentCollectionBase*)0) {
            if ((this_01 == this) && (cVar1 = (&this_01->field_392)->empty(), cVar1 != '\0')) {
                return;
            }
            cVar1 = (&this_01->field_392)->empty();
            if (cVar1 != '\0') {
                BuildDynamicNestedChildrenList(this_01);
            }
            uVar2 = ComponentHelpers::GetCategoryID(param_1);
            this_00 = (DynamicNestedChildren*)
                eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>::operator[](
                    (vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>*)&this_01->field_392,
                    (ulong)uVar2);
            iVar3 = ComponentHelpers::GetDynamicID(param_1);
            this_00->Set(iVar3, param_2);
        }
    }

    // 0x100694e40, 128 bytes, placed by class name and debug map
    // ComponentCollectionBase::RootRemoveUnownedDynamicChild(shared_ptr<Component> const&)
    void ComponentCollectionBase::RootRemoveUnownedDynamicChild(shared_ptr* param_1) {
        Component* pCVar1;
        DynamicNestedChildren* this_00;
        char cVar2;
        uint uVar3;
        int iVar4;
        long lVar5;

        lVar5 = GetRootCollection(this);
        if (lVar5 != 0) {
            cVar2 = ((lVar5 + 392))->empty();
            if (cVar2 == '\0') {
                pCVar1 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
                uVar3 = pCVar1->GetDynamicID();
                uVar3 = ComponentHelpers::GetCategoryID(uVar3);
                this_00 = (DynamicNestedChildren*)
                    eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>::operator[](
                        (vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>*)(lVar5 + 392),
                        (ulong)uVar3);
                pCVar1 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
                uVar3 = pCVar1->GetDynamicID();
                iVar4 = ComponentHelpers::GetDynamicID(uVar3);
                this_00->Remove(iVar4);
            }
        }
    }

    // 0x1006957a0, 208 bytes, placed by class name
    // ComponentCollectionBase::DelAll()
    void ComponentCollectionBase::DelAll() {
        bool bVar1;
        char cVar2;
        Layout* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar3;
        shared_ptr* this_02;
        shared_ptr<Component>* this_03;
        long* plVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;

        this_00 = (Layout*)(*(code*)field_0[35])();
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pcVar3 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)this_00->end();
        for (; this_01 != pcVar3; this_01 = this_01 + 24) {
            this_02 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_01);
            bVar1 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar1) {
                this_03 = (shared_ptr<Component>*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_01);
                plVar4 = (long*)shared_ptr<Component>::operator->(this_03);
                cVar2 = (**(code**)(*plVar4 + 104))(plVar4);
                if (cVar2 != '\0') {
                    this_04 =
                        (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_01);
                    plVar4 =
                        (long*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                    (**(code**)(*plVar4 + 360))(plVar4);
                }
            }
        }
        RootRemoveUnownedDynamicChildren(this, (vector*)this_00);
        this_00->clear();
        (&field_392)->clear();
    }

    // 0x100695870, 256 bytes, placed by class name
    // ComponentCollectionBase::RootRemoveUnownedDynamicChildren(eastl::vector<ComponentContainer, eastl::allocator> const&)
    void ComponentCollectionBase::RootRemoveUnownedDynamicChildren(vector* param_1) {
        char cVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        undefined8 in_RAX;
        long lVar5;
        ComponentContainer* this_00;
        ComponentContainer* pCVar6;
        Component* this_01;
        DynamicNestedChildren* this_02;
        ComponentContainer* pCVar7;
        undefined8 uStack_38;

        uStack_38 = in_RAX;
        lVar5 = GetRootCollection(this);
        if (lVar5 != 0) {
            cVar1 = ((lVar5 + 392))->empty();
            if (cVar1 == '\0') {
                this_00 = (ComponentContainer*)param_1->HeapBeginPtr();
                pCVar6 = (ComponentContainer*)param_1->end();
                if (this_00 != pCVar6) {
                    do {
                        this_01 = (Component*)this_00->data();
                        uVar2 = this_01->GetDynamicID();
                        uVar2 = ComponentHelpers::GetCategoryID(uVar2);
                        iVar3 = ComponentHelpers::EncodeDynamicID(uVar2, 0);
                        iVar4 = ComponentHelpers::GetMaxDynamicID(uVar2);
                        uStack_38 = CONCAT44(iVar4 + iVar3, (undefined4)uStack_38);
                        pCVar6 = (ComponentContainer*)param_1->end();
                        pCVar6 = eastl::lower_bound<ComponentContainer_const*, int,
                                                    bool (*)(ComponentContainer_const&, int)>(
                            (ComponentContainer*)&this_00[1].field_8, pCVar6, (int*)((long)&uStack_38 + 4),
                            (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
                        this_02 = (DynamicNestedChildren*)
                            eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>::operator[](
                                (vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>*)(lVar5 +
                                                                                                            392),
                                (ulong)uVar2);
                        this_02->RemoveAll(this_00, pCVar6);
                        pCVar7 = (ComponentContainer*)param_1->end();
                        this_00 = pCVar6;
                    } while (pCVar6 != pCVar7);
                }
            }
        }
    }

    // 0x1006959a0, 240 bytes, placed by class name
    // ComponentCollectionBase::GetChildCombinedIDs(eastl::vector<unsigned int, BucketAllocatorEASTL>&) const
    void ComponentCollectionBase::GetChildCombinedIDs(vector* param_1) {
        Layout* this_00;
        SharedArray<unsigned int>* this_01;
        SharedArray<unsigned int>* pSVar1;
        Component* this_02;
        uint* puVar2;
        uint* puVar3;
        uint local_34;

        this_00 = (Layout*)(*(code*)field_0[38])();
        this_01 = (SharedArray<unsigned int>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pSVar1 = (SharedArray<unsigned int>*)this_00->end();
        do {
            if (this_01 == pSVar1) {
                return;
            }
            this_02 = (Component*)this_01->data();
            local_34 = this_02->GetCombinedID();
            puVar2 = (uint*)param_1->HeapBeginPtr();
            puVar3 = (uint*)param_1->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                if (*puVar2 == local_34) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("id != combinedID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentCollectionBase.cpp",
                              36, (char*)0);
                }
            }
            param_1->push_back(&local_34);
            this_01 = this_01 + 24;
        } while (true);
    }

    // 0x100695ac0, 384 bytes, placed by class name
    // ComponentCollectionBase::GetDynamicChild(int) const
    ComponentContainer* ComponentCollectionBase::GetDynamicChild(int param_1) {
        char cVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        Layout* pLVar5;
        ComponentContainer* pCVar6;
        ComponentContainer* pCVar7;
        ComponentContainer* pCVar8;
        Component* this_00;
        long lVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined1* this_01;
        bool bVar12;
        int local_30;
        uint local_2c;

        local_2c = param_1;
        if (64255 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "ComponentCollectionBase.cpp",
                            83, (char*)0);
        }
        pLVar5 = (Layout*)(*(code*)field_0[39])();
        pCVar6 = (ComponentContainer*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar5);
        pCVar7 = (ComponentContainer*)pLVar5->end();
        pCVar7 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
            pCVar6, pCVar7, (int*)&local_2c,
            (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
        pCVar8 = (ComponentContainer*)pLVar5->end();
        if (pCVar7 != pCVar8) {
            this_00 = (Component*)pCVar7->data();
            uVar2 = this_00->GetDynamicID();
            if (uVar2 == local_2c) {
                pCVar6 = (ComponentContainer*)pCVar7->second();
                return pCVar6;
            }
        }
        this_01 = &field_392;
        cVar1 = this_01->empty();
        if (cVar1 == '\0') {
            iVar3 = ComponentHelpers::GetDynamicID(local_2c);
            local_30 = iVar3;
            uVar2 = ComponentHelpers::GetCategoryID(local_2c);
            iVar4 = this_01->size();
            if (iVar4 <= (int)uVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("categoryID < (int)m_dynamicNestedChildren.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollectionBase.cpp",
                          67, (char*)0);
            }
            lVar9 = eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>::operator[](
                (vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>*)this_01, (ulong)uVar2);
            pLVar5 = (Layout*)(lVar9 + 8);
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar5);
            uVar11 = pLVar5->end();
            pCVar7 =
                (ComponentContainer*)eastl::lower_bound<eastl::pair<shared_ptr<Component>, int> const*, int,
                                                        int->GetDynamicChild() const ::__41>(uVar10, uVar11, &local_30);
            pCVar8 = (ComponentContainer*)pLVar5->end();
            if (pCVar7 == pCVar8) {
                bVar12 = true;
            } else {
                bVar12 = *(int*)(pCVar7 + 1) != iVar3;
                if (!bVar12) {
                    pCVar6 = pCVar7;
                }
            }
            if (!bVar12) {
                return pCVar6;
            }
        }
        return (ComponentContainer*)PTR_NullComponentShared_100ee6498;
    }

    // 0x100695d20, 672 bytes, placed by class name
    // ComponentCollectionBase::GetNextAvailableDynamicId(int) const
    int ComponentCollectionBase::GetNextAvailableDynamicId(int param_1) {
        char cVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        ComponentCollectionBase* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        ComponentContainer* pCVar8;
        ComponentContainer* pCVar9;
        ComponentContainer* pCVar10;
        shared_ptr<Component>* psVar11;
        Component* pCVar12;
        DynamicNestedChildren* this_02;
        undefined8 uVar13;
        undefined8 uVar14;
        shared_ptr* extraout_RDX;
        int local_50[4];
        shared_ptr local_40;

        if (234 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "ComponentCollectionBase.cpp",
                            92, (char*)0);
        }
        iVar3 = GetDynamicID();
        if (iVar3 == -1) {
            this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
                code*)field_0[39])(this);
            cVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            iVar3 = 0;
            if (cVar2 == '\0') {
                cVar2 = (&field_392)->empty();
                if (cVar2 == '\0') {
                    this_02 = (DynamicNestedChildren*)
                        eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>::operator[](
                            (vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>*)&field_392,
                            (long)param_1);
                    iVar3 = this_02->GetNextFreeId();
                } else {
                    iVar3 = 0;
                    local_40._0_4_ = ComponentHelpers::EncodeDynamicID(param_1, 0);
                    local_50[0] = ComponentHelpers::EncodeDynamicID(param_1 + 1, 0);
                    pCVar8 = (ComponentContainer*)this_01->HeapBeginPtr();
                    pCVar9 = (ComponentContainer*)this_01->end();
                    pCVar8 =
                        eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
                            pCVar8, pCVar9, (int*)&local_40,
                            (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
                    pCVar9 = (ComponentContainer*)this_01->end();
                    pCVar9 =
                        eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
                            pCVar8, pCVar9, local_50,
                            (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
                    pCVar10 = (ComponentContainer*)this_01->end();
                    if (pCVar8 != pCVar10) {
                        psVar11 = (shared_ptr<Component>*)pCVar8->second();
                        pCVar12 = (Component*)shared_ptr<Component>::operator->(psVar11);
                        iVar4 = pCVar12->GetDynamicID();
                        if (iVar4 <= (int)local_40._0_4_) {
                            pCVar10 = eastl::adjacent_find<ComponentContainer_const*, int->GetNextAvailableDynamicId()
                                                                                          const ::__42>(pCVar8, pCVar9);
                            if (pCVar10 == pCVar9) {
                                iVar3 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>((pair*)pCVar8,
                                                                                                     (pair*)pCVar9);
                            } else {
                                psVar11 = (shared_ptr<Component>*)pCVar10->second();
                                pCVar12 = (Component*)shared_ptr<Component>::operator->(psVar11);
                                uVar5 = pCVar12->GetDynamicID();
                                iVar3 = ComponentHelpers::GetDynamicID(uVar5);
                                iVar3 = iVar3 + 1;
                            }
                            iVar4 = ComponentHelpers::GetMaxDynamicID(param_1);
                            if (iVar4 <= iVar3) {
                                uVar13 = logger::default_logger();
                                GetChildren();
                                uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                uVar6 = GetStaticID();
                                uVar7 = GetDynamicID();
                                logger::Logger::Log(uVar13, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/ui/components/ComponentCollectionBase.cpp",
                                                    148,
                                                    "Component \'%s\' (Static ID %d Dynamic ID %d) has ran out of free "
                                                    "ids for category %d",
                                                    uVar14, uVar6, uVar7, param_1);
                                iVar3 = -1;
                            }
                        }
                    }
                }
            }
        } else {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_40, (jag*)local_50,
                                                                                         extraout_RDX);
            local_50->~shared_ptr();
            if (!shared_ptr::operator_cast_to_bool(&local_40)) {
                /* WARNING: Subroutine does not return */
                LogAssert("rootStaticContainer",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollectionBase.cpp",
                          161, (char*)0);
            }
            this_00 = (ComponentCollectionBase*)shared_ptr<ComponentCollectionBase>::operator->(
                (shared_ptr<ComponentCollectionBase>*)&local_40);
            iVar3 = GetNextAvailableDynamicId(this_00, param_1);
            local_40.~shared_ptr();
        }
        return iVar3;
    }

    // 0x100696070, 736 bytes, placed by class name
    // ComponentCollectionBase::FindNext(shared_ptr<Component> const&) const
    /* WARNING: Removing unreachable block (ram,4301873974) */
    /* ComponentCollectionBase::FindNext(shared_ptr<Component> const&) const */

    shared_ptr* ComponentCollectionBase::FindNext(shared_ptr* param_1) {
        Layout* this_00;
        Layout* this_01;
        undefined8 uVar1;
        undefined8 uVar2;
        ComponentContainer* pCVar3;
        ComponentContainer* pCVar4;
        long* plVar5;
        ComponentContainer* pCVar6;
        shared_ptr* psVar7;
        undefined1 local_36;
        undefined1 local_35;
        undefined1 local_34;
        undefined1 local_33;
        undefined1 local_32;
        undefined1 local_31;

        this_00 = (Layout*)(*(code*)field_0[38])();
        this_01 = (Layout*)(*(code*)field_0[39])(this);
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        uVar2 = this_00->end();
        pCVar3 = eastl::find<ComponentContainer_const*, shared_ptr<Component>,
                             (shared_ptr<Component> const&)->FindNext() const ::__43>(uVar1, uVar2, param_1);
        pCVar4 = (ComponentContainer*)this_00->end();
        if (pCVar3 != pCVar4) {
            uVar1 = this_00->end();
            plVar5 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_36 = (**(code**)(*plVar5 + 16))(plVar5);
            pCVar4 = eastl::find<ComponentContainer_const*, ComponentType,
                                 (shared_ptr<Component> const&)->FindNext() const ::__44>(&pCVar3[1].field_8, uVar1,
                                                                                          &local_36);
            pCVar6 = (ComponentContainer*)this_00->end();
            if (pCVar4 == pCVar6) {
                uVar1 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                uVar2 = this_01->end();
                plVar5 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
                local_35 = (**(code**)(*plVar5 + 16))(plVar5);
                pCVar4 = eastl::find<ComponentContainer_const*, ComponentType,
                                     (shared_ptr<Component> const&)->FindNext() const ::__44>(uVar1, uVar2, &local_35);
                pCVar6 = (ComponentContainer*)this_01->end();
                if (pCVar4 == pCVar6) {
                    uVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                    plVar5 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
                    local_34 = (**(code**)(*plVar5 + 16))(plVar5);
                    pCVar4 =
                        eastl::find<ComponentContainer_const*, ComponentType,
                                    (shared_ptr<Component> const&)->FindNext() const ::__44>(uVar1, pCVar3, &local_34);
                    if (pCVar4 == pCVar3) {
                        return param_1;
                    }
                }
            }
            psVar7 = (shared_ptr*)pCVar4->second();
            return psVar7;
        }
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_01);
        uVar2 = this_01->end();
        pCVar3 = eastl::find<ComponentContainer_const*, shared_ptr<Component>,
                             (shared_ptr<Component> const&)->FindNext() const ::__43>(uVar1, uVar2, param_1);
        pCVar4 = (ComponentContainer*)this_01->end();
        if (pCVar3 == pCVar4) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "ComponentCollectionBase.cpp",
                                241, "Provided component could not be found in this ComponentCollection.");
            return param_1;
        }
        uVar1 = this_01->end();
        plVar5 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        local_33 = (**(code**)(*plVar5 + 16))(plVar5);
        pCVar4 =
            eastl::find<ComponentContainer_const*, ComponentType,
                        (shared_ptr<Component> const&)->FindNext() const ::__44>(&pCVar3[1].field_8, uVar1, &local_33);
        pCVar6 = (ComponentContainer*)this_01->end();
        if (pCVar4 == pCVar6) {
            uVar1 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            uVar2 = this_00->end();
            plVar5 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_32 = (**(code**)(*plVar5 + 16))(plVar5);
            pCVar4 = eastl::find<ComponentContainer_const*, ComponentType,
                                 (shared_ptr<Component> const&)->FindNext() const ::__44>(uVar1, uVar2, &local_32);
            pCVar6 = (ComponentContainer*)this_00->end();
            if (pCVar4 == pCVar6) {
                uVar1 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                plVar5 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
                local_31 = (**(code**)(*plVar5 + 16))(plVar5);
                pCVar4 = eastl::find<ComponentContainer_const*, ComponentType,
                                     (shared_ptr<Component> const&)->FindNext() const ::__44>(uVar1, pCVar3, &local_31);
                if (pCVar4 == pCVar3) {
                    return param_1;
                }
            }
        }
        psVar7 = (shared_ptr*)pCVar4->second();
        return psVar7;
    }

    // 0x1006963f0, 160 bytes, placed by class name
    // ComponentCollectionBase::GetRootCollection()
    ComponentCollectionBase* ComponentCollectionBase::GetRootCollection() {
        shared_ptr* extraout_RDX;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];
        shared_ptr local_28;

        local_38->GetFocus();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_28, (jag*)local_38,
                                                                                     extraout_RDX);
        local_38->~shared_ptr();
        if (!shared_ptr::operator_cast_to_bool(&local_28)) {
            if (GetDynamicID() == -1)
                goto LAB_100696448;
        }
        this = (ComponentCollectionBase*)local_28.end();
    LAB_100696448:
        local_28.~shared_ptr();
        return this;
    }

    // 0x100696490, 272 bytes, placed by class name
    // ComponentCollectionBase::BuildDynamicNestedChildrenList()
    void ComponentCollectionBase::BuildDynamicNestedChildrenList() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        Layout* this_01;
        SharedArray<unsigned int>* this_02;
        SharedArray<unsigned int>* pSVar5;
        Component* this_03;
        DynamicNestedChildren* this_04;
        shared_ptr* psVar6;

        iVar2 = GetDynamicID();
        if (iVar2 != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDynamicID() == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      312, (char*)0);
        }
        this_00 = &field_392;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_dynamicNestedChildren.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      313, (char*)0);
        }
        this_00->resize(235);
        this_01 = (Layout*)(*(code*)field_0[35])(this);
        this_02 = (SharedArray<unsigned int>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        pSVar5 = (SharedArray<unsigned int>*)this_01->end();
        for (; this_02 != pSVar5; this_02 = this_02 + 24) {
            this_03 = (Component*)this_02->data();
            uVar3 = this_03->GetDynamicID();
            uVar4 = ComponentHelpers::GetCategoryID(uVar3);
            this_04 = (DynamicNestedChildren*)
                eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>::operator[](
                    (vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>*)this_00, (ulong)uVar4);
            iVar2 = ComponentHelpers::GetDynamicID(uVar3);
            psVar6 = (shared_ptr*)this_02->second();
            this_04->Set(iVar2, psVar6);
        }
    }

    // 0x1006965f0, 224 bytes, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::Set(int, shared_ptr<Component> const&)
    void ComponentCollectionBase::DynamicNestedChildren::Set(int param_1, shared_ptr* param_2) {
        undefined1* this_00;
        undefined8 uVar2;
        undefined8 uVar3;
        pair* this_01;
        pair* ppVar4;
        pair<shared_ptr<Component>, int> local_50[28];
        int local_34;

        this_00 = &field_8;
        local_34 = param_1;
        uVar2 = this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        this_01 = eastl::lower_bound<eastl::pair<shared_ptr<Component>, int>*, int,
                                     int->Set(shared_ptr<Component> const&)::__46>(uVar2, uVar3, &local_34);
        ppVar4 = (pair*)this_00->end();
        if ((this_01 == ppVar4) || (*(int*)(this_01 + 16) != local_34)) {
            eastl::pair<shared_ptr<Component>, int>::pair<int&, void>(local_50, param_2, &local_34);
            this_00->insert(this_01, local_50);
            local_50->~LRUHashCacheWrapper();
            field_40 = field_40 | local_34 == m_nextFreeId;
        } else {
            shared_ptr<Component>::operator=((shared_ptr<Component>*)this_01, param_2);
            *(int*)(this_01 + 16) = local_34;
        }
        field_0 = eastl::max<int>(field_0, local_34);
    }

    // 0x1006966d0, 144 bytes, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::Remove(int)
    void ComponentCollectionBase::DynamicNestedChildren::Remove(int param_1) {
        undefined1* this_00;
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        pair* ppVar4;
        pair* ppVar5;
        long lVar6;
        int iVar7;
        int local_2c;

        this_00 = &field_8;
        local_2c = param_1;
        uVar2 = this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        ppVar4 = eastl::lower_bound<eastl::pair<shared_ptr<Component>, int>*, int, int->Remove()::__47>(uVar2, uVar3,
                                                                                                        &local_2c);
        ppVar5 = (pair*)this_00->end();
        if ((ppVar4 != ppVar5) && (*(int*)(ppVar4 + 16) == param_1)) {
            this_00->erase(ppVar4);
            field_40 = 1;
            cVar1 = this_00->empty();
            iVar7 = -1;
            if (cVar1 == '\0') {
                lVar6 = this_00->back();
                iVar7 = *(int*)(lVar6 + 16);
            }
            field_0 = iVar7;
        }
    }

    // 0x100696760, 192 bytes, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::RemoveAll(ComponentContainer const*, ComponentContainer const*)
    void ComponentCollectionBase::DynamicNestedChildren::RemoveAll(ComponentContainer* param_1,
                                                                   ComponentContainer* param_2) {
        undefined1* this_00;
        char cVar1;
        eastl* peVar2;
        undefined8 uVar3;
        pair* ppVar4;
        pair* ppVar5;
        long lVar6;
        int iVar7;
        ComponentContainer* local_30;
        ComponentContainer* local_28;

        this_00 = &field_8;
        local_30 = param_1;
        local_28 = param_2;
        peVar2 = (eastl*)this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        ppVar4 = eastl::remove_if<eastl::pair<shared_ptr<Component>, int>*,
                                  (ComponentContainer_const*)->RemoveAll(ComponentContainer_const*)::__48>(
            peVar2, uVar3, &local_30, &local_28);
        if (local_30 != local_28) {
            /* WARNING: Subroutine does not return */
            LogAssert("start == end",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      422, "%s: could not find all components needed for removal", "RemoveAll");
        }
        ppVar5 = (pair*)this_00->end();
        this_00->erase(ppVar4, ppVar5);
        field_40 = 1;
        cVar1 = this_00->empty();
        iVar7 = -1;
        if (cVar1 == '\0') {
            lVar6 = this_00->back();
            iVar7 = *(int*)(lVar6 + 16);
        }
        field_0 = iVar7;
    }

    // 0x100696880, 112 bytes, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::IdUsed(int) const
    bool ComponentCollectionBase::DynamicNestedChildren::IdUsed(int param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        pair* ppVar3;
        pair* ppVar4;
        undefined1* this_00;
        undefined1 local_24[4];

        if (((field_40 != '\0') || (m_nextFreeId != param_1)) && (param_1 <= field_0)) {
            this_00 = &field_8;
            uVar1 = this_00->HeapBeginPtr();
            uVar2 = this_00->end();
            ppVar3 =
                eastl::lower_bound<eastl::pair<shared_ptr<Component>, int> const*, int, int->IdUsed() const ::__45>(
                    uVar1, uVar2, local_24);
            ppVar4 = (pair*)this_00->end();
            if (ppVar3 != ppVar4) {
                return *(int*)(ppVar3 + 16) == param_1;
            }
        }
        return false;
    }

    // 0x100696c40, 144 bytes, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId() const
    void ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId() {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        pair* ppVar5;
        pair* ppVar6;
        int iVar7;

        if (field_40 != '\0') {
            this_00 = &field_8;
            cVar1 = this_00->empty();
            iVar7 = 0;
            if (cVar1 == '\0') {
                lVar2 = this_00->front();
                if (*(int*)(lVar2 + 16) < 1) {
                    uVar3 = this_00->HeapBeginPtr();
                    uVar4 = this_00->end();
                    ppVar5 = eastl::adjacent_find<eastl::pair<shared_ptr<Component>, int> const*,
                                                  ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId()
                                                      const ::__49>(uVar3, uVar4);
                    ppVar6 = (pair*)this_00->end();
                    if (ppVar5 == ppVar6) {
                        iVar7 = this_00->size();
                    } else {
                        iVar7 = *(int*)(ppVar5 + 16) + 1;
                    }
                }
            }
            m_nextFreeId = iVar7;
            field_40 = 0;
        }
    }

    // 0x1006d0590, 80 bytes, placed by class name
    // ComponentCollectionBase::GetNextAvailableDynamicId(int) const::$_42::operator()(ComponentContainer const&, ComponentContainer const&) const
    /* ComponentCollectionBase::GetNextAvailableDynamicId(int)
   const::$_42::TEMPNAMEPLACEHOLDERVALUE(ComponentContainer const&,
   ComponentContainer const&) const */

    _func_GetNextAvailableDynamicId_int* const ::$_42::operator()(ComponentContainer * param_1,
                                                                  ComponentContainer * param_2) {
        int iVar1;
        int iVar2;
        shared_ptr<Component>* psVar3;
        Component* pCVar4;

        psVar3 = (shared_ptr<Component>*)param_2->second();
        pCVar4 = (Component*)shared_ptr<Component>::operator->(psVar3);
        iVar1 = pCVar4->GetDynamicID();
        psVar3 = (shared_ptr<Component>*)param_1->second();
        pCVar4 = (Component*)shared_ptr<Component>::operator->(psVar3);
        iVar2 = pCVar4->GetDynamicID();
        return (_func_GetNextAvailableDynamicId_int*)(ulong)CONCAT31((int3)((uint)(iVar2 + 1) >> 8), iVar2 + 1 < iVar1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ComponentCollectionBase::~ComponentCollectionBase();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ComponentCollectionBase::~ComponentCollectionBase();

} // namespace jag::ui
