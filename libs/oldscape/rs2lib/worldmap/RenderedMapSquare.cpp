// libs/oldscape/rs2lib/worldmap/RenderedMapSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "RenderedMapSquare.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100fd5b80, set at startup by ___cxx_global_var_init.128
    LRUCache<graphics::Pix32> RenderedMapSquare::m_renderedMapSquareSpriteCache =
        LRUCache<graphics::Pix32>(37748736, "mapsqLRU");

    // 0x100fd6888, set at startup by ___cxx_global_var_init.132
    int64_t RenderedMapSquare::m_toolkit = this;

    // 0x100fd6890, set at startup by ___cxx_global_var_init.133
    uint8_t RenderedMapSquare::m_toolkit2D[16] = (**(code**)*RenderedMapSquare::m_toolkit)();

    // 0x10020d5c0
    MapTextLabel*
    RenderedMapSquare::CreateMapTextLabelForMapElement(const configdecoder::MapElementType& mapElementType) const {
        unsigned int uVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        PixfontGeneric* pPVar6;
        int* piVar7;
        eastl::string* str;
        MapTextLabel* this_01;
        unsigned long arg1;
        uint8_t auVar8[16];
        eastl::string local_a0;
        unsigned long local_80;
        obj_iterator local_78;
        shared_ptr<jstring::PixfontGeneric>* local_60;
        eastl local_58;
        int local_3c;
        MapLabelSize local_38;

        uint8_t* this_00 = &mapElementType.field_16;
        bool cVar1 = this_00->empty();
        if ((!cVar1) && (cVar1 = field_152->empty(), !cVar1)) {
            local_38.field_0 = (MapLabelSizeImpl*)((unsigned long)local_38.field_0._4_4_ << 32);
            local_58._0_16_ = field_152->find(local_38);
            local_78._0_16_ = field_152->end();
            cVar1 = local_58 == local_78;
            if (!cVar1) {
                local_38.field_0 = (MapLabelSizeImpl*)MapLabelSize::FromSize(mapElementType.field_56);
                cVar1 = local_38.Equals(*((MapLabelSize*)&MapLabelSize::NULL_SIZE));
                if (!cVar1) {
                    local_3c = local_38.GetSize();
                    auVar8 = field_152->find(local_3c);
                    local_58._0_16_ = auVar8;
                    auVar8 = field_152->end();
                    local_78._0_16_ = auVar8;
                    cVar1 = local_58 == local_78;
                    if (!cVar1) {
                        auVar8 = field_152->find(local_3c);
                        local_58._0_16_ = auVar8;
                        lVar5 = local_58.HeapBeginPtr();
                        local_60 = (shared_ptr<jstring::PixfontGeneric>*)(lVar5 + 8);
                        pPVar6 = (PixfontGeneric*)(*local_60).operator->();
                        uVar2 = pPVar6->PredictLinesMultiline(*this_00, 1000000);
                        new (&local_58) Array<eastl::string>();
                        local_58.set_max_size((long)(int)uVar2, 3);
                        local_78 = Array<int>();
                        pPVar6 = (PixfontGeneric*)(*local_60).operator->();
                        pPVar6->SplitString(*this_00, local_78, local_58);
                        iVar3 = local_58.end();
                        piVar7 = (int*)(*local_60).operator->();
                        local_80 = (unsigned long)(unsigned int)(iVar3 * *piVar7);
                        if ((int)uVar2 < 1) {
                            iVar3 = 0;
                        } else {
                            arg1 = 0;
                            iVar3 = 0;
                            do {
                                pPVar6 = (PixfontGeneric*)(*local_60).operator->();
                                str = &local_58[arg1];
                                iVar4 = pPVar6->StringWid(*str);
                                if (iVar3 < iVar4) {
                                    iVar3 = iVar4;
                                }
                                arg1 = arg1 + 1;
                            } while (uVar2 != arg1);
                        }
                        this_01 = (MapTextLabel*)operator new(48);
                        local_a0 = eastl::string(*this_00);
                        new (this_01)
                            MapTextLabel(&local_a0, iVar3,
                                         (int)(((unsigned int)(local_80 >> 31) & 1) + (int)local_80) >> 1, local_38);
                        local_58.~Array();
                        return this_01;
                    }
                }
            }
        }
        return nullptr;
    }

    // 0x100210bc0
    void RenderedMapSquare::ResetCaches() {
        m_renderedMapSquareSpriteCache.Reset();
    }

    // 0x100210be0
    void RenderedMapSquare::CleanCaches() {
        m_renderedMapSquareSpriteCache.Clean(5);
    }

    // 0x100210c90
    void RenderedMapSquare::RemoveCacheSoftReferences() {}

    // 0x100210ca0
    RenderedMapSquare::RenderedMapSquare(int arg1, int arg2, int arg3,
                                         const eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>>& arg4) {
        uint8_t* local_40 = &field_8;
        new (local_40) shared_ptr();
        uint8_t* local_38 = &field_24;
        new (local_38) eastl::list<shared_ptr<MapZoneData>>();
        new (&field_64) eastl::list<shared_ptr<MapElement>>();
        new (&field_96) eastl::hash_map<int, shared_ptr<MapElement>>(local_50);
        field_152 = arg4;
        field_0 = arg1;
        field_4 = arg2;
        field_56 = arg3 | 4278190080;
    }

    // 0x100210d90
    void RenderedMapSquare::RenderToScreen(int arg1, int arg2, int arg3, graphics::Pix2D& pix2D) {
        int iVar1;
        uint64_t uVar3;

        auto objType =
            GetCachedRenderedMapSquareSprite((RenderedMapSquare*)(unsigned long)field_0, field_4, field_60, arg3);
        if (!*objType == nullptr) {
            iVar1 = field_60;
            uVar3 = **objType;
            if (iVar1 * 64 == arg3) {
                (**(void (**)(...))(pix2D.field_0 + 168))(pix2D, uVar3, arg1, arg2);
            } else {
                (**(void (**)(...))(pix2D.field_0 + 208))(pix2D, uVar3, arg1, arg2, arg3, arg3);
            }
        }
    }

    // 0x100210e30
    void RenderedMapSquare::GetCachedRenderedMapSquareSprite(int arg1, int arg2, int arg3) {
        m_renderedMapSquareSpriteCache.Find(GetMapSquarePixelStrideHash((int)this, arg1, arg2));
    }

    // 0x100210e50
    void RenderedMapSquare::ExtractSquareData(const shared_ptr<MapSquareData>& mapSquareData,
                                              eastl::list<shared_ptr<StaticMapElement>>& staticMapElements) {
        field_96.clear();
        field_8 = mapSquareData;
        ExtractStaticMapElements(staticMapElements);
    }

    // 0x100210ed0
    void RenderedMapSquare::ExtractStaticMapElements(eastl::list<shared_ptr<StaticMapElement>>& staticMapElements) {
        int iVar2;
        shared_ptr<StaticMapElement>* psVar4;
        long lVar6;
        long lVar7;
        ReturnValue local_80;
        MapTextLabel* local_70;
        CoordGrid* local_68;
        CoordGrid* local_60;
        list<shared_ptr<MapElement>>* local_58;
        list<shared_ptr<StaticMapElement>>* local_50;
        ReturnValue local_38;

        new (&local_38) jag::math::Vector2T();
        auto local_48 = staticMapElements.begin();
        local_38 = local_48[0];
        local_48 = staticMapElements.end();
        bool cVar1 = local_38 != local_48;
        if (cVar1) {
            local_58 = (list<shared_ptr<MapElement>>*)&field_64;
            local_50 = staticMapElements;
            do {
                psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                iVar2 = ((StaticMapElement*)(*psVar4).operator->())->GetMelTypeId();
                if (configdecoder::MapElementType::List(iVar2)->field_68 != '\0') {
                    psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                    lVar6 = (*psVar4).operator->();
                    if (((lVar6 + 8))->GetMapSquareX() == field_0) {
                        psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                        lVar6 = (*psVar4).operator->();
                        iVar2 = ((lVar6 + 8))->GetMapSquareZ();
                        if (iVar2 == field_4) {
                            psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                            lVar6 = (*psVar4).operator->();
                            local_68 = (CoordGrid*)(lVar6 + 8);
                            psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                            lVar6 = (*psVar4).operator->();
                            local_60 = (CoordGrid*)(lVar6 + 8);
                            psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                            lVar6 = (*psVar4).operator->();
                            psVar4 = (shared_ptr<StaticMapElement>*)*local_38;
                            lVar7 = (*psVar4).operator->();
                            local_70 = (MapTextLabel*)CreateMapTextLabelForMapElement(*(int*)(lVar7 + 44));
                            make_shared<StaticMapElement, CoordGrid const&, CoordGrid const&, int const&,
                                        MapTextLabel*>(&local_80, local_68, local_60, (int*)(lVar6 + 44), &local_70);
                            local_48.shared_ptr<FileRSevenDebugPresetProvider, void>(local_80);
                            local_58->push_back(local_48);
                            staticMapElements = local_50;
                        }
                    }
                }
                local_48++;
                local_48 = staticMapElements.end();
                cVar1 = local_38 != local_48;
            } while (cVar1);
        }
    }

    // 0x1002110c0
    void RenderedMapSquare::ExtractZoneData(eastl::list<shared_ptr<MapZoneData>>& mapZoneDatas,
                                            eastl::list<shared_ptr<StaticMapElement>>& staticMapElements) {
        shared_ptr<MapZoneData>* this_00;

        field_96.clear();
        auto local_48 = mapZoneDatas.begin();
        auto local_40 = mapZoneDatas.end();
        bool cVar1 = local_48 != local_40;
        if (cVar1) {
            do {
                this_00 = (shared_ptr<MapZoneData>*)*local_48;
                if (((SoundInstance*)(*this_00).operator->())->GetSoundShape() == field_0) {
                    if (((PlayerGroup*)(*this_00).operator->())->GetUpdateNumber() == field_4) {
                        field_24.push_back(*this_00);
                    }
                }
                ++local_48;
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
        ExtractStaticMapElements(staticMapElements);
    }

    // 0x100211230
    void RenderedMapSquare::RederiveMapElements() {
        long lVar2;
        uint64_t* puVar3;
        ReturnValue local_48;
        uint64_t uStack_28;

        new (&local_48) eastl::hashtable_iterator(nullptr, nullptr);
        uint8_t* this_00 = &field_96;
        auto local_30 = this_00->begin();
        local_48 = local_30;
        uint64_t uStack_40 = uStack_28;
        local_30 = this_00->end();
        bool cVar1 = local_48 != local_30;
        if (cVar1) {
            do {
                lVar2 = local_48.HeapBeginPtr();
                puVar3 = (uint64_t*)(*((lVar2 + 8))).operator->();
                (**(void (**)(...))*puVar3)(puVar3);
                local_30++;
                local_30 = this_00->end();
                cVar1 = local_48 != local_30;
            } while (cVar1);
        }
    }

    // 0x100211350
    void RenderedMapSquare::PrerenderSquare(int arg1, std::unique_ptr<OverlayShapes>& overlayShapes,
                                            shared_ptr<Array<graphics::Pix8>>& pix8s, jagex3::Js5& js51,
                                            jagex3::Js5& js52) {
        OffscreenSoftwarePixToolkit* this_00;
        bool cVar2;
        uint8_t bVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar4;
        shared_ptr<MapZoneData>* this_01;
        uint8_t* puVar5;
        Pix32* pix32;
        Array<graphics::Pix8>* pAVar6;
        BlendedGround* pBVar7;
        ErrorCapture local_3c0;
        shared_ptr<WorldmapAreaMetadata> local_70;
        ReturnValue local_60;
        int local_40;
        int local_3c;
        ReturnValue local_38;

        field_60 = arg1;
        uint8_t* objType = &field_8;
        bool bVar1 = *objType == nullptr;
        int iVar8 = (int)pix8s;
        if ((bVar1) && (cVar2 = field_24.empty(), cVar2)) {
            return;
        }
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetCachedRenderedMapSquareSprite(
            (RenderedMapSquare*)(unsigned long)field_0, field_4, arg1, iVar8);
        bVar1 = *midiPlayerMainThread != nullptr;
        if (!bVar1) {
            local_3c0 = ErrorCapture(true);
            bVar3 = UnpackAreaGeography(js51, local_3c0);
            local_3c0.IsRaised();
            local_70 = shared_ptr();
            bVar1 = *objType != nullptr;
            if (bVar1) {
                lVar4 = (*objType).operator->();
            } else {
                local_60 = field_24.begin();
                this_01 = (shared_ptr<MapZoneData>*)*local_60;
                lVar4 = (*this_01).operator->();
            }
            iVar8 = *(int*)(lVar4 + 128);
            puVar5 = (uint8_t*)js52.RequestGroupDownload(iVar8);
            if ((bVar3 & puVar5 == DataStatus::READY) != 0) {
                js52.GetFile(local_70, iVar8);
                local_38 = BlendedGround::FromPNG((PacketJ<Array<unsigned char> _>*)local_70.end());
                local_40 = field_60 << 6;
                local_3c = local_40;
                make_shared<graphics::Pix32, int&, int&>(&local_60, &local_40, &local_3c);
                this_00 = m_toolkit;
                pix32 = (Pix32*)*local_60;
                this_00->SetDestination(*pix32);
                bVar1 = *objType != nullptr;
                if (bVar1) {
                    pAVar6 = (Array<graphics::Pix8>*)pix8s;
                    pBVar7 = (BlendedGround*)*local_38;
                    RenderSquare(overlayShapes, *pAVar6, *pBVar7);
                } else {
                    pAVar6 = (Array<graphics::Pix8>*)pix8s;
                    pBVar7 = (BlendedGround*)*local_38;
                    RenderZones(overlayShapes, *pAVar6, *pBVar7);
                }
                CacheRenderedMapSquareSprite(&local_60, field_0, field_4, field_60);
                ResetAreaGeography();
            }
        }
    }

    // 0x1002115c0
    unsigned long RenderedMapSquare::UnpackAreaGeography(jagex3::Js5& js5, ErrorCapture& errorCapture) {
        bool cVar2;
        uint8_t bVar3;
        int iVar4;
        int iVar5;
        PackableArea* pPVar6;
        char* str2;
        shared_ptr<MapZoneData>* psVar7;
        MapZoneData* pMVar8;
        uint64_t uVar11;
        unsigned long uVar10;
        ReturnValue local_40;
        ReturnValue local_38;

        field_96.clear();
        uint8_t* puVar9 = &field_8;
        if (*puVar9 != nullptr) {
            pPVar6 = (PackableArea*)(*puVar9).operator->();
            pPVar6->UnpackAreaGeography(js5, errorCapture);
            cVar2 = errorCapture.IsRaised();
            if (cVar2) {
                errorCapture.second();
                str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "worldmap/RenderedMapSquare.cpp",
                                485, str2);
            }
            pPVar6 = (PackableArea*)(*puVar9).operator->();
            cVar2 = pPVar6->HasGeography();
            if (!cVar2) {
            LAB_100211845:
                uVar10 = 0;
            } else {
                pPVar6 = (PackableArea*)**puVar9;
                ExtractLocMapElements(0, 0, 64, 64, *pPVar6);
                uVar10 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
            }
        } else {
            new (&local_40) jag::math::Vector2T();
            puVar9 = &field_24;
            local_38 = puVar9->begin();
            local_40 = local_38;
            local_38 = puVar9->end();
            cVar2 = local_40 != local_38;
            uVar11 = (uint64_t)((unsigned long)puVar9 >> 8);
            uVar10 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
            if (cVar2) {
                uVar10 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
                do {
                    psVar7 = (shared_ptr<MapZoneData>*)*local_40;
                    pPVar6 = (PackableArea*)(*psVar7).operator->();
                    pPVar6->UnpackAreaGeography(js5, errorCapture);
                    cVar2 = errorCapture.IsRaised();
                    if (cVar2)
                        goto LAB_100211845;
                    psVar7 = (shared_ptr<MapZoneData>*)*local_40;
                    pPVar6 = (PackableArea*)(*psVar7).operator->();
                    bVar3 = pPVar6->HasGeography();
                    uVar10 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)((uint8_t)uVar10 & bVar3));
                    local_38++;
                    local_38 = puVar9->end();
                    cVar2 = local_40 != local_38;
                } while (cVar2);
            }
            if ((char)uVar10 != '\0') {
                local_38 = puVar9->begin();
                local_40 = local_38;
                local_38 = puVar9->end();
                cVar2 = local_40 != local_38;
                if (cVar2) {
                    do {
                        psVar7 = (shared_ptr<MapZoneData>*)*local_40;
                        pMVar8 = (MapZoneData*)(*psVar7).operator->();
                        iVar4 = pMVar8->GetTargetZoneX();
                        psVar7 = (shared_ptr<MapZoneData>*)*local_40;
                        pMVar8 = (MapZoneData*)(*psVar7).operator->();
                        iVar5 = pMVar8->GetTargetZoneZ();
                        psVar7 = (shared_ptr<MapZoneData>*)*local_40;
                        pPVar6 = (PackableArea*)**psVar7;
                        ExtractLocMapElements(iVar4 * 8, iVar5 * 8, 8, 8, *pPVar6);
                        local_38++;
                        local_38 = puVar9->end();
                        cVar2 = local_40 != local_38;
                    } while (cVar2);
                }
            }
        }
        return uVar10 & 4294967295;
    }

    // 0x100211970
    void RenderedMapSquare::RenderSquare(const std::unique_ptr<OverlayShapes>& overlayShapes,
                                         Array<graphics::Pix8>& pix8s, BlendedGround& blendedGround) {
        PackableArea* pPVar1;
        unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> _>* overlayShapes_00;
        int iVar2;

        uint8_t* this_00 = &field_8;
        int iVar3 = 0;
        do {
            iVar2 = 0;
            do {
                pPVar1 = (PackableArea*)**this_00;
                RenderGround(iVar3, iVar2, *pPVar1, overlayShapes, blendedGround);
                pPVar1 = (PackableArea*)**this_00;
                overlayShapes_00 = overlayShapes;
                RenderAdditionalOverlays(iVar3, iVar2, *pPVar1, overlayShapes);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 64);
            iVar3 = iVar3 + 1;
        } while (iVar3 != 64);
        iVar3 = 0;
        do {
            iVar2 = 0;
            do {
                pPVar1 = (PackableArea*)**this_00;
                RenderTile(iVar3, iVar2, *pPVar1, *overlayShapes_00, pix8s);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 64);
            iVar3 = iVar3 + 1;
        } while (iVar3 != 64);
    }

    // 0x100211a70
    void RenderedMapSquare::RenderZones(const std::unique_ptr<OverlayShapes>& overlayShapes,
                                        Array<graphics::Pix8>& pix8s, BlendedGround& blendedGround) {
        unsigned int uVar1;
        bool bVar2;
        RenderedMapSquare* pRVar3;
        list<console::Line>* this_00;
        int iVar5;
        int iVar6;
        int iVar7;
        shared_ptr<MapZoneData>* psVar8;
        MapZoneData* pMVar9;
        PackableArea* pPVar11;
        array<bool, 64ul>* this_01;
        char* pcVar12;
        unsigned long uVar13;
        unsigned long uVar14;
        unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> _>* in_R8;
        unsigned long arg1;
        array<std::array<bool, 64ul>, 64ul> local_1078;
        array<bool, 64ul>* local_78;
        unsigned long local_58;
        ReturnValue local_38;

        ___bzero(&local_1078, 4096);
        new (&local_38) jag::math::Vector2T();
        uint8_t* puVar10 = &field_24;
        auto local_40 = puVar10->begin();
        local_38 = local_40;
        list<console::Line>* local_48 = (list<console::Line>*)puVar10;
        local_40 = puVar10->end();
        bool cVar4 = local_38 != local_40;
        if (cVar4) {
            do {
                psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                pMVar9 = (MapZoneData*)(*psVar8).operator->();
                iVar5 = pMVar9->GetTargetZoneX();
                psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                pMVar9 = (MapZoneData*)(*psVar8).operator->();
                iVar6 = pMVar9->GetTargetZoneX();
                if (iVar5 * 8 < iVar6 * 8 + 8) {
                    uVar13 = (unsigned long)(iVar5 * 8);
                    do {
                        psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                        pMVar9 = (MapZoneData*)(*psVar8).operator->();
                        iVar5 = pMVar9->GetTargetZoneZ();
                        psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                        pMVar9 = (MapZoneData*)(*psVar8).operator->();
                        iVar6 = pMVar9->GetTargetZoneZ();
                        pRVar3 = this;
                        uVar14 = uVar13;
                        if (iVar5 * 8 < iVar6 * 8 + 8) {
                            local_78 = &local_1078[uVar13];
                            arg1 = (long)(iVar5 * 8);
                            local_58 = uVar13;
                            do {
                                uVar13 = local_58;
                                puVar10 = (uint8_t*)(*local_78)[arg1];
                                *puVar10 = 1;
                                psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                                pPVar11 = (PackableArea*)**psVar8;
                                in_R8 = overlayShapes;
                                RenderGround(pRVar3, (int)uVar13, (int)arg1, pPVar11, overlayShapes, blendedGround);
                                psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                                pPVar11 = (PackableArea*)**psVar8;
                                RenderAdditionalOverlays(pRVar3, (int)local_58, (int)arg1, pPVar11, in_R8);
                                psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                                pMVar9 = (MapZoneData*)(*psVar8).operator->();
                                iVar5 = pMVar9->GetTargetZoneZ();
                                bVar2 = (long)arg1 < (long)(iVar5 * 8 + 7);
                                uVar14 = local_58;
                                arg1 = arg1 + 1;
                            } while (bVar2);
                        }
                        uVar13 = uVar14 + 1;
                        psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                        pMVar9 = (MapZoneData*)(*psVar8).operator->();
                        iVar5 = pMVar9->GetTargetZoneX();
                    } while ((long)uVar14 < (long)(iVar5 * 8 + 7));
                }
                local_40++;
                local_40 = local_48->end();
                cVar4 = local_38 != local_40;
            } while (cVar4);
        }
        uVar13 = 0;
        do {
            this_01 = &local_1078[uVar13];
            iVar5 = 63;
            uVar14 = 0;
            do {
                pcVar12 = (char*)(*this_01)[uVar14];
                if (*pcVar12 == '\0') {
                    uVar1 = field_60;
                    in_R8 = (unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> _>*)(unsigned long)uVar1;
                    (**(void (**)(...))(*m_toolkit2D + 32))(m_toolkit2D, (int)uVar13* uVar1, uVar1* iVar5, uVar1, in_R8,
                                                            field_56);
                }
                this_00 = local_48;
                uVar14 = uVar14 + 1;
                iVar5 = iVar5 - 1;
            } while (uVar14 != 64);
            uVar13 = uVar13 + 1;
        } while (uVar13 != 64);
        local_40 = local_48->begin();
        local_38 = local_40;
        local_40 = this_00->end();
        while (cVar4 = local_38 != local_40, cVar4) {
            psVar8 = (shared_ptr<MapZoneData>*)*local_38;
            pMVar9 = (MapZoneData*)(*psVar8).operator->();
            iVar6 = pMVar9->GetTargetZoneX();
            psVar8 = (shared_ptr<MapZoneData>*)*local_38;
            pMVar9 = (MapZoneData*)(*psVar8).operator->();
            iVar7 = pMVar9->GetTargetZoneX();
            iVar5 = iVar6 * 8;
            if (iVar6 * 8 < iVar7 * 8 + 8) {
                do {
                    psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                    pMVar9 = (MapZoneData*)(*psVar8).operator->();
                    iVar6 = pMVar9->GetTargetZoneZ();
                    iVar6 = iVar6 * 8;
                    psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                    pMVar9 = (MapZoneData*)(*psVar8).operator->();
                    iVar7 = pMVar9->GetTargetZoneZ();
                    pRVar3 = this;
                    if (iVar6 < iVar7 * 8 + 8) {
                        do {
                            psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                            pPVar11 = (PackableArea*)**psVar8;
                            RenderTile(pRVar3, iVar5, iVar6, pPVar11, in_R8, pix8s);
                            psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                            pMVar9 = (MapZoneData*)(*psVar8).operator->();
                            iVar7 = pMVar9->GetTargetZoneZ();
                            bVar2 = iVar6 < iVar7 * 8 + 7;
                            iVar6 = iVar6 + 1;
                        } while (bVar2);
                    }
                    psVar8 = (shared_ptr<MapZoneData>*)*local_38;
                    pMVar9 = (MapZoneData*)(*psVar8).operator->();
                    iVar6 = pMVar9->GetTargetZoneX();
                    bVar2 = iVar5 < iVar6 * 8 + 7;
                    iVar5 = iVar5 + 1;
                } while (bVar2);
            }
            local_40++;
            local_40 = local_48->end();
        }
    }

    // 0x100211ef0
    void RenderedMapSquare::CacheRenderedMapSquareSprite(const shared_ptr<graphics::Pix32>& pix32, int arg2, int arg3,
                                                         int arg4) {
        int iVar1 = ((Layout*)pix32.operator->())->HeapBeginPtr();
        unsigned long long arg3_00 = GetMapSquarePixelStrideHash(arg2, arg3, arg4);
        m_renderedMapSquareSpriteCache.Put(pix32, iVar1 * 4, arg3_00);
    }

    // 0x100211f60
    void RenderedMapSquare::ResetAreaGeography() {
        bool cVar2;
        PackableArea* pPVar3;
        shared_ptr<MapZoneData>* this_00;
        uint8_t* this_01;
        ReturnValue local_30;
        ReturnValue local_28;

        if (field_8 != nullptr) {
            pPVar3 = (PackableArea*)field_8.operator->();
            pPVar3->ResetAreaGeography();
        } else {
            new (&local_30) jag::math::Vector2T();
            this_01 = &field_24;
            local_28 = this_01->begin();
            local_30 = local_28;
            local_28 = this_01->end();
            cVar2 = local_30 != local_28;
            if (cVar2) {
                do {
                    this_00 = (shared_ptr<MapZoneData>*)*local_30;
                    pPVar3 = (PackableArea*)(*this_00).operator->();
                    pPVar3->ResetAreaGeography();
                    local_28++;
                    local_28 = this_01->end();
                    cVar2 = local_30 != local_28;
                } while (cVar2);
            }
        }
    }

    // 0x100212040
    void RenderedMapSquare::RenderMapElements(int arg1, int arg2, int arg3, eastl::hash_set<int>& hash_set,
                                              graphics::Pix2D& pix2D) {
        RenderLocMapElements(arg1, arg2, hash_set, arg3, pix2D);
        RenderStaticMapElements(arg1, arg2, hash_set, arg3, pix2D);
    }

    // 0x1002120a0
    void RenderedMapSquare::RenderLocMapElements(int arg1, int arg2, const eastl::hash_set<int>& hash_set, int arg4,
                                                 graphics::Pix2D& pix2D) {
        int iVar2;
        int iVar3;
        int* piVar4;
        long lVar5;
        MapElement* this_02;
        int arg2_00;
        uint8_t auVar6[16];
        uint8_t local_a8[16];
        obj_iterator local_98;
        uint8_t local_50[16];
        float local_3c;
        float local_38;

        float local_34 = (float)arg1;
        eastl::hashtable_iterator local_88(nullptr, nullptr);
        uint8_t* this_00 = &field_96;
        *local_50 = this_00->begin();
        local_88[0] = (ReturnValue)local_50._0_8_;
        local_88[1] = (ReturnValue)local_50._8_8_;
        hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_70 =
            (hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                       eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)this_00;
        *local_50 = this_00->end();
        bool cVar1 = local_88 != *local_50;
        if (cVar1) {
            local_38 = (float)arg4 * 0.015625f;
            local_3c = (float)arg4 * -0.0078125f;
            local_34 = (float)(int)local_34 + local_3c;
            local_3c = (float)(arg2 + arg4) + local_3c;
            do {
                piVar4 = (int*)local_88.HeapBeginPtr();
                new (local_a8) rs2lib::CoordGrid(*piVar4);
                iVar2 = local_a8->GetZ();
                iVar3 = local_a8->GetPos();
                lVar5 = local_88.HeapBeginPtr();
                this_02 = (MapElement*)*(*((lVar5 + 8)));
                cVar1 = this_02->IsValid();
                if (cVar1) {
                    arg2_00 = (int)((float)iVar2 * local_38 + local_34);
                    iVar3 = (int)(local_3c - (float)iVar3 * local_38);
                    this_02->field_32 = arg2_00;
                    this_02->field_36 = iVar3;
                    iVar2 = (**(void (**)(...))(this_02->field_0 + 8))(this_02);
                    auVar6 = hash_set.find(configdecoder::MapElementType::List(iVar2)->GetID());
                    local_50 = auVar6;
                    auVar6 = hash_set.end();
                    &local_98 = (obj_iterator[16])auVar6;
                    cVar1 = *local_50 == local_98;
                    if (cVar1) {
                        RenderMapElement(*this_02, arg2_00, iVar3, local_38, pix2D);
                    }
                }
                (*local_50)++;
                *local_50 = local_70->end();
                cVar1 = local_88 != *local_50;
            } while (cVar1);
        }
    }

    // 0x1002122b0
    void RenderedMapSquare::RenderStaticMapElements(int arg1, int arg2, const eastl::hash_set<int>& hash_set, int arg4,
                                                    graphics::Pix2D& pix2D) {
        int iVar2;
        int iVar3;
        shared_ptr<MapElement>* psVar4;
        MapElement* pMVar5;
        long lVar6;
        long* plVar7;
        float fVar8;
        uint8_t auVar9[16];
        uint8_t local_80[16];
        ReturnValue local_58;
        uint8_t local_50[16];
        float local_38;

        float local_34 = (float)arg1;
        new (&local_58) jag::math::Vector2T();
        uint8_t* this_00 = &field_64;
        *local_50 = this_00->begin();
        local_58 = (ReturnValue)local_50._0_8_;
        *local_50 = this_00->end();
        bool cVar1 = local_58 != *local_50;
        if (cVar1) {
            local_38 = (float)arg4 * 0.015625f;
            local_34 = (float)(int)local_34;
            do {
                psVar4 = (shared_ptr<MapElement>*)*local_58;
                pMVar5 = (MapElement*)(*psVar4).operator->();
                cVar1 = pMVar5->IsValid();
                if (cVar1) {
                    psVar4 = (shared_ptr<MapElement>*)*local_58;
                    lVar6 = (*psVar4).operator->();
                    iVar2 = ((lVar6 + 8))->GetLocalX();
                    psVar4 = (shared_ptr<MapElement>*)*local_58;
                    lVar6 = (*psVar4).operator->();
                    iVar3 = ((lVar6 + 8))->GetLocalZ();
                    fVar8 = (float)iVar2 * local_38 + local_34;
                    psVar4 = (shared_ptr<MapElement>*)*local_58;
                    lVar6 = (*psVar4).operator->();
                    *(int*)(lVar6 + 32) = (int)fVar8;
                    fVar8 = (float)(63 - iVar3) * local_38 + (float)arg2;
                    psVar4 = (shared_ptr<MapElement>*)*local_58;
                    lVar6 = (*psVar4).operator->();
                    *(int*)(lVar6 + 36) = (int)fVar8;
                    psVar4 = (shared_ptr<MapElement>*)*local_58;
                    plVar7 = (long*)(*psVar4).operator->();
                    auVar9 = hash_set.find((**(void (**)(...))(*plVar7 + 8))(plVar7));
                    local_50 = auVar9;
                    auVar9 = hash_set.end();
                    local_80 = auVar9;
                    cVar1 = *local_50 != *local_80;
                    if (!cVar1) {
                        psVar4 = (shared_ptr<MapElement>*)*local_58;
                        pMVar5 = (MapElement*)**psVar4;
                        psVar4 = (shared_ptr<MapElement>*)*local_58;
                        lVar6 = (*psVar4).operator->();
                        iVar2 = *(int*)(lVar6 + 32);
                        psVar4 = (shared_ptr<MapElement>*)*local_58;
                        lVar6 = (*psVar4).operator->();
                        RenderMapElement(*pMVar5, iVar2, *(int*)(lVar6 + 36), local_38, pix2D);
                    }
                }
                (*local_50)++;
                *local_50 = this_00->end();
                cVar1 = local_58 != *local_50;
            } while (cVar1);
        }
    }

    // 0x100212500
    void RenderedMapSquare::RenderMapElementHighlights(const eastl::hash_set<int>& hash_set, int arg2, int arg3,
                                                       graphics::Pix2D& pix2D) {
        int arg3_00;
        long lVar2;
        long* plVar3;
        MapElementType* mapElementType;
        uint8_t auVar4[16];
        uint8_t local_80[16];
        uint8_t local_70[16];
        MapElementType* local_60;
        int local_3c;

        auto local_a0 = field_96.begin();
        auto local_90 = field_96.end();
        bool cVar1 = local_a0 != local_90;
        if (cVar1) {
            do {
                lVar2 = local_a0.HeapBeginPtr();
                mapElementType = (MapElementType*)(lVar2 + 8);
                cVar1 = ((MapElement*)(*mapElementType).operator->())->IsValid();
                if (cVar1) {
                    plVar3 = (long*)(*mapElementType).operator->();
                    local_3c = (**(void (**)(...))(*plVar3 + 8))(plVar3);
                    auVar4 = hash_set.find(local_3c);
                    local_80 = auVar4;
                    auVar4 = hash_set.end();
                    local_70 = auVar4;
                    cVar1 = *local_80 != *local_70;
                    if (cVar1) {
                        local_60 = configdecoder::MapElementType::List(local_3c);
                        lVar2 = (*mapElementType).operator->();
                        arg3_00 = *(int*)(lVar2 + 32);
                        lVar2 = (*mapElementType).operator->();
                        RenderHighlight(mapElementType, (int)local_60, arg3_00, *(int*)(lVar2 + 36), arg2,
                                        (Pix2D*)(unsigned long)(unsigned int)arg3);
                    }
                }
                ++local_a0;
                cVar1 = local_a0 != local_90;
            } while (cVar1);
        }
        RenderStaticMapElementHighlights(hash_set, arg2, (unsigned int)arg3, pix2D);
    }

    // 0x100212690
    void RenderedMapSquare::RenderHighlight(const configdecoder::MapElementType& mapElementType, int arg2, int arg3,
                                            int arg4, int arg5, graphics::Pix2D& pix2D) {
        int iVar1;
        uint64_t uVar3;
        long lVar4;
        uint32_t in_register_00000034;
        long* in_stack_00000008;
        ReturnValue local_48;

        local_48.GetSprite((MapElementType*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), false);
        if (!local_48 == nullptr) {
            uVar3 = *local_48;
            lVar4 = local_48.operator->();
            iVar1 = *(int*)(lVar4 + 24);
            lVar4 = local_48.operator->();
            (**(void (**)(...))(*in_stack_00000008 + 176))(in_stack_00000008, uVar3, arg3 - iVar1 / 2,
                                                           arg4 - *(int*)(lVar4 + 28) / 2);
            if (arg5 % (int)pix2D < (int)(((unsigned int)((unsigned long)pix2D >> 31) & 1) + (int)pix2D) >> 1) {
                (**(void (**)(...))(*in_stack_00000008 + 112))(in_stack_00000008, arg3, arg4, 15, 16776960, 128);
                (**(void (**)(...))(*in_stack_00000008 + 104))(in_stack_00000008, arg3, arg4, 7, 16777215);
            }
        }
    }

    // 0x1002127b0
    void RenderedMapSquare::RenderStaticMapElementHighlights(const eastl::hash_set<int>& hash_set, int arg2, int arg3,
                                                             graphics::Pix2D& pix2D) {
        int iVar2;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        long* plVar3;
        MapElementType* this_01;
        long lVar4;
        MapElementType* mapElementType;
        uint8_t auVar5[16];
        uint8_t local_88[16];
        eastl local_78;
        obj_iterator local_68;

        Pix2D* local_48 = pix2D;
        auto local_58 = field_64.begin();
        auto local_50 = field_64.end();
        bool cVar1 = local_58 != local_50;
        if (cVar1) {
            do {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)*local_58;
                new (local_88) shared_ptr(groundDecor);
                cVar1 = ((MapElement*)(*local_88).operator->())->IsValid();
                if (cVar1) {
                    plVar3 = (long*)(*local_88).operator->();
                    iVar2 = (**(void (**)(...))(*plVar3 + 8))(plVar3);
                    this_01 = configdecoder::MapElementType::List(iVar2);
                    auVar5 = hash_set.find(this_01->GetID());
                    &local_78 = (eastl[16])auVar5;
                    auVar5 = hash_set.end();
                    &local_68 = (obj_iterator[16])auVar5;
                    cVar1 = local_78 != local_68;
                    if (cVar1) {
                        lVar4 = (*local_88).operator->();
                        iVar2 = *(int*)(lVar4 + 32);
                        mapElementType = (MapElementType*)local_88;
                        lVar4 = (*local_88).operator->();
                        RenderHighlight(mapElementType, (int)this_01, iVar2, *(int*)(lVar4 + 36), arg2,
                                        (Pix2D*)(unsigned long)(unsigned int)arg3);
                    }
                }
                ++local_58;
                cVar1 = local_58 != local_50;
            } while (cVar1);
        }
    }

    // 0x100212930
    RenderedMapSquare* RenderedMapSquare::GetMapElementsAtScreenCoord(int arg1, int arg2, int arg3, int arg4,
                                                                      int arg5) {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        bool cVar1;
        long lVar2;
        MapElement* pMVar3;
        shared_ptr<MapElement>* psVar4;
        uint32_t in_register_00000034;
        list<console::Line>* this_01;
        int in_stack_00000008;
        ReturnValue local_68;
        uint64_t uStack_60;
        ReturnValue local_50;
        uint64_t uStack_48;
        ReturnValue local_40;

        new (this) eastl::list<shared_ptr<MapElement>>();
        if ((((arg2 <= arg5) && (arg3 <= in_stack_00000008)) && (arg5 < arg2 + arg4)) &&
            (in_stack_00000008 < arg4 + arg3)) {
            new (&local_68) eastl::hashtable_iterator(nullptr, nullptr);
            this_00 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 96);
            local_50 = this_00->begin();
            local_68 = local_50;
            uStack_60 = uStack_48;
            local_50 = this_00->end();
            cVar1 = local_68 != local_50;
            if (cVar1) {
                do {
                    lVar2 = local_68.HeapBeginPtr();
                    pMVar3 = (MapElement*)(*((lVar2 + 8))).operator->();
                    cVar1 = pMVar3->IsValid();
                    if (cVar1) {
                        lVar2 = local_68.HeapBeginPtr();
                        pMVar3 = (MapElement*)(*((lVar2 + 8))).operator->();
                        cVar1 = pMVar3->Contains(arg5, in_stack_00000008);
                        if (cVar1) {
                            lVar2 = local_68.HeapBeginPtr();
                            push_back(*((lVar2 + 8)));
                        }
                    }
                    local_50++;
                    local_50 = this_00->end();
                    cVar1 = local_68 != local_50;
                } while (cVar1);
            }
            new (&local_50) jag::math::Vector2T();
            this_01 = (list<console::Line>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 64);
            local_40 = this_01->begin();
            local_50 = local_40;
            local_40 = this_01->end();
            cVar1 = local_50 != local_40;
            if (cVar1) {
                do {
                    psVar4 = (shared_ptr<MapElement>*)*local_50;
                    pMVar3 = (MapElement*)(*psVar4).operator->();
                    cVar1 = pMVar3->IsValid();
                    if (cVar1) {
                        psVar4 = (shared_ptr<MapElement>*)*local_50;
                        pMVar3 = (MapElement*)(*psVar4).operator->();
                        cVar1 = pMVar3->Contains(arg5, in_stack_00000008);
                        if (cVar1) {
                            psVar4 = (shared_ptr<MapElement>*)*local_50;
                            push_back(*psVar4);
                        }
                    }
                    local_40++;
                    local_40 = this_01->end();
                    cVar1 = local_50 != local_40;
                } while (cVar1);
            }
        }
        return this;
    }

    // 0x100212b90
    auto RenderedMapSquare::GetAllMapElements() {
        shared_ptr<MapElement>* mapElement;
        long lVar2;
        uint64_t uStack_58;
        ReturnValue local_50;

        auto result;
        new (&local_50) jag::math::Vector2T();
        uint8_t* puVar3 = &field_64;
        auto local_48 = puVar3->begin();
        local_50 = local_48;
        local_48 = puVar3->end();
        bool cVar1 = local_50 != local_48;
        if (cVar1) {
            do {
                mapElement = (shared_ptr<MapElement>*)*local_50;
                result.push_back(*mapElement);
                local_48++;
                local_48 = puVar3->end();
                cVar1 = local_50 != local_48;
            } while (cVar1);
        }
        new (&local_48) eastl::hashtable_iterator(nullptr, nullptr);
        puVar3 = &field_96;
        auto local_60 = puVar3->begin();
        local_48 = local_60;
        uint64_t uStack_40 = uStack_58;
        local_60 = puVar3->end();
        cVar1 = local_48 != local_60;
        if (cVar1) {
            do {
                lVar2 = local_48.HeapBeginPtr();
                result.push_back(*((lVar2 + 8)));
                local_60++;
                local_60 = puVar3->end();
                cVar1 = local_48 != local_60;
            } while (cVar1);
        }
        return result;
    }

    // 0x100212d00
    uint64_t RenderedMapSquare::GetFluId(int arg1, int arg2) {
        bool cVar2;
        bool cVar3;
        PackableArea* pPVar4;
        uint64_t uVar5;
        shared_ptr<MapZoneData>* psVar6;
        MapZoneData* pMVar7;
        uint8_t* this_00;
        ReturnValue local_48;
        ReturnValue local_40;

        if (field_8 != nullptr) {
            pPVar4 = (PackableArea*)field_8.operator->();
            uVar5 = pPVar4->GetFluId(arg1, arg2);
        } else {
            this_00 = &field_24;
            cVar2 = this_00->empty();
            if (!cVar2) {
                new (&local_40) jag::math::Vector2T();
                local_48 = this_00->begin();
                local_40 = local_48;
                local_48 = this_00->end();
                cVar2 = local_40 != local_48;
                if (cVar2) {
                    psVar6 = (shared_ptr<MapZoneData>*)*local_40;
                    pMVar7 = (MapZoneData*)(*psVar6).operator->();
                    cVar3 = pMVar7->TargetContainsMapTile(arg1, arg2);
                    if (!cVar3) {
                        do {
                            local_48++;
                            local_48 = this_00->end();
                            cVar2 = local_40 != local_48;
                            if (!cVar2)
                                goto LAB_100212e44;
                            psVar6 = (shared_ptr<MapZoneData>*)*local_40;
                            pMVar7 = (MapZoneData*)(*psVar6).operator->();
                            cVar3 = pMVar7->TargetContainsMapTile(arg1, arg2);
                        } while (!cVar3);
                    }
                    psVar6 = (shared_ptr<MapZoneData>*)*local_40;
                    pPVar4 = (PackableArea*)(*psVar6).operator->();
                    uVar5 = pPVar4->GetFluId(arg1, arg2);
                    if (cVar2) {
                        return uVar5;
                    }
                }
            }
        LAB_100212e44:
            uVar5 = 4294967295;
        }
        return uVar5;
    }

    // 0x100212e60
    long RenderedMapSquare::GetMapSquarePixelStrideHash(int arg1, int arg2, int arg3) {
        return (long)(arg1 << 8 | arg2 | arg3 << 16);
    }

    // 0x100213020
    void RenderedMapSquare::ExtractLocMapElements(int arg1, int arg2, int arg3, int arg4, PackableArea& packableArea) {
        unsigned long arg1_00;
        bool cVar1;
        char cVar2;
        int iVar3;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData>>* this_01;
        unsigned long uVar4;
        unique_ptr<LocationData>* this_02;
        int* piVar5;
        shared_ptr<configdecoder::LocType>* locType;
        char cVar6;
        unsigned long uVar7;
        bool bVar8;
        unsigned long local_50;
        long local_40;
        long local_38;

        if (0 < arg3) {
            local_38 = (long)arg1;
            do {
                if (0 < arg4) {
                    local_40 = (long)arg2;
                    do {
                        iVar3 = packableArea.GetMaxLevels();
                        if (0 < iVar3) {
                            local_50 = 0;
                            cVar2 = '\0';
                            do {
                                this_00 = &packableArea.field_136[local_50];
                                this_01 = (SharedArray<std::unique_ptr<LocationData>>*)(*this_00)[local_40 +
                                                                                                  ((int)local_38 << 6)];
                                cVar1 = this_01->empty();
                                cVar6 = '\n';
                                if (!cVar1) {
                                    uVar4 = this_01->HeapBeginPtr();
                                    if (uVar4 != 0) {
                                        uVar7 = 1;
                                        do {
                                            arg1_00 = uVar7 - 1;
                                            if (*(unsigned long*)this_01 <= arg1_00) {
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", arg1_00,
                                                          *(unsigned long*)this_01 - 1);
                                            }
                                            this_02 = (unique_ptr<LocationData>*)(*(
                                                (shared_ptr<std::unique_ptr<LocationData>[]>*)(this_01 + 8)))[arg1_00];
                                            piVar5 = (int*)(*this_02).operator->();
                                            locType = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(
                                                *piVar5);
                                            cVar1 = HasMeltype(locType);
                                            if (cVar1) {
                                                AddMapElementForLoc(*locType, (int)local_50, (int)local_38,
                                                                    (int)local_40, packableArea);
                                                cVar2 = '\x01';
                                                break;
                                            }
                                            bVar8 = uVar7 < uVar4;
                                            uVar7 = uVar7 + 1;
                                        } while (bVar8);
                                    }
                                    cVar6 = cVar2 * '\b';
                                }
                                if ((cVar6 != '\n') && (cVar6))
                                    break;
                                local_50 = local_50 + 1;
                                iVar3 = packableArea.GetMaxLevels();
                            } while ((long)local_50 < (long)iVar3);
                        }
                        local_40 = local_40 + 1;
                    } while (local_40 < arg4 + arg2);
                }
                local_38 = local_38 + 1;
            } while (local_38 < arg3 + arg1);
        }
    }

    // 0x100213250
    void RenderedMapSquare::HasMeltype(const shared_ptr<configdecoder::LocType>& locType) {
        int* piVar3;
        shared_ptr<configdecoder::LocType>* shared_ptr;
        unsigned long uVar4;
        unsigned long arg1;

        long lVar2 = locType.operator->();
        bool cVar1 = ((lVar2 + 488))->empty();
        lVar2 = locType.operator->();
        if (!cVar1) {
            lVar2 = ((lVar2 + 488))->end();
            if (lVar2 != 0) {
                arg1 = 0;
                do {
                    lVar2 = locType.operator->();
                    piVar3 = (int*)(*((lVar2 + 488)))[arg1];
                    shared_ptr = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar3);
                    lVar2 = (*shared_ptr).operator->();
                    if (*(int*)(lVar2 + 432) != -1) {
                        return 1;
                    }
                    arg1 = arg1 + 1;
                    lVar2 = locType.operator->();
                    uVar4 = ((lVar2 + 488))->end();
                } while (arg1 < uVar4);
            }
        } else if (*(int*)(lVar2 + 432) != -1) {
            return 1;
        }
        return 0;
    }

    // 0x100213300
    void RenderedMapSquare::AddMapElementForLoc(const shared_ptr<configdecoder::LocType>& locType, int arg2, int arg3,
                                                int arg4, PackableArea& packableArea) {
        int iVar3;
        int iVar4;
        long lVar5;
        MapElementType* pMVar6;
        StaticMapElement* this_01;
        MapTextLabel* mapTextLabel;
        MultiLocMapElement* this_02;
        int* piVar7;
        shared_ptr<MapElement>* this_03;
        int iVar9;
        int arg2_00;
        int arg3_00;
        CoordGrid local_258;
        int local_208;
        uint8_t local_1f8[456];

        CoordGrid local_248(arg2, field_0 * 64 + arg3, field_4 * 64 + arg4);
        uint8_t* midiPlayerMainThread = &field_8;
        if (*midiPlayerMainThread != nullptr) {
            lVar5 = (*midiPlayerMainThread).operator->();
            iVar4 = *(int*)(lVar5 + 168);
            lVar5 = (*midiPlayerMainThread).operator->();
            arg2_00 = *(int*)(lVar5 + 160) * 64 + arg3;
            lVar5 = (*midiPlayerMainThread).operator->();
            iVar9 = *(int*)(lVar5 + 164) * 64 + arg4;
            arg3_00 = arg4;
        } else {
            iVar4 = packableArea.GetGLCoreProfileVerMinor();
            iVar3 = packableArea.field_160;
            iVar9 = (**(void (**)(...))(packableArea.field_0 + 16))(packableArea);
            arg3_00 = arg4;
            arg2_00 = iVar3 * 64 + arg3 + iVar9 * 8;
            iVar9 = packableArea.field_164 * 64 + arg4;
            iVar3 = (**(void (**)(...))(packableArea.field_0 + 24))(packableArea);
            iVar9 = iVar9 + iVar3 * 8;
        }
        CoordGrid local_238(iVar4 + arg2, arg2_00, iVar9);
        shared_ptr<WorldmapAreaMetadata> local_218;
        lVar5 = locType.operator->();
        if (((lVar5 + 488))->empty() == '\0') {
            this_02 = (MultiLocMapElement*)operator new(80);
            piVar7 = (int*)locType.operator->();
            new (this_02) MultiLocMapElement(local_238, local_248, *piVar7, *this);
            local_218.reset<MultiLocMapElement, void>(this_02);
        } else {
            lVar5 = locType.operator->();
            pMVar6 = configdecoder::MapElementType::List(*(int*)(lVar5 + 432));
            this_01 = (StaticMapElement*)operator new(64);
            iVar4 = pMVar6->m_iD;
            mapTextLabel = (MapTextLabel*)CreateMapTextLabelForMapElement(this, pMVar6);
            new (this_01) StaticMapElement(local_238, local_248, iVar4, mapTextLabel);
            local_218.reset<StaticMapElement, void>(this_01);
        }
        auto plVar8 = local_218.operator->();
        iVar4 = (**(void (**)(...))(*plVar8 + 8))(plVar8);
        pMVar6 = configdecoder::MapElementType::List(iVar4);
        new (local_1f8) configdecoder::MapElementType(pMVar6);
        if (local_1f8[68] != '\0') {
            local_258 = rs2lib::CoordGrid(0, arg3, arg3_00);
            local_208 = local_258.ToBitPacked();
            this_03 = &field_96[local_208];
            *this_03 = local_218;
        }
    }

    // 0x100213890
    void RenderedMapSquare::CreateMapTextLabelForMapElement(int arg1) const {
        CreateMapTextLabelForMapElement(configdecoder::MapElementType::List(arg1));
    }

    // 0x100213940
    void RenderedMapSquare::RenderGround(int arg1, int arg2, PackableArea& packableArea,
                                         const std::unique_ptr<OverlayShapes>& overlayShapes,
                                         BlendedGround& blendedGround) {
        uint8_t bVar1;
        int iVar4;
        int iVar5;
        array<unsigned char, 4096ul>* paVar9;
        char* pcVar10;
        OverlayShapes* this_00;
        uint8_t* pbVar11;
        uint8_t* puVar12;
        int iVar13;
        int local_34;

        array<unsigned short, 4096ul>* paVar6 = &packableArea.field_8[0];
        unsigned long arg1_00 = (unsigned long)(arg1 * 64 + arg2);
        short* psVar7 = (short*)(*paVar6)[arg1_00];
        short sVar2 = *psVar7;
        paVar6 = &packableArea.field_32[0];
        unsigned short* puVar8 = (unsigned short*)(*paVar6)[arg1_00];
        unsigned short uVar3 = *puVar8;
        if (sVar2 == 0 && uVar3 == 0) {
            iVar5 = field_60;
            (**(void (**)(...))(m_toolkit2D->field_0 + 32))(m_toolkit2D, iVar5* arg1, (63 - arg2) * iVar5, iVar5, iVar5,
                                                            field_56);
        }
        if (uVar3 == 0) {
            local_34 = 16711935;
        } else {
            iVar5 = FloorColourUtils::GetFloColour(uVar3 - 1, field_56);
            paVar9 = &packableArea.field_56[0];
            pcVar10 = (char*)(*paVar9)[arg1_00];
            local_34 = iVar5;
            if (*pcVar10 == '\0') {
                iVar4 = field_60;
                iVar13 = (63 - arg2) * iVar4;
                puVar12 = m_toolkit2D->field_0;
                goto LAB_100213b27;
            }
        }
        iVar5 = GetBlendedGroundColour(arg1, arg2, packableArea, blendedGround);
        if (uVar3 != 0) {
            this_00 = (OverlayShapes*)overlayShapes.operator->();
            iVar4 = field_60;
            paVar9 = &packableArea.field_56[0];
            pbVar11 = (uint8_t*)(*paVar9)[arg1_00];
            bVar1 = *pbVar11;
            paVar9 = &packableArea.field_80[0];
            pbVar11 = (uint8_t*)(*paVar9)[arg1_00];
            this_00->DrawOverlayShape(arg1 * iVar4, (63 - arg2) * iVar4, iVar5, local_34, iVar4, iVar4,
                                      (unsigned int)bVar1, (unsigned int)*pbVar11, *m_toolkit2D);
            return;
        }
        iVar4 = field_60;
        iVar13 = (63 - arg2) * iVar4;
        puVar12 = m_toolkit2D->field_0;
    LAB_100213b27:
        (**(void (**)(...))(puVar12 + 32))(m_toolkit2D, arg1* iVar4, iVar13, iVar4, iVar4, iVar5);
    }

    // 0x100213b40
    void RenderedMapSquare::RenderAdditionalOverlays(int arg1, int arg2, PackableArea& packableArea,
                                                     const std::unique_ptr<OverlayShapes>& overlayShapes) {
        uint8_t bVar1;
        int iVar2;
        unsigned long arg1_00;
        OverlayShapes* this_00;
        uint8_t* pbVar4;
        array<unsigned short, 4096ul>* this_01;
        unsigned short* puVar5;
        array<unsigned char, 4096ul>* paVar6;
        char* pcVar7;
        unsigned long arg1_01;

        int iVar3 = packableArea.GetMaxLevels();
        if (1 < iVar3) {
            arg1_00 = (unsigned long)(arg1 * 64 + arg2);
            arg1_01 = 1;
            do {
                this_01 = &packableArea.field_32[arg1_01];
                puVar5 = (unsigned short*)(*this_01)[arg1_00];
                if (*puVar5 != 0) {
                    iVar3 = FloorColourUtils::GetFloColour(*puVar5 - 1, field_56);
                    paVar6 = &packableArea.field_56[arg1_01];
                    pcVar7 = (char*)(*paVar6)[arg1_00];
                    if (*pcVar7 == '\0') {
                        iVar2 = field_60;
                        (**(void (**)(...))(m_toolkit2D->field_0 + 32))(m_toolkit2D, iVar2* arg1, iVar2 * (63 - arg2),
                                                                        iVar2, iVar2, iVar3);
                    } else {
                        this_00 = (OverlayShapes*)overlayShapes.operator->();
                        iVar2 = field_60;
                        paVar6 = &packableArea.field_56[arg1_01];
                        pbVar4 = (uint8_t*)(*paVar6)[arg1_00];
                        bVar1 = *pbVar4;
                        paVar6 = &packableArea.field_80[arg1_01];
                        pbVar4 = (uint8_t*)(*paVar6)[arg1_00];
                        this_00->DrawOverlayShape(iVar2 * arg1, iVar2 * (63 - arg2), 0, iVar3, iVar2, iVar2,
                                                  (unsigned int)bVar1, (unsigned int)*pbVar4, *m_toolkit2D);
                    }
                }
                arg1_01 = arg1_01 + 1;
                iVar3 = packableArea.GetMaxLevels();
            } while ((long)arg1_01 < (long)iVar3);
        }
    }

    // 0x100213cf0
    void RenderedMapSquare::RenderTile(int arg1, int arg2, PackableArea& packableArea,
                                       const std::unique_ptr<OverlayShapes>& overlayShapes,
                                       Array<graphics::Pix8>& pix8s) {
        RenderWall(arg1, arg2, packableArea);
        RenderMsi(arg1, arg2, packableArea, pix8s);
    }

    // 0x100213d60
    void RenderedMapSquare::RenderWall(int arg1, int arg2, PackableArea& packableArea) {
        bool cVar1;
        int iVar3;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData>>* this_01;
        unsigned long uVar4;
        unique_ptr<LocationData>* puVar5;
        long lVar6;
        int* piVar7;
        shared_ptr<configdecoder::LocType>* this_02;
        unsigned long arg1_00;
        unsigned long arg1_01;
        unsigned long uVar8;
        int iVar9;
        int iVar10;
        shared_ptr<std::unique_ptr<LocationData>[]>* this_03;
        uint32_t uVar11;

        int iVar2 = packableArea.GetMaxLevels();
        if (0 < iVar2) {
            iVar2 = 63 - arg2;
            arg1_00 = 0;
            do {
                this_00 = &packableArea.field_136[arg1_00];
                this_01 = (SharedArray<std::unique_ptr<LocationData>>*)(*this_00)[(long)(arg1 * 64 + arg2)];
                cVar1 = this_01->empty();
                if ((!cVar1) && (uVar4 = this_01->HeapBeginPtr(), uVar4 != 0)) {
                    this_03 = (shared_ptr<std::unique_ptr<LocationData>[]>*)(this_01 + 8);
                    arg1_01 = 0;
                    do {
                        if (*(unsigned long*)this_01 <= arg1_01) {
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", arg1_01, *(unsigned long*)this_01 - 1);
                        }
                        uVar8 = arg1_01;
                        puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                        iVar3 = (int)uVar8;
                        lVar6 = (*puVar5).operator->();
                        cVar1 = ((LocShape*)(unsigned long)*(unsigned int*)(lVar6 + 4))->IsWallShape(iVar3);
                        if (cVar1) {
                            if (*(unsigned long*)this_01 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                            piVar7 = (int*)(*puVar5).operator->();
                            this_02 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar7);
                            lVar6 = (*this_02).operator->();
                            uVar11 = 4291559424;
                            if (*(int*)(lVar6 + 200) == 0) {
                                uVar11 = 4291611852;
                            }
                            if (*(unsigned long*)this_01 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                            lVar6 = (*puVar5).operator->();
                            iVar3 = (int)this;
                            if (*(int*)(lVar6 + 4) == 0) {
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                RenderOrthogonalWall(iVar3, arg1, arg2, *(int*)(lVar6 + 8));
                            }
                            if (*(unsigned long*)this_01 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                            lVar6 = (*puVar5).operator->();
                            if (*(int*)(lVar6 + 4) == 2) {
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                RenderOrthogonalWall(iVar3, arg1, arg2, *(int*)(lVar6 + 8));
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                RenderOrthogonalWall(iVar3, arg1, arg2, *(int*)(lVar6 + 8) + 1);
                            }
                            if (*(unsigned long*)this_01 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                            lVar6 = (*puVar5).operator->();
                            if (*(int*)(lVar6 + 4) == 3) {
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                if (*(int*)(lVar6 + 8) == 0) {
                                    (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, field_60* arg1,
                                                                            field_60* iVar2, 1, uVar11);
                                }
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                if (*(int*)(lVar6 + 8) == 1) {
                                    iVar3 = field_60;
                                    (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, iVar3 + iVar3 * arg1 - 1,
                                                                            iVar3 * iVar2, 1, uVar11);
                                }
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                if (*(int*)(lVar6 + 8) == 2) {
                                    iVar3 = field_60;
                                    (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, iVar3 + iVar3 * arg1 - 1,
                                                                            iVar3 + iVar3 * iVar2 - 1, 1, uVar11);
                                }
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                if (*(int*)(lVar6 + 8) == 3) {
                                    iVar3 = field_60;
                                    (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, iVar3* arg1,
                                                                            iVar3 + iVar3 * iVar2 - 1, 1, uVar11);
                                }
                            }
                            if (*(unsigned long*)this_01 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                            lVar6 = (*puVar5).operator->();
                            if (*(int*)(lVar6 + 4) == 9) {
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                lVar6 = (*puVar5).operator->();
                                iVar3 = field_60;
                                if ((*(uint8_t*)(lVar6 + 8) & 1) == 0) {
                                    if (0 < iVar3) {
                                        iVar9 = 0;
                                        iVar10 = -1;
                                        do {
                                            (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, arg1* iVar3 + iVar9,
                                                                                    iVar3 * (64 - arg2) + iVar10, 1,
                                                                                    uVar11);
                                            iVar9 = iVar9 + 1;
                                            iVar3 = field_60;
                                            iVar10 = iVar10 - 1;
                                        } while (iVar9 < iVar3);
                                    }
                                } else if (0 < iVar3) {
                                    iVar9 = 0;
                                    do {
                                        (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, arg1* iVar3 + iVar9,
                                                                                iVar3 * iVar2 + iVar9, 1, uVar11);
                                        iVar9 = iVar9 + 1;
                                        iVar3 = field_60;
                                    } while (iVar9 < iVar3);
                                }
                            }
                        }
                        arg1_01 = arg1_01 + 1;
                    } while (arg1_01 != uVar4);
                }
                arg1_00 = arg1_00 + 1;
                iVar3 = packableArea.GetMaxLevels();
            } while ((long)arg1_00 < (long)iVar3);
        }
    }

    // 0x1002144a0
    void RenderedMapSquare::RenderMsi(int arg1, int arg2, PackableArea& packableArea, Array<graphics::Pix8>& pix8s) {
        bool cVar1;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData>>* this_01;
        unsigned long uVar3;
        unique_ptr<LocationData>* puVar4;
        long lVar5;
        int* piVar6;
        shared_ptr<configdecoder::LocType>* this_02;
        uint64_t uVar7;
        unsigned long arg1_00;
        unsigned long uVar8;
        int iVar9;
        long* plVar10;
        shared_ptr<std::unique_ptr<LocationData>[]>* this_03;
        unsigned long arg1_01;

        int iVar2 = packableArea.GetMaxLevels();
        if (0 < iVar2) {
            arg1_00 = 0;
            do {
                this_00 = &packableArea.field_136[arg1_00];
                this_01 = (SharedArray<std::unique_ptr<LocationData>>*)(*this_00)[(long)(arg1 * 64 + arg2)];
                cVar1 = this_01->empty();
                if (!cVar1) {
                    uVar3 = this_01->HeapBeginPtr();
                    if (uVar3 != 0) {
                        this_03 = (shared_ptr<std::unique_ptr<LocationData>[]>*)(this_01 + 8);
                        arg1_01 = 0;
                        do {
                            if (*(unsigned long*)this_01 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_01 - 1);
                            }
                            uVar8 = arg1_01;
                            puVar4 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                            iVar2 = (int)uVar8;
                            lVar5 = (*puVar4).operator->();
                            cVar1 = ((LocShape*)(unsigned long)*(unsigned int*)(lVar5 + 4))->IsCentrePieceShape(iVar2);
                            if (!cVar1) {
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                uVar8 = arg1_01;
                                puVar4 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                iVar2 = (int)uVar8;
                                lVar5 = (*puVar4).operator->();
                                cVar1 =
                                    ((LocShape*)(unsigned long)*(unsigned int*)(lVar5 + 4))->IsGroundDecorShape(iVar2);
                                if (cVar1)
                                    goto LAB_100214682;
                            } else {
                            LAB_100214682:
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar4 = (unique_ptr<LocationData>*)(*this_03)[arg1_01];
                                piVar6 = (int*)(*puVar4).operator->();
                                this_02 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar6);
                                lVar5 = (*this_02).operator->();
                                if (*(int*)(lVar5 + 436) != -1) {
                                    lVar5 = (*this_02).operator->();
                                    if (*(int*)(lVar5 + 436) == 46) {
                                    LAB_100214580:
                                        plVar10 = m_toolkit2D;
                                        lVar5 = (*this_02).operator->();
                                        uVar7 = pix8s[(long)*(int*)(lVar5 + 436)];
                                        iVar2 = field_60;
                                        iVar9 = iVar2 * 2 + 1;
                                    } else {
                                        lVar5 = (*this_02).operator->();
                                        plVar10 = m_toolkit2D;
                                        if (*(int*)(lVar5 + 436) == 52)
                                            goto LAB_100214580;
                                        lVar5 = (*this_02).operator->();
                                        uVar7 = pix8s[(long)*(int*)(lVar5 + 436)];
                                        iVar2 = field_60;
                                        iVar9 = iVar2 * 2;
                                    }
                                    (**(void (**)(...))(*plVar10 + 216))(plVar10, uVar7, iVar2* arg1,
                                                                         iVar2 * (63 - arg2), iVar9, iVar9);
                                }
                            }
                            arg1_01 = arg1_01 + 1;
                        } while (uVar3 != arg1_01);
                    }
                }
                arg1_00 = arg1_00 + 1;
                iVar2 = packableArea.GetMaxLevels();
            } while ((long)arg1_00 < (long)iVar2);
        }
    }

    // 0x100214760
    unsigned long RenderedMapSquare::GetBlendedGroundColour(int arg1, int arg2, PackableArea& packableArea,
                                                            BlendedGround& blendedGround) {
        unsigned long uVar2;

        array<unsigned short, 4096ul>* this_00 = &packableArea.field_8[0];
        short* psVar1 = (short*)(*this_00)[(long)(arg1 * 64 + arg2)];
        if (*psVar1 == 0) {
            uVar2 = (unsigned long)field_56;
        } else {
            uVar2 = blendedGround.GetBlendedGroundColour(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1002147d0
    void RenderedMapSquare::RenderOrthogonalWall(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int iVar2;
        uint32_t in_register_0000003c;

        long lVar3 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        switch (arg4 % 4) {
        case 0:
            iVar2 = arg2 * *(int*)(lVar3 + 60);
            iVar1 = (63 - arg3) * *(int*)(lVar3 + 60);
            lVar3 = *m_toolkit2D;
            break;
        case 1:
            (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, arg2**(int*)(lVar3 + 60),
                                                    (63 - arg3) * *(int*)(lVar3 + 60));
            return;
        case 2:
            iVar1 = *(int*)(lVar3 + 60);
            iVar2 = arg2 * iVar1 + iVar1 - 1;
            iVar1 = (63 - arg3) * iVar1;
            lVar3 = *m_toolkit2D;
            break;
        case 3:
            iVar1 = *(int*)(lVar3 + 60);
            (**(void (**)(...))(*m_toolkit2D + 56))(m_toolkit2D, arg2* iVar1, iVar1 + (63 - arg3) * iVar1 - 1);
        default:
            return;
        }
        (**(void (**)(...))(lVar3 + 72))(m_toolkit2D, iVar2, iVar1);
    }

    // 0x1002148f0
    void RenderedMapSquare::RenderMapElement(MapElement& mapElement, int arg2, int arg3, float arg4,
                                             graphics::Pix2D& pix2D) {
        auto mapElementType =
            configdecoder::MapElementType::List((**(void (**)(...))(mapElement.field_0 + 8))(mapElement));
        RenderMapElementSprite(*mapElementType, arg2, arg3, pix2D);
        RenderMapElementTextLabel(mapElement, *mapElementType, arg2, arg3, arg4, pix2D);
    }

    // 0x100214970
    void RenderedMapSquare::RenderMapElementSprite(const configdecoder::MapElementType& mapElementType, int arg2,
                                                   int arg3, graphics::Pix2D& pix2D) {
        int iVar2;
        int iVar3;
        Pix32* pPVar4;
        uint64_t uVar5;
        RenderedMapSquare* pRVar6;
        ReturnValue local_48;

        local_48.GetSprite(mapElementType, false);
        if (local_48 != nullptr) {
            pRVar6 = &local_48;
            pPVar4 = (Pix32*)**pRVar6;
            iVar2 = GetHorizontalOffset(pRVar6, pPVar4, mapElementType.field_376);
            pRVar6 = &local_48;
            pPVar4 = (Pix32*)**pRVar6;
            iVar3 = GetVerticalOffset(pRVar6, pPVar4, mapElementType.field_380);
            uVar5 = *local_48;
            (**(void (**)(...))(pix2D.field_0 + 176))(pix2D, uVar5, iVar2 + arg2, iVar3 + arg3);
        }
    }

    // 0x100214a40
    void RenderedMapSquare::RenderMapElementTextLabel(MapElement& mapElement,
                                                      const configdecoder::MapElementType& mapElementType, int arg3,
                                                      int arg4, float arg5, graphics::Pix2D& pix2D) {
        int arg4_00;
        unsigned int uVar1;
        eastl::string* str;
        Logger* this_00;
        uint64_t uVar3;
        long lVar4;
        int* piVar5;
        uint8_t auVar6[16];
        obj_iterator local_78;
        PixfontGeneric* local_58;
        eastl local_50;
        int local_38;

        float local_34 = arg5;
        if ((**(void (**)(...))(mapElement.field_0 + 24))(mapElement)) {
            str = (eastl::string*)(**(void (**)(...))(mapElement.field_0 + 16))(mapElement);
            if (((str + 40))->ShouldRenderAtScale(local_34)) {
                local_38 = ((str + 40))->GetSize();
                local_50._0_16_ = field_152->find(local_38);
                &local_78 = (obj_iterator[16])field_152->end();
                if (!(local_50 == local_78)) {
                    auVar6 = field_152->find(local_38);
                    local_50._0_16_ = auVar6;
                    lVar4 = local_50.HeapBeginPtr();
                    local_58 = (PixfontGeneric*)(*((lVar4 + 8))).operator->();
                    arg4_00 = *(int*)(str + 32);
                    local_34 = *(float*)(str + 36);
                    uVar1 = mapElementType.field_48;
                    piVar5 = (int*)(*((lVar4 + 8))).operator->();
                    local_58->DrawStringMultiline(*str, arg3 - arg4_00 / 2, arg4, arg4_00, (int)local_34,
                                                  uVar1 | 4278190080, 0, 1, 0, *piVar5 / 2, pix2D);
                } else {
                    this_00 = logger::default_logger();
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_00->Log(true, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                 "rs2lib/worldmap/RenderedMapSquare.cpp",
                                 921, "Skipping label because font size is wrong: %s", uVar3);
                }
            }
        }
    }

    // 0x100214be0
    int RenderedMapSquare::GetHorizontalOffset(graphics::Pix32& pix32,
                                               game::MapElementHorizontalAlign mapElementHorizontalAlign) {
        int iVar1 = 0;
        if (mapElementHorizontalAlign != 0) {
            if (mapElementHorizontalAlign == 1) {
                return -((int)pix32.field_24 / 2);
            }
            iVar1 = -pix32.field_24;
        }
        return iVar1;
    }

    // 0x100214c10
    int RenderedMapSquare::GetVerticalOffset(graphics::Pix32& pix32,
                                             game::MapElementVerticalAlign mapElementVerticalAlign) {
        int iVar1 = 0;
        if (mapElementVerticalAlign != 0) {
            if (mapElementVerticalAlign == 1) {
                return -((int)pix32.field_28 / 2);
            }
            iVar1 = -pix32.field_28;
        }
        return iVar1;
    }

    // 0x100214c60
    MapElementType* RenderedMapSquare::GetMeltype(const shared_ptr<configdecoder::LocType>& locType) {
        LocType locType;

        long lVar2 = locType.operator->();
        if (!(((lVar2 + 488))->empty())) {
            locType = (LocType*)locType.operator->();
            if (!((locType.GetMultiLoc())->operator_cast_to_bool())) {
                return nullptr;
            }
        }
        lVar2 = locType.operator->();
        if (*(int*)(lVar2 + 432) == -1) {
            return nullptr;
        }
        lVar2 = locType.operator->();
        return configdecoder::MapElementType::List(*(int*)(lVar2 + 432));
    }

} // namespace jag::oldscape::rs2lib::worldmap
