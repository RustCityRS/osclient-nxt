// libs/ui/components/PagedLayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "PagedLayer.h"

namespace jag::ui {
    // 0x100f3e9d0, 1 bytes, __data
    PagedLayer::m_showNoClickThroughPagedLayers = 0;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PagedLayer::OnPageCountChanged();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PagedLayer::OnActivePageChanging(unsigned char);

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    PagedLayer::RequiresSeparatePreviousValueTrigger() const;

    // 0x1000fa850: the linker folded this into oldscape::graphics::NXTPixToolkit::getWorldRenderer(), which has identical code
    PagedLayer::GetValueRepresentation();

    // 0x100441a50: the linker folded this into game::MapEnvironmentSettings::GetSkySettings() const, which has identical code
    PagedLayer::GetDynamicChildren();

    // 0x100441a50: the linker folded this into game::MapEnvironmentSettings::GetSkySettings() const, which has identical code
    PagedLayer::GetDynamicChildren() const;

    // 0x1005fa390: the linker folded this into game::option::WindowMode::IsAvailable(game::option::OptionClient) const, which has identical code
    PagedLayer::SupportsMargin(Component::MarginType) const;

    // 0x1006a0080, 304 bytes, base-object constructor, placed by class name
    // PagedLayer::PagedLayer(InterfaceManager*)
    void PagedLayer::PagedLayer(InterfaceManager* param_1) {
        new (this) ComponentCollectionBase();
        new (&field_424) ComponentSingleValueMultiOptionMixin();
        field_0 = &PTR__PagedLayer_100f0f560;
        field_424 = &PTR__PagedLayer_100f0f778;
        new (&field_432) eastl::vector<ComponentContainer, eastl::allocator>();
        new (&field_464) eastl::vector<ComponentContainer, eastl::allocator>();
        new (&field_496) eastl::fixed_vector<PagedLayer::PageData, 4ul, true, eastl::allocator>();
        m_staticPageCount = 0;
        m_currentValue = '\0';
        m_previousValue = 255;
        new (&field_1024) SpriteData();
        new (&field_1072, 255) Margin();
        field_1080 = param_1;
        eastl::vector<PagedLayer::PageData,
                      eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<>(
                (vector<PagedLayer::PageData,
                        eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496);
    }

    // 0x1006a01d0, 224 bytes, base-object destructor, placed by class name
    // PagedLayer::~PagedLayer()
    void PagedLayer::~PagedLayer() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__PagedLayer_100f0f560;
        field_424 = &PTR__PagedLayer_100f0f778;
        if (GetDynamicID() != -1) {
            (*(code*)field_0[45])(this);
        }
        (&field_1024)->~Sprite();
        (&field_496)->~fixed_vector();
        (&field_464)->~vector();
        (&field_432)->~vector();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_424, in_RSI, extraout_RDX);
        ~ComponentCollectionBase();
    }

    // 0x1006a04c0, 208 bytes, placed by class name
    // PagedLayer::SetActivePage(unsigned char)
    bool PagedLayer::SetActivePage(uchar param_1) {
        undefined1 uVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined7 in_register_00000031;
        ulong uVar4;

        uVar4 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar2 = (&field_496)->size();
        if (uVar4 < uVar2) {
            if (m_currentValue != param_1) {
                (*(code*)field_0[62])(this, param_1);
                m_previousValue = m_currentValue;
                m_currentValue = param_1;
                (*(code*)field_0[10])(this);
                (*(code*)field_0[63])(this);
            }
        } else {
            uVar3 = logger::default_logger();
            uVar1 = GetPageCount(this);
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                74, "Attempted to set an invalid page as active - received %u, expected [0;%u[", param_1, uVar1);
        }
        return uVar4 < uVar2;
    }

    // 0x1006a2500: the linker folded this into PagedLayer::GetActivePage() const, which has identical code
    PagedLayer::GetCurrentValue() const;

    // 0x1006a2820, 16 bytes, complete-object constructor, placed by class name
    // PagedLayer::PagedLayer(InterfaceManager*): jumps straight to the base-object constructor

    // 0x1006a2830, 16 bytes, complete-object destructor, placed by class name
    // PagedLayer::~PagedLayer(): jumps straight to the base-object destructor

    // 0x1006a2860, 32 bytes, deleting destructor, placed by class name
    // PagedLayer::~PagedLayer()
    void PagedLayer::~PagedLayer() {
        ~PagedLayer(this);
        operator_delete(this);
    }

    // 0x1006a28a0, 80 bytes, placed by class name
    // PagedLayer::MainDraw(ComponentDependencies const&, int, int, float)
    void PagedLayer::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        DrawBackground(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        DrawActivePage(this, *(RT7Core**)(param_1 + 16), param_2, param_3, param_4);
    }

    // 0x1006a28f0, 416 bytes, placed by class name
    // PagedLayer::DrawBackground(graphics::RT7Core*, int, int)
    void PagedLayer::DrawBackground(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar6;
        undefined* puVar7;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar8;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar9;
        undefined8 uVar10;
        undefined8 uVar11;

        cVar1 = GetAlpha();
        if (cVar1 != '\0') {
            this_00 = &field_1024;
            this_01 = (TextureManager*)param_1->GetTextureManager();
            pSVar6 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
            puVar7 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar6, false);
            if (puVar7 == DataStatus::READY) {
                this_02 = (shared_ptr*)this_00->GetDefaultValue();
                bVar2 = shared_ptr::operator_cast_to_bool(this_02);
                if (bVar2) {
                    this_03 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    this_04 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_03);
                    bVar2 = shared_ptr::operator_cast_to_bool(this_04);
                    if (bVar2) {
                        this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)this_04);
                        this_06 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                        pTVar8 = (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            this_06);
                        if (pTVar8 == (Texture*)0) {
                            return;
                        }
                        this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)this_04);
                        this_08 = (FastPool<audio::SoundInstance, int>*)
                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                          (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                        iVar3 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                        lVar9 = this_07->GetSpriteRenderMapping(iVar3);
                        iVar3 = GetStreamCountLastMix();
                        iVar4 = GetMinMapX();
                        uVar5 = GetRGBA();
                        this_00->DrawSpriteSlice(param_1, param_2, param_3, iVar3, iVar4, uVar5, (Rect*)(lVar9 + 88),
                                                 pTVar8, 0.0);
                        return;
                    }
                    uVar10 = logger::default_logger();
                    uVar11 = 201;
                } else {
                    uVar10 = logger::default_logger();
                    uVar11 = 193;
                }
                logger::Logger::Log(uVar10, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayer.cpp",
                                    uVar11, "Invalid sprite atlas reference!");
            }
        }
    }

    // 0x1006a2a90, 400 bytes, placed by class name
    // PagedLayer::DrawActivePage(graphics::RT7Core*, int, int, float)
    void PagedLayer::DrawActivePage(RT7Core* param_1, int param_2, int param_3, float param_4) {
        int iVar1;
        int iVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar7;
        Margin local_4c;
        Margin local_48;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_38 = param_2;
        local_34 = param_3;
        local_40 = GetStreamCountLastMix();
        local_3c = GetMinMapX();
        local_48 = (Margin)(&field_1024)->GetVisualMargin();
        local_4c = (Margin)(&field_1072, &local_48)->GetValidOr();
        local_4c.ApplyTo(&local_38, &local_34, &local_40, &local_3c);
        iVar1 = local_38;
        iVar4 = (*(code*)field_0[51])(this);
        iVar2 = local_34;
        iVar5 = (*(code*)field_0[52])(this);
        if (*PTR_m_showNoClickThroughPagedLayers_100ee63f8 != '\0') {
            cVar3 = IsClickthrough();
            if (cVar3 == '\0') {
                uVar6 = param_1->GetGUIManager();
                uVar6->AddColouredRectangle(local_38, local_34, local_40, local_3c, 4278190250, 1);
            }
        }
        pvVar7 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
            code*)field_0[40])(this);
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar7);
        if (cVar3 == '\0') {
            (**(code**)(*(long*)field_1080 + 8))(param_4, field_1080, pvVar7, iVar1 - iVar4, iVar2 - iVar5, local_38,
                                                 local_34, local_40, local_3c);
        }
        pvVar7 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
            code*)field_0[41])(this);
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar7);
        if (cVar3 == '\0') {
            (**(code**)(*(long*)field_1080 + 8))(param_4, field_1080, pvVar7, iVar1 - iVar4, iVar2 - iVar5, local_38,
                                                 local_34, local_40, local_3c);
        }
    }

    // 0x1006a2c20, 240 bytes, placed by class name
    // PagedLayer::SetDynamicPageCount(unsigned char)
    bool PagedLayer::SetDynamicPageCount(uchar param_1) {
        undefined1 uVar2;
        byte bVar3;
        uint uVar4;
        undefined8 uVar5;
        undefined7 in_register_00000031;
        uint uVar6;
        ulong uVar7;

        uVar7 = (CONCAT71(in_register_00000031, param_1) & 4294967295) + (ulong)m_staticPageCount;
        uVar6 = (uint)uVar7;
        if (uVar6 < 256) {
            uVar4 = (&field_496)->size();
            if (uVar6 != uVar4) {
                (&field_496, uVar7)->resize();
                (*(code*)field_0[64])(this);
                bVar3 = m_currentValue;
                if (GetPageCount(this) <= bVar3) {
                    (*(code*)field_0[10])(this);
                    SetActivePage(this, '\0');
                }
            }
        } else {
            uVar5 = logger::default_logger();
            uVar2 = GetStaticPageCount(this);
            bVar3 = GetPageCount(this);
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                52,
                "Attempted to set an invalid number of dynamic pages (with %u static pages) - received %u, expected "
                "[0;%u[",
                uVar2, CONCAT71(in_register_00000031, param_1) & 4294967295, ~bVar3);
        }
        return uVar6 < 256;
    }

    // 0x1006a2d20, 96 bytes, placed by class name
    // PagedLayer::SetScrollPos(int, int)
    void PagedLayer::SetScrollPos(int param_1, int param_2) {
        PageData* this_00;
        int local_20;
        int local_1c;

        local_20 = param_1;
        local_1c = param_2;
        this_00 = (PageData*)GetCurrentPage(this);
        this_00->ValidateScrollPos(&local_20, &local_1c, field_88, field_92);
        if ((*(int*)&this_00->field_64 != local_20) || (*(int*)((long)&this_00->field_64 + 4) != local_1c)) {
            *(int*)&this_00->field_64 = local_20;
            *(int*)((long)&this_00->field_64 + 4) = local_1c;
            (*(code*)field_0[10])(this);
        }
    }

    // 0x1006a2da0, 128 bytes, placed by class name
    // PagedLayer::PageData::ValidateScrollPos(int&, int&, int, int) const
    void PagedLayer::PageData::ValidateScrollPos(int* param_1, int* param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;

        iVar2 = *param_1;
        iVar1 = eastl::max<int>(param_3, field_72);
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 - param_3);
        iVar2 = eastl::max<int>(0, iVar2);
        *param_1 = iVar2;
        iVar2 = *param_2;
        iVar1 = eastl::max<int>(param_4, field_76);
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 - param_4);
        iVar2 = eastl::max<int>(0, iVar2);
        *param_2 = iVar2;
    }

    // 0x1006a2e20, 96 bytes, placed by class name
    // PagedLayer::SetScrollSize(int, int)
    void PagedLayer::SetScrollSize(int param_1, int param_2) {
        PageData* this_00;

        this_00 = (PageData*)GetCurrentPage(this);
        if ((this_00->field_72 != param_1) || (this_00->field_76 != param_2)) {
            this_00->field_72 = param_1;
            this_00->field_76 = param_2;
            this_00->ValidateScrollPos((int*)&this_00->field_64, (int*)((long)&this_00->field_64 + 4), field_88,
                                       field_92);
            (*(code*)field_0[10])(this);
        }
    }

    // 0x1006a2e80, 224 bytes, placed by class name
    // PagedLayer::AddStaticChild(ComponentContainer const&)
    void PagedLayer::AddStaticChild(ComponentContainer* param_1) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        shared_ptr<Component>* psVar3;
        Component* pCVar4;
        vector<ComponentContainer, eastl::allocator>* this_01;

        this_00 = &field_496;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_pages.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                107, (char*)0);
        }
        psVar3 = (shared_ptr<Component>*)param_1->second();
        pCVar4 = (Component*)shared_ptr<Component>::operator->(psVar3);
        bVar2 = pCVar4->GetParentPageIndex();
        cVar1 = this_00->size();
        if ((int)cVar1 < (int)(uint)bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "child.GetComponent()->GetParentPageIndex() <= (int8)m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                108, (char*)0);
        }
        (&field_432, param_1)->push_back();
        psVar3 = (shared_ptr<Component>*)param_1->second();
        pCVar4 = (Component*)shared_ptr<Component>::operator->(psVar3);
        bVar2 = pCVar4->GetParentPageIndex();
        this_01 = (vector<ComponentContainer, eastl::allocator>*)eastl::vector<
            PagedLayer::PageData, eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<PagedLayer::PageData, eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                this_00,
            (ulong)bVar2);
        eastl::vector<ComponentContainer, eastl::allocator>::push_back(this_01, param_1);
        (*(code*)field_0[10])(this);
    }

    // 0x1006a2f70, 544 bytes, placed by class name
    // PagedLayer::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void PagedLayer::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar1;
        byte bVar2;
        char cVar4;
        ushort uVar5;
        ushort uVar6;
        undefined4 uVar7;
        long lVar8;
        long lVar9;
        Margin local_40;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_38;

        bVar2 = param_1->g1();
        m_staticPageCount = bVar2;
        local_38 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&field_496;
        local_38->resize((ulong)bVar2);
        bVar2 = param_1->g1();
        m_currentValue = bVar2;
        m_previousValue = bVar2;
        if ((GetPageCount(this) <= bVar2) &&
            (cVar4 =
                 eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                     local_38),
             cVar4 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(m_currentPage < GetPageCount()) || m_pages.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                124, (char*)0);
        }
        uVar5 = param_1->g2();
        pvVar1 = local_38;
        if (uVar5 != 0) {
            if (uVar5 != m_staticPageCount) {
                /* WARNING: Subroutine does not return */
                LogAssert("numLabels == m_numStaticPages",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedLayer.cpp",
                          132, (char*)0);
            }
            lVar8 = local_38->HeapBeginPtr();
            lVar9 = pvVar1->end();
            for (; lVar8 != lVar9; lVar8 = lVar8 + 120) {
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(
                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
                    (basic_string*)(lVar8 + 88), false);
            }
        }
        uVar6 = param_1->g2();
        pvVar1 = local_38;
        if (uVar6 != 0) {
            if (uVar5 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("numLabels == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedLayer.cpp",
                          146, (char*)0);
            }
            if (uVar6 != m_staticPageCount) {
                /* WARNING: Subroutine does not return */
                LogAssert("numIcons == m_numStaticPages",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedLayer.cpp",
                          147, (char*)0);
            }
            lVar8 = local_38->HeapBeginPtr();
            lVar9 = pvVar1->end();
            for (; lVar8 != lVar9; lVar8 = lVar8 + 120) {
                uVar7 = param_1->g4s();
                *(undefined4*)(lVar8 + 112) = uVar7;
            }
        }
        new (&local_40) Margin(param_1);
        field_1072 = local_40;
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
        uVar7 = param_1->g4();
        field_96 = uVar7;
        (&field_1024, param_1, param_2)->DecodeSpriteData();
        lVar8 = local_38->size();
        (&field_432, lVar8 * 10)->reserve();
        (*(code*)field_0[64])(this);
    }

    // 0x1006a3190, 32 bytes, placed by class name
    // PagedLayer::OnActivePageChanged()
    void PagedLayer::OnActivePageChanged() {
        (**(code**)(*(long*)field_1080 + 16))(field_1080, this, 1);
    }

    // 0x1006a31b0, 112 bytes, placed by class name
    // PagedLayer::LoadStyleSheetVisuals(StyleSheet const&)
    void PagedLayer::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 590, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 589, 1);
        (&field_1072, 591, param_1)->LoadFromStylesheet();
        (&field_1024, 597, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x1006a3220, 1360 bytes, placed by class name
    // PagedLayer::AddDynamicChild(shared_ptr<Component> const&, bool)
    ulong PagedLayer::AddDynamicChild(shared_ptr* param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        Component* pCVar6;
        ComponentCollectionBase* this_01;
        undefined8 uVar7;
        undefined8 uVar8;
        SharedArray<unsigned int>* this_02;
        ComponentContainer* pCVar9;
        long lVar10;
        ComponentContainer* pCVar11;
        shared_ptr<Component>* this_03;
        long lVar12;
        undefined** ppuVar13;
        undefined7 in_register_00000011;
        shared_ptr* extraout_RDX;
        PagedLayer* pPVar14;
        ulong uVar15;
        undefined8 uVar16;
        char* pcVar17;
        Layout* pLVar18;
        shared_ptr* psVar19;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_70[16];
        PagedLayer* local_60;
        ComponentContainer local_50;
        int local_34;

        local_60 = (PagedLayer*)CONCAT44(local_60._4_4_, (int)CONCAT71(in_register_00000011, param_2));
        pCVar6 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        local_34 = pCVar6->GetDynamicID();
        iVar5 = GetDynamicID();
        if (iVar5 == -1) {
            cVar2 = '\0';
        } else {
            local_70->GetFocus();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)&local_50,
                                                                                         (jag*)local_70, extraout_RDX);
            local_70->~shared_ptr();
            bVar1 = local_50.operator_cast_to_bool();
            if (bVar1) {
                this_01 = (ComponentCollectionBase*)shared_ptr<ComponentCollectionBase>::operator->(
                    (shared_ptr<ComponentCollectionBase>*)&local_50);
                cVar2 = this_01->ChildDynamicIDExists(local_34);
                bVar1 = true;
                if ((cVar2 != '\0') && ((char)local_60 == '\0')) {
                    uVar7 = logger::default_logger();
                    iVar5 = local_34;
                    GetChildren();
                    uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    bVar1 = false;
                    logger::Logger::Log(uVar7, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "components/PagedLayer.cpp",
                                        279,
                                        "Could not add dynamic child with ID %i to component \'%s\' - a component with "
                                        "that ID already exists",
                                        iVar5, uVar8);
                    cVar2 = '\0';
                }
            } else {
                uVar7 = logger::default_logger();
                iVar5 = local_34;
                GetChildren();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar1 = false;
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                    "PagedLayer.cpp",
                    272,
                    "Could not add dynamic child with ID %i to component \'%s\' - dynamic layer has no static parent",
                    iVar5, uVar8);
                cVar2 = '\0';
            }
            local_50.~shared_ptr();
            if (!bVar1) {
                uVar15 = 0;
                goto LAB_1006a3718;
            }
        }
        this_00 = &field_464;
        cVar3 = this_00->empty();
        if (cVar3 != '\0') {
            this_00->reserve(50);
        }
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            this_02 = (SharedArray<unsigned int>*)this_00->back();
            pCVar6 = (Component*)this_02->data();
            iVar5 = pCVar6->GetDynamicID();
            if (iVar5 < local_34)
                goto LAB_1006a33bd;
            pCVar9 = (ComponentContainer*)this_00->HeapBeginPtr();
            pCVar11 = (ComponentContainer*)this_00->end();
            pCVar9 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
                pCVar9, pCVar11, &local_34,
                (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
        } else {
        LAB_1006a33bd:
            pCVar9 = (ComponentContainer*)this_00->end();
        }
        lVar10 = GetCurrentPage(this);
        pCVar11 = (ComponentContainer*)this_00->end();
        if ((char)local_60 == '\0') {
            if (pCVar9 != pCVar11) {
                uVar7 = logger::default_logger();
                iVar5 = local_34;
                GetChildren();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar17 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                          "already exists";
                uVar16 = 354;
                goto LAB_1006a35b3;
            }
        LAB_1006a35bf:
            psVar19 = param_1;
            local_60 = this;
            new (&local_50) ComponentContainer(param_1);
            this_00->insert(pCVar9, &local_50);
            local_50.~pair();
            new (&local_50) ComponentContainer(psVar19);
            ((lVar10 + 32))->push_back(&local_50);
            local_50.~pair();
            pPVar14 = local_60;
            local_60->RootSetUnownedDynamicChild(local_34, psVar19);
            ppuVar13 = pPVar14->field_0;
            this = pPVar14;
        } else {
            if (pCVar9 == pCVar11) {
            LAB_1006a356b:
                if (cVar2 == '\0')
                    goto LAB_1006a35bf;
                uVar7 = logger::default_logger();
                iVar5 = local_34;
                GetChildren();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar17 = "Could not add dynamic child with ID %i to component \'%s\' - a component with that ID "
                          "already exists within another layer";
                uVar16 = 348;
            LAB_1006a35b3:
                uVar15 = 0;
                logger::Logger::Log(uVar7, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayer.cpp",
                                    uVar16, pcVar17, iVar5, uVar8);
                goto LAB_1006a3718;
            }
            pCVar6 = (Component*)pCVar9->data();
            iVar5 = pCVar6->GetDynamicID();
            if (iVar5 != local_34)
                goto LAB_1006a356b;
            this_03 = (shared_ptr<Component>*)pCVar9->second();
            pCVar6 = (Component*)shared_ptr<Component>::operator->(this_03);
            bVar4 = pCVar6->GetParentPageIndex();
            lVar12 = eastl::vector<PagedLayer::PageData,
                                   eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<PagedLayer::PageData,
                               eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                       (ulong)bVar4);
            new (&local_50) ComponentContainer(param_1);
            ComponentContainer::operator=(pCVar9, &local_50);
            local_50.~pair();
            if (lVar12 == lVar10) {
                pLVar18 = (Layout*)(lVar10 + 32);
                pCVar9 = (ComponentContainer*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar18);
                pCVar11 = (ComponentContainer*)pLVar18->end();
                pCVar9 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer_const&, int)>(
                    pCVar9, pCVar11, &local_34,
                    (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdEquals_100ee6428);
                pCVar11 = (ComponentContainer*)pLVar18->end();
                if (pCVar9 == pCVar11) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderOrderIt != newPage.m_dynamicComponents.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "PagedLayer.cpp",
                              334, (char*)0);
                }
                pCVar6 = (Component*)pCVar9->data();
                iVar5 = pCVar6->GetDynamicID();
                psVar19 = param_1;
                if (iVar5 != local_34) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(*renderOrderIt)->GetDynamicID() == encodedDynamicID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "PagedLayer.cpp",
                              335, (char*)0);
                }
                new (&local_50) ComponentContainer(param_1);
                ComponentContainer::operator=(pCVar9, &local_50);
            } else {
                pLVar18 = (Layout*)(lVar12 + 32);
                pCVar9 = (ComponentContainer*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar18);
                pCVar11 = (ComponentContainer*)pLVar18->end();
                pCVar9 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer_const&, int)>(
                    pCVar9, pCVar11, &local_34,
                    (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdEquals_100ee6428);
                pCVar11 = (ComponentContainer*)pLVar18->end();
                if (pCVar9 == pCVar11) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("oldContainerIt != oldPage.m_dynamicComponents.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "PagedLayer.cpp",
                              324, (char*)0);
                }
                pLVar18->erase(pCVar9);
                psVar19 = param_1;
                new (&local_50) ComponentContainer(param_1);
                ((lVar10 + 32))->push_back(&local_50);
            }
            pPVar14 = (PagedLayer*)(lVar10 + 32);
            local_50.~pair();
            pCVar6 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)psVar19);
            pCVar6->SetParentPageIndex(m_currentValue);
            RootSetUnownedDynamicChild(local_34, psVar19);
            ppuVar13 = field_0;
        }
        (*(code*)ppuVar13[10])(this);
        uVar15 = CONCAT71((int7)((ulong)pPVar14 >> 8), 1);
    LAB_1006a3718:
        return uVar15 & 4294967295;
    }

    // 0x1006a3780, 448 bytes, placed by class name
    // PagedLayer::DelDynamicChild(int)
    undefined8 PagedLayer::DelDynamicChild(int param_1) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        int iVar3;
        int iVar4;
        SharedArray<unsigned int>* this_01;
        Component* pCVar5;
        ComponentContainer* pCVar6;
        ComponentContainer* pCVar7;
        shared_ptr<Component>* this_02;
        long lVar8;
        shared_ptr* psVar9;
        Layout* this_03;
        shared_ptr local_40;
        int local_2c;

        this_00 = &field_464;
        local_2c = param_1;
        cVar1 = this_00->empty();
        iVar4 = local_2c;
        if (cVar1 == '\0') {
            this_01 = (SharedArray<unsigned int>*)this_00->back();
            pCVar5 = (Component*)this_01->data();
            iVar3 = pCVar5->GetDynamicID();
            if (iVar4 <= iVar3) {
                pCVar6 = (ComponentContainer*)this_00->HeapBeginPtr();
                pCVar7 = (ComponentContainer*)this_00->end();
                pCVar6 = eastl::lower_bound<ComponentContainer_const*, int, bool (*)(ComponentContainer_const&, int)>(
                    pCVar6, pCVar7, &local_2c,
                    (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdInOrder_100ee6438);
                pCVar7 = (ComponentContainer*)this_00->end();
                if (pCVar6 != pCVar7) {
                    pCVar5 = (Component*)pCVar6->data();
                    iVar4 = pCVar5->GetDynamicID();
                    if (iVar4 == local_2c) {
                        this_02 = (shared_ptr<Component>*)pCVar6->second();
                        pCVar5 = (Component*)shared_ptr<Component>::operator->(this_02);
                        bVar2 = pCVar5->GetParentPageIndex();
                        lVar8 =
                            eastl::vector<PagedLayer::PageData,
                                          eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<PagedLayer::PageData,
                                               eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>*)&field_496,
                                       (ulong)bVar2);
                        psVar9 = (shared_ptr*)pCVar6->second();
                        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(psVar9);
                        this_00->erase(pCVar6);
                        this_03 = (Layout*)(lVar8 + 32);
                        pCVar6 = (ComponentContainer*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_03);
                        pCVar7 = (ComponentContainer*)this_03->end();
                        pCVar6 = eastl::find<ComponentContainer*, int, bool (*)(ComponentContainer_const&, int)>(
                            pCVar6, pCVar7, &local_2c,
                            (_func_bool_ComponentContainer_ptr_int*)PTR_ContainerDynamicIdEquals_100ee6428);
                        pCVar7 = (ComponentContainer*)this_03->end();
                        if (pCVar6 != pCVar7) {
                            pCVar5 = (Component*)pCVar6->data();
                            iVar4 = pCVar5->GetDynamicID();
                            if (iVar4 == local_2c) {
                                this_03->erase(pCVar6);
                                RootRemoveUnownedDynamicChild(&local_40);
                                (*(code*)field_0[10])(this);
                                local_40.~shared_ptr();
                                return 1;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("(renderOrderIt != page.m_dynamicComponents.end()) && "
                                  "((*renderOrderIt)->GetDynamicID() == encodedDynamicID)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "PagedLayer.cpp",
                                  391, (char*)0);
                    }
                }
            }
        }
        return 0;
    }

    // 0x1006a3940, 256 bytes, placed by class name
    // PagedLayer::SetChildHidden(Component const&, bool)
    void PagedLayer::SetChildHidden(Component* param_1, bool param_2) {
        byte bVar1;
        int iVar2;
        Layout* pLVar3;
        ComponentContainer* pCVar4;
        ComponentContainer* pCVar5;
        Layout* this_00;
        Component* local_30;

        iVar2 = param_1->GetDynamicID();
        if (iVar2 == -1) {
            iVar2 = param_1->GetStaticID();
            ComponentUtils::SetHiddenInStaticList(iVar2, (vector*)&field_432, param_2);
        } else {
            iVar2 = param_1->GetDynamicID();
            ComponentUtils::SetHiddenInDynamicList(iVar2, (vector*)&field_464, param_2);
        }
        bVar1 = param_1->GetParentPageIndex();
        pLVar3 = (Layout*)eastl::vector<PagedLayer::PageData,
                                        eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)bVar1);
        iVar2 = param_1->GetDynamicID();
        this_00 = pLVar3 + 32;
        if (iVar2 == -1) {
            this_00 = pLVar3;
        }
        pCVar4 = (ComponentContainer*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pCVar5 = (ComponentContainer*)this_00->end();
        local_30 = param_1;
        pCVar4 =
            eastl::find<ComponentContainer*, Component_const*, bool (*)(ComponentContainer_const&, Component_const*)>(
                pCVar4, pCVar5, &local_30,
                (_func_bool_ComponentContainer_ptr_Component_ptr*)PTR_ContainerPtrEquals_100ee6420);
        pCVar5 = (ComponentContainer*)this_00->end();
        if (pCVar4 == pCVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "existingRenderOrderIt != pageComponentList.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                420, (char*)0);
        }
        new (pCVar4) std::__cxx_atomic_base_impl<bool>(param_2);
    }

    // 0x1006a3ac0, 304 bytes, placed by class name
    // PagedLayer::SendComponentToBack(shared_ptr<Component> const&)
    void PagedLayer::SendComponentToBack(shared_ptr* param_1) {
        byte bVar1;
        int iVar2;
        PagedLayer* pPVar3;
        Component* pCVar4;
        Layout* pLVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        Skybox* this_00;
        Skybox* pSVar8;
        Layout* this_01;
        bool local_38[16];

        shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        local_38->GetLookatEntity();
        pPVar3 = (PagedLayer*)local_38->end();
        local_38->~shared_ptr();
        if (pPVar3 != this) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "component->GetParent().get() == this",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                433, (char*)0);
        }
        pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        bVar1 = pCVar4->GetParentPageIndex();
        pLVar5 = (Layout*)eastl::vector<PagedLayer::PageData,
                                        eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)bVar1);
        pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        iVar2 = pCVar4->GetDynamicID();
        this_01 = pLVar5 + 32;
        if (iVar2 == -1) {
            this_01 = pLVar5;
        }
        uVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_01);
        uVar7 = this_01->end();
        this_00 =
            (Skybox*)eastl::find<ComponentContainer*, shared_ptr<Component>,
                                 (shared_ptr<Component> const&)->SendComponentToBack()::__56>(uVar6, uVar7, param_1);
        pSVar8 = (Skybox*)this_01->end();
        if (this_00 == pSVar8) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "existingRenderOrderIt != pageComponentList.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                439, (char*)0);
        }
        local_38[0] = (bool)this_00->ShowSkybox();
        this_01->erase(this_00);
        eastl::vector<ComponentContainer, eastl::allocator>::emplace_back<shared_ptr<Component> const&, bool&>(
            (vector<ComponentContainer, eastl::allocator>*)this_01, param_1, local_38);
    }

    // 0x1006a3c40, 368 bytes, placed by class name
    // PagedLayer::SendComponentToFront(shared_ptr<Component> const&)
    void PagedLayer::SendComponentToFront(shared_ptr* param_1) {
        byte bVar1;
        bool bVar2;
        int iVar3;
        PagedLayer* pPVar4;
        Component* pCVar5;
        Layout* pLVar6;
        ComponentContainer* pCVar7;
        ComponentContainer* pCVar8;
        Skybox* this_00;
        Skybox* pSVar9;
        Layout* this_01;
        ComponentContainer local_40;

        shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        local_40.GetLookatEntity();
        pPVar4 = (PagedLayer*)local_40.end();
        local_40.~shared_ptr();
        if (pPVar4 != this) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "component->GetParent().get() == this",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                450, (char*)0);
        }
        pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        bVar1 = pCVar5->GetParentPageIndex();
        pLVar6 = (Layout*)eastl::vector<PagedLayer::PageData,
                                        eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)bVar1);
        pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        iVar3 = pCVar5->GetDynamicID();
        this_01 = pLVar6 + 32;
        if (iVar3 == -1) {
            this_01 = pLVar6;
        }
        pCVar7 = (ComponentContainer*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        pCVar8 = (ComponentContainer*)this_01->end();
        this_00 = (Skybox*)eastl::find<ComponentContainer*, shared_ptr<Component>,
                                       bool (*)(ComponentContainer_const&, shared_ptr<Component> const&)>(
            pCVar7, pCVar8, param_1, (_func_bool_ComponentContainer_ptr_shared_ptr_ptr*)PTR_ContainerEquals_100ee6418);
        pSVar9 = (Skybox*)this_01->end();
        if (this_00 == pSVar9) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "existingRenderOrderIt != pageComponentList.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.cpp",
                456, (char*)0);
        }
        bVar2 = (bool)this_00->ShowSkybox();
        this_01->erase(this_00);
        pCVar7 = (ComponentContainer*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        new (&local_40) ComponentContainer(param_1, bVar2);
        this_01->insert(pCVar7, &local_40);
        local_40.~pair();
    }

    // 0x1006a3db0, 144 bytes, placed by class name
    // PagedLayer::ConvertToInteractableArea(int&, int&, int&, int&, int&, int&) const
    void PagedLayer::ConvertToInteractableArea(int* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                               int* param_6) {
        byte bVar1;
        uint uVar2;
        Margin local_38;
        Margin local_34;

        local_38 = (Margin)(&field_1024)->GetVisualMargin();
        local_34 = (Margin)(&field_1072, &local_38)->GetValidOr();
        *param_1 = *param_1 + (uint)local_34.field_0;
        uVar2 = (uint)local_34 >> 8 & 255;
        *param_2 = *param_2 + uVar2;
        *param_3 = *param_3 + (uint)local_34.field_0;
        *param_4 = *param_4 + uVar2;
        bVar1 = local_34.GetWidth();
        *param_5 = *param_5 - (uint)bVar1;
        bVar1 = local_34.GetHeight();
        *param_6 = *param_6 - (uint)bVar1;
    }

    // 0x1006adc50: the linker folded this into PagedLayer::GetStaticChildren(), which has identical code
    PagedLayer::GetStaticChildren() const;

} // namespace jag::ui
