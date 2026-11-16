// libs/ui/components/ComponentCollection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ComponentCollection.h"

namespace jag::ui {
    // 0x100418f30: the linker folded this into game::NPCType::GetName() const, which has identical code
    ComponentCollection::GetStaticChildren();

    // 0x100418f30: the linker folded this into game::NPCType::GetName() const, which has identical code
    ComponentCollection::GetStaticChildren() const;

    // 0x100694120, 176 bytes, base-object destructor, placed by class name and debug map
    // ComponentCollection::~ComponentCollection()
    void ComponentCollection::~ComponentCollection() {
        field_0 = &PTR__ComponentCollection_100f0eb90;
        if (GetDynamicID() != -1) {
            DelAll(this);
        }
        (&field_536)->~vector();
        (&field_504)->~vector();
        (&field_472)->~vector();
        (&field_440)->~vector();
        ~ComponentCollectionBase();
    }

    // 0x100694240, 16 bytes, complete-object destructor, placed by class name
    // ComponentCollection::~ComponentCollection(): jumps straight to the base-object destructor

    // 0x100694250, 16 bytes, deleting destructor, placed by class name
    // ComponentCollection::~ComponentCollection()
    void ComponentCollection::~ComponentCollection() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100694260, 96 bytes, placed by class name
    // ComponentCollection::SetScrollPos(int, int)
    void ComponentCollection::SetScrollPos(int param_1, int param_2) {
        int local_18;
        int local_14;

        local_18 = param_1;
        local_14 = param_2;
        ValidateScrollPos(this, &local_18, &local_14);
        if ((field_424 != local_18) || (field_428 != local_14)) {
            field_424 = local_18;
            field_428 = local_14;
            (*(code*)field_0[10])(this);
        }
    }

    // 0x1006942c0, 128 bytes, placed by class name
    // ComponentCollection::ValidateScrollPos(int&, int&) const
    void ComponentCollection::ValidateScrollPos(int* param_1, int* param_2) {
        int iVar1;
        int iVar2;

        iVar2 = *param_1;
        iVar1 = eastl::max<int>(field_88, m_scrollWidth);
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 - field_88);
        iVar2 = eastl::max<int>(0, iVar2);
        *param_1 = iVar2;
        iVar2 = *param_2;
        iVar1 = eastl::max<int>(field_92, m_scrollHeight);
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 - field_92);
        iVar2 = eastl::max<int>(0, iVar2);
        *param_2 = iVar2;
    }

    // 0x100694340, 80 bytes, placed by class name
    // ComponentCollection::SetScrollSize(int, int)
    void ComponentCollection::SetScrollSize(int param_1, int param_2) {
        if ((m_scrollWidth != param_1) || (m_scrollHeight != param_2)) {
            m_scrollWidth = param_1;
            m_scrollHeight = param_2;
            ValidateScrollPos(this, &field_424, &field_428);
            (*(code*)field_0[10])(this);
        }
    }

    // 0x100694390, 48 bytes, placed by class name
    // ComponentCollection::AddStaticChild(ComponentContainer const&)
    void ComponentCollection::AddStaticChild(ComponentContainer* param_1) {
        (&field_440, param_1)->push_back();
        (*(code*)field_0[10])(this);
    }

    // 0x100694410, 1216 bytes, placed by class name
    // ComponentCollection::AddDynamicChild(shared_ptr<Component> const&, bool)
    ulong ComponentCollection::AddDynamicChild(shared_ptr* param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        char cVar3;
        int iVar4;
        Component* pCVar5;
        ComponentCollectionBase* this_01;
        undefined8 uVar6;
        undefined8 uVar7;
        SharedArray<unsigned int>* this_02;
        ComponentContainer* pCVar8;
        ComponentContainer* pCVar9;
        ComponentContainer* pCVar10;
        shared_ptr* extraout_RDX;
        shared_ptr* this_03;
        ulong uVar11;
        undefined8 uVar12;
        char* pcVar13;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_68[16];
        ComponentContainer local_50;
        int local_34;

        pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        local_34 = pCVar5->GetDynamicID();
        iVar4 = GetDynamicID();
        if (iVar4 == -1) {
            cVar2 = '\0';
        } else {
            local_68->GetFocus();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)&local_50,
                                                                                         (jag*)local_68, extraout_RDX);
            local_68->~shared_ptr();
            bVar1 = local_50.operator_cast_to_bool();
            if (bVar1) {
                this_01 = (ComponentCollectionBase*)shared_ptr<ComponentCollectionBase>::operator->(
                    (shared_ptr<ComponentCollectionBase>*)&local_50);
                cVar2 = this_01->ChildDynamicIDExists(local_34);
                bVar1 = true;
                if ((cVar2 != '\0') && (!param_2)) {
                    uVar6 = logger::default_logger();
                    iVar4 = local_34;
                    GetChildren();
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    cVar2 = '\0';
                    logger::Logger::Log(uVar6, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "components/ComponentCollection.cpp",
                                        63,
                                        "Could not add dynamic child with ID %i to component \'%s\' - a component with "
                                        "that ID already exists",
                                        iVar4, uVar7);
                    bVar1 = false;
                }
            } else {
                uVar6 = logger::default_logger();
                iVar4 = local_34;
                GetChildren();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar2 = '\0';
                logger::Logger::Log(
                    uVar6, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                    "ComponentCollection.cpp",
                    56,
                    "Could not add dynamic child with ID %i to component \'%s\' - dynamic layer has no static parent",
                    iVar4, uVar7);
                bVar1 = false;
            }
            local_50.~shared_ptr();
            if (!bVar1) {
                uVar11 = 0;
                goto LAB_100694875;
            }
        }
        this_00 = &field_504;
        cVar3 = this_00->empty();
        if (cVar3 != '\0') {
            this_00->reserve(50);
        }
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            this_02 = (SharedArray<unsigned int>*)this_00->back();
            pCVar5 = (Component*)this_02->data();
            iVar4 = pCVar5->GetDynamicID();
            if (iVar4 < local_34)
                goto LAB_1006945a4;
            pCVar8 = (ComponentContainer*)this_00->HeapBeginPtr();
            pCVar9 = (ComponentContainer*)this_00->end();
            pCVar8 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
                pCVar8, pCVar9, &local_34,
                (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
        } else {
        LAB_1006945a4:
            pCVar8 = (ComponentContainer*)this_00->end();
        }
        pCVar9 = (ComponentContainer*)this_00->end();
        if (param_2) {
            if (pCVar8 == pCVar9) {
            LAB_100694781:
                if (cVar2 != '\0') {
                    uVar6 = logger::default_logger();
                    iVar4 = local_34;
                    GetChildren();
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pcVar13 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                              "already exists elsewhere within the dynamic component hierarchy";
                    uVar12 = 117;
                    goto LAB_1006947c9;
                }
                goto LAB_1006947d5;
            }
            pCVar5 = (Component*)pCVar8->data();
            iVar4 = pCVar5->GetDynamicID();
            this_03 = param_1;
            if (iVar4 != local_34)
                goto LAB_100694781;
            pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            bVar1 = (bool)pCVar5->IsInitiallyHidden();
            new (&local_50) ComponentContainer(this_03, bVar1);
            ComponentContainer::operator=(pCVar8, &local_50);
            local_50.~pair();
            pCVar8 = (ComponentContainer*)&field_536;
            cVar2 = pCVar8->empty();
            if (cVar2 == '\0') {
                pCVar9 = (ComponentContainer*)pCVar8->HeapBeginPtr();
                pCVar10 = (ComponentContainer*)pCVar8->end();
                pCVar9 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer_const&, int)>(
                    pCVar9, pCVar10, &local_34,
                    (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdEquals_100ee6428);
                pCVar8 = (ComponentContainer*)pCVar8->end();
                if (pCVar9 == pCVar8) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderOrderIt != m_dynamicChildrenRenderOrder.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentCollection.cpp",
                              105, (char*)0);
                }
                pCVar5 = (Component*)pCVar9->data();
                iVar4 = pCVar5->GetDynamicID();
                if (iVar4 != local_34) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(*renderOrderIt)->GetDynamicID() == encodedDynamicID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentCollection.cpp",
                              106, (char*)0);
                }
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_03);
                bVar1 = (bool)pCVar5->IsInitiallyHidden();
                pCVar8 = &local_50;
                ComponentContainer::ComponentContainer(pCVar8, this_03, bVar1);
                ComponentContainer::operator=(pCVar9, pCVar8);
                local_50.~pair();
            }
        } else {
            if (pCVar8 != pCVar9) {
                uVar6 = logger::default_logger();
                iVar4 = local_34;
                GetChildren();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar13 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                          "already exists";
                uVar12 = 123;
            LAB_1006947c9:
                uVar11 = 0;
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/ComponentCollection.cpp",
                                    uVar12, pcVar13, iVar4, uVar7);
                goto LAB_100694875;
            }
        LAB_1006947d5:
            this_03 = param_1;
            pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            bVar1 = (bool)pCVar5->IsInitiallyHidden();
            new (&local_50) ComponentContainer(this_03, bVar1);
            this_00->insert(pCVar8, &local_50);
            local_50.~pair();
            pCVar8 = (ComponentContainer*)&field_536;
            cVar2 = pCVar8->empty();
            if (cVar2 == '\0') {
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_03);
                bVar1 = (bool)pCVar5->IsInitiallyHidden();
                new (&local_50) ComponentContainer(this_03, bVar1);
                pCVar8->push_back(&local_50);
                local_50.~pair();
            }
        }
        RootSetUnownedDynamicChild(local_34, this_03);
        (*(code*)field_0[10])(this);
        uVar11 = CONCAT71((int7)((ulong)pCVar8 >> 8), 1);
    LAB_100694875:
        return uVar11 & 4294967295;
    }

    // 0x100694c60, 384 bytes, placed by class name
    // ComponentCollection::DelDynamicChild(int)
    undefined8 ComponentCollection::DelDynamicChild(int param_1) {
        undefined1* puVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        SharedArray<unsigned int>* this_00;
        Component* pCVar5;
        ComponentContainer* pCVar6;
        ComponentContainer* pCVar7;
        shared_ptr* psVar8;
        shared_ptr local_38;
        int local_24;

        puVar1 = &field_504;
        local_24 = param_1;
        cVar2 = puVar1->empty();
        iVar4 = local_24;
        if (cVar2 == '\0') {
            this_00 = (SharedArray<unsigned int>*)puVar1->back();
            pCVar5 = (Component*)this_00->data();
            iVar3 = pCVar5->GetDynamicID();
            if (iVar4 <= iVar3) {
                pCVar6 = (ComponentContainer*)puVar1->HeapBeginPtr();
                pCVar7 = (ComponentContainer*)puVar1->end();
                pCVar6 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
                    pCVar6, pCVar7, &local_24,
                    (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
                pCVar7 = (ComponentContainer*)puVar1->end();
                if (pCVar6 != pCVar7) {
                    pCVar5 = (Component*)pCVar6->data();
                    iVar4 = pCVar5->GetDynamicID();
                    if (iVar4 == local_24) {
                        psVar8 = (shared_ptr*)pCVar6->second();
                        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(psVar8);
                        puVar1->erase(pCVar6);
                        puVar1 = &field_536;
                        cVar2 = puVar1->empty();
                        if (cVar2 == '\0') {
                            pCVar6 = (ComponentContainer*)puVar1->HeapBeginPtr();
                            pCVar7 = (ComponentContainer*)puVar1->end();
                            pCVar6 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer_const&, int)>(
                                pCVar6, pCVar7, &local_24,
                                (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdEquals_100ee6428);
                            pCVar7 = (ComponentContainer*)puVar1->end();
                            if (pCVar6 != pCVar7) {
                                pCVar5 = (Component*)pCVar6->data();
                                iVar4 = pCVar5->GetDynamicID();
                                if (iVar4 == local_24) {
                                    puVar1->erase(pCVar6);
                                }
                            }
                        }
                        RootRemoveUnownedDynamicChild(&local_38);
                        (*(code*)field_0[10])(this);
                        local_38.~shared_ptr();
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x100694ec0, 160 bytes, placed by class name
    // ComponentCollection::SetChildHidden(Component const&, bool)
    void ComponentCollection::SetChildHidden(Component* param_1, bool param_2) {
        int iVar1;

        iVar1 = param_1->GetDynamicID();
        if (iVar1 == -1) {
            iVar1 = param_1->GetStaticID();
            ComponentUtils::SetHiddenInStaticList(iVar1, (vector*)&field_440, param_2);
            iVar1 = param_1->GetStaticID();
            ComponentUtils::SetHiddenInStaticList(iVar1, (vector*)&field_472, param_2);
        } else {
            iVar1 = param_1->GetDynamicID();
            ComponentUtils::SetHiddenInDynamicList(iVar1, (vector*)&field_504, param_2);
            iVar1 = param_1->GetDynamicID();
            ComponentUtils::SetHiddenInDynamicList(iVar1, (vector*)&field_536, param_2);
        }
    }

    // 0x1006950c0, 688 bytes, placed by class name
    // ComponentCollection::SendComponentToBack(shared_ptr<Component> const&)
    void ComponentCollection::SendComponentToBack(shared_ptr* param_1) {
        char cVar1;
        int iVar2;
        Component* pCVar3;
        ComponentCollection* pCVar4;
        ComponentContainer* pCVar5;
        ComponentContainer* pCVar6;
        pair* ppVar7;
        ulong uVar8;
        Skybox* this_00;
        ulong uVar9;
        long lVar10;
        long lVar11;
        Layout* this_01;
        _func_bool_ComponentContainer_ptr_int* p_Var12;
        ComponentContainer* this_02;
        bool bVar13;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_60[16];
        ComponentContainer local_50;
        int local_38;
        bool local_31;

        pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        iVar2 = pCVar3->GetDynamicID();
        if (iVar2 == -1) {
            bVar13 = false;
        } else {
            shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_60->GetLookatEntity();
            pCVar4 = (ComponentCollection*)local_60->end();
            bVar13 = pCVar4 != this;
            if (iVar2 != -1) {
                local_60->~shared_ptr();
            }
        }
        if (bVar13) {
            /* WARNING: Subroutine does not return */
            LogAssert("(component->GetDynamicID() == -1) || (component->GetParent().get() == this)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollection.cpp",
                      202, (char*)0);
        }
        pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        iVar2 = pCVar3->GetDynamicID();
        if (iVar2 == -1) {
            this_01 = (Layout*)&field_440;
            this_02 = (ComponentContainer*)&field_472;
            pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_38 = pCVar3->GetStaticID();
            p_Var12 = (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerStaticIdInOrder_100ee6430;
        } else {
            this_01 = (Layout*)&field_504;
            this_02 = (ComponentContainer*)&field_536;
            pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_38 = pCVar3->GetDynamicID();
            p_Var12 = (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438;
        }
        pCVar5 = (ComponentContainer*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        pCVar6 = (ComponentContainer*)this_01->end();
        pCVar5 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
            pCVar5, pCVar6, &local_38, p_Var12);
        ppVar7 = (pair*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        uVar8 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(ppVar7, (pair*)pCVar5);
        this_00 = (Skybox*)eastl::vector<ComponentContainer, eastl::allocator>::operator[](
            (vector<ComponentContainer, eastl::allocator>*)this_01, uVar8);
        local_31 = (bool)this_00->ShowSkybox();
        cVar1 = this_02->empty();
        if (cVar1 == '\0') {
            pCVar5 = (ComponentContainer*)this_02->HeapBeginPtr();
            pCVar6 = (ComponentContainer*)this_02->end();
            pCVar5 = eastl::find<ComponentContainer*, shared_ptr<Component>,
                                 bool (*)(ComponentContainer_const&, shared_ptr<Component> const&)>(
                pCVar5, pCVar6, param_1,
                (_func_bool_ComponentContainer_ptr_shared_ptr_ptr*)PTR_ContainerEquals_100ee6418);
            pCVar6 = (ComponentContainer*)this_02->end();
            if (pCVar5 == pCVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert("existingRenderOrderIt != componentListRenderOrder->end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollection.cpp",
                          245, (char*)0);
            }
            this_02->erase(pCVar5);
            pCVar5 = (ComponentContainer*)this_02->HeapBeginPtr();
            new (&local_50) ComponentContainer(param_1, local_31);
            this_02->insert(pCVar5, &local_50);
            local_50.~pair();
        } else {
            uVar9 = this_01->size();
            this_02->reserve(uVar9);
            eastl::vector<ComponentContainer, eastl::allocator>::emplace_back<shared_ptr<Component> const&, bool&>(
                (vector<ComponentContainer, eastl::allocator>*)this_02, param_1, &local_31);
            lVar10 = this_02->HeapBeginPtr();
            pCVar5 = (ComponentContainer*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
            eastl::vector<ComponentContainer, eastl::allocator>::insert<ComponentContainer*>(
                this_02, (ComponentContainer*)(lVar10 + 24), pCVar5);
            lVar10 = this_02->HeapBeginPtr();
            lVar11 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            this_01->end();
            eastl::vector<ComponentContainer, eastl::allocator>::insert<ComponentContainer*>(
                this_02, (ComponentContainer*)(lVar10 + uVar8 * 24 + 24),
                (ComponentContainer*)(uVar8 * 24 + lVar11 + 24));
        }
    }

    // 0x100695500, 672 bytes, placed by class name
    // ComponentCollection::SendComponentToFront(shared_ptr<Component> const&)
    void ComponentCollection::SendComponentToFront(shared_ptr* param_1) {
        char cVar1;
        int iVar2;
        Component* pCVar3;
        ComponentCollection* pCVar4;
        ComponentContainer* pCVar5;
        ComponentContainer* pCVar6;
        pair* ppVar7;
        ulong uVar8;
        Skybox* this_00;
        ulong uVar9;
        long lVar10;
        long lVar11;
        shared_ptr* psVar12;
        Layout* this_01;
        _func_bool_ComponentContainer_ptr_int* p_Var13;
        ComponentContainer* this_02;
        bool bVar14;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_50[16];
        int local_38;
        bool local_31;

        pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        iVar2 = pCVar3->GetDynamicID();
        if (iVar2 == -1) {
            bVar14 = false;
        } else {
            shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_50->GetLookatEntity();
            pCVar4 = (ComponentCollection*)local_50->end();
            bVar14 = pCVar4 != this;
            if (iVar2 != -1) {
                local_50->~shared_ptr();
            }
        }
        if (bVar14) {
            /* WARNING: Subroutine does not return */
            LogAssert("(component->GetDynamicID() == -1) || (component->GetParent().get() == this)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollection.cpp",
                      255, (char*)0);
        }
        pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        iVar2 = pCVar3->GetDynamicID();
        if (iVar2 == -1) {
            this_01 = (Layout*)&field_440;
            this_02 = (ComponentContainer*)&field_472;
            pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_38 = pCVar3->GetStaticID();
            p_Var13 = (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerStaticIdInOrder_100ee6430;
        } else {
            this_01 = (Layout*)&field_504;
            this_02 = (ComponentContainer*)&field_536;
            pCVar3 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_38 = pCVar3->GetDynamicID();
            p_Var13 = (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438;
        }
        pCVar5 = (ComponentContainer*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        pCVar6 = (ComponentContainer*)this_01->end();
        pCVar5 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
            pCVar5, pCVar6, &local_38, p_Var13);
        pCVar6 = (ComponentContainer*)this_01->end();
        if (pCVar5 == pCVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert("existingIt != componentList->end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollection.cpp",
                      281, (char*)0);
        }
        ppVar7 = (pair*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        uVar8 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(ppVar7, (pair*)pCVar5);
        this_00 = (Skybox*)eastl::vector<ComponentContainer, eastl::allocator>::operator[](
            (vector<ComponentContainer, eastl::allocator>*)this_01, uVar8);
        local_31 = (bool)this_00->ShowSkybox();
        cVar1 = this_02->empty();
        if (cVar1 == '\0') {
            pCVar5 = (ComponentContainer*)this_02->HeapBeginPtr();
            pCVar6 = (ComponentContainer*)this_02->end();
            psVar12 = param_1;
            pCVar5 = eastl::find<ComponentContainer*, shared_ptr<Component>,
                                 bool (*)(ComponentContainer_const&, shared_ptr<Component> const&)>(
                pCVar5, pCVar6, param_1,
                (_func_bool_ComponentContainer_ptr_shared_ptr_ptr*)PTR_ContainerEquals_100ee6418);
            pCVar6 = (ComponentContainer*)this_02->end();
            if (pCVar5 == pCVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert("existingRenderOrderIt != componentListRenderOrder->end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollection.cpp",
                          300, (char*)0);
            }
            this_02->erase(pCVar5);
        } else {
            uVar9 = this_01->size();
            this_02->reserve(uVar9);
            pCVar5 = (ComponentContainer*)this_02->HeapBeginPtr();
            pCVar6 = (ComponentContainer*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
            eastl::vector<ComponentContainer, eastl::allocator>::insert<ComponentContainer*>(this_02, pCVar5, pCVar6);
            lVar10 = this_02->HeapBeginPtr();
            lVar11 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            this_01->end();
            eastl::vector<ComponentContainer, eastl::allocator>::insert<ComponentContainer*>(
                this_02, (ComponentContainer*)(lVar10 + uVar8 * 24), (ComponentContainer*)(uVar8 * 24 + lVar11 + 24));
            psVar12 = param_1;
        }
        eastl::vector<ComponentContainer, eastl::allocator>::emplace_back<shared_ptr<Component> const&, bool&>(
            (vector<ComponentContainer, eastl::allocator>*)this_02, psVar12, &local_31);
    }

    // 0x1006ad5b0: the linker folded this into ComponentCollection::GetDynamicChildren(), which has identical code
    ComponentCollection::GetDynamicChildren() const;

} // namespace jag::ui
