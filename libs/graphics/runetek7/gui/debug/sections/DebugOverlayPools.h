// libs/graphics/runetek7/gui/debug/sections/DebugOverlayPools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayPools {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayPools();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual unsigned long Update(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        DebugOverlayPools(DebugOverlay& debugOverlay, bool arg2);
        void DrawPoolInfo(graphics::FontHelpers& fontHelpers, graphics::Font& font, int arg3, int& arg4);
        void UpdatePoolHistory(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>& sharedPoolInfos);
        void UpdatePoolTotal(const eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>& sharedPoolInfos,
                             shareduniquedebug::SharedPoolInfo& sharedPoolInfo);
        void DrawSharedUniquePoolInfo(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>& sharedPoolInfos,
                                      graphics::FontHelpers& fontHelpers, graphics::Font& font, int arg4, int& arg5);
        void DrawPoolInfoSub(const shareduniquedebug::SharedPoolInfo& sharedPoolInfo,
                             graphics::FontHelpers& fontHelpers, graphics::Font& font, int arg4, int& arg5);

    private:
        DebugOverlay* field_8;
        uint64_t field_16;
        uint8_t _unknown_24[80];
        uint32_t field_104;
        int field_108;
        unsigned int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
        uint32_t field_128;
        uint8_t _unknown_132[164];
        unsigned long long field_296;
        unsigned long long field_304;
        unsigned long long field_312;
    };

    // 0x1008a7c20
    DebugOverlayPools::DebugOverlayPools(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlaySection(debugOverlay, 13, arg2), field_128(250) {

        new (&field_136) eastl::map(local_20);
    }

    // 0x1008a7ca0
    void DebugOverlayPools::Draw(unsigned long long arg1, int arg2, int arg3) {
        auto font = field_8->GetFont();
        auto fontHelpers = field_8->data();
        DrawPoolInfo(*fontHelpers, *font, arg2, arg3);
        field_108 = arg3 - arg3;
        field_104 = field_128;
        fixed_string<char, 256> local_160;
        fixed_string<char, 16> local_198;
        fixed_string<char, 16> local_1d0;
        fixed_string<char, 16> local_208;
        auto pcVar1 = DataSizeString<eastl::fixed_string<char, 16>>(&local_198, field_296);
        auto pcVar2 = DataSizeString<eastl::fixed_string<char, 16>>(&local_1d0, field_304);
        auto pcVar3 = DataSizeString<eastl::fixed_string<char, 16>>(&local_208, field_312);
        local_160.sprintf("Shared Pool Usage: %s / %s (%s initial)", pcVar1, pcVar2, pcVar3);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fixed_string<char, 512> local_430(pcVar1);
        DrawTextString((int)&local_430, arg2, arg3, -1, 255);
    }

    // 0x1008a7f70
    void DebugOverlayPools::DrawPoolInfo(graphics::FontHelpers& fontHelpers, graphics::Font& font, int arg3,
                                         int& arg4) {
        fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul> local_38a0;
        shareduniquedebug::GetSharedPoolList(local_38a0);
        DebugOverlayPools* pDVar1 = this;
        UpdatePoolHistory(local_38a0);
        UpdatePoolTotal(pDVar1, &local_38a0, (SharedPoolInfo*)&field_256);
        DrawSharedUniquePoolInfo(local_38a0, fontHelpers, font, arg3, arg4);
        arg4 = arg4 + field_112;
        local_38a0.clear();
        shareduniquedebug::GetUniquePoolList(local_38a0);
        pDVar1 = this;
        UpdatePoolHistory(local_38a0);
        UpdatePoolTotal(pDVar1, &local_38a0, (SharedPoolInfo*)&field_184);
        DrawSharedUniquePoolInfo(local_38a0, fontHelpers, font, arg3, arg4);
        arg4 = arg4 + field_112;
    }

    // 0x1008a80b0
    unsigned long DebugOverlayPools::Update(unsigned long long arg1) {
        fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul> local_3890;

        bool bVar1 = field_120;
        if (bVar1 == false) {
            local_3890 = eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>();
            shareduniquedebug::GetSharedPoolList(local_3890);
            UpdatePoolHistory(local_3890);
            local_3890.clear();
            shareduniquedebug::GetUniquePoolList(local_3890);
            UpdatePoolHistory(local_3890);
        }
        return bVar1 & 4294967295;
    }

    // 0x1008a8180
    void DebugOverlayPools::UpdatePoolHistory(
        eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>& sharedPoolInfos) {
        long lVar3;
        TimedGraph* this_00;
        unsigned long long uVar4;
        ReturnValue local_48;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        auto piVar2 = sharedPoolInfos.HeapBeginPtr();
        auto local_38 = sharedPoolInfos.end();
        if (piVar2 != local_38) {
            do {
                if (*(long*)(piVar2 + 2) != 0) {
                    local_48 = field_136.find(*((piVar2 + 16)));
                    local_40.end();
                    if (local_48 == local_40 == '\0') {
                        lVar3 = *local_48;
                        uVar4 = FrameTime::GetCurrentTimeMS();
                        ((lVar3 + 8))->RecordValue(uVar4, *piVar2);
                    } else {
                        this_00 = &field_136[*((piVar2 + 16))];
                        uVar4 = FrameTime::GetCurrentTimeMS();
                        this_00->RecordValue(uVar4, *piVar2);
                        this_00->SetMaximum(piVar2[2]);
                    }
                }
                piVar2 = piVar2 + 18;
            } while (piVar2 != local_38);
        }
    }

    // 0x1008a8280
    void DebugOverlayPools::UpdatePoolTotal(
        const eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>& sharedPoolInfos,
        shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        long lVar1 = sharedPoolInfos.HeapBeginPtr();
        long lVar2 = sharedPoolInfos.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 72) {
            *(long*)(sharedPoolInfo + 40) = *(long*)(sharedPoolInfo + 40) + *(long*)(lVar1 + 40);
            *(long*)(sharedPoolInfo + 48) = *(long*)(sharedPoolInfo + 48) + *(long*)(lVar1 + 48);
            *(long*)(sharedPoolInfo + 56) = *(long*)(sharedPoolInfo + 56) + *(long*)(lVar1 + 56);
        }
    }

    // 0x1008a8300
    void DebugOverlayPools::DrawSharedUniquePoolInfo(
        eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>& sharedPoolInfos,
        graphics::FontHelpers& fontHelpers, graphics::Font& font, int arg4, int& arg5) {
        uint8_t auVar3[16];

        auto pSVar1 = sharedPoolInfos.HeapBeginPtr();
        auVar3 = sharedPoolInfos.end();
        eastl::sort<shareduniquedebug::SharedPoolInfo*,
                    (eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>&)
                        ->DrawSharedUniquePoolInfo(graphics::FontHelpers&, graphics::Font&, int, int&)::__1>(
            pSVar1, auVar3._0_8_, auVar3._8_8_);
        pSVar1 = (SharedPoolInfo*)sharedPoolInfos.HeapBeginPtr();
        auto pSVar2 = sharedPoolInfos.end();
        for (; pSVar1 != pSVar2; pSVar1 = pSVar1 + 72) {
            if (*(long*)(pSVar1 + 8) != 0) {
                DrawPoolInfoSub(*pSVar1, fontHelpers, font, arg4, arg5);
            }
        }
    }

    // 0x1008a83b0
    void DebugOverlayPools::DrawPoolInfoSub(const shareduniquedebug::SharedPoolInfo& sharedPoolInfo,
                                            graphics::FontHelpers& fontHelpers, graphics::Font& font, int arg4,
                                            int& arg5) {
        long lVar9;
        unsigned long long uVar10;
        char* pcVar11;
        char* pcVar12;
        int iVar14;
        int iVar16;
        TextProperties local_288;
        optional<int> local_260;
        StringView local_258;
        int local_220;
        int local_21c;
        uint8_t local_200[16];
        unsigned long local_1f0;
        uint64_t local_1e8;
        GUIManager* local_1e0;
        fixed_string<char, 16> local_1d0;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_198;

        TimedGraph* local_208 = (TimedGraph*)(unsigned long)field_112;
        auto pIVar8 = field_8->HeapBeginPtr();
        float fVar17 = (float)pIVar8->GetMouseX();
        pIVar8 = (Input*)field_8->HeapBeginPtr();
        float fVar18 = (float)pIVar8->GetMouseY();
        TimedGraph* pTVar4 = local_208;
        local_1e0 = (GUIManager*)(((uint64_t)local_1e0._1_7_ << 8) | (uint8_t)((int)(arg4 - 300) <= (int)fVar17));
        local_1f0 = (((uint64_t)local_1f0._1_7_ << 8) | (uint8_t)(arg5 <= (int)fVar18));
        int iVar15 = (int)local_208;
        unsigned long local_218 = (unsigned long)(unsigned int)arg4;
        local_200._8_8_ = arg5;
        local_1e8._0_1_ = (int)fVar18 < arg5 + iVar15;
        Callstack local_160;
        uint8_t bVar13 = (int)fVar17 <= arg4 & (uint8_t)local_1e0;
        local_160 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(
            (int)(((float)*(unsigned long*)(sharedPoolInfo + 48) * 100.0) /
                  (float)*(unsigned long*)(sharedPoolInfo + 56)),
            800, 0);
        unsigned int uVar6 = local_160.GetX();
        local_1e0 = ((RT7Core*)field_8->end())->GetGUIManager();
        local_1e8._0_1_ = bVar13 & (uint8_t)local_1f0 & (uint8_t)local_1e8;
        int iVar7 = iVar15 + 3;
        if (-1 < iVar15) {
            iVar7 = iVar15;
        }
        local_1f0 = (unsigned long)(unsigned int)(iVar7 >> 2);
        if ((uint8_t)local_1e8 != 0) {
            local_1f0 = (unsigned long)pTVar4 & 4294967295;
        }
        local_160 = field_136.find(*((sharedPoolInfo + 64)));
        local_198.end();
        char cVar5 = local_160 != local_198;
        if (!cVar5) {
            local_208 = nullptr;
        } else {
            lVar9 = *local_160;
            local_208 = (TimedGraph*)(lVar9 + 8);
        }
        int local_1d8 = (int)(300 * *(int*)sharedPoolInfo) / *(int*)(sharedPoolInfo + 8);
        local_160[0].m_stackFrames = 0;
        local_1d8 = math::Clamp<int>(local_1d8, local_160[0].m_stackFrames, 300);
        GUIManager* this_00 = local_1e0;
        uint64_t uVar1 = local_200._8_8_;
        iVar7 = (int)local_218;
        iVar15 = (int)local_1f0;
        unsigned int local_224 = uVar6;
        local_1e0->AddColouredRectangle(iVar7 - local_1d8, *(int*)local_200._8_8_, local_1d8, iVar15,
                                        (uVar6 & 4294967040) + 128, 1);
        this_00->AddColouredRectangle(iVar7 - 300, *(int*)uVar1, 300 - local_1d8, iVar15, uVar6 & 4294967040 | 64, 1);
        local_1d8 = (int)(300 * *(int*)(sharedPoolInfo + 16)) / *(int*)(sharedPoolInfo + 8);
        this_00->AddColouredRectangle(iVar7 - local_1d8, *(int*)uVar1, 1, iVar15, 4294967200, 1);
        cVar5 = '\0';
        if ((uint8_t)local_1e8 != '\0') {
            local_220 = (int)local_218 - 4;
            iVar14 = local_220 + 300 * -2;
            iVar16 = (int)local_1f0 - 2;
            iVar7 = *(int*)local_200._8_8_;
            local_21c = (int)local_1f0 * 3;
            uVar10 = FrameTime::GetCurrentTimeMS();
            pTVar4 = local_208;
            iVar15 = local_21c;
            local_208->Draw(*this_00, iVar14, iVar7 + iVar16, (int)(unsigned long)300, local_21c, uVar10, 120, 192);
            uVar6 = 300;
            iVar14 = local_220 + 300 * -2;
            iVar7 = *(int*)local_200._8_8_;
            uVar10 = FrameTime::GetCurrentTimeMS();
            cVar5 = (uint8_t)local_1e8;
            pTVar4->DrawMarkers(*local_1e0, fontHelpers, font, iVar14, iVar16 + iVar7, uVar6, iVar15, uVar10, 120, 192);
        }
        iVar7 = 300 + 2;
        if (cVar5) {
            local_160 = eastl::fixed_string<char, 256>();
            local_198 = eastl::fixed_string<char, 16>();
            local_1d0 = eastl::fixed_string<char, 16>();
            new (local_200) callstack::Callstack();
            *local_200 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(
                *(int*)(sharedPoolInfo + 16), *(int*)(sharedPoolInfo + 8), 0);
            local_1e8 = *(uint64_t*)(sharedPoolInfo + 64);
            local_1e0 = *(GUIManager**)sharedPoolInfo;
            uVar1 = *(uint64_t*)(sharedPoolInfo + 8);
            pcVar11 =
                DataSizeString<eastl::fixed_string<char, 16>>(&local_198, *(unsigned long long*)(sharedPoolInfo + 48));
            pcVar12 = DataSizeString<eastl::fixed_string<char, 16>>(&local_1d0, *(long*)(sharedPoolInfo + 48) -
                                                                                    *(long*)(sharedPoolInfo + 56));
            uVar6 = local_200->GetX();
            local_160.sprintf("%s: %zu/%zu (%s inc. %s overflow) (<col=%08X>%zu peak</col>)", local_1e8, local_1e0,
                              uVar1, pcVar11, pcVar12, uVar6 | 16777216, *(uint64_t*)(sharedPoolInfo + 16));
            if (*(long*)(sharedPoolInfo + 24) != 0) {
                local_160.append_sprintf(" [%zu WEAK]");
            }
            local_288 = graphics::TextProperties(font);
            local_288.SetAlignment(2);
            local_260 = eastl::optional(255);
            local_288.SetColours(local_224, &local_260);
            local_258.StringView<eastl::fixed_string<char, 40>>(local_160);
            fontHelpers.DrawString(&local_258, (int)local_218 - iVar7, *(int*)local_200._8_8_, 0, local_288);
        }
        if ((int)field_128 < 0) {
            field_128 = 0;
        }
        *(int*)local_200._8_8_ = *(int*)local_200._8_8_ + (int)local_1f0;
    }

    // 0x1008a8bc0
    void DebugOverlayPools::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display SharedPointer Pools Info", field_120);
    }

    // 0x1008cfea0
    DebugOverlayPools::~DebugOverlayPools() {
        field_136.~map();
    }

    // 0x1008d1670
    uint64_t DebugOverlayPools::DrawSharedUniquePoolInfo(
        eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul>&, graphics::FontHelpers&, graphics::Font&, int,
        int&)::$_1::operator()(const shareduniquedebug::SharedPoolInfo& sharedPoolInfo1,
                               const shareduniquedebug::SharedPoolInfo& sharedPoolInfo2) const {
        return *(unsigned long*)(this + 48) < *(unsigned long*)(sharedPoolInfo1 + 48);
    }

} // namespace jag
