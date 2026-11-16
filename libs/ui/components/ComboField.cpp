// libs/ui/components/ComboField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ComboField.h"

namespace jag::ui {
    // 0x100f3e9bc
    float ComboField::m_dropdownExpandTimeMultiplier = 1.0f;

    // 0x100f3e9c0
    int32_t ComboField::m_entryPadding = 3;

    // 0x100029ea0: ComboField::GetSwipeable() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: ComboField::IsKeyReceiver() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1001319d0: ComboField::Entry::~Entry() has the same machine code as oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()

    // 0x100269ac0: ComboField::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::AddMember::GetID() const

    // 0x10068d4f0
    ComboField::ComboField(InterfaceManager* interfaceManager) : Component(), MakeSharedPool<ComboField, 16>() {
        eastl local_38;

        m_pValueRepresentation = &PTR__ComboField_100f0eaf0;
        field_400 = &PTR__ComboField_100f0eb28;
        new (field_424) SpriteData();
        new ((field_424 + 48)) SpriteData();
        new ((field_424 + 96)) SpriteData();
        uint8_t* this_00 = field_568;
        new (this_00) TextData();
        new (&field_632) ScrollBar();
        new (&field_800) InteractionVisualData();
        m_entryHeight = 10;
        m_dropdownMaxVisibleEntries = 4;
        field_834 = 0;
        field_835 = 0;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (&field_840) eastl::basic_string<char, BucketAllocatorEASTL>("", &local_38);
        field_864 = 2004318207;
        new (&field_872) eastl::fixed_vector<ComboField::Entry, 10ul, true, BucketAllocatorEASTL>();
        new (&field_1232) eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>();
        field_1264 = 65535;
        new (field_1266) Margin(255);
        new (field_1270) Margin(255);
        new (&field_1280)
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>();
        field_1320 = 65535;
        *(uint64_t*)&field_1322 = 0;
        *(uint64_t*)((long)&field_1328 + 2) = 0;
        *(uint64_t*)((long)&field_1336 + 1) = 0;
        new (field_1352) graphics::TextRun();
        field_1448 = 0;
        field_1456 = 0;
        field_1432 = 0;
        *(uint32_t*)((long)&field_1432 + 7) = 0;
        new (&field_1464) eastl::fixed_vector<unsigned short, 10ul>();
        field_1528 = interfaceManager;
        if (interfaceManager == nullptr) {
            LogAssert(
                "m_owningInterfaceManager",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                41, nullptr);
        }
        SetEnabled(true);
        this_00->SetTextHAlign(0);
        this_00->SetTextVAlign(1);
    }

    // 0x10068d980
    void ComboField::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7) {
        long* plVar1;
        bool bVar2;
        int iVar5;
        uint32_t uVar6;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar9;
        char* str;
        unsigned long uVar10;
        Logger* this_05;
        uint64_t in_register_00000089;
        int local_68[5];
        TextRun* local_50;
        int local_48[4];

        local_50 = (TextRun*)(((uint64_t)local_50._4_4_ << 32) |
                              (uint32_t)((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5)));
        char cVar3 = IsEnabled();
        if (!cVar3) {
            return;
        }
        m_dropdownMaxVisibleEntries = 5;
        FontManager* this_02 = *(FontManager**)(componentDependencies + 8);
        uint8_t* this_00 = field_568;
        int iVar4 = this_00->GetEndPosition();
        new (local_48) shared_ptr();
        auto this_03 = this_02->GetFont(iVar4, *local_48);
        cVar3 = shared_ptr::operator_cast_to_bool(this_03);
        if (!cVar3) {
            this_05 = logger::default_logger();
            uVar6 = this_00->GetEndPosition();
            this_05->Log(
                true, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                69, "Invalid font id - %d", uVar6);
            pbVar9 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)this_00->GetScreen();
            uVar10 = pbVar9->size();
            field_1432 = uVar10;
            return;
        }
        uint8_t* this_01 = field_1352;
        Layout* pLVar7 = (Layout*)(*this_03).operator->();
        auto psVar8 = pLVar7->SSOBeginPtr();
        this_01->SetFontMetrics(*psVar8);
        cVar3 = this_01->IsEmpty();
        if ((cVar3) && (field_1441 == '\0')) {
            cVar3 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)GetSelectedLabel())
                        ->empty();
            if (!cVar3) {
                pbVar9 =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)GetSelectedLabel();
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar10 = pbVar9->size();
                this_01->Set(str, uVar10);
                UpdateFilteredEntries(1);
            }
        }
        iVar4 = field_1328;
        if (iVar4 != 0) {
            iVar5 = 0;
            if (2 < iVar4 + 1U) {
                ScrollComboField(iVar4);
                iVar5 = (int)field_1328 / 2;
            }
            field_1328 = iVar5;
        }
        if (((arg4) && (field_1441 == '\0')) && (cVar3 = field_872.empty(), !cVar3)) {
            this_01->Clear();
            field_1441 = 1;
            field_1332 = 0.0;
            local_48->shared_from_this();
            plVar1 = *(long**)(componentDependencies + 48);
            local_68->shared_ptr<ComboField, void>(*local_48);
            (**(void (**)(...))(*plVar1 + 40))(plVar1, local_68);
            UpdateFilteredEntries(1);
            bVar2 = true;
            cVar3 = field_1441;
        } else {
            bVar2 = false;
            cVar3 = field_1441;
        }
        if (!cVar3) {
            return;
        }
        if ((!arg4) && ((char)local_50 == '\0')) {
            return;
        }
        field_1442 = 0;
        local_68[0] = arg3;
        local_50 = (TextRun*)this_01;
        local_48[0] = arg2;
        int local_34 = GetStreamCountLastMix();
        unsigned int local_38 = GetMinMapX();
        Margin local_7c = (Margin)field_424->GetVisualMargin();
        Margin local_54 = (Margin)field_1270->GetValidOr(&local_7c);
        local_54.ApplyTo(*local_48, *local_68, local_34, local_38);
        local_48[0] = (int)(*(float*)(componentDependencies + 60) - (float)local_48[0]);
        local_68[0] = (int)(*(float*)(componentDependencies + 64) - (float)local_68[0]);
        unsigned int uVar11 = (unsigned int)field_834;
        if (field_834 == 0) {
            uVar11 = local_38;
        }
        if (!bVar2 && arg4) {
            iVar4 = ((unsigned int)local_54 >> 16 & 255) + local_34;
            if ((((int)((iVar4 - uVar11) - (unsigned int)field_835) <= local_48[0]) &&
                 (local_48[0] < (int)(iVar4 - (unsigned int)field_835))) &&
                ((iVar4 = (int)(local_38 - uVar11) / 2,
                  iVar4 <= local_68[0] && (local_68[0] < (int)(iVar4 + uVar11))))) {
                CancelFocus();
                goto LAB_10068ddf9;
            }
        }
        if ((local_34 < local_48[0]) || ((int)local_38 < local_68[0])) {
            uVar10 = local_50->GetCodepointCount();
        } else {
            iVar4 = local_50->GetWidth();
            pLVar7 = (Layout*)(*this_03).operator->();
            psVar8 = (shared_ptr<graphics::FontMetrics>*)pLVar7->SSOBeginPtr();
            iVar5 = ((FontMetrics*)(*psVar8).operator->())->GetVerticalSpacing();
            cVar3 = this_00->GetTextHAlign();
            if (cVar3 == '\x02') {
                local_48[0] = local_48[0] + (local_34 - iVar4);
            } else if (cVar3 == '\x01') {
                local_48[0] = local_48[0] + (local_34 - iVar4) / 2;
            }
            cVar3 = this_00->GetTextVAlign();
            if (cVar3 == '\x02') {
                local_68[0] = local_68[0] + (local_38 - iVar5);
            } else if (cVar3 == '\x01') {
                local_68[0] = local_68[0] - (int)(local_38 - iVar5) / 2;
            }
            uVar10 = local_50->GetIndexAtPos(local_48[0], field_1324 + local_68[0]);
        }
        field_1432 = uVar10;
    LAB_10068ddf9:
        if (arg4) {
            field_1448 = field_1432;
        }
    }

    // 0x10068df00
    void ComboField::UpdateFilteredEntries(ComboField::FilterUpdateType filterUpdateType) {
        uint8_t* this_00;
        int iVar3;
        int iVar4;
        vector<oldscape::rseven::ModelFace>* pvVar5;
        unsigned short* puVar6;
        unsigned short* puVar7;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        long lVar11;
        unsigned int* puVar12;
        char* pcVar13;
        unsigned long uVar14;
        int* piVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;
        vector<ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*
            local_48;

        ComboField* local_40 = this;
        if (filterUpdateType == 1) {
            pvVar5 = (vector<oldscape::rseven::ModelFace>*)field_1352->GetMaterial();
            this_00 = &field_1464;
            this_00->clear();
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_872;
            uVar9 = pvVar17->size();
            local_48 =
                (vector<ComboField::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)this_00;
            this_00->reserve(uVar9);
            lVar11 = pvVar17->size();
            if (lVar11 != 0) {
                uVar9 = 0;
                local_50 = pvVar17;
                do {
                    pbVar8 = (basic_string<char,
                                           eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(*pvVar17)[uVar9];
                    uVar10 = pvVar5->size();
                    uVar14 = pbVar8->size();
                    if (uVar10 <= uVar14) {
                        lVar11 = pvVar5->size();
                        if (lVar11 != 0) {
                            uVar10 = 0;
                            do {
                                piVar15 = (int*)(*pvVar5)[uVar10];
                                iVar3 = *piVar15;
                                pcVar13 = (char*)(*pbVar8)[uVar10];
                                if (iVar3 != *pcVar13)
                                    goto LAB_10068e092;
                                uVar10 = uVar10 + 1;
                                uVar14 = pvVar5->size();
                            } while (uVar10 < uVar14);
                        }
                        local_48->push_back((unsigned short)uVar9);
                    }
                LAB_10068e092:
                    pvVar17 = local_50;
                    uVar9 = uVar9 + 1;
                    uVar10 = local_50->size();
                } while (uVar9 < uVar10);
            }
            local_40->field_1322 = 0;
            if (local_40->field_1441 == '\0') {
                return;
            }
            local_40->field_1322 = 0;
            local_40->field_1324 = 0;
            local_40->field_1328 = 0;
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_48;
        } else {
            if (filterUpdateType != 2) {
                return;
            }
            pvVar5 = (vector<oldscape::rseven::ModelFace>*)field_1352->GetMaterial();
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1464;
            puVar6 = (unsigned short*)pvVar17->HeapBeginPtr();
            puVar7 = (unsigned short*)pvVar17->end();
            if (puVar6 != puVar7) {
                local_48 =
                    (vector<ComboField::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&local_40
                        ->field_872;
                local_50 = pvVar17;
                do {
                    pbVar8 =
                        (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(*local_48)[(
                            unsigned long)*puVar6];
                    uVar9 = pvVar5->size();
                    uVar10 = pbVar8->size();
                    if (uVar10 < uVar9) {
                    LAB_10068df70:
                        *puVar6 = 65535;
                    } else {
                        lVar11 = pvVar5->size();
                        if (lVar11 != 0) {
                            uVar9 = 0;
                            do {
                                puVar12 = (unsigned int*)(*pvVar5)[uVar9];
                                iVar3 = (anonymous namespace)::SafeToLowerASCII(*puVar12);
                                pcVar13 = (char*)(*pbVar8)[uVar9];
                                iVar4 = (anonymous namespace)::SafeToLowerASCII((int)*pcVar13);
                                if (iVar3 != iVar4)
                                    goto LAB_10068df70;
                                uVar9 = uVar9 + 1;
                                uVar10 = pvVar5->size();
                            } while (uVar9 < uVar10);
                        }
                    }
                    pvVar17 = local_50;
                    puVar6 = puVar6 + 1;
                    puVar7 = (unsigned short*)local_50->end();
                } while (puVar6 != puVar7);
            }
            puVar6 = (unsigned short*)pvVar17->HeapBeginPtr();
            puVar7 = (unsigned short*)pvVar17->end();
            puVar6 = eastl::remove<unsigned short*, unsigned int>(puVar6, puVar7, 65535);
            puVar7 = (unsigned short*)pvVar17->end();
            pvVar17->erase(puVar6, puVar7);
            local_40->field_1322 = 0;
            if (local_40->field_1441 == '\0') {
                return;
            }
            local_40->field_1322 = 0;
            local_40->field_1324 = 0;
            local_40->field_1328 = 0;
        }
        ComboField* pCVar1 = local_40;
        bool cVar2 = pvVar17->empty();
        unsigned short uVar16 = 65535;
        if (!cVar2) {
            puVar6 = (unsigned short*)(*pvVar17)[0];
            uVar16 = *puVar6;
        }
        pCVar1->field_1320 = uVar16;
    }

    // 0x10068e200
    int ComboField::ScrollComboField(int arg1) {
        unsigned short uVar1;
        int iVar2;
        int iVar3;
        float fVar4;
        int local_34[3];

        if (arg1 == 0) {
            arg1 = 0;
        } else {
            uVar1 = GetNumVisibleEntries();
            iVar3 = (unsigned int)m_entryHeight * (unsigned int)uVar1;
            iVar2 = GetDropdownHeight();
            local_34[0] = iVar3 - iVar2;
            if (local_34[0] == 0 || iVar3 < iVar2) {
                field_1324 = 0;
                field_1322 = 0;
                arg1 = 0;
            } else {
                local_34[2] = field_1324 + arg1;
                if (local_34[2] < 0) {
                    field_1324 = 0;
                    field_1322 = 0;
                } else {
                    local_34[1] = 0;
                    iVar2 = math::Clamp<int>(*(local_34 + 2), *(local_34 + 1), *local_34);
                    local_34[2] = iVar2;
                    fVar4 = (float)::floor((float)iVar2 / (float)m_entryHeight);
                    field_1322 = (unsigned short)(int)fVar4;
                    field_1324 = iVar2;
                }
            }
        }
        return arg1;
    }

    // 0x10068e300
    void ComboField::CancelFocus() {
        unsigned short arg1;
        unsigned short* puVar2;
        unsigned short* puVar3;
        unsigned long uVar4;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_01;
        char* str;
        basic_string<char, BucketAllocatorEASTL> local_48;

        if (field_1441 != '\0') {
            field_1441 = 0;
            (**(void (**)(...))(*(long*)field_1528 + 48))();
            field_1320 = 65535;
            if (field_1456 != '\0') {
                local_48 = eastl::basic_string<char, BucketAllocatorEASTL>();
                field_1352->ConvertToUTF8(local_48);
                puVar2 = (unsigned short*)field_1464.HeapBeginPtr();
                puVar3 = (unsigned short*)field_1464.end();
                if (puVar2 != puVar3) {
                    do {
                        arg1 = *puVar2;
                        uVar4 = field_872.size();
                        if (uVar4 <= arg1) {
                            LogAssert("entryIndex < m_entries.size()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                      "components/ComboField.cpp",
                                      341, nullptr);
                        }
                        if (((basic_string<char, BucketAllocatorEASTL>*)field_872[(unsigned long)arg1])
                                ->compare(&local_48) == 0) {
                            SelectEntryByIndex(arg1, true);
                        }
                        puVar2 = puVar2 + 1;
                    } while (puVar2 != puVar3);
                }
                field_1456 = 0;
            }
            field_632.ClearInteractionState();
            this_01 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)GetSelectedLabel();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = this_01->size();
            field_1352->Set(str, uVar4);
        }
    }

    // 0x10068e4a0
    void ComboField::LogicFocus(const ComponentDependencies& componentDependencies, bool arg2) {
        uint8_t* this_00;
        uint8_t bVar2;
        uint8_t bVar3;
        uint16_t uVar5;
        unsigned short arg1;
        int iVar6;
        int arg5;
        int* piVar8;
        float fVar9;
        uint8_t local_70[16];
        uint8_t local_60[16];
        ComboField* local_50;
        ComponentDependencies* local_48;
        int local_3c;
        unsigned int local_38;
        float local_34;

        if (field_1441 == '\0') {
            LogAssert(
                "m_hasFocus",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                225, nullptr);
        }
        if (ScrollbarNeeded() != '\0') {
            uVar5 = GetNumVisibleEntries();
            local_34 = (float)(((uint32_t)local_34._2_2_ << 16) | (uint16_t)uVar5);
            local_50 = this;
            GetDropdownAreaBounds((Margin*)local_60, this);
            iVar6 = local_60->Right();
            this_00 = &field_632;
            bVar2 = this_00->GetSize();
            local_48 = componentDependencies + 56;
            piVar8 = (int*)local_60->y();
            local_3c = *piVar8;
            bVar3 = this_00->GetSize();
            local_38 = (unsigned int)bVar3;
            arg5 = GetDropdownHeight();
            GetDropdownAreaBounds((Margin*)local_70, this);
            if (this_00->ProcessInput<ComboField::LogicFocus(ComponentDependencies const&, bool)::__26&>(
                    local_48, iVar6 - (unsigned int)bVar2, local_3c, local_38, arg5, local_70, field_1324,
                    ((unsigned int)local_34 & 65535) * (unsigned int)m_entryHeight, (unsigned int)m_entryHeight,
                    &local_50)) {
                return;
            }
        }
        if (field_1320 != 65535) {
            iVar6 = ScrollComboFieldWithScaling(*(int*)(componentDependencies + 68));
            field_1328 = field_1328 + iVar6;
        }
        local_60._0_4_ = ((field_424 + 96))->GetVisualMargin();
        unsigned int uVar7 = field_1266->GetValidOr(local_60);
        local_34 = *(float*)(componentDependencies + 60) - ((float)(uVar7 & 255) + (float)field_1336);
        if ((((0.0 < local_34) && (iVar6 = GetStreamCountLastMix(), local_34 < (float)iVar6)) &&
             (local_34 = *(float*)(componentDependencies + 64) - ((float)(uVar7 >> 8 & 255) + (float)(int)field_1340),
              0.0 < local_34)) &&
            (iVar6 = GetDropdownHeight(), local_34 < (float)(int)(iVar6 - (uVar7 >> 24)))) {
            fVar9 = (float)::floor((local_34 + (float)field_1324) / (float)m_entryHeight);
            arg1 = ConvertVisibleIndex((unsigned short)(int)fVar9);
            field_1320 = arg1;
            if (componentDependencies[56] != (ComponentDependencies)0) {
                SelectEntryByIndex(arg1, true);
                field_1456 = 0;
                CancelFocus();
            }
        }
    }

    // 0x10068e7a0
    auto ComboField::GetDropdownAreaBounds() const {
        Margin local_38 = (Margin)((field_424 + 96))->GetVisualMargin();
        Margin local_34 = (Margin)field_1266->GetValidOr(&local_38);
        uint8_t bVar8 = local_34.field_0;
        int iVar1 = field_1336;
        unsigned int uVar3 = (unsigned int)local_34 >> 8;
        unsigned int uVar2 = field_1340;
        int iVar6 = GetTextAreaWidth();
        uint8_t bVar4 = local_34.GetWidth();
        int iVar7 = GetDropdownHeight();
        uint8_t bVar5 = local_34.GetHeight();
        return auto((unsigned int)bVar8 + iVar1, (uVar3 & 255) + uVar2, iVar6 - (unsigned int)bVar4,
                    iVar7 - (unsigned int)bVar5);
    }

    // 0x10068e900
    uint64_t ComboField::ScrollComboFieldWithScaling(int arg1) {
        if (arg1 == 0) {
            return 0;
        }
        return ScrollComboField((int)((float)arg1 * 0.25 * (float)m_entryHeight));
    }

    // 0x10068e940
    unsigned short ComboField::ConvertVisibleIndex(unsigned short arg1) const {
        unsigned long arg1_00;
        unsigned long uVar2;
        unsigned short* puVar3;

        if (field_1352->IsEmpty() == '\0') {
            uVar2 = field_1464.size();
            arg1_00 = (unsigned long)arg1;
            arg1 = 65535;
            if (arg1_00 < uVar2) {
                puVar3 = &field_1464[arg1_00];
                arg1 = *puVar3;
            }
        }
        return arg1;
    }

    // 0x10068e9a0
    void ComboField::SelectEntryByIndex(unsigned short arg1, bool arg2) {
        bool cVar1;
        int local_30[2];

        if (field_1264 != arg1) {
            cVar1 = FlushSelectEvents();
            if ((!cVar1) && (arg2)) {
                cVar1 = HasValidSelection();
                if (cVar1) {
                    local_30[0] = GetSelectedValue();
                    local_30[1] = 0;
                    field_1280.emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(*local_30,
                                                                                                    *((local_30 + 1)));
                }
            }
            field_1264 = arg1;
            if (arg2) {
                cVar1 = HasValidSelection();
                if (cVar1) {
                    local_30[0] = GetSelectedValue();
                    local_30[1] = 1;
                    field_1280.emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(*local_30,
                                                                                                    *((local_30 + 1)));
                }
            }
        }
    }

    // 0x10068eb10
    bool ComboField::ShouldBlockInput(int arg1, int arg2) const {
        unsigned int uVar1;
        unsigned int uVar2;
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar6;
        float local_38;
        int local_34;

        int iVar5 = field_1336;
        if (iVar5 <= arg1) {
            iVar4 = GetTextAreaWidth();
            bVar3 = ((Margin)((field_424 + 96))->GetVisualMargin()).GetWidth();
            if (arg1 < (int)((unsigned int)bVar3 + iVar4 + iVar5)) {
                uVar1 = field_1340;
                iVar5 = GetMinMapX();
                iVar4 = GetMinMapX();
                uVar2 = field_1340;
                local_38 = field_1332;
                local_34 = GetDropdownHeight();
                uVar6 = ((Margin)((field_424 + 96))->GetVisualMargin()).GetHeight();
                if ((arg2 < (int)field_1340) ||
                    ((int)((uVar6 & 255) + uVar2 + (int)(local_38 * (float)local_34)) <= arg2)) {
                    iVar5 = uVar1 - iVar5;
                    return arg2 < iVar4 + iVar5 - 2 && iVar5 - 2 <= arg2;
                }
                return true;
            }
        }
        return false;
    }

    // 0x10068ec20: ComboField::GetTextAreaWidth() const has the same machine code as ComboField::GetDropdownWidth() const

    // 0x10068ec70
    uint64_t ComboField::ProcessSwipeMovement(const math::Vector2T<int>& vector21, const math::Vector2T<int>& vector22,
                                              float arg3) {
        return 0;
    }

    // 0x10068ec80
    void ComboField::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        unsigned int uVar1;
        uint8_t bVar3;
        int iVar4;
        int iVar5;
        ScaleManager* this_00;

        if (GetAlpha() != '\0') {
            if ((field_1441 != '\0') && (field_1332 < 1.0)) {
                field_1332 = (float)eastl::min<float>(
                    (arg4 * 6.6666665f) / *(float*)PTR_m_dropdownExpandTimeMultiplier_100ee63f0 + field_1332, 1.0);
            }
            DrawInputBox(*(RT7Core**)(componentDependencies + 16), *(FontManager**)(componentDependencies + 8),
                         *(FontHelpers**)componentDependencies, arg2, arg3);
            field_1336 = arg2;
            iVar4 = GetMinMapX();
            field_1340 = iVar4 + arg3 + 2;
            this_00 = (*(RT7Core**)(componentDependencies + 16))->GetScaleManager();
            iVar4 = (*(RT7Core**)(componentDependencies + 16))->GetBackBufferHeight();
            iVar4 = this_00->ScreenToInterfaceSize(iVar4, false);
            uVar1 = field_1340;
            iVar5 = GetDropdownHeight();
            bVar3 = ((Margin)((field_424 + 96))->GetVisualMargin()).GetHeight();
            if (iVar4 < (int)((unsigned int)bVar3 + iVar5 + uVar1)) {
                iVar4 = GetDropdownHeight();
                bVar3 = ((Margin)((field_424 + 96))->GetVisualMargin()).GetHeight();
                field_1340 = (arg3 - ((unsigned int)bVar3 + iVar4)) - 2;
            }
        }
    }

    // 0x10068ede0
    void ComboField::DrawInputBox(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                  graphics::FontHelpers* fontHelpers, int arg4, int arg5) {
        uint8_t bVar2;
        int iVar4;
        int iVar5;
        unsigned int uVar6;
        unsigned int arg6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar10;
        MapArea* pMVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar12;
        Texture* pTVar13;
        SpriteAtlasReference* pSVar14;
        Logger* pLVar15;
        Margin local_88;
        SpriteData* local_78;
        int local_68;
        Texture* local_58;
        int local_50;
        int local_4c;
        shared_ptr* local_48;
        unsigned int local_3c;

        int local_38 = arg4;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        uint8_t* this_00 = field_424;
        SpriteAtlasManager* rect = spriteAtlasManager;
        auto puVar7 = this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false);
        if (puVar7 != DataStatus::READY) {
            return;
        }
        SpriteData* pSVar1 = (SpriteData*)(field_424 + 48);
        bool cVar3 = pSVar1->IsSpriteValid();
        if ((cVar3) && (puVar7 = (uint8_t*)pSVar1->LoadSpriteAtlasReference(*spriteAtlasManager, false),
                        rect = spriteAtlasManager, puVar7 != DataStatus::READY)) {
            return;
        }
        auto psVar8 = this_00->GetDefaultValue();
        auto psVar9 = pSVar1->GetDefaultValue();
        cVar3 = shared_ptr::operator_cast_to_bool(psVar8);
        if ((!cVar3) ||
            ((cVar3 = pSVar1->IsSpriteValid(), cVar3 && (cVar3 = shared_ptr::operator_cast_to_bool(psVar9), !cVar3)))) {
            pLVar15 = logger::default_logger();
            pLVar15->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                553, "Invalid sprite atlas reference!");
        } else {
            local_78 = pSVar1;
            local_48 = psVar9;
            local_4c = GetHeaderVisualState();
            pcVar10 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar8).operator->();
            psVar9 = (shared_ptr*)pcVar10->second();
            cVar3 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!cVar3) {
                pLVar15 = logger::default_logger();
                pLVar15->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                             "ComboField.cpp",
                             565, "Invalid header sprite atlas reference!");
            } else {
                pMVar11 = (MapArea*)(*psVar9).operator->();
                pvVar12 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar11->GetOrigin();
                pTVar13 = (Texture*)pvVar12->end();
                if (pTVar13 != nullptr) {
                    local_58 = pTVar13;
                    pSVar14 = (SpriteAtlasReference*)(*psVar8).operator->();
                    iVar4 = pSVar14->GetRenderMapping();
                    GetVisualUV(&local_88, (Rect<float>*)rect, iVar4 + 88);
                    local_68 = local_38;
                    iVar4 = GetStreamCountLastMix();
                    iVar5 = GetMinMapX();
                    uVar6 = GetRGBA();
                    this_00->DrawSpriteSlice(*rt7Core, local_68, arg5, iVar4, iVar5, uVar6, local_88, local_58, 0.0);
                }
            }
            if (cVar3) {
                local_50 = GetStreamCountLastMix();
                local_3c = GetMinMapX();
                iVar4 = local_38;
                local_88[0] = (Margin)this_00->GetVisualMargin();
                ((Margin)field_1270->GetValidOr(&local_88))
                    .ApplyTo(*((int*)(Rect<float>*)&local_38), arg5, local_50, local_3c);
                psVar8 = local_48;
                cVar3 = shared_ptr::operator_cast_to_bool(local_48);
                if (cVar3) {
                    pcVar10 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar8)
                                  .operator->();
                    psVar8 = (shared_ptr*)pcVar10->second();
                    cVar3 = shared_ptr::operator_cast_to_bool(psVar8);
                    if (!cVar3) {
                        pLVar15 = logger::default_logger();
                        pLVar15->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                     "components/ComboField.cpp",
                                     592, "Invalid button sprite atlas reference!");
                    } else {
                        pMVar11 = (MapArea*)(*psVar8).operator->();
                        pvVar12 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar11->GetOrigin();
                        pTVar13 = (Texture*)pvVar12->end();
                        if (pTVar13 != nullptr) {
                            local_58 = pTVar13;
                            pSVar14 = (SpriteAtlasReference*)(*local_48).operator->();
                            iVar5 = pSVar14->GetRenderMapping();
                            GetVisualUV(&local_88, (Rect<float>*)&local_38, iVar5 + 88);
                            pSVar1 = local_78;
                            bVar2 = field_834;
                            if (bVar2 == 0) {
                                uVar6 = local_3c;
                                iVar5 = arg5;
                            } else {
                                uVar6 = (unsigned int)bVar2;
                                iVar5 = arg5 + (int)(local_3c - bVar2) / 2;
                            }
                            local_48 = (shared_ptr*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar5);
                            iVar5 = GetStreamCountLastMix();
                            bVar2 = field_835;
                            arg6 = GetRGBA();
                            pSVar1->DrawSpriteSlice(*rt7Core, (iVar4 + iVar5) - (bVar2 + uVar6), (int)local_48, uVar6,
                                                    uVar6, arg6, local_88, local_58, 0.0);
                        }
                    }
                    if (!cVar3) {
                        return;
                    }
                }
                DrawInputBoxContents(rt7Core, fontManager, fontHelpers, local_38, arg5, local_50, local_3c);
            }
        }
    }

    // 0x10068f1b0
    void ComboField::DrawFocus(const ComponentDependencies& componentDependencies) {
        if (field_1441 == '\0') {
            LogAssert(
                "m_hasFocus",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                533, nullptr);
        }
        DrawEntries(*(RT7Core**)(componentDependencies + 16), *(FontManager**)(componentDependencies + 8),
                    *(FontHelpers**)componentDependencies, field_1336, field_1340);
    }

    // 0x10068f210
    void ComboField::DrawEntries(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                 graphics::FontHelpers* fontHelpers, int arg4, int arg5) {
        uint8_t* this_01;
        RT7Core* pRVar1;
        bool cVar2;
        uint8_t bVar3;
        bool arg8;
        unsigned short uVar4;
        unsigned short uVar5;
        uint16_t uVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        shared_ptr* psVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        long lVar13;
        uint16_t* puVar14;
        basic_string<char, BucketAllocatorEASTL>* str;
        Logger* this_08;
        int arg2;
        unsigned long uVar15;
        char* str2;
        ComboField* pCVar16;
        float fVar17;
        uint8_t local_108[40];
        TextProperties local_e0;
        shared_ptr* local_b8;
        TextRun* local_b0;
        vector<ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*
            local_a8;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true>>* local_a0;
        Margin local_94;
        FontHelpers* local_90;
        GUIManager* local_88;
        TextData* local_78;
        unsigned int local_6c;
        ComboField* local_68;
        int local_60;
        unsigned int local_5c;
        Texture* local_58;
        unsigned long local_50;
        char local_3d;
        unsigned int local_38;
        unsigned int local_34;

        SpriteData* this_00 = (SpriteData*)(field_424 + 96);
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            local_90 = fontHelpers;
            psVar12 = (shared_ptr*)this_00->GetDefaultValue();
            cVar2 = shared_ptr::operator_cast_to_bool(psVar12);
            if (!cVar2) {
                this_08 = logger::default_logger();
                str2 = "Invalid sprite atlas reference!";
                iVar7 = 765;
            } else {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar12)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                cVar2 = shared_ptr::operator_cast_to_bool(this_04);
                if (cVar2) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    local_58 = (Texture*)this_06->end();
                    pRVar1 = rt7Core;
                    new (local_108) graphics::ClippingState(rt7Core);
                    pRVar1->SetClippingRectToViewport();
                    local_38 = GetTextAreaWidth();
                    local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)field_1332);
                    local_68 = this;
                    iVar7 = GetDropdownHeight();
                    fVar17 = (float)local_50 * (float)iVar7;
                    local_e0.m_pFont._0_4_ = this_00->GetVisualMargin();
                    bVar3 = local_e0.GetHeight();
                    iVar7 = (unsigned int)bVar3 + (int)fVar17;
                    local_60 = iVar7;
                    if (local_58 != nullptr) {
                        local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)arg4);
                        local_78 = (TextData*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)(unsigned int)arg5);
                        local_34 = local_38;
                        uVar8 = local_68->GetRGBA();
                        uVar9 = this_00->GetSpriteRGBA();
                        uVar8 = math::Multiply(uVar8, uVar9);
                        lVar13 = ((SpriteAtlasReference*)(*psVar12).operator->())->GetRenderMapping();
                        this_00->DrawSpriteSlice(*rt7Core, (int)(float)local_50, (int)local_78, local_34, iVar7, uVar8,
                                                 *((lVar13 + 88)), local_58, 0.0);
                    }
                    pCVar16 = local_68;
                    local_78 = (TextData*)local_68->field_568;
                    iVar7 = local_78->GetEndPosition();
                    local_e0 = shared_ptr();
                    psVar12 = (shared_ptr*)fontManager->GetFont(iVar7, local_e0);
                    cVar2 = shared_ptr::operator_cast_to_bool(psVar12);
                    if (cVar2) {
                        local_e0.m_pFont._0_4_ = this_00->GetVisualMargin();
                        local_94 = (Margin)pCVar16->field_1266->GetValidOr(&local_e0);
                        local_b8 = psVar12;
                        local_94.ApplyTo(arg4, (unsigned int)arg5, local_38, local_60);
                        pRVar1 = rt7Core;
                        rt7Core->SetClippingRectangle(arg4, (unsigned int)arg5, local_38, local_60, true);
                        uVar8 = (unsigned int)arg5;
                        local_5c = local_60 + (unsigned int)arg5;
                        local_6c = pCVar16->GetRGBA();
                        cVar2 = ScrollbarNeeded(pCVar16);
                        local_88 = pRVar1->GetGUIManager();
                        local_3d = cVar2;
                        if (cVar2) {
                            fVar17 = (float)fmod((float)pCVar16->field_1324, (float)pCVar16->m_entryHeight);
                            uVar8 = uVar8 - (int)fVar17;
                        }
                        uVar5 = pCVar16->field_1322;
                        uVar15 = (unsigned long)uVar5;
                        uVar4 = GetNumVisibleEntries(pCVar16);
                        local_50 = uVar15;
                        if ((uVar5 < uVar4) && ((int)uVar8 < (int)local_5c)) {
                            local_b0 = (TextRun*)pCVar16->field_1352;
                            local_a0 =
                                (vector<unsigned short,
                                        eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true>>*)&pCVar16->field_1464;
                            local_a8 =
                                (vector<ComboField::Entry,
                                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                      BucketAllocatorEASTL>>*)&pCVar16->field_872;
                            do {
                                cVar2 = local_b0->IsEmpty();
                                if (!cVar2) {
                                    puVar14 = (uint16_t*)(*local_a0)[local_50];
                                    uVar6 = *puVar14;
                                } else {
                                    uVar6 = (uint16_t)local_50;
                                }
                                local_58 = (Texture*)(((uint64_t)local_58._2_6_ << 16) | (uint16_t)uVar6);
                                local_78->GetTextRGBA();
                                uVar9 = local_38;
                                iVar7 = arg4;
                                if ((pCVar16->field_1456 == '\0') &&
                                    ((unsigned short)local_58 == pCVar16->field_1264)) {
                                    local_34 = (unsigned int)pCVar16->m_entryHeight;
                                    if ((unsigned short)local_58 == pCVar16->field_1320) {
                                        uVar10 = math::Multiply(*(unsigned int*)&pCVar16->field_804, local_6c);
                                        local_88->AddColouredRectangle(iVar7, uVar8, uVar9, local_34, uVar10, 1);
                                    } else {
                                        uVar10 = math::Multiply(*(unsigned int*)&pCVar16->field_812, local_6c);
                                        local_88->AddColouredRectangle(iVar7, uVar8, uVar9, local_34, uVar10, 1);
                                    }
                                } else if ((unsigned short)local_58 == pCVar16->field_1320) {
                                    bVar3 = local_68->m_entryHeight;
                                    uVar10 = math::Multiply(*(unsigned int*)&local_68->field_804, local_6c);
                                    local_88->AddColouredRectangle(iVar7, uVar8, uVar9, (unsigned int)bVar3, uVar10, 1);
                                }
                                uVar9 = local_38;
                                iVar7 = *(int*)PTR_m_entryPadding_100ee63e8;
                                arg2 = arg4 + iVar7;
                                local_e0 = graphics::TextProperties(*local_b8);
                                pCVar16 = local_68;
                                local_34 = uVar8;
                                uVar10 = local_68->GetRGBA();
                                uVar8 = local_34;
                                local_78->PopulateTextProperties(local_e0, uVar10, pCVar16->field_100);
                                str = (basic_string<char, BucketAllocatorEASTL>*)(*local_a8)[(unsigned long)local_58 &
                                                                                             65535];
                                ((local_108 + 24))->StringView<eastl::fixed_string<char, 40>>(*str);
                                local_90->DrawStringMultiline((local_108 + 24), arg2, uVar8, uVar9 + iVar7 * -2,
                                                              (unsigned int)local_68->m_entryHeight, nullptr, local_e0);
                                pCVar16 = local_68;
                                bVar3 = local_68->m_entryHeight;
                                uVar15 = local_50 + 1;
                                uVar5 = GetNumVisibleEntries(local_68);
                                local_50 = uVar15;
                            } while ((uVar15 < uVar5) && (uVar8 = uVar8 + bVar3, (int)uVar8 < (int)local_5c));
                        }
                        if (local_3d != '\0') {
                            local_50 = (((uint64_t)local_50._1_7_ << 8) | (uint8_t)pCVar16->field_100);
                            local_58 = (Texture*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)pCVar16->field_1332);
                            uVar6 = GetNumVisibleEntries(pCVar16);
                            uVar8 = local_38;
                            local_5c = (((uint32_t)local_5c._2_2_ << 16) | (uint16_t)uVar6);
                            this_01 = &pCVar16->field_632;
                            local_90 = (FontHelpers*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)arg4);
                            uVar9 = this_01->GetSize();
                            local_68 = (ComboField*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)(unsigned int)arg5);
                            uVar10 = this_01->GetSize();
                            local_78 = (TextData*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)local_60);
                            local_34 = pCVar16->field_1324;
                            bVar3 = pCVar16->m_entryHeight;
                            arg8 = (bool)pCVar16->IsEnabled();
                            this_01->Draw(*rt7Core, (uVar8 + (int)local_90) - (uVar9 & 255), (int)local_68,
                                          uVar10 & 255, (int)local_78, local_34,
                                          (unsigned int)bVar3 * (local_5c & 65535), arg8,
                                          (unsigned char)(int)(local_58._0_4_ * (float)(uint8_t)local_50));
                        }
                    }
                    return;
                }
                this_08 = logger::default_logger();
                str2 = "Invalid sprite atlas!";
                iVar7 = 773;
            }
            this_08->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                iVar7, str2);
        }
    }

    // 0x10068f900
    uint8_t ComboField::GetHeaderVisualState() const {
        bool cVar1 = IsEnabled();
        uint8_t uVar2 = 3;
        if ((cVar1) && (uVar2 = 2, field_1441 == '\0')) {
            uVar2 = IsCurrentlyMouseOver();
        }
        return uVar2;
    }

    // 0x10068f940
    ComboField* ComboField::GetVisualUV(const math::Rect<float>& rect,
                                        ComboField::EntryVisualState entryVisualState) const {
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

    // 0x10068fa00
    void ComboField::DrawInputBoxContents(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                          graphics::FontHelpers* fontHelpers, int arg4, int arg5, int arg6, int arg7) {
        unsigned int uVar5;
        long lVar10;
        long lVar11;
        uint64_t uVar12;
        unsigned long arg2;
        uint32_t in_register_00000084;
        int arg1;
        int iVar14;
        StringView local_d8;
        TextRunSlice local_a0;
        unsigned long local_48;

        uint64_t local_80 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        uint8_t* this_00 = field_568;
        RT7Core* local_38 = rt7Core;
        int iVar2 = this_00->GetEndPosition();
        TextProperties local_c8;
        auto this_01 = fontManager->GetFont(iVar2, local_c8);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (!cVar1) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "ComboField.cpp",
                      634, "Invalid font!");
            return;
        }
        Layout* pLVar6 = (Layout*)(*this_01).operator->();
        auto psVar7 = pLVar6->SSOBeginPtr();
        FontMetrics* pFVar8 = (FontMetrics*)(*psVar7).operator->();
        local_c8.m_pFont._0_4_ = pFVar8->GetVerticalSpacing();
        auto piVar9 = std::min<int>(arg7, local_c8);
        int local_54 = *piVar9;
        iVar2 = *(int*)PTR_m_entryPadding_100ee63e8;
        unsigned long local_40 = (unsigned long)(unsigned int)((int)local_80 + iVar2);
        int local_4c = arg6 + iVar2 * -2;
        arg7 = arg7 + iVar2 * -2;
        TextRun* local_78 = (TextRun*)field_1352;
        int iVar3 = local_78->GetWidth();
        pLVar6 = (Layout*)(*this_01).operator->();
        psVar7 = (shared_ptr<graphics::FontMetrics>*)pLVar6->SSOBeginPtr();
        pFVar8 = (FontMetrics*)(*psVar7).operator->();
        uint32_t uVar4 = pFVar8->GetVerticalSpacing();
        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar4);
        auto local_60 = local_38->GetGUIManager();
        cVar1 = this_00->GetTextHAlign();
        if (cVar1 == '\x02') {
            uVar5 = ((int)local_40 + local_4c) - iVar3;
        } else {
            if (cVar1 != '\x01')
                goto LAB_10068fb7b;
            uVar5 = (int)local_40 + (local_4c - iVar3) / 2;
        }
        local_40 = (unsigned long)uVar5;
    LAB_10068fb7b:
        uVar5 = iVar2 + arg5;
        unsigned long uVar15 = (unsigned long)uVar5;
        local_38._0_4_ = (float)local_54;
        cVar1 = this_00->GetTextVAlign();
        if (cVar1 == '\x02') {
            uVar15 = (unsigned long)((uVar5 - (int)local_48) + arg7);
        } else if (cVar1 == '\x01') {
            uVar15 = (unsigned long)((arg7 - (int)local_48) / 2 + uVar5);
        }
        local_38 = (RT7Core*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(local_38._0_4_ * 0.9));
        unsigned int local_50 = *(unsigned int*)(field_568 + (unsigned long)field_1442 * 4 + 252);
        local_48 = uVar15;
        cVar1 = IsEnabled();
        if (!cVar1) {
            uVar5 = field_816;
        } else {
            uVar5 = GetRGBA();
        }
        local_38 = (RT7Core*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)local_38._0_4_));
        local_c8 = graphics::TextProperties(*this_01);
        this_00->PopulateTextProperties(local_c8, uVar5, field_100);
        TextRun* this_03 = local_78;
        cVar1 = local_78->IsEmpty();
        FontHelpers* pFVar13 = fontHelpers;
        iVar2 = (int)local_40;
        if (!cVar1) {
            if (field_1441 == '\0') {
                graphics::TextRun::operator_cast_to_TextRunSlice((ReturnValue*)&local_a0, this_03);
                iVar14 = arg7 + field_1324;
                iVar3 = (int)local_48;
            } else {
                if (field_1448 != field_1432) {
                    local_a0 = this_03->Slice(field_1448, field_1432);
                    lVar10 = local_a0.end();
                    iVar2 = *(int*)(lVar10 + 4);
                    lVar10 = local_a0.end();
                    iVar3 = *(int*)(lVar10 + 8);
                    lVar10 = local_a0.end();
                    lVar10 = lVar10 + 12;
                    lVar11 = local_a0.data();
                    if (lVar10 != lVar11) {
                        do {
                            if (*(int*)(lVar10 + 8) != iVar3) {
                                iVar3 = iVar3 + (int)local_48;
                                iVar14 = local_4c - iVar2;
                                iVar2 = iVar2 + (int)local_40;
                                uVar5 = GetRGBA();
                                uVar5 = math::Multiply(uVar5, field_828);
                                local_60->AddColouredRectangle(iVar2, iVar3, iVar14, local_54, uVar5, 1);
                                iVar2 = *(int*)(lVar10 + 4);
                                iVar3 = *(int*)(lVar10 + 8);
                            }
                            lVar10 = lVar10 + 12;
                            lVar11 = local_a0.data();
                        } while (lVar10 != lVar11);
                    }
                    lVar10 = local_a0.data();
                    if (iVar3 == *(int*)(lVar10 - 4)) {
                        iVar14 = local_a0.GetLastCursorPosition();
                        iVar3 = iVar3 + (int)local_48;
                        arg1 = iVar2 + (int)local_40;
                        uVar5 = GetRGBA();
                        uVar5 = math::Multiply(uVar5, field_828);
                        local_60->AddColouredRectangle(arg1, iVar3, iVar14 - iVar2, local_54, uVar5, 1);
                    }
                    this_03 = local_78;
                }
                pFVar13 = fontHelpers;
                iVar2 = (int)local_40;
                if (field_1432 == 0) {
                    iVar14 = (int)local_48;
                    iVar3 = iVar14;
                } else {
                    local_a0 = this_03->Slice(0, field_1432);
                    iVar3 = (int)local_48;
                    uVar12 = pFVar13->DrawTextRunSlice(local_a0, iVar2, iVar3, local_c8, -1);
                    iVar2 = (int)uVar12 + iVar2;
                    iVar14 = (int)((unsigned long)uVar12 >> 32) + iVar3;
                }
                local_60->AddColouredRectangle(iVar2, iVar14, 1, (int)local_38._0_4_, local_50, 1);
                uVar15 = field_1432;
                arg2 = this_03->GetCodepointCount();
                local_a0 = this_03->Slice(uVar15, arg2);
                iVar14 = arg7 + field_1324;
                iVar2 = (int)local_40;
                pFVar13 = fontHelpers;
            }
            pFVar13->DrawTextRunSlice(local_a0, iVar2, iVar3, local_c8, iVar14);
        } else if (field_1441 == '\0') {
            cVar1 = this_03->IsEmpty();
            if (cVar1) {
                cVar1 = field_840.empty();
                if (!cVar1) {
                    local_d8.StringView<eastl::fixed_string<char, 40>>(field_840);
                    pFVar13->DrawStringMultiline(&local_d8, (int)local_80, arg5, local_4c, arg7, nullptr, local_c8);
                }
            }
        } else {
            local_60->AddColouredRectangle(iVar2, (int)local_48, 1, (int)local_38._0_4_, local_50, 1);
        }
    }

    // 0x100690040
    unsigned long ComboField::HandleKeyInput(int arg1, int arg2, unsigned int arg3) {
        uint8_t* puVar1;
        bool cVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        short sVar5;
        unsigned long uVar6;
        unsigned short* puVar7;
        unsigned short* puVar8;
        long lVar9;
        unsigned long uVar10;
        int* piVar11;
        unsigned short uVar12;
        uint64_t unaff_R14;
        unsigned long uVar13;
        int local_3c;
        int local_38;
        int local_34;

        uint64_t uVar14 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        if ((arg1 == -1) && (field_1440 != '\0')) {
            field_1440 = 0;
            goto LAB_1006905a9;
        }
        field_1442 = 0;
        field_1456 = 1;
        switch (arg1) {
        case 0:
            if ((arg3 & 4) != 0) {
                field_1448 = 0;
                uVar6 = field_1352->GetCodepointCount();
                field_1432 = uVar6;
                goto LAB_100690516;
            }
            switch (arg1) {
            case 7:
                goto switchD_100690082_caseD_7;
            case 8:
                goto switchD_100690082_caseD_8;
            case 9:
                goto switchD_100690082_caseD_9;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
                break;
            case 36:
                goto switchD_100690082_caseD_24;
            case 51:
                goto switchD_100690082_caseD_33;
            default:
                if (arg1 == 63272)
                    goto switchD_1006900ed_caseD_f728;
            }
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 52:
            break;
        case 7:
        switchD_100690082_caseD_7:
            goto joined_r0x000100690244;
        case 8:
        switchD_100690082_caseD_8:
            if ((arg3 & 4) != 0) {
                CopySelection();
                goto LAB_100690516;
            }
            goto LAB_100690238;
        case 9:
        switchD_100690082_caseD_9:
            if ((arg3 & 4) != 0) {
                PasteFromClipboard();
                goto LAB_100690516;
            }
        LAB_100690238:
            if (arg1 == 7) {
            joined_r0x000100690244:
                if ((arg3 & 4) != 0) {
                    CopySelection();
                    uVar6 = field_1352->Remove(field_1448, field_1432);
                    field_1432 = uVar6;
                    field_1448 = uVar6;
                    field_1440 = 1;
                    UpdateFilteredEntries(1);
                LAB_1006905a9:
                    uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
                    goto LAB_1006905ac;
                }
            }
            if (arg1 == 36) {
            switchD_100690082_caseD_24:
                if (field_1320 != 65535) {
                    field_1456 = 0;
                    SelectEntryByIndex(field_1320, true);
                }
            switchD_100690082_caseD_35:
                CancelFocus();
                uVar13 = 0;
                goto LAB_1006905ac;
            }
            break;
        case 36:
            goto switchD_100690082_caseD_24;
        case 51:
        switchD_100690082_caseD_33:
            uVar6 = field_1432;
            if (field_1448 == uVar6) {
                if (uVar6 != 0) {
                    uVar6 = field_1352->Remove(uVar6 - 1);
                    goto LAB_1006904ce;
                }
            } else {
                uVar6 = field_1352->Remove(field_1448, uVar6);
            LAB_1006904ce:
                field_1432 = uVar6;
                UpdateFilteredEntries(1);
            }
            field_1448 = field_1432;
        LAB_100690516:
            field_1440 = 1;
            goto LAB_1006905a9;
        case 53:
            goto switchD_100690082_caseD_35;
        default:
            switch (arg1) {
            case 63232:
                puVar1 = &field_1464;
                cVar2 = puVar1->empty();
                uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
                if (cVar2)
                    goto LAB_1006905ac;
                uVar12 = field_1320;
                puVar7 = (unsigned short*)puVar1->HeapBeginPtr();
                if (uVar12 != 65535) {
                    puVar8 = (unsigned short*)puVar1->end();
                    puVar7 = eastl::find<unsigned short*, unsigned short>(puVar7, puVar8, field_1320);
                    puVar8 = (unsigned short*)puVar1->end();
                    if (puVar7 == puVar8) {
                        LogAssert("visibleIndexIt != m_visibleEntryIndices.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "ComboField.cpp",
                                  983, nullptr);
                    }
                    puVar8 = (unsigned short*)puVar1->HeapBeginPtr();
                    if (puVar7 == puVar8) {
                        puVar7 = (unsigned short*)puVar1->end();
                    }
                    puVar7 = puVar7 - 1;
                }
                field_1320 = *puVar7;
                cVar2 = ScrollbarNeeded();
                if (!cVar2)
                    goto LAB_1006905ac;
                lVar9 = puVar1->end();
                if (puVar7 == (unsigned short*)(lVar9 - 2)) {
                    sVar5 = puVar1->size();
                    bVar3 = GetDropdownMaxVisibleEntries();
                    field_1322 = sVar5 - (unsigned short)bVar3;
                    bVar4 = GetEntryHeight();
                    local_3c = (unsigned int)bVar4 * (unsigned int)(unsigned short)(sVar5 - (unsigned short)bVar3);
                    piVar11 = &local_3c;
                    goto LAB_1006905fc;
                }
                puVar8 = (unsigned short*)puVar1->HeapBeginPtr();
                lVar9 = eastl::distance<game::MapSquare::MapSquarePos*>(puVar8, puVar7);
                if ((long)(unsigned long)field_1322 <= lVar9)
                    goto LAB_1006905ac;
                uVar12 = field_1322 - 1;
                field_1322 = uVar12;
                bVar3 = GetEntryHeight();
                local_38 = (unsigned int)bVar3 * (unsigned int)uVar12;
                piVar11 = std::min<int>(field_1324, local_38);
                break;
            case 63233:
                puVar1 = &field_1464;
                cVar2 = puVar1->empty();
                uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
                if (cVar2)
                    goto LAB_1006905ac;
                uVar12 = field_1320;
                puVar7 = (unsigned short*)puVar1->HeapBeginPtr();
                if (uVar12 != 65535) {
                    puVar8 = (unsigned short*)puVar1->end();
                    puVar7 = eastl::find<unsigned short*, unsigned short>(puVar7, puVar8, field_1320);
                    puVar8 = (unsigned short*)puVar1->end();
                    if (puVar7 == puVar8) {
                        LogAssert("visibleIndexIt != m_visibleEntryIndices.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "ComboField.cpp",
                                  1030, nullptr);
                    }
                    puVar7 = puVar7 + 1;
                    puVar8 = (unsigned short*)puVar1->end();
                    if (puVar7 == puVar8) {
                        puVar7 = (unsigned short*)puVar1->HeapBeginPtr();
                    }
                }
                field_1320 = *puVar7;
                cVar2 = ScrollbarNeeded();
                if (!cVar2)
                    goto LAB_1006905ac;
                puVar8 = (unsigned short*)puVar1->HeapBeginPtr();
                if (puVar7 == puVar8) {
                    field_1322 = 0;
                    field_1324 = 0;
                    field_1328 = 0;
                    goto LAB_1006905ac;
                }
                puVar8 = (unsigned short*)puVar1->HeapBeginPtr();
                lVar9 = eastl::distance<game::MapSquare::MapSquarePos*>(puVar8, puVar7);
                uVar12 = field_1322;
                bVar3 = GetDropdownMaxVisibleEntries();
                if (lVar9 < (long)((unsigned long)bVar3 + (unsigned long)uVar12))
                    goto LAB_1006905ac;
                uVar12 = field_1322 + 1;
                field_1322 = uVar12;
                bVar3 = GetEntryHeight();
                local_34 = (unsigned int)bVar3 * (unsigned int)uVar12;
                piVar11 = &local_34;
            LAB_1006905fc:
                piVar11 = std::max<int>(field_1324, *piVar11);
                break;
            case 63234:
                uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
                if (field_1432 == 0)
                    goto LAB_1006905ac;
                uVar6 = field_1432 - 1;
                goto LAB_100690499;
            case 63235:
                uVar6 = field_1432;
                uVar10 = field_1352->GetCodepointCount();
                uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
                if (uVar10 <= uVar6)
                    goto LAB_1006905ac;
                uVar6 = field_1432 + 1;
            LAB_100690499:
                uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
                field_1432 = uVar6;
                if ((arg3 & 1) == 0) {
                    field_1448 = uVar6;
                }
                goto LAB_1006905ac;
            default:
                goto switchD_100690082_caseD_1;
            case 63272:
            switchD_1006900ed_caseD_f728:
                puVar1 = field_1352;
                if (field_1448 == field_1432) {
                    uVar6 = puVar1->GetCodepointCount();
                    if (field_1432 < uVar6) {
                        uVar6 = puVar1->Remove(field_1432);
                        goto LAB_100690584;
                    }
                } else {
                    uVar6 = puVar1->Remove(field_1448, field_1432);
                LAB_100690584:
                    field_1432 = uVar6;
                    UpdateFilteredEntries(1);
                }
                field_1448 = field_1432;
                goto LAB_1006905a9;
            }
            uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
            field_1324 = *piVar11;
            field_1328 = 0;
            goto LAB_1006905ac;
        }
    switchD_100690082_caseD_1:
        uVar13 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
        if (arg1 == -1) {
            AddCodepoint(arg2);
        }
    LAB_1006905ac:
        return uVar13 & 4294967295;
    }

    // 0x1006908b0
    void ComboField::CopySelection() {
        fixed_string<char, 512> local_250;
        TextRunSlice local_270 = field_1352->Slice(field_1448, field_1432);
        auto puVar1 = local_270.end();
        auto puVar2 = local_270.data();
        if (puVar1 != puVar2) {
            do {
                stringtools::UTF8Append<eastl::fixed_string<char, 24>>(*puVar1, local_250);
                puVar1 = puVar1 + 3;
            } while (puVar1 != puVar2);
        }
        local_270 = Clipboard();
        local_270.SetText<eastl::fixed_string<char, 512>>(local_250);
    }

    // 0x1006909d0
    void ComboField::PasteFromClipboard() {
        uint8_t* this_00;
        unsigned long uVar1;
        unsigned int arg1;
        int iVar3;
        int iVar4;
        ComboField* this_01;
        unsigned long uVar5;
        unsigned long uVar6;
        bool bVar7;
        unsigned long local_38;

        eastl::string local_58;
        new (&local_38) Clipboard();
        bool cVar2 = local_38.GetText(local_58);
        if (cVar2) {
            this_00 = field_1352;
            uVar6 = this_00->Remove(field_1448, field_1432);
            field_1432 = uVar6;
            uVar6 = 0;
            while (uVar5 = local_58.size(), uVar6 < uVar5) {
                local_38 = uVar6;
                this_01 = (ComboField*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar5 = local_58.size();
                arg1 = stringtools::GetUTF8NextChar(this_01, local_38, uVar5);
                cVar2 = IsCodepointAllowed(this_01, arg1);
                if (!cVar2)
                    break;
                uVar6 = local_38;
            }
            uVar5 =
                this_00->Insert((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), uVar6, field_1432, 0);
            while (true) {
                iVar3 = this_00->GetWidth();
                iVar4 = GetTextAreaWidth();
                if (iVar3 < iVar4)
                    break;
                uVar5 = uVar5 - 1;
                this_00->Remove(uVar5);
            }
            uVar1 = local_58.size();
            bVar7 = true;
            if (uVar1 <= uVar6) {
                bVar7 = field_1432 == uVar5;
            }
            field_1442 = bVar7;
            field_1432 = uVar5;
            field_1448 = uVar5;
            UpdateFilteredEntries(1);
        }
    }

    // 0x100690b70
    void ComboField::AddCodepoint(unsigned int arg1) {
        uint8_t* this_00;
        int iVar2;
        int iVar3;
        FilterUpdateType FVar6;
        ComboField* this_01;
        bool bVar7;

        unsigned long uVar5 = field_1432;
        unsigned long arg1_00 = field_1448;
        unsigned int local_34 = arg1;
        if (arg1_00 != uVar5) {
            this_01 = (ComboField*)field_1352;
            field_1432 = this_01->Remove(arg1_00, uVar5);
            FVar6 = 1;
        } else {
            FVar6 = 2;
            this_01 = this;
        }
        FilterUpdateType filterUpdateType = (FilterUpdateType)(arg1_00 != uVar5);
        if (IsCodepointAllowed(this_01, local_34) == '\0') {
            field_1442 = 1;
        } else {
            this_00 = field_1352;
            uVar5 = this_00->InsertCodepoints(&local_34, 1, field_1432, 100);
            while (true) {
                iVar2 = this_00->GetWidth();
                iVar3 = GetTextAreaWidth();
                if (iVar2 < iVar3)
                    break;
                uVar5 = uVar5 - 1;
                this_00->Remove(uVar5);
            }
            bVar7 = uVar5 == field_1432;
            field_1442 = bVar7;
            if (!bVar7) {
                field_1432 = uVar5;
                filterUpdateType = FVar6;
            }
        }
        field_1448 = field_1432;
        UpdateFilteredEntries(filterUpdateType);
    }

    // 0x100690ca0
    uint64_t ComboField::GetEntryIndexAtPos(int arg1, int arg2, const math::Vector2T<float>& vector2,
                                            unsigned short& arg4) const {
        unsigned short uVar2;
        unsigned int uVar3;
        int iVar4;
        float fVar5;
        Margin local_38;

        float local_34 = (float)arg1;
        if (field_1464.empty() == '\0') {
            local_38 = (Margin)((field_424 + 96))->GetVisualMargin();
            uVar3 = field_1266->GetValidOr(&local_38);
            local_34 = *(float*)vector2 - ((float)(uVar3 & 255) + (float)(int)local_34);
            if ((((0.0 < local_34) && (iVar4 = GetStreamCountLastMix(), local_34 < (float)iVar4)) &&
                 (local_34 = *(float*)(vector2 + 4) - ((float)(uVar3 >> 8 & 255) + (float)arg2), 0.0 < local_34)) &&
                (iVar4 = GetDropdownHeight(), local_34 < (float)iVar4)) {
                fVar5 = (float)::floor((local_34 + (float)field_1324) / (float)m_entryHeight);
                uVar2 = field_1464.size();
                if (((int)fVar5 & 65535U) <= (unsigned int)uVar2) {
                    arg4 = (unsigned short)(int)fVar5;
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100690e50
    bool ComboField::IsCodepointAllowed(unsigned int arg1) const {
        uint8_t bVar1 = graphics::FontHelpers::IsDrawableCodepoint(arg1);
        return (bVar1 | arg1 == 32) & arg1 != 10;
    }

    // 0x100691040
    void ComboField::SetMargin(Component::MarginType marginType, Margin margin) {
        Margin* pMVar1;

        if (marginType == 1) {
            pMVar1 = (Margin*)field_1270;
        } else {
            if (marginType != 0) {
                return;
            }
            pMVar1 = (Margin*)field_1266;
        }
        *pMVar1 = margin;
    }

    // 0x100691070
    Margin ComboField::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 1) {
            local_c.field_0 = field_1270[0];
            local_c.field_1 = field_1270[1];
            local_c.field_2 = field_1270[2];
            local_c.field_3 = field_1270[3];
        } else if (marginType == 0) {
            local_c.field_0 = field_1266[0];
            local_c.field_1 = field_1266[1];
            local_c.field_2 = field_1266[2];
            local_c.field_3 = field_1266[3];
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006910c0
    void ComboField::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        int arg1_00;
        uint8_t uVar3;
        unsigned short uVar6;
        uint32_t uVar8;
        long lVar11;
        Entry* entry1;
        uint8_t* puVar13;
        Logger* this_00;
        uint64_t uVar14;
        uint8_t auVar15[16];

        char cVar1 = arg1.g1();
        SetEnabled(cVar1 == '\x01');
        uint8_t bVar2 = arg1.g1();
        m_dropdownMaxVisibleEntries = bVar2;
        bVar2 = arg1.g1();
        m_entryHeight = bVar2;
        bVar2 = arg1.g1();
        field_834 = bVar2;
        bVar2 = arg1.g1();
        field_835 = bVar2;
        if (m_dropdownMaxVisibleEntries == 0) {
            LogAssert(
                "m_dropdownMaxVisibleEntries > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1462, nullptr);
        }
        if (m_entryHeight == 0) {
            LogAssert(
                "m_entryHeight > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1463, nullptr);
        }
        uint8_t* puVar12 = &field_872;
        unsigned short uVar4 = arg1.g2();
        puVar12->resize((unsigned long)uVar4);
        unsigned long uVar9 = puVar12->size();
        if (65533 < uVar9) {
            LogAssert(
                "m_entries.size() < MAX_ENTRY_COUNT",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1469, nullptr);
        }
        auto str = puVar12->HeapBeginPtr();
        auto pbVar10 = puVar12->end();
        for (; str != pbVar10; str = str + 32) {
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        }
        uVar4 = arg1.g2();
        if (puVar12->size() == uVar4) {
            if (puVar12->size() != 0) {
                uVar4 = 0;
                do {
                    uVar8 = arg1.g4s();
                    lVar11 = (*puVar12)[(unsigned long)uVar4];
                    *(uint32_t*)(lVar11 + 24) = uVar8;
                    uVar4 = uVar4 + 1;
                    uVar6 = puVar12->size();
                } while (uVar4 < uVar6);
            }
            uVar4 = arg1.g2();
            cVar1 = puVar12->empty();
            if (!cVar1) {
                uVar9 = puVar12->size();
                if (uVar9 <= uVar4) {
                    LogAssert("m_entries.size() > selectionIndex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComboField.cpp",
                              1495, nullptr);
                }
                lVar11 = (*puVar12)[(unsigned long)uVar4];
                arg1_00 = *(int*)(lVar11 + 24);
                entry1 = (Entry*)puVar12->HeapBeginPtr();
                auVar15 = puVar12->end();
                eastl::sort<ComboField::Entry*,
                            (PacketT<Array<unsigned char>>&)->DecodeTypedComponentProperties(int)::__27>(
                    entry1, auVar15._0_8_, auVar15._8_8_);
                BuildIndexMap();
                SelectEntry(arg1_00, false);
            }
            puVar12 = (uint8_t*)field_1266->SSOBeginPtr();
            puVar13 = (uint8_t*)field_1266->y();
            for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
                uVar3 = arg1.g1();
                *puVar12 = uVar3;
            }
            puVar12 = (uint8_t*)field_1270->SSOBeginPtr();
            puVar13 = (uint8_t*)field_1270->y();
            for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
                uVar3 = arg1.g1();
                *puVar12 = uVar3;
            }
            bVar2 = arg1.g1();
            field_100 = ~bVar2;
            uVar8 = arg1.g4();
            field_96 = uVar8;
            field_424->DecodeSpriteData(arg1, arg2);
            ((field_424 + 48))->DecodeSpriteData(arg1, arg2);
            ((field_424 + 96))->DecodeSpriteData(arg1, arg2);
            field_568->DecodeTextData(arg1, arg2);
            field_632.Decode(arg1, arg2);
        } else {
            this_00 = logger::default_logger();
            uVar14 = puVar12->size();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1480, "ComboField entry encoding mismatch - expected %u values but got %u", uVar14,
                (unsigned long)uVar4);
        }
    }

    // 0x1006914a0
    void ComboField::BuildIndexMap() {
        unsigned short uVar2;
        unsigned short uVar3;
        long lVar4;
        uint64_t local_40;

        field_1232.clear();
        uint8_t* this_00 = &field_872;
        unsigned short local_32 = 0;
        if (this_00->size() != 0) {
            do {
                lVar4 = (*this_00)[(unsigned long)local_32];
                local_40 = eastl::make_pair<int&, unsigned short&>(*((lVar4 + 24)), local_32);
                field_1232.insert<eastl::pair<int, unsigned short>, void>(local_40);
                uVar2 = local_32 + 1;
                local_32 = uVar2;
                uVar3 = this_00->size();
            } while (uVar2 < uVar3);
        }
    }

    // 0x100691550
    bool ComboField::SelectEntry(int arg1, bool arg2) {
        uint8_t extraout_AH;

        uint8_t uVar1 = GetEntryIndexById(arg1);
        if ((((uint16_t)extraout_AH << 8) | (uint8_t)uVar1) != -1) {
            SelectEntryByIndex((((uint16_t)extraout_AH << 8) | (uint8_t)uVar1), arg2);
        }
        return uVar1 != 65535;
    }

    // 0x100691590
    void ComboField::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 146, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 145, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(m_dropdownMaxVisibleEntries, 480, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(m_entryHeight, 479, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_834, 481, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_835, 482, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_804, 486, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_800, 483, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_812, 487, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_808, 484, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_816, 485, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_828, 488, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_820, 489, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_824, 490, true);
        field_1266->LoadFromStylesheet(565, styleSheet);
        field_1270->LoadFromStylesheet(559, styleSheet);
        field_568->LoadStyleSheetTextData(491, styleSheet);
        ((field_424 + 48))->LoadStyleSheetSpriteData(519, styleSheet);
        field_424->LoadStyleSheetSpriteData(499, styleSheet);
        ((field_424 + 96))->LoadStyleSheetSpriteData(509, styleSheet);
        uint8_t* this_00 = &field_632;
        auto pSVar1 = this_00->GetMaterial();
        pSVar1->LoadStyleSheetSpriteData(529, styleSheet);
        pSVar1 = (SpriteData*)this_00->GetCursorMutex();
        pSVar1->LoadStyleSheetSpriteData(549, styleSheet);
        pSVar1 = (SpriteData*)this_00->SSOBeginPtr();
        pSVar1->LoadStyleSheetSpriteData(539, styleSheet);
    }

    // 0x1006917d0
    uint64_t ComboField::GetEntryById(int arg1) const {
        uint64_t uVar2;

        unsigned short uVar1 = GetEntryIndexById(arg1);
        if (uVar1 == 65535) {
            uVar2 = 0;
        } else {
            uVar2 = field_872[(unsigned long)uVar1];
        }
        return uVar2;
    }

    // 0x100691810
    uint16_t ComboField::GetEntryIndexById(int arg1) const {
        uint16_t uVar1;

        long lVar2 = eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>::find(field_1232);
        long lVar3 = field_1232.end();
        if (lVar2 == lVar3) {
            uVar1 = 65535;
        } else {
            uVar1 = *(uint16_t*)(lVar2 + 4);
        }
        return uVar1;
    }

    // 0x1006918d0
    void ComboField::ClearSelection(bool arg1) {
        int local_20[2];

        bool cVar1 = FlushSelectEvents();
        if ((!cVar1) && (arg1)) {
            cVar1 = HasValidSelection();
            if (cVar1) {
                local_20[0] = GetSelectedValue();
                local_20[1] = 0;
                field_1280.emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(*local_20,
                                                                                                *((local_20 + 1)));
            }
        }
        field_1264 = 65535;
    }

    // 0x100691940
    uint32_t ComboField::FlushSelectEvents() {
        uint32_t uVar1;

        optional<game::option::EnumOptionToggle> local_20;
        uint8_t* this_00 = &field_1280;
        auto piVar2 = this_00->HeapBeginPtr();
        auto piVar3 = this_00->end();
        do {
            if (piVar2 == piVar3) {
            LAB_10069199d:
                this_00->clear();
                uVar1 = local_20.IsActive();
                if ((char)uVar1 != '\0') {
                    piVar2 = (int*)local_20.value();
                    this_00->emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(*piVar2, 0);
                }
                return uVar1;
            }
            if (piVar2[1] == 0) {
                local_20 = *piVar2;
                goto LAB_10069199d;
            }
            piVar2 = piVar2 + 2;
        } while (true);
    }

    // 0x100691ad0
    unsigned int ComboField::SetEntries(const UIDataMappingProvider<int, StringView>& uiDataMappingProvider) {
        uint8_t* this_00;
        Entry* pEVar4;
        Entry* entry2;
        vector<int>* arg1;
        __30* in_RCX;
        uint8_t auVar5[16];
        ComboField* local_a0;
        StringView local_98;

        unsigned int uVar3 = (**(void (**)(...))(*(long*)uiDataMappingProvider + 24))(uiDataMappingProvider);
        if ((char)uVar3 == '\0') {
            field_1264 = 65535;
            field_1280.clear();
            this_00 = &field_872;
            this_00->clear();
            field_1232.clear();
            local_a0 = this;
            fixedfunction::function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::__28, void>(
                (function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>*)&local_98, (__28*)&local_a0);
            (**(void (**)(...))(*(long*)uiDataMappingProvider + 16))(uiDataMappingProvider, &local_98);
            if (this_00->empty() == '\0') {
                pEVar4 = (Entry*)this_00->HeapBeginPtr();
                auVar5 = this_00->end();
                eastl::sort<ComboField::Entry*, (UIDataMappingProvider<int, StringView> const&)->SetEntries()::__29>(
                    pEVar4, auVar5._0_8_, auVar5._8_8_);
                (**(void (**)(...))(*(long*)uiDataMappingProvider + 48))(&local_98, uiDataMappingProvider);
                pEVar4 = (Entry*)this_00->HeapBeginPtr();
                entry2 = (Entry*)this_00->end();
                pEVar4 = eastl::find<ComboField::Entry*, StringView,
                                     (UIDataMappingProvider<int, StringView> const&)->SetEntries()::__30>(
                    pEVar4, entry2, &local_98, in_RCX);
                arg1 = (vector<int>*)this_00->HeapBeginPtr();
                field_1264 = eastl::distance<eastl::pair<int, PendingSpotAnimation>*>(arg1, pEVar4);
            }
        }
        return uVar3 ^ 1;
    }

    // 0x100691cf0
    unsigned int ComboField::AddEntry(const eastl::basic_string<char, BucketAllocatorEASTL>& str, int arg2) {
        uint8_t* this_00;
        unsigned short uVar1;
        Entry* pEVar5;
        Entry* entry2;
        vector<int>* arg1;
        long lVar6;
        __31* in_RCX;
        StringView local_70;
        Entry local_60;
        vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>* local_40;
        unsigned short local_32;

        unsigned int uVar4 = HasEntry(arg2);
        if ((char)uVar4 == '\0') {
            local_40 = (vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>*)&field_1232;
            if (local_40->empty() != '\0') {
                BuildIndexMap();
            }
            this_00 = &field_872;
            pEVar5 = (Entry*)this_00->HeapBeginPtr();
            entry2 = (Entry*)this_00->end();
            pEVar5 = eastl::lower_bound<ComboField::Entry*, eastl::basic_string<char, BucketAllocatorEASTL>,
                                        (eastl::basic_string<char, BucketAllocatorEASTL> const&)->AddEntry(int)::__31>(
                pEVar5, entry2, str, in_RCX);
            arg1 = (vector<int>*)this_00->HeapBeginPtr();
            lVar6 = eastl::distance<eastl::pair<int, PendingSpotAnimation>*>(arg1, pEVar5);
            uVar1 = field_1264;
            if (((unsigned long)uVar1 != 65535) && (lVar6 <= (long)(unsigned long)uVar1)) {
                field_1264 = uVar1 + 1;
            }
            local_70.StringView<eastl::fixed_string<char, 40>>(str);
            local_60 = Entry(&local_70, arg2);
            this_00->insert(pEVar5, local_60);
            local_32 = this_00->size() - 1;
            local_60.pair<int&, unsigned short&, void>(arg2, local_32);
            local_40->insert(local_60);
        }
        return uVar4 ^ 1;
    }

    // 0x100691fb0
    bool ComboField::RemoveEntry(int arg1) {
        uint8_t* this_00;
        long lVar3;

        unsigned short uVar2 = GetEntryIndexById(arg1);
        if (uVar2 != 65535) {
            this_00 = &field_872;
            lVar3 = this_00->HeapBeginPtr();
            this_00->erase((Entry*)((unsigned long)uVar2 * 32 + lVar3));
            eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL>::erase(field_1232);
            if (this_00->empty() == '\0') {
                if (uVar2 <= field_1264) {
                    field_1264 = field_1264 - 1;
                }
            } else {
                field_1264 = 65535;
                field_1280.clear();
            }
        }
        return uVar2 != 65535;
    }

    // 0x1006920f0
    void ComboField::ReserveEntries(unsigned long arg1) {
        field_872.reserve(arg1);
        field_1232.reserve(arg1);
    }

    // 0x1006921a0
    void ComboField::ClearEntries() {
        field_872.clear();
        field_1232.clear();
        field_1280.clear();
        field_1264 = 65535;
        CancelFocus();
        field_1322 = 0;
        field_1324 = 0;
        field_1328 = 0;
    }

    // 0x1006acf00: ComboField::GetValueRepresentation() has the same machine code as Button::GetValueRepresentation()

    // 0x1006c8710
    void ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26::operator()(const ScrollBar& scrollBar,
                                                                                      int arg2) const {
        ScrollComboField(field_0, (int)scrollBar - field_0->field_1324);
    }

} // namespace jag::ui

// 0x10068e990
void floor(float arg1) {
    _floorf();
}

// 0x10068ffd0
void fmod(float arg1, float arg2) {
    _fmodf();
}

namespace jag::ui {
    namespace {
        // 0x100690ec0
        unsigned int SafeToLowerASCII(unsigned int arg1) {
            unsigned int uVar1 = arg1 + 32;
            if (25 < arg1 - 65) {
                uVar1 = arg1;
            }
            return uVar1;
        }

    } // namespace

} // namespace jag::ui
