// libs/ui/components/PagedLayerHeader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "PagedLayerHeader.h"

namespace jag::ui {
    // 0x100269b20: PagedLayerHeader::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted::GetID() const

    // 0x1006a3e40
    PagedLayerHeader::PagedLayerHeader() : Component() {
        new ((field_392 + 48)) SpriteData();
        new ((field_392 + 96)) SpriteData();
        uint8_t* this_00 = field_536;
        new (this_00) TextData();
        field_600 = 50;
        field_602 = 10;
        field_604 = 20;
        field_606 = 10;
        field_608 = 2;
        field_610 = false;
        field_612 = 65535;
        new (&field_616) shared_ptr();
        new (&field_632) eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>();
        new (field_656) Margin(255);
        new (field_660) Margin(255);
        SetEnabled((uint8_t)this);
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x1006a3ff0
    void PagedLayerHeader::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                                     bool arg5, bool arg6, bool arg7) {
        uint8_t* this_00;
        int iVar1;
        uint8_t bVar3;
        unsigned char uVar4;
        int iVar5;
        unsigned long uVar7;
        char* pcVar8;
        PagedLayer* pPVar9;
        Logger* this_01;
        unsigned long arg1;
        unsigned int uVar10;
        bool bVar11;
        PagedLayerHeader* this_02;
        int local_74;
        int local_70;
        float local_6c;
        uint32_t local_68[2];
        unsigned long local_60;
        unsigned long local_58;
        shared_ptr local_50;
        Margin local_38;
        float local_34;

        bool cVar2 = IsEnabled();
        if (cVar2) {
            local_74 = GetStreamCountLastMix();
            local_70 = GetMinMapX();
            local_50._0_4_ = field_392->GetVisualMargin();
            local_38 = (Margin)field_656->GetValidOr(&local_50);
            local_38.ApplyTo(arg2, arg3, local_74, local_70);
            local_6c = (float)arg2;
            local_34 = (float)arg3;
            cVar2 = IsHorizontal();
            if (!cVar2) {
                iVar5 = GetStreamCountLastMix();
                bVar3 = local_38.GetWidth();
                local_60 = (unsigned long)(iVar5 - (unsigned int)bVar3);
                local_58 = (unsigned long)field_600;
            } else {
                local_60 = (unsigned long)field_600;
                iVar5 = GetMinMapX();
                bVar3 = local_38.GetHeight();
                local_58 = (unsigned long)(iVar5 - (unsigned int)bVar3);
            }
            local_50 = field_616.lock();
            this_00 = &field_632;
            if (this_00->size() != 0) {
                local_34 = (float)(unsigned int)arg4;
                arg1 = 0;
                iVar5 = 0;
                uVar10 = 0;
                do {
                    pcVar8 = (char*)(*this_00)[arg1];
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_50);
                    bVar11 = false;
                    this_02 = this;
                    if ((cVar2) && (*pcVar8 != '\0')) {
                        pPVar9 = (PagedLayer*)local_50.operator->();
                        uVar4 = pPVar9->GetCurrentValue();
                        bVar11 = (unsigned char)arg1 != uVar4;
                        this_02 = this;
                    }
                    local_68[0] = ((pcVar8 + 56))
                                      ->UpdateLogic((Vector2T<float>*)(unsigned long)uVar10, iVar5, (int)local_60,
                                                    (int)local_58, (unsigned int)(uint8_t)(bVar11 & arg6),
                                                    (uint8_t)local_34, false, (uint8_t)this_02);
                    cVar2 = local_68->empty();
                    if (cVar2) {
                        cVar2 = shared_ptr::operator_cast_to_bool(&local_50);
                        if (!cVar2) {
                            LogAssert("linkedPagedLayer",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                      "components/PagedLayerHeader.cpp",
                                      63, nullptr);
                        }
                        pPVar9 = (PagedLayer*)local_50.operator->();
                        cVar2 = pPVar9->SetActivePage((unsigned char)arg1);
                        if (!cVar2) {
                            this_01 = logger::default_logger();
                            pPVar9 = (PagedLayer*)local_50.operator->();
                            bVar3 = pPVar9->GetPageCount();
                            this_01->Log(false, 2,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                         "components/PagedLayerHeader.cpp",
                                         67, "Cannot change page to %d because the parent only has %d pages", (int)arg1,
                                         (unsigned int)bVar3);
                        }
                    }
                    this = this_02;
                    cVar2 = IsHorizontal(this_02);
                    iVar1 = iVar5 + (int)local_58 + (unsigned int)(unsigned short)this_02->field_602;
                    if (cVar2) {
                        iVar1 = iVar5;
                        uVar10 = (int)local_60 + uVar10 + (unsigned int)(unsigned short)this_02->field_602;
                    }
                    iVar5 = iVar1;
                    arg1 = arg1 + 1;
                    uVar7 = this_00->size();
                } while (arg1 < uVar7);
            }
        }
    }

    // 0x1006a43c0
    void PagedLayerHeader::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3,
                                    float arg4) {
        UpdateAnimations(arg4);
        DrawBackground(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        DrawPageHeaders(*(RT7Core**)(componentDependencies + 16), *(FontManager**)(componentDependencies + 8),
                        *(FontHelpers**)componentDependencies, arg2, arg3);
    }

    // 0x1006a4410
    void PagedLayerHeader::UpdateAnimations(float arg1) {
        long lVar2;
        long lVar3;

        if (IsEnabled() != '\0') {
            lVar3 = field_632.HeapBeginPtr();
            lVar2 = field_632.end();
            for (; lVar3 != lVar2; lVar3 = lVar3 + 88) {
                ((lVar3 + 56))->UpdateAnimations(arg1);
            }
        }
    }

    // 0x1006a4470
    void PagedLayerHeader::DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        int iVar2;
        int arg5;
        unsigned int arg6;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        SpriteAtlas* this_07;
        long lVar4;
        Logger* this_09;

        uint8_t* this_00 = field_392;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar2 = 201;
            } else {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                if (shared_ptr::operator_cast_to_bool(this_04)) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
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
                    this_00->DrawSpriteSlice(*rt7Core, arg2, arg3, iVar2, arg5, arg6, *((lVar4 + 88)), texture, 0.0);
                    return;
                }
                this_09 = logger::default_logger();
                iVar2 = 209;
            }
            this_09->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                         "PagedLayerHeader.cpp",
                         iVar2, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a4600
    void PagedLayerHeader::DrawPageHeaders(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                           graphics::FontHelpers* fontHelpers, int arg4, int arg5) {
        unsigned short uVar1;
        uint8_t bVar4;
        int iVar6;
        uint64_t uVar11;
        shared_ptr* psVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar13;
        shared_ptr* psVar14;
        MapArea* pMVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar16;
        SpriteAtlas* pSVar17;
        FastPool<audio::SoundInstance, int>* pFVar18;
        long lVar19;
        Logger* pLVar20;
        unsigned int arg8;
        int arg7;
        int arg6;
        unsigned int arg9;
        uint64_t in_stack_ffffffffffffff18;
        uint64_t in_stack_ffffffffffffff20;
        Texture* local_48;
        Texture* local_40;

        uint32_t uVar21 = (uint32_t)((unsigned long)in_stack_ffffffffffffff18 >> 32);
        uint32_t uVar22 = (uint32_t)((unsigned long)in_stack_ffffffffffffff20 >> 32);
        shared_ptr local_70 = field_616.lock();
        bool cVar3 = shared_ptr::operator_cast_to_bool(&local_70);
        if (!cVar3) {
            pLVar20 = logger::default_logger();
            GetChildren();
            uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar20->Log(true, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                         "PagedLayerHeader.cpp",
                         228, "No tab associated with header %p (\'%s\')", this, uVar11);
            goto LAB_1006a4aea;
        }
        PagedLayer* pPVar7 = (PagedLayer*)*local_70;
        UpdatePageHeaders(*pPVar7);
        int local_34 = arg4;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90;
        auto pTVar8 = rt7Core->GetTextureManager();
        auto pSVar9 = pTVar8->GetSpriteAtlasManager();
        uint8_t* puVar10 = (uint8_t*)((field_392 + 96))->LoadSpriteAtlasReference(*pSVar9, false);
        if (puVar10 == DataStatus::READY) {
            psVar12 = (shared_ptr*)((field_392 + 96))->GetDefaultValue();
            cVar3 = shared_ptr::operator_cast_to_bool(psVar12);
            if (!cVar3) {
                pLVar20 = logger::default_logger();
                pLVar20->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "PagedLayerHeader.cpp",
                             246, "Invalid sprite atlas reference!");
            } else {
                pcVar13 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar12)
                              .operator->();
                psVar14 = (shared_ptr*)pcVar13->second();
                cVar3 = shared_ptr::operator_cast_to_bool(psVar14);
                if (cVar3) {
                    pMVar15 = (MapArea*)(*psVar14).operator->();
                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar15->GetOrigin();
                    local_48 = (Texture*)pvVar16->end();
                    pSVar17 = (SpriteAtlas*)(*psVar14).operator->();
                    pFVar18 = (FastPool<audio::SoundInstance, int>*)(*psVar12).operator->();
                    iVar6 = pFVar18->capacity();
                    lVar19 = pSVar17->GetSpriteRenderMapping(iVar6);
                    local_a0 = (*((lVar19 + 88)));
                    goto LAB_1006a4808;
                }
                pLVar20 = logger::default_logger();
                pLVar20->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "PagedLayerHeader.cpp",
                             254, "Invalid sprite atlas reference!");
            }
            local_48 = nullptr;
            goto LAB_1006a4aea;
        }
        local_48 = nullptr;
    LAB_1006a4808:
        pTVar8 = rt7Core->GetTextureManager();
        pSVar9 = pTVar8->GetSpriteAtlasManager();
        puVar10 = (uint8_t*)((field_392 + 48))->LoadSpriteAtlasReference(*pSVar9, false);
        if (puVar10 == DataStatus::READY) {
            psVar12 = (shared_ptr*)((field_392 + 48))->GetDefaultValue();
            cVar3 = shared_ptr::operator_cast_to_bool(psVar12);
            if (!cVar3) {
                pLVar20 = logger::default_logger();
                pLVar20->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "PagedLayerHeader.cpp",
                             268, "Invalid sprite atlas reference!");
            } else {
                pcVar13 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar12)
                              .operator->();
                psVar14 = (shared_ptr*)pcVar13->second();
                cVar3 = shared_ptr::operator_cast_to_bool(psVar14);
                if (cVar3) {
                    pMVar15 = (MapArea*)(*psVar14).operator->();
                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar15->GetOrigin();
                    local_40 = (Texture*)pvVar16->end();
                    pSVar17 = (SpriteAtlas*)(*psVar14).operator->();
                    pFVar18 = (FastPool<audio::SoundInstance, int>*)(*psVar12).operator->();
                    iVar6 = pFVar18->capacity();
                    lVar19 = pSVar17->GetSpriteRenderMapping(iVar6);
                    local_90 = (*((lVar19 + 88)));
                    goto LAB_1006a4943;
                }
                pLVar20 = logger::default_logger();
                pLVar20->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "PagedLayerHeader.cpp",
                             276, "Invalid sprite atlas reference!");
            }
            local_40 = nullptr;
            goto LAB_1006a4aea;
        }
        local_40 = nullptr;
    LAB_1006a4943:
        Margin local_58 = (Margin)field_392->GetVisualMargin();
        Margin MVar5 = (Margin)field_656->GetValidOr(&local_58);
        Margin local_38 = MVar5;
        cVar3 = IsHorizontal();
        if (!cVar3) {
            iVar6 = GetStreamCountLastMix();
            bVar4 = local_38.GetWidth();
            arg8 = iVar6 - (unsigned int)bVar4;
            arg9 = (unsigned int)field_600;
            if (0 < (int)arg8)
                goto LAB_1006a49d3;
        } else {
            uVar1 = field_600;
            arg8 = (unsigned int)uVar1;
            iVar6 = GetMinMapX();
            bVar4 = local_38.GetHeight();
            arg9 = iVar6 - (unsigned int)bVar4;
            if (uVar1 != 0) {
            LAB_1006a49d3:
                if (0 < (int)arg9) {
                    arg6 = (unsigned int)MVar5.field_0 + local_34;
                    arg7 = ((unsigned int)MVar5 >> 8 & 255) + arg5;
                    iVar6 = 0;
                    while (true) {
                        pPVar7 = (PagedLayer*)local_70.operator->();
                        bVar4 = pPVar7->GetPageCount();
                        if (bVar4 <= (uint8_t)iVar6)
                            break;
                        pPVar7 = (PagedLayer*)*local_70;
                        DrawPageHeader(rt7Core, fontManager, fontHelpers, *pPVar7, (uint8_t)iVar6, arg6, arg7, arg8,
                                       arg9, local_48, local_a0, local_40, local_90);
                        local_34 = iVar6;
                        cVar3 = IsHorizontal();
                        iVar6 = arg7 + arg9 + (unsigned int)(unsigned short)field_602;
                        if (cVar3) {
                            iVar6 = arg7;
                            arg6 = arg6 + arg8 + (unsigned int)(unsigned short)field_602;
                        }
                        arg7 = iVar6;
                        iVar6 = (((uint32_t)((int32_t)((unsigned int)local_34 >> 8)) << 8) |
                                 (uint8_t)((char)local_34 + '\x01'));
                    }
                    goto LAB_1006a4aea;
                }
            }
        }
        pLVar20 = logger::default_logger();
        pLVar20->Log(
            true, 3,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayerHeader.cpp",
            321, "Paged layer size is invalid (width=%d height=%d)", (((uint64_t)uVar21 << 32) | (uint32_t)arg8),
            (((uint64_t)uVar22 << 32) | (uint32_t)arg9));
    LAB_1006a4aea:
    }

    // 0x1006a4b30
    void PagedLayerHeader::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 2) {
            field_660[0] = margin.field_0;
            field_660[1] = margin.field_1;
            field_660[2] = margin.field_2;
            field_660[3] = margin.field_3;
        } else if (marginType == 0) {
            field_656[0] = margin.field_0;
            field_656[1] = margin.field_1;
            field_656[2] = margin.field_2;
            field_656[3] = margin.field_3;
            return;
        }
    }

    // 0x1006a4b50
    Margin PagedLayerHeader::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 2) {
            local_c.field_0 = field_660[0];
            local_c.field_1 = field_660[1];
            local_c.field_2 = field_660[2];
            local_c.field_3 = field_660[3];
        } else if (marginType == 0) {
            local_c.field_0 = field_656[0];
            local_c.field_1 = field_656[1];
            local_c.field_2 = field_656[2];
            local_c.field_3 = field_656[3];
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006a4b90
    void PagedLayerHeader::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint64_t in_RAX;

        uint64_t local_28 = in_RAX;
        arg1.g1();
        SetEnabled((uint8_t)this);
        unsigned short uVar3 = arg1.g2();
        field_600 = uVar3;
        field_602 = arg1.g2();
        uVar3 = arg1.g2();
        field_604 = uVar3;
        uVar3 = arg1.g2();
        field_606 = uVar3;
        uVar3 = arg1.g2();
        field_608 = uVar3;
        field_610 = arg1.g1() == '\x01';
        new (&local_28) Margin(arg1);
        field_656[0] = (uint8_t)local_28;
        field_656[1] = local_28._1_1_;
        field_656[2] = local_28._2_1_;
        field_656[3] = local_28._3_1_;
        new ((Margin*)((long)&local_28 + 4)) Margin(arg1);
        *(uint32_t*)field_660 = local_28._4_4_;
        uVar3 = arg1.g2();
        field_612 = uVar3;
        uint8_t bVar2 = arg1.g1();
        field_100 = ~bVar2;
        field_96 = arg1.g4();
        field_392->DecodeSpriteData(arg1, arg2);
        ((field_392 + 48))->DecodeSpriteData(arg1, arg2);
        ((field_392 + 96))->DecodeSpriteData(arg1, arg2);
        field_536->DecodeTextData(arg1, arg2);
    }

    // 0x1006a4cc0
    void PagedLayerHeader::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 296, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 295, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_600, 298, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_604, 299, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_602, 297, true);
        styleSheet.LoadPropertyValueIfSet<bool>(field_610, 300, true);
        field_656->LoadFromStylesheet(339, styleSheet);
        field_660->LoadFromStylesheet(345, styleSheet);
        field_536->LoadStyleSheetTextData(331, styleSheet);
        field_392->LoadStyleSheetSpriteData(301, styleSheet);
        ((field_392 + 48))->LoadStyleSheetSpriteData(321, styleSheet);
        ((field_392 + 96))->LoadStyleSheetSpriteData(311, styleSheet);
    }

    // 0x1006a4de0
    void PagedLayerHeader::LinkPagedLayer(const shared_ptr<PagedLayer>& pagedLayer) {
        (&field_616)->operator=(pagedLayer);
    }

    // 0x1006a4e40
    unsigned long PagedLayerHeader::LinkStaticComponent(const shared_ptr<Component>& component) {
        long* plVar8;
        shared_ptr<oldscape::ClientNpc> local_40;

        if (field_612 == 65535) {
            LogAssert("m_staticLinkedPagedLayerID != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "PagedLayerHeader.cpp",
                      170, nullptr);
        }
        char cVar1 = component.operator_cast_to_bool();
        if (!cVar1) {
            LogAssert("linkComponent",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "PagedLayerHeader.cpp",
                      171, nullptr);
        }
        unsigned int uVar2 = ((Component*)component.operator->())->GetStaticID();
        unsigned int uVar5 = 4294967295;
        if (field_612 != 65535) {
            uVar5 = (unsigned int)field_612;
        }
        if (uVar2 != uVar5) {
            LogAssert("linkComponent->GetStaticID() == m_staticLinkedPagedLayerID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "PagedLayerHeader.cpp",
                      172, nullptr);
        }
        cVar1 = component.operator_cast_to_bool();
        if (cVar1) {
            plVar8 = (long*)component.operator->();
            cVar1 = (**(void (**)(...))(*plVar8 + 16))(plVar8);
            if (cVar1 == '\x16') {
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_40);
                (&field_616)->operator=(&local_40);
                return 1 & 4294967295;
            }
        }
        auto this_01 = logger::default_logger();
        uint32_t uVar3 = GetInterfaceID();
        uint32_t uVar4 = GetStaticID();
        uVar5 = GetDynamicID();
        uint32_t uVar6 = ComponentHelpers::GetCategoryID(uVar5);
        uVar5 = GetDynamicID();
        uint32_t uVar7 = ComponentHelpers::GetDynamicID(uVar5);
        this_01->Log(
            false, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayerHeader.cpp",
            182,
            "Attempting to link a non-paged layer or null component to paged layer header %d:%d (Cat %d Dyn ID %d)",
            uVar3, uVar4, uVar6, uVar7);
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayerHeader.cpp",
            184, nullptr);
    }

    // 0x1006a5000
    void PagedLayerHeader::UpdatePageHeaders(PagedLayer& pagedLayer) {
        uint8_t uVar4;
        int arg1;
        uint8_t* puVar5;
        long lVar6;
        unsigned long uVar7;

        uint8_t* this_00 = &field_632;
        uint8_t bVar1 = this_00->size();
        uint8_t bVar2 = pagedLayer.GetPageCount();
        this_00->resize_uninitialized((unsigned long)bVar2);
        bVar2 = pagedLayer.GetPageCount();
        if (bVar1 < bVar2) {
            uVar7 = (unsigned long)bVar1;
            do {
                new ((PageHeader*)(*this_00)[uVar7]) PageHeader(field_610);
                uVar7 = uVar7 + 1;
                bVar1 = pagedLayer.GetPageCount();
            } while (uVar7 < bVar1);
        }
        if (pagedLayer.GetPageCount() != '\0') {
            uVar7 = 0;
            do {
                puVar5 = (uint8_t*)(*this_00)[uVar7];
                uVar4 = pagedLayer.GetPageEnabled((unsigned char)uVar7);
                *puVar5 = uVar4;
                arg1 = pagedLayer.GetPageIcon((unsigned char)uVar7);
                lVar6 = (*this_00)[uVar7];
                if (arg1 == -1) {
                    ((lVar6 + 8))->Reset();
                } else {
                    ((lVar6 + 8))->SetSpriteID(arg1);
                }
                uVar7 = uVar7 + 1;
                bVar1 = pagedLayer.GetPageCount();
            } while (uVar7 < bVar1);
        }
    }

    // 0x1006a5150
    void PagedLayerHeader::DrawPageHeader(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                          graphics::FontHelpers* fontHelpers, PagedLayer& pagedLayer,
                                          unsigned char arg5, int arg6, int arg7, int arg8, int arg9,
                                          const render::Texture* texture1, const math::Rect<float>& rect1,
                                          const render::Texture* texture2, const math::Rect<float>& rect2) {
        uint8_t* this_00;
        unsigned short uVar1;
        unsigned short uVar2;
        unsigned char uVar3;
        bool arg7_00;
        unsigned int uVar5;
        EnumOptionToggle enumOptionToggle2;
        SpriteAtlasManager* spriteAtlasManager;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        long lVar8;
        PagedLayer* this_09;
        basic_string<char, BucketAllocatorEASTL>* str;
        Logger* this_10;
        uint64_t in_register_00000089;
        int iVar9;
        TextData* this_12;
        int iVar10;
        int iVar11;
        int iVar12;
        StringView local_b0;
        TextProperties local_a0;
        ButtonElement* local_78;
        int local_64;
        unsigned int local_60;
        unsigned int local_5c;
        TextData* local_38;

        FontManager* local_58 = fontManager;
        PagedLayer* local_48 = pagedLayer;
        SpriteData* pSVar6 = &field_632[(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5) & 4294967295];
        SpriteData* local_40 = pSVar6;
        if (texture1 != nullptr) {
            uVar3 = local_48->GetCurrentValue();
            local_78 = (ButtonElement*)&pSVar6[1].m_spriteRotate;
            local_38 = (TextData*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg6);
            local_64 = arg7;
            local_60 = arg8 & 65535;
            local_5c = arg9 & 65535;
            uVar5 = GetRGBA();
            arg7_00 = (bool)IsEnabled();
            pSVar6 = local_40;
            local_78->Draw(*rt7Core, (int)local_38, local_64, (unsigned short)local_60, (unsigned short)local_5c, uVar5,
                           arg7_00, texture1, rect1, *((field_392 + 96)), uVar3 == arg5);
        }
        local_a0.m_pFont._0_4_ = ((field_392 + 96))->GetVisualMargin();
        ((Margin)field_660->GetValidOr(&local_a0)).ApplyTo(arg6, arg7, arg8, arg9);
        unsigned short* this_11 = &pSVar6->m_spriteRotate;
        bool cVar4 = this_11->IsSpriteValid();
        if (!cVar4) {
            this_00 = field_536;
            iVar10 = this_00->GetEndPosition();
            if (iVar10 != -1) {
                local_38 = (TextData*)this_00;
                iVar10 = this_00->GetEndPosition();
                local_a0 = shared_ptr();
                this_09 = (PagedLayer*)local_58->GetFont(iVar10, local_a0);
                cVar4 = this_09->operator_cast_to_bool();
                this_12 = local_38;
                if (cVar4) {
                    str = (basic_string<char, BucketAllocatorEASTL>*)local_48->GetPageLabel(arg5);
                    iVar9 = arg7;
                    iVar10 = arg6;
                    if ((texture2 != nullptr) && ((char)local_40->m_spriteID == '\0')) {
                        local_48 = this_09;
                        IsHorizontal();
                        uVar1 = field_606;
                        uVar2 = field_608;
                        iVar12 = arg8 - (unsigned int)uVar1;
                        iVar11 = arg9 - (unsigned int)uVar1;
                        arg8 = (arg8 - (unsigned int)uVar1) - ((unsigned int)uVar2 + (unsigned int)uVar2);
                        local_40 = (SpriteData*)(field_392 + 48);
                        uVar1 = field_606;
                        uVar5 = GetRGBA();
                        this_12 = local_38;
                        this_09 = local_48;
                        local_40->DrawSpriteSlice(*rt7Core, (iVar12 - (unsigned int)uVar2) + iVar10, iVar11 / 2 + iVar9,
                                                  (unsigned int)uVar1, (unsigned int)uVar1, uVar5, rect2, texture2,
                                                  0.0);
                    }
                    local_a0 = graphics::TextProperties(*this_09);
                    uVar5 = GetRGBA();
                    this_12->PopulateTextProperties(local_a0, uVar5, field_100);
                    local_b0.StringView<eastl::fixed_string<char, 40>>(*str);
                    fontHelpers->DrawStringMultiline(&local_b0, arg6, arg7, arg8, arg9, nullptr, local_a0);
                }
            }
        } else {
            spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
            if ((uint8_t*)this_11->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
                this_02 = (shared_ptr*)this_11->GetDefaultValue();
                cVar4 = shared_ptr::operator_cast_to_bool(this_02);
                if (!cVar4) {
                    this_10 = logger::default_logger();
                    iVar10 = 367;
                } else {
                    this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                                  .operator->();
                    this_04 = (shared_ptr*)this_03->second();
                    cVar4 = shared_ptr::operator_cast_to_bool(this_04);
                    if (cVar4) {
                        this_05 = (MapArea*)(*this_04).operator->();
                        this_06 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                        local_48 = (PagedLayer*)this_06->end();
                        iVar10 = arg6;
                        if ((texture2 != nullptr) && ((char)local_40->m_spriteID == '\0')) {
                            local_38 = (TextData*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg7);
                            IsHorizontal();
                            uVar1 = field_606;
                            local_58 =
                                (FontManager*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)((unsigned int)uVar1));
                            local_40 =
                                (SpriteData*)(((uint64_t)local_40._4_4_ << 32) |
                                              (uint32_t)((arg8 - ((unsigned int)field_608 + (unsigned int)uVar1)) +
                                                         iVar10));
                            iVar10 = (int)(arg9 - (unsigned int)uVar1) / 2 + (int)local_38;
                            local_38 = (TextData*)(field_392 + 48);
                            uVar5 = GetRGBA();
                            local_38->DrawSpriteSlice(*rt7Core, (int)local_40, iVar10, (int)local_58, (int)local_58,
                                                      uVar5, rect2, texture2, 0.0);
                        }
                        if (local_48 == nullptr) {
                            return;
                        }
                        this_07 = (SpriteAtlas*)(*this_04).operator->();
                        iVar10 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                        lVar8 = this_07->GetSpriteRenderMapping(iVar10);
                        iVar10 = arg8;
                        enumOptionToggle2 = eastl::min<graphics::GraphicsQuality>(arg9, (unsigned int)field_604);
                        iVar10 = eastl::min<graphics::GraphicsQuality>(iVar10, enumOptionToggle2);
                        iVar9 = (arg8 - iVar10) / 2 + arg6;
                        iVar11 = (arg9 - iVar10) / 2 + arg7;
                        arg6 = iVar9;
                        arg7 = iVar11;
                        uVar5 = GetRGBA();
                        this_11->DrawSpriteSlice(*rt7Core, iVar9, iVar11, iVar10, iVar10, uVar5, *((lVar8 + 88)),
                                                 local_48, 0.0);
                        return;
                    }
                    this_10 = logger::default_logger();
                    iVar10 = 375;
                }
                this_10->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "PagedLayerHeader.cpp",
                             iVar10, "Invalid sprite atlas reference!");
            }
        }
    }

} // namespace jag::ui
