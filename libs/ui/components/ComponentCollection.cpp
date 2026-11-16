// libs/ui/components/ComponentCollection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ComponentCollection.h"

namespace jag::ui {
    // 0x100418f30: ComponentCollection::GetStaticChildren() has the same machine code as game::NPCType::GetName() const

    // 0x100418f30: ComponentCollection::GetStaticChildren() const has the same machine code as game::NPCType::GetName() const

    // 0x100694120
    ComponentCollection::~ComponentCollection() {
        if (GetDynamicID() != -1) {
            DelAll();
        }
        field_536.~vector();
        field_504.~vector();
        field_472.~vector();
        field_440.~vector();
    }

    // 0x100694260
    void ComponentCollection::SetScrollPos(int arg1, int arg2) {
        ValidateScrollPos((EnumOptionToggle)arg1, (EnumOptionToggle)arg2);
        if ((field_424 != (EnumOptionToggle)arg1) || (field_428 != (EnumOptionToggle)arg2)) {
            field_424 = (EnumOptionToggle)arg1;
            field_428 = (EnumOptionToggle)arg2;
            ~();
        }
    }

    // 0x1006942c0
    void ComponentCollection::ValidateScrollPos(int& arg1, int& arg2) const {
        EnumOptionToggle EVar1 = arg1;
        int iVar2 = eastl::max<int>(field_88, m_scrollWidth);
        auto SVar3 = eastl::min<graphics::GraphicsQuality>(EVar1, iVar2 - field_88);
        iVar2 = eastl::max<int>(0, SVar3);
        arg1 = iVar2;
        EVar1 = arg2;
        iVar2 = eastl::max<int>(field_92, m_scrollHeight);
        SVar3 = eastl::min<graphics::GraphicsQuality>(EVar1, iVar2 - field_92);
        iVar2 = eastl::max<int>(0, SVar3);
        arg2 = iVar2;
    }

    // 0x100694340
    void ComponentCollection::SetScrollSize(int arg1, int arg2) {
        if ((m_scrollWidth != arg1) || (m_scrollHeight != arg2)) {
            m_scrollWidth = arg1;
            m_scrollHeight = arg2;
            ValidateScrollPos(field_424, field_428);
            ~();
        }
    }

    // 0x100694390
    void ComponentCollection::AddStaticChild(const ComponentContainer& componentContainer) {
        field_440.push_back(componentContainer);
        ~();
    }

    // 0x100694410
    unsigned long ComponentCollection::AddDynamicChild(const shared_ptr<Component>& component, bool arg2) {
        char cVar1;
        bool bVar3;
        Logger* pLVar6;
        uint64_t uVar7;
        SharedArray<unsigned int>* this_02;
        ComponentContainer* pCVar8;
        ComponentContainer* pCVar9;
        ComponentContainer* componentContainer2;
        shared_ptr<Component>* component_00;
        unsigned long uVar10;
        int arg4;
        char* str2;
        ReturnValue local_68;
        ComponentContainer local_50;

        auto pCVar5 = component.operator->();
        int local_34 = pCVar5->GetDynamicID();
        int iVar4 = GetDynamicID();
        if (iVar4 == -1) {
            cVar1 = '\0';
        } else {
            local_68 = GetFocus();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)&local_50);
            cVar1 = local_50.operator_cast_to_bool();
            if (!cVar1) {
                pLVar6 = logger::default_logger();
                iVar4 = local_34;
                GetChildren();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar1 = '\0';
                pLVar6->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                    "ComponentCollection.cpp",
                    56,
                    "Could not add dynamic child with ID %i to component \'%s\' - dynamic layer has no static parent",
                    iVar4, uVar7);
                bVar3 = false;
            } else {
                cVar1 = ((ComponentCollectionBase*)local_50.operator->())->ChildDynamicIDExists(local_34);
                bVar3 = true;
                if ((cVar1) && (!arg2)) {
                    pLVar6 = logger::default_logger();
                    iVar4 = local_34;
                    GetChildren();
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    cVar1 = '\0';
                    pLVar6->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "ComponentCollection.cpp",
                                63,
                                "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                                "already exists",
                                iVar4, uVar7);
                    bVar3 = false;
                }
            }
            if (!bVar3) {
                uVar10 = 0;
                goto LAB_100694875;
            }
        }
        uint8_t* this_00 = &field_504;
        if (this_00->empty()) {
            this_00->reserve(50);
        }
        if (!(this_00->empty())) {
            this_02 = (SharedArray<unsigned int>*)this_00->back();
            pCVar5 = (Component*)this_02->data();
            iVar4 = pCVar5->GetDynamicID();
            if (iVar4 < local_34)
                goto LAB_1006945a4;
            pCVar8 = (ComponentContainer*)this_00->HeapBeginPtr();
            pCVar9 = (ComponentContainer*)this_00->end();
            pCVar8 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
                pCVar8, pCVar9, local_34, PTR_ContainerDynamicIdInOrder_100ee6438);
        } else {
        LAB_1006945a4:
            pCVar8 = (ComponentContainer*)this_00->end();
        }
        pCVar9 = (ComponentContainer*)this_00->end();
        if (arg2) {
            if (pCVar8 == pCVar9) {
            LAB_100694781:
                if (cVar1) {
                    pLVar6 = logger::default_logger();
                    iVar4 = local_34;
                    GetChildren();
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    str2 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                           "already exists elsewhere within the dynamic component hierarchy";
                    arg4 = 117;
                    goto LAB_1006947c9;
                }
                goto LAB_1006947d5;
            }
            pCVar5 = (Component*)pCVar8->data();
            iVar4 = pCVar5->GetDynamicID();
            component_00 = component;
            if (iVar4 != local_34)
                goto LAB_100694781;
            pCVar5 = (Component*)component.operator->();
            bVar3 = (bool)pCVar5->IsInitiallyHidden();
            local_50 = ComponentContainer(*component_00, bVar3);
            *pCVar8 = local_50;
            pCVar8 = (ComponentContainer*)&field_536;
            cVar1 = pCVar8->empty();
            if (!cVar1) {
                pCVar9 = (ComponentContainer*)pCVar8->HeapBeginPtr();
                componentContainer2 = (ComponentContainer*)pCVar8->end();
                pCVar9 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer const&, int)>(
                    pCVar9, componentContainer2, local_34, PTR_ContainerDynamicIdEquals_100ee6428);
                pCVar8 = (ComponentContainer*)pCVar8->end();
                if (pCVar9 == pCVar8) {
                    LogAssert("renderOrderIt != m_dynamicChildrenRenderOrder.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentCollection.cpp",
                              105, nullptr);
                }
                pCVar5 = (Component*)pCVar9->data();
                iVar4 = pCVar5->GetDynamicID();
                if (iVar4 != local_34) {
                    LogAssert("(*renderOrderIt)->GetDynamicID() == encodedDynamicID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentCollection.cpp",
                              106, nullptr);
                }
                pCVar5 = (Component*)(*component_00).operator->();
                bVar3 = (bool)pCVar5->IsInitiallyHidden();
                pCVar8 = &local_50;
                new (pCVar8) ComponentContainer(*component_00, bVar3);
                *pCVar9 = *pCVar8;
            }
        } else {
            if (pCVar8 != pCVar9) {
                pLVar6 = logger::default_logger();
                iVar4 = local_34;
                GetChildren();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                str2 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID already "
                       "exists";
                arg4 = 123;
            LAB_1006947c9:
                uVar10 = 0;
                pLVar6->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "ComponentCollection.cpp",
                            arg4, str2, iVar4, uVar7);
                goto LAB_100694875;
            }
        LAB_1006947d5:
            component_00 = component;
            pCVar5 = (Component*)component.operator->();
            bVar3 = (bool)pCVar5->IsInitiallyHidden();
            local_50 = ComponentContainer(*component_00, bVar3);
            this_00->insert(pCVar8, local_50);
            pCVar8 = (ComponentContainer*)&field_536;
            cVar1 = pCVar8->empty();
            if (!cVar1) {
                pCVar5 = (Component*)(*component_00).operator->();
                bVar3 = (bool)pCVar5->IsInitiallyHidden();
                local_50 = ComponentContainer(*component_00, bVar3);
                pCVar8->push_back(local_50);
            }
        }
        RootSetUnownedDynamicChild(local_34, *component_00);
        ~();
        uVar10 = (((uint64_t)((int64_t)((unsigned long)pCVar8 >> 8)) << 8) | (uint8_t)1);
    LAB_100694875:
        return uVar10 & 4294967295;
    }

    // 0x100694c60
    uint64_t ComponentCollection::DelDynamicChild(int arg1) {
        int iVar3;
        SharedArray<unsigned int>* this_00;
        Component* pCVar5;
        ComponentContainer* pCVar6;
        ComponentContainer* pCVar7;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        shared_ptr<oldscape::dash3d::Decor> local_38;

        uint8_t* puVar1 = &field_504;
        bool cVar2 = puVar1->empty();
        int iVar4 = arg1;
        if (!cVar2) {
            this_00 = (SharedArray<unsigned int>*)puVar1->back();
            pCVar5 = (Component*)this_00->data();
            iVar3 = pCVar5->GetDynamicID();
            if (iVar4 <= iVar3) {
                pCVar6 = (ComponentContainer*)puVar1->HeapBeginPtr();
                pCVar7 = (ComponentContainer*)puVar1->end();
                pCVar6 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
                    pCVar6, pCVar7, arg1, PTR_ContainerDynamicIdInOrder_100ee6438);
                pCVar7 = (ComponentContainer*)puVar1->end();
                if (pCVar6 != pCVar7) {
                    pCVar5 = (Component*)pCVar6->data();
                    iVar4 = pCVar5->GetDynamicID();
                    if (iVar4 == arg1) {
                        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar6->second();
                        local_38 = shared_ptr(groundDecor);
                        puVar1->erase(pCVar6);
                        puVar1 = &field_536;
                        cVar2 = puVar1->empty();
                        if (!cVar2) {
                            pCVar6 = (ComponentContainer*)puVar1->HeapBeginPtr();
                            pCVar7 = (ComponentContainer*)puVar1->end();
                            pCVar6 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer const&, int)>(
                                pCVar6, pCVar7, arg1, PTR_ContainerDynamicIdEquals_100ee6428);
                            pCVar7 = (ComponentContainer*)puVar1->end();
                            if (pCVar6 != pCVar7) {
                                pCVar5 = (Component*)pCVar6->data();
                                iVar4 = pCVar5->GetDynamicID();
                                if (iVar4 == arg1) {
                                    puVar1->erase(pCVar6);
                                }
                            }
                        }
                        RootRemoveUnownedDynamicChild(local_38);
                        ~();
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x100694ec0
    void ComponentCollection::SetChildHidden(const Component& component, bool arg2) {
        int iVar1 = component.GetDynamicID();
        if (iVar1 == -1) {
            iVar1 = component.GetStaticID();
            ComponentUtils::SetHiddenInStaticList(iVar1, field_440, arg2);
            iVar1 = component.GetStaticID();
            ComponentUtils::SetHiddenInStaticList(iVar1, field_472, arg2);
        } else {
            iVar1 = component.GetDynamicID();
            ComponentUtils::SetHiddenInDynamicList(iVar1, field_504, arg2);
            iVar1 = component.GetDynamicID();
            ComponentUtils::SetHiddenInDynamicList(iVar1, field_536, arg2);
        }
    }

    // 0x1006950c0
    void ComponentCollection::SendComponentToBack(const shared_ptr<Component>& component) {
        long lVar1;
        long lVar8;
        long lVar9;
        Layout* this_02;
        uint8_t* arg4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_03;
        bool bVar10;
        ReturnValue local_60;
        ComponentContainer local_50;
        int local_38;

        auto pCVar4 = component.operator->();
        int iVar3 = pCVar4->GetDynamicID();
        if (iVar3 == -1) {
            bVar10 = false;
        } else {
            local_60 = ((LookatEntity*)component.operator->())->GetLookatEntity();
            bVar10 = (ComponentCollection*)local_60.end() != this;
            if (iVar3 != -1) {
            }
        }
        if (bVar10) {
            LogAssert("(component.GetDynamicID() == -1) || (component.GetParent().get() == this)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollection.cpp",
                      202, nullptr);
        }
        pCVar4 = (Component*)component.operator->();
        iVar3 = pCVar4->GetDynamicID();
        if (iVar3 == -1) {
            this_02 = (Layout*)&field_440;
            this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_472;
            pCVar4 = (Component*)component.operator->();
            local_38 = pCVar4->GetStaticID();
            arg4 = PTR_ContainerStaticIdInOrder_100ee6430;
        } else {
            this_02 = (Layout*)&field_504;
            this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_536;
            pCVar4 = (Component*)component.operator->();
            local_38 = pCVar4->GetDynamicID();
            arg4 = PTR_ContainerDynamicIdInOrder_100ee6438;
        }
        auto pCVar6 = this_02->HeapBeginPtr();
        auto pCVar7 = this_02->end();
        pCVar6 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
            pCVar6, pCVar7, local_38, arg4);
        auto arg1 = this_02->HeapBeginPtr();
        unsigned long arg1_00 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(arg1, pCVar6);
        Skybox* this_01 = (Skybox*)(*this_02)[arg1_00];
        bool local_31 = (bool)this_01->ShowSkybox();
        if (this_03->empty() == '\0') {
            pCVar6 = (ComponentContainer*)this_03->HeapBeginPtr();
            pCVar7 = (ComponentContainer*)this_03->end();
            pCVar6 = eastl::find<ComponentContainer*, shared_ptr<Component>,
                                 bool (*)(ComponentContainer const&, shared_ptr<Component> const&)>(
                pCVar6, pCVar7, component, PTR_ContainerEquals_100ee6418);
            pCVar7 = (ComponentContainer*)this_03->end();
            if (pCVar6 == pCVar7) {
                LogAssert("existingRenderOrderIt != componentListRenderOrder->end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollection.cpp",
                          245, nullptr);
            }
            this_03->erase(pCVar6);
            pCVar6 = (ComponentContainer*)this_03->HeapBeginPtr();
            local_50 = ComponentContainer(component, local_31);
            this_03->insert(pCVar6, local_50);
        } else {
            this_03->reserve(this_02->size());
            this_03->emplace_back<shared_ptr<Component> const&, bool&>(component, local_31);
            lVar8 = this_03->HeapBeginPtr();
            pCVar6 = (ComponentContainer*)this_02->HeapBeginPtr();
            lVar9 = this_02->HeapBeginPtr();
            lVar1 = arg1_00 * 24;
            this_03->insert<ComponentContainer*>((lVar8 + 24), pCVar6, (lVar9 + lVar1));
            lVar8 = this_03->HeapBeginPtr();
            lVar9 = this_02->HeapBeginPtr();
            pCVar6 = (ComponentContainer*)this_02->end();
            this_03->insert<ComponentContainer*>((lVar8 + lVar1 + 24), (lVar1 + lVar9 + 24), pCVar6);
        }
    }

    // 0x100695500
    void ComponentCollection::SendComponentToFront(const shared_ptr<Component>& component) {
        long lVar1;
        long lVar8;
        long lVar9;
        shared_ptr<Component>* component_00;
        Layout* this_02;
        uint8_t* arg4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_03;
        bool bVar10;
        ReturnValue local_50;
        int local_38;

        auto pCVar4 = component.operator->();
        int iVar3 = pCVar4->GetDynamicID();
        if (iVar3 == -1) {
            bVar10 = false;
        } else {
            local_50 = ((LookatEntity*)component.operator->())->GetLookatEntity();
            bVar10 = (ComponentCollection*)local_50.end() != this;
            if (iVar3 != -1) {
            }
        }
        if (bVar10) {
            LogAssert("(component.GetDynamicID() == -1) || (component.GetParent().get() == this)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollection.cpp",
                      255, nullptr);
        }
        pCVar4 = (Component*)component.operator->();
        iVar3 = pCVar4->GetDynamicID();
        if (iVar3 == -1) {
            this_02 = (Layout*)&field_440;
            this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_472;
            pCVar4 = (Component*)component.operator->();
            local_38 = pCVar4->GetStaticID();
            arg4 = PTR_ContainerStaticIdInOrder_100ee6430;
        } else {
            this_02 = (Layout*)&field_504;
            this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_536;
            pCVar4 = (Component*)component.operator->();
            local_38 = pCVar4->GetDynamicID();
            arg4 = PTR_ContainerDynamicIdInOrder_100ee6438;
        }
        auto pCVar6 = this_02->HeapBeginPtr();
        auto pCVar7 = this_02->end();
        pCVar6 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
            pCVar6, pCVar7, local_38, arg4);
        pCVar7 = (ComponentContainer*)this_02->end();
        if (pCVar6 == pCVar7) {
            LogAssert("existingIt != componentList->end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComponentCollection.cpp",
                      281, nullptr);
        }
        auto arg1 = this_02->HeapBeginPtr();
        unsigned long arg1_00 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(arg1, pCVar6);
        Skybox* this_01 = (Skybox*)(*this_02)[arg1_00];
        bool local_31 = (bool)this_01->ShowSkybox();
        if (this_03->empty() == '\0') {
            pCVar6 = (ComponentContainer*)this_03->HeapBeginPtr();
            pCVar7 = (ComponentContainer*)this_03->end();
            component_00 = component;
            pCVar6 = eastl::find<ComponentContainer*, shared_ptr<Component>,
                                 bool (*)(ComponentContainer const&, shared_ptr<Component> const&)>(
                pCVar6, pCVar7, component, PTR_ContainerEquals_100ee6418);
            pCVar7 = (ComponentContainer*)this_03->end();
            if (pCVar6 == pCVar7) {
                LogAssert("existingRenderOrderIt != componentListRenderOrder->end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollection.cpp",
                          300, nullptr);
            }
            this_03->erase(pCVar6);
        } else {
            this_03->reserve(this_02->size());
            pCVar6 = (ComponentContainer*)this_03->HeapBeginPtr();
            pCVar7 = (ComponentContainer*)this_02->HeapBeginPtr();
            lVar8 = this_02->HeapBeginPtr();
            lVar1 = arg1_00 * 24;
            this_03->insert<ComponentContainer*>(pCVar6, pCVar7, (lVar8 + lVar1));
            lVar8 = this_03->HeapBeginPtr();
            lVar9 = this_02->HeapBeginPtr();
            pCVar6 = (ComponentContainer*)this_02->end();
            this_03->insert<ComponentContainer*>((lVar8 + lVar1), (lVar1 + lVar9 + 24), pCVar6);
            component_00 = component;
        }
        this_03->emplace_back<shared_ptr<Component> const&, bool&>(*component_00, local_31);
    }

    // 0x1006ad5b0: ComponentCollection::GetDynamicChildren() const has the same machine code as ComponentCollection::GetDynamicChildren()

} // namespace jag::ui
