// libs/oldscape/rs2lib/worldmap/WorldmapRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "WorldmapRenderer.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100fc91e8
    int64_t WorldmapRenderer::m_js5Time;

    // 0x100fc91f0
    int64_t WorldmapRenderer::m_wmaTime;

    // 0x100fc91f8
    int64_t WorldmapRenderer::m_prepSquareTime;

    // 0x100fc9200
    uint8_t WorldmapRenderer::m_comptexTime[16];

    // 0x1000096a0: WorldmapRenderer::IsValid() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x1001f4c10
    WorldmapRenderer::WorldmapRenderer(shared_ptr<Array<graphics::Pix8>>& pix8s,
                                       eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>>& arg2,
                                       jagex3::Js5* js51, jagex3::Js5* js52)
        : m_valid(0), field_9(0), field_0(0), field_4(0.0) {

        field_16.unique_ptr<true, void>();
        new (&field_24) shared_ptr();
        new (&field_40) eastl::hash_map<int, eastl::list<shared_ptr<MapElement>>>(local_38);
        new (&field_96) Array<Array<std::unique_ptr<RenderedMapSquare>>>();
        new (&field_120) eastl::hash_map<int, std::unique_ptr<OverlayShapes>>(local_38);
        new (&field_176) shared_ptr(pix8s);
        field_192 = js51;
        field_200 = js52;
        new (&field_208) eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>>(arg2);
    }

    // 0x1001f4dc0
    void WorldmapRenderer::ExtractData(jagex3::Js5& js5, eastl::string str, bool arg3) {
        uint8_t* puVar1;
        bool cVar2;
        bool bVar3;
        int iVar4;
        uint32_t uVar5;
        int iVar6;
        unsigned int uVar7;
        char* pcVar8;
        unsigned long long uVar9;
        WorldmapArea* this_01;
        PacketJ<Array<unsigned char> _>* pPVar10;
        PacketJ<Array<unsigned char> _>* packetJ2;
        WorldmapAreaMetadata* pWVar11;
        ChangeLocationRequest* pCVar12;
        NXTPixScreen* pNVar13;
        unsigned long long uVar14;
        Array<std::unique_ptr<RenderedMapSquare>>* pAVar15;
        long lVar16;
        shared_ptr<MapSquareData>* psVar17;
        TextRun* pTVar18;
        unique_ptr<RenderedMapSquare>* puVar19;
        RenderedMapSquare* pRVar20;
        unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare> _>* renderedMapSquare;
        unsigned long uVar21;
        long lVar22;
        void* arg2;
        WorldmapRenderer* pWVar23;
        unique_ptr<WorldmapArea>* puVar24;
        long lVar25;
        void* arg1;
        ErrorCapture local_428;
        shared_ptr<WorldmapAreaMetadata> local_d8;
        unsigned long long local_c8;
        shared_ptr<WorldmapAreaMetadata> local_c0;
        hash_map<int, shared_ptr<jstring::PixfontGeneric>>* local_b0;
        unsigned long local_a8;
        eastl::string* local_98;
        int local_8c;
        unsigned long local_80;
        ReturnValue local_78;
        ReturnValue local_68;
        void* local_60;
        unsigned long local_58;
        ReturnValue local_50;
        int local_40;
        int local_3c;
        unique_ptr<WorldmapArea>* local_38;

        if (field_9 == '\0') {
            m_valid = 0;
            field_9 = 1;
            local_38 = (unique_ptr<WorldmapArea>*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            iVar4 = js5.GetGroupId("details");
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = js5.GetFileId(iVar4, pcVar8);
            local_60 = (void*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar5);
            local_d8 = shared_ptr();
            local_98 = str;
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            js5.GetFile(local_d8, "details", pcVar8, nullptr);
            local_c0 = shared_ptr();
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            js5.GetFile(local_c0, "compositemap", pcVar8, nullptr);
            pWVar23 = this;
            uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            m_js5Time = uVar9 - (long)local_38;
            uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            local_428 = std::make_unique<WorldmapArea>();
            puVar1 = &pWVar23->field_16;
            *puVar1 = local_428;
            local_428 = ErrorCapture(true);
            local_38 = (unique_ptr<WorldmapArea>*)puVar1;
            this_01 = (WorldmapArea*)(*puVar1).operator->();
            pPVar10 = (PacketJ<Array<unsigned char> _>*)*local_d8;
            packetJ2 = (PacketJ<Array<unsigned char> _>*)*local_c0;
            this_01->Unpack(*pPVar10, *packetJ2, (int)local_60, arg3, local_428);
            cVar2 = local_428.IsRaised();
            if (!cVar2) {
                pWVar11 = (WorldmapAreaMetadata*)(*local_38).operator->();
                uVar5 = pWVar11->GetOriginX();
                *(uint32_t*)&pWVar23->field_280 = uVar5;
                pWVar11 = (WorldmapAreaMetadata*)(*local_38).operator->();
                uVar5 = pWVar11->GetOriginY();
                *(uint32_t*)&pWVar23->field_284 = uVar5;
                pWVar11 = (WorldmapAreaMetadata*)(*local_38).operator->();
                uVar5 = pWVar11->GetOriginZ();
                puVar24 = local_38;
                *(uint32_t*)&pWVar23->field_288 = uVar5;
                pWVar11 = (WorldmapAreaMetadata*)(*local_38).operator->();
                iVar4 = pWVar11->GetMinMapX();
                pWVar23->field_264 = iVar4 << 6;
                pCVar12 = (ChangeLocationRequest*)(*puVar24).operator->();
                iVar4 = pCVar12->GetSeqDelay();
                pWVar23->field_268 = iVar4 << 6;
                pNVar13 = (NXTPixScreen*)(*puVar24).operator->();
                iVar4 = pNVar13->GetUIHeight();
                pWVar11 = (WorldmapAreaMetadata*)(*puVar24).operator->();
                iVar6 = pWVar11->GetMinMapX();
                pWVar23->field_272 = (iVar4 - iVar6) * 64 + 64;
                pWVar11 = (WorldmapAreaMetadata*)(*puVar24).operator->();
                iVar4 = pWVar11->GetMaxMapZ();
                pCVar12 = (ChangeLocationRequest*)(*puVar24).operator->();
                iVar6 = pCVar12->GetSeqDelay();
                pWVar23->field_276 = (iVar4 - iVar6) * 64 + 64;
                pNVar13 = (NXTPixScreen*)(*puVar24).operator->();
                local_58 = pNVar13->GetUIHeight();
                pWVar11 = (WorldmapAreaMetadata*)(*puVar24).operator->();
                iVar4 = pWVar11->GetMinMapX();
                pWVar11 = (WorldmapAreaMetadata*)(*puVar24).operator->();
                local_80 = pWVar11->GetMaxMapZ();
                pCVar12 = (ChangeLocationRequest*)(*puVar24).operator->();
                iVar6 = pCVar12->GetSeqDelay();
                uVar14 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                m_wmaTime = uVar14 - uVar9;
                local_c8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                RenderedMapSquare::ResetCaches();
                puVar1 = &pWVar23->field_96;
                puVar1->clear();
                uVar7 = (int)local_58 - iVar4;
                local_58 = (unsigned long)uVar7;
                uVar7 = uVar7 + 1;
                local_a8 = (unsigned long)uVar7;
                puVar1->set_max_size((long)(int)uVar7, 1);
                puVar24 = local_38;
                uVar7 = (int)local_80 - iVar6;
                local_80 = (unsigned long)uVar7;
                uVar7 = uVar7 + 1;
                local_60 = (void*)(unsigned long)uVar7;
                if (-1 < (int)local_58) {
                    uVar21 = 0;
                    do {
                        pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[uVar21];
                        pAVar15->clear();
                        pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[uVar21];
                        pAVar15->set_max_size((long)(int)uVar7, 1);
                        uVar21 = uVar21 + 1;
                    } while (local_a8 != uVar21);
                }
                new (&local_68) jag::math::Vector2T();
                lVar16 = (*puVar24).operator->();
                local_50 = ((lVar16 + 144))->begin();
                local_68 = local_50[0];
                local_b0 = (hash_map<int, shared_ptr<jstring::PixfontGeneric>>*)&pWVar23->field_208;
                lVar16 = (*puVar24).operator->();
                local_50 = ((lVar16 + 144))->end();
                cVar2 = local_68 != local_50;
                if (cVar2) {
                    do {
                        psVar17 = (shared_ptr<MapSquareData>*)*local_68;
                        local_78[0]._0_4_ = ((SoundInstance*)(*psVar17).operator->())->GetSoundShape();
                        psVar17 = (shared_ptr<MapSquareData>*)*local_68;
                        local_3c = ((PlayerGroup*)(*psVar17).operator->())->GetUpdateNumber();
                        lVar25 = (long)(int)local_78[0]._0_4_;
                        pWVar11 = (WorldmapAreaMetadata*)(*puVar24).operator->();
                        iVar4 = pWVar11->GetMinMapX();
                        lVar22 = (long)local_3c;
                        pCVar12 = (ChangeLocationRequest*)(*puVar24).operator->();
                        local_8c = pCVar12->GetSeqDelay();
                        pTVar18 = (TextRun*)(*puVar24).operator->();
                        local_40 = pTVar18->GetWrapMode();
                        local_50 = std::make_unique<RenderedMapSquare, int&, int&, int,
                                                    eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>> const&>(
                            local_78, local_3c, local_40, *local_b0);
                        pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[lVar25 - iVar4];
                        lVar16 = (long)local_8c;
                        puVar19 = (unique_ptr<RenderedMapSquare>*)(*pAVar15)[lVar22 - lVar16];
                        *puVar19 = local_50;
                        pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[lVar25 - iVar4];
                        puVar24 = local_38;
                        pWVar23 = this;
                        puVar19 = (unique_ptr<RenderedMapSquare>*)(*pAVar15)[lVar22 - lVar16];
                        pRVar20 = (RenderedMapSquare*)(*puVar19).operator->();
                        psVar17 = (shared_ptr<MapSquareData>*)*local_68;
                        lVar16 = (*puVar24).operator->();
                        pRVar20->ExtractSquareData(*psVar17, *((lVar16 + 208)));
                        local_50++;
                        lVar16 = (*puVar24).operator->();
                        local_50 = ((lVar16 + 144))->end();
                        cVar2 = local_68 != local_50;
                    } while (cVar2);
                }
                if (-1 < (int)local_58) {
                    uVar21 = 0;
                    do {
                        if (-1 < (int)local_80) {
                            arg1 = nullptr;
                            do {
                                pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[uVar21];
                                arg2 = arg1;
                                renderedMapSquare =
                                    (unique_ptr<RenderedMapSquare, std::default_delete<RenderedMapSquare>
                                                                       _>*)(*pAVar15)[(unsigned long)arg1];
                                bVar3 = renderedMapSquare == arg2;
                                puVar24 = local_38;
                                if (bVar3) {
                                    pWVar11 = (WorldmapAreaMetadata*)(*local_38).operator->();
                                    local_78[0]._0_4_ = pWVar11->GetMinMapX();
                                    local_78[0]._0_4_ = local_78[0]._0_4_ + (int)uVar21;
                                    pCVar12 = (ChangeLocationRequest*)(*puVar24).operator->();
                                    local_3c = pCVar12->GetSeqDelay();
                                    local_3c = local_3c + (int)arg1;
                                    pTVar18 = (TextRun*)(*puVar24).operator->();
                                    local_40 = pTVar18->GetWrapMode();
                                    local_50 = std::make_unique<
                                        RenderedMapSquare, int, int, int,
                                        eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>> const&>(
                                        local_78, local_3c, local_40, *local_b0);
                                    pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[uVar21];
                                    puVar19 = (unique_ptr<RenderedMapSquare>*)(*pAVar15)[(unsigned long)arg1];
                                    *puVar19 = local_50;
                                    pAVar15 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*puVar1)[uVar21];
                                    puVar19 = (unique_ptr<RenderedMapSquare>*)(*pAVar15)[(unsigned long)arg1];
                                    pRVar20 = (RenderedMapSquare*)(*puVar19).operator->();
                                    lVar16 = (*local_38).operator->();
                                    pWVar23 = this;
                                    pRVar20->ExtractZoneData(*((lVar16 + 176)), *((lVar16 + 208)));
                                }
                                arg1 = (void*)((long)arg1 + 1);
                            } while (local_60 != arg1);
                        }
                        uVar21 = uVar21 + 1;
                    } while (uVar21 != local_a8);
                }
                uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                m_prepSquareTime = uVar9 - local_c8;
                uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar2 = js5.GetDoesFileExist("compositetexture", pcVar8);
                if (cVar2) {
                    local_50 = shared_ptr();
                    pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    js5.GetFile(local_50, "compositetexture", pcVar8, nullptr);
                    pPVar10 = (PacketJ<Array<unsigned char> _>*)*local_50;
                    local_78 = javapal::Pix32Tools::createPix32FromPNGData(*pPVar10);
                    pWVar23->field_24 = local_78;
                }
                uVar14 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                m_comptexTime = uVar14 - uVar9;
                js5.DiscardAllGroups();
                js5.DiscardAllFiles();
                pWVar23->m_valid = 1;
            }
        }
    }

    // 0x1001f5cc0
    void WorldmapRenderer::Reset() {
        field_40.clear();
    }

    // 0x1001f5cd0
    void WorldmapRenderer::RenderMap(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     graphics::Pix2D& pix2D) {
        hash_map<int, std::unique_ptr<OverlayShapes>>* arg1_00;
        int iVar2;
        int iVar3;
        unique_ptr<OverlayShapes>* this_02;
        Array<std::unique_ptr<RenderedMapSquare>>* pAVar4;
        unique_ptr<RenderedMapSquare>* puVar5;
        RenderedMapSquare* this_03;
        unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> _>* overlayShapes;
        int* piVar6;
        long lVar7;
        unsigned long arg1_01;
        int arg3_00;
        int iVar8;
        int arg1_02;
        unsigned long uVar10;
        uint8_t auVar12[16];
        unsigned long local_60;
        hash_map<int, std::unique_ptr<OverlayShapes>>* local_50;

        auVar12 = GetRenderBounds(arg1, arg2, arg3, arg4);
        long local_58 = auVar12._8_8_;
        unsigned long local_48 = auVar12._0_8_;
        int local_38 = arg1;
        float local_64 = (float)GetFloatStride(arg7 - arg5, arg3 - arg1);
        field_4 = local_64;
        float fVar11 = (float)ceil(local_64);
        int local_34 = (int)fVar11;
        field_0 = local_34;
        uint8_t* this_00 = &field_120;
        auto local_a0 = this_00->find(local_34);
        auto local_b0 = this_00->end();
        if (local_a0 == local_b0 != '\0') {
            local_a0 = std::make_unique<OverlayShapes, int&>(local_34);
            ((OverlayShapes*)local_a0.operator->())->CalcOverlayShapes();
            this_02 = (unique_ptr<OverlayShapes>*)(*this_00)[local_34];
            *this_02 = local_a0;
        }
        unsigned long local_80 = local_48 >> 32;
        Array<Array<std::unique_ptr<RenderedMapSquare>>>* pAVar9 =
            (Array<Array<std::unique_ptr<RenderedMapSquare>>>*)&field_96;
        long local_88 = (long)((int)((unsigned long)local_58 >> 32) + (int)(local_48 >> 32));
        long local_78 = (long)((int)local_58 + (int)local_48);
        Array<Array<std::unique_ptr<RenderedMapSquare>>>* local_90 = pAVar9;
        WorldmapRenderer* local_40 = this;
        if (0 < (int)local_48) {
            local_60 = local_58 >> 32;
            uVar10 = (unsigned long)(int)local_58;
            local_50 = (hash_map<int, std::unique_ptr<OverlayShapes>>*)this_00;
            do {
                arg1_01 = local_60;
                if (0 < (int)local_80) {
                    do {
                        pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*pAVar9)[uVar10];
                        puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[arg1_01];
                        this_03 = (RenderedMapSquare*)(*puVar5).operator->();
                        iVar8 = local_34;
                        overlayShapes =
                            (unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> _>*)(*local_50)[local_34];
                        pAVar9 = local_90;
                        this_03->PrerenderSquare(iVar8, *overlayShapes, field_176, *local_40->field_192,
                                                 *local_40->field_200);
                        arg1_01 = arg1_01 + 1;
                    } while ((long)arg1_01 < local_88);
                }
                uVar10 = uVar10 + 1;
            } while ((long)uVar10 < local_78);
        }
        pAVar9 = local_90;
        if (0 < (int)local_48) {
            iVar8 = local_38 + local_40->field_264;
            local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)(64 - (arg2 + local_40->field_268)));
            arg3_00 = (int)(local_64 * 64.0);
            local_48 = local_58 >> 32;
            local_50 = (hash_map<int, std::unique_ptr<OverlayShapes>>*)(long)(int)local_58;
            local_38 = iVar8;
            do {
                uVar10 = local_48;
                if (0 < (int)local_80) {
                    do {
                        arg1_00 = local_50;
                        pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*pAVar9)[(unsigned long)local_50];
                        puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[uVar10];
                        local_40 = (WorldmapRenderer*)(*puVar5).operator->();
                        pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*pAVar9)[(unsigned long)arg1_00];
                        puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[uVar10];
                        piVar6 = (int*)(*puVar5).operator->();
                        iVar2 = (*piVar6 * 64 - iVar8) * arg3_00;
                        iVar8 = iVar2 + 63;
                        if (-1 < iVar2) {
                            iVar8 = iVar2;
                        }
                        arg1_02 = (iVar8 >> 6) + arg5;
                        pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*pAVar9)[(unsigned long)arg1_00];
                        puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[uVar10];
                        lVar7 = (*puVar5).operator->();
                        iVar8 = local_38;
                        iVar3 = (*(int*)(lVar7 + 4) * 64 + (int)local_60) * arg3_00;
                        iVar2 = iVar3 + 63;
                        if (-1 < iVar3) {
                            iVar2 = iVar3;
                        }
                        local_40->RenderToScreen(arg1_02, arg8 - (iVar2 >> 6), arg3_00, pix2D);
                        uVar10 = uVar10 + 1;
                    } while ((long)uVar10 < local_88);
                }
                local_50 = (hash_map<int, std::unique_ptr<OverlayShapes>>*)((long)local_50 + 1);
            } while ((long)local_50 < local_78);
        }
    }

    // 0x1001f6030
    uint8_t[16] WorldmapRenderer::GetRenderBounds(int arg1, int arg2, int arg3, int arg4) {
        uint8_t auVar1[16];
        int local_40;

        local_40.destruct<highlight::NpcUID*>();
        int iVar2 = field_264;
        int iVar3 = field_268;
        int iVar8 = arg1 + iVar2 + 63;
        if (-1 < iVar2 + arg1) {
            iVar8 = iVar2 + arg1;
        }
        int iVar7 = iVar3 + arg2 + 63;
        if (-1 < iVar3 + arg2) {
            iVar7 = iVar3 + arg2;
        }
        int iVar6 = iVar2 + arg3 + 63;
        if (-1 < iVar2 + arg3) {
            iVar6 = iVar2 + arg3;
        }
        iVar2 = iVar3 + arg4 + 63;
        if (-1 < iVar3 + arg4) {
            iVar2 = iVar3 + arg4;
        }
        local_40 = ((iVar6 >> 6) - (iVar8 >> 6)) + 1;
        int iStack_3c = ((iVar2 >> 6) - (iVar7 >> 6)) + 1;
        int local_38 = ((WorldmapAreaMetadata*)field_16.operator->())->GetMinMapX();
        local_38 = (iVar8 >> 6) - local_38;
        int iStack_34 = ((ChangeLocationRequest*)field_16.operator->())->GetSeqDelay();
        iStack_34 = (iVar7 >> 6) - iStack_34;
        if (local_38 < 0) {
            local_40 = local_40 + local_38;
            local_38 = 0;
        }
        iVar2 = local_38;
        uint8_t* this_02 = &field_96;
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
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar4 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[0];
        iVar3 = pvVar4->end();
        if (iVar3 - iStack_3c < iVar2) {
            pvVar4 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[0];
            iStack_3c = pvVar4->end();
            iStack_3c = iStack_3c - iStack_34;
        }
        int local_44 = this_02->end();
        auto piVar5 = std::min<int>(local_40, local_44);
        local_40 = *piVar5;
        pvVar4 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[0];
        local_44 = pvVar4->end();
        piVar5 = std::min<int>(iStack_3c, local_44);
        auVar1._4_4_ = *piVar5;
        auVar1._0_4_ = local_40;
        auVar1._8_4_ = local_38;
        auVar1._12_4_ = iStack_34;
        return auVar1;
    }

    // 0x1001f61e0
    void WorldmapRenderer::GetFloatStride(int arg1, int arg2) {
        float fVar1;

        float arg1_00 = (float)arg1 / (float)arg2;
        if ((arg1_00 <= 8.0) && (1.0 <= arg1_00)) {
            fVar1 = (float)round(arg1_00);
            ::abs(fVar1 - arg1_00);
        }
    }

    // 0x1001f6340
    void WorldmapRenderer::RenderMapElements(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                             int arg8, eastl::hash_set<int>& hash_set1, eastl::hash_set<int>& hash_set2,
                                             int arg11, int arg12, bool arg13, graphics::Pix2D& pix2D) {
        int iVar1;
        int iVar2;
        int iVar6;
        int iVar7;
        int* piVar8;
        long lVar9;
        Array<std::unique_ptr<RenderedMapSquare>>* pAVar10;
        unique_ptr<RenderedMapSquare>* puVar11;
        RenderedMapSquare* pRVar12;
        int iVar14;
        unsigned long uVar15;
        unsigned long uVar16;
        int arg3_00;
        uint8_t auVar18[16];

        auVar18 = GetRenderBounds(arg1, arg2, arg3, arg4);
        long lVar13 = auVar18._8_8_;
        float fVar17 = (float)GetFloatStride(arg7 - arg5, arg3 - arg1);
        int iVar3 = auVar18._8_4_;
        int iVar4 = auVar18._0_4_;
        uint8_t* this_00 = &field_96;
        int local_70 = auVar18._4_4_;
        if (0 < iVar4) {
            arg3_00 = (int)(fVar17 * 64.0);
            iVar1 = field_264;
            iVar2 = field_268;
            uVar16 = (unsigned long)iVar3;
            do {
                uVar15 = lVar13 >> 32;
                if (0 < local_70) {
                    do {
                        if (arg13) {
                            pAVar10 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*this_00)[uVar16];
                            puVar11 = (unique_ptr<RenderedMapSquare>*)(*pAVar10)[uVar15];
                            pRVar12 = (RenderedMapSquare*)(*puVar11).operator->();
                            pRVar12->RederiveMapElements();
                        }
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*this_00)[uVar16];
                        puVar11 = (unique_ptr<RenderedMapSquare>*)(*pAVar10)[uVar15];
                        pRVar12 = (RenderedMapSquare*)(*puVar11).operator->();
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*this_00)[uVar16];
                        puVar11 = (unique_ptr<RenderedMapSquare>*)(*pAVar10)[uVar15];
                        piVar8 = (int*)(*puVar11).operator->();
                        iVar6 = (*piVar8 * 64 - (arg1 + iVar1)) * arg3_00;
                        iVar14 = iVar6 + 63;
                        if (-1 < iVar6) {
                            iVar14 = iVar6;
                        }
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*this_00)[uVar16];
                        puVar11 = (unique_ptr<RenderedMapSquare>*)(*pAVar10)[uVar15];
                        lVar9 = (*puVar11).operator->();
                        iVar7 = (*(int*)(lVar9 + 4) * 64 + (64 - (arg2 + iVar2))) * arg3_00;
                        iVar6 = iVar7 + 63;
                        if (-1 < iVar7) {
                            iVar6 = iVar7;
                        }
                        pRVar12->RenderMapElements((iVar14 >> 6) + arg5, arg8 - (iVar6 >> 6), arg3_00, hash_set1,
                                                   pix2D);
                        uVar15 = uVar15 + 1;
                    } while ((long)uVar15 < (long)((auVar18._0_8_ & 18446744069414584320) + lVar13) >> 32);
                }
                uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(iVar3 + iVar4));
        }
        if (((hash_set2.empty() == '\0') && (0 < arg11)) && (0 < iVar4)) {
            uVar16 = (unsigned long)iVar3;
            do {
                uVar15 = lVar13 >> 32;
                if (0 < local_70) {
                    do {
                        pAVar10 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*this_00)[uVar16];
                        puVar11 = (unique_ptr<RenderedMapSquare>*)(*pAVar10)[uVar15];
                        pRVar12 = (RenderedMapSquare*)(*puVar11).operator->();
                        pRVar12->RenderMapElementHighlights(hash_set2, arg11, arg12, pix2D);
                        uVar15 = uVar15 + 1;
                    } while ((long)uVar15 < (long)((auVar18._0_8_ & 18446744069414584320) + lVar13) >> 32);
                }
                uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(iVar3 + iVar4));
        }
    }

    // 0x1001f6600
    void WorldmapRenderer::RenderOverview(int arg1, int arg2, int arg3, int arg4, eastl::hash_set<int>& hash_set,
                                          int arg6, int arg7, graphics::Pix2D& pix2D) {
        hash_set<int>* this_00;
        bool cVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint64_t uVar7;
        int* piVar8;
        list<console::Line>* this_01;
        shared_ptr<MapElement>* this_02;
        long lVar9;
        hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_03;
        ReturnValue local_90;
        obj_iterator local_80;
        ReturnValue local_70;
        hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_60;
        eastl local_58;
        int local_44;

        hash_set<int>* local_38 = hash_set;
        if (!field_24 == nullptr) {
            uVar7 = *field_24;
            (**(void (**)(...))(pix2D.field_0 + 208))(pix2D, uVar7, arg1, arg2, arg3, arg4);
            if ((0 < arg6) && (arg6 % arg7 < arg7 / 2)) {
                this_03 =
                    (hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                               eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>,
                               eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_40;
                cVar3 = this_03->empty();
                if (cVar3) {
                    CollateMapElements();
                }
                this_00 = local_38;
                &local_58 = (eastl[16])local_38->begin();
                &local_80 = (obj_iterator[16])this_00->end();
                cVar3 = local_58 != local_80;
                if (cVar3) {
                    local_38 = (hash_set<int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(arg2 + arg4));
                    local_60 = this_03;
                    do {
                        piVar8 = (int*)local_58.HeapBeginPtr();
                        local_44 = *piVar8;
                        local_70 = this_03->find(local_44);
                        local_90 = this_03->end();
                        cVar3 = local_70 == local_90;
                        if (!cVar3) {
                            this_01 = (list<console::Line>*)(*this_03)[local_44];
                            local_70 = this_01->begin();
                            local_90 = this_01->end();
                            cVar3 = local_70 != local_90;
                            this_03 = local_60;
                            while (local_60 = this_03, cVar3) {
                                this_02 = (shared_ptr<MapElement>*)*local_70;
                                lVar9 = (*this_02).operator->();
                                iVar4 = ((lVar9 + 8))->GetZ();
                                iVar5 = (iVar4 - field_264) * arg3;
                                iVar4 = field_272;
                                lVar9 = (*this_02).operator->();
                                iVar6 = ((lVar9 + 8))->GetPos();
                                (**(void (**)(...))(pix2D.field_0 + 104))(
                                    pix2D, iVar5 / iVar4 + arg1,
                                    (int)local_38 - ((iVar6 - field_268) * arg4) / field_276, 2, 16776960);
                                ++local_70;
                                cVar3 = local_70 != local_90;
                                this_03 = local_60;
                            }
                        }
                        ++local_58;
                        cVar3 = local_58 != local_80;
                    } while (cVar3);
                }
            }
        }
    }

    // 0x1001f6860
    void WorldmapRenderer::CollateMapElements() {
        bool cVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar3;
        unsigned long uVar4;
        Array<std::unique_ptr<RenderedMapSquare>>* this_00;
        unique_ptr<RenderedMapSquare>* this_01;
        shared_ptr<MapElement>* this_03;
        long* plVar5;
        list<shared_ptr<MapElement>>* plVar6;
        unsigned long uVar7;
        unsigned long arg1;
        ReturnValue local_c8;
        ReturnValue local_a8;
        ReturnValue local_98;
        ReturnValue local_90;
        ReturnValue local_70;
        hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_68;
        unsigned long local_60;
        unsigned long local_58;
        Array<Array<std::unique_ptr<RenderedMapSquare>>>* local_50;
        shared_ptr<RSevenDebugPresetProvider> local_48;
        int local_34;

        hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_05 =
            (hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                       eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)&field_40;
        this_05->clear();
        Array<Array<std::unique_ptr<RenderedMapSquare>>>* this_06 =
            (Array<Array<std::unique_ptr<RenderedMapSquare>>>*)&field_96;
        long lVar2 = this_06->end();
        if (lVar2 != 0) {
            arg1 = 0;
            local_68 = this_05;
            local_50 = this_06;
            do {
                pvVar3 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_06)[arg1];
                lVar2 = pvVar3->end();
                if (lVar2 != 0) {
                    uVar7 = 0;
                    local_58 = arg1;
                    do {
                        this_00 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*this_06)[arg1];
                        local_60 = uVar7;
                        this_01 = (unique_ptr<RenderedMapSquare>*)(*this_00)[uVar7];
                        local_c8 = ((RenderedMapSquare*)(*this_01).operator->())->GetAllMapElements();
                        local_70 = local_c8.begin();
                        local_98 = local_c8.end();
                        cVar1 = local_70 != local_98;
                        while (cVar1) {
                            this_03 = (shared_ptr<MapElement>*)*local_70;
                            cVar1 = ((MapElement*)(*this_03).operator->())->IsValid();
                            if (cVar1) {
                                plVar5 = (long*)(*this_03).operator->();
                                local_34 = (**(void (**)(...))(*plVar5 + 8))(plVar5);
                                local_48 = shared_ptr(this_03);
                                local_90 = this_05->find(local_34);
                                local_a8 = this_05->end();
                                cVar1 = local_90 == local_a8;
                                if (!cVar1) {
                                    plVar6 = (list<shared_ptr<MapElement>>*)(*this_05)[local_34];
                                    plVar6->push_back(local_48);
                                } else {
                                    local_90 = eastl::list<shared_ptr<MapElement>>();
                                    local_90.push_back(local_48);
                                    plVar6 = (list<shared_ptr<MapElement>>*)(*this_05)[local_34];
                                    *plVar6 = local_90;
                                }
                                this_05 = local_68;
                            }
                            ++local_70;
                            cVar1 = local_70 != local_98;
                        }
                        local_c8.~list();
                        this_06 = local_50;
                        arg1 = local_58;
                        uVar7 = local_60 + 1;
                        pvVar3 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*local_50)[local_58];
                        uVar4 = pvVar3->end();
                    } while (uVar7 < uVar4);
                }
                arg1 = arg1 + 1;
                uVar7 = this_06->end();
            } while (arg1 < uVar7);
        }
    }

    // 0x1001f6b20
    WorldmapRenderer* WorldmapRenderer::GetMapElementsAtScreenCoord(int arg1, int arg2, int arg3, int arg4, int arg5,
                                                                    int arg6, int arg7, int arg8, int arg9, int arg10) {
        bool cVar1;
        int arg1_00;
        int iVar2;
        int iVar3;
        Array<std::unique_ptr<RenderedMapSquare>>* pAVar4;
        unique_ptr<RenderedMapSquare>* puVar5;
        int* piVar6;
        long lVar7;
        shared_ptr<MapElement>* mapElement;
        uint32_t in_register_00000034;
        WorldmapRenderer* this_01;
        unsigned long arg1_01;
        float fVar9;
        uint8_t auVar10[16];
        uint8_t local_b0[32];
        ReturnValue local_90;
        ReturnValue local_88;
        long local_80;
        unsigned long local_78;
        unsigned long local_70;
        int local_68;
        int local_64;
        Array<Array<std::unique_ptr<RenderedMapSquare>>>* local_58;
        long local_50;
        int local_44;
        unsigned long local_40;

        WorldmapRenderer* this_00 = (WorldmapRenderer*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        int local_34 = arg2;
        new (this) eastl::list<shared_ptr<MapElement>, BucketAllocatorEASTL>();
        int iVar8 = local_34;
        if (this_00->m_valid != '\0') {
            this_01 = this_00;
            auVar10 = GetRenderBounds(this_00, local_34, arg3, arg4, arg5);
            local_50 = auVar10._8_8_;
            fVar9 = (float)GetFloatStride(this_01, arg8, arg4 - iVar8);
            if (0 < auVar10._0_4_) {
                local_78 = auVar10._0_8_ >> 32;
                local_44 = (int)(fVar9 * 64.0);
                local_34 = local_34 + this_00->field_264;
                local_68 = arg7 + arg9;
                local_58 = (Array<Array<std::unique_ptr<RenderedMapSquare>>>*)&this_00->field_96;
                local_64 = 64 - (arg3 + this_00->field_268);
                local_70 = local_50 >> 32;
                local_80 = (long)((auVar10._0_8_ & 18446744069414584320) + local_50) >> 32;
                local_40 = (unsigned long)(int)local_50;
                local_50 = (long)(auVar10._0_4_ + (int)local_50);
                do {
                    arg1_01 = local_70;
                    if (0 < (int)(unsigned int)local_78) {
                        do {
                            pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*local_58)[local_40];
                            puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[arg1_01];
                            arg1_00 = (*puVar5).operator->();
                            pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*local_58)[local_40];
                            puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[arg1_01];
                            piVar6 = (int*)(*puVar5).operator->();
                            iVar2 = (*piVar6 * 64 - local_34) * local_44;
                            iVar8 = iVar2 + 63;
                            if (-1 < iVar2) {
                                iVar8 = iVar2;
                            }
                            pAVar4 = (Array<std::unique_ptr<RenderedMapSquare>>*)(*local_58)[local_40];
                            puVar5 = (unique_ptr<RenderedMapSquare>*)(*pAVar4)[arg1_01];
                            lVar7 = (*puVar5).operator->();
                            iVar3 = (*(int*)(lVar7 + 4) * 64 + local_64) * local_44;
                            iVar2 = iVar3 + 63;
                            if (-1 < iVar3) {
                                iVar2 = iVar3;
                            }
                            local_b0->GetMapElementsAtScreenCoord(arg1_00, (iVar8 >> 6) + arg6, local_68 - (iVar2 >> 6),
                                                                  local_44, arg10);
                            cVar1 = local_b0->empty();
                            if (!cVar1) {
                                local_90 = local_b0->begin();
                                local_88 = local_b0->end();
                                while (cVar1 = local_90 != local_88, cVar1) {
                                    mapElement = (shared_ptr<MapElement>*)*local_90;
                                    push_back(*mapElement);
                                    ++local_90;
                                }
                            }
                            arg1_01 = arg1_01 + 1;
                        } while ((long)arg1_01 < local_80);
                    }
                    local_40 = local_40 + 1;
                } while ((long)local_40 < local_50);
            }
        }
        return this;
    }

    // 0x1001f6df0
    uint8_t* WorldmapRenderer::GetMapElements() {
        CollateMapElements();
        return &field_40;
    }

} // namespace jag::oldscape::rs2lib::worldmap

// 0x1001f6250
void ceil(float arg1) {
    _ceilf();
}

// 0x1001f6e70
void round(float arg1) {
    _roundf();
}

// 0x1001f6e80
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
