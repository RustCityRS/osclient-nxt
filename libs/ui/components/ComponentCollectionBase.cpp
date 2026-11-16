// libs/ui/components/ComponentCollectionBase.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ComponentCollectionBase.h"

namespace jag::ui {
    // 0x100d43370
    int32_t ComponentCollectionBase::DYNAMIC_COMPONENT_LIST_MIN_INITIAL_SIZE[24] = {
        50, 0, 1, 2, 1, 3, 2, 0, 0, 0, 1, 1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, -1, -1,
    };

    // 0x100029ea0: ComponentCollectionBase::UpdateLayout(bool) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ComponentCollectionBase::IsLayoutDirty() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: ComponentCollectionBase::SupportsScrolling() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ComponentCollectionBase::IsComponentCollection() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ComponentCollectionBase::SupportsChildComponentType(ComponentType) const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100694910
    void ComponentCollectionBase::ChildDynamicIDExists(int arg1) const {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)GetDynamicChild(arg1);
        *midiPlayerMainThread != nullptr;
    }

    // 0x100694b40
    void ComponentCollectionBase::RootSetUnownedDynamicChild(int arg1, const shared_ptr<Component>& component) {
        bool cVar1;
        unsigned int uVar2;

        auto this_00 = GetRootCollection((ReturnValue*)this);
        if (this_00 != nullptr) {
            if ((this_00 == this) && (cVar1 = this_00->field_392.empty(), cVar1)) {
                return;
            }
            cVar1 = this_00->field_392.empty();
            if (cVar1) {
                BuildDynamicNestedChildrenList(this_00);
            }
            uVar2 = ComponentHelpers::GetCategoryID(arg1);
            ((DynamicNestedChildren*)this_00->field_392[(unsigned long)uVar2])
                ->Set(ComponentHelpers::GetDynamicID(arg1), component);
        }
    }

    // 0x100694e40
    void ComponentCollectionBase::RootRemoveUnownedDynamicChild(const shared_ptr<Component>& component) {
        unsigned int uVar2;
        Component* pCVar4;
        DynamicNestedChildren* this_00;

        auto pRVar3 = GetRootCollection((ReturnValue*)this);
        if (pRVar3 != nullptr) {
            if (((pRVar3 + 49))->empty() == '\0') {
                pCVar4 = (Component*)component.operator->();
                uVar2 = pCVar4->GetDynamicID();
                uVar2 = ComponentHelpers::GetCategoryID(uVar2);
                this_00 = (DynamicNestedChildren*)(*((pRVar3 + 49)))[(unsigned long)uVar2];
                pCVar4 = (Component*)component.operator->();
                uVar2 = pCVar4->GetDynamicID();
                this_00->Remove(ComponentHelpers::GetDynamicID(uVar2));
            }
        }
    }

    // 0x1006957a0
    void ComponentCollectionBase::DelAll() {
        (*this->_vptr[1]._x7e___2)();
    }

    // 0x100695870
    void ComponentCollectionBase::RootRemoveUnownedDynamicChildren(
        const eastl::vector<ComponentContainer>& componentContainers) {
        unsigned int uVar2;
        int iVar3;
        int iVar4;
        uint64_t in_RAX;
        ComponentContainer* componentContainer1;
        ComponentContainer* pCVar6;
        ComponentContainer* pCVar7;

        uint64_t uStack_38 = in_RAX;
        auto pRVar5 = GetRootCollection((ReturnValue*)this);
        if (pRVar5 != nullptr) {
            if (((pRVar5 + 49))->empty() == '\0') {
                componentContainer1 = (ComponentContainer*)componentContainers.HeapBeginPtr();
                pCVar6 = (ComponentContainer*)componentContainers.end();
                if (componentContainer1 != pCVar6) {
                    do {
                        uVar2 = ((Component*)componentContainer1->data())->GetDynamicID();
                        uVar2 = ComponentHelpers::GetCategoryID(uVar2);
                        iVar3 = ComponentHelpers::EncodeDynamicID(uVar2, 0);
                        iVar4 = ComponentHelpers::GetMaxDynamicID(uVar2);
                        uStack_38 = (((uint64_t)(iVar4 + iVar3) << 32) | (uint32_t)((uint32_t)uStack_38));
                        pCVar6 = (ComponentContainer*)componentContainers.end();
                        pCVar6 = eastl::lower_bound<ComponentContainer const*, int,
                                                    bool (*)(ComponentContainer const&, int)>(
                            &componentContainer1[1].field_8, pCVar6, *((int*)((long)&uStack_38 + 4)),
                            PTR_ContainerDynamicIdInOrder_100ee6438);
                        ((DynamicNestedChildren*)(*((pRVar5 + 49)))[(unsigned long)uVar2])
                            ->RemoveAll(componentContainer1, pCVar6);
                        pCVar7 = (ComponentContainer*)componentContainers.end();
                        componentContainer1 = pCVar6;
                    } while (pCVar6 != pCVar7);
                }
            }
        }
    }

    // 0x1006959a0
    void ComponentCollectionBase::GetChildCombinedIDs(eastl::vector<unsigned int, BucketAllocatorEASTL>& arg1) const {
        uint64_t extraout_var;
        unsigned int* puVar3;
        unsigned int* puVar4;
        unsigned int local_34;

        uint8_t uVar1 = (*this->_vptr[1].SetEnabled)((uint8_t)this);
        SharedArray<unsigned int>* this_00 =
            (SharedArray<unsigned int>*)((Layout*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->HeapBeginPtr();
        SharedArray<unsigned int>* pSVar2 =
            (SharedArray<unsigned int>*)((vector<oldscape::dash3d::EntityHighlight*,
                                                 BucketAllocatorEASTL>*)(((uint64_t)extraout_var << 8) |
                                                                         (uint8_t)uVar1))
                ->end();
        do {
            if (this_00 == pSVar2) {
                return;
            }
            local_34 = ((Component*)this_00->data())->GetCombinedID();
            puVar3 = (unsigned int*)arg1.HeapBeginPtr();
            puVar4 = (unsigned int*)arg1.end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                if (*puVar3 == local_34) {
                    LogAssert("id != combinedID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentCollectionBase.cpp",
                              36, nullptr);
                }
            }
            arg1.push_back(local_34);
            this_00 = this_00 + 24;
        } while (true);
    }

    // 0x100695ac0
    ComponentContainer* ComponentCollectionBase::GetDynamicChild(int arg1) const {
        unsigned int uVar3;
        int iVar4;
        uint64_t extraout_var;
        long lVar9;
        pair<shared_ptr<Component>, int>* arg1_00;
        pair<shared_ptr<Component>, int>* arg2;
        bool bVar11;
        int local_30;

        if (64255 < (unsigned int)arg1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "ComponentCollectionBase.cpp",
                            83, nullptr);
        }
        uint8_t uVar1 = (*this->_vptr[1].SetForceDisabled)((uint8_t)this);
        Layout* pLVar10 = (Layout*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        auto pCVar6 = pLVar10->HeapBeginPtr();
        auto pCVar7 = pLVar10->end();
        __41* arg4 = (__41*)PTR_ContainerDynamicIdInOrder_100ee6438;
        pCVar7 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
            pCVar6, pCVar7, (unsigned int)arg1, PTR_ContainerDynamicIdInOrder_100ee6438);
        auto pCVar8 = pLVar10->end();
        if (pCVar7 != pCVar8) {
            uVar3 = ((Component*)pCVar7->data())->GetDynamicID();
            if (uVar3 == (unsigned int)arg1) {
                pCVar6 = (ComponentContainer*)pCVar7->second();
                return pCVar6;
            }
        }
        uint8_t* this_01 = &field_392;
        if (this_01->empty() == '\0') {
            iVar4 = ComponentHelpers::GetDynamicID((unsigned int)arg1);
            local_30 = iVar4;
            uVar3 = ComponentHelpers::GetCategoryID((unsigned int)arg1);
            if (this_01->size() <= (int)uVar3) {
                LogAssert("categoryID < (int)m_dynamicNestedChildren.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollectionBase.cpp",
                          67, nullptr);
            }
            lVar9 = (*this_01)[(unsigned long)uVar3];
            pLVar10 = (Layout*)(lVar9 + 8);
            arg1_00 = (pair<shared_ptr<Component>, int>*)pLVar10->HeapBeginPtr();
            arg2 = (pair<shared_ptr<Component>, int>*)pLVar10->end();
            pCVar7 = (ComponentContainer*)eastl::lower_bound<eastl::pair<shared_ptr<Component>, int> const*, int,
                                                             int->GetDynamicChild() const ::__41>(arg1_00, arg2,
                                                                                                  &local_30, arg4);
            pCVar8 = (ComponentContainer*)pLVar10->end();
            if (pCVar7 == pCVar8) {
                bVar11 = true;
            } else {
                bVar11 = *(int*)(pCVar7 + 1) != iVar4;
                if (!bVar11) {
                    pCVar6 = pCVar7;
                }
            }
            if (!bVar11) {
                return pCVar6;
            }
        }
        return (ComponentContainer*)PTR_NullComponentShared_100ee6498;
    }

    // 0x100695d20
    int ComponentCollectionBase::GetNextAvailableDynamicId(int arg1) const {
        bool cVar1;
        uint8_t uVar2;
        int iVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        uint64_t extraout_var;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        ComponentContainer* pCVar7;
        ComponentContainer* pCVar8;
        ComponentContainer* pCVar9;
        shared_ptr<Component>* psVar10;
        Component* pCVar11;
        Logger* this_03;
        uint64_t uVar12;
        __42* arg3;
        ReturnValue local_50;
        shared_ptr local_40;

        if (234 < (unsigned int)arg1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "ComponentCollectionBase.cpp",
                            92, nullptr);
        }
        int iVar3 = GetDynamicID();
        if (iVar3 == -1) {
            uVar2 = (*this->_vptr[1].SetForceDisabled)((uint8_t)this);
            this_01 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var << 8) |
                                                                                        (uint8_t)uVar2);
            cVar1 = this_01->empty();
            iVar3 = 0;
            if (!cVar1) {
                cVar1 = field_392.empty();
                if (!cVar1) {
                    iVar3 = ((DynamicNestedChildren*)field_392[(long)arg1])->GetNextFreeId();
                } else {
                    iVar3 = 0;
                    local_40._0_4_ = ComponentHelpers::EncodeDynamicID(arg1, 0);
                    local_50[0]._0_4_ = ComponentHelpers::EncodeDynamicID(arg1 + 1, 0);
                    pCVar7 = (ComponentContainer*)this_01->HeapBeginPtr();
                    pCVar8 = (ComponentContainer*)this_01->end();
                    pCVar7 =
                        eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
                            pCVar7, pCVar8, local_40, PTR_ContainerDynamicIdInOrder_100ee6438);
                    pCVar8 = (ComponentContainer*)this_01->end();
                    pCVar8 =
                        eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
                            pCVar7, pCVar8, local_50, PTR_ContainerDynamicIdInOrder_100ee6438);
                    pCVar9 = (ComponentContainer*)this_01->end();
                    if (pCVar7 != pCVar9) {
                        psVar10 = (shared_ptr<Component>*)pCVar7->second();
                        pCVar11 = (Component*)(*psVar10).operator->();
                        iVar4 = pCVar11->GetDynamicID();
                        if (iVar4 <= (int)local_40._0_4_) {
                            pCVar9 =
                                eastl::adjacent_find<ComponentContainer const*, int->GetNextAvailableDynamicId()
                                                                                    const ::__42>(pCVar7, pCVar8, arg3);
                            if (pCVar9 == pCVar8) {
                                iVar3 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(pCVar7, pCVar8);
                            } else {
                                psVar10 = (shared_ptr<Component>*)pCVar9->second();
                                pCVar11 = (Component*)(*psVar10).operator->();
                                iVar3 = ComponentHelpers::GetDynamicID(pCVar11->GetDynamicID());
                                iVar3 = iVar3 + 1;
                            }
                            iVar4 = ComponentHelpers::GetMaxDynamicID(arg1);
                            if (iVar4 <= iVar3) {
                                this_03 = logger::default_logger();
                                GetChildren();
                                uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                uVar5 = GetStaticID();
                                uVar6 = GetDynamicID();
                                this_03->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                             "components/ComponentCollectionBase.cpp",
                                             148,
                                             "Component \'%s\' (Static ID %d Dynamic ID %d) has ran out of free ids "
                                             "for category %d",
                                             uVar12, uVar5, uVar6, arg1);
                                iVar3 = -1;
                            }
                        }
                    }
                }
            }
        } else {
            local_50 = field_32.lock();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)&local_40);
            cVar1 = shared_ptr::operator_cast_to_bool(&local_40);
            if (!cVar1) {
                LogAssert("rootStaticContainer",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollectionBase.cpp",
                          161, nullptr);
            }
            iVar3 = GetNextAvailableDynamicId((ComponentCollectionBase*)local_40.operator->(), arg1);
        }
        return iVar3;
    }

    // 0x100696070
    shared_ptr<Component>* ComponentCollectionBase::FindNext(const shared_ptr<Component>& component) const {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        long* plVar4;
        ComponentContainer* pCVar5;
        shared_ptr<Component>* psVar6;
        __43* in_RCX;
        __44* p_Var7;
        uint8_t local_36;
        uint8_t local_35;
        uint8_t local_34;
        uint8_t local_32;
        uint8_t local_31;

        uint8_t uVar1 = (*this->_vptr[1].SetEnabled)((uint8_t)this);
        Layout* this_00 = (Layout*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        uVar1 = (*this->_vptr[1].SetForceDisabled)((uint8_t)this);
        Layout* this_01 = (Layout*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1);
        auto pCVar2 = this_00->HeapBeginPtr();
        auto pCVar3 = this_00->end();
        pCVar2 =
            eastl::find<ComponentContainer const*, shared_ptr<Component>,
                        (shared_ptr<Component> const&)->FindNext() const ::__43>(pCVar2, pCVar3, component, in_RCX);
        pCVar3 = (ComponentContainer*)this_00->end();
        if (pCVar2 != pCVar3) {
            pCVar3 = (ComponentContainer*)this_00->end();
            plVar4 = (long*)component.operator->();
            p_Var7 = (__44*)*plVar4;
            local_36 = (**(void (**)(...))(p_Var7 + 16))(plVar4);
            pCVar3 = eastl::find<ComponentContainer const*, ComponentType,
                                 (shared_ptr<Component> const&)->FindNext() const ::__44>(
                (ComponentContainer*)&pCVar2[1].field_8, pCVar3, (ComponentType*)&local_36, p_Var7);
            pCVar5 = (ComponentContainer*)this_00->end();
            if (pCVar3 == pCVar5) {
                pCVar3 = (ComponentContainer*)this_01->HeapBeginPtr();
                pCVar5 = (ComponentContainer*)this_01->end();
                plVar4 = (long*)component.operator->();
                p_Var7 = (__44*)*plVar4;
                local_35 = (**(void (**)(...))(p_Var7 + 16))(plVar4);
                pCVar3 = eastl::find<ComponentContainer const*, ComponentType,
                                     (shared_ptr<Component> const&)->FindNext() const ::__44>(
                    pCVar3, pCVar5, (ComponentType*)&local_35, p_Var7);
                pCVar5 = (ComponentContainer*)this_01->end();
                if (pCVar3 == pCVar5) {
                    pCVar3 = (ComponentContainer*)this_00->HeapBeginPtr();
                    plVar4 = (long*)component.operator->();
                    p_Var7 = (__44*)*plVar4;
                    local_34 = (**(void (**)(...))(p_Var7 + 16))(plVar4);
                    pCVar3 = eastl::find<ComponentContainer const*, ComponentType,
                                         (shared_ptr<Component> const&)->FindNext() const ::__44>(
                        pCVar3, pCVar2, (ComponentType*)&local_34, p_Var7);
                    if (pCVar3 == pCVar2) {
                        return component;
                    }
                }
            }
            psVar6 = (shared_ptr<Component>*)pCVar3->second();
            return psVar6;
        }
        pCVar2 = (ComponentContainer*)this_01->HeapBeginPtr();
        pCVar3 = (ComponentContainer*)this_01->end();
        pCVar2 =
            eastl::find<ComponentContainer const*, shared_ptr<Component>,
                        (shared_ptr<Component> const&)->FindNext() const ::__43>(pCVar2, pCVar3, component, in_RCX);
        pCVar3 = (ComponentContainer*)this_01->end();
        if (pCVar2 == pCVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      241, "Provided component could not be found in this ComponentCollection.");
            return component;
        }
        pCVar3 = (ComponentContainer*)this_01->end();
        plVar4 = (long*)component.operator->();
        p_Var7 = (__44*)*plVar4;
        uint8_t local_33 = (**(void (**)(...))(p_Var7 + 16))(plVar4);
        pCVar3 = eastl::find<ComponentContainer const*, ComponentType,
                             (shared_ptr<Component> const&)->FindNext() const ::__44>(
            (ComponentContainer*)&pCVar2[1].field_8, pCVar3, (ComponentType*)&local_33, p_Var7);
        pCVar5 = (ComponentContainer*)this_01->end();
        if (pCVar3 == pCVar5) {
            pCVar3 = (ComponentContainer*)this_00->HeapBeginPtr();
            pCVar5 = (ComponentContainer*)this_00->end();
            plVar4 = (long*)component.operator->();
            p_Var7 = (__44*)*plVar4;
            local_32 = (**(void (**)(...))(p_Var7 + 16))(plVar4);
            pCVar3 = eastl::find<ComponentContainer const*, ComponentType,
                                 (shared_ptr<Component> const&)->FindNext() const ::__44>(
                pCVar3, pCVar5, (ComponentType*)&local_32, p_Var7);
            pCVar5 = (ComponentContainer*)this_00->end();
            if (pCVar3 == pCVar5) {
                pCVar3 = (ComponentContainer*)this_01->HeapBeginPtr();
                plVar4 = (long*)component.operator->();
                p_Var7 = (__44*)*plVar4;
                local_31 = (**(void (**)(...))(p_Var7 + 16))(plVar4);
                pCVar3 = eastl::find<ComponentContainer const*, ComponentType,
                                     (shared_ptr<Component> const&)->FindNext() const ::__44>(
                    pCVar3, pCVar2, (ComponentType*)&local_31, p_Var7);
                if (pCVar3 == pCVar2) {
                    return component;
                }
            }
        }
        psVar6 = (shared_ptr<Component>*)pCVar3->second();
        return psVar6;
    }

    // 0x1006963f0
    auto ComponentCollectionBase::GetRootCollection() {
        auto result;
        shared_ptr local_28;

        auto local_38 = result.GetFocus();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
            (shared_ptr<oldscape::ClientNpc>*)&local_28);
        if (shared_ptr::operator_cast_to_bool(&local_28) == '\0') {
            if (result.GetDynamicID() == -1)
                goto LAB_100696448;
        }
        &result = (ReturnValue*)local_28.end();
    LAB_100696448:
        return result;
    }

    // 0x100696490
    void ComponentCollectionBase::BuildDynamicNestedChildrenList() {
        if (GetDynamicID() != -1) {
            LogAssert("GetDynamicID() == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      312, nullptr);
        }
        if (field_392.empty() == '\0') {
            LogAssert("m_dynamicNestedChildren.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      313, nullptr);
        }
        field_392.resize(235);
        (*this->_vptr[1]._x7e___2)(this);
    }

    // 0x1006965f0
    void ComponentCollectionBase::DynamicNestedChildren::Set(int arg1, const shared_ptr<Component>& component) {
        __46* in_RCX;
        pair<shared_ptr<Component>, int> local_50;

        uint8_t* this_00 = &field_8;
        ShaderVariablePrecision local_34 = arg1;
        auto ppVar2 = this_00->HeapBeginPtr();
        auto ppVar3 = this_00->end();
        ppVar2 =
            eastl::lower_bound<eastl::pair<shared_ptr<Component>, int>*, int,
                               int->Set(shared_ptr<Component> const&)::__46>(ppVar2, ppVar3, (int*)&local_34, in_RCX);
        ppVar3 = (pair<shared_ptr<Component>, int>*)this_00->end();
        if ((ppVar2 == ppVar3) || (*(ShaderVariablePrecision*)(ppVar2 + 16) != local_34)) {
            local_50.pair<int&, void>(component, local_34);
            this_00->insert(ppVar2, local_50);
            field_40 = field_40 | local_34 == m_nextFreeId;
        } else {
            *ppVar2 = component;
            *(ShaderVariablePrecision*)(ppVar2 + 16) = local_34;
        }
        field_0 = eastl::max<int>(field_0, local_34);
    }

    // 0x1006966d0
    void ComponentCollectionBase::DynamicNestedChildren::Remove(int arg1) {
        bool cVar1;
        long lVar4;
        int iVar5;
        __47* in_RCX;

        uint8_t* this_00 = &field_8;
        int local_2c = arg1;
        auto ppVar2 = this_00->HeapBeginPtr();
        auto ppVar3 = this_00->end();
        ppVar2 = eastl::lower_bound<eastl::pair<shared_ptr<Component>, int>*, int, int->Remove()::__47>(
            ppVar2, ppVar3, &local_2c, in_RCX);
        ppVar3 = (pair<shared_ptr<Component>, int>*)this_00->end();
        if ((ppVar2 != ppVar3) && (*(int*)(ppVar2 + 16) == arg1)) {
            this_00->erase(ppVar2);
            field_40 = 1;
            cVar1 = this_00->empty();
            iVar5 = -1;
            if (!cVar1) {
                lVar4 = this_00->back();
                iVar5 = *(int*)(lVar4 + 16);
            }
            field_0 = iVar5;
        }
    }

    // 0x100696760
    void ComponentCollectionBase::DynamicNestedChildren::RemoveAll(const ComponentContainer* componentContainer1,
                                                                   const ComponentContainer* componentContainer2) {
        long lVar4;

        uint8_t* this_00 = &field_8;
        ComponentContainer* local_30 = componentContainer1;
        auto ppVar2 = this_00->HeapBeginPtr();
        auto ppVar3 = this_00->end();
        ppVar2 = eastl::remove_if<eastl::pair<shared_ptr<Component>, int>*,
                                  (ComponentContainer const*)->RemoveAll(ComponentContainer const*)::__48>(
            ppVar2, ppVar3, (__48)&local_30);
        if (local_30 != componentContainer2) {
            LogAssert("start == end",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollectionBase.cpp",
                      422, "%s: could not find all components needed for removal", "RemoveAll");
        }
        ppVar3 = (pair<shared_ptr<Component>, int>*)this_00->end();
        this_00->erase(ppVar2, ppVar3);
        field_40 = 1;
        bool cVar1 = this_00->empty();
        int iVar5 = -1;
        if (!cVar1) {
            lVar4 = this_00->back();
            iVar5 = *(int*)(lVar4 + 16);
        }
        field_0 = iVar5;
    }

    // 0x100696880
    bool ComponentCollectionBase::DynamicNestedChildren::IdUsed(int arg1) const {
        pair<shared_ptr<Component>, int>* ppVar1;
        pair<shared_ptr<Component>, int>* ppVar2;
        __45* in_RCX;
        uint8_t* this_00;
        int local_24;

        if (((field_40 != '\0') || (m_nextFreeId != arg1)) && (arg1 <= field_0)) {
            this_00 = &field_8;
            ppVar1 = (pair<shared_ptr<Component>, int>*)this_00->HeapBeginPtr();
            ppVar2 = (pair<shared_ptr<Component>, int>*)this_00->end();
            ppVar1 =
                eastl::lower_bound<eastl::pair<shared_ptr<Component>, int> const*, int, int->IdUsed() const ::__45>(
                    ppVar1, ppVar2, &local_24, in_RCX);
            ppVar2 = (pair<shared_ptr<Component>, int>*)this_00->end();
            if (ppVar1 != ppVar2) {
                return *(int*)(ppVar1 + 16) == arg1;
            }
        }
        return false;
    }

    // 0x100696c40
    void ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId() const {
        uint8_t* this_00;
        bool cVar1;
        long lVar2;
        pair<shared_ptr<Component>, int>* ppVar3;
        pair<shared_ptr<Component>, int>* ppVar4;
        int iVar5;
        uint8_t auVar6[16];

        if (field_40 != '\0') {
            this_00 = &field_8;
            cVar1 = this_00->empty();
            iVar5 = 0;
            if (!cVar1) {
                lVar2 = this_00->front();
                if (*(int*)(lVar2 + 16) < 1) {
                    ppVar3 = (pair<shared_ptr<Component>, int>*)this_00->HeapBeginPtr();
                    auVar6 = this_00->end();
                    ppVar3 = eastl::adjacent_find<eastl::pair<shared_ptr<Component>, int> const*,
                                                  ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId()
                                                      const ::__49>(ppVar3, auVar6._0_8_, auVar6._8_8_);
                    ppVar4 = (pair<shared_ptr<Component>, int>*)this_00->end();
                    if (ppVar3 == ppVar4) {
                        iVar5 = this_00->size();
                    } else {
                        iVar5 = *(int*)(ppVar3 + 16) + 1;
                    }
                }
            }
            m_nextFreeId = iVar5;
            field_40 = 0;
        }
    }

    // 0x1006d0590
    uint32_t ComponentCollectionBase::GetNextAvailableDynamicId(int) const ::$_42::operator()(
        const ComponentContainer& componentContainer1, const ComponentContainer& componentContainer2) const {
        auto psVar3 = componentContainer1.second();
        Component* pCVar4 = (Component*)(*psVar3).operator->();
        int iVar1 = pCVar4->GetDynamicID();
        psVar3 = (shared_ptr<Component>*)second();
        pCVar4 = (Component*)(*psVar3).operator->();
        return pCVar4->GetDynamicID() + 1 < iVar1;
    }

    // 0x100c92b50: ComponentCollectionBase::~ComponentCollectionBase() has the same machine code as InlineFatalBreak()

} // namespace jag::ui
