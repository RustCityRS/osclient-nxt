// libs/ui/components/PagedLayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "PagedLayer.h"

namespace jag::ui {
    // 0x100f3e9d0
    bool PagedLayer::m_showNoClickThroughPagedLayers = 0;

    // 0x100009e70: PagedLayer::OnPageCountChanged() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PagedLayer::OnActivePageChanging(unsigned char) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10002d860: PagedLayer::RequiresSeparatePreviousValueTrigger() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1000fa850: PagedLayer::GetValueRepresentation() has the same machine code as oldscape::graphics::NXTPixToolkit::getWorldRenderer()

    // 0x100441a50: PagedLayer::GetDynamicChildren() has the same machine code as game::MapEnvironmentSettings::GetSkySettings() const

    // 0x100441a50: PagedLayer::GetDynamicChildren() const has the same machine code as game::MapEnvironmentSettings::GetSkySettings() const

    // 0x1005fa390: PagedLayer::SupportsMargin(Component::MarginType) const has the same machine code as game::option::WindowMode::IsAvailable(game::option::OptionClient) const

    // 0x1006a0080
    PagedLayer::PagedLayer(InterfaceManager* interfaceManager) : ComponentCollectionBase() {
        m_pValueRepresentation = &PTR__PagedLayer_100f0f778;
        new (&field_432) eastl::vector<ComponentContainer>();
        new (&field_464) eastl::vector<ComponentContainer>();
        new (&field_496) eastl::fixed_vector<PagedLayer::PageData, 4ul>();
        m_staticPageCount = 0;
        m_currentValue = '\0';
        m_previousValue = 255;
        new (&field_1024) SpriteData();
        new (field_1072) Margin(255);
        field_1080 = interfaceManager;
        field_496.emplace_back<>();
    }

    // 0x1006a01d0
    PagedLayer::~PagedLayer() {
        m_pValueRepresentation = &PTR__PagedLayer_100f0f778;
        if (GetDynamicID() != -1) {
            DelAll();
        }
        field_1024.~Sprite();
        field_496.~fixed_vector();
        field_464.~vector();
        field_432.~vector();
        (&m_pValueRepresentation)->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006a04c0
    bool PagedLayer::SetActivePage(unsigned char arg1) {
        uint8_t bVar1;
        Logger* this_00;
        uint64_t in_register_00000031;

        unsigned long uVar3 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        unsigned long uVar2 = field_496.size();
        if (uVar3 < uVar2) {
            if (m_currentValue != arg1) {
                OnActivePageChanging(arg1);
                m_previousValue = m_currentValue;
                m_currentValue = arg1;
                OnActivePageChanging();
                OnActivePageChanged();
            }
        } else {
            this_00 = logger::default_logger();
            bVar1 = GetPageCount();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                74, "Attempted to set an invalid page as active - received %u, expected [0;%u[", arg1,
                (unsigned long)bVar1);
        }
        return uVar3 < uVar2;
    }

    // 0x1006a2500, the same machine code as PagedLayer::GetActivePage() const
    unsigned char PagedLayer::GetCurrentValue() const {
        return m_currentValue;
    }

    // 0x1006a28a0
    void PagedLayer::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        DrawBackground(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        DrawActivePage(*(RT7Core**)(componentDependencies + 16), arg2, arg3, arg4);
    }

    // 0x1006a28f0
    void PagedLayer::DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        uint8_t* this_00;
        int iVar2;
        int arg5;
        unsigned int arg6;
        SpriteAtlasManager* spriteAtlasManager;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        SpriteAtlas* this_07;
        long lVar4;
        Logger* this_09;

        if (GetAlpha()) {
            this_00 = &field_1024;
            spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
            if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
                this_02 = (shared_ptr*)this_00->GetDefaultValue();
                if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                    this_09 = logger::default_logger();
                    iVar2 = 193;
                } else {
                    this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                                  .operator->();
                    this_04 = (shared_ptr*)this_03->second();
                    if (shared_ptr::operator_cast_to_bool(this_04)) {
                        this_05 = (MapArea*)(*this_04).operator->();
                        this_06 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                        texture = (Texture*)this_06->end();
                        if (texture == nullptr) {
                            return;
                        }
                        this_07 = (SpriteAtlas*)(*this_04).operator->();
                        iVar2 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                        lVar4 = this_07->GetSpriteRenderMapping(iVar2);
                        iVar2 = GetStreamCountLastMix();
                        arg5 = GetMinMapX();
                        arg6 = GetRGBA();
                        this_00->DrawSpriteSlice(*rt7Core, arg2, arg3, iVar2, arg5, arg6, *((lVar4 + 88)), texture,
                                                 0.0);
                        return;
                    }
                    this_09 = logger::default_logger();
                    iVar2 = 201;
                }
                this_09->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "PagedLayer.cpp",
                             iVar2, "Invalid sprite atlas reference!");
            }
        }
    }

    // 0x1006a2a90
    void PagedLayer::DrawActivePage(graphics::RT7Core* rt7Core, int arg2, int arg3, float arg4) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;

        int local_40 = GetStreamCountLastMix();
        int local_3c = GetMinMapX();
        Margin local_48 = (Margin)field_1024.GetVisualMargin();
        ((Margin)field_1072->GetValidOr(&local_48)).ApplyTo(arg2, arg3, local_40, local_3c);
        int iVar4 = arg2;
        uint8_t uVar1 = GetScrollXPos();
        int iVar5 = arg3;
        uint8_t uVar2 = GetScrollYPos();
        if (*PTR_m_showNoClickThroughPagedLayers_100ee63f8 != '\0') {
            if (!(IsClickthrough())) {
                rt7Core->GetGUIManager()->AddColouredRectangle(arg2, arg3, local_40, local_3c, 4278190250, 1);
            }
        }
        iVar4 = iVar4 - (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        iVar5 = iVar5 - (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
        uVar1 = GetStaticChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                        << 8) |
                                                                                       (uint8_t)uVar1))
                  ->empty())) {
            (**(void (**)(...))(*(long*)field_1080 + 8))(
                arg4, field_1080,
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                         << 8) |
                                                                                        (uint8_t)uVar1),
                iVar4, iVar5, arg2, arg3, local_40, local_3c);
        }
        uVar1 = GetDynamicChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                        << 8) |
                                                                                       (uint8_t)uVar1))
                  ->empty())) {
            (**(void (**)(...))(*(long*)field_1080 + 8))(
                arg4, field_1080,
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                         << 8) |
                                                                                        (uint8_t)uVar1),
                iVar4, iVar5, arg2, arg3, local_40, local_3c);
        }
    }

    // 0x1006a2c20
    bool PagedLayer::SetDynamicPageCount(unsigned char arg1) {
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned int uVar3;
        Logger* this_00;
        uint64_t in_register_00000031;

        unsigned long arg1_00 =
            ((((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295) + (unsigned long)m_staticPageCount;
        unsigned int uVar4 = (unsigned int)arg1_00;
        if (uVar4 < 256) {
            uVar3 = field_496.size();
            if (uVar4 != uVar3) {
                field_496.resize(arg1_00);
                OnActivePageChanging();
                bVar2 = m_currentValue;
                bVar1 = GetPageCount();
                if (bVar1 <= bVar2) {
                    OnActivePageChanging();
                    SetActivePage('\0');
                }
            }
        } else {
            this_00 = logger::default_logger();
            bVar2 = GetStaticPageCount();
            bVar1 = GetPageCount();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                52,
                "Attempted to set an invalid number of dynamic pages (with %u static pages) - received %u, expected "
                "[0;%u[",
                (unsigned long)bVar2, (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295,
                (unsigned long)(uint8_t)~bVar1);
        }
        return uVar4 < 256;
    }

    // 0x1006a2d20
    void PagedLayer::SetScrollPos(int arg1, int arg2) {
        auto this_00 = GetCurrentPage();
        this_00->ValidateScrollPos(arg1, arg2, field_88, field_92);
        if ((*(int*)&this_00->field_64 != arg1) || (*(int*)((long)&this_00->field_64 + 4) != arg2)) {
            *(int*)&this_00->field_64 = arg1;
            *(int*)((long)&this_00->field_64 + 4) = arg2;
            OnActivePageChanging();
        }
    }

    // 0x1006a2da0
    void PagedLayer::PageData::ValidateScrollPos(int& arg1, int& arg2, int arg3, int arg4) const {
        EnumOptionToggle EVar1 = arg1;
        int iVar2 = eastl::max<int>(arg3, field_72);
        auto SVar3 = eastl::min<graphics::GraphicsQuality>(EVar1, iVar2 - arg3);
        iVar2 = eastl::max<int>(0, SVar3);
        arg1 = iVar2;
        EVar1 = arg2;
        iVar2 = eastl::max<int>(arg4, field_76);
        SVar3 = eastl::min<graphics::GraphicsQuality>(EVar1, iVar2 - arg4);
        iVar2 = eastl::max<int>(0, SVar3);
        arg2 = iVar2;
    }

    // 0x1006a2e20
    void PagedLayer::SetScrollSize(int arg1, int arg2) {
        auto this_00 = GetCurrentPage();
        if ((this_00->field_72 != arg1) || (this_00->field_76 != arg2)) {
            this_00->field_72 = arg1;
            this_00->field_76 = arg2;
            this_00->ValidateScrollPos(this_00->field_64, *((int*)((long)&this_00->field_64 + 4)), field_88, field_92);
            OnActivePageChanging();
        }
    }

    // 0x1006a2e80
    void PagedLayer::AddStaticChild(const ComponentContainer& componentContainer) {
        uint8_t* this_00 = &field_496;
        bool cVar1 = this_00->empty();
        if (cVar1) {
            LogAssert(
                "!m_pages.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                107, nullptr);
        }
        auto psVar3 = componentContainer.second();
        Component* pCVar4 = (Component*)(*psVar3).operator->();
        uint8_t bVar2 = pCVar4->GetParentPageIndex();
        cVar1 = this_00->size();
        if ((int)cVar1 < (int)(unsigned int)bVar2) {
            LogAssert(
                "child.GetComponent()->GetParentPageIndex() <= (int8)m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                108, nullptr);
        }
        field_432.push_back(componentContainer);
        psVar3 = (shared_ptr<Component>*)componentContainer.second();
        pCVar4 = (Component*)(*psVar3).operator->();
        bVar2 = pCVar4->GetParentPageIndex();
        ((vector<ComponentContainer>*)(*this_00)[(unsigned long)bVar2])->push_back(componentContainer);
        OnActivePageChanging();
    }

    // 0x1006a2f70
    void PagedLayer::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        bool cVar4;
        uint32_t uVar7;
        long lVar8;
        long lVar9;

        uint8_t bVar2 = arg1.g1();
        m_staticPageCount = bVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_38 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_496;
        local_38->resize((unsigned long)bVar2);
        bVar2 = arg1.g1();
        m_currentValue = bVar2;
        m_previousValue = bVar2;
        if ((GetPageCount() <= bVar2) && (cVar4 = local_38->empty(), !cVar4)) {
            LogAssert(
                "(m_currentPage < GetPageCount()) || m_pages.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                124, nullptr);
        }
        unsigned short uVar5 = arg1.g2();
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar1 = local_38;
        if (uVar5 != 0) {
            if (uVar5 != m_staticPageCount) {
                LogAssert("numLabels == m_numStaticPages",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedLayer.cpp",
                          132, nullptr);
            }
            lVar8 = local_38->HeapBeginPtr();
            lVar9 = pvVar1->end();
            for (; lVar8 != lVar9; lVar8 = lVar8 + 120) {
                arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>((lVar8 + 88), false);
            }
        }
        unsigned short uVar6 = arg1.g2();
        pvVar1 = local_38;
        if (uVar6 != 0) {
            if (uVar5 != 0) {
                LogAssert("numLabels == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedLayer.cpp",
                          146, nullptr);
            }
            if (uVar6 != m_staticPageCount) {
                LogAssert("numIcons == m_numStaticPages",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedLayer.cpp",
                          147, nullptr);
            }
            lVar8 = local_38->HeapBeginPtr();
            lVar9 = pvVar1->end();
            for (; lVar8 != lVar9; lVar8 = lVar8 + 120) {
                uVar7 = arg1.g4s();
                *(uint32_t*)(lVar8 + 112) = uVar7;
            }
        }
        Margin local_40(arg1);
        field_1072[0] = local_40.field_0;
        field_1072[1] = local_40.field_1;
        field_1072[2] = local_40.field_2;
        field_1072[3] = local_40.field_3;
        bVar2 = arg1.g1();
        field_100 = ~bVar2;
        uVar7 = arg1.g4();
        field_96 = uVar7;
        field_1024.DecodeSpriteData(arg1, arg2);
        lVar8 = local_38->size();
        field_432.reserve(lVar8 * 10);
        OnActivePageChanging();
    }

    // 0x1006a3190
    void PagedLayer::OnActivePageChanged() {
        (**(void (**)(...))(*(long*)field_1080 + 16))(field_1080, this, 1);
    }

    // 0x1006a31b0
    void PagedLayer::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 590, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 589, true);
        field_1072->LoadFromStylesheet(591, styleSheet);
        field_1024.LoadStyleSheetSpriteData(597, styleSheet);
    }

    // 0x1006a3220
    unsigned long PagedLayer::AddDynamicChild(const shared_ptr<Component>& component, bool arg2) {
        bool bVar1;
        char cVar2;
        uint8_t bVar4;
        Logger* pLVar7;
        uint64_t uVar8;
        SharedArray<unsigned int>* this_02;
        ComponentContainer* pCVar9;
        ComponentContainer* pCVar11;
        shared_ptr<Component>* psVar12;
        long lVar13;
        PagedLayer_vtbl* pPVar14;
        uint64_t in_register_00000011;
        PagedLayer* pPVar15;
        unsigned long uVar16;
        int arg4;
        char* str2;
        Layout* pLVar17;
        ReturnValue local_70;
        PagedLayer* local_60;
        ComponentContainer local_50;

        local_60 = (PagedLayer*)(((uint64_t)local_60._4_4_ << 32) |
                                 (uint32_t)((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2)));
        auto pCVar6 = component.operator->();
        int local_34 = pCVar6->GetDynamicID();
        int iVar5 = GetDynamicID();
        if (iVar5 == -1) {
            cVar2 = '\0';
        } else {
            local_70 = GetFocus();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)&local_50);
            cVar2 = local_50.operator_cast_to_bool();
            if (!cVar2) {
                pLVar7 = logger::default_logger();
                iVar5 = local_34;
                GetChildren();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar1 = false;
                pLVar7->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                    "PagedLayer.cpp",
                    272,
                    "Could not add dynamic child with ID %i to component \'%s\' - dynamic layer has no static parent",
                    iVar5, uVar8);
                cVar2 = '\0';
            } else {
                cVar2 = ((ComponentCollectionBase*)local_50.operator->())->ChildDynamicIDExists(local_34);
                bVar1 = true;
                if ((cVar2) && ((char)local_60 == '\0')) {
                    pLVar7 = logger::default_logger();
                    iVar5 = local_34;
                    GetChildren();
                    uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    bVar1 = false;
                    pLVar7->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "PagedLayer.cpp",
                                279,
                                "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                                "already exists",
                                iVar5, uVar8);
                    cVar2 = '\0';
                }
            }
            if (!bVar1) {
                uVar16 = 0;
                goto LAB_1006a3718;
            }
        }
        uint8_t* this_00 = &field_464;
        if (this_00->empty()) {
            this_00->reserve(50);
        }
        if (!(this_00->empty())) {
            this_02 = (SharedArray<unsigned int>*)this_00->back();
            pCVar6 = (Component*)this_02->data();
            iVar5 = pCVar6->GetDynamicID();
            if (iVar5 < local_34)
                goto LAB_1006a33bd;
            pCVar9 = (ComponentContainer*)this_00->HeapBeginPtr();
            pCVar11 = (ComponentContainer*)this_00->end();
            pCVar9 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
                pCVar9, pCVar11, local_34, PTR_ContainerDynamicIdInOrder_100ee6438);
        } else {
        LAB_1006a33bd:
            pCVar9 = (ComponentContainer*)this_00->end();
        }
        long lVar10 = GetCurrentPage();
        pCVar11 = (ComponentContainer*)this_00->end();
        if ((char)local_60 == '\0') {
            if (pCVar9 != pCVar11) {
                pLVar7 = logger::default_logger();
                iVar5 = local_34;
                GetChildren();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                str2 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID already "
                       "exists";
                arg4 = 354;
                goto LAB_1006a35b3;
            }
        LAB_1006a35bf:
            psVar12 = component;
            local_60 = this;
            local_50 = ComponentContainer(component);
            this_00->insert(pCVar9, local_50);
            local_50 = ComponentContainer(*psVar12);
            ((lVar10 + 32))->push_back(local_50);
            pPVar15 = local_60;
            local_60->RootSetUnownedDynamicChild(local_34, *psVar12);
            pPVar14 = pPVar15->_vptr;
            this = pPVar15;
        } else {
            if (pCVar9 == pCVar11) {
            LAB_1006a356b:
                if (!cVar2)
                    goto LAB_1006a35bf;
                pLVar7 = logger::default_logger();
                iVar5 = local_34;
                GetChildren();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                str2 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID already "
                       "exists within another layer";
                arg4 = 348;
            LAB_1006a35b3:
                uVar16 = 0;
                pLVar7->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "PagedLayer.cpp",
                            arg4, str2, iVar5, uVar8);
                goto LAB_1006a3718;
            }
            pCVar6 = (Component*)pCVar9->data();
            iVar5 = pCVar6->GetDynamicID();
            if (iVar5 != local_34)
                goto LAB_1006a356b;
            psVar12 = (shared_ptr<Component>*)pCVar9->second();
            pCVar6 = (Component*)(*psVar12).operator->();
            bVar4 = pCVar6->GetParentPageIndex();
            lVar13 = field_496[(unsigned long)bVar4];
            local_50 = ComponentContainer(component);
            *pCVar9 = local_50;
            if (lVar13 == lVar10) {
                pLVar17 = (Layout*)(lVar10 + 32);
                pCVar9 = (ComponentContainer*)pLVar17->HeapBeginPtr();
                pCVar11 = (ComponentContainer*)pLVar17->end();
                pCVar9 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer const&, int)>(
                    pCVar9, pCVar11, local_34, PTR_ContainerDynamicIdEquals_100ee6428);
                pCVar11 = (ComponentContainer*)pLVar17->end();
                if (pCVar9 == pCVar11) {
                    LogAssert("renderOrderIt != newPage.m_dynamicComponents.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "PagedLayer.cpp",
                              334, nullptr);
                }
                pCVar6 = (Component*)pCVar9->data();
                iVar5 = pCVar6->GetDynamicID();
                psVar12 = component;
                if (iVar5 != local_34) {
                    LogAssert("(*renderOrderIt)->GetDynamicID() == encodedDynamicID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "PagedLayer.cpp",
                              335, nullptr);
                }
                local_50 = ComponentContainer(component);
                *pCVar9 = local_50;
            } else {
                pLVar17 = (Layout*)(lVar13 + 32);
                pCVar9 = (ComponentContainer*)pLVar17->HeapBeginPtr();
                pCVar11 = (ComponentContainer*)pLVar17->end();
                pCVar9 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer const&, int)>(
                    pCVar9, pCVar11, local_34, PTR_ContainerDynamicIdEquals_100ee6428);
                pCVar11 = (ComponentContainer*)pLVar17->end();
                if (pCVar9 == pCVar11) {
                    LogAssert("oldContainerIt != oldPage.m_dynamicComponents.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "PagedLayer.cpp",
                              324, nullptr);
                }
                pLVar17->erase(pCVar9);
                psVar12 = component;
                local_50 = ComponentContainer(component);
                ((lVar10 + 32))->push_back(local_50);
            }
            pPVar15 = (PagedLayer*)(lVar10 + 32);
            pCVar6 = (Component*)(*psVar12).operator->();
            pCVar6->SetParentPageIndex(m_currentValue);
            RootSetUnownedDynamicChild(local_34, *psVar12);
            pPVar14 = this->_vptr;
        }
        (*pPVar14->OnActivePageChanging__3)(this);
        uVar16 = (((uint64_t)((int64_t)((unsigned long)pPVar15 >> 8)) << 8) | (uint8_t)1);
    LAB_1006a3718:
        return uVar16 & 4294967295;
    }

    // 0x1006a3780
    uint64_t PagedLayer::DelDynamicChild(int arg1) {
        uint8_t bVar2;
        int iVar3;
        SharedArray<unsigned int>* this_01;
        Component* pCVar5;
        ComponentContainer* pCVar6;
        ComponentContainer* pCVar7;
        shared_ptr<Component>* this_02;
        long lVar8;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        Layout* this_03;
        shared_ptr<oldscape::dash3d::Decor> local_40;

        uint8_t* this_00 = &field_464;
        bool cVar1 = this_00->empty();
        int iVar4 = arg1;
        if (!cVar1) {
            this_01 = (SharedArray<unsigned int>*)this_00->back();
            pCVar5 = (Component*)this_01->data();
            iVar3 = pCVar5->GetDynamicID();
            if (iVar4 <= iVar3) {
                pCVar6 = (ComponentContainer*)this_00->HeapBeginPtr();
                pCVar7 = (ComponentContainer*)this_00->end();
                pCVar6 = eastl::lower_bound<ComponentContainer const*, int, bool (*)(ComponentContainer const&, int)>(
                    pCVar6, pCVar7, arg1, PTR_ContainerDynamicIdInOrder_100ee6438);
                pCVar7 = (ComponentContainer*)this_00->end();
                if (pCVar6 != pCVar7) {
                    pCVar5 = (Component*)pCVar6->data();
                    iVar4 = pCVar5->GetDynamicID();
                    if (iVar4 == arg1) {
                        this_02 = (shared_ptr<Component>*)pCVar6->second();
                        pCVar5 = (Component*)(*this_02).operator->();
                        bVar2 = pCVar5->GetParentPageIndex();
                        lVar8 = field_496[(unsigned long)bVar2];
                        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar6->second();
                        local_40 = shared_ptr(groundDecor);
                        this_00->erase(pCVar6);
                        this_03 = (Layout*)(lVar8 + 32);
                        pCVar6 = (ComponentContainer*)this_03->HeapBeginPtr();
                        pCVar7 = (ComponentContainer*)this_03->end();
                        pCVar6 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer const&, int)>(
                            pCVar6, pCVar7, arg1, PTR_ContainerDynamicIdEquals_100ee6428);
                        pCVar7 = (ComponentContainer*)this_03->end();
                        if (pCVar6 != pCVar7) {
                            pCVar5 = (Component*)pCVar6->data();
                            iVar4 = pCVar5->GetDynamicID();
                            if (iVar4 == arg1) {
                                this_03->erase(pCVar6);
                                RootRemoveUnownedDynamicChild(local_40);
                                OnActivePageChanging();
                                return 1;
                            }
                        }
                        LogAssert("(renderOrderIt != page.m_dynamicComponents.end()) && "
                                  "((*renderOrderIt)->GetDynamicID() == encodedDynamicID)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "PagedLayer.cpp",
                                  391, nullptr);
                    }
                }
            }
        }
        return 0;
    }

    // 0x1006a3940
    void PagedLayer::SetChildHidden(const Component& component, bool arg2) {
        int iVar2 = component.GetDynamicID();
        if (iVar2 == -1) {
            iVar2 = component.GetStaticID();
            ComponentUtils::SetHiddenInStaticList(iVar2, field_432, arg2);
        } else {
            iVar2 = component.GetDynamicID();
            ComponentUtils::SetHiddenInDynamicList(iVar2, field_464, arg2);
        }
        uint8_t bVar1 = component.GetParentPageIndex();
        Layout* pLVar3 = &field_496[(unsigned long)bVar1];
        iVar2 = component.GetDynamicID();
        Layout* this_00 = pLVar3 + 32;
        if (iVar2 == -1) {
            this_00 = pLVar3;
        }
        auto pCVar4 = this_00->HeapBeginPtr();
        auto pCVar5 = this_00->end();
        pCVar4 =
            eastl::find<ComponentContainer*, Component const*, bool (*)(ComponentContainer const&, Component const*)>(
                pCVar4, pCVar5, component, PTR_ContainerPtrEquals_100ee6420);
        pCVar5 = (ComponentContainer*)this_00->end();
        if (pCVar4 == pCVar5) {
            LogAssert(
                "existingRenderOrderIt != pageComponentList.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                420, nullptr);
        }
        new (pCVar4) std::__cxx_atomic_base_impl(arg2);
    }

    // 0x1006a3ac0
    void PagedLayer::SendComponentToBack(const shared_ptr<Component>& component) {
        ComponentContainer* componentContainer1;
        ComponentContainer* componentContainer2;
        __56* in_RCX;

        auto local_38 = ((LookatEntity*)component.operator->())->GetLookatEntity();
        auto pPVar3 = local_38.end();
        if (pPVar3 != this) {
            LogAssert(
                "component.GetParent().get() == this",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                433, nullptr);
        }
        auto pCVar4 = component.operator->();
        uint8_t bVar1 = pCVar4->GetParentPageIndex();
        Layout* pLVar5 = &field_496[(unsigned long)bVar1];
        pCVar4 = (Component*)component.operator->();
        int iVar2 = pCVar4->GetDynamicID();
        Layout* this_02 = pLVar5 + 32;
        if (iVar2 == -1) {
            this_02 = pLVar5;
        }
        componentContainer1 = (ComponentContainer*)this_02->HeapBeginPtr();
        componentContainer2 = (ComponentContainer*)this_02->end();
        Skybox* this_01 = (Skybox*)eastl::find<ComponentContainer*, shared_ptr<Component>,
                                               (shared_ptr<Component> const&)->SendComponentToBack()::__56>(
            componentContainer1, componentContainer2, component, in_RCX);
        auto pSVar6 = this_02->end();
        if (this_01 == pSVar6) {
            LogAssert(
                "existingRenderOrderIt != pageComponentList.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                439, nullptr);
        }
        local_38[0]._0_1_ = this_01->ShowSkybox();
        this_02->erase(this_01);
        this_02->emplace_back<shared_ptr<Component> const&, bool&>(component, local_38);
    }

    // 0x1006a3c40
    void PagedLayer::SendComponentToFront(const shared_ptr<Component>& component) {
        ComponentContainer* componentContainer2;

        ComponentContainer local_40 = ((LookatEntity*)component.operator->())->GetLookatEntity();
        auto pPVar3 = local_40.end();
        if (pPVar3 != this) {
            LogAssert(
                "component.GetParent().get() == this",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                450, nullptr);
        }
        auto pCVar4 = component.operator->();
        uint8_t bVar1 = pCVar4->GetParentPageIndex();
        Layout* pLVar5 = &field_496[(unsigned long)bVar1];
        pCVar4 = (Component*)component.operator->();
        int iVar2 = pCVar4->GetDynamicID();
        Layout* this_02 = pLVar5 + 32;
        if (iVar2 == -1) {
            this_02 = pLVar5;
        }
        auto pCVar6 = this_02->HeapBeginPtr();
        componentContainer2 = (ComponentContainer*)this_02->end();
        Skybox* this_01 = (Skybox*)eastl::find<ComponentContainer*, shared_ptr<Component>,
                                               bool (*)(ComponentContainer const&, shared_ptr<Component> const&)>(
            pCVar6, componentContainer2, component, PTR_ContainerEquals_100ee6418);
        auto pSVar7 = this_02->end();
        if (this_01 == pSVar7) {
            LogAssert(
                "existingRenderOrderIt != pageComponentList.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                456, nullptr);
        }
        bool arg2 = (bool)this_01->ShowSkybox();
        this_02->erase(this_01);
        pCVar6 = (ComponentContainer*)this_02->HeapBeginPtr();
        local_40 = ComponentContainer(component, arg2);
        this_02->insert(pCVar6, local_40);
    }

    // 0x1006a3db0
    void PagedLayer::ConvertToInteractableArea(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6) const {
        Margin local_38 = (Margin)field_1024.GetVisualMargin();
        Margin local_34 = (Margin)field_1072->GetValidOr(&local_38);
        arg1 = arg1 + (unsigned int)local_34.field_0;
        unsigned int uVar2 = (unsigned int)local_34 >> 8 & 255;
        arg2 = arg2 + uVar2;
        arg3 = arg3 + (unsigned int)local_34.field_0;
        arg4 = arg4 + uVar2;
        uint8_t bVar1 = local_34.GetWidth();
        arg5 = arg5 - (unsigned int)bVar1;
        bVar1 = local_34.GetHeight();
        arg6 = arg6 - (unsigned int)bVar1;
    }

    // 0x1006adc50: PagedLayer::GetStaticChildren() const has the same machine code as PagedLayer::GetStaticChildren()

} // namespace jag::ui
