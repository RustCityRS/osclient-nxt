// libs/ui/components/CRMView.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "CRMView.h"

namespace jag::ui {
    // 0x100f3e9b8
    bool CRMView::m_debugDrawImageBounds = 0;

    // 0x100f3e9b9
    bool CRMView::m_debugDrawLabelBounds = 0;

    // 0x100f3e9ba
    bool CRMView::m_debugDrawClickBounds = 0;

    // 0x100689ac0
    CRMView::CRMView() : Component() {
        new (&field_392) eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>, int>(local_48);
        uint8_t* local_40 = &field_392;
        new (&field_448) eastl::vector<int>();
        field_480 = 0;
        new (&field_488) eastl::basic_string<char, BucketAllocatorEASTL>();
        new (field_512) http::CRMData();
        new (&field_848) eastl::vector<shared_ptr<render::Texture2D>>();
        new (&field_880) std::optional();
        field_900 = 4294967295;
        field_904 = 0;
        field_905 = 0;
        SetEnabled((uint8_t)this);
    }

    // 0x100689c30
    void CRMView::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                            bool arg5, bool arg6, bool arg7) {
        int iVar3;
        long lVar4;
        float* pfVar5;
        array<float, 4ul>* this_00;
        ImVec4 local_50;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        field_905 = 0;
        ServiceRequests();
        bool cVar1 = HasStateChanged();
        if (cVar1) {
            iVar3 = GetState();
            if (2 < iVar3) {
                (*this->_vptr[1]._x7e___2)(this);
            }
        }
        cVar1 = IsEnabled();
        if ((cVar1) && (arg4)) {
            cVar1 = RequestsComplete();
            if (cVar1) {
                lVar4 = field_512->GetPixelBuffer();
                local_3c = (float)arg2;
                this_00 = (array<float, 4ul>*)(lVar4 + 56);
                pfVar5 = (float*)(*this_00)[0];
                local_38 = *pfVar5;
                iVar3 = GetStreamCountLastMix();
                local_3c = (float)iVar3 * local_38 + local_3c;
                local_38 = (float)arg3;
                pfVar5 = (float*)(*this_00)[1];
                local_34 = *pfVar5;
                iVar3 = GetMinMapX();
                local_38 = (float)iVar3 * local_34 + local_38;
                pfVar5 = (float*)(*this_00)[2];
                local_34 = *pfVar5;
                iVar3 = GetStreamCountLastMix();
                local_34 = (float)iVar3 * local_34;
                pfVar5 = (float*)(*this_00)[3];
                local_40 = *pfVar5;
                iVar3 = GetMinMapX();
                local_50 = ImVec4(local_3c, local_38, local_34, (float)iVar3 * local_40);
                if (local_50.IsInside<float>(*((componentDependencies + 60)))) {
                    field_905 = 1;
                    cVar1 = field_880.has_value();
                    if (!cVar1) {
                        OpenActionURL();
                    } else {
                        field_904 = 1;
                        GenerateServerTriggerPayloadData();
                    }
                }
            }
        }
    }

    // 0x100689e00
    void CRMView::ServiceRequests() {
        uint8_t* this_01;
        CRMData* this_02;
        unsigned long uVar3;
        long lVar4;
        unique_ptr<http::HTTPRequest>* this_03;
        shared_ptr<render::Texture2D>* this_04;
        unsigned long uVar5;
        basic_string<char, BucketAllocatorEASTL>* str;
        ReturnValue local_68;
        ReturnValue local_58;
        ReturnValue local_48;
        CRMData* local_38;

        uint8_t* this_00 = field_512;
        field_900 = this_00->GetX();
        this_00->ServiceRequests();
        if (HasStateChanged()) {
            if (RequestsComplete()) {
                this_01 = &field_848;
                if (!(this_01->empty())) {
                    LogAssert("m_imageTextures.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "CRMView.cpp",
                              215, nullptr);
                }
                local_38 = (CRMData*)this_00;
                local_68 = this_00->GetImageElements();
                uVar3 = local_68.HeapBeginPtr();
                this_01->resize(uVar3);
                lVar4 = local_68.HeapBeginPtr();
                if (lVar4 != 0) {
                    uVar3 = 0;
                    do {
                        this_03 = &local_68[uVar3];
                        local_58 = HTTPSpriteData::MakeTextureFromRequest((HTTPRequest*)this_03->get());
                        this_04 = (shared_ptr<render::Texture2D>*)(*this_01)[uVar3];
                        *this_04 = local_58;
                        uVar3 = uVar3 + 1;
                        uVar5 = local_68.HeapBeginPtr();
                    } while (uVar3 < uVar5);
                }
                this_02 = local_38;
                local_38->ClearImageDataRequests();
                str = (basic_string<char, BucketAllocatorEASTL>*)this_02->GetPixelBuffer();
                local_58 = field_392.find(*str);
                local_48 = field_392.end();
                if (local_58 != local_48) {
                    lVar4 = local_58.HeapBeginPtr();
                    local_48.optional<int&, 0>(*((lVar4 + 24)));
                    field_884 = local_48[0]._4_1_;
                    field_880 = local_48[0]._0_4_;
                }
            }
        }
    }

    // 0x10068a0c0
    void CRMView::GenerateServerTriggerPayloadData() {
        uint32_t uVar1;
        type* ptVar6;
        uint32_t* puVar7;
        uint64_t uVar8;
        Logger* pLVar9;
        unsigned long arg1_00;

        int* arg1 = std::array<int, 3ul>::begin();
        int* arg2 = std::array<int, 3ul>::end();
        std::fill<int*, int>(arg1, arg2, 0);
        long lVar4 = field_512->GetPixelBuffer();
        basic_string<char, BucketAllocatorEASTL>* this_00 =
            (basic_string<char, BucketAllocatorEASTL>*)((lVar4 + 24))->HeapBeginPtr();
        basic_string<char, BucketAllocatorEASTL>* pbVar5 =
            (basic_string<char, BucketAllocatorEASTL>*)((lVar4 + 24))->end();
        if (this_00 == pbVar5) {
            arg1_00 = 0;
        } else {
            arg1_00 = 0;
            do {
                if (std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(
                        *((this_00 + 24)))) {
                    if (arg1_00 < 3) {
                        ptVar6 = std::get<1ul, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*((this_00 + 24)));
                        uVar1 = *(uint32_t*)ptVar6;
                        puVar7 = &field_888[arg1_00];
                        *puVar7 = uVar1;
                    }
                    arg1_00 = arg1_00 + 1;
                } else {
                    if (this_00->compare("user_id") != 0) {
                        pLVar9 = logger::default_logger();
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar9->Log(
                            false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "CRMView.cpp",
                            309,
                            "Could not generate server trigger payload for CRMView - invalid payload type for \'%s\'",
                            uVar8);
                        field_904 = 0;
                    }
                }
                this_00 = this_00 + 56;
            } while (this_00 != pbVar5);
        }
        if (3 < arg1_00) {
            pLVar9 = logger::default_logger();
            pLVar9->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/CRMView.cpp", 317,
                "Could not generate server trigger payload for CRMView - expected up to %d payload names but received "
                "%d",
                3, arg1_00);
            field_904 = 0;
        }
    }

    // 0x10068a250
    void CRMView::OpenActionURL() {
        variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>* arg1;
        bool cVar2;
        uint64_t uVar6;
        int* piVar7;
        unsigned long uVar8;
        Logger* pLVar9;
        eastl::string* str;
        fixed_string<char, 32> local_1f0;

        long lVar3 = field_512->GetPixelBuffer();
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fixed_string<char, 256> local_160(pcVar4);
        long lVar5 = ((lVar3 + 24))->HeapBeginPtr();
        lVar3 = ((lVar3 + 24))->end();
        if (lVar5 == lVar3) {
            cVar2 = local_160.empty();
            if (!cVar2) {
                str = (eastl::string*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_1a8 = eastl::string(str);
                cVar2 = local_1a8.OpenURLOverlaid(*str);
                if (!cVar2) {
                    pLVar9 = logger::default_logger();
                    uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar9->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "CRMView.cpp",
                                276, "Could not open CRM action URL \'%s\'", uVar6);
                }
            } else {
                pLVar9 = logger::default_logger();
                pLVar9->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/CRMView.cpp",
                    281, "Could not open CRM action URL - received empty URL");
            }
        }
        fixed_string<char, 40> local_1a8;
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_1a8.sprintf("%%%s%%", uVar6);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg1_00 = local_160.find(pcVar4, 0);
        if (arg1_00 != 18446744073709551615) {
            arg1 = (variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>*)(lVar5 + 24);
            if (std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1)) {
                local_1f0 = eastl::fixed_string<char, 32>();
                piVar7 = std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1);
                ToText<32, true>(&local_1f0, *piVar7, 10);
                uVar8 = local_1a8.size();
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_160.replace(arg1_00, uVar8, pcVar4);
            }
            if (std::holds_alternative<eastl::basic_string<char, BucketAllocatorEASTL>,
                                       eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1)) {
                std::get<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1);
                uVar8 = local_1a8.size();
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_160.replace(arg1_00, uVar8, pcVar4);
            } else {
                pLVar9 = logger::default_logger();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar9->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/CRMView.cpp",
                    266, "Could not open action URL - invalid payload type for \'%s\'", uVar6);
                local_160.clear();
            }
        }
    }

    // 0x10068a590
    void CRMView::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        array<float, 4ul> aVar1;
        FontManager* this_00;
        FontHelpers* this_01;
        CRMView* pCVar2;
        uint8_t bVar4;
        array<float, 4ul> aVar5;
        int iVar6;
        unsigned int uVar7;
        long lVar8;
        long lVar9;
        unsigned long uVar10;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Texture* pTVar11;
        uint32_t* puVar12;
        float* pfVar13;
        array<float, 4ul>* paVar14;
        int* piVar15;
        shared_ptr* this_03;
        unsigned long arg1;
        array<float, 4ul>* paVar16;
        int iVar17;
        int iVar18;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_04;
        array<float, 4ul>* paVar19;
        float fVar20;
        float fVar21;
        ReturnValue local_f0;
        StringView local_e0;
        TextProperties local_d0;
        ReturnValue local_a8;
        optional<unsigned int> local_98;
        array<float, 4ul>* local_90;
        CRMData* local_88;
        unsigned long local_80;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_70;
        GUIManager* local_68;
        unsigned int local_5c;
        CRMView* local_58;
        unsigned long local_48;
        Texture* local_40;
        unsigned long local_38;

        bool cVar3 = GetAlpha();
        if (cVar3) {
            cVar3 = RequestsComplete();
            if (cVar3) {
                local_68 = (*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
                local_88 = (CRMData*)field_512;
                local_a8 = local_88->GetImageElements();
                this_04 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&field_848;
                lVar8 = this_04->size();
                lVar9 = local_a8.HeapBeginPtr();
                if (lVar8 != lVar9) {
                    LogAssert("m_imageTextures.size() == imageElements.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "CRMView.cpp",
                              68, nullptr);
                }
                lVar8 = this_04->size();
                local_58 = this;
                if (lVar8 != 0) {
                    arg1 = 0;
                    local_70 = this_04;
                    do {
                        this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_04)[arg1];
                        pTVar11 = (Texture*)this_02->end();
                        if (pTVar11 != nullptr) {
                            local_40 = pTVar11;
                            lVar8 = local_a8[arg1];
                            paVar19 = (array<float, 4ul>*)(lVar8 + 8);
                            puVar12 = (uint32_t*)(*paVar19)[0];
                            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar12));
                            iVar6 = GetStreamCountLastMix();
                            local_38 = (unsigned long)(unsigned int)((int)((float)iVar6 * (float)local_38) + arg2);
                            pfVar13 = (float*)(*paVar19)[1];
                            local_48._0_4_ = *pfVar13;
                            iVar6 = GetMinMapX();
                            iVar17 = (int)((float)iVar6 * (float)local_48) + arg3;
                            pfVar13 = (float*)(*paVar19)[2];
                            local_48._0_4_ = *pfVar13;
                            iVar6 = GetStreamCountLastMix();
                            fVar20 = (float)iVar6 * (float)local_48;
                            puVar12 = (uint32_t*)(*paVar19)[3];
                            uVar10 = local_38;
                            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar12));
                            iVar6 = GetMinMapX();
                            fVar21 = (float)iVar6 * (float)local_48;
                            local_80 = (unsigned long)(unsigned int)(int)fVar21;
                            iVar6 = (int)uVar10;
                            local_48 = (unsigned long)(unsigned int)(int)fVar20;
                            uVar7 = local_58->GetRGBA();
                            this = local_58;
                            this_04 = local_70;
                            local_68->AddElement(iVar6, iVar17, (int)fVar20 + iVar6, iVar17 + (int)fVar21, uVar7, 0.0,
                                                 0.0, 1.0, 1.0, local_40, 1);
                            if (*PTR_m_debugDrawImageBounds_100ee6488 != '\0') {
                                uVar7 = GetRGBA();
                                local_68->AddOutline(iVar6, iVar17, (int)local_48, (int)local_80, 2, uVar7, 1);
                            }
                        }
                        arg1 = arg1 + 1;
                        uVar10 = this_04->size();
                    } while (arg1 < uVar10);
                }
                bVar4 = GetAlpha();
                local_5c = (unsigned int)bVar4;
                local_f0 = local_88->GetLabelElements();
                paVar14 = (array<float, 4ul>*)local_f0.end();
                paVar19 = (array<float, 4ul>*)local_f0.end();
                if (paVar14 != paVar19) {
                    pTVar11 = (Texture*)&local_58->field_448;
                    paVar14 = paVar14 + 24;
                    local_90 = paVar19;
                    local_40 = pTVar11;
                    do {
                        aVar1 = paVar14[24];
                        aVar5 = (array<float, 4ul>)pTVar11->size();
                        if ((uint8_t)aVar1 < (uint8_t)aVar5) {
                            piVar15 = (int*)(*pTVar11)[(unsigned long)(uint8_t)paVar14[24]];
                            iVar6 = *piVar15;
                            this_00 = *(FontManager**)(componentDependencies + 8);
                            local_d0 = shared_ptr();
                            this_03 = (shared_ptr*)this_00->GetFont(iVar6, local_d0);
                            cVar3 = shared_ptr::operator_cast_to_bool(this_03);
                            pTVar11 = local_40;
                            if (cVar3) {
                                pfVar13 = (float*)(*paVar14)[0];
                                pCVar2 = local_58;
                                local_38._0_4_ = *pfVar13;
                                iVar6 = local_58->GetStreamCountLastMix();
                                local_48 = (((uint64_t)local_48._4_4_ << 32) |
                                            (uint32_t)((int)((float)iVar6 * (float)local_38) + arg2));
                                pfVar13 = (float*)(*paVar14)[1];
                                local_38._0_4_ = *pfVar13;
                                iVar6 = pCVar2->GetMinMapX();
                                local_80 = (((uint64_t)local_80._4_4_ << 32) |
                                            (uint32_t)((int)((float)iVar6 * (float)local_38) + arg3));
                                pfVar13 = (float*)(*paVar14)[2];
                                local_38._0_4_ = *pfVar13;
                                iVar6 = pCVar2->GetStreamCountLastMix();
                                local_70 =
                                    (vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                                            BucketAllocatorEASTL>*)(((uint64_t)local_70._4_4_ << 32) |
                                                                    (uint32_t)((int)((float)iVar6 * (float)local_38)));
                                pfVar13 = (float*)(*paVar14)[3];
                                local_38._0_4_ = *pfVar13;
                                iVar6 = pCVar2->GetMinMapX();
                                local_38 = (((uint64_t)local_38._4_4_ << 32) |
                                            (uint32_t)((int)((float)iVar6 * (float)local_38)));
                                local_d0 = graphics::TextProperties(*this_03);
                                local_d0.SetAlignment((unsigned int)(uint8_t)paVar14[16],
                                                      (unsigned int)(uint8_t)paVar14[20]);
                                iVar6 = pCVar2->GetUIHeight();
                                uVar7 = iVar6 << 8 | local_5c;
                                local_98 = eastl::optional(local_5c);
                                local_d0.SetColours(uVar7, &local_98);
                                this_01 = *(FontHelpers**)componentDependencies;
                                local_e0.StringView<eastl::fixed_string<char, 40>>(*((paVar14 - 24)));
                                iVar6 = (int)local_80;
                                iVar18 = (int)(float)local_48;
                                iVar17 = (int)local_70;
                                this_01->DrawStringMultiline(&local_e0, (int)(float)local_48, (int)local_80,
                                                             (int)local_70, (int)(float)local_38, nullptr, local_d0);
                                if (*PTR_m_debugDrawLabelBounds_100ee6490 != '\0') {
                                    uVar7 = pCVar2->GetRGBA();
                                    local_68->AddOutline(iVar18, iVar6, iVar17, (int)(float)local_38, 2, uVar7, 1);
                                }
                                pTVar11 = local_40;
                                paVar19 = local_90;
                            }
                        }
                        paVar16 = paVar14 + 32;
                        paVar14 = paVar14 + 56;
                    } while (paVar16 != paVar19);
                }
                if (*PTR_m_debugDrawClickBounds_100ee6480 != '\0') {
                    lVar8 = local_88->GetPixelBuffer();
                    paVar19 = (array<float, 4ul>*)(lVar8 + 56);
                    pfVar13 = (float*)(*paVar19)[0];
                    pCVar2 = local_58;
                    local_40._0_4_ = *pfVar13;
                    iVar6 = local_58->GetStreamCountLastMix();
                    iVar17 = (int)((float)iVar6 * local_40._0_4_) + arg2;
                    pfVar13 = (float*)(*paVar19)[1];
                    local_40._0_4_ = *pfVar13;
                    iVar6 = pCVar2->GetMinMapX();
                    iVar18 = (int)((float)iVar6 * local_40._0_4_) + arg3;
                    pfVar13 = (float*)(*paVar19)[2];
                    local_40._0_4_ = *pfVar13;
                    iVar6 = pCVar2->GetStreamCountLastMix();
                    fVar20 = (float)iVar6 * local_40._0_4_;
                    puVar12 = (uint32_t*)(*paVar19)[3];
                    local_40 = (Texture*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar12));
                    iVar6 = pCVar2->GetMinMapX();
                    fVar21 = (float)iVar6 * local_40._0_4_;
                    uVar7 = pCVar2->GetRGBA();
                    local_68->AddOutline(iVar17, iVar18, (int)fVar20, (int)fVar21, 2, uVar7, 1);
                }
            }
        }
    }

    // 0x10068ac40
    void CRMView::Setup(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                        CRMView::HideOnErrorMode hideOnErrorMode) {
        bool cVar1 = str.empty();
        basic_string<char, BucketAllocatorEASTL>* this_00 = (basic_string<char, BucketAllocatorEASTL>*)&field_488;
        if (!cVar1) {
            this_00 = str;
        }
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = this_00->size();
        basic_string_view<char> local_48(str_00, arg2);
        (*this->_vptr[1]._dtor)(this);
    }

    // 0x10068ada0
    void CRMView::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint32_t uVar4;
        unsigned long arg1_00;
        ReturnValue local_198;
        ReturnValue local_180;
        unsigned int local_15c;

        arg1.g1();
        SetEnabled((uint8_t)this);
        uint8_t* this_00 = &field_448;
        CRMView* local_158 = this;
        unsigned short uVar3 = arg1.g2();
        this_00->resize((unsigned long)uVar3);
        auto puVar5 = this_00->HeapBeginPtr();
        auto puVar6 = this_00->end();
        CRMView* pCVar1 = local_158;
        for (; local_158 = pCVar1, puVar5 != puVar6; puVar5 = puVar5 + 1) {
            uVar4 = arg1.g4();
            *puVar5 = uVar4;
            pCVar1 = local_158;
        }
        arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&pCVar1->field_488, false);
        uint8_t bVar2 = arg1.g1();
        pCVar1->field_480 = (unsigned int)bVar2;
        fixed_vector<eastl::basic_string<char, BucketAllocatorEASTL>, 10ul> local_150;
        uVar3 = arg1.g2();
        local_150.resize((unsigned long)uVar3);
        auto pbVar7 = local_150.HeapBeginPtr();
        auto pbVar8 = local_150.end();
        for (; pbVar7 != pbVar8; pbVar7 = pbVar7 + 24) {
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(pbVar7, false);
        }
        uVar3 = arg1.g2();
        if (uVar3 != 0) {
            local_158 = (CRMView*)&local_158->field_392;
            arg1_00 = 0;
            do {
                pbVar7 = &local_150[arg1_00];
                local_15c = arg1.g4();
                local_180 = eastl::make_pair<eastl::basic_string<char, BucketAllocatorEASTL>&, unsigned int>(*pbVar7,
                                                                                                             local_15c);
                local_198 =
                    local_158->insert<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL>, unsigned int>, void>(
                        local_180);
                arg1_00 = arg1_00 + 1;
            } while (uVar3 != arg1_00);
        }
    }

    // 0x100c92b50: CRMView::~CRMView() has the same machine code as InlineFatalBreak()

} // namespace jag::ui
