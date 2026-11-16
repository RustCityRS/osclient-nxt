// libs/graphics/runetek7/gui/debug/sections/DebugOverlayPools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayPools {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayPools();
        virtual void Draw(unsigned long long, int, int);
        virtual ulong Update(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        DebugOverlayPools(DebugOverlay&, bool);
        void DrawPoolInfo(graphics::FontHelpers&, graphics::Font&, int, int&);
        void UpdatePoolHistory(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&);
        void
        UpdatePoolTotal(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator> const&,
                        shareduniquedebug::SharedPoolInfo&);
        void
        DrawSharedUniquePoolInfo(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&,
                                 graphics::FontHelpers&, graphics::Font&, int, int&);
        void DrawPoolInfoSub(shareduniquedebug::SharedPoolInfo const&, graphics::FontHelpers&, graphics::Font&, int,
                             int&);

        // data members, from how the methods use this: 320 bytes
        undefined** field_0;   // offset 0, vtable pointer
        DebugOverlay* field_8; // offset 8
        undefined8 field_16;   // offset 16
        char _unknown_24[80];
        undefined4 field_104; // offset 104
        int field_108;        // offset 108
        uint field_112;       // offset 112
        char _unknown_116[4];
        bool field_120;       // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124; // offset 124
        undefined4 field_128; // offset 128
        char _unknown_132[164];
        ulonglong field_296; // offset 296
        ulonglong field_304; // offset 304
        ulonglong field_312; // offset 312
    };

    // 0x1008a7c20, 112 bytes, base-object constructor, placed by class name
    // DebugOverlayPools::DebugOverlayPools(DebugOverlay&, bool)
    void DebugOverlayPools::DebugOverlayPools(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;
        allocator local_20[8];

        new (this) DebugOverlaySection(param_1, 13, CONCAT71(in_register_00000011, param_2) & 4294967295);
        field_0 = &PTR__DebugOverlayPools_100f181c8;
        field_128 = 250;
        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_136);
    }

    // 0x1008a7c90, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayPools::DebugOverlayPools(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a7ca0, 704 bytes, placed by class name
    // DebugOverlayPools::Draw(unsigned long long, int, int)
    void DebugOverlayPools::Draw(ulonglong param_1, int param_2, int param_3) {
        Font* pFVar1;
        FontHelpers* pFVar2;
        char* pcVar3;
        char* pcVar4;
        char* pcVar5;
        int local_434;
        fixed_string<char, 512, true, eastl::allocator> local_430[552];
        fixed_string<char, 16, true, eastl::allocator> local_208[56];
        fixed_string<char, 16, true, eastl::allocator> local_1d0[56];
        fixed_string<char, 16, true, eastl::allocator> local_198[56];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        pFVar1 = (Font*)field_8->GetFont();
        local_434 = param_3;
        pFVar2 = (FontHelpers*)field_8->data();
        DrawPoolInfo(this, pFVar2, pFVar1, param_2, &local_434);
        field_108 = local_434 - param_3;
        field_104 = field_128;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_198);
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_1d0);
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_208);
        pcVar3 =
            DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>((fixed_string*)local_198, field_296);
        pcVar4 =
            DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>((fixed_string*)local_1d0, field_304);
        pcVar5 =
            DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>((fixed_string*)local_208, field_312);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_160, "Shared Pool Usage: %s / %s (%s initial)", pcVar3, pcVar4, pcVar5);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_430, pcVar3);
        (*(code*)field_0[7])(this, local_430, param_2, param_3, 4294967295, 255, 2);
        /* WARNING: Subroutine does not return */
        local_430->~fixed_string();
    }

    // 0x1008a7f70, 320 bytes, placed by class name
    // DebugOverlayPools::DrawPoolInfo(graphics::FontHelpers&, graphics::Font&, int, int&)
    void DebugOverlayPools::DrawPoolInfo(FontHelpers* param_1, Font* param_2, int param_3, int* param_4) {
        DebugOverlayPools* pDVar1;
        fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator> local_38a0[14440];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>::fixed_vector(local_38a0);
        shareduniquedebug::GetSharedPoolList((fixed_vector*)local_38a0);
        pDVar1 = this;
        UpdatePoolHistory(this, (fixed_vector*)local_38a0);
        UpdatePoolTotal(pDVar1, (fixed_vector*)local_38a0, (SharedPoolInfo*)&field_256);
        DrawSharedUniquePoolInfo(this, (fixed_vector*)local_38a0, param_1, param_2, param_3, param_4);
        *param_4 = *param_4 + field_112;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        shareduniquedebug::GetUniquePoolList((fixed_vector*)local_38a0);
        pDVar1 = this;
        UpdatePoolHistory(this, (fixed_vector*)local_38a0);
        UpdatePoolTotal(pDVar1, (fixed_vector*)local_38a0, (SharedPoolInfo*)&field_184);
        DrawSharedUniquePoolInfo(this, (fixed_vector*)local_38a0, param_1, param_2, param_3, param_4);
        *param_4 = *param_4 + field_112;
        eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>::~fixed_vector(
            local_38a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008a80b0, 192 bytes, placed by class name
    // DebugOverlayPools::Update(unsigned long long)
    ulong DebugOverlayPools::Update(ulonglong param_1) {
        bool bVar1;
        undefined8 unaff_R14;
        fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator> local_3890[14440];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = field_120;
        if (bVar1 == false) {
            eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>::fixed_vector(
                local_3890);
            shareduniquedebug::GetSharedPoolList((fixed_vector*)local_3890);
            UpdatePoolHistory(this, (fixed_vector*)local_3890);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            shareduniquedebug::GetUniquePoolList((fixed_vector*)local_3890);
            UpdatePoolHistory(this, (fixed_vector*)local_3890);
            eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>::~fixed_vector(
                local_3890);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)unaff_R14 >> 8), bVar1) & 4294967295;
    }

    // 0x1008a8180, 240 bytes, placed by class name
    // DebugOverlayPools::UpdatePoolHistory(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&)
    void DebugOverlayPools::UpdatePoolHistory(fixed_vector* param_1) {
        TimedGraph* this_00;
        ulonglong uVar1;
        long lVar2;
        bool bVar3;
        hashtable_iterator_base* extraout_RDX;
        int* piVar4;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_48[8];
        hashtable_iterator_base local_40[8];
        int* local_38;

        piVar4 = (int*)param_1->HeapBeginPtr();
        local_38 = (int*)param_1->end();
        if (piVar4 != local_38) {
            do {
                if (*(long*)(piVar4 + 2) != 0) {
                    eastl::rbtree<char const*, eastl::pair<char const* const, TimedGraph>, eastl::less<char const*>,
                                  eastl::allocator, eastl::use_first<eastl::pair<char const* const, TimedGraph>>, true,
                                  true>::find((char**)local_48);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar3 = eastl::operator==((eastl*)local_48, local_40, extraout_RDX);
                    if (bVar3) {
                        this_00 = (TimedGraph*)
                            eastl::map<char const*, TimedGraph, eastl::less<char const*>, eastl::allocator>::operator[](
                                (map<char const*, TimedGraph, eastl::less<char const*>, eastl::allocator>*)&field_136,
                                (char**)(piVar4 + 16));
                        uVar1 = FrameTime::GetCurrentTimeMS();
                        this_00->RecordValue(uVar1, *piVar4);
                        this_00->SetMaximum(piVar4[2]);
                    } else {
                        lVar2 = eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                          eastl::allocator>>&>::operator*(local_48);
                        uVar1 = FrameTime::GetCurrentTimeMS();
                        ((lVar2 + 8))->RecordValue(uVar1, *piVar4);
                    }
                }
                piVar4 = piVar4 + 18;
            } while (piVar4 != local_38);
        }
    }

    // 0x1008a8280, 128 bytes, placed by class name
    // DebugOverlayPools::UpdatePoolTotal(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator> const&, shareduniquedebug::SharedPoolInfo&)
    void DebugOverlayPools::UpdatePoolTotal(fixed_vector* param_1, SharedPoolInfo* param_2) {
        long lVar1;
        long lVar2;

        *(undefined8*)(param_2 + 48) = 0;
        *(undefined8*)(param_2 + 56) = 0;
        *(undefined8*)(param_2 + 32) = 0;
        *(undefined8*)(param_2 + 40) = 0;
        *(undefined8*)(param_2 + 16) = 0;
        *(undefined8*)(param_2 + 24) = 0;
        *(undefined8*)param_2 = 0;
        *(undefined8*)(param_2 + 8) = 0;
        *(undefined8*)(param_2 + 64) = 0;
        lVar1 = param_1->HeapBeginPtr();
        lVar2 = param_1->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 72) {
            *(long*)(param_2 + 40) = *(long*)(param_2 + 40) + *(long*)(lVar1 + 40);
            *(long*)(param_2 + 48) = *(long*)(param_2 + 48) + *(long*)(lVar1 + 48);
            *(long*)(param_2 + 56) = *(long*)(param_2 + 56) + *(long*)(lVar1 + 56);
        }
    }

    // 0x1008a8300, 160 bytes, placed by class name
    // DebugOverlayPools::DrawSharedUniquePoolInfo(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&, graphics::FontHelpers&, graphics::Font&, int, int&)
    void DebugOverlayPools::DrawSharedUniquePoolInfo(fixed_vector* param_1, FontHelpers* param_2, Font* param_3,
                                                     int param_4, int* param_5) {
        undefined8 uVar1;
        undefined8 uVar2;
        SharedPoolInfo* pSVar3;
        SharedPoolInfo* pSVar4;

        uVar1 = param_1->HeapBeginPtr();
        uVar2 = param_1->end();
        eastl::sort<shareduniquedebug::SharedPoolInfo*,
                    (eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&)
                        ->DrawSharedUniquePoolInfo(graphics::FontHelpers&, graphics::Font&, int, int&)::__1>(uVar1,
                                                                                                             uVar2);
        pSVar3 = (SharedPoolInfo*)param_1->HeapBeginPtr();
        pSVar4 = (SharedPoolInfo*)param_1->end();
        for (; pSVar3 != pSVar4; pSVar3 = pSVar3 + 72) {
            if (*(long*)(pSVar3 + 8) != 0) {
                DrawPoolInfoSub(this, pSVar3, param_2, param_3, param_4, param_5);
            }
        }
    }

    // 0x1008a83b0, 1648 bytes, placed by class name
    // DebugOverlayPools::DrawPoolInfoSub(shareduniquedebug::SharedPoolInfo const&, graphics::FontHelpers&, graphics::Font&, int, int&)
    void DebugOverlayPools::DrawPoolInfoSub(SharedPoolInfo* param_1, FontHelpers* param_2, Font* param_3, int param_4,
                                            int* param_5) {
        undefined8 uVar1;
        TimedGraph* pTVar3;
        ulong uVar4;
        GUIManager* pGVar5;
        uint uVar7;
        int iVar8;
        Input* pIVar9;
        RT7Core* this_00;
        long lVar10;
        ulonglong uVar11;
        char* pcVar12;
        TextProperties* pTVar13;
        hashtable_iterator_base* extraout_RDX;
        byte bVar14;
        char cVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        float fVar19;
        float fVar20;
        StringView SVar21;
        undefined8 in_stack_fffffffffffffd48;
        undefined4 uVar22;
        TextProperties local_288;
        optional<int> local_260[8];
        StringView local_258;
        ulong local_248;
        int local_228;
        uint local_224;
        int local_220;
        int local_21c;
        ulong local_218;
        TimedGraph* local_208;
        undefined1 local_200[16];
        ulong local_1f0;
        undefined8 local_1e8;
        GUIManager* local_1e0;
        int local_1d8;
        uint local_1d4;
        fixed_string<char, 16, true, eastl::allocator> local_1d0[56];
        hashtable_iterator_base local_198[56];
        Callstack local_160[18];
        long local_38;

        uVar22 = (undefined4)((ulong)in_stack_fffffffffffffd48 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_208 = (TimedGraph*)(ulong)field_112;
        local_1d4 = 300;
        pIVar9 = (Input*)field_8->HeapBeginPtr();
        fVar19 = (float)pIVar9->GetMouseX();
        pIVar9 = (Input*)field_8->HeapBeginPtr();
        fVar20 = (float)pIVar9->GetMouseY();
        pTVar3 = local_208;
        local_1e0 = (GUIManager*)CONCAT71(local_1e0._1_7_, (int)(param_4 - local_1d4) <= (int)fVar19);
        local_1f0 = CONCAT71(local_1f0._1_7_, *param_5 <= (int)fVar20);
        iVar17 = (int)local_208;
        local_218 = (ulong)(uint)param_4;
        local_200._8_8_ = param_5;
        local_1e8._0_1_ = (int)fVar20 < *param_5 + iVar17;
        callstack::Callstack::Callstack(local_160);
        bVar14 = (int)fVar19 <= param_4 & (byte)local_1e0;
        local_160->SetRedGreenGradient((int)(((float)*(ulong*)(param_1 + 48) * 100.0) / (float)*(ulong*)(param_1 + 56)),
                                       800, 0);
        uVar7 = local_160->GetX();
        this_00 = (RT7Core*)(((DebugOverlayPools*)this)->field_8)->end();
        local_1e0 = (GUIManager*)this_00->GetGUIManager();
        local_1e8._0_1_ = bVar14 & (byte)local_1f0 & (byte)local_1e8;
        iVar8 = iVar17 + 3;
        if (-1 < iVar17) {
            iVar8 = iVar17;
        }
        local_1f0 = (ulong)(uint)(iVar8 >> 2);
        if ((byte)local_1e8 != 0) {
            local_1f0 = (ulong)pTVar3 & 4294967295;
        }
        eastl::rbtree<char const*, eastl::pair<char const* const, TimedGraph>, eastl::less<char const*>,
                      eastl::allocator, eastl::use_first<eastl::pair<char const* const, TimedGraph>>, true,
                      true>::find((char**)local_160);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=((eastl*)local_160, local_198, extraout_RDX)) {
            lVar10 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_160);
            local_208 = (TimedGraph*)(lVar10 + 8);
        } else {
            local_208 = (TimedGraph*)0;
        }
        local_1d8 = (int)(local_1d4 * *(int*)param_1) / *(int*)(param_1 + 8);
        local_160[0].field_0 = 0;
        local_1d8 = math::Clamp<int>(&local_1d8, &local_160[0].field_0, (int*)&local_1d4);
        pGVar5 = local_1e0;
        uVar4 = local_1f0;
        uVar1 = local_200._8_8_;
        iVar8 = (int)local_218;
        local_224 = uVar7;
        local_1e0->AddColouredRectangle(iVar8 - local_1d8, *(int*)local_200._8_8_, local_1d8, local_1f0 & 4294967295,
                                        (uVar7 & 4294967040) + 128, CONCAT44(uVar22, 1));
        pGVar5->AddColouredRectangle(iVar8 - local_1d4, *(int*)uVar1, local_1d4 - local_1d8, uVar4 & 4294967295,
                                     uVar7 & 4294967040 | 64, 1);
        local_1d8 = (int)(local_1d4 * *(int*)(param_1 + 16)) / *(int*)(param_1 + 8);
        pGVar5->AddColouredRectangle(iVar8 - local_1d8, *(int*)uVar1, 1, uVar4 & 4294967295, 4294967200, 1);
        cVar15 = '\0';
        if ((byte)local_1e8 != '\0') {
            local_248 = (ulong)local_1d4;
            local_220 = (int)local_218 + -4;
            iVar16 = local_220 + local_1d4 * -2;
            iVar18 = (int)local_1f0 + -2;
            iVar8 = *(int*)local_200._8_8_;
            local_21c = (int)local_1f0 * 3;
            uVar11 = FrameTime::GetCurrentTimeMS();
            pTVar3 = local_208;
            iVar17 = local_21c;
            local_208->Draw(pGVar5, iVar16, iVar8 + iVar18, (int)local_248, local_21c, uVar11, 120, 192);
            uVar7 = local_1d4;
            iVar16 = local_220 + local_1d4 * -2;
            iVar8 = *(int*)local_200._8_8_;
            uVar11 = FrameTime::GetCurrentTimeMS();
            cVar15 = (byte)local_1e8;
            pTVar3->DrawMarkers(local_1e0, param_2, param_3, iVar16, iVar18 + iVar8, uVar7, iVar17, uVar11, 120, 192);
        }
        iVar8 = local_1d4 + 2;
        if (cVar15 != '\0') {
            new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
            new (local_198) eastl::fixed_string<char, 16, true, eastl::allocator>();
            eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_1d0);
            new (local_200) callstack::Callstack();
            local_200->SetRedGreenGradient(*(int*)(param_1 + 16), *(int*)(param_1 + 8), 0);
            local_1e8 = *(undefined8*)(param_1 + 64);
            local_1e0 = *(GUIManager**)param_1;
            uVar1 = *(undefined8*)(param_1 + 8);
            pcVar12 = DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
                (fixed_string*)local_198, *(ulonglong*)(param_1 + 48));
            pTVar13 = (TextProperties*)DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
                (fixed_string*)local_1d0, *(long*)(param_1 + 48) - *(long*)(param_1 + 56));
            uVar7 = local_200->GetX();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_160, "%s: %zu/%zu (%s inc. %s overflow) (<col=%08X>%zu peak</col>)", local_1e8,
                        local_1e0, uVar1, pcVar12, pTVar13, uVar7 | 16777216, *(undefined8*)(param_1 + 16));
            if (*(long*)(param_1 + 24) != 0) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_160, " [%zu WEAK]");
            }
            new (&local_288) graphics::TextProperties(param_3);
            local_288.SetAlignment(2);
            local_228 = 255;
            eastl::optional<int>::optional(local_260, &local_228);
            local_288.SetColours(local_224, local_260);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_258,
                                                                                          (fixed_string*)local_160);
            SVar21.field_8._0_4_ = (int)local_218 - iVar8;
            SVar21.field_0 = (ulong)&local_258;
            SVar21.field_8._4_4_ = 0;
            param_2->DrawString(SVar21, *(int*)local_200._8_8_, 0, (uint)&local_288, pTVar13);
            /* WARNING: Subroutine does not return */
            local_1d0->~fixed_string();
        }
        if ((int)((DebugOverlayPools*)this)->field_128 < 0) {
            ((DebugOverlayPools*)this)->field_128 = 0;
        }
        *(int*)local_200._8_8_ = *(int*)local_200._8_8_ + (int)local_1f0;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008a8bc0, 32 bytes, placed by class name
    // DebugOverlayPools::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayPools::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display SharedPointer Pools Info", &field_120);
    }

    // 0x1008cc450, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugOverlayPools::~DebugOverlayPools(): jumps straight to the base-object destructor

    // 0x1008cc460, 32 bytes, deleting destructor, inline, placed by class name
    // DebugOverlayPools::~DebugOverlayPools()
    void DebugOverlayPools::~DebugOverlayPools() {
        ~DebugOverlayPools(this);
        operator_delete(this);
    }

    // 0x1008cfea0, 48 bytes, base-object destructor, inline, placed by class name
    // DebugOverlayPools::~DebugOverlayPools()
    void DebugOverlayPools::~DebugOverlayPools() {
        field_0 = &PTR__DebugOverlayPools_100f181c8;
        (&field_136)->~map();
        ~AutoSingleton();
    }

    // 0x1008d1670, 32 bytes, inline, placed by class name
    // DebugOverlayPools::DrawSharedUniquePoolInfo(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&, graphics::FontHelpers&, graphics::Font&, int, int&)::$_1::operator()(shareduniquedebug::SharedPoolInfo const&, shareduniquedebug::SharedPoolInfo const&) const
    /* DebugOverlayPools::DrawSharedUniquePoolInfo(eastl::fixed_vector<shareduniquedebug::SharedPoolInfo,
   200ul, true, eastl::allocator>&, graphics::FontHelpers&, graphics::Font&, int,
   int&)::$_1::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo const&,
   shareduniquedebug::SharedPoolInfo const&) const */

    undefined8 DebugOverlayPools::DrawSharedUniquePoolInfo(
        eastl::fixed_vector<shareduniquedebug::SharedPoolInfo, 200ul, true, eastl::allocator>&, graphics::FontHelpers&,
        graphics::Font&, int, int&)::$_1::operator()(SharedPoolInfo* param_1, SharedPoolInfo* param_2) {
        return CONCAT71((int7)(*(ulong*)(param_1 + 48) >> 8), *(ulong*)(param_1 + 48) < *(ulong*)(param_2 + 48));
    }

} // namespace jag
