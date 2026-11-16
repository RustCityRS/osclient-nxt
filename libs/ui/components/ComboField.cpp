// libs/ui/components/ComboField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ComboField.h"

namespace jag::ui {
    // 0x100f3e9bc, 4 bytes, __data
    float ComboField::m_dropdownExpandTimeMultiplier = 1.0f;

    // 0x100f3e9c0, 4 bytes, __data
    ComboField::m_entryPadding = 3;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ComboField::GetSwipeable() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    ComboField::IsKeyReceiver() const;

    // 0x100131800: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    ComboField::Entry::~Entry();

    // 0x1001319d0: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    ComboField::Entry::~Entry();

    // 0x100269ac0: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::AddMember::GetID() const, which has identical code
    ComboField::GetType() const;

    // 0x10068d4f0, 784 bytes, base-object constructor, placed by class name
    // ComboField::ComboField(InterfaceManager*)
    void ComboField::ComboField(InterfaceManager* param_1) {
        undefined1* this_00;
        NpcUID* extraout_RDX;
        eastl local_38[8];

        new (this) Component();
        new (&m_pValueRepresentation) ComponentMultiValueMixin();
        new (&field_400) FocusComponent();
        new (this) MakeSharedPool<ComboField, 16>();
        new (&field_408) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__ComboField_100f0e988;
        m_pValueRepresentation = &PTR__ComboField_100f0eaf0;
        field_400 = &PTR__ComboField_100f0eb28;
        new (field_424) SpriteData();
        new ((field_424 + 48)) SpriteData();
        new ((field_424 + 96)) SpriteData();
        this_00 = field_568;
        new (this_00) TextData();
        new (&field_632) ScrollBar();
        new (&field_800) InteractionVisualData();
        m_entryHeight = 10;
        m_dropdownMaxVisibleEntries = 4;
        field_834 = 0;
        field_835 = 0;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX);
        new (&field_840, (BucketAllocatorEASTL*)"") eastl::basic_string<char, BucketAllocatorEASTL>();
        field_864 = 2004318207;
        new (&field_872) eastl::fixed_vector<ComboField::Entry, 10ul, true, BucketAllocatorEASTL>();
        new (&field_1232) eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                            eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>();
        field_1264 = 65535;
        new (&field_1266, 255) Margin();
        new (&field_1270, 255) Margin();
        eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false,
                            eastl::dummy_allocator>::fixed_vector();
        field_1320 = 65535;
        *(undefined8*)&field_1322 = 0;
        *(undefined8*)((long)&field_1328 + 2) = 0;
        *(undefined8*)((long)&field_1336 + 1) = 0;
        new (field_1352) graphics::TextRun();
        field_1448 = 0;
        field_1456 = 0;
        field_1432 = 0;
        *(undefined4*)((long)&field_1432 + 7) = 0;
        new (&field_1464) eastl::fixed_vector<unsigned short, 10ul, true, eastl::allocator>();
        field_1528 = param_1;
        if (param_1 == (InterfaceManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_owningInterfaceManager",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                41, (char*)0);
        }
        SetEnabled(this, true);
        this_00->SetTextHAlign(0);
        this_00->SetTextVAlign(1);
    }

    // 0x10068d970, 16 bytes, complete-object constructor, placed by class name
    // ComboField::ComboField(InterfaceManager*): jumps straight to the base-object constructor

    // 0x10068d980, 1232 bytes, placed by class name
    // ComboField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void ComboField::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                               bool param_6, bool param_7) {
        undefined1* this_00;
        undefined1* this_01;
        FontManager* this_02;
        long* plVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        int iVar5;
        undefined4 uVar6;
        shared_ptr* this_03;
        Layout* pLVar7;
        shared_ptr* psVar8;
        char* pcVar9;
        ulong uVar10;
        undefined8 uVar11;
        vector* this_04;
        FontMetrics* this_05;
        int iVar12;
        type* ptVar13;
        undefined7 in_register_00000089;
        Margin local_7c;
        int local_68[5];
        Margin local_54;
        TextRun* local_50;
        shared_ptr local_48;
        uint local_38;
        int local_34;

        local_50 = (TextRun*)CONCAT44(local_50._4_4_, (int)CONCAT71(in_register_00000089, param_5));
        cVar2 = IsEnabled();
        if (cVar2 == '\0') {
            return;
        }
        m_dropdownMaxVisibleEntries = 5;
        this_02 = *(FontManager**)(param_1 + 8);
        this_00 = field_568;
        uVar4 = this_00->GetEndPosition();
        ptVar13 = (type*)(ulong)uVar4;
        new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_03 = (shared_ptr*)this_02->GetFont(uVar4, &local_48);
        local_48.~shared_ptr();
        bVar3 = shared_ptr::operator_cast_to_bool(this_03);
        if (!bVar3) {
            uVar11 = logger::default_logger();
            uVar6 = this_00->GetEndPosition();
            logger::Logger::Log(
                uVar11, 1, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                69, "Invalid font id - %d", uVar6);
            this_00->GetScreen();
            uVar10 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            field_1432 = uVar10;
            return;
        }
        this_01 = field_1352;
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_03);
        psVar8 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar13);
        this_01->SetFontMetrics(psVar8);
        cVar2 = this_01->IsEmpty();
        if ((cVar2 != '\0') && (field_1441 == '\0')) {
            GetSelectedLabel(this);
            cVar2 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar2 == '\0') {
                GetSelectedLabel(this);
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar10 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                this_01->Set(pcVar9, uVar10);
                UpdateFilteredEntries(this, 1);
            }
        }
        iVar12 = field_1328;
        if (iVar12 != 0) {
            iVar5 = 0;
            if (2 < iVar12 + 1U) {
                ScrollComboField(this, iVar12);
                iVar5 = (int)field_1328 / 2;
            }
            field_1328 = iVar5;
        }
        if (((param_4) && (field_1441 == '\0')) && (cVar2 = (&field_872)->empty(), cVar2 == '\0')) {
            graphics::TextRun::Clear();
            field_1441 = 1;
            field_1332 = 0.0;
            local_48.shared_from_this();
            plVar1 = *(long**)(param_1 + 48);
            shared_ptr<FocusComponent>::shared_ptr<ComboField, void>((shared_ptr<FocusComponent>*)local_68, &local_48);
            (**(code**)(*plVar1 + 40))(plVar1, local_68);
            local_68->~shared_ptr();
            UpdateFilteredEntries(this, 1);
            local_48.~shared_ptr();
            bVar3 = true;
            cVar2 = field_1441;
        } else {
            bVar3 = false;
            cVar2 = field_1441;
        }
        if (cVar2 == '\0') {
            return;
        }
        if ((!param_4) && ((char)local_50 == '\0')) {
            return;
        }
        field_1442 = 0;
        local_68[0] = param_3;
        local_50 = (TextRun*)this_01;
        local_48._0_4_ = param_2;
        local_34 = GetStreamCountLastMix();
        local_38 = GetMinMapX();
        local_7c = (Margin)field_424->GetVisualMargin();
        local_54 = (Margin)(&field_1270, &local_7c)->GetValidOr();
        local_54.ApplyTo((int*)&local_48, local_68, &local_34, (int*)&local_38);
        local_48._0_4_ = (BADTYPE)(*(float*)(param_1 + 60) - (float)(int)local_48._0_4_);
        local_68[0] = (int)(*(float*)(param_1 + 64) - (float)local_68[0]);
        ptVar13 = (type*)(ulong)field_834;
        if (field_834 == 0) {
            ptVar13 = (type*)(ulong)local_38;
        }
        if (!bVar3 && param_4) {
            iVar12 = ((uint)local_54 >> 16 & 255) + local_34;
            iVar5 = (int)ptVar13;
            if ((((int)((iVar12 - iVar5) - (uint)field_835) <= (int)local_48._0_4_) &&
                 ((int)local_48._0_4_ < (int)(iVar12 - (uint)field_835))) &&
                ((iVar12 = (int)(local_38 - iVar5) / 2, iVar12 <= local_68[0] && (local_68[0] < iVar12 + iVar5)))) {
                CancelFocus(this);
                goto LAB_10068ddf9;
            }
        }
        if ((local_34 < (int)local_48._0_4_) || ((int)local_38 < local_68[0])) {
            uVar10 = local_50->GetCodepointCount();
        } else {
            iVar12 = local_50->GetWidth();
            pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_03);
            this_04 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar13);
            this_05 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                (shared_ptr<graphics::FontMetrics>*)this_04);
            iVar5 = this_05->GetVerticalSpacing();
            cVar2 = this_00->GetTextHAlign();
            if (cVar2 == '\x02') {
                local_48._0_4_ = local_48._0_4_ + (local_34 - iVar12);
            } else if (cVar2 == '\x01') {
                local_48._0_4_ = local_48._0_4_ + (local_34 - iVar12) / 2;
            }
            cVar2 = this_00->GetTextVAlign();
            if (cVar2 == '\x02') {
                local_68[0] = local_68[0] + (local_38 - iVar5);
            } else if (cVar2 == '\x01') {
                local_68[0] = local_68[0] - (int)(local_38 - iVar5) / 2;
            }
            uVar10 = local_50->GetIndexAtPos(local_48._0_4_, field_1324 + local_68[0]);
        }
        field_1432 = uVar10;
    LAB_10068ddf9:
        if (param_4) {
            field_1448 = field_1432;
        }
    }

    // 0x10068df00, 768 bytes, placed by class name
    // ComboField::UpdateFilteredEntries(ComboField::FilterUpdateType)
    void ComboField::UpdateFilteredEntries(int param_2) {
        ComboField* pCVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        vector<oldscape::rseven::ModelFace, eastl::allocator>* pvVar5;
        ushort* puVar6;
        ushort* puVar7;
        basic_string<char, BucketAllocatorEASTL>* pbVar8;
        ulong uVar9;
        ulong uVar10;
        long lVar11;
        uint* puVar12;
        char* pcVar13;
        ulong uVar14;
        int* piVar15;
        ushort uVar16;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        uint local_54;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;
        vector<ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*
            local_48;
        ComboField* local_40;
        ushort local_32;

        local_40 = this;
        if (param_2 == 1) {
            pvVar5 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)field_1352->GetMaterial();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_872;
            uVar9 = pvVar17->size();
            local_48 =
                (vector<ComboField::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_1464;
            (&field_1464, uVar9)->reserve();
            lVar11 = pvVar17->size();
            if (lVar11 != 0) {
                uVar9 = 0;
                local_50 = pvVar17;
                do {
                    pbVar8 = (basic_string<char, BucketAllocatorEASTL>*)
                        eastl::vector<ComboField::Entry,
                                      eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](
                            (vector<ComboField::Entry,
                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                pvVar17,
                            uVar9);
                    uVar10 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(pvVar5);
                    uVar14 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (uVar10 <= uVar14) {
                        lVar11 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(pvVar5);
                        if (lVar11 != 0) {
                            uVar10 = 0;
                            do {
                                piVar15 =
                                    (int*)eastl::vector<graphics::TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                        (vector<graphics::TextRunCharacter, BucketAllocatorEASTL>*)pvVar5, uVar10);
                                iVar3 = *piVar15;
                                pcVar13 =
                                    (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](pbVar8, uVar10);
                                if (iVar3 != *pcVar13)
                                    goto LAB_10068e092;
                                uVar10 = uVar10 + 1;
                                uVar14 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(pvVar5);
                            } while (uVar10 < uVar14);
                        }
                        local_32 = (ushort)uVar9;
                        local_48->push_back(&local_32);
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
            if (param_2 != 2) {
                return;
            }
            pvVar5 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)field_1352->GetMaterial();
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1464;
            puVar6 = (ushort*)pvVar17->HeapBeginPtr();
            puVar7 = (ushort*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
            if (puVar6 != puVar7) {
                local_48 =
                    (vector<ComboField::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&local_40
                        ->field_872;
                local_50 = pvVar17;
                do {
                    pbVar8 = (basic_string<char, BucketAllocatorEASTL>*)
                        eastl::vector<ComboField::Entry,
                                      eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](local_48, (ulong)*puVar6);
                    uVar9 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(pvVar5);
                    uVar10 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (uVar10 < uVar9) {
                    LAB_10068df70:
                        *puVar6 = 65535;
                    } else {
                        lVar11 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(pvVar5);
                        if (lVar11 != 0) {
                            uVar9 = 0;
                            do {
                                puVar12 =
                                    (uint*)eastl::vector<graphics::TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                        (vector<graphics::TextRunCharacter, BucketAllocatorEASTL>*)pvVar5, uVar9);
                                iVar3 = (anonymous namespace)::SafeToLowerASCII(*puVar12);
                                pcVar13 =
                                    (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](pbVar8, uVar9);
                                iVar4 = (anonymous namespace)::SafeToLowerASCII((int)*pcVar13);
                                if (iVar3 != iVar4)
                                    goto LAB_10068df70;
                                uVar9 = uVar9 + 1;
                                uVar10 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(pvVar5);
                            } while (uVar9 < uVar10);
                        }
                    }
                    pvVar17 = local_50;
                    puVar6 = puVar6 + 1;
                    puVar7 =
                        (ushort*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_50);
                } while (puVar6 != puVar7);
            }
            puVar6 = (ushort*)pvVar17->HeapBeginPtr();
            puVar7 = (ushort*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
            local_54 = 65535;
            puVar6 = eastl::remove<unsigned short*, unsigned int>(puVar6, puVar7, &local_54);
            puVar7 = (ushort*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
            pvVar17->erase(puVar6, puVar7);
            local_40->field_1322 = 0;
            if (local_40->field_1441 == '\0') {
                return;
            }
            local_40->field_1322 = 0;
            local_40->field_1324 = 0;
            local_40->field_1328 = 0;
        }
        pCVar1 = local_40;
        cVar2 = pvVar17->empty();
        uVar16 = 65535;
        if (cVar2 == '\0') {
            puVar6 = (ushort*)eastl::vector<
                unsigned short, eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true, eastl::allocator>>*)
                    pvVar17,
                0);
            uVar16 = *puVar6;
        }
        pCVar1->field_1320 = uVar16;
    }

    // 0x10068e200, 240 bytes, placed by class name
    // ComboField::ScrollComboField(int)
    int ComboField::ScrollComboField(int param_1) {
        ushort uVar1;
        int iVar2;
        int iVar3;
        float fVar4;
        int local_34[3];

        if (param_1 == 0) {
            param_1 = 0;
        } else {
            uVar1 = GetNumVisibleEntries(this);
            iVar3 = (uint)m_entryHeight * (uint)uVar1;
            iVar2 = GetDropdownHeight(this);
            local_34[0] = iVar3 - iVar2;
            if (local_34[0] == 0 || iVar3 < iVar2) {
                field_1324 = 0;
                field_1322 = 0;
                param_1 = 0;
            } else {
                local_34[2] = field_1324 + param_1;
                if (local_34[2] < 0) {
                    field_1324 = 0;
                    field_1322 = 0;
                } else {
                    local_34[1] = 0;
                    iVar2 = math::Clamp<int>(local_34 + 2, local_34 + 1, local_34);
                    local_34[2] = iVar2;
                    fVar4 = (float)floor((float)iVar2 / (float)m_entryHeight);
                    field_1322 = (ushort)(int)fVar4;
                    field_1324 = iVar2;
                }
            }
        }
        return param_1;
    }

    // 0x10068e300, 384 bytes, placed by class name
    // ComboField::CancelFocus()
    void ComboField::CancelFocus() {
        ushort uVar1;
        ushort* puVar3;
        ushort* puVar4;
        ulong uVar5;
        basic_string* pbVar6;
        char* pcVar7;
        basic_string local_48[24];

        if (field_1441 != '\0') {
            field_1441 = 0;
            (**(code**)(*(long*)field_1528 + 48))();
            field_1320 = 65535;
            if (field_1456 != '\0') {
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                (field_1352, local_48)->ConvertToUTF8();
                puVar3 = (ushort*)(&field_1464)->HeapBeginPtr();
                puVar4 = (ushort*)(&field_1464)->end();
                if (puVar3 != puVar4) {
                    do {
                        uVar1 = *puVar3;
                        uVar5 = (&field_872)->size();
                        if (uVar5 <= uVar1) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("entryIndex < m_entries.size()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                      "components/ComboField.cpp",
                                      341, (char*)0);
                        }
                        pbVar6 = (basic_string*)eastl::vector<
                            ComboField::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](
                            (vector<ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                     BucketAllocatorEASTL>>*)&field_872,
                            (ulong)uVar1);
                        if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar6) == 0) {
                            SelectEntryByIndex(this, uVar1, true);
                        }
                        puVar3 = puVar3 + 1;
                    } while (puVar3 != puVar4);
                }
                field_1456 = 0;
                local_48->~basic_string();
            }
            (&field_632)->ClearInteractionState();
            GetSelectedLabel(this);
            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            (field_1352, pcVar7, uVar5)->Set();
        }
    }

    // 0x10068e4a0, 640 bytes, placed by class name
    // ComboField::LogicFocus(ComponentDependencies const&, bool)
    void ComboField::LogicFocus(ComponentDependencies* param_1, bool param_2) {
        undefined1* this_00;
        byte bVar2;
        byte bVar3;
        bool bVar4;
        undefined2 uVar5;
        ushort uVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        int* piVar10;
        float fVar11;
        Rect local_70[16];
        Margin local_60[4];
        ComboField* local_50;
        ComponentDependencies* local_48;
        int local_3c;
        uint local_38;
        float local_34;

        if (field_1441 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_hasFocus",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                225, (char*)0);
        }
        if (ScrollbarNeeded(this) != '\0') {
            uVar5 = GetNumVisibleEntries(this);
            local_34 = (float)CONCAT22(local_34._2_2_, uVar5);
            local_50 = this;
            GetDropdownAreaBounds((ComboField*)local_60);
            iVar7 = local_60->Right();
            this_00 = &field_632;
            bVar2 = this_00->GetSize();
            local_48 = param_1 + 56;
            piVar10 = (int*)local_60->y();
            local_3c = *piVar10;
            bVar3 = this_00->GetSize();
            local_38 = (uint)bVar3;
            iVar8 = GetDropdownHeight(this);
            GetDropdownAreaBounds((ComboField*)local_70);
            bVar4 = ScrollBar::ProcessInput<ComboField::LogicFocus(ComponentDependencies_const&, bool)::__26&>(
                (ScrollBar*)this_00, (MouseState*)local_48, iVar7 - (uint)bVar2, local_3c, local_38, iVar8, local_70,
                field_1324, ((uint)local_34 & 65535) * (uint)m_entryHeight, (uint)m_entryHeight, (__26*)&local_50);
            if (bVar4) {
                return;
            }
        }
        if (field_1320 != 65535) {
            iVar7 = ScrollComboFieldWithScaling(this, *(int*)(param_1 + 68));
            field_1328 = field_1328 + iVar7;
        }
        local_60[0] = (Margin)((field_424 + 96))->GetVisualMargin();
        uVar9 = (&field_1266, local_60)->GetValidOr();
        local_34 = *(float*)(param_1 + 60) - ((float)(uVar9 & 255) + (float)field_1336);
        if ((((0.0 < local_34) && (iVar7 = GetStreamCountLastMix(), local_34 < (float)iVar7)) &&
             (local_34 = *(float*)(param_1 + 64) - ((float)(uVar9 >> 8 & 255) + (float)(int)field_1340),
              0.0 < local_34)) &&
            (iVar7 = GetDropdownHeight(this), local_34 < (float)(int)(iVar7 - (uVar9 >> 24)))) {
            fVar11 = (float)floor((local_34 + (float)field_1324) / (float)m_entryHeight);
            uVar6 = ConvertVisibleIndex(this, (ushort)(int)fVar11);
            field_1320 = uVar6;
            if (param_1[56] != (ComponentDependencies)0) {
                SelectEntryByIndex(this, uVar6, true);
                field_1456 = 0;
                CancelFocus(this);
            }
        }
    }

    // 0x10068e7a0, 192 bytes, placed by class name
    // ComboField::GetDropdownAreaBounds() const
    ComboField* ComboField::GetDropdownAreaBounds() {
        int iVar1;
        uint uVar2;
        uint uVar3;
        byte bVar4;
        byte bVar5;
        int iVar6;
        int iVar7;
        ComboField* in_RSI;
        byte bVar8;
        Margin local_38;
        Margin local_34;

        local_38 = (Margin)((in_RSI->field_424 + 96))->GetVisualMargin();
        local_34 = (Margin)(&in_RSI->field_1266, &local_38)->GetValidOr();
        bVar8 = local_34.field_0;
        iVar1 = in_RSI->field_1336;
        uVar3 = (uint)local_34 >> 8;
        uVar2 = in_RSI->field_1340;
        iVar6 = GetTextAreaWidth(in_RSI);
        bVar4 = local_34.GetWidth();
        iVar7 = GetDropdownHeight(in_RSI);
        bVar5 = local_34.GetHeight();
        new (this) oldscape::dash3d::GridRect((uint)bVar8 + iVar1, (uVar3 & 255) + uVar2, iVar6 - (uint)bVar4,
                                              iVar7 - (uint)bVar5);
        return this;
    }

    // 0x10068e900, 64 bytes, placed by class name
    // ComboField::ScrollComboFieldWithScaling(int)
    undefined8 ComboField::ScrollComboFieldWithScaling(int param_1) {
        if (param_1 == 0) {
            return 0;
        }
        return ScrollComboField(this, (int)((float)param_1 * 0.25 * (float)m_entryHeight));
    }

    // 0x10068e940, 80 bytes, placed by class name
    // ComboField::ConvertVisibleIndex(unsigned short) const
    ushort ComboField::ConvertVisibleIndex(ushort param_1) {
        ulong uVar1;
        ulong uVar3;
        ushort* puVar4;

        if (field_1352->IsEmpty() == '\0') {
            uVar3 = (&field_1464)->size();
            uVar1 = (ulong)param_1;
            param_1 = 65535;
            if (uVar1 < uVar3) {
                puVar4 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned short,
                            eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true, eastl::allocator>>*)&field_1464,
                    uVar1);
                param_1 = *puVar4;
            }
        }
        return param_1;
    }

    // 0x10068e9a0, 192 bytes, placed by class name
    // ComboField::SelectEntryByIndex(unsigned short, bool)
    void ComboField::SelectEntryByIndex(ushort param_1, bool param_2) {
        char cVar1;
        int local_30[2];

        if (field_1264 != param_1) {
            cVar1 = FlushSelectEvents(this);
            if ((cVar1 == '\0') && (param_2)) {
                cVar1 = HasValidSelection(this);
                if (cVar1 != '\0') {
                    local_30[0] = GetSelectedValue(this);
                    local_30[1] = 0;
                    eastl::vector<ComponentMultiValueMixin::ValueChangeEvent,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                        emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(
                            (vector<ComponentMultiValueMixin::ValueChangeEvent,
                                    eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false,
                                                                  eastl::dummy_allocator>>*)&field_1280,
                            local_30, (Type*)(local_30 + 1));
                }
            }
            field_1264 = param_1;
            if (param_2) {
                cVar1 = HasValidSelection(this);
                if (cVar1 != '\0') {
                    local_30[0] = GetSelectedValue(this);
                    local_30[1] = 1;
                    eastl::vector<ComponentMultiValueMixin::ValueChangeEvent,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                        emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(
                            (vector<ComponentMultiValueMixin::ValueChangeEvent,
                                    eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false,
                                                                  eastl::dummy_allocator>>*)&field_1280,
                            local_30, (Type*)(local_30 + 1));
                }
            }
        }
    }

    // 0x10068eb10, 272 bytes, placed by class name
    // ComboField::ShouldBlockInput(int, int) const
    bool ComboField::ShouldBlockInput(int param_1, int param_2) {
        uint uVar1;
        uint uVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        Margin local_44;
        Margin local_40;
        float local_38;
        int local_34;

        iVar5 = field_1336;
        if (iVar5 <= param_1) {
            iVar4 = GetTextAreaWidth(this);
            local_44 = (Margin)((field_424 + 96))->GetVisualMargin();
            bVar3 = local_44.GetWidth();
            if (param_1 < (int)((uint)bVar3 + iVar4 + iVar5)) {
                uVar1 = field_1340;
                iVar5 = GetMinMapX();
                iVar4 = GetMinMapX();
                uVar2 = field_1340;
                local_38 = field_1332;
                local_34 = GetDropdownHeight(this);
                local_40 = (Margin)((field_424 + 96))->GetVisualMargin();
                uVar6 = local_40.GetHeight();
                if ((param_2 < (int)field_1340) ||
                    ((int)((uVar6 & 255) + uVar2 + (int)(local_38 * (float)local_34)) <= param_2)) {
                    iVar5 = uVar1 - iVar5;
                    return param_2 < iVar4 + iVar5 + -2 && iVar5 + -2 <= param_2;
                }
                return true;
            }
        }
        return false;
    }

    // 0x10068ec20: the linker folded this into ComboField::GetDropdownWidth() const, which has identical code
    ComboField::GetTextAreaWidth() const;

    // 0x10068ec70, 16 bytes, placed by class name
    // ComboField::ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float)
    undefined8 ComboField::ProcessSwipeMovement(Vector2T* param_1, Vector2T* param_2, float param_3) {
        return 0;
    }

    // 0x10068ec80, 352 bytes, placed by class name
    // ComboField::MainDraw(ComponentDependencies const&, int, int, float)
    void ComboField::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        uint uVar1;
        byte bVar3;
        int iVar4;
        int iVar5;
        ScaleManager* this_00;
        float fVar6;
        Margin local_3c;
        Margin local_38;

        if (GetAlpha() != '\0') {
            if ((field_1441 != '\0') && (field_1332 < 1.0)) {
                fVar6 = (float)eastl::min<float>(
                    (param_4 * 6.6666665) / *(float*)PTR_m_dropdownExpandTimeMultiplier_100ee63f0 + field_1332, 1.0);
                field_1332 = fVar6;
            }
            DrawInputBox(this, *(RT7Core**)(param_1 + 16), *(FontManager**)(param_1 + 8), *(FontHelpers**)param_1,
                         param_2, param_3);
            field_1336 = param_2;
            iVar4 = GetMinMapX();
            field_1340 = iVar4 + param_3 + 2;
            this_00 = (ScaleManager*)(*(RT7Core**)(param_1 + 16))->GetScaleManager();
            iVar4 = (*(RT7Core**)(param_1 + 16))->GetBackBufferHeight();
            iVar4 = this_00->ScreenToInterfaceSize(iVar4, false);
            uVar1 = field_1340;
            iVar5 = GetDropdownHeight(this);
            local_3c = (Margin)((field_424 + 96))->GetVisualMargin();
            bVar3 = local_3c.GetHeight();
            if (iVar4 < (int)((uint)bVar3 + iVar5 + uVar1)) {
                iVar4 = GetDropdownHeight(this);
                local_38 = (Margin)((field_424 + 96))->GetVisualMargin();
                bVar3 = local_38.GetHeight();
                field_1340 = (param_3 - ((uint)bVar3 + iVar4)) - 2;
            }
        }
    }

    // 0x10068ede0, 976 bytes, placed by class name
    // ComboField::DrawInputBox(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int)
    void ComboField::DrawInputBox(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, int param_4,
                                  int param_5) {
        undefined1* this_00;
        SpriteData* pSVar1;
        byte bVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        uint uVar8;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar9;
        undefined* puVar10;
        shared_ptr* psVar11;
        shared_ptr* psVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar13;
        MapArea* pMVar14;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar15;
        Texture* pTVar16;
        SpriteAtlasReference* pSVar17;
        undefined8 uVar18;
        Margin local_88[4];
        SpriteData* local_78;
        Margin local_6c;
        int local_68;
        int local_64;
        RT7Core* local_60;
        Texture* local_58;
        int local_50;
        int local_4c;
        shared_ptr* local_48;
        uint local_3c;
        int local_38;
        int local_34;

        local_60 = param_1;
        local_38 = param_4;
        local_34 = param_5;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar9 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        this_00 = field_424;
        puVar10 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar9, false);
        if (puVar10 != DataStatus::READY) {
            return;
        }
        pSVar1 = (SpriteData*)(field_424 + 48);
        cVar3 = pSVar1->IsSpriteValid();
        if ((cVar3 != '\0') &&
            (puVar10 = (undefined*)pSVar1->LoadSpriteAtlasReference(pSVar9, false), puVar10 != DataStatus::READY)) {
            return;
        }
        psVar11 = (shared_ptr*)this_00->GetDefaultValue();
        psVar12 = (shared_ptr*)pSVar1->GetDefaultValue();
        bVar4 = shared_ptr::operator_cast_to_bool(psVar11);
        if ((bVar4) && ((cVar3 = pSVar1->IsSpriteValid(),
                         cVar3 == '\0' || (bVar4 = shared_ptr::operator_cast_to_bool(psVar12), bVar4)))) {
            local_78 = pSVar1;
            local_48 = psVar12;
            local_4c = GetHeaderVisualState(this);
            pcVar13 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)psVar11);
            psVar12 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar13);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar12);
            if (bVar4) {
                pMVar14 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                    (shared_ptr<graphics::SpriteAtlas>*)psVar12);
                pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                pTVar16 =
                    (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar15);
                if (pTVar16 != (Texture*)0) {
                    local_58 = pTVar16;
                    pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                        (shared_ptr<graphics::SpriteAtlasReference>*)psVar11);
                    pSVar17->GetRenderMapping();
                    GetVisualUV((ComboField*)local_88);
                    local_68 = local_38;
                    local_64 = local_34;
                    iVar5 = GetStreamCountLastMix();
                    iVar6 = GetMinMapX();
                    uVar7 = GetRGBA();
                    this_00->DrawSpriteSlice(local_60, local_68, local_64, iVar5, iVar6, uVar7, local_88, local_58,
                                             0.0);
                }
            } else {
                uVar18 = logger::default_logger();
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/ComboField.cpp",
                                    565, "Invalid header sprite atlas reference!");
            }
            if (bVar4) {
                local_50 = GetStreamCountLastMix();
                local_3c = GetMinMapX();
                iVar5 = local_38;
                local_88[0] = (Margin)this_00->GetVisualMargin();
                local_6c = (Margin)(&field_1270, local_88)->GetValidOr();
                local_6c.ApplyTo(&local_38, &local_34, &local_50, (int*)&local_3c);
                psVar11 = local_48;
                bVar4 = shared_ptr::operator_cast_to_bool(local_48);
                if (bVar4) {
                    pcVar13 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)psVar11);
                    psVar11 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar13);
                    bVar4 = shared_ptr::operator_cast_to_bool(psVar11);
                    if (bVar4) {
                        pMVar14 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)psVar11);
                        pvVar15 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                        pTVar16 =
                            (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                pvVar15);
                        if (pTVar16 != (Texture*)0) {
                            local_58 = pTVar16;
                            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)local_48);
                            pSVar17->GetRenderMapping();
                            GetVisualUV((ComboField*)local_88);
                            pSVar1 = local_78;
                            bVar2 = field_834;
                            if (bVar2 == 0) {
                                uVar7 = local_3c;
                                iVar6 = local_34;
                            } else {
                                uVar7 = (uint)bVar2;
                                iVar6 = local_34 + (int)(local_3c - bVar2) / 2;
                            }
                            local_48 = (shared_ptr*)CONCAT44(local_48._4_4_, iVar6);
                            iVar6 = GetStreamCountLastMix();
                            bVar2 = field_835;
                            uVar8 = GetRGBA();
                            pSVar1->DrawSpriteSlice(local_60, (iVar5 + iVar6) - (bVar2 + uVar7), (int)local_48, uVar7,
                                                    uVar7, uVar8, local_88, local_58, 0.0);
                        }
                    } else {
                        uVar18 = logger::default_logger();
                        logger::Logger::Log(uVar18, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                            "components/ComboField.cpp",
                                            592, "Invalid button sprite atlas reference!");
                    }
                    if (!bVar4) {
                        return;
                    }
                }
                DrawInputBoxContents(this, local_60, param_2, param_3, local_38, local_34, local_50, local_3c);
            }
        } else {
            uVar18 = logger::default_logger();
            logger::Logger::Log(
                uVar18, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                553, "Invalid sprite atlas reference!");
        }
    }

    // 0x10068f1b0, 96 bytes, placed by class name
    // ComboField::DrawFocus(ComponentDependencies const&)
    void ComboField::DrawFocus(ComponentDependencies* param_1) {
        if (field_1441 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_hasFocus",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                533, (char*)0);
        }
        DrawEntries(this, *(RT7Core**)(param_1 + 16), *(FontManager**)(param_1 + 8), *(FontHelpers**)param_1,
                    field_1336, field_1340);
    }

    // 0x10068f210, 1728 bytes, placed by class name
    // ComboField::DrawEntries(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int)
    void ComboField::DrawEntries(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, int param_4,
                                 int param_5) {
        SpriteData* this_00;
        undefined1* this_01;
        RT7Core* pRVar1;
        bool bVar2;
        byte bVar3;
        char cVar4;
        ushort uVar5;
        ushort uVar6;
        undefined2 uVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        undefined4 uVar11;
        uint uVar12;
        TextureManager* this_02;
        SpriteAtlasManager* pSVar13;
        undefined* puVar14;
        shared_ptr* psVar15;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlasReference* this_07;
        long lVar16;
        undefined2* puVar17;
        fixed_string* pfVar18;
        undefined8 uVar19;
        int iVar20;
        ulong uVar21;
        undefined8 uVar22;
        char* pcVar23;
        ComboField* pCVar24;
        float fVar25;
        StringView SVar26;
        undefined8 in_stack_fffffffffffffed8;
        undefined4 uVar27;
        Texture* in_stack_fffffffffffffee8;
        undefined1 local_108[40];
        TextProperties local_e0;
        shared_ptr* local_b8;
        TextRun* local_b0;
        vector<ComboField::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*
            local_a8;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true, eastl::allocator>>* local_a0;
        Margin local_94;
        FontHelpers* local_90;
        undefined8 local_88;
        RT7Core* local_80;
        TextData* local_78;
        uint local_6c;
        ComboField* local_68;
        int local_60;
        uint local_5c;
        Texture* local_58;
        ulong local_50;
        uint local_44;
        char local_3d;
        int local_3c;
        uint local_38;
        uint local_34;

        this_00 = (SpriteData*)(field_424 + 96);
        local_44 = param_5;
        local_3c = param_4;
        this_02 = (TextureManager*)param_1->GetTextureManager();
        pSVar13 = (SpriteAtlasManager*)this_02->GetSpriteAtlasManager();
        puVar14 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar13, false);
        if (puVar14 == DataStatus::READY) {
            local_90 = param_3;
            psVar15 = (shared_ptr*)this_00->GetDefaultValue();
            bVar2 = shared_ptr::operator_cast_to_bool(psVar15);
            if (bVar2) {
                local_80 = param_1;
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar15);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                bVar2 = shared_ptr::operator_cast_to_bool(this_04);
                if (bVar2) {
                    this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    local_58 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    pRVar1 = local_80;
                    new (local_108) graphics::ClippingState(local_80);
                    pRVar1->SetClippingRectToViewport();
                    local_38 = GetTextAreaWidth(this);
                    local_50 = CONCAT44(local_50._4_4_, field_1332);
                    local_68 = this;
                    iVar8 = GetDropdownHeight(this);
                    fVar25 = (float)local_50 * (float)iVar8;
                    local_e0.m_pFont._0_4_ = this_00->GetVisualMargin();
                    bVar3 = local_e0.GetHeight();
                    uVar27 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 32);
                    iVar8 = (uint)bVar3 + (int)fVar25;
                    local_60 = iVar8;
                    if (local_58 != (Texture*)0) {
                        local_50 = CONCAT44(local_50._4_4_, local_3c);
                        local_78 = (TextData*)CONCAT44(local_78._4_4_, local_44);
                        local_34 = local_38;
                        uVar9 = local_68->GetRGBA();
                        uVar10 = this_00->GetSpriteRGBA();
                        uVar9 = math::Multiply(uVar9, uVar10);
                        this_07 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar15);
                        lVar16 = this_07->GetRenderMapping();
                        in_stack_fffffffffffffed8 = CONCAT44(uVar27, uVar9);
                        in_stack_fffffffffffffee8 = local_58;
                        this_00->DrawSpriteSlice(local_80, (int)(float)local_50, (int)local_78, local_34, iVar8, uVar9,
                                                 (Rect*)(lVar16 + 88), local_58, 0.0);
                    }
                    pCVar24 = local_68;
                    local_78 = (TextData*)local_68->field_568;
                    iVar8 = local_78->GetEndPosition();
                    new (&local_e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar15 = (shared_ptr*)param_2->GetFont(iVar8, (shared_ptr*)&local_e0);
                    local_e0.~shared_ptr();
                    bVar2 = shared_ptr::operator_cast_to_bool(psVar15);
                    if (bVar2) {
                        local_e0.m_pFont._0_4_ = this_00->GetVisualMargin();
                        local_94 = (Margin)(&pCVar24->field_1266, (Margin*)&local_e0)->GetValidOr();
                        local_b8 = psVar15;
                        local_94.ApplyTo(&local_3c, (int*)&local_44, (int*)&local_38, &local_60);
                        pRVar1 = local_80;
                        local_80->SetClippingRectangle(local_3c, local_44, local_38, local_60, true);
                        uVar9 = local_44;
                        local_5c = local_60 + local_44;
                        local_6c = pCVar24->GetRGBA();
                        cVar4 = ScrollbarNeeded(pCVar24);
                        local_88 = pRVar1->GetGUIManager();
                        local_3d = cVar4;
                        if (cVar4 != '\0') {
                            fVar25 = (float)fmod((float)pCVar24->field_1324, (float)pCVar24->m_entryHeight);
                            uVar9 = uVar9 - (int)fVar25;
                        }
                        uVar6 = pCVar24->field_1322;
                        uVar21 = (ulong)uVar6;
                        uVar5 = GetNumVisibleEntries(pCVar24);
                        local_50 = uVar21;
                        if ((uVar6 < uVar5) && ((int)uVar9 < (int)local_5c)) {
                            local_b0 = (TextRun*)pCVar24->field_1352;
                            local_a0 =
                                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true,
                                                                                      eastl::allocator>>*)&pCVar24
                                    ->field_1464;
                            local_a8 =
                                (vector<ComboField::Entry,
                                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                      BucketAllocatorEASTL>>*)&pCVar24->field_872;
                            do {
                                uVar27 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 32);
                                cVar4 = local_b0->IsEmpty();
                                if (cVar4 == '\0') {
                                    puVar17 = (undefined2*)eastl::vector<
                                        unsigned short,
                                        eastl::fixed_vector_allocator<2ul, 10ul, 2ul, 0ul, true, eastl::allocator>>::
                                    operator[](local_a0, local_50);
                                    uVar7 = *puVar17;
                                } else {
                                    uVar7 = (undefined2)local_50;
                                }
                                local_58 = (Texture*)CONCAT62(local_58._2_6_, uVar7);
                                local_78->GetTextRGBA();
                                uVar10 = local_38;
                                iVar8 = local_3c;
                                if ((pCVar24->field_1456 == '\0') && ((ushort)local_58 == pCVar24->field_1264)) {
                                    local_34 = (uint)pCVar24->m_entryHeight;
                                    if ((ushort)local_58 == pCVar24->field_1320) {
                                        uVar11 = math::Multiply(*(uint*)&pCVar24->field_804, local_6c);
                                        local_88->AddColouredRectangle(iVar8, uVar9, uVar10, local_34, uVar11,
                                                                       CONCAT44(uVar27, 1));
                                    } else {
                                        uVar11 = math::Multiply(*(uint*)&pCVar24->field_812, local_6c);
                                        local_88->AddColouredRectangle(iVar8, uVar9, uVar10, local_34, uVar11,
                                                                       CONCAT44(uVar27, 1));
                                    }
                                } else if ((ushort)local_58 == pCVar24->field_1320) {
                                    bVar3 = local_68->m_entryHeight;
                                    uVar11 = math::Multiply(*(uint*)&local_68->field_804, local_6c);
                                    local_88->AddColouredRectangle(iVar8, uVar9, uVar10, bVar3, uVar11,
                                                                   CONCAT44(uVar27, 1));
                                }
                                uVar10 = local_38;
                                iVar8 = *(int*)PTR_m_entryPadding_100ee63e8;
                                iVar20 = local_3c + iVar8;
                                new (&local_e0) graphics::TextProperties(local_b8);
                                pCVar24 = local_68;
                                local_34 = uVar9;
                                uVar12 = local_68->GetRGBA();
                                uVar9 = local_34;
                                local_78->PopulateTextProperties(&local_e0, uVar12, pCVar24->field_100);
                                pfVar18 = (fixed_string*)eastl::vector<
                                    ComboField::Entry,
                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                                operator[](local_a8, (ulong)local_58 & 65535);
                                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                    (StringView*)(local_108 + 24), pfVar18);
                                in_stack_fffffffffffffed8 = 0;
                                SVar26.field_8._0_4_ = iVar20;
                                SVar26.field_0 = (ulong)(local_108 + 24);
                                SVar26.field_8._4_4_ = 0;
                                local_90->DrawStringMultiline(SVar26, uVar9, uVar10 + iVar8 * -2,
                                                              (uint)local_68->m_entryHeight, 0, (uint*)&local_e0,
                                                              (TextProperties*)in_stack_fffffffffffffee8);
                                pCVar24 = local_68;
                                bVar3 = local_68->m_entryHeight;
                                uVar21 = local_50 + 1;
                                uVar6 = GetNumVisibleEntries(local_68);
                                local_50 = uVar21;
                            } while ((uVar21 < uVar6) && (uVar9 = uVar9 + bVar3, (int)uVar9 < (int)local_5c));
                        }
                        if (local_3d != '\0') {
                            local_50 = CONCAT71(local_50._1_7_, pCVar24->field_100);
                            local_58 = (Texture*)CONCAT44(local_58._4_4_, pCVar24->field_1332);
                            uVar7 = GetNumVisibleEntries(pCVar24);
                            uVar9 = local_38;
                            local_5c = CONCAT22(local_5c._2_2_, uVar7);
                            this_01 = &pCVar24->field_632;
                            local_90 = (FontHelpers*)CONCAT44(local_90._4_4_, local_3c);
                            uVar10 = this_01->GetSize();
                            local_68 = (ComboField*)CONCAT44(local_68._4_4_, local_44);
                            uVar12 = this_01->GetSize();
                            local_78 = (TextData*)CONCAT44(local_78._4_4_, local_60);
                            local_34 = pCVar24->field_1324;
                            bVar3 = pCVar24->m_entryHeight;
                            bVar2 = (bool)pCVar24->IsEnabled();
                            this_01->Draw(local_80, (uVar9 + (int)local_90) - (uVar10 & 255), (int)local_68,
                                          uVar12 & 255, (int)local_78, local_34, (uint)bVar3 * (local_5c & 65535),
                                          bVar2, (uchar)(int)(local_58._0_4_ * (float)(byte)local_50));
                        }
                    }
                    local_108->~ClippingState();
                    return;
                }
                uVar19 = logger::default_logger();
                pcVar23 = "Invalid sprite atlas!";
                uVar22 = 773;
            } else {
                uVar19 = logger::default_logger();
                pcVar23 = "Invalid sprite atlas reference!";
                uVar22 = 765;
            }
            logger::Logger::Log(
                uVar19, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                uVar22, pcVar23);
        }
    }

    // 0x10068f900, 64 bytes, placed by class name
    // ComboField::GetHeaderVisualState() const
    undefined1 ComboField::GetHeaderVisualState() {
        char cVar1;
        undefined1 uVar2;

        cVar1 = IsEnabled();
        uVar2 = 3;
        if ((cVar1 != '\0') && (uVar2 = 2, field_1441 == '\0')) {
            uVar2 = IsCurrentlyMouseOver();
        }
        return uVar2;
    }

    // 0x10068f940, 144 bytes, placed by class name
    // ComboField::GetVisualUV(math::Rect<float> const&, ComboField::EntryVisualState) const
    ComboField* ComboField::GetVisualUV(undefined8 param_2, Vector4T* param_3, undefined4 param_4) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        float fVar4;
        float fVar5;

        new (this) math::Float4(param_3);
        pfVar3 = (float*)qw();
        fVar1 = *pfVar3;
        pfVar3 = (float*)y();
        fVar2 = *pfVar3;
        fVar4 = (float)GetGraphicSliceOffset(param_4);
        fVar5 = (float)GetGraphicSliceHeightPercent();
        pfVar3 = (float*)y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        SetVerticalFov(fVar5 * fVar1);
        return this;
    }

    // 0x10068fa00, 1408 bytes, placed by class name
    // ComboField::DrawInputBoxContents(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int, int, int)
    void ComboField::DrawInputBoxContents(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, int param_4,
                                          int param_5, int param_6, int param_7) {
        undefined1* this_00;
        char cVar2;
        uint uVar3;
        int iVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        shared_ptr* this_01;
        Layout* pLVar7;
        vector* pvVar8;
        FontMetrics* pFVar9;
        int* piVar10;
        long lVar11;
        long lVar12;
        undefined8 uVar13;
        ulong uVar14;
        type* ptVar15;
        ulong uVar17;
        FontHelpers* pFVar18;
        undefined4 in_register_00000084;
        int iVar19;
        int iVar20;
        TextRun* this_02;
        int iVar21;
        StringView SVar22;
        undefined8 in_stack_ffffffffffffff18;
        TextProperties* in_stack_ffffffffffffff28;
        TextProperties local_c8;
        undefined1 local_a0[40];
        TextRun* local_78;
        undefined8 local_60;
        int local_54;
        undefined4 local_50;
        int local_4c;
        ulong local_48;
        ulong local_40;
        RT7Core* local_38;

        local_a0._32_8_ = CONCAT44(in_register_00000084, param_4);
        this_00 = field_568;
        local_38 = param_1;
        uVar3 = this_00->GetEndPosition();
        new (&local_c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        ptVar15 = (type*)(ulong)uVar3;
        this_01 = (shared_ptr*)param_2->GetFont(uVar3, (shared_ptr*)&local_c8);
        local_c8.~shared_ptr();
        if (!shared_ptr::operator_cast_to_bool(this_01)) {
            uVar13 = logger::default_logger();
            logger::Logger::Log(
                uVar13, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                634, "Invalid font!");
            return;
        }
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_01);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar15);
        pFVar9 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar8);
        local_c8.m_pFont._0_4_ = pFVar9->GetVerticalSpacing();
        piVar10 = std::min<int>(&param_7, (int*)&local_c8);
        local_54 = *piVar10;
        iVar19 = *(int*)PTR_m_entryPadding_100ee63e8;
        local_40 = (ulong)(uint)(local_a0._32_4_ + iVar19);
        local_4c = param_6 + iVar19 * -2;
        param_7 = param_7 + iVar19 * -2;
        local_78 = (TextRun*)field_1352;
        iVar4 = local_78->GetWidth();
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_01);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)&local_c8);
        pFVar9 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar8);
        uVar5 = pFVar9->GetVerticalSpacing();
        local_48 = CONCAT44(local_48._4_4_, uVar5);
        local_60 = local_38->GetGUIManager();
        cVar2 = this_00->GetTextHAlign();
        if (cVar2 == '\x02') {
            uVar3 = ((int)local_40 + local_4c) - iVar4;
        } else {
            if (cVar2 != '\x01')
                goto LAB_10068fb7b;
            uVar3 = (int)local_40 + (local_4c - iVar4) / 2;
        }
        local_40 = (ulong)uVar3;
    LAB_10068fb7b:
        uVar3 = iVar19 + param_5;
        uVar14 = (ulong)uVar3;
        local_38._0_4_ = (float)local_54;
        cVar2 = this_00->GetTextVAlign();
        if (cVar2 == '\x02') {
            uVar14 = (ulong)((uVar3 - (int)local_48) + param_7);
        } else if (cVar2 == '\x01') {
            uVar14 = (ulong)((param_7 - (int)local_48) / 2 + uVar3);
        }
        local_38 = (RT7Core*)CONCAT44(local_38._4_4_, local_38._0_4_ * 0.9);
        local_50 = *(undefined4*)(field_568 + (ulong)field_1442 * 4 + 252);
        local_48 = uVar14;
        cVar2 = IsEnabled();
        if (cVar2 == '\0') {
            uVar3 = field_816;
        } else {
            uVar3 = GetRGBA();
        }
        local_38 = (RT7Core*)CONCAT44(local_38._4_4_, (int)local_38._0_4_);
        new (&local_c8) graphics::TextProperties(this_01);
        this_00->PopulateTextProperties(&local_c8, uVar3, field_100);
        this_02 = local_78;
        cVar2 = local_78->IsEmpty();
        uVar14 = local_40;
        pFVar18 = param_3;
        uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
        if (cVar2 == '\0') {
            if (field_1441 == '\0') {
                graphics::TextRun::operator_cast_to_TextRunSlice((TextRunSlice*)local_a0, this_02);
                iVar21 = param_7 + field_1324;
                iVar4 = (int)uVar14;
                iVar19 = (int)local_48;
            } else {
                if (field_1448 != field_1432) {
                    local_a0->Slice((ulong)this_02, field_1448);
                    lVar11 = local_a0->end();
                    iVar19 = *(int*)(lVar11 + 4);
                    lVar11 = local_a0->end();
                    iVar4 = *(int*)(lVar11 + 8);
                    lVar11 = local_a0->end();
                    lVar11 = lVar11 + 12;
                    lVar12 = local_a0->data();
                    uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
                    if (lVar11 != lVar12) {
                        do {
                            uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
                            if (*(int*)(lVar11 + 8) != iVar4) {
                                iVar4 = iVar4 + (int)local_48;
                                iVar21 = local_4c - iVar19;
                                iVar19 = iVar19 + (int)local_40;
                                uVar3 = GetRGBA();
                                uVar6 = math::Multiply(uVar3, field_828);
                                in_stack_ffffffffffffff18 = CONCAT44(uVar5, 1);
                                local_60->AddColouredRectangle(iVar19, iVar4, iVar21, local_54, uVar6,
                                                               in_stack_ffffffffffffff18);
                                iVar19 = *(int*)(lVar11 + 4);
                                iVar4 = *(int*)(lVar11 + 8);
                            }
                            lVar11 = lVar11 + 12;
                            lVar12 = local_a0->data();
                            uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
                        } while (lVar11 != lVar12);
                    }
                    lVar11 = local_a0->data();
                    if (iVar4 == *(int*)(lVar11 + -4)) {
                        iVar21 = local_a0->GetLastCursorPosition();
                        iVar4 = iVar4 + (int)local_48;
                        iVar20 = iVar19 + (int)local_40;
                        uVar3 = GetRGBA();
                        uVar6 = math::Multiply(uVar3, field_828);
                        uVar13 = CONCAT44(uVar5, 1);
                        local_60->AddColouredRectangle(iVar20, iVar4, iVar21 - iVar19, local_54, uVar6, uVar13);
                        uVar5 = (undefined4)((ulong)uVar13 >> 32);
                    }
                    this_02 = local_78;
                }
                pFVar18 = param_3;
                iVar4 = (int)local_40;
                if (field_1432 == 0) {
                    uVar17 = local_40 & 4294967295;
                    iVar19 = (int)local_48;
                    uVar14 = local_48 & 4294967295;
                } else {
                    local_a0->Slice((ulong)this_02, 0);
                    iVar19 = (int)local_48;
                    uVar13 = pFVar18->DrawTextRunSlice(local_a0, iVar4, iVar19, &local_c8, -1);
                    uVar17 = (ulong)(uint)((int)uVar13 + iVar4);
                    uVar14 = (ulong)(uint)((int)((ulong)uVar13 >> 32) + iVar19);
                }
                local_60->AddColouredRectangle(uVar17, uVar14, 1, (ulong)local_38 & 4294967295, local_50,
                                               CONCAT44(uVar5, 1));
                uVar14 = field_1432;
                this_02->GetCodepointCount();
                local_a0->Slice((ulong)this_02, uVar14);
                iVar21 = param_7 + field_1324;
                iVar4 = (int)local_40;
                pFVar18 = param_3;
            }
            pFVar18->DrawTextRunSlice(local_a0, iVar4, iVar19, &local_c8, iVar21);
        } else if (field_1441 == '\0') {
            cVar2 = this_02->IsEmpty();
            if (cVar2 != '\0') {
                cVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar2 == '\0') {
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        (StringView*)(local_a0 + -56), (fixed_string*)&field_840);
                    SVar22.field_8 = (uchar*)local_a0._32_8_;
                    SVar22.field_0 = (ulong)(local_a0 + -56);
                    pFVar18->DrawStringMultiline(SVar22, param_5, local_4c, param_7, 0, (uint*)&local_c8,
                                                 in_stack_ffffffffffffff28);
                }
            }
        } else {
            local_60->AddColouredRectangle(local_40, local_48, 1, (ulong)local_38 & 4294967295, local_50,
                                           CONCAT44(uVar5, 1));
        }
    }

    // 0x100690040, 2096 bytes, placed by class name
    // ComboField::HandleKeyInput(int, int, unsigned int)
    ulong ComboField::HandleKeyInput(int param_1, int param_2, uint param_3) {
        undefined1* puVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        short sVar5;
        ulong uVar6;
        MapSquarePos* pMVar7;
        ushort* puVar8;
        ushort* puVar9;
        MapSquarePos* pMVar10;
        long lVar11;
        ulong uVar12;
        int* piVar13;
        ushort uVar14;
        undefined8 unaff_R14;
        undefined7 uVar16;
        ulong uVar15;
        int local_3c;
        int local_38;
        int local_34;

        uVar16 = (undefined7)((ulong)unaff_R14 >> 8);
        if ((param_1 == -1) && (field_1440 != '\0')) {
            field_1440 = 0;
            goto LAB_1006905a9;
        }
        field_1442 = 0;
        field_1456 = 1;
        switch (param_1) {
        case 0:
            if ((param_3 & 4) != 0) {
                field_1448 = 0;
                uVar6 = field_1352->GetCodepointCount();
                field_1432 = uVar6;
                goto LAB_100690516;
            }
            switch (param_1) {
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
                if (param_1 == 63272)
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
            if ((param_3 & 4) != 0) {
                CopySelection(this);
                goto LAB_100690516;
            }
            goto LAB_100690238;
        case 9:
        switchD_100690082_caseD_9:
            if ((param_3 & 4) != 0) {
                PasteFromClipboard(this);
                goto LAB_100690516;
            }
        LAB_100690238:
            if (param_1 == 7) {
            joined_r0x000100690244:
                if ((param_3 & 4) != 0) {
                    CopySelection(this);
                    uVar6 = (field_1352, field_1448, field_1432)->Remove();
                    field_1432 = uVar6;
                    field_1448 = uVar6;
                    field_1440 = 1;
                    UpdateFilteredEntries(this, 1);
                LAB_1006905a9:
                    uVar15 = CONCAT71(uVar16, 1);
                    goto LAB_1006905ac;
                }
            }
            if (param_1 == 36) {
            switchD_100690082_caseD_24:
                if (field_1320 != 65535) {
                    field_1456 = 0;
                    SelectEntryByIndex(this, field_1320, true);
                }
            switchD_100690082_caseD_35:
                CancelFocus(this);
                uVar15 = 0;
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
                    uVar6 = (field_1352, uVar6 - 1)->Remove();
                    goto LAB_1006904ce;
                }
            } else {
                uVar6 = (field_1352, field_1448, uVar6)->Remove();
            LAB_1006904ce:
                field_1432 = uVar6;
                UpdateFilteredEntries(this, 1);
            }
            field_1448 = field_1432;
        LAB_100690516:
            field_1440 = 1;
            goto LAB_1006905a9;
        case 53:
            goto switchD_100690082_caseD_35;
        default:
            switch (param_1) {
            case 63232:
                puVar1 = &field_1464;
                cVar2 = puVar1->empty();
                uVar15 = CONCAT71(uVar16, 1);
                if (cVar2 != '\0')
                    goto LAB_1006905ac;
                uVar14 = field_1320;
                pMVar7 = (MapSquarePos*)puVar1->HeapBeginPtr();
                if (uVar14 != 65535) {
                    puVar8 = (ushort*)puVar1->end();
                    puVar8 = eastl::find<unsigned short*, unsigned short>((ushort*)pMVar7, puVar8, &field_1320);
                    puVar9 = (ushort*)puVar1->end();
                    if (puVar8 == puVar9) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("visibleIndexIt != m_visibleEntryIndices.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "ComboField.cpp",
                                  983, (char*)0);
                    }
                    puVar9 = (ushort*)puVar1->HeapBeginPtr();
                    if (puVar8 == puVar9) {
                        puVar8 = (ushort*)puVar1->end();
                    }
                    pMVar7 = (MapSquarePos*)(puVar8 + -1);
                }
                field_1320 = *(ushort*)pMVar7;
                cVar2 = ScrollbarNeeded(this);
                if (cVar2 == '\0')
                    goto LAB_1006905ac;
                lVar11 = puVar1->end();
                if (pMVar7 == (MapSquarePos*)(lVar11 + -2)) {
                    sVar5 = puVar1->size();
                    bVar3 = GetDropdownMaxVisibleEntries(this);
                    field_1322 = sVar5 - (ushort)bVar3;
                    bVar4 = GetEntryHeight(this);
                    local_3c = (uint)bVar4 * (uint)(ushort)(sVar5 - (ushort)bVar3);
                    piVar13 = &local_3c;
                    goto LAB_1006905fc;
                }
                pMVar10 = (MapSquarePos*)puVar1->HeapBeginPtr();
                lVar11 = eastl::distance<game::MapSquare::MapSquarePos*>(pMVar10, pMVar7);
                if ((long)(ulong)field_1322 <= lVar11)
                    goto LAB_1006905ac;
                uVar14 = field_1322 - 1;
                field_1322 = uVar14;
                bVar3 = GetEntryHeight(this);
                local_38 = (uint)bVar3 * (uint)uVar14;
                piVar13 = std::min<int>(&field_1324, &local_38);
                break;
            case 63233:
                puVar1 = &field_1464;
                cVar2 = puVar1->empty();
                uVar15 = CONCAT71(uVar16, 1);
                if (cVar2 != '\0')
                    goto LAB_1006905ac;
                uVar14 = field_1320;
                pMVar7 = (MapSquarePos*)puVar1->HeapBeginPtr();
                if (uVar14 != 65535) {
                    puVar8 = (ushort*)puVar1->end();
                    puVar8 = eastl::find<unsigned short*, unsigned short>((ushort*)pMVar7, puVar8, &field_1320);
                    puVar9 = (ushort*)puVar1->end();
                    if (puVar8 == puVar9) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("visibleIndexIt != m_visibleEntryIndices.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "ComboField.cpp",
                                  1030, (char*)0);
                    }
                    pMVar7 = (MapSquarePos*)(puVar8 + 1);
                    pMVar10 = (MapSquarePos*)puVar1->end();
                    if (pMVar7 == pMVar10) {
                        pMVar7 = (MapSquarePos*)puVar1->HeapBeginPtr();
                    }
                }
                field_1320 = *(ushort*)pMVar7;
                cVar2 = ScrollbarNeeded(this);
                if (cVar2 == '\0')
                    goto LAB_1006905ac;
                pMVar10 = (MapSquarePos*)puVar1->HeapBeginPtr();
                if (pMVar7 == pMVar10) {
                    field_1322 = 0;
                    field_1324 = 0;
                    field_1328 = 0;
                    goto LAB_1006905ac;
                }
                pMVar10 = (MapSquarePos*)puVar1->HeapBeginPtr();
                lVar11 = eastl::distance<game::MapSquare::MapSquarePos*>(pMVar10, pMVar7);
                uVar14 = field_1322;
                bVar3 = GetDropdownMaxVisibleEntries(this);
                if (lVar11 < (long)((ulong)bVar3 + (ulong)uVar14))
                    goto LAB_1006905ac;
                uVar14 = field_1322 + 1;
                field_1322 = uVar14;
                bVar3 = GetEntryHeight(this);
                local_34 = (uint)bVar3 * (uint)uVar14;
                piVar13 = &local_34;
            LAB_1006905fc:
                piVar13 = std::max<int>(&field_1324, piVar13);
                break;
            case 63234:
                uVar15 = CONCAT71(uVar16, 1);
                if (field_1432 == 0)
                    goto LAB_1006905ac;
                uVar6 = field_1432 - 1;
                goto LAB_100690499;
            case 63235:
                uVar6 = field_1432;
                uVar12 = field_1352->GetCodepointCount();
                uVar15 = CONCAT71(uVar16, 1);
                if (uVar12 <= uVar6)
                    goto LAB_1006905ac;
                uVar6 = field_1432 + 1;
            LAB_100690499:
                uVar15 = CONCAT71(uVar16, 1);
                field_1432 = uVar6;
                if ((param_3 & 1) == 0) {
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
                    UpdateFilteredEntries(this, 1);
                }
                field_1448 = field_1432;
                goto LAB_1006905a9;
            }
            uVar15 = CONCAT71(uVar16, 1);
            field_1324 = *piVar13;
            field_1328 = 0;
            goto LAB_1006905ac;
        }
    switchD_100690082_caseD_1:
        uVar15 = CONCAT71(uVar16, 1);
        if (param_1 == -1) {
            AddCodepoint(this, param_2);
        }
    LAB_1006905ac:
        return uVar15 & 4294967295;
    }

    // 0x1006908b0, 288 bytes, placed by class name
    // ComboField::CopySelection()
    void ComboField::CopySelection() {
        uint* puVar1;
        uint* puVar2;
        TextRun local_270[7];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (&local_270[0].m_maxLineCount) eastl::fixed_string<char, 512, true, eastl::allocator>();
        local_270->Slice((ulong)field_1352, field_1448);
        puVar1 = (uint*)local_270->end();
        puVar2 = (uint*)local_270->data();
        if (puVar1 != puVar2) {
            do {
                stringtools::UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(
                    *puVar1, (fixed_string*)&local_270[0].m_maxLineCount);
                puVar1 = puVar1 + 3;
            } while (puVar1 != puVar2);
        }
        new (local_270) Clipboard();
        Clipboard::SetText<eastl::fixed_string<char, 512, true, eastl::allocator>>((fixed_string*)local_270);
        local_270->~Clipboard();
        /* WARNING: Subroutine does not return */
        local_270[0].m_maxLineCount.~fixed_string();
    }

    // 0x1006909d0, 416 bytes, placed by class name
    // ComboField::PasteFromClipboard()
    void ComboField::PasteFromClipboard() {
        undefined1* this_00;
        char* pcVar1;
        ulong uVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        ComboField* this_01;
        ulong uVar7;
        ulong uVar8;
        bool bVar9;
        eastl::string local_58[32];
        ulong local_38;

        eastl::string::basic_string(local_58);
        new (&local_38) Clipboard();
        cVar3 = local_38.GetText(local_58);
        local_38.~Clipboard();
        if (cVar3 != '\0') {
            this_00 = field_1352;
            uVar8 = this_00->Remove(field_1448, field_1432);
            field_1432 = uVar8;
            uVar8 = 0;
            while (uVar7 = eastl::basic_string<
                       char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size(),
                   uVar8 < uVar7) {
                local_38 = uVar8;
                this_01 = (ComboField*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar7 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                uVar4 = stringtools::GetUTF8NextChar((char*)this_01, &local_38, uVar7);
                cVar3 = IsCodepointAllowed(this_01, uVar4);
                if (cVar3 == '\0')
                    break;
                uVar8 = local_38;
            }
            pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar7 = this_00->Insert(pcVar1, uVar8, field_1432, 0);
            while (true) {
                iVar5 = this_00->GetWidth();
                iVar6 = GetTextAreaWidth(this);
                if (iVar5 < iVar6)
                    break;
                uVar7 = uVar7 - 1;
                this_00->Remove(uVar7);
            }
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            bVar9 = true;
            if (uVar2 <= uVar8) {
                bVar9 = field_1432 == uVar7;
            }
            field_1442 = bVar9;
            field_1432 = uVar7;
            field_1448 = uVar7;
            UpdateFilteredEntries(this, 1);
        }
        eastl::string::~basic_string(local_58);
    }

    // 0x100690b70, 272 bytes, placed by class name
    // ComboField::AddCodepoint(unsigned int)
    void ComboField::AddCodepoint(uint param_1) {
        undefined1* this_00;
        int iVar2;
        int iVar3;
        ulong uVar4;
        undefined1 uVar5;
        ComboField* this_01;
        undefined1 uVar6;
        bool bVar7;
        uint local_34;

        uVar6 = field_1448 != field_1432;
        local_34 = param_1;
        if ((bool)uVar6) {
            this_01 = (ComboField*)field_1352;
            uVar4 = this_01->Remove(field_1448, field_1432);
            field_1432 = uVar4;
            uVar5 = 1;
        } else {
            uVar5 = 2;
            this_01 = this;
        }
        if (IsCodepointAllowed(this_01, local_34) == '\0') {
            field_1442 = 1;
        } else {
            this_00 = field_1352;
            uVar4 = this_00->InsertCodepoints(&local_34, 1, field_1432, 100);
            while (true) {
                iVar2 = this_00->GetWidth();
                iVar3 = GetTextAreaWidth(this);
                if (iVar2 < iVar3)
                    break;
                uVar4 = uVar4 - 1;
                this_00->Remove(uVar4);
            }
            bVar7 = uVar4 == field_1432;
            field_1442 = bVar7;
            if (!bVar7) {
                field_1432 = uVar4;
                uVar6 = uVar5;
            }
        }
        field_1448 = field_1432;
        UpdateFilteredEntries(this, uVar6);
    }

    // 0x100690ca0, 352 bytes, placed by class name
    // ComboField::GetEntryIndexAtPos(int, int, math::Vector2T<float> const&, unsigned short&) const
    undefined8 ComboField::GetEntryIndexAtPos(int param_1, int param_2, Vector2T* param_3, ushort* param_4) {
        char cVar1;
        ushort uVar2;
        uint uVar3;
        int iVar4;
        float fVar5;
        Margin local_38;
        float local_34;

        local_34 = (float)param_1;
        cVar1 = (&field_1464)->empty();
        if (cVar1 == '\0') {
            local_38 = (Margin)((field_424 + 96))->GetVisualMargin();
            uVar3 = (&field_1266, &local_38)->GetValidOr();
            local_34 = *(float*)param_3 - ((float)(uVar3 & 255) + (float)(int)local_34);
            if ((((0.0 < local_34) && (iVar4 = GetStreamCountLastMix(), local_34 < (float)iVar4)) &&
                 (local_34 = *(float*)(param_3 + 4) - ((float)(uVar3 >> 8 & 255) + (float)param_2), 0.0 < local_34)) &&
                (iVar4 = GetDropdownHeight(this), local_34 < (float)iVar4)) {
                fVar5 = (float)floor((local_34 + (float)field_1324) / (float)m_entryHeight);
                uVar2 = (&field_1464)->size();
                if (((int)fVar5 & 65535U) <= (uint)uVar2) {
                    *param_4 = (ushort)(int)fVar5;
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100690e50, 48 bytes, placed by class name
    // ComboField::IsCodepointAllowed(unsigned int) const
    byte ComboField::IsCodepointAllowed(uint param_1) {
        byte bVar1;

        bVar1 = graphics::FontHelpers::IsDrawableCodepoint(param_1);
        return (bVar1 | param_1 == 32) & param_1 != 10;
    }

    // 0x100691040, 48 bytes, placed by class name
    // ComboField::SetMargin(Component::MarginType, Margin)
    void ComboField::SetMargin(int param_2, undefined4 param_3) {
        undefined4* puVar1;

        if (param_2 == 1) {
            puVar1 = &field_1270;
        } else {
            if (param_2 != 0) {
                return;
            }
            puVar1 = &field_1266;
        }
        *puVar1 = param_3;
    }

    // 0x100691070, 64 bytes, placed by class name
    // ComboField::GetMargin(Component::MarginType) const
    Margin ComboField::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 1) {
            local_c = (Margin)field_1270;
        } else if (param_2 == 0) {
            local_c = (Margin)field_1266;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006910c0, 896 bytes, placed by class name
    // ComboField::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ComboField::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        vector vVar3;
        ushort uVar4;
        short sVar5;
        ushort uVar6;
        uint uVar7;
        undefined4 uVar8;
        ulong uVar9;
        basic_string* pbVar10;
        basic_string* pbVar11;
        long lVar12;
        undefined8 uVar13;
        undefined8 uVar14;
        vector* pvVar15;
        vector* pvVar16;
        basic_string* pbVar17;

        cVar1 = param_1->g1();
        SetEnabled(this, cVar1 == '\x01');
        bVar2 = param_1->g1();
        m_dropdownMaxVisibleEntries = bVar2;
        bVar2 = param_1->g1();
        m_entryHeight = bVar2;
        bVar2 = param_1->g1();
        field_834 = bVar2;
        bVar2 = param_1->g1();
        field_835 = bVar2;
        if (m_dropdownMaxVisibleEntries == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_dropdownMaxVisibleEntries > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1462, (char*)0);
        }
        if (m_entryHeight == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_entryHeight > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1463, (char*)0);
        }
        this_00 = &field_872;
        uVar4 = param_1->g2();
        pbVar17 = (basic_string*)(ulong)uVar4;
        this_00->resize((ulong)pbVar17);
        uVar9 = this_00->size();
        if (65533 < uVar9) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_entries.size() < MAX_ENTRY_COUNT",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1469, (char*)0);
        }
        pbVar10 = (basic_string*)this_00->HeapBeginPtr();
        pbVar11 = (basic_string*)this_00->end();
        for (; pbVar10 != pbVar11; pbVar10 = pbVar10 + 32) {
            pbVar17 = pbVar10;
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar10, false);
        }
        uVar4 = param_1->g2();
        uVar7 = this_00->size();
        if (uVar7 == uVar4) {
            sVar5 = this_00->size();
            if (sVar5 != 0) {
                uVar4 = 0;
                do {
                    uVar8 = param_1->g4s();
                    pbVar17 = (basic_string*)(ulong)uVar4;
                    lVar12 =
                        eastl::vector<ComboField::Entry,
                                      eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](
                            (vector<ComboField::Entry,
                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                this_00,
                            (ulong)pbVar17);
                    *(undefined4*)(lVar12 + 24) = uVar8;
                    uVar4 = uVar4 + 1;
                    uVar6 = this_00->size();
                } while (uVar4 < uVar6);
            }
            uVar4 = param_1->g2();
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                uVar9 = this_00->size();
                if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_entries.size() > selectionIndex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComboField.cpp",
                              1495, (char*)0);
                }
                lVar12 =
                    eastl::vector<ComboField::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<ComboField::Entry,
                                eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            this_00,
                        (ulong)uVar4);
                uVar7 = *(uint*)(lVar12 + 24);
                uVar13 = this_00->HeapBeginPtr();
                uVar14 = this_00->end();
                eastl::sort<ComboField::Entry*, (PacketT<Array<unsigned char, eastl::allocator>>&)
                                                    ->DecodeTypedComponentProperties(int)::__27>(uVar13, uVar14);
                BuildIndexMap(this);
                pbVar17 = (basic_string*)(ulong)uVar7;
                SelectEntry(this, uVar7, false);
            }
            pvVar15 = (&field_1266, (type*)pbVar17)->SSOBeginPtr();
            pvVar16 = (vector*)(&field_1266)->y();
            for (; pvVar15 != pvVar16; pvVar15 = pvVar15 + 1) {
                vVar3 = (vector)param_1->g1();
                *pvVar15 = vVar3;
            }
            pvVar15 = (&field_1270, (type*)pbVar17)->SSOBeginPtr();
            pvVar16 = (vector*)(&field_1270)->y();
            for (; pvVar15 != pvVar16; pvVar15 = pvVar15 + 1) {
                vVar3 = (vector)param_1->g1();
                *pvVar15 = vVar3;
            }
            bVar2 = param_1->g1();
            field_100 = ~bVar2;
            uVar8 = param_1->g4();
            field_96 = uVar8;
            (field_424, param_1, param_2)->DecodeSpriteData();
            ((field_424 + 48), param_1, param_2)->DecodeSpriteData();
            ((field_424 + 96), param_1, param_2)->DecodeSpriteData();
            (field_568, param_1, param_2)->DecodeTextData();
            (&field_632, param_1, param_2)->Decode();
        } else {
            uVar13 = logger::default_logger();
            uVar14 = this_00->size();
            logger::Logger::Log(
                uVar13, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/ComboField.cpp",
                1480, "ComboField entry encoding mismatch - expected %u values but got %u", uVar14, uVar4);
        }
    }

    // 0x1006914a0, 176 bytes, placed by class name
    // ComboField::BuildIndexMap()
    void ComboField::BuildIndexMap() {
        short sVar1;
        ushort uVar2;
        ushort uVar3;
        long lVar4;
        undefined1* this_00;
        undefined8 local_40;
        ushort local_32;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_00 = &field_872;
        local_32 = 0;
        sVar1 = this_00->size();
        if (sVar1 != 0) {
            do {
                lVar4 = eastl::vector<ComboField::Entry,
                                      eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<ComboField::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)this_00,
                    (ulong)local_32);
                local_40 = eastl::make_pair<int&, unsigned short&>((int*)(lVar4 + 24), &local_32);
                eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                  eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>::
                    insert<eastl::pair<int, unsigned short>, void>(
                        (vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                    eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>*)&field_1232,
                        (pair*)&local_40);
                uVar2 = local_32 + 1;
                local_32 = uVar2;
                uVar3 = this_00->size();
            } while (uVar2 < uVar3);
        }
    }

    // 0x100691550, 64 bytes, placed by class name
    // ComboField::SelectEntry(int, bool)
    bool ComboField::SelectEntry(int param_1, bool param_2) {
        undefined1 uVar1;
        undefined1 extraout_AH;

        uVar1 = GetEntryIndexById(this, param_1);
        if (CONCAT11(extraout_AH, uVar1) != -1) {
            SelectEntryByIndex(this, CONCAT11(extraout_AH, uVar1), param_2);
        }
        return CONCAT11(extraout_AH, uVar1) != 65535;
    }

    // 0x100691590, 576 bytes, placed by class name
    // ComboField::LoadStyleSheetVisuals(StyleSheet const&)
    void ComboField::LoadStyleSheetVisuals(StyleSheet* param_1) {
        SpriteData* pSVar1;
        undefined1* this_00;

        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 146, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 145, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &m_dropdownMaxVisibleEntries, 480, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &m_entryHeight, 479, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_834, 481, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_835, 482, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_804, 486, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_800, 483, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_812, 487, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_808, 484, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_816, 485, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_828, 488, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_820, 489, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_824, 490, 1);
        (&field_1266, 565, param_1)->LoadFromStylesheet();
        (&field_1270, 559, param_1)->LoadFromStylesheet();
        (field_568, 491, param_1)->LoadStyleSheetTextData();
        ((field_424 + 48), 519, param_1)->LoadStyleSheetSpriteData();
        (field_424, 499, param_1)->LoadStyleSheetSpriteData();
        ((field_424 + 96), 509, param_1)->LoadStyleSheetSpriteData();
        this_00 = &field_632;
        pSVar1 = (SpriteData*)this_00->GetMaterial();
        pSVar1->LoadStyleSheetSpriteData(529, param_1);
        pSVar1 = (SpriteData*)this_00->GetCursorMutex();
        pSVar1->LoadStyleSheetSpriteData(549, param_1);
        pSVar1 = (SpriteData*)this_00->SSOBeginPtr(549);
        pSVar1->LoadStyleSheetSpriteData(539, param_1);
    }

    // 0x1006917d0, 64 bytes, placed by class name
    // ComboField::GetEntryById(int) const
    undefined8 ComboField::GetEntryById(int param_1) {
        ushort uVar1;
        undefined8 uVar2;

        uVar1 = GetEntryIndexById(this, param_1);
        if (uVar1 == 65535) {
            uVar2 = 0;
        } else {
            uVar2 = eastl::vector<ComboField::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<ComboField::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_872,
                (ulong)uVar1);
        }
        return uVar2;
    }

    // 0x100691810, 80 bytes, placed by class name
    // ComboField::GetEntryIndexById(int) const
    undefined2 ComboField::GetEntryIndexById(int param_1) {
        undefined2 uVar1;
        long lVar2;
        long lVar3;
        int local_1c;

        local_1c = param_1;
        lVar2 = (&field_1232, &local_1c)->find();
        lVar3 = (&field_1232)->end();
        if (lVar2 == lVar3) {
            uVar1 = 65535;
        } else {
            uVar1 = *(undefined2*)(lVar2 + 4);
        }
        return uVar1;
    }

    // 0x1006918d0, 112 bytes, placed by class name
    // ComboField::ClearSelection(bool)
    void ComboField::ClearSelection(bool param_1) {
        char cVar1;
        int local_20[2];

        cVar1 = FlushSelectEvents(this);
        if ((cVar1 == '\0') && (param_1)) {
            cVar1 = HasValidSelection(this);
            if (cVar1 != '\0') {
                local_20[0] = GetSelectedValue(this);
                local_20[1] = 0;
                eastl::vector<ComponentMultiValueMixin::ValueChangeEvent,
                              eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                    emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(
                        (vector<ComponentMultiValueMixin::ValueChangeEvent,
                                eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false,
                                                              eastl::dummy_allocator>>*)&field_1280,
                        local_20, (Type*)(local_20 + 1));
            }
        }
        field_1264 = 65535;
    }

    // 0x100691940, 160 bytes, placed by class name
    // ComboField::FlushSelectEvents()
    ulong ComboField::FlushSelectEvents() {
        bool bVar1;
        int* piVar2;
        int* piVar3;
        undefined7 extraout_var;
        undefined1* this_00;
        undefined4 local_24;
        optional<game::option::EnumOptionToggle> local_20[8];

        eastl::optional<game::option::EnumOptionToggle>::optional(local_20);
        this_00 = &field_1280;
        piVar2 = (int*)this_00->HeapBeginPtr();
        piVar3 = (int*)this_00->end();
        do {
            if (piVar2 == piVar3) {
            LAB_10069199d:
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                bVar1 = local_20->IsActive();
                if (bVar1) {
                    piVar2 = (int*)eastl::optional<int>::value();
                    local_24 = 0;
                    eastl::vector<ComponentMultiValueMixin::ValueChangeEvent,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                        emplace_back<int&, ComponentMultiValueMixin::ValueChangeEvent::Type>(
                            (vector<ComponentMultiValueMixin::ValueChangeEvent,
                                    eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, false, eastl::dummy_allocator>>*)
                                this_00,
                            piVar2, (Type*)&local_24);
                }
                return CONCAT71(extraout_var, bVar1) & 4294967295;
            }
            if (piVar2[1] == 0) {
                eastl::optional<int>::operator=((optional<int>*)local_20, piVar2);
                goto LAB_10069199d;
            }
            piVar2 = piVar2 + 2;
        } while (true);
    }

    // 0x100691ad0, 352 bytes, placed by class name
    // ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)
    uint ComboField::SetEntries(UIDataMappingProvider* param_1) {
        undefined1* this_00;
        char cVar1;
        ushort uVar2;
        uint uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Entry* pEVar6;
        pair* ppVar7;
        ComboField* local_a0;
        function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0> local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar3 = (**(code**)(*(long*)param_1 + 24))(param_1);
        if ((char)uVar3 == '\0') {
            field_1264 = 65535;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            this_00 = &field_872;
            this_00->clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            local_a0 = this;
            fixedfunction::function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                ComboField::SetEntries(UIDataMappingProvider<int, StringView> const&)::__28, void>(local_98,
                                                                                                   (__28*)&local_a0);
            (**(code**)(*(long*)param_1 + 16))(param_1, local_98);
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                uVar4 = this_00->HeapBeginPtr();
                uVar5 = this_00->end();
                eastl::sort<ComboField::Entry*, (UIDataMappingProvider<int, StringView> const&)->SetEntries()::__29>(
                    uVar4, uVar5);
                (**(code**)(*(long*)param_1 + 48))(local_98, param_1);
                uVar4 = this_00->HeapBeginPtr();
                uVar5 = this_00->end();
                pEVar6 = eastl::find<ComboField::Entry*, StringView,
                                     (UIDataMappingProvider<int, StringView> const&)->SetEntries()::__30>(uVar4, uVar5,
                                                                                                          local_98);
                ppVar7 = (pair*)this_00->HeapBeginPtr();
                uVar2 = eastl::distance<eastl::pair<int, PendingSpotAnimation>*>(ppVar7, (pair*)pEVar6);
                field_1264 = uVar2;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3 ^ 1;
    }

    // 0x100691cf0, 320 bytes, placed by class name
    // ComboField::AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&, int)
    uint ComboField::AddEntry(basic_string* param_1, int param_2) {
        undefined1* this_00;
        ushort uVar1;
        char cVar2;
        short sVar3;
        uint uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        Entry* pEVar7;
        pair* ppVar8;
        long lVar9;
        uint uVar10;
        StringView SVar11;
        StringView local_70;
        Entry local_60;
        vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>* local_40;
        int local_38;
        ushort local_32;

        local_38 = param_2;
        uVar4 = HasEntry(this, param_2);
        if ((char)uVar4 == '\0') {
            local_40 = (vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                   eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>*)&field_1232;
            cVar2 = local_40->empty();
            if (cVar2 != '\0') {
                BuildIndexMap(this);
            }
            this_00 = &field_872;
            uVar5 = this_00->HeapBeginPtr();
            uVar6 = this_00->end();
            pEVar7 = eastl::lower_bound<ComboField::Entry*, eastl::basic_string<char, BucketAllocatorEASTL>,
                                        (eastl::basic_string<char, BucketAllocatorEASTL> const&)->AddEntry(int)::__31>(
                uVar5, uVar6, param_1);
            ppVar8 = (pair*)this_00->HeapBeginPtr();
            lVar9 = eastl::distance<eastl::pair<int, PendingSpotAnimation>*>(ppVar8, (pair*)pEVar7);
            uVar1 = field_1264;
            uVar10 = (uint)uVar1;
            if (((ulong)uVar1 != 65535) && (lVar9 <= (long)(ulong)uVar1)) {
                uVar10 = uVar1 + 1;
                field_1264 = (ushort)uVar10;
            }
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_70,
                                                                                          (fixed_string*)param_1);
            SVar11.field_8._0_4_ = local_38;
            SVar11.field_0 = (ulong)&local_70;
            SVar11.field_8._4_4_ = 0;
            new (&local_60) Entry(SVar11, uVar10);
            this_00->insert(pEVar7, &local_60);
            local_60.~__alt();
            sVar3 = this_00->size();
            local_32 = sVar3 - 1;
            eastl::pair<int, unsigned short>::pair<int&, unsigned short&, void>((pair<int, unsigned short>*)&local_60,
                                                                                &local_38, &local_32);
            eastl::vector_map<
                int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>::insert(local_40,
                                                                                               (pair*)&local_60);
        }
        return uVar4 ^ 1;
    }

    // 0x100691fb0, 160 bytes, placed by class name
    // ComboField::RemoveEntry(int)
    bool ComboField::RemoveEntry(int param_1) {
        undefined1* this_00;
        char cVar1;
        ushort uVar2;
        long lVar3;
        int local_24;

        uVar2 = GetEntryIndexById(this, param_1);
        if (uVar2 != 65535) {
            this_00 = &field_872;
            lVar3 = this_00->HeapBeginPtr();
            this_00->erase((Entry*)((ulong)uVar2 * 32 + lVar3));
            (&field_1232, &local_24)->erase();
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                if (uVar2 <= field_1264) {
                    field_1264 = field_1264 - 1;
                }
            } else {
                field_1264 = 65535;
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        }
        return uVar2 != 65535;
    }

    // 0x1006920f0, 48 bytes, placed by class name
    // ComboField::ReserveEntries(unsigned long)
    void ComboField::ReserveEntries(ulong param_1) {
        (&field_872, param_1)->reserve();
        (&field_1232, param_1)->reserve();
    }

    // 0x1006921a0, 96 bytes, placed by class name
    // ComboField::ClearEntries()
    void ComboField::ClearEntries() {
        (&field_872)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_1264 = 65535;
        CancelFocus(this);
        field_1322 = 0;
        field_1324 = 0;
        field_1328 = 0;
    }

    // 0x1006acf00: the linker folded this into Button::GetValueRepresentation(), which has identical code
    ComboField::GetValueRepresentation();

    // 0x1006c8710, 32 bytes, placed by class name
    // ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26::operator()(ScrollBar const&, int) const
    /* ComboField::LogicFocus(ComponentDependencies const&,
   bool)::$_26::TEMPNAMEPLACEHOLDERVALUE(ScrollBar const&, int) const */

    void ComboField::LogicFocus(ComponentDependencies_const&, bool)::$_26::operator()(ScrollBar* param_1, int param_2) {
        ScrollComboField(*(ComboField**)param_1, param_2 - (*(ComboField**)param_1)->field_1324);
    }

} // namespace jag::ui

// 0x10068e990, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}

// 0x10068ffd0, 16 bytes, placed by neighbouring functions
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf();
}

namespace jag::ui {
    namespace {
        // 0x100690ec0, 32 bytes, placed by neighbouring functions
        // SafeToLowerASCII(unsigned int)
        uint SafeToLowerASCII(uint param_1) {
            uint uVar1;

            uVar1 = param_1 + 32;
            if (25 < param_1 - 65) {
                uVar1 = param_1;
            }
            return uVar1;
        }

    } // namespace

} // namespace jag::ui
