// libs/ui/components/List.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "List.h"
#include "libs/tweaky/Tweaky_List.h"

namespace jag::ui {
    // 0x100f3e9c8
    float List::m_dropdownExpandTimeMultiplier = 1.0f;

    // 0x100f3e9cc
    int32_t List::m_entryPadding = 3;

    // 0x100029ea0: List::GetSwipeable() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000782e0: List::EntryIconData::~EntryIconData() has the same machine code as oldscape::MinimapElement::~MinimapElement()

    // 0x1001319d0: List::Entry::~Entry() has the same machine code as oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()

    // 0x100269c10: List::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString::GetID() const

    // 0x1002df420: List::EntryIconData::EntryIconData(List::EntryIconData&&) has the same machine code as oldscape::jagex3::Js5::FileState::FileState(oldscape::jagex3::Js5::FileState&&)

    // 0x100412e50: List::GetValueRepresentation() has the same machine code as game::MapSquarePointLights::GetPointLightTexture()

    // 0x10068ec20: List::GetDropdownListWidth() const has the same machine code as ComboField::GetDropdownWidth() const

    // 0x10069bb60
    List::List(InterfaceManager* interfaceManager) : Component(), MakeSharedPool<List, 64>() {
        *(uint8_t***)field_392 = &PTR__List_100f0f258;
        *(uint8_t***)m_valueRepresentation = &PTR__List_100f0f2c0;
        new (field_424) SpriteData();
        new (field_472) SpriteData();
        new (field_520) SpriteData();
        uint8_t* this_00 = field_568;
        new (this_00) TextData();
        new (field_632) InteractionVisualData();
        field_656 = '\0';
        field_657 = 1;
        field_658 = 10;
        field_659 = 100;
        field_660 = 0;
        field_661 = 0;
        new (&field_664) eastl::fixed_vector<List::Entry, 10ul, true, BucketAllocatorEASTL>();
        new (&field_1024) eastl::vector<List::EntryIconData, BucketAllocatorEASTL>();
        new (&field_1048) eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>();
        new (&field_1080) eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul>();
        new (&field_1136) eastl::fixed_vector<unsigned short, 1ul, true, BucketAllocatorEASTL>();
        field_1184 = 0;
        new (&field_1192) ScrollBar();
        new (&field_1360) Margin(255);
        new (&field_1364) Margin(255);
        field_1368 = 65535;
        field_1370 = 0;
        field_1372 = 0;
        *(uint16_t*)&field_1376 = 0;
        *(uint32_t*)&field_1377 = 0;
        field_1384 = 0.0;
        field_1388 = 0;
        *(uint64_t*)((long)&field_1388 + 1) = 0;
        field_1400 = interfaceManager;
        if (interfaceManager == nullptr) {
            LogAssert("m_owningInterfaceManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      16, nullptr);
        }
        SetEnabled(true);
        this_00->SetTextHAlign(0);
        this_00->SetTextVAlign(1);
    }

    // 0x10069bed0
    void List::SetEnabled(bool arg1) {
        uint32_t in_register_00000031;

        SetEnabled(arg1);
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            field_1396 = 0;
            field_1368 = 65535;
            if (IsDropdown() != '\0') {
                CancelFocus();
            }
        }
    }

    // 0x10069bf60
    List::~List() {
        *(uint8_t***)field_392 = &PTR__List_100f0f258;
        *(uint8_t***)m_valueRepresentation = &PTR__List_100f0f2c0;
        if (IsDropdown() != '\0') {
            CancelFocus();
        }
        field_1192.~ScrollBar();
        field_1136.~fixed_vector();
        field_1080.~fixed_vector();
        field_1024.~vector();
        field_664.~fixed_vector();
        field_568->~TextData();
        field_520->~Sprite();
        field_472->~Sprite();
        field_424->~Sprite();
        field_408.~enable_shared_from_this();
        m_valueRepresentation->destruct<oldscape::highlight::NpcUID*>();
        field_392->~AutoSingleton();
    }

    // 0x10069c110
    void List::CancelFocus() {
        if (IsDropdown() == '\0') {
            LogAssert("IsDropdown()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      831, nullptr);
        }
        if (field_1380 != '\0') {
            field_1380 = 0;
            field_1396 = 0;
            field_1192.ClearInteractionState();
            (**(void (**)(...))(*(long*)field_1400 + 48))();
        }
    }

    // 0x10069c230
    void List::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        unsigned int uVar1;
        ScaleManager* this_00;
        uint8_t bVar3;
        int iVar4;
        int iVar5;
        SpriteAtlasManager* spriteAtlasManager;
        Margin local_3c;
        Margin local_34;

        if (GetAlpha()) {
            spriteAtlasManager =
                ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
            PrepareEntryIcons(*spriteAtlasManager);
            if (!(IsDropdown())) {
                DrawEntries(componentDependencies, arg2, arg3);
            } else {
                if ((field_1380 != '\0') && (field_1384 < 1.0)) {
                    field_1384 = (float)eastl::min<float>(
                        (arg4 * 6.6666665f) / *(float*)PTR_m_dropdownExpandTimeMultiplier_100ee6460 + field_1384, 1.0);
                }
                DrawDropdown(componentDependencies, arg2, arg3);
                field_1388 = arg2;
                iVar4 = GetMinMapX();
                field_1392 = iVar4 + arg3 + 2;
                this_00 = *(ScaleManager**)(componentDependencies + 24);
                iVar4 = (*(RT7Core**)(componentDependencies + 16))->GetBackBufferHeight();
                iVar4 = this_00->ScreenToInterfaceSize(iVar4, false);
                local_3c = (Margin)field_520->GetVisualMargin();
                local_34 = (Margin)field_1360.GetValidOr(&local_3c);
                uVar1 = field_1392;
                iVar5 = GetDropdownListHeight();
                bVar3 = local_34.GetHeight();
                if (iVar4 < (int)((unsigned int)bVar3 + iVar5 + uVar1)) {
                    iVar4 = GetDropdownListHeight();
                    bVar3 = local_34.GetHeight();
                    field_1392 = (arg3 - ((unsigned int)bVar3 + iVar4)) - 2;
                }
            }
        }
    }

    // 0x10069c3c0
    unsigned long List::PrepareEntryIcons(graphics::SpriteAtlasManager& spriteAtlasManager) {
        shared_ptr* this_00;
        bool cVar1;
        uint64_t unaff_R13;
        unsigned long uVar4;
        ReturnValue local_68;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        long long local_48;
        unsigned int local_34;

        auto piVar2 = field_1024.HeapBeginPtr();
        auto piVar3 = field_1024.end();
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_R13 >> 8);
        if (piVar2 == piVar3) {
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
        } else {
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
            do {
                if ((long)*piVar2 == 18446744073709551615) {
                    if (*(long*)(piVar2 + 2) != -1) {
                        piVar2[2] = -1;
                        piVar2[3] = -1;
                        ((piVar2 + 4))->reset();
                    }
                } else {
                    if (*(long*)(piVar2 + 2) == -1) {
                        *(unsigned long*)(piVar2 + 2) = (long)*piVar2 | 262144;
                        ((piVar2 + 4))->reset();
                    }
                    this_00 = (shared_ptr*)(piVar2 + 4);
                    cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    if (!cVar1) {
                        local_34 = (unsigned int)uVar4;
                        local_48 = *(long long*)(piVar2 + 2);
                        local_58 = shared_ptr();
                        local_68 = spriteAtlasManager.GetSpriteReference(local_48, local_58, 2);
                        *this_00 = local_68;
                        uVar4 = (unsigned long)local_34;
                    }
                    cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    if (cVar1) {
                        cVar1 = ((SpriteAtlasReference*)(*this_00).operator->())->IsReady();
                        uVar4 = uVar4 & 255;
                        if (!cVar1) {
                            uVar4 = 0;
                        }
                    }
                }
                piVar2 = piVar2 + 8;
            } while (piVar2 != piVar3);
        }
        return uVar4 & 4294967041;
    }

    // 0x10069c550
    void List::DrawDropdown(const ComponentDependencies& componentDependencies, int arg2, int arg3) {
        uint8_t* this_01;
        uint8_t bVar1;
        unsigned short uVar2;
        FontManager* this_02;
        FontHelpers* this_03;
        int arg2_00;
        char cVar3;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        unsigned int arg6;
        shared_ptr* psVar9;
        RT7Core* pRVar10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar11;
        shared_ptr* psVar12;
        MapArea* pMVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        Texture* pTVar15;
        SpriteAtlasReference* pSVar16;
        Logger* pLVar17;
        unsigned short* puVar18;
        long lVar19;
        shared_ptr<graphics::SpriteAtlas>* this_05;
        Layout* this_06;
        shared_ptr<graphics::FontMetrics>* this_07;
        FontMetrics* fontMetrics;
        StringView local_c8;
        StringView local_b8;
        TextProperties local_a8;
        int local_7c;
        Texture* local_78;
        RT7Core* local_70;
        Texture* local_60;
        int local_54;
        RT7Core* local_50;
        Texture* local_48;
        unsigned int local_40;
        int local_38;

        int local_3c = arg3;
        int local_34 = arg2;
        SpriteAtlasManager* spriteAtlasManager =
            ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
        uint8_t* this_00 = field_472;
        SpriteAtlasManager* rect = spriteAtlasManager;
        auto puVar8 = this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false);
        if (puVar8 == DataStatus::READY) {
            this_01 = field_424;
            cVar3 = this_01->IsSpriteValid();
            if ((!cVar3) || (puVar8 = (uint8_t*)this_01->LoadSpriteAtlasReference(*spriteAtlasManager, false),
                             rect = spriteAtlasManager, puVar8 == DataStatus::READY)) {
                psVar9 = (shared_ptr*)this_00->GetDefaultValue();
                pRVar10 = (RT7Core*)this_01->GetDefaultValue();
                cVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                if ((!cVar3) ||
                    ((cVar3 = this_01->IsSpriteValid(), cVar3 && (cVar3 = pRVar10->operator_cast_to_bool(), !cVar3)))) {
                    pLVar17 = logger::default_logger();
                    pLVar17->Log(
                        false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                        1108, "Invalid sprite atlas reference!");
                } else {
                    local_50 = pRVar10;
                    uVar4 = GetDropdownHeaderVisualState();
                    local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar4);
                    pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar9)
                                  .operator->();
                    psVar12 = (shared_ptr*)pcVar11->second();
                    cVar3 = shared_ptr::operator_cast_to_bool(psVar12);
                    local_60 = (Texture*)(((uint64_t)local_60._1_7_ << 8) | (uint8_t)cVar3);
                    if (!cVar3) {
                        pLVar17 = logger::default_logger();
                        pLVar17->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                     "components/List.cpp",
                                     1120, "Invalid header sprite atlas reference!");
                    } else {
                        pMVar13 = (MapArea*)(*psVar12).operator->();
                        pvVar14 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar13->GetOrigin();
                        pTVar15 = (Texture*)pvVar14->end();
                        if (pTVar15 != nullptr) {
                            local_78 = pTVar15;
                            pSVar16 = (SpriteAtlasReference*)(*psVar9).operator->();
                            iVar5 = pSVar16->GetRenderMapping();
                            GetVisualUV((List*)&local_a8, (Rect<float>*)rect, iVar5 + 88);
                            local_70 = *(RT7Core**)(componentDependencies + 16);
                            local_54 = local_34;
                            local_7c = local_3c;
                            iVar5 = GetStreamCountLastMix();
                            iVar6 = GetMinMapX();
                            uVar7 = GetRGBA();
                            this_00->DrawSpriteSlice(*local_70, local_54, local_7c, iVar5, iVar6, uVar7, local_a8,
                                                     local_78, 0.0);
                        }
                    }
                    if ((char)local_60 != '\0') {
                        local_38 = GetStreamCountLastMix();
                        local_40 = GetMinMapX();
                        iVar5 = local_34;
                        local_a8.m_pFont._0_4_ = this_00->GetVisualMargin();
                        ((Margin)field_1364.GetValidOr(&local_a8))
                            .ApplyTo(*((int*)(Rect<float>*)&local_34), local_3c, local_38, local_40);
                        pRVar10 = local_50;
                        cVar3 = local_50->operator_cast_to_bool();
                        if (cVar3) {
                            pcVar11 =
                                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*pRVar10)
                                    .operator->();
                            psVar9 = (shared_ptr*)pcVar11->second();
                            cVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                            if (!cVar3) {
                                pLVar17 = logger::default_logger();
                                pLVar17->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                             "components/List.cpp",
                                             1147, "Invalid button sprite atlas reference!");
                            } else {
                                pMVar13 = (MapArea*)(*psVar9).operator->();
                                pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                              pMVar13->GetOrigin();
                                pTVar15 = (Texture*)pvVar14->end();
                                if (pTVar15 != nullptr) {
                                    local_60 = pTVar15;
                                    pSVar16 = (SpriteAtlasReference*)(*local_50).operator->();
                                    iVar6 = pSVar16->GetRenderMapping();
                                    GetVisualUV((List*)&local_a8, (Rect<float>*)&local_34, iVar6 + 88);
                                    bVar1 = field_660;
                                    if (bVar1 == 0) {
                                        iVar6 = local_3c;
                                        uVar7 = local_40;
                                    } else {
                                        iVar6 = local_3c + (int)(local_40 - bVar1) / 2;
                                        uVar7 = (unsigned int)bVar1;
                                    }
                                    local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar6);
                                    iVar6 = GetStreamCountLastMix();
                                    bVar1 = field_661;
                                    local_50 = *(RT7Core**)(componentDependencies + 16);
                                    arg6 = GetRGBA();
                                    this_01->DrawSpriteSlice(*local_50, (iVar5 + iVar6) - (bVar1 + uVar7),
                                                             (int)local_48, uVar7, uVar7, arg6, local_a8, local_60,
                                                             0.0);
                                }
                            }
                            if (!cVar3) {
                                return;
                            }
                        }
                        cVar3 = field_1136.empty();
                        if (!cVar3) {
                            this_02 = *(FontManager**)(componentDependencies + 8);
                            local_60 = (Texture*)field_568;
                            iVar5 = local_60->GetEndPosition();
                            local_a8 = shared_ptr();
                            psVar9 = (shared_ptr*)this_02->GetFont(iVar5, local_a8);
                            cVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                            puVar8 = PTR_m_entryPadding_100ee6458;
                            if (cVar3) {
                                iVar5 = *(int*)PTR_m_entryPadding_100ee6458;
                                local_34 = local_34 + iVar5;
                                local_3c = local_3c + iVar5;
                                local_38 = local_38 + iVar5 * -2;
                                local_40 = local_40 + iVar5 * -2;
                                puVar18 = &field_1136[0];
                                uVar2 = *puVar18;
                                local_50 = &field_664[(unsigned long)uVar2];
                                cVar3 = field_1024.empty();
                                if (!cVar3) {
                                    lVar19 = field_1024[(unsigned long)uVar2];
                                    psVar12 = (shared_ptr*)(lVar19 + 16);
                                    cVar3 = shared_ptr::operator_cast_to_bool(psVar12);
                                    if (cVar3) {
                                        pSVar16 = (SpriteAtlasReference*)(*psVar12).operator->();
                                        cVar3 = pSVar16->IsReady();
                                        if (cVar3) {
                                            pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*,
                                                                           eastl::allocator, 0>*)(*psVar12)
                                                          .operator->();
                                            this_05 = (shared_ptr<graphics::SpriteAtlas>*)pcVar11->second();
                                            pMVar13 = (MapArea*)(*this_05).operator->();
                                            pvVar14 =
                                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    pMVar13->GetOrigin();
                                            local_48 = (Texture*)pvVar14->end();
                                            pSVar16 = (SpriteAtlasReference*)(*psVar12).operator->();
                                            lVar19 = pSVar16->GetRenderMapping();
                                            local_a8 = math::Float4(*((lVar19 + 88)));
                                            pTVar15 = local_60;
                                            iVar5 = (int)(field_659 * local_40) / 100;
                                            iVar6 = (int)(local_40 - iVar5) / 2 + local_3c;
                                            local_38 = local_38 - (*(int*)puVar8 + iVar5);
                                            cVar3 = local_60->GetTextHAlign();
                                            local_78 = (Texture*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)iVar6);
                                            if (!cVar3) {
                                                iVar6 = local_34;
                                                local_34 = local_34 + iVar5 + *(int*)PTR_m_entryPadding_100ee6458;
                                            } else {
                                                cVar3 = pTVar15->GetTextHAlign();
                                                if (cVar3 == '\x02') {
                                                    iVar6 = (local_34 + local_38) -
                                                            (*(int*)PTR_m_entryPadding_100ee6458 + iVar5);
                                                } else {
                                                    local_c8.StringView<eastl::fixed_string<char, 40>>(*local_50);
                                                    this_06 = (Layout*)(*psVar9).operator->();
                                                    this_07 =
                                                        (shared_ptr<graphics::FontMetrics>*)this_06->SSOBeginPtr();
                                                    fontMetrics = (FontMetrics*)**this_07;
                                                    iVar6 = graphics::FontHelpers::GetStringWidth(&local_c8,
                                                                                                  *fontMetrics, false);
                                                    iVar6 = (local_34 - iVar5) + (local_38 - iVar6) / 2;
                                                }
                                            }
                                            local_70 =
                                                (RT7Core*)(*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
                                            local_54 = iVar6 + iVar5;
                                            arg2_00 = (int)local_78;
                                            iVar5 = iVar5 + (int)local_78;
                                            uVar7 = GetRGBA();
                                            local_70->AddElement(iVar6, arg2_00, local_54, iVar5, uVar7, local_a8,
                                                                 local_48, 1);
                                        }
                                    }
                                }
                                local_a8 = graphics::TextProperties(*psVar9);
                                uVar7 = GetRGBA();
                                local_60->PopulateTextProperties(local_a8, uVar7, field_100);
                                this_03 = *(FontHelpers**)componentDependencies;
                                local_b8.StringView<eastl::fixed_string<char, 40>>(*local_50);
                                this_03->DrawStringMultiline(&local_b8, local_34, local_3c, local_38, local_40, nullptr,
                                                             local_a8);
                            }
                        } else {
                            cVar3 = field_664.empty();
                            if (!cVar3) {
                                LogAssert("m_entries.empty()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                          "components/List.cpp",
                                          1248, nullptr);
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x10069cc90
    void List::DrawEntries(const ComponentDependencies& componentDependencies, int arg2, int arg3) {
        FontManager* this_00;
        FontHelpers* this_01;
        TextData* this_02;
        ScrollBar* this_03;
        char cVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        bool arg8;
        unsigned short uVar5;
        unsigned short uVar6;
        uint16_t uVar7;
        int iVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        unsigned int uVar11;
        shared_ptr* psVar13;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar14;
        shared_ptr* this_05;
        MapArea* pMVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar16;
        Logger* this_06;
        SpriteAtlasReference* pSVar17;
        long lVar18;
        Entry* this_07;
        shared_ptr<graphics::SpriteAtlas>* this_08;
        basic_string<char, BucketAllocatorEASTL>* pbVar19;
        Layout* this_09;
        shared_ptr<graphics::FontMetrics>* this_10;
        FontMetrics* fontMetrics;
        char* str2;
        ComponentDependencies* pCVar20;
        int iVar21;
        unsigned long uVar22;
        unsigned long arg1;
        float fVar23;
        uint8_t local_148[40];
        optional<int> local_120;
        StringView local_118;
        TextProperties local_108;
        uint8_t local_e0[24];
        Texture* local_c8;
        TextData* local_c0;
        unsigned long local_b8;
        unsigned int local_ac;
        ScrollBar* local_a8;
        shared_ptr* local_a0;
        Margin local_94;
        GUIManager* local_90;
        unsigned long local_88;
        int local_74;
        Texture* local_70;
        unsigned int local_5c;
        unsigned int local_58;
        char local_51;
        RT7Core* local_50;
        unsigned int local_48;
        unsigned int local_40;
        bool local_39;
        unsigned int local_38;
        char local_31;

        uint8_t* puVar1 = field_520;
        SpriteAtlasManager* spriteAtlasManager =
            ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
        auto puVar12 = puVar1->LoadSpriteAtlasReference(*spriteAtlasManager, false);
        if (puVar12 == DataStatus::READY) {
            psVar13 = (shared_ptr*)puVar1->GetDefaultValue();
            cVar2 = shared_ptr::operator_cast_to_bool(psVar13);
            if (!cVar2) {
                this_06 = logger::default_logger();
                str2 = "Invalid sprite atlas reference!";
                iVar8 = 1264;
            } else {
                pcVar14 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar13)
                              .operator->();
                this_05 = (shared_ptr*)pcVar14->second();
                cVar2 = shared_ptr::operator_cast_to_bool(this_05);
                if (cVar2) {
                    pMVar15 = (MapArea*)(*this_05).operator->();
                    pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar15->GetOrigin();
                    local_70 = (Texture*)pvVar16->end();
                    new (local_148) graphics::ClippingState(*(RT7Core**)(componentDependencies + 16));
                    (*(RT7Core**)(componentDependencies + 16))->SetClippingRectToViewport();
                    local_108.m_pFont._0_4_ = puVar1->GetVisualMargin();
                    local_94 = (Margin)field_1360.GetValidOr(&local_108);
                    if (field_1380 == '\0') {
                        local_5c = GetStreamCountLastMix();
                    } else {
                        local_5c = GetTextAreaWidth();
                    }
                    if (field_1380 == '\0') {
                        iVar8 = GetMinMapX();
                    } else {
                        local_50._0_4_ = field_1384;
                        iVar8 = GetDropdownListHeight();
                        local_50 =
                            (RT7Core*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(local_50._0_4_ * (float)iVar8));
                        bVar3 = local_94.GetHeight();
                        iVar8 = (int)((float)bVar3 + local_50._0_4_);
                    }
                    local_74 = iVar8;
                    if (local_70 != nullptr) {
                        local_50 = *(RT7Core**)(componentDependencies + 16);
                        local_38 = (unsigned int)arg2;
                        local_58 = (unsigned int)arg3;
                        local_40 = local_5c;
                        uVar9 = GetRGBA();
                        uVar10 = puVar1->GetSpriteRGBA();
                        uVar9 = math::Multiply(uVar9, uVar10);
                        pSVar17 = (SpriteAtlasReference*)(*psVar13).operator->();
                        lVar18 = pSVar17->GetRenderMapping();
                        puVar1->DrawSpriteSlice(*local_50, local_38, local_58, local_40, iVar8, uVar9, *((lVar18 + 88)),
                                                local_70, 0.0);
                    }
                    pCVar20 = componentDependencies;
                    this_00 = *(FontManager**)(componentDependencies + 8);
                    puVar1 = field_568;
                    iVar8 = puVar1->GetEndPosition();
                    local_108 = shared_ptr();
                    psVar13 = (shared_ptr*)this_00->GetFont(iVar8, local_108);
                    local_a0 = psVar13;
                    cVar2 = shared_ptr::operator_cast_to_bool(psVar13);
                    if (cVar2) {
                        local_94.ApplyTo((unsigned int)arg2, (unsigned int)arg3, local_5c, local_74);
                        (*(RT7Core**)(pCVar20 + 16))
                            ->SetClippingRectangle((unsigned int)arg2, (unsigned int)arg3, local_5c, local_74, true);
                        uVar9 = (unsigned int)arg3;
                        local_58 = local_74 + (unsigned int)arg3;
                        local_40 = GetRGBA();
                        local_31 = IsScrollBarNeeded();
                        local_e0._16_8_ = &field_1024;
                        local_51 = local_e0._16_8_->empty();
                        local_90 = (*(RT7Core**)(pCVar20 + 16))->GetGUIManager();
                        local_39 = true;
                        if (field_657 != 1) {
                            bVar3 = field_1136.size();
                            local_39 = bVar3 < field_657;
                        }
                        if (local_31 != '\0') {
                            fVar23 = (float)fmod((float)(int)field_1372, (float)field_658);
                            uVar9 = uVar9 - (int)fVar23;
                        }
                        local_108 = graphics::TextProperties(*local_a0);
                        puVar1->PopulateBasicTextProperties(local_108);
                        uVar6 = field_1370;
                        uVar22 = (unsigned long)uVar6;
                        local_70 = (Texture*)&field_664;
                        local_a8 = (ScrollBar*)&field_1192;
                        local_c0 = (TextData*)puVar1;
                        uVar5 = local_70->size();
                        if ((uVar6 < uVar5) && ((int)uVar9 < (int)local_58)) {
                            do {
                                arg1 = uVar22 & 65535;
                                this_07 = (Entry*)(*local_70)[arg1];
                                cVar2 = this_07->IsVisible();
                                if (cVar2) {
                                    local_38 = local_c0->GetTextRGBA();
                                    uVar10 = local_5c;
                                    if (local_31 != '\0') {
                                        bVar3 = local_a8->GetSize();
                                        uVar10 = uVar10 - bVar3;
                                    }
                                    puVar12 = PTR_m_entryPadding_100ee6458;
                                    cVar2 = this_07->IsEnabled();
                                    uVar11 = (unsigned int)arg2;
                                    local_50 = (RT7Core*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar9);
                                    if (!cVar2) {
                                        local_38 = *(unsigned int*)field_632;
                                        bVar3 = field_658;
                                        uVar9 = math::Multiply(*(unsigned int*)(field_632 + 4), local_40);
                                        local_90->AddColouredRectangle(uVar11, (int)local_50._0_4_, uVar10,
                                                                       (unsigned int)bVar3, uVar9, 1);
                                    } else {
                                        cVar2 = this_07->IsSelected();
                                        uVar9 = (unsigned int)arg2;
                                        if (!cVar2) {
                                            if (local_39 == false) {
                                                local_38 = *(unsigned int*)field_632;
                                            } else if ((short)uVar22 == field_1368) {
                                                local_38 = *(unsigned int*)(field_632 + 8);
                                                bVar3 = field_658;
                                                uVar11 = math::Multiply(*(unsigned int*)(field_632 + 12), local_40);
                                                local_90->AddColouredRectangle(uVar9, (int)local_50._0_4_, uVar10,
                                                                               (unsigned int)bVar3, uVar11, 1);
                                            }
                                        } else {
                                            local_38 = *(unsigned int*)(field_632 + 16);
                                            if (((short)uVar22 == field_1368) && (field_657 != 1)) {
                                                bVar3 = field_658;
                                                uVar11 = math::Multiply(*(unsigned int*)(field_632 + 12), local_40);
                                                local_90->AddColouredRectangle(uVar9, (int)local_50._0_4_, uVar10,
                                                                               (unsigned int)bVar3, uVar11, 1);
                                            } else {
                                                bVar3 = field_658;
                                                uVar11 = math::Multiply(*(unsigned int*)(field_632 + 20), local_40);
                                                local_90->AddColouredRectangle(uVar9, (int)local_50._0_4_, uVar10,
                                                                               (unsigned int)bVar3, uVar11, 1);
                                            }
                                        }
                                    }
                                    uVar9 = (unsigned int)arg2 + *(int*)puVar12;
                                    uVar10 = uVar10 + *(int*)puVar12 * -2;
                                    if (local_51 == '\0') {
                                        lVar18 = (*local_e0._16_8_)[arg1];
                                        psVar13 = (shared_ptr*)(lVar18 + 16);
                                        cVar2 = shared_ptr::operator_cast_to_bool(psVar13);
                                        if (!cVar2)
                                            goto LAB_10069d390;
                                        pSVar17 = (SpriteAtlasReference*)(*psVar13).operator->();
                                        cVar2 = pSVar17->IsReady();
                                        if (!cVar2)
                                            goto LAB_10069d390;
                                        pcVar14 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*,
                                                                       eastl::allocator, 0>*)(*psVar13)
                                                      .operator->();
                                        this_08 = (shared_ptr<graphics::SpriteAtlas>*)pcVar14->second();
                                        pMVar15 = (MapArea*)(*this_08).operator->();
                                        pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                      pMVar15->GetOrigin();
                                        local_c8 = (Texture*)pvVar16->end();
                                        pSVar17 = (SpriteAtlasReference*)(*psVar13).operator->();
                                        lVar18 = pSVar17->GetRenderMapping();
                                        new (local_e0) math::Float4(*((lVar18 + 88)));
                                        this_02 = local_c0;
                                        local_ac = (unsigned int)field_658;
                                        uVar22 = (unsigned long)(field_659 * local_ac) / 100;
                                        uVar10 = uVar10 - (*(int*)PTR_m_entryPadding_100ee6458 + (int)uVar22);
                                        cVar2 = local_c0->GetTextHAlign();
                                        local_88 = (unsigned long)uVar10;
                                        if (!cVar2) {
                                            local_48 = (int)uVar22 + uVar9 + *(int*)PTR_m_entryPadding_100ee6458;
                                            uVar10 = uVar9;
                                        } else {
                                            local_b8 = uVar22;
                                            cVar2 = this_02->GetTextHAlign();
                                            if (cVar2 == '\x02') {
                                                uVar22 = local_b8;
                                                uVar10 = (uVar9 + uVar10) -
                                                         (*(int*)PTR_m_entryPadding_100ee6458 + (int)local_b8);
                                                local_48 = uVar9;
                                            } else {
                                                pbVar19 = (basic_string<char, BucketAllocatorEASTL>*)(*local_70)[arg1];
                                                ((local_148 + 24))->StringView<eastl::fixed_string<char, 40>>(*pbVar19);
                                                this_09 = (Layout*)(*local_a0).operator->();
                                                this_10 = (shared_ptr<graphics::FontMetrics>*)this_09->SSOBeginPtr();
                                                fontMetrics = (FontMetrics*)**this_10;
                                                iVar8 = graphics::FontHelpers::GetStringWidth((local_148 + 24),
                                                                                              *fontMetrics, false);
                                                uVar22 = local_b8;
                                                uVar10 = (uVar9 - (int)local_b8) + (int)(uVar10 - iVar8) / 2;
                                                local_48 = uVar9;
                                            }
                                        }
                                        iVar21 = (int)uVar22;
                                        iVar8 = (int)(local_ac - iVar21) / 2 + (int)local_50._0_4_;
                                        local_90->AddElement(uVar10, iVar8, uVar10 + iVar21, iVar21 + iVar8, local_40,
                                                             *local_e0, local_c8, 1);
                                    } else {
                                    LAB_10069d390:
                                        local_88 = (unsigned long)uVar10;
                                        local_48 = uVar9;
                                    }
                                    this = this;
                                    pCVar20 = componentDependencies;
                                    uVar9 = math::Multiply(local_40, local_38);
                                    local_e0._0_4_ = (uint32_t)field_100;
                                    local_120 = eastl::optional(*local_e0);
                                    local_108.SetColours(uVar9, &local_120);
                                    this_01 = *(FontHelpers**)pCVar20;
                                    pbVar19 = (basic_string<char, BucketAllocatorEASTL>*)(*local_70)[arg1];
                                    local_118.StringView<eastl::fixed_string<char, 40>>(*pbVar19);
                                    this_01->DrawStringMultiline(&local_118, local_48, (int)local_50._0_4_,
                                                                 (int)local_88, (unsigned int)field_658, nullptr,
                                                                 local_108);
                                    uVar9 = (int)local_50._0_4_ + (unsigned int)field_658;
                                }
                                uVar22 = (unsigned long)((int)arg1 + 1);
                                psVar13 = (shared_ptr*)(uVar22 & 65535);
                                uVar6 = local_70->size();
                            } while (((unsigned int)psVar13 < (unsigned int)uVar6) && ((int)uVar9 < (int)local_58));
                        }
                        if (local_31 != '\0') {
                            bVar3 = field_100;
                            cVar2 = IsDropdown();
                            if (!cVar2) {
                                iVar8 =
                                    (int)(((uint64_t)((int64_t)((unsigned long)psVar13 >> 8)) << 8) | (uint8_t)bVar3);
                            } else {
                                iVar8 = (int)((float)bVar3 * field_1384);
                            }
                            local_70 = (Texture*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar8);
                            uVar7 = GetNumVisibleEntries();
                            uVar9 = local_5c;
                            this_03 = local_a8;
                            local_88 = (((uint64_t)local_88._2_6_ << 16) | (uint16_t)uVar7);
                            local_50 = *(RT7Core**)(pCVar20 + 16);
                            local_58 = (unsigned int)arg2;
                            uVar4 = local_a8->GetSize();
                            local_48 = (((uint32_t)local_48._1_3_ << 8) | (uint8_t)uVar4);
                            local_38 = (unsigned int)arg3;
                            uVar10 = this_03->GetSize();
                            iVar8 = local_74;
                            local_40 = field_1372;
                            bVar3 = field_658;
                            arg8 = (bool)IsEnabled();
                            local_a8->Draw(*local_50, (uVar9 + local_58) - (local_48 & 255), local_38, uVar10 & 255,
                                           iVar8, local_40,
                                           (unsigned int)bVar3 * (unsigned int)(unsigned short)local_88, arg8,
                                           (unsigned char)local_70);
                        }
                    }
                    return;
                }
                this_06 = logger::default_logger();
                str2 = "Invalid sprite atlas!";
                iVar8 = 1272;
            }
            this_06->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                         iVar8, str2);
        }
    }

    // 0x10069d6a0
    void List::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4, bool arg5,
                         bool arg6, bool arg7) {
        uint8_t* this_00;
        uint16_t* arg4_00;
        unsigned short arg1;
        long* plVar1;
        uint8_t bVar3;
        uint8_t bVar4;
        int iVar6;
        int iVar7;
        int* piVar8;
        Entry* pEVar9;
        uint64_t in_register_00000089;
        List* local_68[2];
        int local_54;
        unsigned int local_50;
        uint32_t local_4c;
        Margin local_48;
        unsigned short local_32;

        local_48._16_4_ = arg2;
        bool cVar2 = IsEnabled();
        if (cVar2) {
            iVar7 = *(int*)&field_1376;
            if (iVar7 != 0) {
                iVar6 = 0;
                if (2 < iVar7 + 1U) {
                    ScrollList(iVar7);
                    iVar6 = *(int*)&field_1376 / 2;
                }
                *(int*)&field_1376 = iVar6;
            }
            cVar2 = IsDropdown();
            if (!cVar2) {
                cVar2 = IsScrollBarNeeded();
                if (cVar2) {
                    local_4c = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
                    local_32 = GetNumVisibleEntries();
                    local_68[0] = this;
                    GetScrollAreaBounds(&local_48, this, local_48._16_4_, arg3);
                    iVar7 = local_48.Right();
                    this_00 = &field_1192;
                    bVar3 = this_00->GetSize();
                    piVar8 = (int*)local_48.y();
                    local_54 = *piVar8;
                    bVar4 = this_00->GetSize();
                    local_50 = (unsigned int)bVar4;
                    piVar8 = (int*)local_48.qw();
                    if (this_00->ProcessInput<List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
                                                              bool)::__53&>(
                            (componentDependencies + 56), iVar7 - (unsigned int)bVar3, local_54, local_50, *piVar8,
                            &local_48, field_1372, (unsigned int)local_32 * (unsigned int)field_658,
                            (unsigned int)field_658, local_68)) {
                        field_1368 = 65535;
                        return;
                    }
                    arg5 = (uint8_t)local_4c;
                }
                if (arg6) {
                    iVar7 = ScrollListWithScaling(*(int*)(componentDependencies + 68));
                    *(int*)&field_1376 = *(int*)&field_1376 + iVar7;
                }
                if (arg4) {
                    field_1396 = 1;
                }
                field_1368 = 65535;
                if (arg6) {
                    arg4_00 = &field_1368;
                    cVar2 = GetEntryIndexAtPos(local_48._16_4_, arg3, *((componentDependencies + 60)), *arg4_00);
                    if (cVar2) {
                        pEVar9 = &field_664[(unsigned long)(unsigned short)field_1368];
                        cVar2 = pEVar9->IsEnabled();
                        if (!cVar2) {
                            *arg4_00 = 65535;
                        }
                    }
                    if (field_1396 == '\0') {
                        return;
                    }
                    if (arg4) {
                        return;
                    }
                    if (arg5 != false) {
                        return;
                    }
                    arg1 = *arg4_00;
                    if ((unsigned long)arg1 != 65535) {
                        pEVar9 = &field_664[(unsigned long)arg1];
                        bVar3 = pEVar9->IsSelected();
                        SetEntrySelectedByIndex(arg1, (bool)(bVar3 ^ 1), true);
                        field_1368 = 65535;
                    }
                }
                field_1396 = 0;
            } else if (arg4) {
                if ((field_1380 == '\0') && (cVar2 = field_664.empty(), !cVar2)) {
                    field_1368 = 65535;
                    field_1380 = 1;
                    field_1384 = 0.0;
                    plVar1 = *(long**)(componentDependencies + 48);
                    local_68->shared_from_this();
                    local_48.shared_ptr<List, void>(*local_68);
                    (**(void (**)(...))(*plVar1 + 40))(plVar1, &local_48);
                    return;
                }
                CancelFocus();
            }
        }
    }

    // 0x10069d9a0
    int List::ScrollList(int arg1) {
        unsigned short uVar2;
        int iVar3;
        int iVar4;
        float fVar5;
        int local_34[3];

        if (arg1 == 0) {
            arg1 = 0;
        } else {
            uVar2 = GetNumVisibleEntries();
            iVar4 = (unsigned int)field_658 * (unsigned int)uVar2;
            iVar3 = GetEntryAreaHeight();
            local_34[0] = iVar4 - iVar3;
            if (local_34[0] == 0 || iVar4 < iVar3) {
                field_1372 = 0;
                field_1370 = 0;
                arg1 = 0;
            } else {
                local_34[2] = field_1372 + arg1;
                if (local_34[2] < 0) {
                    field_1372 = 0;
                    field_1370 = 0;
                } else {
                    local_34[1] = 0;
                    local_34[2] = math::Clamp<int>(*(local_34 + 2), *(local_34 + 1), *local_34);
                    fVar5 = (float)::floor((float)local_34[2] / (float)field_658);
                    field_1370 = (unsigned short)(int)fVar5;
                    if (ConvertVisibleIndexToEntryIndex(field_1370) == '\0') {
                        field_1370 = 0;
                        local_34[2] = 0;
                    }
                    field_1372 = local_34[2];
                }
            }
        }
        return arg1;
    }

    // 0x10069db50
    auto List::GetScrollAreaBounds(int arg1, int arg2) const {
        uint8_t bVar2;
        uint32_t uVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        uint64_t in_RAX;
        int arg2_00;
        int arg1_00;
        Margin local_38;

        Margin local_34 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (IsDropdown() == '\0') {
            uVar3 = field_520->GetVisualMargin();
            _local_38 = (((uint64_t)local_34 << 32) | (uint32_t)uVar3);
            uVar4 = field_1364.GetValidOr(&local_38);
            _local_38 = (((uint64_t)uVar4 << 32) | (uint32_t)local_38);
            arg1_00 = (uVar4 & 255) + arg1;
            arg2_00 = (uVar4 >> 8 & 255) + arg2;
            iVar5 = GetStreamCountLastMix();
            bVar2 = local_34.GetWidth();
            iVar5 = iVar5 - (unsigned int)bVar2;
            iVar6 = GetMinMapX();
            bVar2 = local_34.GetHeight();
            iVar6 = iVar6 - (unsigned int)bVar2;
        } else {
            uVar3 = field_472->GetVisualMargin();
            _local_38 = (((uint64_t)local_34 << 32) | (uint32_t)uVar3);
            uVar4 = field_1360.GetValidOr(&local_38);
            _local_38 = (((uint64_t)uVar4 << 32) | (uint32_t)local_38);
            arg1_00 = (uVar4 & 255) + field_1388;
            arg2_00 = (uVar4 >> 8 & 255) + field_1392;
            iVar5 = GetTextAreaWidth();
            bVar2 = local_34.GetWidth();
            iVar5 = iVar5 - (unsigned int)bVar2;
            iVar6 = GetDropdownListHeight();
            bVar2 = local_34.GetHeight();
            iVar6 = iVar6 - (unsigned int)bVar2;
        }
        return auto(arg1_00, arg2_00, iVar5, iVar6);
    }

    // 0x10069dcd0
    uint64_t List::ScrollListWithScaling(int arg1) {
        if (arg1 == 0) {
            return 0;
        }
        return ScrollList((int)((float)arg1 * 0.25 * (float)field_658));
    }

    // 0x10069dd10
    uint64_t List::GetEntryIndexAtPos(int arg1, int arg2, const math::Vector2T<float>& vector2,
                                      unsigned short& arg4) const {
        int iVar3;
        float fVar4;
        unsigned short local_32;

        Margin local_3c = (Margin)field_520->GetVisualMargin();
        unsigned int uVar2 = field_1360.GetValidOr(&local_3c);
        float local_38 = *(float*)vector2 - ((float)(uVar2 & 255) + (float)arg1);
        if ((((0.0 < local_38) && (iVar3 = GetStreamCountLastMix(), local_38 < (float)iVar3)) &&
             (local_38 = *(float*)(vector2 + 4) - ((float)(uVar2 >> 8 & 255) + (float)arg2), 0.0 < local_38)) &&
            (iVar3 = GetEntryAreaHeight(), local_38 < (float)iVar3)) {
            fVar4 = (float)::floor((local_38 + (float)(int)field_1372) / (float)field_658);
            local_32 = (unsigned short)(int)fVar4;
            if (ConvertVisibleIndexToEntryIndex(local_32) != '\0') {
                arg4 = local_32;
                return 1;
            }
        }
        return 0;
    }

    // 0x10069dea0
    unsigned long List::SetEntrySelectedByIndex(unsigned short arg1, bool arg2, bool arg3) {
        uint8_t* this_01;
        uint64_t this_02;
        Entry* pEVar3;
        long lVar4;
        unsigned short* puVar5;
        unsigned short* arg2_00;
        SideBarData* this_03;
        SideBarData* pSVar7;
        uint64_t in_register_00000009;
        int arg2_01;
        uint64_t uVar8;
        int arg1_00;
        uint64_t in_register_00000032;
        uint8_t local_48[22];

        unsigned long uVar6 = (((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295;
        unsigned short local_32 = (unsigned short)uVar6;
        uint8_t* this_00 = &field_664;
        unsigned short uVar2 = this_00->size();
        if ((unsigned int)uVar2 <= (unsigned int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1)) {
        LAB_10069e0cd:
            uVar6 = 0;
            goto LAB_10069e0cf;
        }
        if (arg3) {
            pEVar3 = (Entry*)(*this_00)[(unsigned long)local_32];
            if (pEVar3->IsEnabled() == '\0') {
                lVar4 = (*this_00)[(unsigned long)local_32];
                new (local_48) oldscape::sidebars::SideBarData(*(int*)(lVar4 + 24), 3);
                field_1080.push_back(*local_48);
                goto LAB_10069e0cd;
            }
        }
        if (field_657 == 1) {
            local_48._8_8_ = &field_1136;
            lVar4 = local_48._8_8_->size();
            this_02 = local_48._8_8_;
            if (lVar4 != 1) {
                LogAssert(
                    "m_selectedIndices.size() == 1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", 660,
                    nullptr);
            }
            uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
            if ((!arg2) || (puVar5 = (unsigned short*)(*local_48._8_8_)[0], *puVar5 == local_32))
                goto LAB_10069e0cf;
            puVar5 = (unsigned short*)(*this_02)[0];
            pEVar3 = (Entry*)(*this_00)[(unsigned long)*puVar5];
            pEVar3->SetSelected(false);
            pEVar3 = (Entry*)(*this_00)[(unsigned long)local_32];
            pEVar3->SetSelected(true);
            uVar2 = local_32;
            if (!arg3) {
                puVar5 = (unsigned short*)(*this_02)[0];
                *puVar5 = uVar2;
                goto LAB_10069e0cf;
            }
            puVar5 = (unsigned short*)(*this_02)[0];
            lVar4 = (*this_00)[(unsigned long)*puVar5];
            new (local_48) oldscape::sidebars::SideBarData(*(int*)(lVar4 + 24), 0);
            field_1080.push_back(*local_48);
            uVar2 = local_32;
            puVar5 = (unsigned short*)(*this_02)[0];
            *puVar5 = uVar2;
        LAB_10069e07b:
            lVar4 = (*this_00)[(unsigned long)local_32];
            arg1_00 = *(int*)(lVar4 + 24);
            arg2_01 = 1;
        } else {
            local_48._8_4_ = (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
            this_01 = &field_1136;
            puVar5 = (unsigned short*)this_01->HeapBeginPtr();
            arg2_00 = (unsigned short*)this_01->end();
            this_03 = (SideBarData*)std::find<unsigned short*, unsigned short>(puVar5, arg2_00, local_32);
            if (!arg2) {
                pSVar7 = (SideBarData*)this_01->end();
                if (this_03 != pSVar7) {
                    pEVar3 = (Entry*)(*this_00)[(unsigned long)local_32];
                    pEVar3->SetSelected(false);
                    this_01->erase_unsorted(this_03);
                    if (local_48[8] != '\0') {
                        lVar4 = (*this_00)[(unsigned long)local_32];
                        this_03 = (SideBarData*)local_48;
                        new (this_03) oldscape::sidebars::SideBarData(*(int*)(lVar4 + 24), 0);
                        field_1080.push_back(*this_03);
                    }
                }
                uVar6 = (((uint64_t)((int64_t)((unsigned long)this_03 >> 8)) << 8) | (uint8_t)1);
                goto LAB_10069e0cf;
            }
            uVar6 = this_01->size();
            uVar8 = (uint64_t)((unsigned long)puVar5 >> 8);
            if (uVar6 < field_657) {
                pEVar3 = (Entry*)(*this_00)[(unsigned long)local_32];
                pEVar3->SetSelected(true);
                this_01->push_back(local_32);
                uVar6 = (((uint64_t)uVar8 << 8) | (uint8_t)1);
                if (local_48[8] == '\0')
                    goto LAB_10069e0cf;
                goto LAB_10069e07b;
            }
            uVar6 = (((uint64_t)uVar8 << 8) | (uint8_t)1);
            if (local_48[8] == '\0')
                goto LAB_10069e0cf;
            lVar4 = (*this_00)[(unsigned long)local_32];
            arg1_00 = *(int*)(lVar4 + 24);
            arg2_01 = 2;
        }
        new (local_48) oldscape::sidebars::SideBarData(arg1_00, arg2_01);
        field_1080.push_back(*local_48);
    LAB_10069e0cf:
        return uVar6 & 4294967295;
    }

    // 0x10069e1c0
    void List::LogicFocus(const ComponentDependencies& componentDependencies, bool arg2) {
        uint8_t* this_00;
        unsigned short arg1;
        uint8_t bVar2;
        uint8_t bVar3;
        uint16_t uVar5;
        int iVar6;
        int arg5;
        int* piVar8;
        Entry* pEVar9;
        List* local_60;
        ReturnValue local_58;
        ComponentDependencies* local_48;
        ComponentDependencies* local_40;
        int local_38;
        float local_34;

        bool cVar1 = IsDropdown();
        if ((!cVar1) || (field_1380 == '\0')) {
            LogAssert("IsDropdown() && m_isDropdownOpen",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      227, nullptr);
        }
        if (!arg2) {
            return;
        }
        cVar1 = IsScrollBarNeeded();
        if (cVar1) {
            uVar5 = GetNumVisibleEntries();
            local_34 = (float)(((uint32_t)local_34._2_2_ << 16) | (uint16_t)uVar5);
            local_60 = this;
            GetScrollAreaBounds(&local_58, this);
            iVar6 = local_58.Right();
            this_00 = &field_1192;
            bVar2 = this_00->GetSize();
            local_48 = componentDependencies + 56;
            local_40 = componentDependencies;
            piVar8 = (int*)local_58.y();
            local_38 = *piVar8;
            bVar3 = this_00->GetSize();
            arg5 = GetDropdownListHeight();
            if (this_00->ProcessInput<List::LogicFocus(ComponentDependencies const&, bool)::__54&>(
                    local_48, iVar6 - (unsigned int)bVar2, local_38, (unsigned int)bVar3, arg5, &local_58, field_1372,
                    ((unsigned int)local_34 & 65535) * (unsigned int)field_658, (unsigned int)field_658, &local_60)) {
                field_1368 = 65535;
                return;
            }
            componentDependencies = local_40;
        }
        field_1368 = 65535;
        local_58[0]._0_4_ = field_520->GetVisualMargin();
        unsigned int uVar7 = field_1360.GetValidOr(&local_58);
        local_34 = *(float*)(componentDependencies + 60) - ((float)(uVar7 & 255) + (float)field_1388);
        if (local_34 <= 0.0) {
            return;
        }
        iVar6 = GetStreamCountLastMix();
        if ((float)iVar6 <= local_34) {
            return;
        }
        local_34 = *(float*)(componentDependencies + 64) - ((float)(uVar7 >> 8 & 255) + (float)(int)field_1392);
        if (local_34 <= 0.0) {
            return;
        }
        iVar6 = GetEntryAreaHeight();
        if ((float)iVar6 <= local_34) {
            return;
        }
        float fVar10 = (float)::floor((local_34 + (float)(int)field_1372) / (float)field_658);
        field_1368 = (short)(int)fVar10;
        cVar1 = ConvertVisibleIndexToEntryIndex(field_1368);
        if (cVar1) {
            pEVar9 = &field_664[(unsigned long)(unsigned short)field_1368];
            cVar1 = pEVar9->IsEnabled();
            if (cVar1) {
                if (componentDependencies[56] != (ComponentDependencies)0) {
                    if (field_657 != 1) {
                        LogAssert("m_selectionLimit == 1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "List.cpp",
                                  307, nullptr);
                    }
                    arg1 = field_1368;
                    pEVar9 = &field_664[(unsigned long)arg1];
                    bVar2 = pEVar9->IsSelected();
                    SetEntrySelectedByIndex(arg1, (bool)(bVar2 ^ 1), true);
                    CancelFocus();
                }
                goto LAB_10069e4ad;
            }
        }
        field_1368 = 65535;
    LAB_10069e4ad:
        iVar6 = ScrollListWithScaling(*(int*)(componentDependencies + 68));
        *(int*)&field_1376 = *(int*)&field_1376 + iVar6;
    }

    // 0x10069e540
    void List::GetEntryAreaHeight() const {
        uint8_t bVar2;
        unsigned short uVar3;
        int iVar4;
        Margin local_20;
        Margin local_1c;

        if (IsDropdown() == '\0') {
            local_1c = (Margin)field_520->GetVisualMargin();
            local_20 = (Margin)field_1360.GetValidOr(&local_1c);
            iVar4 = GetMinMapX();
            bVar2 = local_20.GetHeight();
            uVar3 = GetNumVisibleEntries();
            eastl::min<graphics::GraphicsQuality>(iVar4 - (unsigned int)bVar2,
                                                  (unsigned int)field_658 * (unsigned int)uVar3);
        } else {
            GetDropdownListHeight();
        }
    }

    // 0x10069e5d0
    unsigned long List::ConvertVisibleIndexToEntryIndex(unsigned short& arg1) const {
        unsigned short uVar2;
        Entry* pEVar3;
        Entry* pEVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint8_t bVar6;
        uint8_t* this_01;
        bool bVar7;
        uint8_t auVar8[16];

        if (field_1184 == 0) {
            bVar6 = 1;
        } else {
            this_01 = &field_664;
            pEVar3 = (Entry*)this_01->HeapBeginPtr();
            auVar8 = this_01->end();
            pEVar3 =
                std::find_if<List::Entry const*, (unsigned short&)->ConvertVisibleIndexToEntryIndex() const ::__55>(
                    pEVar3, auVar8._0_8_, auVar8._8_8_);
            pEVar4 = (Entry*)this_01->end();
            bVar7 = pEVar3 == pEVar4;
            if (!bVar7) {
                uVar2 = 0;
                do {
                    if (pEVar3->IsVisible() != '\0') {
                        if (uVar2 == arg1) {
                            pEVar4 = (Entry*)this_01->HeapBeginPtr();
                            uVar2 = std::distance<List::Entry const*>(pEVar4, pEVar3);
                            arg1 = uVar2;
                            goto LAB_10069e6bf;
                        }
                        uVar2 = uVar2 + 1;
                    }
                    pEVar3 = pEVar3 + 1;
                    pEVar4 = (Entry*)this_01->end();
                    bVar7 = pEVar3 == pEVar4;
                } while (!bVar7);
            }
            this_00 = logger::default_logger();
            uVar2 = arg1;
            uVar5 = this_01->size();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                         977, "Could not convert visible index to entry index (visible index = %u | num entries = %u)",
                         (unsigned long)uVar2, uVar5);
        LAB_10069e6bf:
            bVar6 = bVar7 ^ 1;
        }
        return bVar6 & 4294967295;
    }

    // 0x10069e700
    void List::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 1) {
            field_1364 = margin.field_0;
            field_1365 = margin.field_1;
            field_1366 = margin.field_2;
            field_1367 = margin.field_3;
        } else if (marginType == 0) {
            field_1360 = margin.field_0;
            field_1361 = margin.field_1;
            field_1362 = margin.field_2;
            field_1363 = margin.field_3;
            return;
        }
    }

    // 0x10069e720
    Margin List::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 1) {
            local_c.field_0 = field_1364;
            local_c.field_1 = field_1365;
            local_c.field_2 = field_1366;
            local_c.field_3 = field_1367;
        } else if (marginType == 0) {
            local_c.field_0 = field_1360;
            local_c.field_1 = field_1361;
            local_c.field_2 = field_1362;
            local_c.field_3 = field_1363;
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x10069e760
    void List::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        int* this_01;
        List* pLVar1;
        unsigned short uVar6;
        int iVar9;
        long lVar13;
        Logger* this_02;
        uint64_t uVar14;
        Entry* pEVar15;
        uint8_t* this_03;
        int local_54;
        int local_50;
        int local_4c;
        unsigned long local_40;
        unsigned short local_34;
        unsigned short local_32;

        char cVar2 = arg1.g1();
        SetEnabled(cVar2 == '\x01');
        cVar2 = arg1.g1();
        field_656 = cVar2;
        uint8_t bVar3 = arg1.g1();
        field_657 = bVar3;
        bVar3 = arg1.g1();
        field_658 = bVar3;
        if (8 < arg2) {
            bVar3 = arg1.g1();
            field_659 = bVar3;
        }
        bVar3 = arg1.g1();
        field_660 = bVar3;
        bVar3 = arg1.g1();
        field_661 = bVar3;
        uint8_t* this_00 = &field_664;
        List* local_48 = this;
        unsigned short uVar4 = arg1.g2();
        this_00->resize((unsigned long)uVar4);
        unsigned long uVar11 = this_00->size();
        if (65533 < uVar11) {
            LogAssert("m_entries.size() < MAX_ENTRY_COUNT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      372, nullptr);
        }
        auto str = this_00->HeapBeginPtr();
        auto pbVar12 = this_00->end();
        for (; str != pbVar12; str = str + 32) {
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        }
        uVar4 = arg1.g2();
        if (this_00->size() == uVar4) {
            local_32 = 0;
            if (this_00->size() != 0) {
                this_01 = &local_48->field_1048;
                local_4c = 0;
                do {
                    iVar9 = arg1.g4s();
                    local_54 = iVar9;
                    lVar13 = (*this_00)[(unsigned long)local_32];
                    *(int*)(lVar13 + 24) = iVar9;
                    cVar2 = this_01->empty();
                    if ((!cVar2) || (local_54 != local_4c)) {
                        cVar2 = this_01->empty();
                        if (cVar2) {
                            uVar11 = this_00->size();
                            this_01->reserve(uVar11);
                            local_34 = 0;
                            if (local_32 != 0) {
                                do {
                                    lVar13 = (*this_00)[(unsigned long)local_34];
                                    local_50 = *(int*)(lVar13 + 24);
                                    local_40 = eastl::make_pair<int&, unsigned short&>(local_50, local_34);
                                    this_01->insert<eastl::pair<int, unsigned short>, void>(local_40);
                                    local_34 = local_34 + 1;
                                } while (local_34 < local_32);
                            }
                        }
                        local_40 = eastl::make_pair<int&, unsigned short&>(local_54, local_32);
                        this_01->insert<eastl::pair<int, unsigned short>, void>(local_40);
                    } else {
                        local_4c = local_4c + 1;
                    }
                    uVar4 = local_32 + 1;
                    local_32 = uVar4;
                    uVar6 = this_00->size();
                } while (uVar4 < uVar6);
            }
            uVar4 = arg1.g2();
            if (local_48->field_657 < uVar4) {
                LogAssert(
                    "numSelected <= m_selectionLimit",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", 421,
                    nullptr);
            }
            this_03 = &local_48->field_1136;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                uVar6 = arg1.g2();
                local_40 = (((uint64_t)local_40._2_6_ << 16) | (uint16_t)uVar6);
                if (this_00->size() <= uVar6) {
                    LogAssert(
                        "selectedIndex < (uint16)m_entries.size()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                        426, nullptr);
                }
                bVar3 = local_48->field_657;
                uVar6 = this_03->size();
                if (uVar6 < bVar3) {
                    this_03->push_back(local_40);
                    pEVar15 = (Entry*)(*this_00)[local_40 & 65535];
                    pEVar15->SetSelected(true);
                }
            }
            cVar2 = this_03->empty();
            if (((cVar2) && (cVar2 = this_00->empty(), !cVar2)) && (local_48->field_657 == 1)) {
                local_40 = local_40 & 18446744073709486080;
                this_03->push_back(local_40);
                pEVar15 = (Entry*)(*this_00)[0];
                pEVar15->SetSelected(true);
            }
            pLVar1 = local_48;
            if (8 < arg2) {
                new (&local_40) Margin(arg1);
                pLVar1->field_1360 = (uint8_t)local_40;
                pLVar1->field_1361 = local_40._1_1_;
                pLVar1->field_1362 = local_40._2_1_;
                pLVar1->field_1363 = local_40._3_1_;
                new (&local_40) Margin(arg1);
                pLVar1->field_1364 = (uint8_t)local_40;
                pLVar1->field_1365 = local_40._1_1_;
                pLVar1->field_1366 = local_40._2_1_;
                pLVar1->field_1367 = local_40._3_1_;
            }
            bVar3 = arg1.g1();
            pLVar1->field_100 = ~bVar3;
            pLVar1->field_96 = arg1.g4();
            pLVar1->field_424->DecodeSpriteData(arg1, arg2);
            pLVar1->field_472->DecodeSpriteData(arg1, arg2);
            pLVar1->field_520->DecodeSpriteData(arg1, arg2);
            pLVar1->field_568->DecodeTextData(arg1, arg2);
            pLVar1->field_1192.Decode(arg1, arg2);
        } else {
            this_02 = logger::default_logger();
            uVar14 = this_00->size();
            this_02->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                         383, "List entry encoding mismatch - expected %u values but got %u", uVar14,
                         (unsigned long)uVar4);
        }
    }

    // 0x10069ecd0
    void List::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        int* piVar3;
        unsigned char* puVar4;
        optional<unsigned int> local_30;

        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 60, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 59, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_656, 61, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_658, 67, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_659, 68, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_660, 62, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_661, 63, true);
        field_1360.LoadFromStylesheet(139, styleSheet);
        field_1364.LoadFromStylesheet(133, styleSheet);
        field_568->LoadStyleSheetTextData(75, styleSheet);
        field_472->LoadStyleSheetSpriteData(83, styleSheet);
        field_520->LoadStyleSheetSpriteData(93, styleSheet);
        PropertyFindResult local_48 = styleSheet.FindProperty(64, true);
        if (local_48.IsValid()) {
            field_424->SetSpriteID(local_48.field_8->Get<int>());
        }
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        if (local_30.IsActive()) {
            piVar3 = (int*)local_30.value();
            field_424->SetLevel(*piVar3);
        }
        StyleSheet::GetPropertyValue<unsigned char>(&local_30, (StyleEntryID)styleSheet, true);
        if (local_30.IsNull()) {
            puVar4 = (unsigned char*)local_30.value();
            field_424->SetEmitting(*puVar4);
        }
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        unsigned int uVar2 = local_30.value_or<unsigned int&>(*((field_632 + 4)));
        *(unsigned int*)(field_632 + 4) = uVar2;
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        uVar2 = local_30.value_or<unsigned int&>(*((field_632 + 12)));
        *(unsigned int*)(field_632 + 12) = uVar2;
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        uVar2 = local_30.value_or<unsigned int&>(*((field_632 + 20)));
        *(unsigned int*)(field_632 + 20) = uVar2;
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        uVar2 = local_30.value_or<unsigned int&>(*field_632);
        *(unsigned int*)field_632 = uVar2;
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        uVar2 = local_30.value_or<unsigned int&>(*((field_632 + 8)));
        *(unsigned int*)(field_632 + 8) = uVar2;
        StyleSheet::GetPropertyValue<unsigned int>(&local_30, (StyleEntryID)styleSheet, true);
        uVar2 = local_30.value_or<unsigned int&>(*((field_632 + 16)));
        *(unsigned int*)(field_632 + 16) = uVar2;
        uint8_t* this_00 = &field_1192;
        auto pSVar5 = this_00->GetMaterial();
        pSVar5->LoadStyleSheetSpriteData(103, styleSheet);
        pSVar5 = (SpriteData*)this_00->GetCursorMutex();
        pSVar5->LoadStyleSheetSpriteData(123, styleSheet);
        pSVar5 = (SpriteData*)this_00->SSOBeginPtr();
        pSVar5->LoadStyleSheetSpriteData(113, styleSheet);
    }

    // 0x10069f110
    uint64_t List::GetEntryById(int arg1) const {
        uint64_t uVar3;

        unsigned short uVar1 = GetEntryIndexById(arg1);
        unsigned short uVar2 = field_664.size();
        if (uVar1 < uVar2) {
            uVar3 = field_664[(unsigned long)uVar1];
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10069f150
    uint16_t List::GetEntryIndexById(int arg1) const {
        int iVar2;
        long lVar3;
        long lVar4;
        uint16_t local_24;

        int* this_00 = &field_1048;
        if (this_00->empty() == '\0') {
            lVar3 = eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>::find(*this_00);
            lVar4 = this_00->end();
            if (lVar3 == lVar4) {
                local_24 = 65535;
            } else {
                local_24 = *(uint16_t*)(lVar3 + 4);
            }
        } else {
            local_24 = 65535;
            if (-1 < arg1) {
                iVar2 = field_664.size();
                if (arg1 < iVar2) {
                    local_24 = (uint16_t)arg1;
                }
            }
        }
        return local_24;
    }

    // 0x10069f210
    bool List::SetEntryVisible(int arg1, bool arg2) {
        short sVar3;
        Entry* this_00;

        unsigned short uVar2 = GetEntryIndexById(arg1);
        unsigned int uVar4 = field_664.size();
        if ((unsigned int)uVar2 < (uVar4 & 65535)) {
            this_00 = &field_664[(unsigned long)(unsigned int)uVar2];
            if (this_00->IsVisible() != arg2) {
                this_00->SetVisible(arg2);
                if (arg2) {
                    if (field_1184 == 0) {
                        LogAssert("m_numHiddenEntries > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "List.cpp",
                                  592, nullptr);
                    }
                    sVar3 = (short)*(uint32_t*)&field_1184 - 1;
                } else {
                    sVar3 = field_1184 + 1;
                }
                field_1184 = sVar3;
            }
        }
        return (unsigned int)uVar2 < (uVar4 & 65535);
    }

    // 0x10069f300
    bool List::SetEntryEnabled(int arg1, bool arg2) {
        uint8_t extraout_AL;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint8_t extraout_AH_01;
        uint64_t extraout_var;

        uint8_t uVar2 = GetEntryIndexById(arg1);
        unsigned short uVar1 = (((uint16_t)extraout_AH << 8) | (uint8_t)uVar2);
        uVar2 = field_664.size();
        if ((unsigned int)uVar1 < (unsigned int)(((uint16_t)extraout_AH_00 << 8) | (uint8_t)uVar2)) {
            field_664[(unsigned long)(unsigned int)uVar1];
            ((Entry*)(((uint64_t)extraout_var << 16) |
                      (uint16_t)((((uint16_t)extraout_AH_01 << 8) | (uint8_t)extraout_AL))))
                ->SetEnabled(arg2);
        }
        return (unsigned int)uVar1 < (unsigned int)(((uint16_t)extraout_AH_00 << 8) | (uint8_t)uVar2);
    }

    // 0x10069f380
    uint64_t List::GetEntryVisible(int arg1) const {
        uint64_t uVar3;

        unsigned short uVar1 = GetEntryIndexById(arg1);
        unsigned short uVar2 = field_664.size();
        if (uVar1 < uVar2) {
            uVar3 = ((Entry*)field_664[(unsigned long)uVar1])->IsVisible();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10069f3d0
    uint64_t List::GetEntryEnabled(int arg1) const {
        uint64_t uVar3;

        unsigned short uVar1 = GetEntryIndexById(arg1);
        unsigned short uVar2 = field_664.size();
        if (uVar1 < uVar2) {
            uVar3 = ((Entry*)field_664[(unsigned long)uVar1])->IsEnabled();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10069f420
    void List::SetEntrySelected(int arg1, bool arg2, bool arg3) {
        SetEntrySelectedByIndex(GetEntryIndexById(arg1), arg2, arg3);
    }

    // 0x10069f540
    bool List::GetEntrySelected(int arg1) const {
        unsigned short* puVar3;
        unsigned short* puVar4;
        uint8_t* this_00;
        bool bVar5;

        unsigned short uVar1 = GetEntryIndexById(arg1);
        unsigned short local_1a = uVar1;
        unsigned short uVar2 = field_664.size();
        if (uVar1 < uVar2) {
            this_00 = &field_1136;
            puVar3 = (unsigned short*)this_00->HeapBeginPtr();
            puVar4 = (unsigned short*)this_00->end();
            puVar3 = std::find<unsigned short const*, unsigned short>(puVar3, puVar4, local_1a);
            puVar4 = (unsigned short*)this_00->end();
            bVar5 = puVar3 != puVar4;
        } else {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x10069f5e0
    bool List::SetEntryIcon(int arg1, int arg2) {
        uint8_t extraout_AL;
        uint8_t extraout_AL_00;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint8_t extraout_AH_01;
        uint8_t extraout_AH_02;
        uint64_t extraout_var;
        uint64_t extraout_var_00;

        uint8_t uVar2 = GetEntryIndexById(arg1);
        unsigned short uVar1 = (((uint16_t)extraout_AH << 8) | (uint8_t)uVar2);
        uVar2 = field_664.size();
        if ((unsigned int)uVar1 < (unsigned int)(((uint16_t)extraout_AH_00 << 8) | (uint8_t)uVar2)) {
            field_664.size();
            field_1024.resize((((uint64_t)extraout_var << 16) |
                               (uint16_t)((((uint16_t)extraout_AH_01 << 8) | (uint8_t)extraout_AL))));
            field_1024[(unsigned long)(unsigned int)uVar1];
            if (*(int*)(((uint64_t)extraout_var_00 << 16) |
                        (uint16_t)((((uint16_t)extraout_AH_02 << 8) | (uint8_t)extraout_AL_00))) != arg2) {
                *(int*)(((uint64_t)extraout_var_00 << 16) |
                        (uint16_t)((((uint16_t)extraout_AH_02 << 8) | (uint8_t)extraout_AL_00))) = arg2;
                *(uint64_t*)((((uint64_t)extraout_var_00 << 16) |
                              (uint16_t)((((uint16_t)extraout_AH_02 << 8) | (uint8_t)extraout_AL_00))) +
                             8) = 18446744073709551615;
            }
        }
        return (unsigned int)uVar1 < (unsigned int)(((uint16_t)extraout_AH_00 << 8) | (uint8_t)uVar2);
    }

    // 0x10069f6f0
    void List::SetSelectionLimit(unsigned char arg1) {
        unsigned short* arg2;
        Entry* pEVar3;
        long lVar4;
        long lVar5;
        unsigned short* puVar6;
        uint64_t in_register_00000031;

        if (IsDropdown()) {
            return;
        }
        if (arg1 == '\0') {
            return;
        }
        if (arg1 == '\x01') {
            if (field_1136.empty()) {
                if (!(field_664.empty())) {
                    field_1136.push_back(0);
                    pEVar3 = &field_664[0];
                    pEVar3->SetSelected(true);
                }
                goto LAB_10069f808;
            }
        }
        uint8_t* this_00 = &field_1136;
        uint8_t bVar2 = this_00->size();
        if ((unsigned int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) < (unsigned int)bVar2) {
            lVar4 = this_00->HeapBeginPtr();
            lVar5 = this_00->size();
            arg2 = (unsigned short*)(lVar4 + (lVar5 - (unsigned long)arg1) * 2);
            puVar6 = (unsigned short*)this_00->HeapBeginPtr();
            if (puVar6 != arg2) {
                do {
                    pEVar3 = &field_664[(unsigned long)*puVar6];
                    pEVar3->SetSelected(false);
                    puVar6 = puVar6 + 1;
                } while (puVar6 != arg2);
            }
            puVar6 = (unsigned short*)this_00->HeapBeginPtr();
            this_00->erase(puVar6, arg2);
        }
    LAB_10069f808:
        field_657 = arg1;
    }

    // 0x10069f8a0
    unsigned int List::AddEntry(const eastl::basic_string<char, BucketAllocatorEASTL>& str, int arg2) {
        uint8_t* this_00;
        unsigned short local_40[4];
        unsigned short local_32;

        unsigned int uVar3 = HasEntry(arg2);
        if ((char)uVar3 == '\0') {
            this_00 = &field_664;
            this_00->emplace_back<eastl::basic_string<char, BucketAllocatorEASTL> const&, int&>(str, arg2);
            if (!(field_1048.empty())) {
                local_32 = this_00->size() - 1;
                local_40->pair<int&, unsigned short&, void>(arg2, local_32);
                field_1048.insert(*local_40);
            }
            if (!(field_1024.empty())) {
                field_1024.resize(this_00->size());
            }
            if (field_657 == 1) {
                if (field_1136.empty()) {
                    local_40[0] = 0;
                    field_1136.push_back(*local_40);
                    ((Entry*)(*this_00)[0])->SetSelected(true);
                }
            }
        }
        return uVar3 ^ 1;
    }

    // 0x10069fa90
    void List::ReserveEntries(unsigned long arg1) {
        field_664.reserve(arg1);
    }

    // 0x10069fb10
    bool List::ShouldBlockInput(int arg1, int arg2) const {
        unsigned int uVar1;
        uint8_t bVar3;
        int iVar4;
        float fVar6;
        float local_38;

        if (IsDropdown() == '\0') {
            LogAssert("IsDropdown()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      846, nullptr);
        }
        Margin local_3c = (Margin)field_520->GetVisualMargin();
        Margin local_34 = (Margin)field_1360.GetValidOr(&local_3c);
        int iVar5 = field_1388;
        if ((iVar5 <= arg1) && ((int)field_1392 <= arg2)) {
            iVar4 = GetTextAreaWidth();
            bVar3 = local_34.GetWidth();
            if (arg1 <= (int)((unsigned int)bVar3 + iVar4 + iVar5)) {
                uVar1 = field_1392;
                local_38 = field_1384;
                iVar5 = GetDropdownListHeight();
                fVar6 = (float)iVar5 * local_38;
                bVar3 = local_34.GetHeight();
                iVar5 = bVar3 + uVar1 + (int)fVar6;
                return arg2 <= iVar5;
            }
        }
        return 0;
    }

    // 0x10069fc30
    uint64_t List::NotifyFocusGain() {
        bool cVar1 = IsEnabled();
        if (((!cVar1) || (cVar1 = IsDropdown(), !cVar1)) || (cVar1 = field_664.empty(), cVar1)) {
            return 0;
        }
        field_1368 = 65535;
        field_1380 = 1;
        field_1384 = 0.0;
        return 1;
    }

    // 0x10069fcb0
    void List::ClearEntries() {
        field_664.clear();
        field_1024.clear();
        field_1048.clear();
        field_1136.clear();
        field_1080.clear();
        if (IsDropdown() != '\0') {
            CancelFocus();
        }
        field_1370 = 0;
        *(uint64_t*)&field_1372 = 0;
    }

    // 0x10069fdb0
    void List::DrawFocus(const ComponentDependencies& componentDependencies) {
        if ((IsDropdown() == '\0') || (field_1380 == '\0')) {
            LogAssert("IsDropdown() && m_isDropdownOpen",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      1088, nullptr);
        }
        DrawEntries(componentDependencies, field_1388, field_1392);
    }

    // 0x10069fe30
    uint8_t List::GetDropdownHeaderVisualState() const {
        bool cVar1 = IsEnabled();
        uint8_t uVar2 = 3;
        if ((cVar1) && (uVar2 = 2, field_1380 == '\0')) {
            uVar2 = IsCurrentlyMouseOver();
        }
        return uVar2;
    }

    // 0x10069fe70
    List* List::GetVisualUV(const math::Rect<float>& rect, List::EntryVisualState entryVisualState) const {
        EntryVisualState in_ECX;
        uint32_t in_register_00000014;

        new (this) math::Float4(*((Rect<float>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)entryVisualState)));
        auto pfVar3 = qw();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)y();
        float fVar2 = *pfVar3;
        float fVar4 = (float)GetGraphicSliceOffset(in_ECX);
        float fVar5 = (float)GetGraphicSliceHeightPercent();
        pfVar3 = (float*)y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        SetVerticalFov(fVar5 * fVar1);
        return this;
    }

    // 0x1006ad3a0: List::SupportsMargin(Component::MarginType) const has the same machine code as ComboField::SupportsMargin(Component::MarginType) const

    // 0x1006ad410: List::IsAssociatedComponent(shared_ptr<Component> const&) const has the same machine code as ComboField::IsAssociatedComponent(shared_ptr<Component> const&) const

    // 0x1006c8de0: List::Entry::Entry(List::Entry&&) has the same machine code as ComboField::Entry::Entry(ComboField::Entry&&)

    // 0x1006d4d80
    void List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
                         bool)::$_53::operator()(const ScrollBar& scrollBar, int arg2) const {
        ScrollList(field_0, (int)scrollBar - field_0->field_1372);
    }

    // 0x1006d4da0
    void List::LogicFocus(ComponentDependencies const&, bool)::$_54::operator()(const ScrollBar& scrollBar,
                                                                                int arg2) const {
        ScrollList(field_0, (int)scrollBar - field_0->field_1372);
    }

    // 0x1006d5a70
    void
    List::ConvertVisibleIndexToEntryIndex(unsigned short&) const ::$_55::operator()(const List::Entry& entry) const {
        IsVisible();
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100009e70: List::ResetToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10002d860: List::HasKeyboardNavigation() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100102f30: List::GetCurrentListItem() const has the same machine code as oldscape::rs2lib::InputField::GetScrollY() const

} // namespace jag::tweak
