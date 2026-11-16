// libs/ui/components/CRMView.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "CRMView.h"

namespace jag::ui {
    // 0x100f3e9b8, 1 bytes, __data
    CRMView::m_debugDrawImageBounds = 0;

    // 0x100f3e9b9, 1 bytes, __data
    CRMView::m_debugDrawLabelBounds = 0;

    // 0x100f3e9ba, 1 bytes, __data
    CRMView::m_debugDrawClickBounds = 0;

    // 0x100689ac0, 304 bytes, base-object constructor, placed by class name
    // CRMView::CRMView()
    void CRMView::CRMView() {
        allocator local_48[8];
        undefined1* local_40;

        new (this) Component();
        field_0 = &PTR__OptionStore_100f0e560;
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new (&field_392, local_48) eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>, int,
                                                   eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                   eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                   eastl::allocator, false>();
        local_40 = &field_392;
        new (&field_448) eastl::vector<int, eastl::allocator>();
        field_480 = 0;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        new (field_512) http::CRMData();
        new (&field_848) eastl::vector<shared_ptr<render::Texture2D>, eastl::allocator>();
        new (&field_880) std::optional<int>();
        field_900 = 4294967295;
        field_904 = 0;
        field_905 = 0;
        (*(code*)field_0[4])(this, 1);
    }

    // 0x100689c30, 464 bytes, placed by class name
    // CRMView::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void CRMView::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                            bool param_6, bool param_7) {
        char cVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        array<float, 4ul>* this_00;
        ImVec4 local_50[16];
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        field_905 = 0;
        ServiceRequests(this);
        cVar1 = HasStateChanged(this);
        if (cVar1 != '\0') {
            iVar3 = GetState(this);
            if (2 < iVar3) {
                (*(code*)field_0[33])(this);
            }
        }
        cVar1 = IsEnabled();
        if ((cVar1 != '\0') && (param_4)) {
            cVar1 = RequestsComplete(this);
            if (cVar1 != '\0') {
                lVar4 = field_512->GetPixelBuffer();
                local_3c = (float)param_2;
                this_00 = (array<float, 4ul>*)(lVar4 + 56);
                pfVar5 = (float*)std::array<float, 4ul>::operator[](this_00, 0);
                local_38 = *pfVar5;
                iVar3 = GetStreamCountLastMix();
                local_3c = (float)iVar3 * local_38 + local_3c;
                local_38 = (float)param_3;
                pfVar5 = (float*)std::array<float, 4ul>::operator[](this_00, 1);
                local_34 = *pfVar5;
                iVar3 = GetMinMapX();
                local_38 = (float)iVar3 * local_34 + local_38;
                pfVar5 = (float*)std::array<float, 4ul>::operator[](this_00, 2);
                local_34 = *pfVar5;
                iVar3 = GetStreamCountLastMix();
                local_34 = (float)iVar3 * local_34;
                pfVar5 = (float*)std::array<float, 4ul>::operator[](this_00, 3);
                local_40 = *pfVar5;
                iVar3 = GetMinMapX();
                ImVec4::ImVec4(local_50, local_3c, local_38, local_34, (float)iVar3 * local_40);
                bVar2 = math::Rect<float>::IsInside<float>((Rect<float>*)local_50, (Vector2T*)(param_1 + 60));
                if (bVar2) {
                    field_905 = 1;
                    cVar1 = (&field_880)->has_value();
                    if (cVar1 == '\0') {
                        OpenActionURL(this);
                    } else {
                        field_904 = 1;
                        GenerateServerTriggerPayloadData(this);
                    }
                }
            }
        }
    }

    // 0x100689e00, 432 bytes, placed by class name
    // CRMView::ServiceRequests()
    void CRMView::ServiceRequests() {
        undefined1* this_00;
        undefined1* this_01;
        CRMData* this_02;
        char cVar1;
        ulong uVar4;
        unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>* this_03;
        HTTPRequest* pHVar6;
        shared_ptr<render::Texture2D>* this_04;
        ulong uVar7;
        hashtable_iterator_base* extraout_RDX;
        WrapArray<http::CRMData::ImageElement_const> local_68[16];
        basic_string local_58[16];
        int local_48[4];
        CRMData* local_38;

        this_00 = field_512;
        field_900 = this_00->GetX();
        this_00->ServiceRequests();
        cVar1 = HasStateChanged(this);
        if (cVar1 != '\0') {
            cVar1 = RequestsComplete(this);
            if (cVar1 != '\0') {
                this_01 = &field_848;
                cVar1 = this_01->empty();
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_imageTextures.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "CRMView.cpp",
                              215, (char*)0);
                }
                local_38 = (CRMData*)this_00;
                local_68->GetImageElements();
                uVar4 = local_68->HeapBeginPtr();
                this_01->resize(uVar4);
                if (local_68->HeapBeginPtr() != 0) {
                    uVar4 = 0;
                    do {
                        this_03 = (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)
                            WrapArray<http::CRMData::ImageElement_const>::operator[](local_68, uVar4);
                        pHVar6 = (HTTPRequest*)
                            std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::get(this_03);
                        local_58->MakeTextureFromRequest(pHVar6);
                        this_04 = (shared_ptr<render::Texture2D>*)
                            eastl::vector<shared_ptr<render::Texture2D>, eastl::allocator>::operator[](
                                (vector<shared_ptr<render::Texture2D>, eastl::allocator>*)this_01, uVar4);
                        shared_ptr<render::Texture2D>::operator=(this_04, (shared_ptr*)local_58);
                        local_58->~shared_ptr();
                        uVar4 = uVar4 + 1;
                        uVar7 = local_68->HeapBeginPtr();
                    } while (uVar4 < uVar7);
                }
                this_02 = local_38;
                local_38->ClearImageDataRequests();
                this_02->GetPixelBuffer();
                eastl::hashtable<
                    eastl::basic_string<char, BucketAllocatorEASTL>,
                    eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const, int>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const, int>>,
                    eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                    eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_58);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                if (eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_48, extraout_RDX)) {
                    local_58->HeapBeginPtr();
                    std::optional<int>::optional<int&, 0>(local_48);
                    field_884 = (undefined1)local_48[1];
                    field_880 = local_48[0];
                }
            }
        }
    }

    // 0x10068a0c0, 400 bytes, placed by class name
    // CRMView::GenerateServerTriggerPayloadData()
    void CRMView::GenerateServerTriggerPayloadData() {
        undefined1* this_00;
        undefined4 uVar1;
        bool bVar2;
        int* piVar4;
        int* piVar5;
        long lVar6;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        basic_string<char, BucketAllocatorEASTL>* pbVar7;
        type* ptVar8;
        undefined4* puVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        ulong uVar12;
        int local_34;

        this_00 = &field_888;
        piVar4 = (int*)this_00->begin();
        piVar5 = (int*)this_00->end();
        local_34 = 0;
        std::fill<int*, int>(piVar4, piVar5, &local_34);
        lVar6 = field_512->GetPixelBuffer();
        this_01 = (basic_string<char, BucketAllocatorEASTL>*)((lVar6 + 24))->HeapBeginPtr();
        pbVar7 = (basic_string<char, BucketAllocatorEASTL>*)((lVar6 + 24))->end();
        if (this_01 == pbVar7) {
            uVar12 = 0;
        } else {
            uVar12 = 0;
            do {
                bVar2 = std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(
                    (variant*)(this_01 + 24));
                if (bVar2) {
                    if (uVar12 < 3) {
                        ptVar8 = std::get<1ul, eastl::basic_string<char, BucketAllocatorEASTL>, int>(
                            (variant*)(this_01 + 24));
                        uVar1 = *(undefined4*)ptVar8;
                        puVar9 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, uVar12);
                        *puVar9 = uVar1;
                    }
                    uVar12 = uVar12 + 1;
                } else {
                    if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(this_01, "user_id") != 0) {
                        uVar11 = logger::default_logger();
                        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(
                            uVar11, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "CRMView.cpp",
                            309,
                            "Could not generate server trigger payload for CRMView - invalid payload type for \'%s\'",
                            uVar10);
                        field_904 = 0;
                    }
                }
                this_01 = this_01 + 56;
            } while (this_01 != pbVar7);
        }
        if (3 < uVar12) {
            uVar11 = logger::default_logger();
            logger::Logger::Log(
                uVar11, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/CRMView.cpp", 317,
                "Could not generate server trigger payload for CRMView - expected up to %d payload names but received "
                "%d",
                3, uVar12);
            field_904 = 0;
        }
    }

    // 0x10068a250, 832 bytes, placed by class name
    // CRMView::OpenActionURL()
    void CRMView::OpenActionURL() {
        variant* pvVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        char* pcVar5;
        long lVar6;
        undefined8 uVar7;
        ulong uVar8;
        int* piVar9;
        ulong uVar10;
        undefined8 uVar11;
        fixed_string<char, 32, true, eastl::allocator> local_1f0[72];
        fixed_string<char, 40, true, eastl::allocator> local_1a8[72];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        lVar4 = field_512->GetPixelBuffer();
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160, pcVar5);
        lVar6 = ((lVar4 + 24))->HeapBeginPtr();
        lVar4 = ((lVar4 + 24))->end();
        if (lVar6 == lVar4) {
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar3 == '\0') {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_1f0) eastl::allocator("EASTL basic_string");
                new (local_1a8) eastl::string(pcVar5, local_1f0);
                cVar3 = Web::OpenURLOverlaid((basic_string*)local_1a8);
                local_1a8->~basic_string();
                if (cVar3 == '\0') {
                    uVar7 = logger::default_logger();
                    uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar7, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "components/CRMView.cpp",
                                        276, "Could not open CRM action URL \'%s\'", uVar11);
                }
            } else {
                uVar7 = logger::default_logger();
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/CRMView.cpp",
                    281, "Could not open CRM action URL - received empty URL");
            }
            /* WARNING: Subroutine does not return */
            local_160->~fixed_string();
        }
        new (local_1a8) eastl::fixed_string<char, 32, true, eastl::allocator>();
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_1a8, "%%%s%%", uVar7);
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar8 = local_160->find(pcVar5, 0);
        if (uVar8 != 18446744073709551615) {
            pvVar1 = (variant*)(lVar6 + 24);
            bVar2 = std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
            if (bVar2) {
                eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_1f0);
                piVar9 = std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
                ToText<32, true>((fixed_string*)local_1f0, *piVar9, 10);
                uVar10 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_160->replace(uVar8, uVar10, pcVar5);
                /* WARNING: Subroutine does not return */
                local_1f0->~fixed_string();
            }
            bVar2 = std::holds_alternative<eastl::basic_string<char, BucketAllocatorEASTL>,
                                           eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
            if (bVar2) {
                std::get<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
                uVar10 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_160->replace(uVar8, uVar10, pcVar5);
            } else {
                uVar7 = logger::default_logger();
                uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/CRMView.cpp",
                    266, "Could not open action URL - invalid payload type for \'%s\'", uVar11);
                eastl::string::clear();
            }
        }
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_1a8);
    }

    // 0x10068a590, 1616 bytes, placed by class name
    // CRMView::MainDraw(ComponentDependencies const&, int, int, float)
    void CRMView::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        array<float, 4ul> aVar1;
        FontManager* this_00;
        FontHelpers* this_01;
        CRMView* pCVar2;
        char cVar3;
        byte bVar4;
        array<float, 4ul> aVar5;
        bool bVar6;
        int iVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        long lVar10;
        long lVar11;
        ulong uVar12;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        vector<unsigned int, eastl::allocator>* pvVar13;
        undefined4* puVar14;
        float* pfVar15;
        array<float, 4ul>* paVar16;
        int* piVar17;
        shared_ptr* this_03;
        uint uVar18;
        ulong uVar19;
        array<float, 4ul>* paVar20;
        int iVar21;
        int iVar22;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* pvVar23;
        array<float, 4ul>* paVar24;
        float fVar25;
        float fVar26;
        StringView SVar27;
        vector<unsigned int, eastl::allocator>* in_stack_fffffffffffffef8;
        TextProperties* in_stack_ffffffffffffff00;
        undefined4 uVar28;
        TextProperties* in_stack_ffffffffffffff08;
        undefined1 local_f0[16];
        StringView local_e0;
        TextProperties local_d0;
        WrapArray<http::CRMData::ImageElement_const> local_a8[16];
        optional<unsigned int> local_98[8];
        array<float, 4ul>* local_90;
        NXTRenderCanvas* local_88;
        ulong local_80;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_70;
        GUIManager* local_68;
        uint local_5c;
        CRMView* local_58;
        ulong local_48;
        vector<unsigned int, eastl::allocator>* local_40;
        ulong local_38;

        cVar3 = GetAlpha();
        if (cVar3 != '\0') {
            cVar3 = RequestsComplete(this);
            if (cVar3 != '\0') {
                local_68 = (GUIManager*)(*(RT7Core**)(param_1 + 16))->GetGUIManager();
                local_88 = (NXTRenderCanvas*)field_512;
                local_a8->GetImageElements();
                pvVar23 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&field_848;
                lVar10 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(pvVar23);
                lVar11 = local_a8->HeapBeginPtr();
                if (lVar10 != lVar11) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_imageTextures.size() == imageElements.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "CRMView.cpp",
                              68, (char*)0);
                }
                lVar10 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(pvVar23);
                local_58 = this;
                if (lVar10 != 0) {
                    uVar19 = 0;
                    local_70 = pvVar23;
                    do {
                        this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            eastl::vector<shared_ptr<render::Texture2D>, eastl::allocator>::operator[](
                                (vector<shared_ptr<render::Texture2D>, eastl::allocator>*)pvVar23, uVar19);
                        pvVar13 = (vector<unsigned int, eastl::allocator>*)
                            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                        uVar28 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 32);
                        if (pvVar13 != (vector<unsigned int, eastl::allocator>*)0) {
                            local_40 = pvVar13;
                            lVar10 = WrapArray<http::CRMData::ImageElement_const>::operator[](local_a8, uVar19);
                            paVar24 = (array<float, 4ul>*)(lVar10 + 8);
                            puVar14 = (undefined4*)std::array<float, 4ul>::operator[](paVar24, 0);
                            local_38 = CONCAT44(local_38._4_4_, *puVar14);
                            iVar7 = GetStreamCountLastMix();
                            local_38 = (ulong)(uint)((int)((float)iVar7 * (float)local_38) + param_2);
                            pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar24, 1);
                            local_48._0_4_ = *pfVar15;
                            iVar7 = GetMinMapX();
                            iVar21 = (int)((float)iVar7 * (float)local_48) + param_3;
                            pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar24, 2);
                            local_48._0_4_ = *pfVar15;
                            iVar7 = GetStreamCountLastMix();
                            fVar25 = (float)iVar7 * (float)local_48;
                            puVar14 = (undefined4*)std::array<float, 4ul>::operator[](paVar24, 3);
                            uVar12 = local_38;
                            local_48 = CONCAT44(local_48._4_4_, *puVar14);
                            iVar7 = GetMinMapX();
                            fVar26 = (float)iVar7 * (float)local_48;
                            local_80 = (ulong)(uint)(int)fVar26;
                            local_48 = (ulong)(uint)(int)fVar25;
                            uVar8 = local_58->GetRGBA();
                            this = local_58;
                            pvVar23 = local_70;
                            in_stack_ffffffffffffff00 = (TextProperties*)CONCAT44(uVar28, 1);
                            in_stack_fffffffffffffef8 = local_40;
                            0->AddElement(0, 1065353216, 1065353216, local_68, uVar12 & 4294967295, iVar21,
                                          (int)fVar25 + (int)uVar12, iVar21 + (int)fVar26, uVar8, local_40,
                                          in_stack_ffffffffffffff00);
                            uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 32);
                            uVar28 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
                            if (*PTR_m_debugDrawImageBounds_100ee6488 != '\0') {
                                uVar9 = GetRGBA();
                                in_stack_fffffffffffffef8 =
                                    (vector<unsigned int, eastl::allocator>*)CONCAT44(uVar28, uVar9);
                                in_stack_ffffffffffffff00 = (TextProperties*)CONCAT44(uVar8, 1);
                                local_68->AddOutline(uVar12 & 4294967295, iVar21, local_48, local_80, 2,
                                                     in_stack_fffffffffffffef8, in_stack_ffffffffffffff00);
                            }
                        }
                        uVar19 = uVar19 + 1;
                        uVar12 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
                            pvVar23);
                    } while (uVar19 < uVar12);
                }
                bVar4 = GetAlpha();
                local_5c = (uint)bVar4;
                local_f0->GetLabelElements();
                paVar16 = (array<float, 4ul>*)local_f0->end();
                paVar24 = (array<float, 4ul>*)local_f0->end();
                uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 32);
                uVar28 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
                if (paVar16 != paVar24) {
                    pvVar13 = (vector<unsigned int, eastl::allocator>*)&local_58->field_448;
                    paVar16 = paVar16 + 24;
                    local_90 = paVar24;
                    local_40 = pvVar13;
                    do {
                        aVar1 = paVar16[24];
                        aVar5 = (array<float, 4ul>)eastl::vector<unsigned int, eastl::allocator>::size(pvVar13);
                        if ((byte)aVar1 < (byte)aVar5) {
                            piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)pvVar13, (ulong)(byte)paVar16[24]);
                            iVar7 = *piVar17;
                            this_00 = *(FontManager**)(param_1 + 8);
                            new (&local_d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            this_03 = (shared_ptr*)this_00->GetFont(iVar7, (shared_ptr*)&local_d0);
                            local_d0.~shared_ptr();
                            bVar6 = shared_ptr::operator_cast_to_bool(this_03);
                            pvVar13 = local_40;
                            if (bVar6) {
                                pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar16, 0);
                                pCVar2 = local_58;
                                local_38._0_4_ = *pfVar15;
                                iVar7 = local_58->GetStreamCountLastMix();
                                local_48 = CONCAT44(local_48._4_4_, (int)((float)iVar7 * (float)local_38) + param_2);
                                pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar16, 1);
                                local_38._0_4_ = *pfVar15;
                                iVar7 = pCVar2->GetMinMapX();
                                local_80 = CONCAT44(local_80._4_4_, (int)((float)iVar7 * (float)local_38) + param_3);
                                pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar16, 2);
                                local_38._0_4_ = *pfVar15;
                                iVar7 = pCVar2->GetStreamCountLastMix();
                                local_70 =
                                    (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)CONCAT44(
                                        local_70._4_4_, (int)((float)iVar7 * (float)local_38));
                                pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar16, 3);
                                local_38._0_4_ = *pfVar15;
                                iVar7 = pCVar2->GetMinMapX();
                                local_38 = CONCAT44(local_38._4_4_, (int)((float)iVar7 * (float)local_38));
                                in_stack_ffffffffffffff00 = &local_d0;
                                graphics::TextProperties::TextProperties(in_stack_ffffffffffffff00, this_03);
                                in_stack_ffffffffffffff00->SetAlignment(paVar16[16], paVar16[20]);
                                iVar7 = pCVar2->GetUIHeight();
                                uVar18 = iVar7 << 8 | local_5c;
                                eastl::optional<unsigned int>::optional(local_98, &local_5c);
                                in_stack_ffffffffffffff00->SetColours(uVar18, local_98);
                                this_01 = *(FontHelpers**)param_1;
                                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                    &local_e0, (fixed_string*)(paVar16 + -24));
                                uVar12 = local_48;
                                pvVar23 = local_70;
                                uVar19 = local_80;
                                in_stack_fffffffffffffef8 = (vector<unsigned int, eastl::allocator>*)0;
                                SVar27.field_8._0_4_ = (float)local_48;
                                SVar27.field_0 = (ulong)&local_e0;
                                SVar27.field_8._4_4_ = 0;
                                this_01->DrawStringMultiline(SVar27, (int)local_80, (int)local_70, (int)(float)local_38,
                                                             0, in_stack_ffffffffffffff00, in_stack_ffffffffffffff08);
                                uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 32);
                                uVar28 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
                                if (*PTR_m_debugDrawLabelBounds_100ee6490 != '\0') {
                                    uVar9 = pCVar2->GetRGBA();
                                    in_stack_fffffffffffffef8 =
                                        (vector<unsigned int, eastl::allocator>*)CONCAT44(uVar28, uVar9);
                                    in_stack_ffffffffffffff00 = (TextProperties*)CONCAT44(uVar8, 1);
                                    local_68->AddOutline(uVar12 & 4294967295, uVar19 & 4294967295,
                                                         (ulong)pvVar23 & 4294967295, local_38 & 4294967295, 2,
                                                         in_stack_fffffffffffffef8, in_stack_ffffffffffffff00);
                                }
                                pvVar13 = local_40;
                                paVar24 = local_90;
                            }
                        }
                        uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 32);
                        uVar28 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
                        paVar20 = paVar16 + 32;
                        paVar16 = paVar16 + 56;
                    } while (paVar20 != paVar24);
                }
                if (*PTR_m_debugDrawClickBounds_100ee6480 != '\0') {
                    lVar10 = local_88->GetPixelBuffer();
                    paVar24 = (array<float, 4ul>*)(lVar10 + 56);
                    pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar24, 0);
                    pCVar2 = local_58;
                    local_40._0_4_ = *pfVar15;
                    iVar7 = local_58->GetStreamCountLastMix();
                    iVar21 = (int)((float)iVar7 * local_40._0_4_) + param_2;
                    pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar24, 1);
                    local_40._0_4_ = *pfVar15;
                    iVar7 = pCVar2->GetMinMapX();
                    iVar22 = (int)((float)iVar7 * local_40._0_4_) + param_3;
                    pfVar15 = (float*)std::array<float, 4ul>::operator[](paVar24, 2);
                    local_40._0_4_ = *pfVar15;
                    iVar7 = pCVar2->GetStreamCountLastMix();
                    fVar25 = (float)iVar7 * local_40._0_4_;
                    puVar14 = (undefined4*)std::array<float, 4ul>::operator[](paVar24, 3);
                    local_40 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_40._4_4_, *puVar14);
                    iVar7 = pCVar2->GetMinMapX();
                    fVar26 = (float)iVar7 * local_40._0_4_;
                    uVar9 = pCVar2->GetRGBA();
                    local_68->AddOutline(iVar21, iVar22, (int)fVar25, (int)fVar26, 2, CONCAT44(uVar28, uVar9),
                                         CONCAT44(uVar8, 1));
                }
            }
        }
    }

    // 0x10068ac40, 288 bytes, placed by class name
    // CRMView::Setup(eastl::basic_string<char, BucketAllocatorEASTL> const&, CRMView::HideOnErrorMode)
    undefined4 CRMView::Setup(undefined8 param_2, int param_3) {
        undefined4 uVar1;
        char* pcVar2;
        ulong uVar3;
        undefined8 uVar4;
        int* piVar5;
        int* piVar6;
        undefined8 local_48;
        undefined8 local_40;
        int local_38;
        undefined1 local_34;

        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        new (&local_48) std::basic_string_view<char, std::char_traits<char>>(pcVar2, uVar3);
        uVar4 = (*(code*)field_0[32])(this);
        uVar1 = http::CRMData::Request(field_512, local_48, local_40, uVar4);
        if ((char)uVar1 != '\0') {
            if (param_3 != -1) {
                field_480 = param_3;
            }
            field_904 = 0;
            field_905 = 0;
            new (&local_38) std::optional<int>();
            field_884 = local_34;
            field_880 = local_38;
            (&field_848)->clear();
            piVar5 = (int*)(&field_888)->begin();
            piVar6 = (int*)(&field_888)->end();
            local_38 = 0;
            std::fill<int*, int>(piVar5, piVar6, &local_38);
            field_900 = 4294967295;
        }
        return uVar1;
    }

    // 0x10068ada0, 528 bytes, placed by class name
    // CRMView::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void CRMView::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;
        CRMView* pCVar1;
        char cVar2;
        byte bVar3;
        ushort uVar4;
        undefined4 uVar5;
        undefined4* puVar6;
        undefined4* puVar7;
        basic_string* pbVar8;
        basic_string* pbVar9;
        ulong uVar10;
        pair local_198[24];
        eastl local_180[36];
        uint local_15c;
        CRMView* local_158;
        fixed_vector<eastl::basic_string<char, BucketAllocatorEASTL>, 10ul, true, eastl::allocator> local_150[280];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = param_1->g1();
        (*(code*)field_0[4])(this, cVar2 == '\x01');
        this_00 = &field_448;
        local_158 = this;
        param_1->g2();
        eastl::vector<int, eastl::allocator>::resize((ulong)this_00);
        puVar6 = (undefined4*)this_00->HeapBeginPtr();
        puVar7 = (undefined4*)this_00->end();
        pCVar1 = local_158;
        for (; local_158 = pCVar1, puVar6 != puVar7; puVar6 = puVar6 + 1) {
            uVar5 = param_1->g4();
            *puVar6 = uVar5;
            pCVar1 = local_158;
        }
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
            (basic_string*)&pCVar1->field_488, false);
        bVar3 = param_1->g1();
        pCVar1->field_480 = (uint)bVar3;
        eastl::fixed_vector<eastl::basic_string<char, BucketAllocatorEASTL>, 10ul, true,
                            eastl::allocator>::fixed_vector(local_150);
        uVar4 = param_1->g2();
        local_150->resize((ulong)uVar4);
        pbVar8 = (basic_string*)local_150->HeapBeginPtr();
        pbVar9 = (basic_string*)local_150->end();
        for (; pbVar8 != pbVar9; pbVar8 = pbVar8 + 24) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar8, false);
        }
        uVar4 = param_1->g2();
        if (uVar4 != 0) {
            local_158 = (CRMView*)&local_158->field_392;
            uVar10 = 0;
            do {
                pbVar8 = (basic_string*)
                    eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>,
                                  eastl::fixed_vector_allocator<24ul, 10ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::basic_string<char, BucketAllocatorEASTL>,
                                eastl::fixed_vector_allocator<24ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)local_150,
                        uVar10);
                local_15c = param_1->g4();
                eastl::make_pair<eastl::basic_string<char, BucketAllocatorEASTL>&, unsigned int>(local_180, pbVar8,
                                                                                                 &local_15c);
                eastl::hashtable<
                    eastl::basic_string<char, BucketAllocatorEASTL>,
                    eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const, int>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const, int>>,
                    eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                    eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::
                    insert<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL>, unsigned int>, void>(local_198);
                local_180->~__alt();
                uVar10 = uVar10 + 1;
            } while (uVar4 != uVar10);
        }
        eastl::fixed_vector<eastl::basic_string<char, BucketAllocatorEASTL>, 10ul, true,
                            eastl::allocator>::~fixed_vector(local_150);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    CRMView::~CRMView();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    CRMView::~CRMView();

} // namespace jag::ui
