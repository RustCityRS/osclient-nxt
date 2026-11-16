// libs/ui/components/List.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "List.h"
#include "libs/tweaky/Tweaky_List.h"

namespace jag::ui {
    // 0x100f3e9c8, 4 bytes, __data
    float List::m_dropdownExpandTimeMultiplier = 1.0f;

    // 0x100f3e9cc, 4 bytes, __data
    List::m_entryPadding = 3;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    List::GetSwipeable() const;

    // 0x1000694d0: the linker folded this into oldscape::MinimapElement::~MinimapElement(), which has identical code
    List::EntryIconData::~EntryIconData();

    // 0x1000782e0: the linker folded this into oldscape::MinimapElement::~MinimapElement(), which has identical code
    List::EntryIconData::~EntryIconData();

    // 0x100131800: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    List::Entry::~Entry();

    // 0x1001319d0: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    List::Entry::~Entry();

    // 0x100269c10: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString::GetID() const, which has identical code
    List::GetType() const;

    // 0x1002df410: the linker folded this into oldscape::jagex3::Js5::FileState::FileState(oldscape::jagex3::Js5::FileState&&), which has identical code
    List::EntryIconData::EntryIconData(List::EntryIconData&&);

    // 0x1002df420: the linker folded this into oldscape::jagex3::Js5::FileState::FileState(oldscape::jagex3::Js5::FileState&&), which has identical code
    List::EntryIconData::EntryIconData(List::EntryIconData&&);

    // 0x100412e50: the linker folded this into game::MapSquarePointLights::GetPointLightTexture(), which has identical code
    ComponentMultiValueMixin List::GetValueRepresentation();

    // 0x10068ec20: the linker folded this into ComboField::GetDropdownWidth() const, which has identical code
    List::GetDropdownListWidth() const;

    // 0x10069bb60, 704 bytes, base-object constructor, placed by class name
    // List::List(InterfaceManager*)
    void List::List(InterfaceManager* param_1) {
        undefined1* this_00;

        new (this) Component();
        new (field_392) FocusComponent();
        new (m_valueRepresentation) ComponentMultiValueMixin();
        new (this) MakeSharedPool<List, 64>();
        new (&field_408) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__List_100f0f100;
        *(undefined***)field_392 = &PTR__List_100f0f258;
        *(undefined***)m_valueRepresentation = &PTR__List_100f0f2c0;
        new (field_424) SpriteData();
        new (field_472) SpriteData();
        new (field_520) SpriteData();
        this_00 = field_568;
        new (this_00) TextData();
        new (field_632) InteractionVisualData();
        field_656 = '\0';
        field_657 = 1;
        field_658 = 10;
        field_659 = 100;
        field_660 = 0;
        field_661 = 0;
        new (&field_664) eastl::fixed_vector<List::Entry, 10ul, true, BucketAllocatorEASTL>();
        eastl::vector<List::EntryIconData, BucketAllocatorEASTL>::vector();
        new (&field_1048) eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                            eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>();
        new (&field_1080)
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, true, eastl::allocator>();
        new (&field_1136) eastl::fixed_vector<unsigned short, 1ul, true, BucketAllocatorEASTL>();
        field_1184 = 0;
        new (&field_1192) ScrollBar();
        new (&field_1360, 255) Margin();
        new (&field_1364, 255) Margin();
        field_1368 = 65535;
        field_1370 = 0;
        field_1372 = 0;
        *(undefined2*)&field_1376 = 0;
        *(undefined4*)&field_1377 = 0;
        field_1384 = 0.0;
        field_1388 = 0;
        *(undefined8*)((long)&field_1388 + 1) = 0;
        field_1400 = param_1;
        if (param_1 == (InterfaceManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_owningInterfaceManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      16, (char*)0);
        }
        SetEnabled(this, true);
        this_00->SetTextHAlign(0);
        this_00->SetTextVAlign(1);
    }

    // 0x10069bed0, 64 bytes, placed by class name
    // List::SetEnabled(bool)
    void List::SetEnabled(bool param_1) {
        undefined3 in_register_00000031;

        SetEnabled(param_1);
        if (CONCAT31(in_register_00000031, param_1) == 0) {
            field_1396 = 0;
            field_1368 = 65535;
            if (IsDropdown(this) != '\0') {
                CancelFocus(this);
            }
        }
    }

    // 0x10069bf50, 16 bytes, complete-object constructor, placed by class name
    // List::List(InterfaceManager*): jumps straight to the base-object constructor

    // 0x10069bf60, 416 bytes, base-object destructor, placed by class name
    // List::~List()
    void List::~List() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__List_100f0f100;
        *(undefined***)field_392 = &PTR__List_100f0f258;
        *(undefined***)m_valueRepresentation = &PTR__List_100f0f2c0;
        if (IsDropdown(this) != '\0') {
            CancelFocus(this);
        }
        (&field_1192)->~ScrollBar();
        (&field_1136)->~fixed_vector();
        (&field_1080)->~fixed_vector();
        (&field_1048)->~vector_map();
        (&field_1024)->~vector();
        (&field_664)->~fixed_vector();
        field_568->~TextData();
        field_520->~Sprite();
        field_472->~Sprite();
        field_424->~Sprite();
        (&field_408)->~enable_shared_from_this();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)m_valueRepresentation, in_RSI, extraout_RDX);
        field_392->~AutoSingleton();
        ~Component();
    }

    // 0x10069c110, 112 bytes, placed by class name
    // List::CancelFocus()
    void List::CancelFocus() {
        if (IsDropdown(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsDropdown()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      831, (char*)0);
        }
        if (field_1380 != '\0') {
            field_1380 = 0;
            field_1396 = 0;
            (&field_1192)->ClearInteractionState();
            (**(code**)(*(long*)field_1400 + 48))();
        }
    }

    // 0x10069c180, 16 bytes, complete-object destructor, placed by class name
    // List::~List(): jumps straight to the base-object destructor

    // 0x10069c1d0, 32 bytes, deleting destructor, placed by class name
    // List::~List()
    void List::~List() {
        ~List(this);
        operator_delete(this);
    }

    // 0x10069c230, 400 bytes, placed by class name
    // List::MainDraw(ComponentDependencies const&, int, int, float)
    void List::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        uint uVar1;
        ScaleManager* this_00;
        char cVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar6;
        float fVar7;
        Margin local_3c;
        Margin local_34;

        cVar2 = GetAlpha();
        if (cVar2 != '\0') {
            this_01 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
            pSVar6 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
            PrepareEntryIcons(this, pSVar6);
            cVar2 = IsDropdown(this);
            if (cVar2 == '\0') {
                DrawEntries(this, param_1, param_2, param_3);
            } else {
                if ((field_1380 != '\0') && (field_1384 < 1.0)) {
                    fVar7 = (float)eastl::min<float>(
                        (param_4 * 6.6666665) / *(float*)PTR_m_dropdownExpandTimeMultiplier_100ee6460 + field_1384,
                        1.0);
                    field_1384 = fVar7;
                }
                DrawDropdown(this, param_1, param_2, param_3);
                field_1388 = param_2;
                iVar4 = GetMinMapX();
                field_1392 = iVar4 + param_3 + 2;
                this_00 = *(ScaleManager**)(param_1 + 24);
                iVar4 = (*(RT7Core**)(param_1 + 16))->GetBackBufferHeight();
                iVar4 = this_00->ScreenToInterfaceSize(iVar4, false);
                local_3c = (Margin)field_520->GetVisualMargin();
                local_34 = (Margin)(&field_1360, &local_3c)->GetValidOr();
                uVar1 = field_1392;
                iVar5 = GetDropdownListHeight(this);
                bVar3 = local_34.GetHeight();
                if (iVar4 < (int)((uint)bVar3 + iVar5 + uVar1)) {
                    iVar4 = GetDropdownListHeight(this);
                    bVar3 = local_34.GetHeight();
                    field_1392 = (param_3 - ((uint)bVar3 + iVar4)) - 2;
                }
            }
        }
    }

    // 0x10069c3c0, 400 bytes, placed by class name
    // List::PrepareEntryIcons(graphics::SpriteAtlasManager&)
    ulong List::PrepareEntryIcons(SpriteAtlasManager* param_1) {
        shared_ptr* this_00;
        bool bVar1;
        char cVar2;
        int* piVar3;
        int* piVar4;
        SpriteAtlasReference* this_01;
        undefined8 unaff_R13;
        undefined7 uVar6;
        ulong uVar5;
        shared_ptr local_68;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        undefined8 local_48;
        uint local_34;

        piVar3 = (int*)(&field_1024)->HeapBeginPtr();
        piVar4 = (int*)(&field_1024)->end();
        uVar6 = (undefined7)((ulong)unaff_R13 >> 8);
        if (piVar3 == piVar4) {
            uVar5 = CONCAT71(uVar6, 1);
        } else {
            uVar5 = CONCAT71(uVar6, 1);
            do {
                if ((long)*piVar3 == 18446744073709551615) {
                    if (*(long*)(piVar3 + 2) != -1) {
                        piVar3[2] = -1;
                        piVar3[3] = -1;
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                    }
                } else {
                    if (*(long*)(piVar3 + 2) == -1) {
                        *(ulong*)(piVar3 + 2) = (long)*piVar3 | 262144;
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                    }
                    this_00 = (shared_ptr*)(piVar3 + 4);
                    bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    if (!bVar1) {
                        local_34 = (uint)uVar5;
                        local_48 = *(undefined8*)(piVar3 + 2);
                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                            local_58, (_func_decltype_nullptr*)0);
                        graphics::SpriteAtlasManager::GetSpriteReference(&local_68, param_1, local_48, local_58, 2);
                        shared_ptr<graphics::SpriteAtlasReference>::operator=(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_00, &local_68);
                        local_68.~shared_ptr();
                        local_58->~shared_ptr();
                        uVar5 = (ulong)local_34;
                    }
                    bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    if (bVar1) {
                        this_01 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                        cVar2 = this_01->IsReady();
                        uVar5 = uVar5 & 255;
                        if (cVar2 == '\0') {
                            uVar5 = 0;
                        }
                    }
                }
                piVar3 = piVar3 + 8;
            } while (piVar3 != piVar4);
        }
        return uVar5 & 4294967041;
    }

    // 0x10069c550, 1792 bytes, placed by class name
    // List::DrawDropdown(ComponentDependencies const&, int, int)
    void List::DrawDropdown(ComponentDependencies* param_1, int param_2, int param_3) {
        undefined1* this_00;
        undefined1* this_01;
        ushort uVar1;
        FontManager* this_02;
        FontHelpers* this_03;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        undefined4 uVar8;
        TextureManager* this_04;
        SpriteAtlasManager* pSVar9;
        undefined* puVar10;
        shared_ptr* psVar11;
        RT7Core* pRVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar13;
        shared_ptr* psVar14;
        MapArea* pMVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar16;
        Texture* pTVar17;
        SpriteAtlasReference* pSVar18;
        undefined8 uVar19;
        ushort* puVar20;
        long lVar21;
        shared_ptr<graphics::SpriteAtlas>* this_05;
        Layout* this_06;
        vector* this_07;
        uchar* puVar22;
        byte bVar23;
        StringView SVar24;
        StringView SVar25;
        Texture* in_stack_ffffffffffffff28;
        undefined4 uVar26;
        StringView local_c8;
        StringView local_b8;
        TextProperties local_a8;
        Margin local_80;
        int local_7c;
        Texture* local_78;
        RT7Core* local_70;
        ComponentDependencies* local_68;
        Texture* local_60;
        int local_54;
        RT7Core* local_50;
        int local_48;
        undefined4 uStack_44;
        uint local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_68 = param_1;
        local_3c = param_3;
        local_34 = param_2;
        this_04 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
        pSVar9 = (SpriteAtlasManager*)this_04->GetSpriteAtlasManager();
        this_00 = field_472;
        puVar10 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar9, false);
        if (puVar10 == DataStatus::READY) {
            this_01 = field_424;
            cVar2 = this_01->IsSpriteValid();
            if ((cVar2 == '\0') || (puVar10 = (undefined*)this_01->LoadSpriteAtlasReference(pSVar9, false),
                                    puVar10 == DataStatus::READY)) {
                psVar11 = (shared_ptr*)this_00->GetDefaultValue();
                pRVar12 = (RT7Core*)this_01->GetDefaultValue();
                bVar3 = shared_ptr::operator_cast_to_bool(psVar11);
                if ((bVar3) && ((cVar2 = this_01->IsSpriteValid(),
                                 cVar2 == '\0' || (bVar3 = pRVar12->operator_cast_to_bool(), bVar3)))) {
                    local_50 = pRVar12;
                    local_48 = GetDropdownHeaderVisualState(this);
                    pcVar13 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)psVar11);
                    psVar14 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar13);
                    bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
                    local_60 = (Texture*)CONCAT71(local_60._1_7_, bVar3);
                    if (bVar3) {
                        pMVar15 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)psVar14);
                        pvVar16 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar15->GetOrigin();
                        pTVar17 =
                            (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                pvVar16);
                        if (pTVar17 != (Texture*)0) {
                            local_78 = pTVar17;
                            pSVar18 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)psVar11);
                            pSVar18->GetRenderMapping();
                            GetVisualUV((List*)&local_a8);
                            local_70 = *(RT7Core**)(local_68 + 16);
                            local_54 = local_34;
                            local_7c = local_3c;
                            iVar4 = GetStreamCountLastMix();
                            iVar5 = GetMinMapX();
                            uVar6 = GetRGBA();
                            in_stack_ffffffffffffff28 = local_78;
                            this_00->DrawSpriteSlice(local_70, local_54, local_7c, iVar4, iVar5, uVar6,
                                                     (Rect*)&local_a8, local_78, 0.0);
                        }
                    } else {
                        uVar19 = logger::default_logger();
                        logger::Logger::Log(uVar19, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                            "components/List.cpp",
                                            1120, "Invalid header sprite atlas reference!");
                    }
                    if ((char)local_60 != '\0') {
                        local_38 = GetStreamCountLastMix();
                        local_40 = GetMinMapX();
                        iVar4 = local_34;
                        local_a8.m_pFont._0_4_ = this_00->GetVisualMargin();
                        local_80 = (Margin)(&field_1364, (Margin*)&local_a8)->GetValidOr();
                        local_80.ApplyTo(&local_34, &local_3c, &local_38, (int*)&local_40);
                        pRVar12 = local_50;
                        bVar3 = local_50->operator_cast_to_bool();
                        if (bVar3) {
                            pcVar13 = (compressed_pair_imp<
                                       std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                              (shared_ptr<graphics::SpriteAtlasReference>*)pRVar12);
                            psVar11 = (shared_ptr*)eastl::compressed_pair_imp<
                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                eastl::allocator, 0>::second(pcVar13);
                            bVar3 = shared_ptr::operator_cast_to_bool(psVar11);
                            if (bVar3) {
                                pMVar15 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                                    (shared_ptr<graphics::SpriteAtlas>*)psVar11);
                                pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                              pMVar15->GetOrigin();
                                pTVar17 = (Texture*)
                                    eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                        pvVar16);
                                if (pTVar17 != (Texture*)0) {
                                    local_60 = pTVar17;
                                    pSVar18 =
                                        (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                            (shared_ptr<graphics::SpriteAtlasReference>*)local_50);
                                    pSVar18->GetRenderMapping();
                                    GetVisualUV((List*)&local_a8);
                                    bVar23 = field_660;
                                    if (bVar23 == 0) {
                                        iVar5 = local_3c;
                                        uVar6 = local_40;
                                    } else {
                                        iVar5 = local_3c + (int)(local_40 - bVar23) / 2;
                                        uVar6 = (uint)bVar23;
                                    }
                                    local_48 = iVar5;
                                    iVar5 = GetStreamCountLastMix();
                                    bVar23 = field_661;
                                    local_50 = *(RT7Core**)(local_68 + 16);
                                    uVar7 = GetRGBA();
                                    in_stack_ffffffffffffff28 = local_60;
                                    this_01->DrawSpriteSlice(local_50, (iVar4 + iVar5) - (bVar23 + uVar6), local_48,
                                                             uVar6, uVar6, uVar7, (Rect*)&local_a8, local_60, 0.0);
                                }
                            } else {
                                uVar19 = logger::default_logger();
                                logger::Logger::Log(uVar19, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/ui/components/List.cpp",
                                                    1147, "Invalid button sprite atlas reference!");
                            }
                            if (!bVar3) {
                                return;
                            }
                        }
                        cVar2 = (&field_1136)->empty();
                        if (cVar2 == '\0') {
                            this_02 = *(FontManager**)(local_68 + 8);
                            local_60 = (Texture*)field_568;
                            iVar4 = local_60->GetEndPosition();
                            new (&local_a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            psVar11 = (shared_ptr*)this_02->GetFont(iVar4, (shared_ptr*)&local_a8);
                            local_a8.~shared_ptr();
                            bVar3 = shared_ptr::operator_cast_to_bool(psVar11);
                            puVar10 = PTR_m_entryPadding_100ee6458;
                            if (bVar3) {
                                iVar4 = *(int*)PTR_m_entryPadding_100ee6458;
                                local_34 = local_34 + iVar4;
                                local_3c = local_3c + iVar4;
                                local_38 = local_38 + iVar4 * -2;
                                local_40 = local_40 + iVar4 * -2;
                                puVar20 = (ushort*)eastl::vector<
                                    unsigned short,
                                    eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>::
                                operator[]((vector<unsigned short,
                                                   eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true,
                                                                                 BucketAllocatorEASTL>>*)&field_1136,
                                           0);
                                uVar1 = *puVar20;
                                local_50 = (RT7Core*)
                                    eastl::vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                             BucketAllocatorEASTL>>::
                                    operator[]((vector<List::Entry,
                                                       eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                     BucketAllocatorEASTL>>*)&field_664,
                                               (ulong)uVar1);
                                cVar2 = (&field_1024)->empty();
                                if (cVar2 == '\0') {
                                    lVar21 = eastl::vector<List::EntryIconData, BucketAllocatorEASTL>::operator[](
                                        (vector<List::EntryIconData, BucketAllocatorEASTL>*)&field_1024, (ulong)uVar1);
                                    psVar14 = (shared_ptr*)(lVar21 + 16);
                                    bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
                                    if (bVar3) {
                                        pSVar18 = (SpriteAtlasReference*)
                                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                          (shared_ptr<graphics::SpriteAtlasReference>*)psVar14);
                                        cVar2 = pSVar18->IsReady();
                                        if (cVar2 != '\0') {
                                            pcVar13 =
                                                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo,
                                                                                std::allocator<ThreadPool::TaskInfo>>*,
                                                                     eastl::allocator, 0>*)
                                                    shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                        (shared_ptr<graphics::SpriteAtlasReference>*)psVar14);
                                            uVar26 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 32);
                                            this_05 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                                eastl::allocator, 0>::second(pcVar13);
                                            pMVar15 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(this_05);
                                            pvVar16 =
                                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    pMVar15->GetOrigin();
                                            _local_48 = eastl::vector<oldscape::dash3d::EntityHighlight*,
                                                                      BucketAllocatorEASTL>::end(pvVar16);
                                            pSVar18 = (SpriteAtlasReference*)
                                                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                              (shared_ptr<graphics::SpriteAtlasReference>*)psVar14);
                                            lVar21 = pSVar18->GetRenderMapping();
                                            new (&local_a8) math::Float4((Vector4T*)(lVar21 + 88));
                                            pTVar17 = local_60;
                                            iVar4 = field_659 * local_40;
                                            bVar23 = (byte)((ulong)(long)iVar4 >> 63);
                                            iVar4 = iVar4 / 100;
                                            iVar5 = (int)(local_40 - iVar4) / 2 + local_3c;
                                            local_38 = local_38 - (*(int*)puVar10 + iVar4);
                                            cVar2 = local_60->GetTextHAlign();
                                            local_78 = (Texture*)CONCAT44(local_78._4_4_, iVar5);
                                            if (cVar2 == '\0') {
                                                iVar5 = local_34;
                                                local_34 = local_34 + iVar4 + *(int*)PTR_m_entryPadding_100ee6458;
                                            } else {
                                                cVar2 = pTVar17->GetTextHAlign();
                                                if (cVar2 == '\x02') {
                                                    iVar5 = (local_34 + local_38) -
                                                            (*(int*)PTR_m_entryPadding_100ee6458 + iVar4);
                                                } else {
                                                    pRVar12 = local_50;
                                                    StringView::StringView<
                                                        eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                                        &local_c8, (fixed_string*)local_50);
                                                    this_06 = (Layout*)shared_ptr<graphics::Font>::operator->(
                                                        (shared_ptr<graphics::Font>*)psVar11);
                                                    this_07 =
                                                        eastl::string::Layout::SSOBeginPtr(this_06, (type*)pRVar12);
                                                    puVar22 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*(
                                                        (shared_ptr<graphics::FontMetrics>*)this_07);
                                                    SVar25.field_8 = puVar22;
                                                    SVar25.field_0 = (ulong)&local_c8;
                                                    iVar5 = graphics::FontHelpers::GetStringWidth(
                                                        SVar25, (FontMetrics*)0, (bool)bVar23);
                                                    iVar5 = (local_34 - iVar4) + (local_38 - iVar5) / 2;
                                                }
                                            }
                                            local_70 = (RT7Core*)(*(RT7Core**)(local_68 + 16))->GetGUIManager();
                                            pTVar17 = local_78;
                                            local_54 = iVar5 + iVar4;
                                            iVar4 = iVar4 + (int)local_78;
                                            uVar8 = GetRGBA();
                                            in_stack_ffffffffffffff28 = (Texture*)CONCAT44(uVar26, 1);
                                            local_70->AddElement(iVar5, (ulong)pTVar17 & 4294967295, local_54, iVar4,
                                                                 uVar8, &local_a8, _local_48);
                                        }
                                    }
                                }
                                new (&local_a8) graphics::TextProperties(psVar11);
                                uVar6 = GetRGBA();
                                local_60->PopulateTextProperties(&local_a8, uVar6, field_100);
                                this_03 = *(FontHelpers**)local_68;
                                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                    &local_b8, (fixed_string*)local_50);
                                SVar24.field_8._0_4_ = local_34;
                                SVar24.field_0 = (ulong)&local_b8;
                                SVar24.field_8._4_4_ = 0;
                                this_03->DrawStringMultiline(SVar24, local_3c, local_38, local_40, 0, (uint*)&local_a8,
                                                             in_stack_ffffffffffffff28);
                            }
                        } else {
                            cVar2 = (&field_664)->empty();
                            if (cVar2 == '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m_entries.empty()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                          "components/List.cpp",
                                          1248, (char*)0);
                            }
                        }
                    }
                } else {
                    uVar19 = logger::default_logger();
                    logger::Logger::Log(
                        uVar19, 0, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                        1108, "Invalid sprite atlas reference!");
                }
            }
        }
    }

    // 0x10069cc90, 2576 bytes, placed by class name
    // List::DrawEntries(ComponentDependencies const&, int, int)
    void List::DrawEntries(ComponentDependencies* param_1, int param_2, int param_3) {
        undefined1* puVar1;
        FontManager* this_00;
        FontHelpers* this_01;
        TextData* this_02;
        ScrollBar* this_03;
        uint uVar2;
        bool bVar3;
        byte bVar4;
        char cVar5;
        undefined1 uVar6;
        ushort uVar7;
        ushort uVar8;
        undefined2 uVar9;
        int iVar10;
        uint uVar11;
        uint uVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        TextureManager* this_04;
        SpriteAtlasManager* pSVar15;
        undefined* puVar16;
        shared_ptr* psVar17;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar18;
        shared_ptr* this_05;
        MapArea* pMVar19;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar20;
        undefined8 uVar21;
        SpriteAtlasReference* pSVar22;
        long lVar23;
        Entry* this_06;
        shared_ptr<graphics::SpriteAtlas>* this_07;
        fixed_string* pfVar24;
        Layout* this_08;
        vector* this_09;
        uchar* puVar25;
        undefined8 uVar26;
        char* pcVar27;
        ComponentDependencies* pCVar28;
        int iVar29;
        ulong uVar30;
        ulong uVar31;
        float fVar32;
        StringView SVar33;
        StringView SVar34;
        undefined8 in_stack_fffffffffffffe98;
        Texture* in_stack_fffffffffffffea8;
        undefined1 local_148[40];
        optional<int> local_120[8];
        StringView local_118;
        TextProperties local_108;
        undefined1 local_e0[24];
        undefined8 local_c8;
        TextData* local_c0;
        ulong local_b8;
        uint local_ac;
        ScrollBar* local_a8;
        shared_ptr* local_a0;
        Margin local_94;
        GUIManager* local_90;
        ulong local_88;
        ComponentDependencies* local_80;
        int local_74;
        Texture* local_70;
        List* local_68;
        uint local_60;
        uint local_5c;
        uint local_58;
        char local_51;
        RT7Core* local_50;
        uint local_48;
        uint local_44;
        uint local_40;
        bool local_39;
        uint local_38;
        char local_31;

        puVar1 = field_520;
        local_60 = param_3;
        local_44 = param_2;
        this_04 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
        pSVar15 = (SpriteAtlasManager*)this_04->GetSpriteAtlasManager();
        puVar16 = (undefined*)puVar1->LoadSpriteAtlasReference(pSVar15, false);
        if (puVar16 == DataStatus::READY) {
            psVar17 = (shared_ptr*)puVar1->GetDefaultValue();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar17);
            if (bVar3) {
                pcVar18 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar17);
                this_05 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar18);
                bVar3 = shared_ptr::operator_cast_to_bool(this_05);
                if (bVar3) {
                    pMVar19 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_05);
                    pvVar20 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar19->GetOrigin();
                    local_70 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar20);
                    new (local_148) graphics::ClippingState(*(RT7Core**)(param_1 + 16));
                    (*(RT7Core**)(param_1 + 16))->SetClippingRectToViewport();
                    local_108.m_pFont._0_4_ = puVar1->GetVisualMargin();
                    local_94 = (Margin)(&field_1360, (Margin*)&local_108)->GetValidOr();
                    if (field_1380 == '\0') {
                        local_5c = GetStreamCountLastMix();
                    } else {
                        local_5c = GetTextAreaWidth();
                    }
                    local_80 = param_1;
                    if (field_1380 == '\0') {
                        iVar10 = GetMinMapX();
                    } else {
                        local_50._0_4_ = field_1384;
                        iVar10 = GetDropdownListHeight(this);
                        local_50 = (RT7Core*)CONCAT44(local_50._4_4_, local_50._0_4_ * (float)iVar10);
                        bVar4 = local_94.GetHeight();
                        iVar10 = (int)((float)bVar4 + local_50._0_4_);
                    }
                    uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 32);
                    local_74 = iVar10;
                    if (local_70 != (Texture*)0) {
                        local_50 = *(RT7Core**)(local_80 + 16);
                        local_38 = local_44;
                        local_58 = local_60;
                        local_40 = local_5c;
                        uVar11 = GetRGBA();
                        uVar12 = puVar1->GetSpriteRGBA();
                        uVar11 = math::Multiply(uVar11, uVar12);
                        pSVar22 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar17);
                        lVar23 = pSVar22->GetRenderMapping();
                        in_stack_fffffffffffffe98 = CONCAT44(uVar14, uVar11);
                        in_stack_fffffffffffffea8 = local_70;
                        puVar1->DrawSpriteSlice(local_50, local_38, local_58, local_40, iVar10, uVar11,
                                                (Rect*)(lVar23 + 88), local_70, 0.0);
                    }
                    pCVar28 = local_80;
                    this_00 = *(FontManager**)(local_80 + 8);
                    puVar1 = field_568;
                    iVar10 = puVar1->GetEndPosition();
                    new (&local_108) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar17 = (shared_ptr*)this_00->GetFont(iVar10, (shared_ptr*)&local_108);
                    local_108.~shared_ptr();
                    local_a0 = psVar17;
                    bVar3 = shared_ptr::operator_cast_to_bool(psVar17);
                    if (bVar3) {
                        local_94.ApplyTo((int*)&local_44, (int*)&local_60, (int*)&local_5c, &local_74);
                        (*(RT7Core**)(pCVar28 + 16))
                            ->SetClippingRectangle(local_44, local_60, local_5c, local_74, true);
                        uVar11 = local_60;
                        local_58 = local_74 + local_60;
                        local_40 = GetRGBA();
                        local_31 = IsScrollBarNeeded(this);
                        local_e0._16_8_ = &field_1024;
                        local_51 = local_e0._16_8_->empty();
                        local_90 = (GUIManager*)(*(RT7Core**)(pCVar28 + 16))->GetGUIManager();
                        local_39 = true;
                        if (field_657 != 1) {
                            bVar4 = (&field_1136)->size();
                            local_39 = bVar4 < field_657;
                        }
                        if (local_31 != '\0') {
                            fVar32 = (float)fmod((float)(int)field_1372, (float)field_658);
                            uVar11 = uVar11 - (int)fVar32;
                        }
                        new (&local_108) graphics::TextProperties(local_a0);
                        puVar1->PopulateBasicTextProperties(&local_108);
                        uVar8 = field_1370;
                        uVar30 = (ulong)uVar8;
                        local_70 = (Texture*)&field_664;
                        local_a8 = (ScrollBar*)&field_1192;
                        local_c0 = (TextData*)puVar1;
                        uVar7 = local_70->size();
                        if ((uVar8 < uVar7) && ((int)uVar11 < (int)local_58)) {
                            local_68 = this;
                            do {
                                uVar31 = uVar30 & 65535;
                                this_06 = (Entry*)eastl::vector<
                                    List::Entry,
                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                                operator[](
                                    (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                       BucketAllocatorEASTL>>*)local_70,
                                    uVar31);
                                cVar5 = this_06->IsVisible();
                                uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 32);
                                if (cVar5 != '\0') {
                                    local_38 = local_c0->GetTextRGBA();
                                    uVar12 = local_5c;
                                    if (local_31 != '\0') {
                                        bVar4 = local_a8->GetSize();
                                        uVar12 = uVar12 - bVar4;
                                    }
                                    puVar16 = PTR_m_entryPadding_100ee6458;
                                    cVar5 = this_06->IsEnabled();
                                    uVar2 = local_44;
                                    local_50 = (RT7Core*)CONCAT44(local_50._4_4_, uVar11);
                                    if (cVar5 == '\0') {
                                        local_38 = *(uint*)local_68->field_632;
                                        bVar4 = local_68->field_658;
                                        uVar13 = math::Multiply(*(uint*)(local_68->field_632 + 4), local_40);
                                        local_90->AddColouredRectangle(uVar2, (ulong)local_50 & 4294967295, uVar12,
                                                                       bVar4, uVar13, CONCAT44(uVar14, 1));
                                    } else {
                                        cVar5 = this_06->IsSelected();
                                        uVar11 = local_44;
                                        if (cVar5 == '\0') {
                                            if (local_39 == false) {
                                                local_38 = *(uint*)local_68->field_632;
                                            } else if ((short)uVar30 == local_68->field_1368) {
                                                local_38 = *(uint*)(local_68->field_632 + 8);
                                                bVar4 = local_68->field_658;
                                                uVar13 = math::Multiply(*(uint*)(local_68->field_632 + 12), local_40);
                                                local_90->AddColouredRectangle(uVar11, (ulong)local_50 & 4294967295,
                                                                               uVar12, bVar4, uVar13,
                                                                               CONCAT44(uVar14, 1));
                                            }
                                        } else {
                                            local_38 = *(uint*)(local_68->field_632 + 16);
                                            if (((short)uVar30 == local_68->field_1368) && (local_68->field_657 != 1)) {
                                                bVar4 = local_68->field_658;
                                                uVar13 = math::Multiply(*(uint*)(local_68->field_632 + 12), local_40);
                                                local_90->AddColouredRectangle(uVar11, (ulong)local_50 & 4294967295,
                                                                               uVar12, bVar4, uVar13,
                                                                               CONCAT44(uVar14, 1));
                                            } else {
                                                bVar4 = local_68->field_658;
                                                uVar13 = math::Multiply(*(uint*)(local_68->field_632 + 20), local_40);
                                                local_90->AddColouredRectangle(uVar11, (ulong)local_50 & 4294967295,
                                                                               uVar12, bVar4, uVar13,
                                                                               CONCAT44(uVar14, 1));
                                            }
                                        }
                                    }
                                    uVar11 = local_44 + *(int*)puVar16;
                                    uVar12 = uVar12 + *(int*)puVar16 * -2;
                                    if (local_51 == '\0') {
                                        lVar23 = eastl::vector<List::EntryIconData, BucketAllocatorEASTL>::operator[](
                                            (vector<List::EntryIconData, BucketAllocatorEASTL>*)local_e0._16_8_,
                                            uVar31);
                                        psVar17 = (shared_ptr*)(lVar23 + 16);
                                        bVar3 = shared_ptr::operator_cast_to_bool(psVar17);
                                        if (!bVar3)
                                            goto LAB_10069d390;
                                        pSVar22 = (SpriteAtlasReference*)
                                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                          (shared_ptr<graphics::SpriteAtlasReference>*)psVar17);
                                        cVar5 = pSVar22->IsReady();
                                        if (cVar5 == '\0')
                                            goto LAB_10069d390;
                                        pcVar18 =
                                            (compressed_pair_imp<
                                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                                eastl::allocator, 0>*)
                                                shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar17);
                                        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffea8 >> 32);
                                        this_07 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                            eastl::allocator, 0>::second(pcVar18);
                                        pMVar19 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(this_07);
                                        pvVar20 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                      pMVar19->GetOrigin();
                                        local_c8 = eastl::vector<oldscape::dash3d::EntityHighlight*,
                                                                 BucketAllocatorEASTL>::end(pvVar20);
                                        pSVar22 = (SpriteAtlasReference*)
                                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                          (shared_ptr<graphics::SpriteAtlasReference>*)psVar17);
                                        lVar23 = pSVar22->GetRenderMapping();
                                        new (local_e0) math::Float4((Vector4T*)(lVar23 + 88));
                                        this_02 = local_c0;
                                        bVar4 = local_68->field_658;
                                        local_ac = (uint)bVar4;
                                        uVar30 = (ulong)(local_68->field_659 * local_ac) / 100;
                                        uVar12 = uVar12 - (*(int*)PTR_m_entryPadding_100ee6458 + (int)uVar30);
                                        cVar5 = local_c0->GetTextHAlign();
                                        local_88 = (ulong)uVar12;
                                        if (cVar5 == '\0') {
                                            local_48 = (int)uVar30 + uVar11 + *(int*)PTR_m_entryPadding_100ee6458;
                                            uVar12 = uVar11;
                                        } else {
                                            local_b8 = uVar30;
                                            cVar5 = this_02->GetTextHAlign();
                                            if (cVar5 == '\x02') {
                                                uVar30 = local_b8;
                                                uVar12 = (uVar11 + uVar12) -
                                                         (*(int*)PTR_m_entryPadding_100ee6458 + (int)local_b8);
                                                local_48 = uVar11;
                                            } else {
                                                pfVar24 = (fixed_string*)eastl::vector<
                                                    List::Entry,
                                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                  BucketAllocatorEASTL>>::
                                                operator[](
                                                    (vector<List::Entry,
                                                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                          BucketAllocatorEASTL>>*)
                                                        local_70,
                                                    uVar31);
                                                StringView::StringView<
                                                    eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                                    (StringView*)(local_148 + 24), pfVar24);
                                                this_08 = (Layout*)shared_ptr<graphics::Font>::operator->(
                                                    (shared_ptr<graphics::Font>*)local_a0);
                                                this_09 = eastl::string::Layout::SSOBeginPtr(this_08, (type*)pfVar24);
                                                puVar25 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*(
                                                    (shared_ptr<graphics::FontMetrics>*)this_09);
                                                SVar34.field_8 = puVar25;
                                                SVar34.field_0 = (ulong)(local_148 + 24);
                                                iVar10 = graphics::FontHelpers::GetStringWidth(SVar34, (FontMetrics*)0,
                                                                                               (bool)bVar4);
                                                uVar30 = local_b8;
                                                uVar12 = (uVar11 - (int)local_b8) + (int)(uVar12 - iVar10) / 2;
                                                local_48 = uVar11;
                                            }
                                        }
                                        iVar29 = (int)uVar30;
                                        iVar10 = (int)(local_ac - iVar29) / 2 + (int)local_50._0_4_;
                                        in_stack_fffffffffffffea8 = (Texture*)CONCAT44(uVar14, 1);
                                        local_90->AddElement(uVar12, iVar10, uVar12 + iVar29, iVar29 + iVar10, local_40,
                                                             local_e0, local_c8);
                                    } else {
                                    LAB_10069d390:
                                        local_88 = (ulong)uVar12;
                                        local_48 = uVar11;
                                    }
                                    this = local_68;
                                    pCVar28 = local_80;
                                    uVar14 = math::Multiply(local_40, local_38);
                                    local_e0._0_4_ = ZEXT14(field_100);
                                    eastl::optional<int>::optional(local_120, (int*)local_e0);
                                    local_108.SetColours(uVar14, local_120);
                                    this_01 = *(FontHelpers**)pCVar28;
                                    pfVar24 = (fixed_string*)eastl::vector<
                                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                   BucketAllocatorEASTL>>::
                                    operator[](
                                        (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                           BucketAllocatorEASTL>>*)
                                            local_70,
                                        uVar31);
                                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                        &local_118, pfVar24);
                                    in_stack_fffffffffffffe98 = 0;
                                    SVar33.field_8._0_4_ = local_48;
                                    SVar33.field_0 = (ulong)&local_118;
                                    SVar33.field_8._4_4_ = 0;
                                    this_01->DrawStringMultiline(SVar33, (int)local_50._0_4_, (int)local_88,
                                                                 (uint)field_658, 0, (uint*)&local_108,
                                                                 (TextProperties*)in_stack_fffffffffffffea8);
                                    uVar11 = (int)local_50._0_4_ + (uint)field_658;
                                }
                                uVar30 = (ulong)((int)uVar31 + 1);
                                psVar17 = (shared_ptr*)(uVar30 & 65535);
                                uVar8 = local_70->size();
                            } while (((uint)psVar17 < (uint)uVar8) && ((int)uVar11 < (int)local_58));
                        }
                        if (local_31 != '\0') {
                            bVar4 = field_100;
                            cVar5 = IsDropdown(this);
                            if (cVar5 == '\0') {
                                iVar10 = (int)CONCAT71((int7)((ulong)psVar17 >> 8), bVar4);
                            } else {
                                iVar10 = (int)((float)bVar4 * field_1384);
                            }
                            local_70 = (Texture*)CONCAT44(local_70._4_4_, iVar10);
                            uVar9 = GetNumVisibleEntries(this);
                            uVar11 = local_5c;
                            this_03 = local_a8;
                            local_88 = CONCAT62(local_88._2_6_, uVar9);
                            local_50 = *(RT7Core**)(pCVar28 + 16);
                            local_58 = local_44;
                            uVar6 = local_a8->GetSize();
                            local_48 = CONCAT31(local_48._1_3_, uVar6);
                            local_38 = local_60;
                            uVar12 = this_03->GetSize();
                            iVar10 = local_74;
                            local_40 = field_1372;
                            bVar4 = field_658;
                            bVar3 = (bool)IsEnabled();
                            local_a8->Draw(local_50, (uVar11 + local_58) - (local_48 & 255), local_38, uVar12 & 255,
                                           iVar10, local_40, (uint)bVar4 * (uint)(ushort)local_88, bVar3,
                                           (uchar)local_70);
                        }
                    }
                    local_148->~ClippingState();
                    return;
                }
                uVar21 = logger::default_logger();
                pcVar27 = "Invalid sprite atlas!";
                uVar26 = 1272;
            } else {
                uVar21 = logger::default_logger();
                pcVar27 = "Invalid sprite atlas reference!";
                uVar26 = 1264;
            }
            logger::Logger::Log(
                uVar21, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", uVar26,
                pcVar27);
        }
    }

    // 0x10069d6a0, 768 bytes, placed by class name
    // List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void List::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                         bool param_6, bool param_7) {
        undefined1* this_00;
        undefined2* puVar1;
        ushort uVar2;
        long* plVar3;
        char cVar4;
        byte bVar5;
        byte bVar6;
        bool bVar7;
        int iVar8;
        int iVar9;
        int* piVar10;
        Entry* pEVar11;
        undefined7 in_register_00000089;
        shared_ptr local_68;
        int local_54;
        uint local_50;
        undefined4 local_4c;
        Vector2T<int> local_48[16];
        ushort local_32;

        cVar4 = IsEnabled();
        if (cVar4 != '\0') {
            iVar9 = *(int*)&field_1376;
            if (iVar9 != 0) {
                iVar8 = 0;
                if (2 < iVar9 + 1U) {
                    ScrollList(this, iVar9);
                    iVar8 = *(int*)&field_1376 / 2;
                }
                *(int*)&field_1376 = iVar8;
            }
            cVar4 = IsDropdown(this);
            if (cVar4 == '\0') {
                cVar4 = IsScrollBarNeeded(this);
                if (cVar4 != '\0') {
                    local_4c = (undefined4)CONCAT71(in_register_00000089, param_5);
                    local_32 = GetNumVisibleEntries(this);
                    local_68._0_8_ = this;
                    GetScrollAreaBounds((List*)local_48, (int)this, param_2);
                    iVar9 = local_48->Right();
                    this_00 = &field_1192;
                    bVar5 = this_00->GetSize();
                    piVar10 = (int*)local_48->y();
                    local_54 = *piVar10;
                    bVar6 = this_00->GetSize();
                    local_50 = (uint)bVar6;
                    piVar10 = (int*)local_48->qw();
                    bVar7 = ScrollBar::ProcessInput<List::MainLogic(ComponentDependencies_const&, int, int, bool, bool,
                                                                    bool, bool)::__53&>(
                        (ScrollBar*)this_00, (MouseState*)(param_1 + 56), iVar9 - (uint)bVar5, local_54, local_50,
                        *piVar10, (Rect*)local_48, field_1372, (uint)local_32 * (uint)field_658, (uint)field_658,
                        (__53*)&local_68);
                    if (bVar7) {
                        field_1368 = 65535;
                        return;
                    }
                    param_5 = SUB41(local_4c, 0);
                }
                if (param_6) {
                    iVar9 = ScrollListWithScaling(this, *(int*)(param_1 + 68));
                    *(int*)&field_1376 = *(int*)&field_1376 + iVar9;
                }
                if (param_4) {
                    field_1396 = 1;
                }
                field_1368 = 65535;
                if (param_6) {
                    puVar1 = &field_1368;
                    cVar4 = GetEntryIndexAtPos(this, param_2, param_3, (Vector2T*)(param_1 + 60), puVar1);
                    if (cVar4 != '\0') {
                        pEVar11 =
                            (Entry*)eastl::vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                             BucketAllocatorEASTL>>::
                            operator[](
                                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                   BucketAllocatorEASTL>>*)&field_664,
                                (ulong)(ushort)field_1368);
                        cVar4 = pEVar11->IsEnabled();
                        if (cVar4 == '\0') {
                            *puVar1 = 65535;
                        }
                    }
                    if (field_1396 == '\0') {
                        return;
                    }
                    if (param_4) {
                        return;
                    }
                    if (param_5 != false) {
                        return;
                    }
                    uVar2 = *puVar1;
                    if ((ulong)uVar2 != 65535) {
                        pEVar11 =
                            (Entry*)eastl::vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                             BucketAllocatorEASTL>>::
                            operator[](
                                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                   BucketAllocatorEASTL>>*)&field_664,
                                (ulong)uVar2);
                        bVar5 = pEVar11->IsSelected();
                        SetEntrySelectedByIndex(this, uVar2, (bool)(bVar5 ^ 1), true);
                        field_1368 = 65535;
                    }
                }
                field_1396 = 0;
            } else if (param_4) {
                if ((field_1380 == '\0') && (cVar4 = (&field_664)->empty(), cVar4 == '\0')) {
                    field_1368 = 65535;
                    field_1380 = 1;
                    field_1384 = 0.0;
                    plVar3 = *(long**)(param_1 + 48);
                    local_68.shared_from_this();
                    shared_ptr<FocusComponent>::shared_ptr<List, void>((shared_ptr<FocusComponent>*)local_48,
                                                                       &local_68);
                    (**(code**)(*plVar3 + 40))(plVar3, local_48);
                    local_48->~shared_ptr();
                    local_68.~shared_ptr();
                    return;
                }
                CancelFocus(this);
            }
        }
    }

    // 0x10069d9a0, 272 bytes, placed by class name
    // List::ScrollList(int)
    int List::ScrollList(int param_1) {
        ushort uVar2;
        int iVar3;
        int iVar4;
        float fVar5;
        int local_34[3];

        if (param_1 == 0) {
            param_1 = 0;
        } else {
            uVar2 = GetNumVisibleEntries(this);
            iVar4 = (uint)field_658 * (uint)uVar2;
            iVar3 = GetEntryAreaHeight(this);
            local_34[0] = iVar4 - iVar3;
            if (local_34[0] == 0 || iVar4 < iVar3) {
                field_1372 = 0;
                field_1370 = 0;
                param_1 = 0;
            } else {
                local_34[2] = field_1372 + param_1;
                if (local_34[2] < 0) {
                    field_1372 = 0;
                    field_1370 = 0;
                } else {
                    local_34[1] = 0;
                    local_34[2] = math::Clamp<int>(local_34 + 2, local_34 + 1, local_34);
                    fVar5 = (float)floor((float)local_34[2] / (float)field_658);
                    field_1370 = (ushort)(int)fVar5;
                    if (ConvertVisibleIndexToEntryIndex(this, &field_1370) == '\0') {
                        field_1370 = 0;
                        local_34[2] = 0;
                    }
                    field_1372 = local_34[2];
                }
            }
        }
        return param_1;
    }

    // 0x10069db50, 304 bytes, placed by class name
    // List::GetScrollAreaBounds(int, int) const
    List* List::GetScrollAreaBounds(int param_1, int param_2) {
        byte bVar2;
        undefined4 uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        undefined8 in_RAX;
        int in_ECX;
        undefined4 in_register_00000034;
        ComboField* this_00;
        int iVar7;
        int iVar8;
        Margin local_38;
        Margin local_34;

        local_34 = SUB84((ulong)in_RAX >> 32, 0);
        this_00 = (ComboField*)CONCAT44(in_register_00000034, param_1);
        if (IsDropdown((List*)this_00) == '\0') {
            uVar3 = ((this_00->field_424 + 96))->GetVisualMargin();
            _local_38 = CONCAT44(local_34, uVar3);
            uVar4 = ((this_00->field_1352 + 12), &local_38)->GetValidOr();
            _local_38 = CONCAT44(uVar4, local_38);
            iVar8 = (uVar4 & 255) + param_2;
            iVar7 = (uVar4 >> 8 & 255) + in_ECX;
            iVar5 = this_00->GetStreamCountLastMix();
            bVar2 = local_34.GetWidth();
            iVar5 = iVar5 - (uint)bVar2;
            iVar6 = this_00->GetMinMapX();
            bVar2 = local_34.GetHeight();
            iVar6 = iVar6 - (uint)bVar2;
        } else {
            uVar3 = ((this_00->field_424 + 48))->GetVisualMargin();
            _local_38 = CONCAT44(local_34, uVar3);
            uVar4 = ((this_00->field_1352 + 8), &local_38)->GetValidOr();
            _local_38 = CONCAT44(uVar4, local_38);
            iVar8 = (uVar4 & 255) + *(int*)(this_00->field_1352 + 36);
            iVar7 = (uVar4 >> 8 & 255) + *(int*)(this_00->field_1352 + 40);
            iVar5 = this_00->GetTextAreaWidth();
            bVar2 = local_34.GetWidth();
            iVar5 = iVar5 - (uint)bVar2;
            iVar6 = GetDropdownListHeight((List*)this_00);
            bVar2 = local_34.GetHeight();
            iVar6 = iVar6 - (uint)bVar2;
        }
        new (this) oldscape::dash3d::GridRect(iVar8, iVar7, iVar5, iVar6);
        return this;
    }

    // 0x10069dcd0, 64 bytes, placed by class name
    // List::ScrollListWithScaling(int)
    undefined8 List::ScrollListWithScaling(int param_1) {
        if (param_1 == 0) {
            return 0;
        }
        return ScrollList(this, (int)((float)param_1 * 0.25 * (float)field_658));
    }

    // 0x10069dd10, 320 bytes, placed by class name
    // List::GetEntryIndexAtPos(int, int, math::Vector2T<float> const&, unsigned short&) const
    undefined8 List::GetEntryIndexAtPos(int param_1, int param_2, Vector2T* param_3, ushort* param_4) {
        uint uVar2;
        int iVar3;
        float fVar4;
        Margin local_3c;
        float local_38;
        ushort local_32;

        local_3c = (Margin)field_520->GetVisualMargin();
        uVar2 = (&field_1360, &local_3c)->GetValidOr();
        local_38 = *(float*)param_3 - ((float)(uVar2 & 255) + (float)param_1);
        if ((((0.0 < local_38) && (iVar3 = GetStreamCountLastMix(), local_38 < (float)iVar3)) &&
             (local_38 = *(float*)(param_3 + 4) - ((float)(uVar2 >> 8 & 255) + (float)param_2), 0.0 < local_38)) &&
            (iVar3 = GetEntryAreaHeight(this), local_38 < (float)iVar3)) {
            fVar4 = (float)floor((local_38 + (float)(int)field_1372) / (float)field_658);
            local_32 = (ushort)(int)fVar4;
            if (ConvertVisibleIndexToEntryIndex(this, &local_32) != '\0') {
                *param_4 = local_32;
                return CONCAT71((uint7)(byte)(local_32 >> 8), 1);
            }
        }
        return 0;
    }

    // 0x10069dea0, 784 bytes, placed by class name
    // List::SetEntrySelectedByIndex(unsigned short, bool, bool)
    ulong List::SetEntrySelectedByIndex(ushort param_1, bool param_2, bool param_3) {
        undefined1* this_00;
        undefined8 this_01;
        ushort uVar2;
        Entry* pEVar3;
        long lVar4;
        ushort* puVar5;
        ushort* puVar6;
        ushort* puVar7;
        SideBarData* this_02;
        ulong uVar8;
        SideBarData* pSVar9;
        undefined7 in_register_00000009;
        int iVar10;
        undefined7 uVar11;
        int iVar12;
        undefined6 in_register_00000032;
        undefined1 local_48[22];
        ushort local_32;

        uVar8 = CONCAT62(in_register_00000032, param_1) & 4294967295;
        local_32 = (ushort)uVar8;
        this_00 = &field_664;
        uVar2 = this_00->size();
        if ((uint)uVar2 <= (uint)CONCAT62(in_register_00000032, param_1)) {
        LAB_10069e0cd:
            uVar8 = 0;
            goto LAB_10069e0cf;
        }
        if (param_3) {
            pEVar3 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_00,
                (ulong)local_32);
            if (pEVar3->IsEnabled() == '\0') {
                lVar4 = eastl::vector<List::Entry,
                                      eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<List::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)this_00,
                    (ulong)local_32);
                new (local_48) oldscape::sidebars::SideBarData(*(int*)(lVar4 + 24), 3);
                (&field_1080, (ValueChangeEvent*)local_48)->push_back();
                goto LAB_10069e0cd;
            }
        }
        if (field_657 == 1) {
            local_48._8_8_ = &field_1136;
            lVar4 = local_48._8_8_->size();
            this_01 = local_48._8_8_;
            if (lVar4 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_selectedIndices.size() == 1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", 660,
                    (char*)0);
            }
            uVar8 = CONCAT71((int7)(uVar8 >> 8), 1);
            if ((!param_2) ||
                (puVar5 = (ushort*)eastl::vector<
                     unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>::
                 operator[]((vector<unsigned short,
                                    eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>*)
                                local_48._8_8_,
                            0),
                 *puVar5 == local_32))
                goto LAB_10069e0cf;
            puVar5 = (ushort*)eastl::vector<
                unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_01,
                0);
            pEVar3 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_00,
                (ulong)*puVar5);
            pEVar3->SetSelected(false);
            pEVar3 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_00,
                (ulong)local_32);
            pEVar3->SetSelected(true);
            uVar2 = local_32;
            if (!param_3) {
                puVar5 = (ushort*)eastl::vector<
                    unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<unsigned short,
                            eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>*)this_01,
                    0);
                *puVar5 = uVar2;
                goto LAB_10069e0cf;
            }
            puVar5 = (ushort*)eastl::vector<
                unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_01,
                0);
            lVar4 = eastl::vector<List::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_00,
                (ulong)*puVar5);
            new (local_48) oldscape::sidebars::SideBarData(*(int*)(lVar4 + 24), 0);
            (&field_1080, (ValueChangeEvent*)local_48)->push_back();
            uVar2 = local_32;
            puVar5 = (ushort*)eastl::vector<
                unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 1ul, 2ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_01,
                0);
            *puVar5 = uVar2;
        LAB_10069e07b:
            lVar4 = eastl::vector<List::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_00,
                (ulong)local_32);
            iVar12 = *(int*)(lVar4 + 24);
            iVar10 = 1;
        } else {
            local_48._8_4_ = (int)CONCAT71(in_register_00000009, param_3);
            puVar5 = &field_1136;
            puVar6 = (ushort*)puVar5->HeapBeginPtr();
            puVar7 = (ushort*)puVar5->end();
            this_02 = (SideBarData*)std::find<unsigned short*, unsigned short>(puVar6, puVar7, &local_32);
            if (!param_2) {
                pSVar9 = (SideBarData*)puVar5->end();
                if (this_02 != pSVar9) {
                    pEVar3 = (Entry*)eastl::vector<
                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<List::Entry,
                                eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            this_00,
                        (ulong)local_32);
                    pEVar3->SetSelected(false);
                    puVar5->erase_unsorted(this_02);
                    if (local_48[8] != '\0') {
                        lVar4 = eastl::vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                         BucketAllocatorEASTL>>::
                        operator[](
                            (vector<List::Entry,
                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                this_00,
                            (ulong)local_32);
                        this_02 = (SideBarData*)local_48;
                        oldscape::sidebars::SideBarData::SideBarData(this_02, *(int*)(lVar4 + 24), 0);
                        (&field_1080, (ValueChangeEvent*)this_02)->push_back();
                    }
                }
                uVar8 = CONCAT71((int7)((ulong)this_02 >> 8), 1);
                goto LAB_10069e0cf;
            }
            uVar8 = puVar5->size();
            uVar11 = (undefined7)((ulong)puVar6 >> 8);
            if (uVar8 < field_657) {
                pEVar3 = (Entry*)eastl::vector<
                    List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<List::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)this_00,
                    (ulong)local_32);
                pEVar3->SetSelected(true);
                eastl::fixed_vector<unsigned short, 1ul, true, BucketAllocatorEASTL>::push_back(puVar5);
                uVar8 = CONCAT71(uVar11, 1);
                if (local_48[8] == '\0')
                    goto LAB_10069e0cf;
                goto LAB_10069e07b;
            }
            uVar8 = CONCAT71(uVar11, 1);
            if (local_48[8] == '\0')
                goto LAB_10069e0cf;
            lVar4 = eastl::vector<List::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    this_00,
                (ulong)local_32);
            iVar12 = *(int*)(lVar4 + 24);
            iVar10 = 2;
        }
        new (local_48) oldscape::sidebars::SideBarData(iVar12, iVar10);
        (&field_1080, (ValueChangeEvent*)local_48)->push_back();
    LAB_10069e0cf:
        return uVar8 & 4294967295;
    }

    // 0x10069e1c0, 784 bytes, placed by class name
    // List::LogicFocus(ComponentDependencies const&, bool)
    void List::LogicFocus(ComponentDependencies* param_1, bool param_2) {
        undefined1* this_00;
        ushort uVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        bool bVar5;
        undefined2 uVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        int* piVar10;
        Entry* pEVar11;
        float fVar12;
        List* local_60;
        Margin local_58[4];
        ComponentDependencies* local_48;
        ComponentDependencies* local_40;
        int local_38;
        float local_34;

        cVar2 = IsDropdown(this);
        if ((cVar2 == '\0') || (field_1380 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("IsDropdown() && m_isDropdownOpen",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      227, (char*)0);
        }
        if (!param_2) {
            return;
        }
        cVar2 = IsScrollBarNeeded(this);
        if (cVar2 != '\0') {
            uVar6 = GetNumVisibleEntries(this);
            local_34 = (float)CONCAT22(local_34._2_2_, uVar6);
            local_60 = this;
            GetScrollAreaBounds((List*)local_58);
            iVar7 = local_58->Right();
            this_00 = &field_1192;
            bVar3 = this_00->GetSize();
            local_48 = param_1 + 56;
            local_40 = param_1;
            piVar10 = (int*)local_58->y();
            local_38 = *piVar10;
            bVar4 = this_00->GetSize();
            iVar8 = GetDropdownListHeight(this);
            bVar5 = ScrollBar::ProcessInput<List::LogicFocus(ComponentDependencies_const&, bool)::__54&>(
                (ScrollBar*)this_00, (MouseState*)local_48, iVar7 - (uint)bVar3, local_38, (uint)bVar4, iVar8,
                (Rect*)local_58, field_1372, ((uint)local_34 & 65535) * (uint)field_658, (uint)field_658,
                (__54*)&local_60);
            if (bVar5) {
                field_1368 = 65535;
                return;
            }
            param_1 = local_40;
        }
        field_1368 = 65535;
        local_58[0] = (Margin)field_520->GetVisualMargin();
        uVar9 = (&field_1360, local_58)->GetValidOr();
        local_34 = *(float*)(param_1 + 60) - ((float)(uVar9 & 255) + (float)field_1388);
        if (local_34 <= 0.0) {
            return;
        }
        iVar7 = GetStreamCountLastMix();
        if ((float)iVar7 <= local_34) {
            return;
        }
        local_34 = *(float*)(param_1 + 64) - ((float)(uVar9 >> 8 & 255) + (float)(int)field_1392);
        if (local_34 <= 0.0) {
            return;
        }
        iVar7 = GetEntryAreaHeight(this);
        if ((float)iVar7 <= local_34) {
            return;
        }
        fVar12 = (float)floor((local_34 + (float)(int)field_1372) / (float)field_658);
        field_1368 = (short)(int)fVar12;
        cVar2 = ConvertVisibleIndexToEntryIndex(this, &field_1368);
        if (cVar2 != '\0') {
            pEVar11 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_664,
                (ulong)(ushort)field_1368);
            cVar2 = pEVar11->IsEnabled();
            if (cVar2 != '\0') {
                if (param_1[56] != (ComponentDependencies)0) {
                    if (field_657 != 1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_selectionLimit == 1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "List.cpp",
                                  307, (char*)0);
                    }
                    uVar1 = field_1368;
                    pEVar11 = (Entry*)eastl::vector<
                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[]((vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                  BucketAllocatorEASTL>>*)&field_664,
                               (ulong)uVar1);
                    bVar3 = pEVar11->IsSelected();
                    SetEntrySelectedByIndex(this, uVar1, (bool)(bVar3 ^ 1), true);
                    CancelFocus(this);
                }
                goto LAB_10069e4ad;
            }
        }
        field_1368 = 65535;
    LAB_10069e4ad:
        iVar7 = ScrollListWithScaling(this, *(int*)(param_1 + 68));
        *(int*)&field_1376 = *(int*)&field_1376 + iVar7;
    }

    // 0x10069e540, 144 bytes, placed by class name
    // List::GetEntryAreaHeight() const
    void List::GetEntryAreaHeight() {
        byte bVar2;
        ushort uVar3;
        int iVar4;
        Margin local_20;
        Margin local_1c;

        if (IsDropdown(this) == '\0') {
            local_1c = (Margin)field_520->GetVisualMargin();
            local_20 = (Margin)(&field_1360, &local_1c)->GetValidOr();
            iVar4 = GetMinMapX();
            bVar2 = local_20.GetHeight();
            uVar3 = GetNumVisibleEntries(this);
            eastl::min<graphics::GraphicsQuality>(iVar4 - (uint)bVar2, (uint)field_658 * (uint)uVar3);
        } else {
            GetDropdownListHeight(this);
        }
    }

    // 0x10069e5d0, 272 bytes, placed by class name
    // List::ConvertVisibleIndexToEntryIndex(unsigned short&) const
    ulong List::ConvertVisibleIndexToEntryIndex(ushort* param_1) {
        ushort uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        Entry* this_00;
        Entry* pEVar5;
        byte bVar6;
        undefined8 unaff_R12;
        undefined1* this_01;
        bool bVar7;

        if (field_1184 == 0) {
            bVar6 = 1;
        } else {
            this_01 = &field_664;
            uVar3 = this_01->HeapBeginPtr();
            uVar4 = this_01->end();
            this_00 =
                std::find_if<List::Entry_const*, (unsigned short&)->ConvertVisibleIndexToEntryIndex() const ::__55>(
                    uVar3, uVar4);
            pEVar5 = (Entry*)this_01->end();
            bVar7 = this_00 == pEVar5;
            if (!bVar7) {
                uVar2 = 0;
                do {
                    if (this_00->IsVisible() != '\0') {
                        if (uVar2 == *param_1) {
                            pEVar5 = (Entry*)this_01->HeapBeginPtr();
                            uVar2 = std::distance<List::Entry_const*>(pEVar5, this_00);
                            *param_1 = uVar2;
                            goto LAB_10069e6bf;
                        }
                        uVar2 = uVar2 + 1;
                    }
                    this_00 = this_00 + 1;
                    pEVar5 = (Entry*)this_01->end();
                    bVar7 = this_00 == pEVar5;
                } while (!bVar7);
            }
            uVar3 = logger::default_logger();
            uVar2 = *param_1;
            uVar4 = this_01->size();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", 977,
                "Could not convert visible index to entry index (visible index = %u | num entries = %u)", uVar2, uVar4);
        LAB_10069e6bf:
            bVar6 = bVar7 ^ 1;
        }
        return CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar6) & 4294967295;
    }

    // 0x10069e700, 32 bytes, placed by class name
    // List::SetMargin(Component::MarginType, Margin)
    void List::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 1) {
            *(undefined4*)&field_1364 = param_3;
        } else if (param_2 == 0) {
            *(undefined4*)&field_1360 = param_3;
            return;
        }
    }

    // 0x10069e720, 64 bytes, placed by class name
    // List::GetMargin(Component::MarginType) const
    Margin List::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 1) {
            local_c.field_0 = field_1364;
            local_c.field_1 = field_1365;
            local_c.field_2 = field_1366;
            local_c.field_3 = field_1367;
        } else if (param_2 == 0) {
            local_c.field_0 = field_1360;
            local_c.field_1 = field_1361;
            local_c.field_2 = field_1362;
            local_c.field_3 = field_1363;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x10069e760, 1216 bytes, placed by class name
    // List::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void List::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        List* pLVar1;
        char cVar2;
        byte bVar3;
        ushort uVar4;
        short sVar5;
        ushort uVar6;
        ushort uVar7;
        uint uVar8;
        int iVar9;
        undefined4 uVar10;
        ulong uVar11;
        basic_string* pbVar12;
        basic_string* pbVar13;
        long lVar14;
        undefined8 uVar15;
        undefined8 uVar16;
        Entry* pEVar17;
        ushort* this_02;
        int local_54;
        int local_50;
        int local_4c;
        List* local_48;
        ulong local_40;
        ushort local_34;
        ushort local_32;

        cVar2 = param_1->g1();
        SetEnabled(this, cVar2 == '\x01');
        cVar2 = param_1->g1();
        field_656 = cVar2;
        bVar3 = param_1->g1();
        field_657 = bVar3;
        bVar3 = param_1->g1();
        field_658 = bVar3;
        if (8 < param_2) {
            bVar3 = param_1->g1();
            field_659 = bVar3;
        }
        bVar3 = param_1->g1();
        field_660 = bVar3;
        bVar3 = param_1->g1();
        field_661 = bVar3;
        this_00 = &field_664;
        local_48 = this;
        uVar4 = param_1->g2();
        this_00->resize((ulong)uVar4);
        uVar11 = this_00->size();
        if (65533 < uVar11) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_entries.size() < MAX_ENTRY_COUNT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      372, (char*)0);
        }
        pbVar12 = (basic_string*)this_00->HeapBeginPtr();
        pbVar13 = (basic_string*)this_00->end();
        for (; pbVar12 != pbVar13; pbVar12 = pbVar12 + 32) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar12, false);
        }
        uVar4 = param_1->g2();
        uVar8 = this_00->size();
        if (uVar8 == uVar4) {
            local_32 = 0;
            sVar5 = this_00->size();
            if (sVar5 != 0) {
                this_01 = &local_48->field_1048;
                local_4c = 0;
                do {
                    iVar9 = param_1->g4s();
                    local_54 = iVar9;
                    lVar14 =
                        eastl::vector<List::Entry,
                                      eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](
                            (vector<List::Entry,
                                    eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                this_00,
                            (ulong)local_32);
                    *(int*)(lVar14 + 24) = iVar9;
                    cVar2 = this_01->empty();
                    if ((cVar2 == '\0') || (local_54 != local_4c)) {
                        cVar2 = this_01->empty();
                        if (cVar2 != '\0') {
                            uVar11 = this_00->size();
                            this_01->reserve(uVar11);
                            local_34 = 0;
                            if (local_32 != 0) {
                                do {
                                    lVar14 = eastl::vector<List::Entry,
                                                           eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                         BucketAllocatorEASTL>>::
                                    operator[](
                                        (vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                           BucketAllocatorEASTL>>*)
                                            this_00,
                                        (ulong)local_34);
                                    local_50 = *(int*)(lVar14 + 24);
                                    local_40 = eastl::make_pair<int&, unsigned short&>(&local_50, &local_34);
                                    eastl::vector_map<
                                        int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                        eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>::
                                        insert<eastl::pair<int, unsigned short>, void>(
                                            (vector_map<
                                                int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>*)
                                                this_01,
                                            (pair*)&local_40);
                                    local_34 = local_34 + 1;
                                } while (local_34 < local_32);
                            }
                        }
                        local_40 = eastl::make_pair<int&, unsigned short&>(&local_54, &local_32);
                        eastl::vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                          eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>::
                            insert<eastl::pair<int, unsigned short>, void>(
                                (vector_map<int, unsigned short, eastl::less<int>, BucketAllocatorEASTL,
                                            eastl::vector<eastl::pair<int, unsigned short>, BucketAllocatorEASTL>>*)
                                    this_01,
                                (pair*)&local_40);
                    } else {
                        local_4c = local_4c + 1;
                    }
                    uVar4 = local_32 + 1;
                    local_32 = uVar4;
                    uVar6 = this_00->size();
                } while (uVar4 < uVar6);
            }
            uVar4 = param_1->g2();
            if (local_48->field_657 < uVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "numSelected <= m_selectionLimit",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", 421,
                    (char*)0);
            }
            this_02 = &local_48->field_1136;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                uVar6 = param_1->g2();
                local_40 = CONCAT62(local_40._2_6_, uVar6);
                uVar7 = this_00->size();
                if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "selectedIndex < (uint16)m_entries.size()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                        426, (char*)0);
                }
                bVar3 = local_48->field_657;
                uVar6 = this_02->size();
                if (uVar6 < bVar3) {
                    eastl::fixed_vector<unsigned short, 1ul, true, BucketAllocatorEASTL>::push_back(this_02);
                    pEVar17 = (Entry*)eastl::vector<
                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<List::Entry,
                                eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            this_00,
                        local_40 & 65535);
                    pEVar17->SetSelected(true);
                }
            }
            cVar2 = this_02->empty();
            if (((cVar2 != '\0') && (cVar2 = this_00->empty(), cVar2 == '\0')) && (local_48->field_657 == 1)) {
                local_40 = local_40 & 18446744073709486080;
                this_02->push_back((ushort*)&local_40);
                pEVar17 = (Entry*)eastl::vector<
                    List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<List::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)this_00,
                    0);
                pEVar17->SetSelected(true);
            }
            pLVar1 = local_48;
            if (8 < param_2) {
                new (&local_40) Margin(param_1);
                pLVar1->field_1360 = (byte)local_40;
                pLVar1->field_1361 = local_40._1_1_;
                pLVar1->field_1362 = local_40._2_1_;
                pLVar1->field_1363 = local_40._3_1_;
                new (&local_40) Margin(param_1);
                pLVar1->field_1364 = (byte)local_40;
                pLVar1->field_1365 = local_40._1_1_;
                pLVar1->field_1366 = local_40._2_1_;
                pLVar1->field_1367 = local_40._3_1_;
            }
            bVar3 = param_1->g1();
            pLVar1->field_100 = ~bVar3;
            uVar10 = param_1->g4();
            pLVar1->field_96 = uVar10;
            (pLVar1->field_424, param_1, param_2)->DecodeSpriteData();
            (pLVar1->field_472, param_1, param_2)->DecodeSpriteData();
            (pLVar1->field_520, param_1, param_2)->DecodeSpriteData();
            (pLVar1->field_568, param_1, param_2)->DecodeTextData();
            (&pLVar1->field_1192, param_1, param_2)->Decode();
        } else {
            uVar15 = logger::default_logger();
            uVar16 = this_00->size();
            logger::Logger::Log(
                uVar15, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp", 383,
                "List entry encoding mismatch - expected %u values but got %u", uVar16, uVar4);
        }
    }

    // 0x10069ecd0, 864 bytes, placed by class name
    // List::LoadStyleSheetVisuals(StyleSheet const&)
    void List::LoadStyleSheetVisuals(StyleSheet* param_1) {
        bool bVar2;
        int iVar3;
        uint uVar4;
        int* piVar5;
        undefined8 uVar6;
        SpriteData* pSVar7;
        undefined1* this_00;
        undefined1 local_48[8];
        StyleSheetValue* local_40;
        undefined1 local_30[8];

        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 60, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 59, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_656, 61, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_658, 67, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_659, 68, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_660, 62, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_661, 63, 1);
        (&field_1360, 139, param_1)->LoadFromStylesheet();
        (&field_1364, 133, param_1)->LoadFromStylesheet();
        (field_568, 75, param_1)->LoadStyleSheetTextData();
        (field_472, 83, param_1)->LoadStyleSheetSpriteData();
        (field_520, 93, param_1)->LoadStyleSheetSpriteData();
        local_48->FindProperty(param_1, 64, 1);
        if (local_48->IsValid() != '\0') {
            iVar3 = StyleSheetValue::Get<int>(local_40);
            (field_424, iVar3)->SetSpriteID();
        }
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 65, 1);
        bVar2 = local_30->IsActive();
        if (bVar2) {
            piVar5 = (int*)eastl::optional<unsigned int>::value();
            (field_424, *piVar5)->SetLevel();
        }
        StyleSheet::GetPropertyValue<unsigned char>((StyleSheet*)local_30, param_1, 66, 1);
        bVar2 = local_30->IsNull();
        if (bVar2) {
            uVar6 = eastl::optional<unsigned char>::value();
            (field_424, *(bool*)uVar6)->SetEmitting();
        }
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 72, 1);
        uVar4 = eastl::optional<unsigned int>::value_or<unsigned int&>((optional<unsigned int>*)local_30,
                                                                       (uint*)(field_632 + 4));
        *(uint*)(field_632 + 4) = uVar4;
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 73, 1);
        uVar4 = eastl::optional<unsigned int>::value_or<unsigned int&>((optional<unsigned int>*)local_30,
                                                                       (uint*)(field_632 + 12));
        *(uint*)(field_632 + 12) = uVar4;
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 74, 1);
        uVar4 = eastl::optional<unsigned int>::value_or<unsigned int&>((optional<unsigned int>*)local_30,
                                                                       (uint*)(field_632 + 20));
        *(uint*)(field_632 + 20) = uVar4;
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 69, 1);
        uVar4 =
            eastl::optional<unsigned int>::value_or<unsigned int&>((optional<unsigned int>*)local_30, (uint*)field_632);
        *(uint*)field_632 = uVar4;
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 70, 1);
        uVar4 = eastl::optional<unsigned int>::value_or<unsigned int&>((optional<unsigned int>*)local_30,
                                                                       (uint*)(field_632 + 8));
        *(uint*)(field_632 + 8) = uVar4;
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_30, param_1, 71, 1);
        uVar4 = eastl::optional<unsigned int>::value_or<unsigned int&>((optional<unsigned int>*)local_30,
                                                                       (uint*)(field_632 + 16));
        *(uint*)(field_632 + 16) = uVar4;
        this_00 = &field_1192;
        pSVar7 = (SpriteData*)this_00->GetMaterial();
        pSVar7->LoadStyleSheetSpriteData(103, param_1);
        pSVar7 = (SpriteData*)this_00->GetCursorMutex();
        pSVar7->LoadStyleSheetSpriteData(123, param_1);
        pSVar7 = (SpriteData*)this_00->SSOBeginPtr(123);
        pSVar7->LoadStyleSheetSpriteData(113, param_1);
    }

    // 0x10069f110, 64 bytes, placed by class name
    // List::GetEntryById(int) const
    undefined8 List::GetEntryById(int param_1) {
        ushort uVar1;
        ushort uVar2;
        undefined8 uVar3;

        uVar1 = GetEntryIndexById(this, param_1);
        uVar2 = (&field_664)->size();
        if (uVar1 < uVar2) {
            uVar3 = eastl::vector<List::Entry,
                                  eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_664,
                (ulong)uVar1);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10069f150, 128 bytes, placed by class name
    // List::GetEntryIndexById(int) const
    undefined2 List::GetEntryIndexById(int param_1) {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        undefined4 in_EAX;
        int iVar3;
        long lVar4;
        long lVar5;
        undefined2 uVar6;
        undefined8 uStack_28;

        uStack_28 = CONCAT44(param_1, in_EAX);
        this_00 = &field_1048;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            lVar4 = this_00->find((int*)((long)&uStack_28 + 4));
            lVar5 = this_00->end();
            if (lVar4 == lVar5) {
                uVar6 = 65535;
            } else {
                uVar6 = *(undefined2*)(lVar4 + 4);
            }
        } else {
            iVar1 = uStack_28._4_4_;
            uVar6 = 65535;
            if (-1 < uStack_28) {
                iVar3 = (&field_664)->size();
                if (iVar1 < iVar3) {
                    uVar6 = uStack_28._4_2_;
                }
            }
        }
        return uVar6;
    }

    // 0x10069f210, 192 bytes, placed by class name
    // List::SetEntryVisible(int, bool)
    bool List::SetEntryVisible(int param_1, bool param_2) {
        char cVar1;
        ushort uVar2;
        short sVar3;
        uint uVar4;
        Entry* this_00;

        uVar2 = GetEntryIndexById(this, param_1);
        uVar4 = (&field_664)->size();
        if ((uint)uVar2 < (uVar4 & 65535)) {
            this_00 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_664,
                (ulong)(uint)uVar2);
            cVar1 = this_00->IsVisible();
            if ((bool)cVar1 != param_2) {
                this_00->SetVisible(param_2);
                if (param_2) {
                    if (field_1184 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_numHiddenEntries > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "List.cpp",
                                  592, (char*)0);
                    }
                    sVar3 = (short)*(undefined4*)&field_1184 + -1;
                } else {
                    sVar3 = field_1184 + 1;
                }
                field_1184 = sVar3;
            }
        }
        return (uint)uVar2 < (uVar4 & 65535);
    }

    // 0x10069f300, 96 bytes, placed by class name
    // List::SetEntryEnabled(int, bool)
    bool List::SetEntryEnabled(int param_1, bool param_2) {
        ushort uVar1;
        undefined1 uVar2;
        undefined1 extraout_AL;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined1 extraout_AH_01;
        undefined6 extraout_var;

        uVar2 = GetEntryIndexById(this, param_1);
        uVar1 = CONCAT11(extraout_AH, uVar2);
        uVar2 = (&field_664)->size();
        if ((uint)uVar1 < (uint)CONCAT11(extraout_AH_00, uVar2)) {
            eastl::vector<List::Entry,
                          eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_664,
                (ulong)(uint)uVar1);
            (CONCAT62(extraout_var, CONCAT11(extraout_AH_01, extraout_AL)))->SetEnabled(param_2);
        }
        return (uint)uVar1 < (uint)CONCAT11(extraout_AH_00, uVar2);
    }

    // 0x10069f380, 80 bytes, placed by class name
    // List::GetEntryVisible(int) const
    undefined8 List::GetEntryVisible(int param_1) {
        ushort uVar1;
        ushort uVar2;
        Entry* this_00;
        undefined8 uVar3;

        uVar1 = GetEntryIndexById(this, param_1);
        uVar2 = (&field_664)->size();
        if (uVar1 < uVar2) {
            this_00 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_664,
                (ulong)uVar1);
            uVar3 = this_00->IsVisible();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10069f3d0, 80 bytes, placed by class name
    // List::GetEntryEnabled(int) const
    undefined8 List::GetEntryEnabled(int param_1) {
        ushort uVar1;
        ushort uVar2;
        Entry* this_00;
        undefined8 uVar3;

        uVar1 = GetEntryIndexById(this, param_1);
        uVar2 = (&field_664)->size();
        if (uVar1 < uVar2) {
            this_00 = (Entry*)eastl::vector<
                List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<List::Entry,
                        eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_664,
                (ulong)uVar1);
            uVar3 = this_00->IsEnabled();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10069f420, 64 bytes, placed by class name
    // List::SetEntrySelected(int, bool, bool)
    void List::SetEntrySelected(int param_1, bool param_2, bool param_3) {
        ushort uVar1;

        uVar1 = GetEntryIndexById(this, param_1);
        SetEntrySelectedByIndex(this, uVar1, param_2, param_3);
    }

    // 0x10069f540, 128 bytes, placed by class name
    // List::GetEntrySelected(int) const
    bool List::GetEntrySelected(int param_1) {
        ushort uVar1;
        ushort uVar2;
        ushort* puVar3;
        ushort* puVar4;
        ushort* this_00;
        bool bVar5;
        ushort local_1a;

        uVar1 = GetEntryIndexById(this, param_1);
        local_1a = uVar1;
        uVar2 = (&field_664)->size();
        if (uVar1 < uVar2) {
            this_00 = &field_1136;
            puVar3 = (ushort*)this_00->HeapBeginPtr();
            puVar4 = (ushort*)this_00->end();
            puVar3 = std::find<unsigned short const*, unsigned short>(puVar3, puVar4, &local_1a);
            puVar4 = (ushort*)this_00->end();
            bVar5 = puVar3 != puVar4;
        } else {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x10069f5e0, 128 bytes, placed by class name
    // List::SetEntryIcon(int, int)
    bool List::SetEntryIcon(int param_1, int param_2) {
        ushort uVar1;
        undefined1 uVar2;
        undefined1 extraout_AL;
        undefined1 extraout_AL_00;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined1 extraout_AH_01;
        undefined1 extraout_AH_02;
        undefined6 extraout_var;
        undefined6 extraout_var_00;

        uVar2 = GetEntryIndexById(this, param_1);
        uVar1 = CONCAT11(extraout_AH, uVar2);
        uVar2 = (&field_664)->size();
        if ((uint)uVar1 < (uint)CONCAT11(extraout_AH_00, uVar2)) {
            (&field_664)->size();
            (&field_1024, CONCAT62(extraout_var)->resize(CONCAT11(extraout_AH_01, extraout_AL)));
            eastl::vector<List::EntryIconData, BucketAllocatorEASTL>::operator[](
                (vector<List::EntryIconData, BucketAllocatorEASTL>*)&field_1024, (ulong)(uint)uVar1);
            if (*(int*)CONCAT62(extraout_var_00, CONCAT11(extraout_AH_02, extraout_AL_00)) != param_2) {
                *(int*)CONCAT62(extraout_var_00, CONCAT11(extraout_AH_02, extraout_AL_00)) = param_2;
                *(undefined8*)(CONCAT62(extraout_var_00, CONCAT11(extraout_AH_02, extraout_AL_00)) + 8) =
                    18446744073709551615;
            }
        }
        return (uint)uVar1 < (uint)CONCAT11(extraout_AH_00, uVar2);
    }

    // 0x10069f6f0, 304 bytes, placed by class name
    // List::SetSelectionLimit(unsigned char)
    void List::SetSelectionLimit(uchar param_1) {
        ushort* puVar1;
        ushort* this_00;
        char cVar2;
        byte bVar3;
        Entry* pEVar4;
        long lVar5;
        long lVar6;
        ushort* puVar7;
        undefined7 in_register_00000031;
        ushort local_32;

        cVar2 = IsDropdown(this);
        if (cVar2 != '\0') {
            return;
        }
        if (param_1 == '\0') {
            return;
        }
        if (param_1 == '\x01') {
            cVar2 = (&field_1136)->empty();
            if (cVar2 != '\0') {
                cVar2 = (&field_664)->empty();
                if (cVar2 == '\0') {
                    local_32 = 0;
                    (&field_1136, &local_32)->push_back();
                    pEVar4 = (Entry*)eastl::vector<
                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[]((vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                  BucketAllocatorEASTL>>*)&field_664,
                               0);
                    pEVar4->SetSelected(true);
                }
                goto LAB_10069f808;
            }
        }
        this_00 = &field_1136;
        bVar3 = this_00->size();
        if ((uint)CONCAT71(in_register_00000031, param_1) < (uint)bVar3) {
            lVar5 = this_00->HeapBeginPtr();
            lVar6 = this_00->size();
            puVar1 = (ushort*)(lVar5 + (lVar6 - (ulong)param_1) * 2);
            puVar7 = (ushort*)this_00->HeapBeginPtr();
            if (puVar7 != puVar1) {
                do {
                    pEVar4 = (Entry*)eastl::vector<
                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[]((vector<List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true,
                                                                                  BucketAllocatorEASTL>>*)&field_664,
                               (ulong)*puVar7);
                    pEVar4->SetSelected(false);
                    puVar7 = puVar7 + 1;
                } while (puVar7 != puVar1);
            }
            puVar7 = (ushort*)this_00->HeapBeginPtr();
            this_00->erase(puVar7, puVar1);
        }
    LAB_10069f808:
        field_657 = param_1;
    }

    // 0x10069f8a0, 272 bytes, placed by class name
    // List::AddEntry(eastl::basic_string<char, BucketAllocatorEASTL> const&, int)
    uint List::AddEntry(basic_string* param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        short sVar2;
        uint uVar3;
        ulong uVar4;
        Entry* this_01;
        ushort local_40[4];
        int local_38;
        ushort local_32;

        local_38 = param_2;
        uVar3 = HasEntry(this, param_2);
        if ((char)uVar3 == '\0') {
            this_00 = &field_664;
            eastl::vector<List::Entry,
                          eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                emplace_back<eastl::basic_string<char, BucketAllocatorEASTL> const&, int&>(
                    (vector<List::Entry,
                            eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)this_00,
                    param_1, &local_38);
            cVar1 = (&field_1048)->empty();
            if (cVar1 == '\0') {
                sVar2 = this_00->size();
                local_32 = sVar2 - 1;
                eastl::pair<int, unsigned short>::pair<int&, unsigned short&, void>(
                    (pair<int, unsigned short>*)local_40, &local_38, &local_32);
                (&field_1048, (pair*)local_40)->insert();
            }
            cVar1 = (&field_1024)->empty();
            if (cVar1 == '\0') {
                uVar4 = this_00->size();
                (&field_1024, uVar4)->resize();
            }
            if (field_657 == 1) {
                cVar1 = (&field_1136)->empty();
                if (cVar1 != '\0') {
                    local_40[0] = 0;
                    (&field_1136, local_40)->push_back();
                    this_01 = (Entry*)eastl::vector<
                        List::Entry, eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<List::Entry,
                                eastl::fixed_vector_allocator<32ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            this_00,
                        0);
                    this_01->SetSelected(true);
                }
            }
        }
        return uVar3 ^ 1;
    }

    // 0x10069fa90, 32 bytes, placed by class name
    // List::ReserveEntries(unsigned long)
    void List::ReserveEntries(ulong param_1) {
        (&field_664, param_1)->reserve();
    }

    // 0x10069fb10, 256 bytes, placed by class name
    // List::ShouldBlockInput(int, int) const
    undefined4 List::ShouldBlockInput(int param_1, int param_2) {
        uint uVar1;
        byte bVar3;
        int iVar4;
        int iVar5;
        float fVar6;
        Margin local_3c;
        float local_38;
        Margin local_34;

        if (IsDropdown(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsDropdown()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      846, (char*)0);
        }
        local_3c = (Margin)field_520->GetVisualMargin();
        local_34 = (Margin)(&field_1360, &local_3c)->GetValidOr();
        iVar5 = field_1388;
        if ((iVar5 <= param_1) && ((int)field_1392 <= param_2)) {
            iVar4 = GetTextAreaWidth();
            bVar3 = local_34.GetWidth();
            if (param_1 <= (int)((uint)bVar3 + iVar4 + iVar5)) {
                uVar1 = field_1392;
                local_38 = field_1384;
                iVar5 = GetDropdownListHeight(this);
                fVar6 = (float)iVar5 * local_38;
                bVar3 = local_34.GetHeight();
                iVar5 = bVar3 + uVar1 + (int)fVar6;
                return CONCAT31((int3)((uint)iVar5 >> 8), param_2 <= iVar5);
            }
        }
        return 0;
    }

    // 0x10069fc30, 96 bytes, placed by class name
    // List::NotifyFocusGain()
    undefined8 List::NotifyFocusGain() {
        char cVar1;

        cVar1 = IsEnabled();
        if (((cVar1 == '\0') || (cVar1 = IsDropdown(this), cVar1 == '\0')) ||
            (cVar1 = (&field_664)->empty(), cVar1 != '\0')) {
            return 0;
        }
        field_1368 = 65535;
        field_1380 = 1;
        field_1384 = 0.0;
        return 1;
    }

    // 0x10069fcb0, 128 bytes, placed by class name
    // List::ClearEntries()
    void List::ClearEntries() {
        (&field_664)->clear();
        (&field_1024)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (IsDropdown(this) != '\0') {
            CancelFocus(this);
        }
        field_1370 = 0;
        *(undefined8*)&field_1372 = 0;
    }

    // 0x10069fdb0, 96 bytes, placed by class name
    // List::DrawFocus(ComponentDependencies const&)
    void List::DrawFocus(ComponentDependencies* param_1) {
        if ((IsDropdown(this) == '\0') || (field_1380 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("IsDropdown() && m_isDropdownOpen",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/List.cpp",
                      1088, (char*)0);
        }
        DrawEntries(this, param_1, field_1388, field_1392);
    }

    // 0x10069fe30, 64 bytes, placed by class name
    // List::GetDropdownHeaderVisualState() const
    undefined1 List::GetDropdownHeaderVisualState() {
        char cVar1;
        undefined1 uVar2;

        cVar1 = IsEnabled();
        uVar2 = 3;
        if ((cVar1 != '\0') && (uVar2 = 2, field_1380 == '\0')) {
            uVar2 = IsCurrentlyMouseOver();
        }
        return uVar2;
    }

    // 0x10069fe70, 144 bytes, placed by class name
    // List::GetVisualUV(math::Rect<float> const&, List::EntryVisualState) const
    List* List::GetVisualUV(undefined8 param_2, Vector4T* param_3, undefined4 param_4) {
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

    // 0x1006ad3a0: the linker folded this into ComboField::SupportsMargin(Component::MarginType) const, which has identical code
    List::SupportsMargin(Component::MarginType) const;

    // 0x1006ad410: the linker folded this into ComboField::IsAssociatedComponent(shared_ptr<Component> const&) const, which has identical code
    List::IsAssociatedComponent(shared_ptr<Component> const&) const;

    // 0x1006c8dd0: the linker folded this into ComboField::Entry::Entry(ComboField::Entry&&), which has identical code
    List::Entry::Entry(List::Entry&&);

    // 0x1006c8de0: the linker folded this into ComboField::Entry::Entry(ComboField::Entry&&), which has identical code
    List::Entry::Entry(List::Entry&&);

    // 0x1006d4d80, 32 bytes, placed by class name
    // List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53::operator()(ScrollBar const&, int) const
    /* List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
   bool)::$_53::TEMPNAMEPLACEHOLDERVALUE(ScrollBar const&, int) const */

    void List::MainLogic(ComponentDependencies_const&, int, int, bool, bool, bool,
                         bool)::$_53::operator()(ScrollBar* param_1, int param_2) {
        ScrollList(*(List**)param_1, param_2 - (*(List**)param_1)->field_1372);
    }

    // 0x1006d4da0, 32 bytes, placed by class name
    // List::LogicFocus(ComponentDependencies const&, bool)::$_54::operator()(ScrollBar const&, int) const
    /* List::LogicFocus(ComponentDependencies const&,
   bool)::$_54::TEMPNAMEPLACEHOLDERVALUE(ScrollBar const&, int) const */

    void List::LogicFocus(ComponentDependencies_const&, bool)::$_54::operator()(ScrollBar* param_1, int param_2) {
        ScrollList(*(List**)param_1, param_2 - (*(List**)param_1)->field_1372);
    }

    // 0x1006d5a70, 16 bytes, placed by class name
    // List::ConvertVisibleIndexToEntryIndex(unsigned short&) const::$_55::operator()(List::Entry const&) const
    /* List::ConvertVisibleIndexToEntryIndex(unsigned short&)
   const::$_55::TEMPNAMEPLACEHOLDERVALUE(List::Entry const&) const */

    _func_ConvertVisibleIndexToEntryIndex_unsigned_short_ptr* const ::$_55::operator()(Entry * param_1) {
        _func_ConvertVisibleIndexToEntryIndex_unsigned_short_ptr* p_Var1;

        p_Var1 = (_func_ConvertVisibleIndexToEntryIndex_unsigned_short_ptr*)IsVisible();
        return p_Var1;
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    List::ResetToDefault();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    List::HasKeyboardNavigation() const;

    // 0x100102f30: the linker folded this into oldscape::rs2lib::InputField::GetScrollY() const, which has identical code
    List::GetCurrentListItem() const;

} // namespace jag::tweak
