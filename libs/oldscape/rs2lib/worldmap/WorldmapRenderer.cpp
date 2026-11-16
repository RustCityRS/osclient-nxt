// libs/oldscape/rs2lib/worldmap/WorldmapRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "WorldmapRenderer.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100fc91e8, 8 bytes, __common; zero-initialised
    WorldmapRenderer::m_js5Time;

    // 0x100fc91f0, 8 bytes, __common; zero-initialised
    WorldmapRenderer::m_wmaTime;

    // 0x100fc91f8, 8 bytes, __common; zero-initialised
    WorldmapRenderer::m_prepSquareTime;

    // 0x100fc9200, 16 bytes, __common; zero-initialised
    WorldmapRenderer::m_comptexTime;

    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    WorldmapRenderer::IsValid() const;

    // 0x1001f4c10, 320 bytes, base-object constructor, placed by class name and debug map
    // WorldmapRenderer::WorldmapRenderer(shared_ptr<Array<graphics::Pix8, eastl::allocator> >&, eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, jagex3::Js5*, jagex3::Js5*)
    void WorldmapRenderer::WorldmapRenderer(shared_ptr* param_1, hash_map* param_2, Js5* param_3, Js5* param_4) {
        allocator local_38[8];

        m_valid = 0;
        field_9 = 0;
        field_0 = 0;
        field_4 = 0.0;
        std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::unique_ptr<true, void>(
            (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)&field_16);
        new (&field_24, (_func_decltype_nullptr*)param_1) shared_ptr<WorldmapAreaMetadata>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_40, local_38) eastl::hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>,
                                                  eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_96)
            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                  eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_120, local_38)
            eastl::hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>, eastl::hash<int>,
                            eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_176, param_1) shared_ptr<dash3d::Decor>();
        field_192 = param_3;
        field_200 = param_4;
        new (&field_208, param_2) eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                                  eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1001f4db0, 16 bytes, complete-object constructor, placed by class name and debug map
    // WorldmapRenderer::WorldmapRenderer(shared_ptr<Array<graphics::Pix8, eastl::allocator> >&, eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, jagex3::Js5*, jagex3::Js5*): jumps straight to the base-object constructor

    // 0x1001f4dc0, 2080 bytes, placed by class name and debug map
    // WorldmapRenderer::ExtractData(jagex3::Js5&, eastl::string, bool)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* WorldmapRenderer::ExtractData(jagex3::Js5&,
   eastl::string, bool) */

    void WorldmapRenderer::ExtractData(Js5* param_1, undefined8 param_3, bool param_4) {
        undefined1* puVar1;
        Js5* this_00;
        char cVar2;
        bool bVar3;
        uint uVar4;
        undefined4 uVar5;
        int iVar6;
        int iVar7;
        char* pcVar8;
        array* paVar9;
        ulonglong uVar10;
        WorldmapArea* this_01;
        PacketJ* pPVar11;
        PacketJ* pPVar12;
        WorldmapAreaMetadata* pWVar13;
        ChangeLocationRequest* pCVar14;
        NXTPixScreen* pNVar15;
        ulonglong uVar16;
        Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>* pAVar17;
        shared_ptr<MapSquareData>* psVar18;
        SoundInstance* this_02;
        PlayerGroup* this_03;
        TextRun* pTVar19;
        unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>* puVar20;
        RenderedMapSquare* pRVar21;
        shared_ptr* psVar22;
        long lVar23;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar24;
        long lVar25;
        shared_ptr<WorldmapAreaMetadata>* this_04;
        _func_decltype_nullptr* p_Var26;
        char* pcVar27;
        Js5* pJVar28;
        WorldmapRenderer* pWVar29;
        unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>* puVar30;
        long lVar31;
        _func_decltype_nullptr* p_Var32;
        ErrorCapture local_428[17];
        shared_ptr<WorldmapAreaMetadata> local_d8[16];
        ulonglong local_c8;
        shared_ptr<WorldmapAreaMetadata> local_c0[16];
        undefined1* local_b0;
        ulong local_a8;
        Js5* local_a0;
        undefined8 local_98;
        int local_8c;
        WorldmapRenderer* local_88;
        ulong local_80;
        shared_ptr local_78;
        undefined* local_68;
        _func_decltype_nullptr* local_60;
        ulong local_58;
        undefined* local_50[2];
        uint local_40;
        int local_3c;
        unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>* local_38;

        if (field_9 == '\0') {
            m_valid = 0;
            field_9 = 1;
            local_88 = this;
            local_38 = (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)
                SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
            uVar4 = param_1->GetGroupId("details");
            p_Var32 = (_func_decltype_nullptr*)(ulong)uVar4;
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = param_1->GetFileId(uVar4, pcVar8);
            local_60 = (_func_decltype_nullptr*)CONCAT44(local_60._4_4_, uVar5);
            this_04 = local_d8;
            shared_ptr<WorldmapAreaMetadata>::shared_ptr(this_04, p_Var32);
            local_98 = param_3;
            paVar9 = (array*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_a0 = param_1;
            ((shared_ptr*)param_1)->GetFile(this_04, "details", paVar9);
            shared_ptr<WorldmapAreaMetadata>::shared_ptr(local_c0, (_func_decltype_nullptr*)this_04);
            paVar9 = (array*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pJVar28 = local_a0;
            ((shared_ptr*)local_a0)->GetFile(local_c0, "compositemap", paVar9);
            pWVar29 = local_88;
            uVar10 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pJVar28);
            m_js5Time = uVar10 - (long)local_38;
            uVar10 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pJVar28);
            std::make_unique<WorldmapArea>();
            puVar1 = &pWVar29->field_16;
            std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator=(
                (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)puVar1, (unique_ptr*)local_428);
            local_428->~unique_ptr();
            ErrorCapture::ErrorCapture(local_428, true);
            local_38 = (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)puVar1;
            this_01 = (WorldmapArea*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)puVar1);
            pPVar11 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_d8);
            pPVar12 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_c0);
            this_01->Unpack(pPVar11, pPVar12, (int)local_60, param_4, local_428);
            cVar2 = local_428->IsRaised();
            if (cVar2 == '\0') {
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        local_38);
                uVar5 = pWVar13->GetOriginX();
                *(undefined4*)&pWVar29->field_280 = uVar5;
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        local_38);
                uVar5 = pWVar13->GetOriginY();
                *(undefined4*)&pWVar29->field_284 = uVar5;
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        local_38);
                uVar5 = pWVar13->GetOriginZ();
                puVar30 = local_38;
                *(undefined4*)&pWVar29->field_288 = uVar5;
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        local_38);
                iVar6 = pWVar13->GetMinMapX();
                pWVar29->field_264 = iVar6 << 6;
                pCVar14 = (ChangeLocationRequest*)
                              std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                iVar6 = pCVar14->GetSeqDelay();
                pWVar29->field_268 = iVar6 << 6;
                pNVar15 = (NXTPixScreen*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                    puVar30);
                iVar6 = pNVar15->GetUIHeight();
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        puVar30);
                iVar7 = pWVar13->GetMinMapX();
                pWVar29->field_272 = (iVar6 - iVar7) * 64 + 64;
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        puVar30);
                iVar6 = pWVar13->GetMaxMapZ();
                pCVar14 = (ChangeLocationRequest*)
                              std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                iVar7 = pCVar14->GetSeqDelay();
                pWVar29->field_276 = (iVar6 - iVar7) * 64 + 64;
                pNVar15 = (NXTPixScreen*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                    puVar30);
                local_58 = pNVar15->GetUIHeight();
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        puVar30);
                iVar6 = pWVar13->GetMinMapX();
                pWVar13 =
                    (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                        puVar30);
                local_80 = pWVar13->GetMaxMapZ();
                pCVar14 = (ChangeLocationRequest*)
                              std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                iVar7 = pCVar14->GetSeqDelay();
                uVar16 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pCVar14);
                m_wmaTime = uVar16 - uVar10;
                local_c8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pCVar14);
                RenderedMapSquare::ResetCaches();
                puVar1 = &pWVar29->field_96;
                puVar1->clear();
                uVar4 = (int)local_58 - iVar6;
                local_58 = (ulong)uVar4;
                uVar4 = uVar4 + 1;
                local_a8 = (ulong)uVar4;
                puVar1->set_max_size((long)(int)uVar4, 1);
                puVar30 = local_38;
                uVar4 = (int)local_80 - iVar7;
                local_80 = (ulong)uVar4;
                uVar4 = uVar4 + 1;
                local_60 = (_func_decltype_nullptr*)(ulong)uVar4;
                if (-1 < (int)local_58) {
                    uVar24 = 0;
                    do {
                        pAVar17 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)puVar1,
                                uVar24);
                        pAVar17->clear();
                        pAVar17 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)puVar1,
                                uVar24);
                        pAVar17->set_max_size((long)(int)uVar4, 1);
                        uVar24 = uVar24 + 1;
                    } while (local_a8 != uVar24);
                }
                pRVar21 = (RenderedMapSquare*)&local_68;
                new (pRVar21) jag::math::Vector2T<int>();
                std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                local_50->begin();
                local_68 = local_50[0];
                local_b0 = &pWVar29->field_208;
                std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                local_50->end();
                bVar3 = eastl::operator!=((eastl*)pRVar21, (hashtable_iterator_base*)local_50, extraout_RDX);
                if (bVar3) {
                    do {
                        psVar18 = (shared_ptr<MapSquareData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_68);
                        this_02 = (SoundInstance*)shared_ptr<MapSquareData>::operator->(psVar18);
                        local_78._0_4_ = this_02->GetSoundShape();
                        psVar18 = (shared_ptr<MapSquareData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_68);
                        this_03 = (PlayerGroup*)shared_ptr<MapSquareData>::operator->(psVar18);
                        local_3c = this_03->GetUpdateNumber();
                        lVar31 = (long)(int)local_78._0_4_;
                        pWVar13 =
                            (WorldmapAreaMetadata*)
                                std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                        iVar6 = pWVar13->GetMinMapX();
                        lVar25 = (long)local_3c;
                        pCVar14 =
                            (ChangeLocationRequest*)
                                std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                        local_8c = pCVar14->GetSeqDelay();
                        pTVar19 =
                            (TextRun*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                                puVar30);
                        local_40 = pTVar19->GetWrapMode();
                        std::make_unique<RenderedMapSquare, int&, int&, int,
                                         eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                                         eastl::equal_to<int>, eastl::allocator, false> const&>(
                            (int*)local_50, (int*)&local_78, &local_3c, (hash_map*)&local_40);
                        pAVar17 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)puVar1,
                                lVar31 - iVar6);
                        lVar23 = (long)local_8c;
                        puVar20 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar17, lVar25 - lVar23);
                        std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator=(
                            puVar20, (unique_ptr*)local_50);
                        local_50->~unique_ptr();
                        pAVar17 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)puVar1,
                                lVar31 - iVar6);
                        puVar30 = local_38;
                        pWVar29 = local_88;
                        puVar20 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar17, lVar25 - lVar23);
                        pRVar21 =
                            (RenderedMapSquare*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar20);
                        psVar22 =
                            (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_68);
                        lVar23 = std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                        pRVar21->ExtractSquareData(psVar22, (list*)(lVar23 + 208));
                        pRVar21 = (RenderedMapSquare*)&local_68;
                        eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::
                        operator++(
                            (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)local_50,
                            (int)pRVar21);
                        std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                        local_50->end();
                        bVar3 = eastl::operator!=((eastl*)pRVar21, (hashtable_iterator_base*)local_50, extraout_RDX_00);
                    } while (bVar3);
                }
                if (-1 < (int)local_58) {
                    uVar24 = 0;
                    do {
                        if (-1 < (int)local_80) {
                            p_Var32 = (_func_decltype_nullptr*)0;
                            do {
                                pAVar17 =
                                    (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                           eastl::allocator>*)
                                        Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                    std::default_delete<RenderedMapSquare>>,
                                                    eastl::allocator>,
                                              eastl::allocator>::
                                        operator[]((Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                                std::default_delete<RenderedMapSquare>>,
                                                                eastl::allocator>,
                                                          eastl::allocator>*)puVar1,
                                                   uVar24);
                                p_Var26 = p_Var32;
                                pRVar21 = (RenderedMapSquare*)
                                    Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                          eastl::allocator>::operator[](pAVar17, (ulong)p_Var32);
                                bVar3 = std::operator==((unique_ptr*)pRVar21, p_Var26);
                                puVar30 = local_38;
                                if (bVar3) {
                                    pWVar13 =
                                        (WorldmapAreaMetadata*)std::unique_ptr<
                                            WorldmapArea, std::default_delete<WorldmapArea>>::operator->(local_38);
                                    local_78._0_4_ = pWVar13->GetMinMapX();
                                    local_78._0_4_ = local_78._0_4_ + (int)uVar24;
                                    pCVar14 = (ChangeLocationRequest*)std::unique_ptr<
                                                  WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                                    local_3c = pCVar14->GetSeqDelay();
                                    local_3c = local_3c + (int)p_Var32;
                                    pTVar19 = (TextRun*)std::unique_ptr<
                                                  WorldmapArea, std::default_delete<WorldmapArea>>::operator->(puVar30);
                                    local_40 = pTVar19->GetWrapMode();
                                    std::make_unique<
                                        RenderedMapSquare, int, int, int,
                                        eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                                        eastl::equal_to<int>, eastl::allocator, false> const&>(
                                        (int*)local_50, (int*)&local_78, &local_3c, (hash_map*)&local_40);
                                    pAVar17 =
                                        (Array<
                                            std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>*)
                                            Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                        std::default_delete<RenderedMapSquare>>,
                                                        eastl::allocator>,
                                                  eastl::allocator>::
                                            operator[](
                                                (Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                             std::default_delete<RenderedMapSquare>>,
                                                             eastl::allocator>,
                                                       eastl::allocator>*)puVar1,
                                                uVar24);
                                    puVar20 =
                                        (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)Array<
                                            std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>::operator[](pAVar17, (ulong)p_Var32);
                                    std::unique_ptr<RenderedMapSquare,
                                                    std::default_delete<RenderedMapSquare>>::operator=(puVar20,
                                                                                                       (unique_ptr*)
                                                                                                           local_50);
                                    local_50->~unique_ptr();
                                    pAVar17 =
                                        (Array<
                                            std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>*)
                                            Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                        std::default_delete<RenderedMapSquare>>,
                                                        eastl::allocator>,
                                                  eastl::allocator>::
                                            operator[](
                                                (Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                             std::default_delete<RenderedMapSquare>>,
                                                             eastl::allocator>,
                                                       eastl::allocator>*)puVar1,
                                                uVar24);
                                    puVar20 =
                                        (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)Array<
                                            std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>::operator[](pAVar17, (ulong)p_Var32);
                                    pRVar21 = (RenderedMapSquare*)std::unique_ptr<
                                                  RenderedMapSquare,
                                                  std::default_delete<RenderedMapSquare>>::operator->(puVar20);
                                    lVar23 =
                                        std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
                                            local_38);
                                    pWVar29 = local_88;
                                    pRVar21->ExtractZoneData((list*)(lVar23 + 176), (list*)(lVar23 + 208));
                                }
                                p_Var32 = p_Var32 + 1;
                            } while (local_60 != p_Var32);
                        }
                        uVar24 = uVar24 + 1;
                    } while (uVar24 != local_a8);
                }
                uVar10 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pRVar21);
                this_00 = local_a0;
                m_prepSquareTime = uVar10 - local_c8;
                uVar10 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pRVar21);
                pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar27 = "compositetexture";
                pJVar28 = this_00;
                cVar2 = this_00->GetDoesFileExist("compositetexture", pcVar8);
                if (cVar2 != '\0') {
                    new (local_50) shared_ptr<WorldmapAreaMetadata>(pcVar27);
                    paVar9 = (array*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    ((shared_ptr*)this_00)->GetFile(local_50, "compositetexture", paVar9);
                    pPVar11 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_50);
                    local_78.createPix32FromPNGData(pPVar11);
                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&pWVar29->field_24, &local_78);
                    local_78.~shared_ptr();
                    pJVar28 = (Js5*)local_50;
                    pJVar28->~shared_ptr();
                }
                uVar16 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pJVar28);
                _m_comptexTime = uVar16 - uVar10;
                this_00->DiscardAllGroups();
                this_00->DiscardAllFiles();
                pWVar29->m_valid = 1;
            }
            local_428->~LanguageMessage();
            local_c0->~shared_ptr();
            local_d8->~shared_ptr();
        }
    }

    // 0x1001f5cc0, 16 bytes, placed by class name and debug map
    // WorldmapRenderer::Reset()
    void WorldmapRenderer::Reset() {
        (&field_40)->clear();
    }

    // 0x1001f5cd0, 864 bytes, placed by class name and debug map
    // WorldmapRenderer::RenderMap(int, int, int, int, int, int, int, int, graphics::Pix2D&)
    void WorldmapRenderer::RenderMap(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                     int param_7, int param_8, Pix2D* param_9) {
        hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>, eastl::hash<int>,
                 eastl::equal_to<int>, eastl::allocator, false>* phVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        OverlayShapes* this_00;
        unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>* this_01;
        Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>* pAVar5;
        unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>* puVar6;
        RenderedMapSquare* this_02;
        unique_ptr* puVar7;
        int* piVar8;
        long lVar9;
        hashtable_iterator_base* extraout_RDX;
        WorldmapRenderer* this_03;
        ulong uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
              eastl::allocator>* pAVar14;
        ulong uVar15;
        float fVar16;
        undefined1 auVar17[16];
        hashtable_iterator_base local_b0[16];
        eastl local_a0[16];
        Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
              eastl::allocator>* local_90;
        long local_88;
        ulong local_80;
        long local_78;
        int local_6c;
        int local_68;
        float local_64;
        ulong local_60;
        long local_58;
        hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>, eastl::hash<int>,
                 eastl::equal_to<int>, eastl::allocator, false>* local_50;
        ulong local_48;
        WorldmapRenderer* local_40;
        int local_38;
        int local_34;

        this_03 = this;
        local_68 = param_2;
        auVar17 = GetRenderBounds(this, param_1, param_2, param_3, param_4);
        local_58 = auVar17._8_8_;
        local_48 = auVar17._0_8_;
        local_6c = param_5;
        local_38 = param_1;
        local_64 = (float)GetFloatStride(this_03, param_7 - param_5, param_3 - param_1);
        field_4 = local_64;
        fVar16 = (float)ceil(local_64);
        local_34 = (int)fVar16;
        field_0 = local_34;
        eastl::hashtable<
            int,
            eastl::pair<int const,
                        std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                    std::default_delete<ChatHistory::HistoryBuffer>>>>,
            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, true, true>::find((int*)local_a0);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator==(local_a0, local_b0, extraout_RDX);
        if (bVar2) {
            std::make_unique<OverlayShapes, int&>((int*)local_a0);
            this_00 = (OverlayShapes*)std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>::operator->(
                (unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>*)local_a0);
            this_00->CalcOverlayShapes();
            this_01 = (unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>*)
                eastl::hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>,
                                eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::
                operator[]((hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>,
                                     eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_120,
                           &local_34);
            std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>::operator=(this_01,
                                                                                          (unique_ptr*)local_a0);
            local_a0->~unique_ptr();
        }
        local_80 = local_48 >> 32;
        pAVar14 =
            (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                   eastl::allocator>*)&field_96;
        local_88 = (long)((int)((ulong)local_58 >> 32) + (int)(local_48 >> 32));
        local_78 = (long)((int)local_58 + (int)local_48);
        local_90 = pAVar14;
        local_40 = this;
        if (0 < (int)local_48) {
            local_60 = local_58 >> 32;
            uVar15 = (ulong)(int)local_58;
            local_50 = (hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>,
                                 eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_120;
            do {
                uVar10 = local_60;
                if (0 < (int)local_80) {
                    do {
                        pAVar5 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::operator[](pAVar14, uVar15);
                        puVar6 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar5, uVar10);
                        this_02 =
                            (RenderedMapSquare*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar6);
                        iVar12 = local_34;
                        puVar7 = (unique_ptr*)eastl::hash_map<
                            int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>, eastl::hash<int>,
                            eastl::equal_to<int>, eastl::allocator, false>::operator[](local_50, &local_34);
                        pAVar14 = local_90;
                        this_02->PrerenderSquare(iVar12, puVar7, (shared_ptr*)&field_176, local_40->field_192,
                                                 local_40->field_200);
                        uVar10 = uVar10 + 1;
                    } while ((long)uVar10 < local_88);
                }
                uVar15 = uVar15 + 1;
            } while ((long)uVar15 < local_78);
        }
        pAVar14 = local_90;
        if (0 < (int)local_48) {
            iVar12 = local_38 + local_40->field_264;
            local_60 = CONCAT44(local_60._4_4_, 64 - (local_68 + local_40->field_268));
            iVar11 = (int)(local_64 * 64.0);
            local_48 = local_58 >> 32;
            local_50 = (hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>,
                                 eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)(long)(int)local_58;
            local_38 = iVar12;
            do {
                uVar15 = local_48;
                if (0 < (int)local_80) {
                    do {
                        phVar1 = local_50;
                        pAVar5 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::operator[](pAVar14, (ulong)local_50);
                        puVar6 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar5, uVar15);
                        local_40 =
                            (WorldmapRenderer*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar6);
                        pAVar5 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::operator[](pAVar14, (ulong)phVar1);
                        puVar6 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar5, uVar15);
                        piVar8 =
                            (int*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar6);
                        iVar3 = (*piVar8 * 64 - iVar12) * iVar11;
                        iVar12 = iVar3 + 63;
                        if (-1 < iVar3) {
                            iVar12 = iVar3;
                        }
                        iVar13 = (iVar12 >> 6) + local_6c;
                        pAVar5 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::operator[](pAVar14, (ulong)phVar1);
                        puVar6 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar5, uVar15);
                        lVar9 = std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                            puVar6);
                        iVar12 = local_38;
                        iVar4 = (*(int*)(lVar9 + 4) * 64 + (int)local_60) * iVar11;
                        iVar3 = iVar4 + 63;
                        if (-1 < iVar4) {
                            iVar3 = iVar4;
                        }
                        local_40->RenderToScreen(iVar13, param_8 - (iVar3 >> 6), iVar11, param_9);
                        uVar15 = uVar15 + 1;
                    } while ((long)uVar15 < local_88);
                }
                local_50 =
                    (hash_map<int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>, eastl::hash<int>,
                              eastl::equal_to<int>, eastl::allocator, false>*)((long)local_50 + 1);
            } while ((long)local_50 < local_78);
        }
    }

    // 0x1001f6030, 432 bytes, placed by class name and debug map
    // WorldmapRenderer::GetRenderBounds(int, int, int, int)
    undefined1[16] WorldmapRenderer::GetRenderBounds(int param_1, int param_2, int param_3, int param_4) {
        undefined1 auVar1[16];
        int iVar2;
        int iVar3;
        WorldmapAreaMetadata* this_00;
        ChangeLocationRequest* this_01;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar4;
        int* piVar5;
        int iVar6;
        undefined4 in_register_00000014;
        int iVar7;
        undefined4 in_register_00000034;
        undefined1* this_02;
        int iVar8;
        int local_44;
        int local_40;
        int iStack_3c;
        int local_38;
        int iStack_34;

        eastl::destruct<highlight::NpcUID*>((eastl*)&local_40, (NpcUID*)CONCAT44(in_register_00000034, param_1),
                                            (NpcUID*)CONCAT44(in_register_00000014, param_2));
        iVar2 = field_264;
        iVar3 = field_268;
        iVar8 = param_1 + iVar2 + 63;
        if (-1 < iVar2 + param_1) {
            iVar8 = iVar2 + param_1;
        }
        iVar7 = iVar3 + param_2 + 63;
        if (-1 < iVar3 + param_2) {
            iVar7 = iVar3 + param_2;
        }
        iVar6 = iVar2 + param_3 + 63;
        if (-1 < iVar2 + param_3) {
            iVar6 = iVar2 + param_3;
        }
        iVar2 = iVar3 + param_4 + 63;
        if (-1 < iVar3 + param_4) {
            iVar2 = iVar3 + param_4;
        }
        local_40 = ((iVar6 >> 6) - (iVar8 >> 6)) + 1;
        iStack_3c = ((iVar2 >> 6) - (iVar7 >> 6)) + 1;
        this_00 = (WorldmapAreaMetadata*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
            (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)&field_16);
        local_38 = this_00->GetMinMapX();
        local_38 = (iVar8 >> 6) - local_38;
        this_01 = (ChangeLocationRequest*)std::unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>::operator->(
            (unique_ptr<WorldmapArea, std::default_delete<WorldmapArea>>*)&field_16);
        iStack_34 = this_01->GetSeqDelay();
        iStack_34 = (iVar7 >> 6) - iStack_34;
        if (local_38 < 0) {
            local_40 = local_40 + local_38;
            local_38 = 0;
        }
        iVar2 = local_38;
        this_02 = &field_96;
        iVar3 = this_02->end();
        if (iVar3 - local_40 < iVar2) {
            local_40 = this_02->end();
            local_40 = local_40 - local_38;
        }
        if (iStack_34 < 0) {
            iStack_3c = iStack_3c + iStack_34;
            iStack_34 = 0;
        }
        iVar2 = iStack_34;
        pvVar4 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)Array<
            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
            eastl::allocator>::
        operator[](
            (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                   eastl::allocator>*)this_02,
            0);
        iVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
        if (iVar3 - iStack_3c < iVar2) {
            pvVar4 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)Array<
                Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                eastl::allocator>::
            operator[](
                (Array<
                    Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                    eastl::allocator>*)this_02,
                0);
            iStack_3c = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
            iStack_3c = iStack_3c - iStack_34;
        }
        local_44 = this_02->end();
        piVar5 = std::min<int>(&local_40, &local_44);
        local_40 = *piVar5;
        pvVar4 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)Array<
            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
            eastl::allocator>::
        operator[](
            (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                   eastl::allocator>*)this_02,
            0);
        local_44 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
        piVar5 = std::min<int>(&iStack_3c, &local_44);
        auVar1._4_4_ = *piVar5;
        auVar1._0_4_ = local_40;
        auVar1._8_4_ = local_38;
        auVar1._12_4_ = iStack_34;
        return auVar1;
    }

    // 0x1001f61e0, 112 bytes, placed by class name and debug map
    // WorldmapRenderer::GetFloatStride(int, int)
    void WorldmapRenderer::GetFloatStride(int param_1, int param_2) {
        float fVar1;
        float fVar2;

        fVar2 = (float)param_1 / (float)param_2;
        if ((fVar2 <= 8.0) && (1.0 <= fVar2)) {
            fVar1 = (float)round(fVar2);
            ::abs(fVar1 - fVar2);
        }
    }

    // 0x1001f6340, 704 bytes, placed by class name and debug map
    // WorldmapRenderer::RenderMapElements(int, int, int, int, int, int, int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, int, int, bool, graphics::Pix2D&)
    void WorldmapRenderer::RenderMapElements(int param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8, hash_set* param_9,
                                             hash_set* param_10, int param_11, int param_12, bool param_13,
                                             Pix2D* param_14) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        char cVar5;
        int iVar6;
        int iVar7;
        int* piVar8;
        long lVar9;
        Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>* pAVar10;
        unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>* puVar11;
        RenderedMapSquare* pRVar12;
        long lVar13;
        int iVar14;
        ulong uVar15;
        WorldmapRenderer* this_01;
        ulong uVar16;
        int iVar17;
        float fVar18;
        undefined1 auVar19[16];
        int local_70;

        this_01 = this;
        auVar19 = GetRenderBounds(this, param_1, param_2, param_3, param_4);
        lVar13 = auVar19._8_8_;
        fVar18 = (float)GetFloatStride(this_01, param_7 - param_5, param_3 - param_1);
        iVar3 = auVar19._8_4_;
        iVar4 = auVar19._0_4_;
        this_00 = &field_96;
        local_70 = auVar19._4_4_;
        if (0 < iVar4) {
            iVar17 = (int)(fVar18 * 64.0);
            iVar1 = field_264;
            iVar2 = field_268;
            uVar16 = (ulong)iVar3;
            do {
                uVar15 = lVar13 >> 32;
                if (0 < local_70) {
                    do {
                        if (param_13) {
                            pAVar10 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>*)
                                Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>,
                                      eastl::allocator>::
                                operator[]((Array<Array<std::unique_ptr<RenderedMapSquare,
                                                                        std::default_delete<RenderedMapSquare>>,
                                                        eastl::allocator>,
                                                  eastl::allocator>*)this_00,
                                           uVar16);
                            puVar11 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                                Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                      eastl::allocator>::operator[](pAVar10, uVar15);
                            std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                puVar11);
                            RenderedMapSquare::RederiveMapElements();
                        }
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)this_00,
                                uVar16);
                        puVar11 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar10, uVar15);
                        pRVar12 =
                            (RenderedMapSquare*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar11);
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)this_00,
                                uVar16);
                        puVar11 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar10, uVar15);
                        piVar8 =
                            (int*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar11);
                        iVar6 = (*piVar8 * 64 - (param_1 + iVar1)) * iVar17;
                        iVar14 = iVar6 + 63;
                        if (-1 < iVar6) {
                            iVar14 = iVar6;
                        }
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)this_00,
                                uVar16);
                        puVar11 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar10, uVar15);
                        lVar9 = std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                            puVar11);
                        iVar7 = (*(int*)(lVar9 + 4) * 64 + (64 - (param_2 + iVar2))) * iVar17;
                        iVar6 = iVar7 + 63;
                        if (-1 < iVar7) {
                            iVar6 = iVar7;
                        }
                        pRVar12->RenderMapElements((iVar14 >> 6) + param_5, param_8 - (iVar6 >> 6), iVar17, param_9,
                                                   param_14);
                        uVar15 = uVar15 + 1;
                    } while ((long)uVar15 < (long)((auVar19._0_8_ & 18446744069414584320) + lVar13) >> 32);
                }
                uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(iVar3 + iVar4));
        }
        cVar5 = param_10->empty();
        if (((cVar5 == '\0') && (0 < param_11)) && (0 < iVar4)) {
            uVar16 = (ulong)iVar3;
            do {
                uVar15 = lVar13 >> 32;
                if (0 < local_70) {
                    do {
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::
                            operator[](
                                (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                             eastl::allocator>,
                                       eastl::allocator>*)this_00,
                                uVar16);
                        puVar11 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](pAVar10, uVar15);
                        pRVar12 =
                            (RenderedMapSquare*)
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar11);
                        pRVar12->RenderMapElementHighlights(param_10, param_11, param_12, param_14);
                        uVar15 = uVar15 + 1;
                    } while ((long)uVar15 < (long)((auVar19._0_8_ & 18446744069414584320) + lVar13) >> 32);
                }
                uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(iVar3 + iVar4));
        }
    }

    // 0x1001f6600, 608 bytes, placed by class name and debug map
    // WorldmapRenderer::RenderOverview(int, int, int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, int, int, graphics::Pix2D&)
    void WorldmapRenderer::RenderOverview(int param_1, int param_2, int param_3, int param_4, hash_set* param_5,
                                          int param_6, int param_7, Pix2D* param_8) {
        int iVar1;
        hash_set* this_00;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        undefined8 uVar7;
        int* piVar8;
        shared_ptr<MapElement>* this_01;
        long lVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::allocator, false>* this_02;
        hashtable_iterator_base local_90[16];
        hashtable_iterator_base local_80[16];
        eastl local_70[16];
        hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::allocator, false>* local_60;
        eastl local_58[16];
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        hash_set* local_38;

        local_40 = param_3;
        local_38 = param_5;
        bVar2 = operator==((shared_ptr*)&field_24, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            uVar7 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)&field_24);
            (**(code**)(param_8->field_0 + 208))(param_8, uVar7, param_1, param_2, local_40, param_4);
            if ((0 < param_6) && (param_6 % param_7 < param_7 / 2)) {
                this_02 = (hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>, eastl::hash<int>,
                                    eastl::equal_to<int>, eastl::allocator, false>*)&field_40;
                local_48 = param_1;
                local_3c = param_4;
                cVar3 = this_02->empty();
                if (cVar3 != '\0') {
                    CollateMapElements(this);
                }
                this_00 = local_38;
                local_58 = (eastl[16])
                    eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
                local_80 = (hashtable_iterator_base[16])this_00->end();
                bVar2 = eastl::operator!=(local_58, local_80, local_80._8_8_);
                if (bVar2) {
                    local_38 = (hash_set*)CONCAT44(local_38._4_4_, param_2 + local_3c);
                    local_60 = this_02;
                    do {
                        piVar8 = (int*)local_58->HeapBeginPtr();
                        local_44 = *piVar8;
                        eastl::hashtable<
                            int, eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((int*)local_70);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar2 = eastl::operator==(local_70, local_90, extraout_RDX_00);
                        if (!bVar2) {
                            eastl::hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>,
                                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                            false>::operator[](this_02, &local_44);
                            local_70->begin();
                            local_90->end();
                            bVar2 = eastl::operator!=(local_70, local_90, extraout_RDX_01);
                            iVar1 = local_3c;
                            if (bVar2) {
                                do {
                                    this_01 = (shared_ptr<MapElement>*)
                                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
                                    lVar9 = shared_ptr<MapElement>::operator->(this_01);
                                    iVar4 = ((lVar9 + 8))->GetZ();
                                    iVar5 = (iVar4 - field_264) * local_40;
                                    iVar4 = field_272;
                                    lVar9 = shared_ptr<MapElement>::operator->(this_01);
                                    iVar6 = ((lVar9 + 8))->GetPos();
                                    (**(code**)(param_8->field_0 + 104))(
                                        param_8, iVar5 / iVar4 + local_48,
                                        (int)local_38 - ((iVar6 - field_268) * iVar1) / field_276, 2, 16776960);
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
                                    bVar2 = eastl::operator!=(local_70, local_90, extraout_RDX_02);
                                } while (bVar2);
                            }
                            this_02 = local_60;
                        }
                        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                            (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_58);
                        bVar2 = eastl::operator!=(local_58, local_80, extraout_RDX);
                    } while (bVar2);
                }
            }
        }
    }

    // 0x1001f6860, 656 bytes, placed by class name and debug map
    // WorldmapRenderer::CollateMapElements()
    void WorldmapRenderer::CollateMapElements() {
        long lVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar2;
        Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>* this_00;
        unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>* this_01;
        ulong uVar3;
        MapElement* this_02;
        list<shared_ptr<MapElement>, eastl::allocator>* plVar4;
        bool bVar5;
        char cVar6;
        shared_ptr* this_03;
        long* plVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar8;
        ulong uVar9;
        hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::allocator, false>* this_04;
        Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
              eastl::allocator>* this_05;
        undefined1 local_c8[32];
        hashtable_iterator_base local_a8[16];
        list<console::Line, eastl::allocator> local_98[8];
        eastl local_90[32];
        list<console::Line, eastl::allocator> local_70[8];
        hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::allocator, false>* local_68;
        ulong local_60;
        ulong local_58;
        Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
              eastl::allocator>* local_50;
        shared_ptr local_48;
        int local_34;

        this_04 = (hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>, eastl::hash<int>,
                            eastl::equal_to<int>, eastl::allocator, false>*)&field_40;
        this_04->clear();
        this_05 =
            (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                   eastl::allocator>*)&field_96;
        lVar1 = this_05->end();
        if (lVar1 != 0) {
            uVar9 = 0;
            local_68 = this_04;
            local_50 = this_05;
            do {
                pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)Array<
                    Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
                    eastl::allocator>::operator[](this_05, uVar9);
                lVar1 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar2);
                if (lVar1 != 0) {
                    uVar8 = 0;
                    local_58 = uVar9;
                    do {
                        this_00 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                         eastl::allocator>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::operator[](this_05, uVar9);
                        local_60 = uVar8;
                        this_01 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                            Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                  eastl::allocator>::operator[](this_00, uVar8);
                        std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(this_01);
                        local_c8->GetAllMapElements();
                        eastl::list<console::Line, eastl::allocator>::begin(local_70);
                        eastl::list<console::Line, eastl::allocator>::end(local_98);
                        bVar5 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_98, extraout_RDX);
                        if (bVar5) {
                            do {
                                this_03 = (shared_ptr*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
                                this_02 =
                                    (MapElement*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)this_03);
                                cVar6 = this_02->IsValid();
                                if (cVar6 != '\0') {
                                    plVar7 =
                                        (long*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)this_03);
                                    local_34 = (**(code**)(*plVar7 + 8))(plVar7);
                                    new (&local_48) shared_ptr<dash3d::Decor>(this_03);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>,
                                        eastl::allocator,
                                        eastl::use_first<
                                            eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::find((int*)local_90);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    bVar5 = eastl::operator==(local_90, local_a8, extraout_RDX_01);
                                    if (bVar5) {
                                        new (local_90) eastl::list<shared_ptr<MapElement>, eastl::allocator>();
                                        local_90->push_back(&local_48);
                                        plVar4 = (list<shared_ptr<MapElement>, eastl::allocator>*)
                                            eastl::hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>,
                                                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                                            false>::operator[](this_04, &local_34);
                                        eastl::list<shared_ptr<MapElement>, eastl::allocator>::operator=(
                                            plVar4, (list*)local_90);
                                        local_90->~list();
                                    } else {
                                        plVar4 = (list<shared_ptr<MapElement>, eastl::allocator>*)
                                            eastl::hash_map<int, eastl::list<shared_ptr<MapElement>, eastl::allocator>,
                                                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                                            false>::operator[](this_04, &local_34);
                                        eastl::list<shared_ptr<MapElement>, eastl::allocator>::push_back(plVar4,
                                                                                                         &local_48);
                                    }
                                    local_48.~shared_ptr();
                                    this_04 = local_68;
                                }
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
                                bVar5 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_98,
                                                          extraout_RDX_00);
                            } while (bVar5);
                        }
                        local_c8->~list();
                        this_05 = local_50;
                        uVar9 = local_58;
                        uVar8 = local_60 + 1;
                        pvVar2 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>::operator[](local_50, local_58);
                        uVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar2);
                    } while (uVar8 < uVar3);
                }
                uVar9 = uVar9 + 1;
                uVar8 = this_05->end();
            } while (uVar9 < uVar8);
        }
    }

    // 0x1001f6b20, 672 bytes, placed by class name and debug map
    // WorldmapRenderer::GetMapElementsAtScreenCoord(int, int, int, int, int, int, int, int, int, int)
    list<shared_ptr<MapElement>, BucketAllocatorEASTL>*
    WorldmapRenderer::GetMapElementsAtScreenCoord(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                  int param_6, int param_7, int param_8, int param_9, int param_10) {
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>* pAVar6;
        unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>* puVar7;
        int* piVar8;
        long lVar9;
        shared_ptr* psVar10;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar11;
        hashtable_iterator_base* extraout_RDX_00;
        undefined4 in_register_00000034;
        WorldmapRenderer* this;
        undefined4 in_register_0000003c;
        WorldmapRenderer* this_00;
        int iVar12;
        ulong uVar13;
        float fVar14;
        undefined1 auVar15[16];
        int in_stack_00000028;
        undefined1 local_b0[32];
        list<console::Line, eastl::allocator> local_90[8];
        list<console::Line, eastl::allocator> local_88[8];
        long local_80;
        ulong local_78;
        ulong local_70;
        int local_68;
        int local_64;
        list<shared_ptr<MapElement>, BucketAllocatorEASTL>* local_60;
        Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>, eastl::allocator>,
              eastl::allocator>* local_58;
        long local_50;
        int local_44;
        ulong local_40;
        int local_34;

        local_60 = (list<shared_ptr<MapElement>, BucketAllocatorEASTL>*)CONCAT44(in_register_0000003c, param_1);
        this = (WorldmapRenderer*)CONCAT44(in_register_00000034, param_2);
        local_34 = param_3;
        eastl::list<shared_ptr<MapElement>, BucketAllocatorEASTL>::list();
        iVar12 = local_34;
        if (m_valid != '\0') {
            this_00 = this;
            auVar15 = GetRenderBounds(this, local_34, param_4, param_5, param_6);
            local_50 = auVar15._8_8_;
            fVar14 = (float)GetFloatStride(this_00, param_9, param_5 - iVar12);
            if (0 < auVar15._0_4_) {
                local_78 = auVar15._0_8_ >> 32;
                local_44 = (int)(fVar14 * 64.0);
                local_34 = local_34 + field_264;
                local_68 = param_8 + param_10;
                local_58 = (Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                        eastl::allocator>,
                                  eastl::allocator>*)&field_96;
                local_64 = 64 - (param_4 + field_268);
                local_70 = local_50 >> 32;
                local_80 = (long)((auVar15._0_8_ & 18446744069414584320) + local_50) >> 32;
                local_40 = (ulong)(int)local_50;
                local_50 = (long)(auVar15._0_4_ + (int)local_50);
                do {
                    uVar13 = local_70;
                    if (0 < (int)(uint)local_78) {
                        do {
                            pAVar6 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>*)
                                Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>,
                                      eastl::allocator>::operator[](local_58, local_40);
                            puVar7 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                                Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                      eastl::allocator>::operator[](pAVar6, uVar13);
                            iVar3 =
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar7);
                            pAVar6 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>*)
                                Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>,
                                      eastl::allocator>::operator[](local_58, local_40);
                            puVar7 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                                Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                      eastl::allocator>::operator[](pAVar6, uVar13);
                            piVar8 = (int*)std::unique_ptr<RenderedMapSquare,
                                                           std::default_delete<RenderedMapSquare>>::operator->(puVar7);
                            iVar4 = (*piVar8 * 64 - local_34) * local_44;
                            iVar12 = iVar4 + 63;
                            if (-1 < iVar4) {
                                iVar12 = iVar4;
                            }
                            pAVar6 = (Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>*)
                                Array<Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                            eastl::allocator>,
                                      eastl::allocator>::operator[](local_58, local_40);
                            puVar7 = (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>*)
                                Array<std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>,
                                      eastl::allocator>::operator[](pAVar6, uVar13);
                            lVar9 =
                                std::unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>>::operator->(
                                    puVar7);
                            iVar5 = (*(int*)(lVar9 + 4) * 64 + local_64) * local_44;
                            iVar4 = iVar5 + 63;
                            if (-1 < iVar5) {
                                iVar4 = iVar5;
                            }
                            local_b0->GetMapElementsAtScreenCoord(iVar3, (iVar12 >> 6) + param_7,
                                                                  local_68 - (iVar4 >> 6), local_44, in_stack_00000028);
                            cVar1 = local_b0->empty();
                            if (cVar1 == '\0') {
                                eastl::list<console::Line, eastl::allocator>::begin(local_90);
                                eastl::list<console::Line, eastl::allocator>::end(local_88);
                                phVar11 = extraout_RDX;
                                while (bVar2 = eastl::operator!=((eastl*)local_90, (hashtable_iterator_base*)local_88,
                                                                 phVar11),
                                       bVar2) {
                                    psVar10 = (shared_ptr*)
                                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_90);
                                    eastl::list<shared_ptr<MapElement>, BucketAllocatorEASTL>::push_back(local_60,
                                                                                                         psVar10);
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_90);
                                    phVar11 = extraout_RDX_00;
                                }
                            }
                            local_b0->~list();
                            uVar13 = uVar13 + 1;
                        } while ((long)uVar13 < local_80);
                    }
                    local_40 = local_40 + 1;
                } while ((long)local_40 < local_50);
            }
        }
        return local_60;
    }

    // 0x1001f6df0, 32 bytes, placed by class name and debug map
    // WorldmapRenderer::GetMapElements()
    undefined1* WorldmapRenderer::GetMapElements() {
        CollateMapElements(this);
        return &field_40;
    }

} // namespace jag::oldscape::rs2lib::worldmap

// 0x1001f6250, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

// 0x1001f6e70, 16 bytes, placed by debug map only (low confidence)
// round(float)
void round(float param_1) {
    _roundf();
}

// 0x1001f6e80, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
