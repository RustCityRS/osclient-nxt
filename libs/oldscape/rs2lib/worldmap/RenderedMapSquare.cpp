// libs/oldscape/rs2lib/worldmap/RenderedMapSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "RenderedMapSquare.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100fd5b80, 3336 bytes, __common; set at startup by ___cxx_global_var_init.128
    LRUCache<graphics::Pix32> RenderedMapSquare::m_renderedMapSquareSpriteCache =
        LRUCache<graphics::Pix32>(37748736, "mapsqLRU");

    // 0x100fd6888, 8 bytes, __common; set at startup by ___cxx_global_var_init.132
    RenderedMapSquare::m_toolkit = this;

    // 0x100fd6890, 16 bytes, __common; set at startup by ___cxx_global_var_init.133
    RenderedMapSquare::m_toolkit2D = (**(code**)*RenderedMapSquare::m_toolkit)();

    // 0x10020d5c0, 672 bytes, placed by class name and debug map
    // RenderedMapSquare::CreateMapTextLabelForMapElement(configdecoder::MapElementType const&) const
    MapTextLabel* RenderedMapSquare::CreateMapTextLabelForMapElement(MapElementType* param_1) {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        PixfontGeneric* pPVar8;
        int* piVar9;
        basic_string* pbVar10;
        MapTextLabel* pMVar11;
        ulong uVar12;
        undefined1 auVar13[16];
        eastl::string local_a0[32];
        ulong local_80;
        hashtable_iterator_base local_78[24];
        shared_ptr<jstring::PixfontGeneric>* local_60;
        eastl local_58[28];
        int local_3c;
        MapLabelSize local_38;

        puVar1 = &param_1->field_16;
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if ((cVar2 == '\0') && (cVar2 = field_152->empty(), cVar2 == '\0')) {
            local_38.field_0 = (MapLabelSizeImpl*)((ulong)local_38.field_0._4_4_ << 32);
            local_58._0_16_ = (field_152, (int*)&local_38)->find();
            local_78._0_16_ = field_152->end();
            bVar3 = eastl::operator==(local_58, local_78, local_78._8_8_);
            if (!bVar3) {
                local_38.field_0 = (MapLabelSizeImpl*)MapLabelSize::FromSize(param_1->field_56);
                cVar2 = local_38.Equals((MapLabelSize*)&MapLabelSize::NULL_SIZE);
                if (cVar2 == '\0') {
                    local_3c = local_38.GetSize();
                    auVar13 = (field_152, &local_3c)->find();
                    local_58._0_16_ = auVar13;
                    auVar13 = field_152->end();
                    local_78._0_16_ = auVar13;
                    bVar3 = eastl::operator==(local_58, local_78, auVar13._8_8_);
                    if (!bVar3) {
                        auVar13 = (field_152, &local_3c)->find();
                        local_58._0_16_ = auVar13;
                        lVar7 = local_58->HeapBeginPtr();
                        local_60 = (shared_ptr<jstring::PixfontGeneric>*)(lVar7 + 8);
                        pPVar8 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_60);
                        uVar4 = pPVar8->PredictLinesMultiline(puVar1, 1000000);
                        new (local_58) Array<eastl::string, eastl::allocator>();
                        local_58->set_max_size((long)(int)uVar4, 3);
                        new (local_78) Array<int, eastl::allocator>();
                        pPVar8 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_60);
                        pPVar8->SplitString(puVar1, local_78, local_58);
                        iVar5 = local_58->end();
                        piVar9 = (int*)shared_ptr<jstring::PixfontGeneric>::operator->(local_60);
                        local_80 = (ulong)(uint)(iVar5 * *piVar9);
                        if ((int)uVar4 < 1) {
                            iVar5 = 0;
                        } else {
                            uVar12 = 0;
                            iVar5 = 0;
                            do {
                                pPVar8 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_60);
                                pbVar10 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                    (Array<eastl::string, eastl::allocator>*)local_58, uVar12);
                                iVar6 = pPVar8->StringWid(pbVar10);
                                if (iVar5 < iVar6) {
                                    iVar5 = iVar6;
                                }
                                uVar12 = uVar12 + 1;
                            } while (uVar4 != uVar12);
                        }
                        pMVar11 = operator_new(48);
                        eastl::string::basic_string(local_a0, (basic_string*)puVar1);
                        MapTextLabel::MapTextLabel(pMVar11, local_a0, iVar5,
                                                   (int)(((uint)(local_80 >> 31) & 1) + (int)local_80) >> 1, &local_38);
                        eastl::string::~basic_string(local_a0);
                        local_78->~Array();
                        local_58->~Array();
                        return pMVar11;
                    }
                }
            }
        }
        return (MapTextLabel*)0;
    }

    // 0x100210bc0, 32 bytes, placed by class name
    // RenderedMapSquare::ResetCaches()
    void RenderedMapSquare::ResetCaches() {
        m_renderedMapSquareSpriteCache.Reset();
    }

    // 0x100210be0, 32 bytes, placed by class name
    // RenderedMapSquare::CleanCaches()
    void RenderedMapSquare::CleanCaches() {
        m_renderedMapSquareSpriteCache.Clean(5);
    }

    // 0x100210c90, 16 bytes, placed by class name
    // RenderedMapSquare::RemoveCacheSoftReferences()
    void RenderedMapSquare::RemoveCacheSoftReferences() {}

    // 0x100210ca0, 208 bytes, base-object constructor, placed by class name
    // RenderedMapSquare::RenderedMapSquare(int, int, int, eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&)
    void RenderedMapSquare::RenderedMapSquare(int param_1, int param_2, int param_3, hash_map* param_4) {
        allocator local_50[8];
        undefined1* local_40;
        undefined1* local_38;

        local_40 = field_8;
        new (local_40) shared_ptr<WorldmapAreaMetadata>(0);
        local_38 = &field_24;
        new (local_38) eastl::list<shared_ptr<MapZoneData>, eastl::allocator>();
        new (&field_64) eastl::list<shared_ptr<MapElement>, eastl::allocator>();
        eastl::allocator::allocator(local_50, "EASTL hash_map");
        new (&field_96, local_50) eastl::hash_map<int, shared_ptr<MapElement>, eastl::hash<int>, eastl::equal_to<int>,
                                                  eastl::allocator, false>();
        field_152 = param_4;
        field_0 = param_1;
        field_4 = param_2;
        field_56 = param_3 | 4278190080;
    }

    // 0x100210d80, 16 bytes, complete-object constructor, placed by class name
    // RenderedMapSquare::RenderedMapSquare(int, int, int, eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&): jumps straight to the base-object constructor

    // 0x100210d90, 160 bytes, placed by class name
    // RenderedMapSquare::RenderToScreen(int, int, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderToScreen(int param_1, int param_2, int param_3, Pix2D* param_4) {
        int iVar1;
        shared_ptr* this_00;
        undefined8 uVar3;

        this_00 = (shared_ptr*)GetCachedRenderedMapSquareSprite(field_0, field_4, field_60);
        if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
            iVar1 = field_60;
            uVar3 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)this_00);
            if (iVar1 * 64 == param_3) {
                (**(code**)(param_4->field_0 + 168))(param_4, uVar3, param_1, param_2);
            } else {
                (**(code**)(param_4->field_0 + 208))(param_4, uVar3, param_1, param_2, param_3, param_3);
            }
        }
    }

    // 0x100210e30, 32 bytes, placed by class name
    // RenderedMapSquare::GetCachedRenderedMapSquareSprite(int, int, int)
    void RenderedMapSquare::GetCachedRenderedMapSquareSprite(int param_1, int param_2, int param_3) {
        ulonglong uVar1;

        uVar1 = GetMapSquarePixelStrideHash(param_1, param_2, param_3);
        m_renderedMapSquareSpriteCache.Find(uVar1);
    }

    // 0x100210e50, 64 bytes, placed by class name
    // RenderedMapSquare::ExtractSquareData(shared_ptr<MapSquareData> const&, eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>&)
    void RenderedMapSquare::ExtractSquareData(shared_ptr* param_1, list* param_2) {
        (&field_96)->clear();
        shared_ptr<MapSquareData>::operator=((shared_ptr<MapSquareData>*)field_8, param_1);
        ExtractStaticMapElements(this, param_2);
    }

    // 0x100210ed0, 496 bytes, placed by class name
    // RenderedMapSquare::ExtractStaticMapElements(eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>&)
    void RenderedMapSquare::ExtractStaticMapElements(list* param_1) {
        bool bVar1;
        int iVar2;
        shared_ptr<StaticMapElement>* psVar3;
        StaticMapElement* this_00;
        long lVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        shared_ptr local_80;
        MapTextLabel* local_70;
        CoordGrid* local_68;
        CoordGrid* local_60;
        list<shared_ptr<MapElement>, eastl::allocator>* local_58;
        list* local_50;
        shared_ptr local_48;
        Vector2T<int> local_38[8];

        jag::math::Vector2T<int>::Vector2T(local_38);
        local_48.begin();
        local_38[0] = (Vector2T<int>)local_48._0_1_;
        local_38[1] = (Vector2T<int>)local_48._1_1_;
        local_38[2] = (Vector2T<int>)local_48._2_1_;
        local_38[3] = (Vector2T<int>)local_48._3_1_;
        local_38[4] = (Vector2T<int>)local_48._4_1_;
        local_38[5] = (Vector2T<int>)local_48._5_1_;
        local_38[6] = (Vector2T<int>)local_48._6_1_;
        local_38[7] = (Vector2T<int>)local_48._7_1_;
        local_48.end();
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)&local_48, extraout_RDX);
        if (bVar1) {
            local_58 = (list<shared_ptr<MapElement>, eastl::allocator>*)&field_64;
            local_50 = param_1;
            do {
                psVar3 = (shared_ptr<StaticMapElement>*)
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                this_00 = (StaticMapElement*)shared_ptr<StaticMapElement>::operator->(psVar3);
                iVar2 = this_00->GetMelTypeId();
                lVar4 = configdecoder::MapElementType::List(iVar2);
                if (*(char*)(lVar4 + 68) != '\0') {
                    psVar3 = (shared_ptr<StaticMapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                    lVar4 = shared_ptr<StaticMapElement>::operator->(psVar3);
                    iVar2 = ((lVar4 + 8))->GetMapSquareX();
                    if (iVar2 == field_0) {
                        psVar3 = (shared_ptr<StaticMapElement>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                        lVar4 = shared_ptr<StaticMapElement>::operator->(psVar3);
                        iVar2 = ((lVar4 + 8))->GetMapSquareZ();
                        if (iVar2 == field_4) {
                            psVar3 = (shared_ptr<StaticMapElement>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                            lVar4 = shared_ptr<StaticMapElement>::operator->(psVar3);
                            local_68 = (CoordGrid*)(lVar4 + 8);
                            psVar3 = (shared_ptr<StaticMapElement>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                            lVar4 = shared_ptr<StaticMapElement>::operator->(psVar3);
                            local_60 = (CoordGrid*)(lVar4 + 8);
                            psVar3 = (shared_ptr<StaticMapElement>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                            lVar4 = shared_ptr<StaticMapElement>::operator->(psVar3);
                            psVar3 = (shared_ptr<StaticMapElement>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                            lVar5 = shared_ptr<StaticMapElement>::operator->(psVar3);
                            local_70 = (MapTextLabel*)CreateMapTextLabelForMapElement(this, *(int*)(lVar5 + 44));
                            make_shared<StaticMapElement, CoordGrid_const&, CoordGrid_const&, int const&,
                                        MapTextLabel*>((jag*)&local_80, local_68, local_60, (int*)(lVar4 + 44),
                                                       &local_70);
                            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                                (shared_ptr<RSevenDebugPresetProvider>*)&local_48, &local_80);
                            local_80.~shared_ptr();
                            eastl::list<shared_ptr<MapElement>, eastl::allocator>::push_back(local_58, &local_48);
                            local_48.~shared_ptr();
                        }
                    }
                }
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_48,
                    (int)(eastl*)local_38);
                local_48.end();
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)&local_48, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x1002110c0, 224 bytes, placed by class name
    // RenderedMapSquare::ExtractZoneData(eastl::list<shared_ptr<MapZoneData>, eastl::allocator>&, eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>&)
    void RenderedMapSquare::ExtractZoneData(list* param_1, list* param_2) {
        SoundInstance* this_00;
        PlayerGroup* this_01;
        bool bVar1;
        int iVar2;
        shared_ptr* this_02;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_48[8];
        list<console::Line, eastl::allocator> local_40[8];

        (&field_96)->clear();
        eastl::list<console::Line, eastl::allocator>::begin(local_48);
        eastl::list<console::Line, eastl::allocator>::end(local_40);
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar1) {
            do {
                this_02 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                this_00 = (SoundInstance*)shared_ptr<MapZoneData>::operator->((shared_ptr<MapZoneData>*)this_02);
                iVar2 = this_00->GetSoundShape();
                if (iVar2 == field_0) {
                    this_01 = (PlayerGroup*)shared_ptr<MapZoneData>::operator->((shared_ptr<MapZoneData>*)this_02);
                    iVar2 = this_01->GetUpdateNumber();
                    if (iVar2 == field_4) {
                        (&field_24, this_02)->push_back();
                    }
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar1);
        }
        ExtractStaticMapElements(this, param_2);
    }

    // 0x100211230, 176 bytes, placed by class name
    // RenderedMapSquare::RederiveMapElements()
    void RenderedMapSquare::RederiveMapElements() {
        long lVar1;
        bool bVar2;
        undefined8* puVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined8 local_30;
        undefined8 uStack_28;

        new (&local_48) eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(0, 0);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = local_30;
        uStack_40 = uStack_28;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_30, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = local_48.HeapBeginPtr();
                puVar3 = (undefined8*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)(lVar1 + 8));
                (**(code**)*puVar3)(puVar3);
                eastl::hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>*)&local_30,
                    (int)(Layout*)&local_48);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_30, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x100211350, 624 bytes, placed by class name
    // RenderedMapSquare::PrerenderSquare(int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> >&, shared_ptr<Array<graphics::Pix8, eastl::allocator> >&, jagex3::Js5&, jagex3::Js5&)
    /* RenderedMapSquare::PrerenderSquare(int,
   std::unique_ptr<OverlayShapes,
   std::default_delete<OverlayShapes> >&,
   shared_ptr<Array<graphics::Pix8, eastl::allocator> >&,
   jagex3::Js5&, jagex3::Js5&) */

    void RenderedMapSquare::PrerenderSquare(int param_1, unique_ptr* param_2, shared_ptr* param_3, Js5* param_4,
                                            Js5* param_5) {
        undefined1* this_00;
        int iVar1;
        OffscreenSoftwarePixToolkit* this_01;
        bool bVar2;
        char cVar3;
        byte bVar4;
        shared_ptr* psVar5;
        long lVar6;
        shared_ptr<MapZoneData>* this_02;
        undefined* puVar7;
        PacketJ* pPVar8;
        Pix32* pPVar9;
        Array* pAVar10;
        BlendedGround* pBVar11;
        ErrorCapture local_3c0[17];
        shared_ptr local_70;
        shared_ptr local_60;
        unique_ptr* local_50;
        shared_ptr* local_48;
        int local_40;
        int local_3c;
        unique_ptr<BlendedGround, std::default_delete<BlendedGround>> local_38[8];

        field_60 = param_1;
        this_00 = field_8;
        local_50 = param_2;
        local_48 = param_3;
        bVar2 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if ((bVar2) && (cVar3 = (&field_24)->empty(), cVar3 != '\0')) {
            return;
        }
        psVar5 = (shared_ptr*)GetCachedRenderedMapSquareSprite(field_0, field_4, param_1);
        bVar2 = operator!=(psVar5, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            ErrorCapture::ErrorCapture(local_3c0, true);
            bVar4 = UnpackAreaGeography(this, param_4, local_3c0);
            local_3c0->IsRaised();
            new (&local_70) shared_ptr<WorldmapAreaMetadata>(param_4);
            bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if (bVar2) {
                lVar6 = shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)this_00);
            } else {
                local_60.begin();
                this_02 = (shared_ptr<MapZoneData>*)
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
                lVar6 = shared_ptr<MapZoneData>::operator->(this_02);
            }
            iVar1 = *(int*)(lVar6 + 128);
            puVar7 = (undefined*)param_5->RequestGroupDownload(iVar1);
            if ((bVar4 & puVar7 == DataStatus::READY) != 0) {
                param_5->GetFile(&local_70, iVar1);
                pPVar8 = (PacketJ*)local_70.end();
                local_38->FromPNG(pPVar8);
                local_40 = field_60 << 6;
                local_3c = local_40;
                make_shared<graphics::Pix32, int&, int&>((jag*)&local_60, &local_40, &local_3c);
                this_01 = m_toolkit;
                pPVar9 = (Pix32*)shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)&local_60);
                this_01->SetDestination(pPVar9);
                bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                if (bVar2) {
                    pAVar10 = (Array*)shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)local_48);
                    pBVar11 =
                        (BlendedGround*)std::unique_ptr<BlendedGround, std::default_delete<BlendedGround>>::operator*(
                            local_38);
                    RenderSquare(this, local_50, pAVar10, pBVar11);
                } else {
                    pAVar10 = (Array*)shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)local_48);
                    pBVar11 =
                        (BlendedGround*)std::unique_ptr<BlendedGround, std::default_delete<BlendedGround>>::operator*(
                            local_38);
                    RenderZones(this, local_50, pAVar10, pBVar11);
                }
                CacheRenderedMapSquareSprite(&local_60, field_0, field_4, field_60);
                ResetAreaGeography(this);
                local_60.~shared_ptr();
                std::unique_ptr<BlendedGround, std::default_delete<BlendedGround>>::~unique_ptr(local_38);
            }
            local_70.~shared_ptr();
            local_3c0->~LanguageMessage();
        }
    }

    // 0x1002115c0, 672 bytes, placed by class name
    // RenderedMapSquare::UnpackAreaGeography(jagex3::Js5&, ErrorCapture&)
    ulong RenderedMapSquare::UnpackAreaGeography(Js5* param_1, ErrorCapture* param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        PackableArea* pPVar6;
        char* pcVar7;
        shared_ptr<MapZoneData>* psVar8;
        MapZoneData* pMVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        undefined7 uVar11;
        ulong uVar10;
        undefined8 local_40;
        undefined8 local_38;

        (&field_96)->clear();
        this_00 = field_8;
        bVar1 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pPVar6 = (PackableArea*)shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)this_00);
            pPVar6->UnpackAreaGeography(param_1, param_2);
            cVar2 = param_2->IsRaised();
            if (cVar2 != '\0') {
                param_2->second();
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "worldmap/RenderedMapSquare.cpp",
                                485, pcVar7);
            }
            pPVar6 = (PackableArea*)shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)this_00);
            cVar2 = pPVar6->HasGeography();
            if (cVar2 == '\0') {
            LAB_100211845:
                uVar10 = 0;
            } else {
                pPVar6 = (PackableArea*)shared_ptr<MapSquareData>::operator*((shared_ptr<MapSquareData>*)this_00);
                ExtractLocMapElements(this, 0, 0, 64, 64, pPVar6);
                uVar10 = CONCAT71((int7)((ulong)this >> 8), 1);
            }
        } else {
            new (&local_40) jag::math::Vector2T<int>();
            local_38.begin();
            local_40 = local_38;
            local_38.end();
            bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX);
            uVar11 = (undefined7)((ulong)&field_24 >> 8);
            uVar10 = CONCAT71(uVar11, 1);
            if (bVar1) {
                uVar10 = CONCAT71(uVar11, 1);
                do {
                    psVar8 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    pPVar6 = (PackableArea*)shared_ptr<MapZoneData>::operator->(psVar8);
                    pPVar6->UnpackAreaGeography(param_1, param_2);
                    cVar2 = param_2->IsRaised();
                    if (cVar2 != '\0')
                        goto LAB_100211845;
                    psVar8 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    pPVar6 = (PackableArea*)shared_ptr<MapZoneData>::operator->(psVar8);
                    bVar3 = pPVar6->HasGeography();
                    uVar10 = CONCAT71((int7)(uVar10 >> 8), (byte)uVar10 & bVar3);
                    eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                        (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_38,
                        (int)(ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    local_38.end();
                    bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX_00);
                } while (bVar1);
            }
            if ((char)uVar10 != '\0') {
                local_38.begin();
                local_40 = local_38;
                local_38.end();
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX_01);
                if (bVar1) {
                    do {
                        psVar8 = (shared_ptr<MapZoneData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                        pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                        iVar4 = pMVar9->GetTargetZoneX();
                        psVar8 = (shared_ptr<MapZoneData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                        pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                        iVar5 = pMVar9->GetTargetZoneZ();
                        psVar8 = (shared_ptr<MapZoneData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                        pPVar6 = (PackableArea*)shared_ptr<MapZoneData>::operator*(psVar8);
                        ExtractLocMapElements(this, iVar4 * 8, iVar5 * 8, 8, 8, pPVar6);
                        eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::
                        operator++(
                            (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_38,
                            (int)(ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                        local_38.end();
                        bVar1 =
                            eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX_02);
                    } while (bVar1);
                }
            }
        }
        return uVar10 & 4294967295;
    }

    // 0x100211970, 240 bytes, placed by class name
    // RenderedMapSquare::RenderSquare(std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> > const&, Array<graphics::Pix8, eastl::allocator>&, BlendedGround&)
    /* RenderedMapSquare::RenderSquare(std::unique_ptr<OverlayShapes,
   std::default_delete<OverlayShapes> > const&,
   Array<graphics::Pix8, eastl::allocator>&,
   BlendedGround&) */

    void RenderedMapSquare::RenderSquare(unique_ptr* param_1, Array* param_2, BlendedGround* param_3) {
        undefined1* this_00;
        PackableArea* pPVar1;
        unique_ptr* puVar2;
        int iVar3;
        int iVar4;

        this_00 = field_8;
        iVar4 = 0;
        do {
            iVar3 = 0;
            do {
                pPVar1 = (PackableArea*)shared_ptr<MapSquareData>::operator*((shared_ptr<MapSquareData>*)this_00);
                RenderGround(this, iVar4, iVar3, pPVar1, param_1, param_3);
                pPVar1 = (PackableArea*)shared_ptr<MapSquareData>::operator*((shared_ptr<MapSquareData>*)this_00);
                puVar2 = param_1;
                RenderAdditionalOverlays(this, iVar4, iVar3, pPVar1, param_1);
                iVar3 = iVar3 + 1;
            } while (iVar3 != 64);
            iVar4 = iVar4 + 1;
        } while (iVar4 != 64);
        iVar4 = 0;
        do {
            iVar3 = 0;
            do {
                pPVar1 = (PackableArea*)shared_ptr<MapSquareData>::operator*((shared_ptr<MapSquareData>*)this_00);
                RenderTile(this, iVar4, iVar3, pPVar1, puVar2, param_2);
                iVar3 = iVar3 + 1;
            } while (iVar3 != 64);
            iVar4 = iVar4 + 1;
        } while (iVar4 != 64);
    }

    // 0x100211a70, 1152 bytes, placed by class name
    // RenderedMapSquare::RenderZones(std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> > const&, Array<graphics::Pix8, eastl::allocator>&, BlendedGround&)
    /* RenderedMapSquare::RenderZones(std::unique_ptr<OverlayShapes,
   std::default_delete<OverlayShapes> > const&,
   Array<graphics::Pix8, eastl::allocator>&,
   BlendedGround&) */

    void RenderedMapSquare::RenderZones(unique_ptr* param_1, Array* param_2, BlendedGround* param_3) {
        uint uVar1;
        RenderedMapSquare* pRVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        shared_ptr<MapZoneData>* psVar8;
        MapZoneData* pMVar9;
        undefined1* puVar10;
        PackableArea* pPVar11;
        array<bool, 64ul>* this_00;
        char* pcVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* phVar13;
        ulong uVar14;
        ulong uVar15;
        unique_ptr* in_R8;
        ulong uVar16;
        array<std::array<bool, 64ul>, 64ul> local_1078[4096];
        array<bool, 64ul>* local_78;
        ulong local_58;
        undefined1* local_48;
        undefined8 local_40;
        undefined8 local_38;

        ___bzero(local_1078, 4096);
        new (&local_38) jag::math::Vector2T<int>();
        local_40.begin();
        local_38 = local_40;
        local_48 = &field_24;
        local_40.end();
        bVar4 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, extraout_RDX);
        if (bVar4) {
            do {
                psVar8 = (shared_ptr<MapZoneData>*)
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                iVar5 = pMVar9->GetTargetZoneX();
                psVar8 = (shared_ptr<MapZoneData>*)
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                iVar6 = pMVar9->GetTargetZoneX();
                if (iVar5 * 8 < iVar6 * 8 + 8) {
                    uVar14 = (ulong)(iVar5 * 8);
                    do {
                        psVar8 = (shared_ptr<MapZoneData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                        pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                        iVar5 = pMVar9->GetTargetZoneZ();
                        psVar8 = (shared_ptr<MapZoneData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                        pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                        iVar6 = pMVar9->GetTargetZoneZ();
                        pRVar3 = (RenderedMapSquare*)this;
                        uVar15 = uVar14;
                        if (iVar5 * 8 < iVar6 * 8 + 8) {
                            local_78 = (array<bool, 64ul>*)std::array<std::array<bool, 64ul>, 64ul>::operator[](
                                local_1078, uVar14);
                            uVar16 = (long)(iVar5 * 8);
                            local_58 = uVar14;
                            do {
                                uVar14 = local_58;
                                puVar10 = (undefined1*)std::array<bool, 64ul>::operator[](local_78, uVar16);
                                *puVar10 = 1;
                                psVar8 = (shared_ptr<MapZoneData>*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                                pPVar11 = (PackableArea*)shared_ptr<MapZoneData>::operator*(psVar8);
                                in_R8 = param_1;
                                RenderGround(pRVar3, (int)uVar14, (int)uVar16, pPVar11, param_1, param_3);
                                psVar8 = (shared_ptr<MapZoneData>*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                                pPVar11 = (PackableArea*)shared_ptr<MapZoneData>::operator*(psVar8);
                                RenderAdditionalOverlays(pRVar3, (int)local_58, (int)uVar16, pPVar11, in_R8);
                                psVar8 = (shared_ptr<MapZoneData>*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                                pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                                iVar5 = pMVar9->GetTargetZoneZ();
                                bVar4 = (long)uVar16 < (long)(iVar5 * 8 + 7);
                                uVar15 = local_58;
                                uVar16 = uVar16 + 1;
                            } while (bVar4);
                        }
                        uVar14 = uVar15 + 1;
                        psVar8 = (shared_ptr<MapZoneData>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                        pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                        iVar5 = pMVar9->GetTargetZoneX();
                    } while ((long)uVar15 < (long)(iVar5 * 8 + 7));
                }
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_40,
                    (int)(ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                local_40.end();
                bVar4 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, extraout_RDX_00);
            } while (bVar4);
        }
        uVar14 = 0;
        do {
            this_00 = (array<bool, 64ul>*)std::array<std::array<bool, 64ul>, 64ul>::operator[](local_1078, uVar14);
            iVar5 = 63;
            uVar15 = 0;
            do {
                pcVar12 = (char*)std::array<bool, 64ul>::operator[](this_00, uVar15);
                if (*pcVar12 == '\0') {
                    uVar1 = ((RenderedMapSquare*)this)->field_60;
                    in_R8 = (unique_ptr*)(ulong)uVar1;
                    (**(code**)(*m_toolkit2D + 32))(m_toolkit2D, (int)uVar14* uVar1, uVar1* iVar5, uVar1, in_R8,
                                                    ((RenderedMapSquare*)this)->field_56);
                }
                uVar15 = uVar15 + 1;
                iVar5 = iVar5 + -1;
            } while (uVar15 != 64);
            uVar14 = uVar14 + 1;
        } while (uVar14 != 64);
        local_40.begin();
        local_38 = local_40;
        local_40.end();
        phVar13 = extraout_RDX_01;
        while (bVar4 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, phVar13), bVar4) {
            psVar8 =
                (shared_ptr<MapZoneData>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
            iVar6 = pMVar9->GetTargetZoneX();
            psVar8 =
                (shared_ptr<MapZoneData>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
            iVar7 = pMVar9->GetTargetZoneX();
            iVar5 = iVar6 * 8;
            if (iVar6 * 8 < iVar7 * 8 + 8) {
                do {
                    psVar8 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                    pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                    iVar6 = pMVar9->GetTargetZoneZ();
                    iVar6 = iVar6 * 8;
                    psVar8 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                    pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                    iVar7 = pMVar9->GetTargetZoneZ();
                    pRVar3 = (RenderedMapSquare*)this;
                    if (iVar6 < iVar7 * 8 + 8) {
                        do {
                            psVar8 = (shared_ptr<MapZoneData>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                            pPVar11 = (PackableArea*)shared_ptr<MapZoneData>::operator*(psVar8);
                            RenderTile(pRVar3, iVar5, iVar6, pPVar11, in_R8, param_2);
                            psVar8 = (shared_ptr<MapZoneData>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                            pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                            iVar7 = pMVar9->GetTargetZoneZ();
                            bVar4 = iVar6 < iVar7 * 8 + 7;
                            iVar6 = iVar6 + 1;
                        } while (bVar4);
                    }
                    psVar8 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                    pMVar9 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar8);
                    iVar6 = pMVar9->GetTargetZoneX();
                    bVar4 = iVar5 < iVar6 * 8 + 7;
                    iVar5 = iVar5 + 1;
                } while (bVar4);
            }
            eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_40,
                (int)&local_38);
            local_40.end();
            phVar13 = extraout_RDX_02;
        }
    }

    // 0x100211ef0, 112 bytes, placed by class name
    // RenderedMapSquare::CacheRenderedMapSquareSprite(shared_ptr<graphics::Pix32> const&, int, int, int)
    void RenderedMapSquare::CacheRenderedMapSquareSprite(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        Layout* this;
        ulonglong uVar2;

        this = (Layout*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
        iVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        uVar2 = GetMapSquarePixelStrideHash(param_2, param_3, param_4);
        m_renderedMapSquareSpriteCache.Put(param_1, iVar1 * 4, uVar2);
    }

    // 0x100211f60, 224 bytes, placed by class name
    // RenderedMapSquare::ResetAreaGeography()
    void RenderedMapSquare::ResetAreaGeography() {
        bool bVar1;
        PackableArea* pPVar2;
        shared_ptr<MapZoneData>* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_30;
        undefined8 local_28;

        bVar1 = operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pPVar2 = (PackableArea*)shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)field_8);
            pPVar2->ResetAreaGeography();
        } else {
            new (&local_30) jag::math::Vector2T<int>();
            local_28.begin();
            local_30 = local_28;
            local_28.end();
            bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, extraout_RDX);
            if (bVar1) {
                do {
                    this_00 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
                    pPVar2 = (PackableArea*)shared_ptr<MapZoneData>::operator->(this_00);
                    pPVar2->ResetAreaGeography();
                    eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                        (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_28,
                        (int)(ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
                    local_28.end();
                    bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, extraout_RDX_00);
                } while (bVar1);
            }
        }
    }

    // 0x100212040, 96 bytes, placed by class name
    // RenderedMapSquare::RenderMapElements(int, int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, graphics::Pix2D&)
    void RenderedMapSquare::RenderMapElements(int param_1, int param_2, int param_3, hash_set* param_4,
                                              Pix2D* param_5) {
        RenderLocMapElements(this, param_1, param_2, param_4, param_3, param_5);
        RenderStaticMapElements(this, param_1, param_2, param_4, param_3, param_5);
    }

    // 0x1002120a0, 528 bytes, placed by class name
    // RenderedMapSquare::RenderLocMapElements(int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderLocMapElements(int param_1, int param_2, hash_set* param_3, int param_4,
                                                 Pix2D* param_5) {
        bool bVar1;
        int iVar3;
        int iVar4;
        int* piVar5;
        long lVar6;
        MapElement* this_01;
        MapElementType* this_02;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar7;
        undefined1 auVar8[16];
        undefined1 local_a8[16];
        hashtable_iterator_base local_98[16];
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_88[24];
        undefined1* local_70;
        hashtable_iterator_base local_50[16];
        int local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_34 = (float)param_1;
        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
            local_88, (hash_node*)0, (hash_node**)0);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_88[0] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[0];
        local_88[1] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[1];
        local_88[2] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[2];
        local_88[3] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[3];
        local_88[4] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[4];
        local_88[5] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[5];
        local_88[6] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[6];
        local_88[7] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[7];
        local_88[8] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[8];
        local_88[9] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[9];
        local_88[10] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[10];
        local_88[11] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[11];
        local_88[12] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[12];
        local_88[13] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[13];
        local_88[14] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[14];
        local_88[15] = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>)local_50[15];
        local_70 = &field_96;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_88, local_50, extraout_RDX);
        if (bVar1) {
            local_38 = (float)param_4 * 0.015625;
            local_3c = (float)param_4 * -0.0078125;
            local_34 = (float)(int)local_34 + local_3c;
            local_3c = (float)(param_2 + param_4) + local_3c;
            do {
                piVar5 = (int*)local_88->HeapBeginPtr();
                new (local_a8) rs2lib::CoordGrid(*piVar5);
                iVar3 = local_a8->GetZ();
                iVar4 = local_a8->GetPos();
                lVar6 = local_88->HeapBeginPtr();
                this_01 = (MapElement*)shared_ptr<MapElement>::operator*((shared_ptr<MapElement>*)(lVar6 + 8));
                if (this_01->IsValid() != '\0') {
                    iVar7 = (int)((float)iVar3 * local_38 + local_34);
                    iVar4 = (int)(local_3c - (float)iVar4 * local_38);
                    this_01->field_32 = iVar7;
                    this_01->field_36 = iVar4;
                    iVar3 = (**(code**)(this_01->field_0 + 8))(this_01);
                    this_02 = (MapElementType*)configdecoder::MapElementType::List(iVar3);
                    local_40 = this_02->GetID();
                    auVar8 = param_3->find(&local_40);
                    local_50 = (hashtable_iterator_base[16])auVar8;
                    auVar8 = param_3->end();
                    local_98 = (hashtable_iterator_base[16])auVar8;
                    bVar1 = eastl::operator==((eastl*)local_50, local_98, auVar8._8_8_);
                    if (bVar1) {
                        RenderMapElement((RenderedMapSquare*)this, this_01, iVar7, iVar4, local_38, param_5);
                    }
                }
                eastl::hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>*)local_50,
                    (int)(eastl*)local_88);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar1 = eastl::operator!=((eastl*)local_88, local_50, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x1002122b0, 592 bytes, placed by class name
    // RenderedMapSquare::RenderStaticMapElements(int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderStaticMapElements(int param_1, int param_2, hash_set* param_3, int param_4,
                                                    Pix2D* param_5) {
        bool bVar1;
        int iVar3;
        int iVar4;
        shared_ptr<MapElement>* psVar5;
        MapElement* pMVar6;
        long lVar7;
        long* plVar8;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        float fVar9;
        undefined1 auVar10[16];
        undefined1 local_80[16];
        undefined8 local_58;
        undefined1 local_50[16];
        int local_40;
        float local_38;
        float local_34;

        local_34 = (float)param_1;
        new (&local_58) jag::math::Vector2T<int>();
        local_50->begin();
        local_58 = local_50._0_8_;
        local_50->end();
        bVar1 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)local_50, extraout_RDX);
        if (bVar1) {
            local_38 = (float)param_4 * 0.015625;
            local_34 = (float)(int)local_34;
            do {
                psVar5 = (shared_ptr<MapElement>*)
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                pMVar6 = (MapElement*)shared_ptr<MapElement>::operator->(psVar5);
                if (pMVar6->IsValid() != '\0') {
                    psVar5 = (shared_ptr<MapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                    lVar7 = shared_ptr<MapElement>::operator->(psVar5);
                    iVar3 = ((lVar7 + 8))->GetLocalX();
                    psVar5 = (shared_ptr<MapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                    lVar7 = shared_ptr<MapElement>::operator->(psVar5);
                    iVar4 = ((lVar7 + 8))->GetLocalZ();
                    fVar9 = (float)iVar3 * local_38 + local_34;
                    psVar5 = (shared_ptr<MapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                    lVar7 = shared_ptr<MapElement>::operator->(psVar5);
                    *(int*)(lVar7 + 32) = (int)fVar9;
                    fVar9 = (float)(63 - iVar4) * local_38 + (float)param_2;
                    psVar5 = (shared_ptr<MapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                    lVar7 = shared_ptr<MapElement>::operator->(psVar5);
                    *(int*)(lVar7 + 36) = (int)fVar9;
                    psVar5 = (shared_ptr<MapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                    plVar8 = (long*)shared_ptr<MapElement>::operator->(psVar5);
                    local_40 = (**(code**)(*plVar8 + 8))(plVar8);
                    auVar10 = param_3->find(&local_40);
                    local_50 = auVar10;
                    auVar10 = param_3->end();
                    local_80 = auVar10;
                    bVar1 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_80, auVar10._8_8_);
                    if (!bVar1) {
                        psVar5 = (shared_ptr<MapElement>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                        pMVar6 = (MapElement*)shared_ptr<MapElement>::operator*(psVar5);
                        psVar5 = (shared_ptr<MapElement>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                        lVar7 = shared_ptr<MapElement>::operator->(psVar5);
                        iVar3 = *(int*)(lVar7 + 32);
                        psVar5 = (shared_ptr<MapElement>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                        lVar7 = shared_ptr<MapElement>::operator->(psVar5);
                        RenderMapElement((RenderedMapSquare*)this, pMVar6, iVar3, *(int*)(lVar7 + 36), local_38,
                                         param_5);
                    }
                }
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)local_50,
                    (int)(eastl*)&local_58);
                local_50->end();
                bVar1 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)local_50, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x100212500, 400 bytes, placed by class name
    // RenderedMapSquare::RenderMapElementHighlights(eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderMapElementHighlights(hash_set* param_1, int param_2, int param_3, Pix2D* param_4) {
        int iVar1;
        bool bVar2;
        long lVar4;
        MapElement* this_01;
        long* plVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        RenderedMapSquare* this_02;
        undefined1 auVar6[16];
        eastl local_a0[16];
        hashtable_iterator_base local_90[16];
        undefined1 local_80[16];
        undefined1 local_70[16];
        MapElementType* local_60;
        int local_3c;

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_a0, local_90, extraout_RDX);
        if (bVar2) {
            do {
                lVar4 = local_a0->HeapBeginPtr();
                this_02 = (RenderedMapSquare*)(lVar4 + 8);
                this_01 = (MapElement*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)this_02);
                if (this_01->IsValid() != '\0') {
                    plVar5 = (long*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)this_02);
                    local_3c = (**(code**)(*plVar5 + 8))(plVar5);
                    auVar6 = param_1->find(&local_3c);
                    local_80 = auVar6;
                    auVar6 = param_1->end();
                    local_70 = auVar6;
                    bVar2 = eastl::operator!=((eastl*)local_80, (hashtable_iterator_base*)local_70, auVar6._8_8_);
                    if (bVar2) {
                        local_60 = (MapElementType*)configdecoder::MapElementType::List(local_3c);
                        lVar4 = shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)this_02);
                        iVar1 = *(int*)(lVar4 + 32);
                        lVar4 = shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)this_02);
                        RenderHighlight(this_02, local_60, iVar1, *(int*)(lVar4 + 36), param_2, param_3, param_4);
                    }
                }
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
                operator++((hashtable_iterator<
                            eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                            false>*)local_a0);
                bVar2 = eastl::operator!=(local_a0, local_90, extraout_RDX_00);
            } while (bVar2);
        }
        RenderStaticMapElementHighlights((RenderedMapSquare*)this, param_1, param_2, param_3, param_4);
    }

    // 0x100212690, 288 bytes, placed by class name
    // RenderedMapSquare::RenderHighlight(configdecoder::MapElementType const&, int, int, int, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderHighlight(MapElementType* param_1, int param_2, int param_3, int param_4, int param_5,
                                            Pix2D* param_6) {
        int iVar1;
        undefined8 uVar3;
        long lVar4;
        shared_ptr<graphics::Pix32> local_48[20];

        local_48->GetSprite(SUB81(param_1, 0));
        if (!operator==((shared_ptr*)local_48, (_func_decltype_nullptr*)0)) {
            uVar3 = shared_ptr<graphics::Pix32>::operator*(local_48);
            lVar4 = shared_ptr<graphics::Pix32>::operator->(local_48);
            iVar1 = *(int*)(lVar4 + 24);
            lVar4 = shared_ptr<graphics::Pix32>::operator->(local_48);
            (**(code**)(param_6->field_0 + 176))(param_6, uVar3, param_2 - iVar1 / 2,
                                                 param_3 - *(int*)(lVar4 + 28) / 2);
            if (param_4 % param_5 < param_5 / 2) {
                (**(code**)(param_6->field_0 + 112))(param_6, param_2, param_3, 15, 16776960, 128);
                (**(code**)(param_6->field_0 + 104))(param_6, param_2, param_3, 7, 16777215);
            }
        }
        local_48->~shared_ptr();
    }

    // 0x1002127b0, 368 bytes, placed by class name
    // RenderedMapSquare::RenderStaticMapElementHighlights(eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderStaticMapElementHighlights(hash_set* param_1, int param_2, int param_3,
                                                             Pix2D* param_4) {
        bool bVar1;
        int iVar3;
        shared_ptr* psVar4;
        MapElement* this_00;
        long* plVar5;
        MapElementType* this_01;
        long lVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        RenderedMapSquare* this_02;
        undefined1 auVar7[16];
        undefined1 local_88[16];
        eastl local_78[16];
        hashtable_iterator_base local_68[16];
        list<console::Line, eastl::allocator> local_58[8];
        list<console::Line, eastl::allocator> local_50[8];
        int local_3c;

        eastl::list<console::Line, eastl::allocator>::begin(local_58);
        eastl::list<console::Line, eastl::allocator>::end(local_50);
        bVar1 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_50, extraout_RDX);
        if (bVar1) {
            do {
                psVar4 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                new (local_88) shared_ptr<dash3d::Decor>(psVar4);
                this_00 = (MapElement*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)local_88);
                if (this_00->IsValid() != '\0') {
                    plVar5 = (long*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)local_88);
                    iVar3 = (**(code**)(*plVar5 + 8))(plVar5);
                    this_01 = (MapElementType*)configdecoder::MapElementType::List(iVar3);
                    local_3c = this_01->GetID();
                    auVar7 = param_1->find(&local_3c);
                    local_78 = (eastl[16])auVar7;
                    auVar7 = param_1->end();
                    local_68 = (hashtable_iterator_base[16])auVar7;
                    bVar1 = eastl::operator!=(local_78, local_68, auVar7._8_8_);
                    if (bVar1) {
                        lVar6 = shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)local_88);
                        iVar3 = *(int*)(lVar6 + 32);
                        this_02 = (RenderedMapSquare*)local_88;
                        lVar6 = shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)local_88);
                        RenderHighlight(this_02, this_01, iVar3, *(int*)(lVar6 + 36), param_2, param_3, param_4);
                    }
                }
                local_88->~shared_ptr();
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                bVar1 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_50, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x100212930, 560 bytes, placed by class name
    // RenderedMapSquare::GetMapElementsAtScreenCoord(int, int, int, int, int)
    RenderedMapSquare* RenderedMapSquare::GetMapElementsAtScreenCoord(int param_1, int param_2, int param_3,
                                                                      int param_4, int param_5) {
        bool bVar1;
        char cVar2;
        long lVar3;
        MapElement* pMVar4;
        shared_ptr<MapElement>* psVar5;
        shared_ptr* psVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        int in_stack_00000008;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_50;
        undefined8 uStack_48;
        undefined8 local_40;

        new (this) eastl::list<shared_ptr<MapElement>, eastl::allocator>();
        if ((((param_2 <= param_5) && (param_3 <= in_stack_00000008)) && (param_5 < param_2 + param_4)) &&
            (in_stack_00000008 < param_4 + param_3)) {
            new (&local_68) eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(0, 0);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            local_68 = local_50;
            uStack_60 = uStack_48;
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_50, extraout_RDX);
            if (bVar1) {
                do {
                    lVar3 = local_68.HeapBeginPtr();
                    pMVar4 = (MapElement*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)(lVar3 + 8));
                    cVar2 = pMVar4->IsValid();
                    if (cVar2 != '\0') {
                        lVar3 = local_68.HeapBeginPtr();
                        pMVar4 = (MapElement*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)(lVar3 + 8));
                        cVar2 = pMVar4->Contains(param_5, in_stack_00000008);
                        if (cVar2 != '\0') {
                            lVar3 = local_68.HeapBeginPtr();
                            ((RenderedMapSquare*)this)->push_back((shared_ptr*)(lVar3 + 8));
                        }
                    }
                    eastl::hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>*)&local_50,
                        (int)(Layout*)&local_68);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar1 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_50, extraout_RDX_00);
                } while (bVar1);
            }
            new (&local_50) jag::math::Vector2T<int>();
            local_40.begin();
            local_50 = local_40;
            local_40.end();
            bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_40, extraout_RDX_01);
            if (bVar1) {
                do {
                    psVar5 = (shared_ptr<MapElement>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                    pMVar4 = (MapElement*)shared_ptr<MapElement>::operator->(psVar5);
                    cVar2 = pMVar4->IsValid();
                    if (cVar2 != '\0') {
                        psVar5 = (shared_ptr<MapElement>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                        pMVar4 = (MapElement*)shared_ptr<MapElement>::operator->(psVar5);
                        cVar2 = pMVar4->Contains(param_5, in_stack_00000008);
                        if (cVar2 != '\0') {
                            psVar6 = (shared_ptr*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                            ((RenderedMapSquare*)this)->push_back(psVar6);
                        }
                    }
                    eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                        (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_40,
                        (int)(eastl*)&local_50);
                    local_40.end();
                    bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_40, extraout_RDX_02);
                } while (bVar1);
            }
        }
        return (RenderedMapSquare*)this;
    }

    // 0x100212b90, 368 bytes, placed by class name
    // RenderedMapSquare::GetAllMapElements()
    RenderedMapSquare* RenderedMapSquare::GetAllMapElements() {
        bool bVar1;
        shared_ptr* psVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        undefined8 local_60;
        undefined8 uStack_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 uStack_40;

        new (this) eastl::list<shared_ptr<MapElement>, eastl::allocator>();
        new (&local_50) jag::math::Vector2T<int>();
        local_48.begin();
        local_50 = local_48;
        local_48.end();
        bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, extraout_RDX);
        if (bVar1) {
            do {
                psVar2 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                push_back(psVar2);
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_48,
                    (int)(ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                local_48.end();
                bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, extraout_RDX_00);
            } while (bVar1);
        }
        new (&local_48) eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(0, 0);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = local_60;
        uStack_40 = uStack_58;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_60, extraout_RDX_01);
        if (bVar1) {
            do {
                lVar3 = local_48.HeapBeginPtr();
                push_back((shared_ptr*)(lVar3 + 8));
                eastl::hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, shared_ptr<MapElement>>, false, false>*)&local_60,
                    (int)(Layout*)&local_48);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_60, extraout_RDX_02);
            } while (bVar1);
        }
        return this;
    }

    // 0x100212d00, 352 bytes, placed by class name
    // RenderedMapSquare::GetFluId(int, int)
    undefined1 RenderedMapSquare::GetFluId(int param_1, int param_2) {
        bool bVar1;
        undefined1 uVar2;
        char cVar3;
        PackableArea* pPVar4;
        shared_ptr<MapZoneData>* psVar5;
        MapZoneData* pMVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_48;
        undefined8 local_40;

        bVar1 = operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pPVar4 = (PackableArea*)shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)field_8);
            uVar2 = pPVar4->GetFluId(param_1, param_2);
        } else {
            cVar3 = (&field_24)->empty();
            if (cVar3 == '\0') {
                new (&local_40) jag::math::Vector2T<int>();
                local_48.begin();
                local_40 = local_48;
                local_48.end();
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, extraout_RDX);
                uVar2 = 0;
                if (bVar1) {
                    psVar5 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    pMVar6 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar5);
                    cVar3 = pMVar6->TargetContainsMapTile(param_1, param_2);
                    if (cVar3 == '\0') {
                        do {
                            eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::
                            operator++((ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*,
                                                     shared_ptr<Headbar>&>*)&local_48,
                                       (int)(eastl*)&local_40);
                            local_48.end();
                            bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48,
                                                      extraout_RDX_00);
                            uVar2 = bVar1;
                            if (!bVar1)
                                goto joined_r0x000100212e42;
                            psVar5 = (shared_ptr<MapZoneData>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                            pMVar6 = (MapZoneData*)shared_ptr<MapZoneData>::operator->(psVar5);
                            cVar3 = pMVar6->TargetContainsMapTile(param_1, param_2);
                        } while (cVar3 == '\0');
                    }
                    psVar5 = (shared_ptr<MapZoneData>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    pPVar4 = (PackableArea*)shared_ptr<MapZoneData>::operator->(psVar5);
                    uVar2 = pPVar4->GetFluId(param_1, param_2);
                }
            joined_r0x000100212e42:
                if (bVar1 != false) {
                    return uVar2;
                }
            }
            uVar2 = 255;
        }
        return uVar2;
    }

    // 0x100212e60, 32 bytes, placed by class name
    // RenderedMapSquare::GetMapSquarePixelStrideHash(int, int, int)
    long RenderedMapSquare::GetMapSquarePixelStrideHash(int param_1, int param_2, int param_3) {
        return (long)(param_1 << 8 | param_2 | param_3 << 16);
    }

    // 0x100213020, 560 bytes, placed by class name
    // RenderedMapSquare::ExtractLocMapElements(int, int, int, int, PackableArea&)
    void RenderedMapSquare::ExtractLocMapElements(int param_1, int param_2, int param_3, int param_4,
                                                  PackableArea* param_5) {
        ulong uVar1;
        char cVar2;
        char cVar3;
        int iVar4;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_01;
        ulong uVar5;
        unique_ptr<LocationData, std::default_delete<LocationData>>* this_02;
        int* piVar6;
        shared_ptr* psVar7;
        char cVar8;
        ulong uVar9;
        bool bVar10;
        ulong local_50;
        long local_40;
        long local_38;

        if (0 < param_3) {
            local_38 = (long)param_1;
            do {
                if (0 < param_4) {
                    local_40 = (long)param_2;
                    do {
                        iVar4 = param_5->GetMaxLevels();
                        if (0 < iVar4) {
                            local_50 = 0;
                            cVar3 = '\0';
                            do {
                                this_00 =
                                    (array<
                                        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                        4096ul>*)
                                        Array<std::array<SharedArray<std::unique_ptr<
                                                             LocationData, std::default_delete<LocationData>>>,
                                                         4096ul>,
                                              eastl::allocator>::
                                        operator[](
                                            (Array<std::array<SharedArray<std::unique_ptr<
                                                                  LocationData, std::default_delete<LocationData>>>,
                                                              4096ul>,
                                                   eastl::allocator>*)&param_5->field_136,
                                            local_50);
                                this_01 = (SharedArray<
                                           std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                                    std::array<
                                        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                        4096ul>::operator[](this_00, local_40 + ((int)local_38 << 6));
                                cVar2 = this_01->empty();
                                cVar8 = '\n';
                                if (cVar2 == '\0') {
                                    uVar5 = this_01->HeapBeginPtr();
                                    if (uVar5 != 0) {
                                        uVar9 = 1;
                                        do {
                                            uVar1 = uVar9 - 1;
                                            if (*(ulong*)this_01 <= uVar1) {
                                                /* WARNING: Subroutine does not return */
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar1,
                                                          *(ulong*)this_01 - 1);
                                            }
                                            this_02 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                                shared_ptr<std::unique_ptr<LocationData,
                                                                           std::default_delete<LocationData>>[]>::
                                                operator[](
                                                    (shared_ptr<std::unique_ptr<
                                                         LocationData, std::default_delete<LocationData>>[]>*)(this_01 +
                                                                                                               8),
                                                    uVar1);
                                            piVar6 =
                                                (int*)std::unique_ptr<LocationData, std::default_delete<LocationData>>::
                                                operator->(this_02);
                                            psVar7 = (shared_ptr*)configdecoder::LocType::List(*piVar6);
                                            cVar2 = HasMeltype(psVar7);
                                            if (cVar2 != '\0') {
                                                AddMapElementForLoc(this, psVar7, (int)local_50, (int)local_38,
                                                                    (int)local_40, param_5);
                                                cVar3 = '\x01';
                                                break;
                                            }
                                            bVar10 = uVar9 < uVar5;
                                            uVar9 = uVar9 + 1;
                                        } while (bVar10);
                                    }
                                    cVar8 = cVar3 * '\b';
                                }
                                if ((cVar8 != '\n') && (cVar8 != '\0'))
                                    break;
                                local_50 = local_50 + 1;
                                iVar4 = param_5->GetMaxLevels();
                            } while ((long)local_50 < (long)iVar4);
                        }
                        local_40 = local_40 + 1;
                    } while (local_40 < param_4 + param_2);
                }
                local_38 = local_38 + 1;
            } while (local_38 < param_3 + param_1);
        }
    }

    // 0x100213250, 176 bytes, placed by class name
    // RenderedMapSquare::HasMeltype(shared_ptr<configdecoder::LocType> const&)
    undefined8 RenderedMapSquare::HasMeltype(shared_ptr* param_1) {
        char cVar1;
        long lVar2;
        int* piVar3;
        shared_ptr<configdecoder::LocType>* this;
        ulong uVar4;
        ulong uVar5;

        lVar2 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
        cVar1 = ((lVar2 + 488))->empty();
        lVar2 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
        if (cVar1 == '\0') {
            lVar2 = ((lVar2 + 488))->end();
            if (lVar2 != 0) {
                uVar5 = 0;
                do {
                    lVar2 =
                        shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
                    piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar2 + 488), uVar5);
                    this = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar3);
                    lVar2 = shared_ptr<configdecoder::LocType>::operator->(this);
                    if (*(int*)(lVar2 + 432) != -1) {
                        return 1;
                    }
                    uVar5 = uVar5 + 1;
                    lVar2 =
                        shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
                    uVar4 = ((lVar2 + 488))->end();
                } while (uVar5 < uVar4);
            }
        } else if (*(int*)(lVar2 + 432) != -1) {
            return 1;
        }
        return 0;
    }

    // 0x100213300, 752 bytes, placed by class name
    // RenderedMapSquare::AddMapElementForLoc(shared_ptr<configdecoder::LocType> const&, int, int, int, PackableArea&)
    void RenderedMapSquare::AddMapElementForLoc(shared_ptr* param_1, int param_2, int param_3, int param_4,
                                                PackableArea* param_5) {
        undefined1* this_00;
        RenderedMapSquare* this_01;
        char cVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        MapElementType* pMVar6;
        StaticMapElement* this_03;
        MapTextLabel* pMVar7;
        MultiLocMapElement* this_04;
        int* piVar8;
        long* plVar9;
        shared_ptr<MapElement>* this_05;
        int iVar10;
        _func_decltype_nullptr* p_Var11;
        int iVar12;
        int iVar13;
        CoordGrid local_258;
        CoordGrid local_248;
        CoordGrid local_238;
        shared_ptr local_218;
        int local_208;
        undefined1 local_1f8[456];

        local_1f8._448_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (&local_248) rs2lib::CoordGrid(param_2, field_0 * 64 + param_3, field_4 * 64 + param_4);
        this_00 = field_8;
        if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            lVar5 = shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)this_00);
            iVar4 = *(int*)(lVar5 + 168);
            lVar5 = shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)this_00);
            iVar12 = *(int*)(lVar5 + 160) * 64 + param_3;
            lVar5 = shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)this_00);
            iVar10 = *(int*)(lVar5 + 164) * 64 + param_4;
            iVar13 = param_4;
        } else {
            iVar4 = param_5->GetGLCoreProfileVerMinor();
            iVar3 = param_5->field_160;
            iVar10 = (**(code**)(*(long*)param_5 + 16))(param_5);
            iVar13 = param_4;
            iVar12 = iVar3 * 64 + param_3 + iVar10 * 8;
            iVar10 = param_5->field_164 * 64 + param_4;
            iVar3 = (**(code**)(*(long*)param_5 + 24))(param_5);
            iVar10 = iVar10 + iVar3 * 8;
        }
        p_Var11 = (_func_decltype_nullptr*)(ulong)(uint)(iVar4 + param_2);
        new (&local_238) rs2lib::CoordGrid(iVar4 + param_2, iVar12, iVar10);
        new (&local_218) shared_ptr<WorldmapAreaMetadata>(p_Var11);
        lVar5 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
        this_01 = (RenderedMapSquare*)this;
        cVar2 = ((lVar5 + 488))->empty();
        if (cVar2 == '\0') {
            this_04 = operator_new(80);
            piVar8 = (int*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
            MultiLocMapElement::MultiLocMapElement(this_04, &local_238, &local_248, *piVar8, this_01);
            shared_ptr<MapElement>::reset<MultiLocMapElement, void>((shared_ptr<MapElement>*)&local_218, this_04);
        } else {
            lVar5 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
            pMVar6 = (MapElementType*)configdecoder::MapElementType::List(*(int*)(lVar5 + 432));
            this_03 = operator_new(64);
            iVar4 = pMVar6->m_iD;
            pMVar7 = (MapTextLabel*)CreateMapTextLabelForMapElement(this_01, pMVar6);
            StaticMapElement::StaticMapElement(this_03, &local_238, &local_248, iVar4, pMVar7);
            shared_ptr<MapElement>::reset<StaticMapElement, void>((shared_ptr<MapElement>*)&local_218, this_03);
        }
        plVar9 = (long*)shared_ptr<MapElement>::operator->((shared_ptr<MapElement>*)&local_218);
        iVar4 = (**(code**)(*plVar9 + 8))(plVar9);
        pMVar6 = (MapElementType*)configdecoder::MapElementType::List(iVar4);
        new (local_1f8) configdecoder::MapElementType(pMVar6);
        if (local_1f8[68] != '\0') {
            new (&local_258) rs2lib::CoordGrid(0, param_3, iVar13);
            local_208 = local_258.ToBitPacked();
            this_05 = (shared_ptr<MapElement>*)
                eastl::hash_map<int, shared_ptr<MapElement>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                false>::operator[]((hash_map<int, shared_ptr<MapElement>, eastl::hash<int>,
                                                             eastl::equal_to<int>, eastl::allocator, false>*)&this_01
                                                       ->field_96,
                                                   &local_208);
            shared_ptr<MapElement>::operator=(this_05, &local_218);
        }
        local_1f8->~MapElementType();
        local_218.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_1f8._448_8_) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100213890, 48 bytes, placed by class name
    // RenderedMapSquare::CreateMapTextLabelForMapElement(int) const
    void RenderedMapSquare::CreateMapTextLabelForMapElement(int param_1) {
        MapElementType* pMVar1;

        pMVar1 = (MapElementType*)configdecoder::MapElementType::List(param_1);
        CreateMapTextLabelForMapElement(this, pMVar1);
    }

    // 0x100213940, 512 bytes, placed by class name
    // RenderedMapSquare::RenderGround(int, int, PackableArea&, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> > const&, BlendedGround&)
    /* RenderedMapSquare::RenderGround(int, int,
   PackableArea&,
   std::unique_ptr<OverlayShapes,
   std::default_delete<OverlayShapes> > const&,
   BlendedGround&) */

    void RenderedMapSquare::RenderGround(int param_1, int param_2, PackableArea* param_3, unique_ptr* param_4,
                                         BlendedGround* param_5) {
        byte bVar1;
        short sVar2;
        ushort uVar3;
        int iVar4;
        int iVar5;
        array<unsigned short, 4096ul>* paVar6;
        short* psVar7;
        ushort* puVar8;
        array<unsigned char, 4096ul>* paVar9;
        char* pcVar10;
        OverlayShapes* this_00;
        byte* pbVar11;
        undefined* puVar12;
        int iVar13;
        ulong uVar14;
        int local_34;

        paVar6 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&param_3->field_8, 0);
        uVar14 = (ulong)(param_1 * 64 + param_2);
        psVar7 = (short*)std::array<unsigned short, 4096ul>::operator[](paVar6, uVar14);
        sVar2 = *psVar7;
        paVar6 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&param_3->field_32, 0);
        puVar8 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar6, uVar14);
        uVar3 = *puVar8;
        if (sVar2 == 0 && uVar3 == 0) {
            iVar5 = field_60;
            (**(code**)(m_toolkit2D->field_0 + 32))(m_toolkit2D, iVar5* param_1, (63 - param_2) * iVar5, iVar5, iVar5,
                                                    field_56);
        }
        if (uVar3 == 0) {
            local_34 = 16711935;
        } else {
            iVar5 = FloorColourUtils::GetFloColour(uVar3 - 1, field_56);
            paVar9 =
                (array<unsigned char, 4096ul>*)Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                    (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&param_3->field_56, 0);
            pcVar10 = (char*)std::array<unsigned char, 4096ul>::operator[](paVar9, uVar14);
            local_34 = iVar5;
            if (*pcVar10 == '\0') {
                iVar4 = field_60;
                iVar13 = (63 - param_2) * iVar4;
                puVar12 = m_toolkit2D->field_0;
                goto LAB_100213b27;
            }
        }
        iVar5 = GetBlendedGroundColour(this, param_1, param_2, param_3, param_5);
        if (uVar3 != 0) {
            this_00 = (OverlayShapes*)std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>::operator->(
                (unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>*)param_4);
            iVar4 = field_60;
            paVar9 =
                (array<unsigned char, 4096ul>*)Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                    (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&param_3->field_56, 0);
            pbVar11 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar9, uVar14);
            bVar1 = *pbVar11;
            paVar9 =
                (array<unsigned char, 4096ul>*)Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                    (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&param_3->field_80, 0);
            pbVar11 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar9, uVar14);
            this_00->DrawOverlayShape(param_1 * iVar4, (63 - param_2) * iVar4, iVar5, local_34, iVar4, iVar4,
                                      (uint)bVar1, (uint)*pbVar11, m_toolkit2D);
            return;
        }
        iVar4 = field_60;
        iVar13 = (63 - param_2) * iVar4;
        puVar12 = m_toolkit2D->field_0;
    LAB_100213b27:
        (**(code**)(puVar12 + 32))(m_toolkit2D, param_1* iVar4, iVar13, iVar4, iVar4, iVar5);
    }

    // 0x100213b40, 432 bytes, placed by class name
    // RenderedMapSquare::RenderAdditionalOverlays(int, int, PackableArea&, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> > const&)
    /* RenderedMapSquare::RenderAdditionalOverlays(int, int,
   PackableArea&,
   std::unique_ptr<OverlayShapes,
   std::default_delete<OverlayShapes> > const&) */

    void RenderedMapSquare::RenderAdditionalOverlays(int param_1, int param_2, PackableArea* param_3,
                                                     unique_ptr* param_4) {
        byte bVar1;
        int iVar2;
        int iVar3;
        ulong uVar4;
        OverlayShapes* this_00;
        byte* pbVar5;
        array<unsigned short, 4096ul>* this_01;
        ushort* puVar6;
        array<unsigned char, 4096ul>* paVar7;
        char* pcVar8;
        ulong uVar9;

        iVar3 = param_3->GetMaxLevels();
        if (1 < iVar3) {
            uVar4 = (ulong)(param_1 * 64 + param_2);
            uVar9 = 1;
            do {
                this_01 = (array<unsigned short, 4096ul>*)
                    Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                        (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&param_3->field_32, uVar9);
                puVar6 = (ushort*)std::array<unsigned short, 4096ul>::operator[](this_01, uVar4);
                if (*puVar6 != 0) {
                    iVar3 = FloorColourUtils::GetFloColour(*puVar6 - 1, field_56);
                    paVar7 = (array<unsigned char, 4096ul>*)
                        Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                            (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&param_3->field_56, uVar9);
                    pcVar8 = (char*)std::array<unsigned char, 4096ul>::operator[](paVar7, uVar4);
                    if (*pcVar8 == '\0') {
                        iVar2 = field_60;
                        (**(code**)(m_toolkit2D->field_0 + 32))(m_toolkit2D, iVar2* param_1, iVar2 * (63 - param_2),
                                                                iVar2, iVar2, iVar3);
                    } else {
                        this_00 = (OverlayShapes*)
                                      std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>::operator->(
                                          (unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>*)param_4);
                        iVar2 = field_60;
                        paVar7 = (array<unsigned char, 4096ul>*)
                            Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&param_3->field_56, uVar9);
                        pbVar5 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar7, uVar4);
                        bVar1 = *pbVar5;
                        paVar7 = (array<unsigned char, 4096ul>*)
                            Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&param_3->field_80, uVar9);
                        pbVar5 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar7, uVar4);
                        this_00->DrawOverlayShape(iVar2 * param_1, iVar2 * (63 - param_2), 0, iVar3, iVar2, iVar2,
                                                  (uint)bVar1, (uint)*pbVar5, m_toolkit2D);
                    }
                }
                uVar9 = uVar9 + 1;
                iVar3 = param_3->GetMaxLevels();
            } while ((long)uVar9 < (long)iVar3);
        }
    }

    // 0x100213cf0, 80 bytes, placed by class name
    // RenderedMapSquare::RenderTile(int, int, PackableArea&, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes> > const&, Array<graphics::Pix8, eastl::allocator>&)
    /* RenderedMapSquare::RenderTile(int, int,
   PackableArea&,
   std::unique_ptr<OverlayShapes,
   std::default_delete<OverlayShapes> > const&,
   Array<graphics::Pix8, eastl::allocator>&) */

    void RenderedMapSquare::RenderTile(int param_1, int param_2, PackableArea* param_3, unique_ptr* param_4,
                                       Array* param_5) {
        RenderWall(this, param_1, param_2, param_3);
        RenderMsi(this, param_1, param_2, param_3, param_5);
    }

    // 0x100213d60, 1856 bytes, placed by class name
    // RenderedMapSquare::RenderWall(int, int, PackableArea&)
    void RenderedMapSquare::RenderWall(int param_1, int param_2, PackableArea* param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_01;
        ulong uVar4;
        unique_ptr<LocationData, std::default_delete<LocationData>>* puVar5;
        long lVar6;
        int* piVar7;
        shared_ptr<configdecoder::LocType>* this_02;
        ulong uVar8;
        ulong uVar9;
        int iVar10;
        int iVar11;
        shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>* this_03;
        undefined4 uVar12;

        iVar2 = param_3->GetMaxLevels();
        if (0 < iVar2) {
            iVar2 = 63 - param_2;
            uVar8 = 0;
            do {
                this_00 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                 4096ul>*)
                    Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                     4096ul>,
                          eastl::allocator>::
                    operator[](
                        (Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                          4096ul>,
                               eastl::allocator>*)&param_3->field_136,
                        uVar8);
                this_01 = (SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                    std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                               4096ul>::operator[](this_00, (long)(param_1 * 64 + param_2));
                cVar1 = this_01->empty();
                if ((cVar1 == '\0') && (uVar4 = this_01->HeapBeginPtr(), uVar4 != 0)) {
                    this_03 =
                        (shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)(this_01 + 8);
                    uVar9 = 0;
                    do {
                        if (*(ulong*)this_01 <= uVar9) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                        }
                        puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                            shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](
                                this_03, uVar9);
                        lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar5);
                        cVar1 = constants::LocShape::IsWallShape(*(int*)(lVar6 + 4));
                        if (cVar1 != '\0') {
                            if (*(ulong*)this_01 <= uVar9) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_03,
                                                                                                                uVar9);
                            piVar7 = (int*)std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                puVar5);
                            this_02 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar7);
                            lVar6 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                            uVar12 = 4291559424;
                            if (*(int*)(lVar6 + 200) == 0) {
                                uVar12 = 4291611852;
                            }
                            if (*(ulong*)this_01 <= uVar9) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_03,
                                                                                                                uVar9);
                            lVar6 =
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar5);
                            iVar3 = (int)this;
                            if (*(int*)(lVar6 + 4) == 0) {
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                RenderOrthogonalWall(iVar3, param_1, param_2, *(int*)(lVar6 + 8));
                            }
                            if (*(ulong*)this_01 <= uVar9) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_03,
                                                                                                                uVar9);
                            lVar6 =
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar5);
                            if (*(int*)(lVar6 + 4) == 2) {
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                RenderOrthogonalWall(iVar3, param_1, param_2, *(int*)(lVar6 + 8));
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                RenderOrthogonalWall(iVar3, param_1, param_2, *(int*)(lVar6 + 8) + 1);
                            }
                            if (*(ulong*)this_01 <= uVar9) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_03,
                                                                                                                uVar9);
                            lVar6 =
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar5);
                            if (*(int*)(lVar6 + 4) == 3) {
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                if (*(int*)(lVar6 + 8) == 0) {
                                    (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, field_60* param_1, field_60* iVar2, 1,
                                                                    uVar12);
                                }
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                if (*(int*)(lVar6 + 8) == 1) {
                                    iVar3 = field_60;
                                    (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, iVar3 + iVar3 * param_1 + -1,
                                                                    iVar3 * iVar2, 1, uVar12);
                                }
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                if (*(int*)(lVar6 + 8) == 2) {
                                    iVar3 = field_60;
                                    (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, iVar3 + iVar3 * param_1 + -1,
                                                                    iVar3 + iVar3 * iVar2 + -1, 1, uVar12);
                                }
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                if (*(int*)(lVar6 + 8) == 3) {
                                    iVar3 = field_60;
                                    (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, iVar3* param_1,
                                                                    iVar3 + iVar3 * iVar2 + -1, 1, uVar12);
                                }
                            }
                            if (*(ulong*)this_01 <= uVar9) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                            }
                            puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_03,
                                                                                                                uVar9);
                            lVar6 =
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar5);
                            if (*(int*)(lVar6 + 4) == 9) {
                                if (*(ulong*)this_01 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9, *(ulong*)this_01 - 1);
                                }
                                puVar5 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar9);
                                lVar6 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar5);
                                iVar3 = field_60;
                                if ((*(byte*)(lVar6 + 8) & 1) == 0) {
                                    if (0 < iVar3) {
                                        iVar10 = 0;
                                        iVar11 = -1;
                                        do {
                                            (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, param_1* iVar3 + iVar10,
                                                                            iVar3 * (64 - param_2) + iVar11, 1, uVar12);
                                            iVar10 = iVar10 + 1;
                                            iVar3 = field_60;
                                            iVar11 = iVar11 + -1;
                                        } while (iVar10 < iVar3);
                                    }
                                } else if (0 < iVar3) {
                                    iVar10 = 0;
                                    do {
                                        (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, param_1* iVar3 + iVar10,
                                                                        iVar3 * iVar2 + iVar10, 1, uVar12);
                                        iVar10 = iVar10 + 1;
                                        iVar3 = field_60;
                                    } while (iVar10 < iVar3);
                                }
                            }
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != uVar4);
                }
                uVar8 = uVar8 + 1;
                iVar3 = param_3->GetMaxLevels();
            } while ((long)uVar8 < (long)iVar3);
        }
    }

    // 0x1002144a0, 704 bytes, placed by class name
    // RenderedMapSquare::RenderMsi(int, int, PackableArea&, Array<graphics::Pix8, eastl::allocator>&)
    void RenderedMapSquare::RenderMsi(int param_1, int param_2, PackableArea* param_3, Array* param_4) {
        char cVar1;
        int iVar2;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_01;
        ulong uVar3;
        unique_ptr<LocationData, std::default_delete<LocationData>>* puVar4;
        long lVar5;
        int* piVar6;
        shared_ptr<configdecoder::LocType>* this_02;
        undefined8 uVar7;
        ulong uVar8;
        int iVar9;
        long* plVar10;
        shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>* this_03;
        ulong uVar11;

        iVar2 = param_3->GetMaxLevels();
        if (0 < iVar2) {
            uVar8 = 0;
            do {
                this_00 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                 4096ul>*)
                    Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                     4096ul>,
                          eastl::allocator>::
                    operator[](
                        (Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                          4096ul>,
                               eastl::allocator>*)&param_3->field_136,
                        uVar8);
                this_01 = (SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                    std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                               4096ul>::operator[](this_00, (long)(param_1 * 64 + param_2));
                cVar1 = this_01->empty();
                if (cVar1 == '\0') {
                    uVar3 = this_01->HeapBeginPtr();
                    if (uVar3 != 0) {
                        this_03 =
                            (shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)(this_01 +
                                                                                                              8);
                        uVar11 = 0;
                        do {
                            if (*(ulong*)this_01 <= uVar11) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar11, *(ulong*)this_01 - 1);
                            }
                            puVar4 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_03,
                                                                                                                uVar11);
                            lVar5 =
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar4);
                            cVar1 = constants::LocShape::IsCentrePieceShape(*(int*)(lVar5 + 4));
                            if (cVar1 == '\0') {
                                if (*(ulong*)this_01 <= uVar11) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar11, *(ulong*)this_01 - 1);
                                }
                                puVar4 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar11);
                                lVar5 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar4);
                                cVar1 = constants::LocShape::IsGroundDecorShape(*(int*)(lVar5 + 4));
                                if (cVar1 != '\0')
                                    goto LAB_100214682;
                            } else {
                            LAB_100214682:
                                if (*(ulong*)this_01 <= uVar11) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar11, *(ulong*)this_01 - 1);
                                }
                                puVar4 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_03, uVar11);
                                piVar6 =
                                    (int*)std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                        puVar4);
                                this_02 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar6);
                                lVar5 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                                if (*(int*)(lVar5 + 436) != -1) {
                                    lVar5 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                                    if (*(int*)(lVar5 + 436) == 46) {
                                    LAB_100214580:
                                        plVar10 = m_toolkit2D;
                                        lVar5 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                                        uVar7 = Array<graphics::Pix8, eastl::allocator>::operator[](
                                            (Array<graphics::Pix8, eastl::allocator>*)param_4,
                                            (long)*(int*)(lVar5 + 436));
                                        iVar2 = field_60;
                                        iVar9 = iVar2 * 2 + 1;
                                    } else {
                                        lVar5 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                                        plVar10 = m_toolkit2D;
                                        if (*(int*)(lVar5 + 436) == 52)
                                            goto LAB_100214580;
                                        lVar5 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                                        uVar7 = Array<graphics::Pix8, eastl::allocator>::operator[](
                                            (Array<graphics::Pix8, eastl::allocator>*)param_4,
                                            (long)*(int*)(lVar5 + 436));
                                        iVar2 = field_60;
                                        iVar9 = iVar2 * 2;
                                    }
                                    (**(code**)(*plVar10 + 216))(plVar10, uVar7, iVar2* param_1, iVar2 * (63 - param_2),
                                                                 iVar9, iVar9);
                                }
                            }
                            uVar11 = uVar11 + 1;
                        } while (uVar3 != uVar11);
                    }
                }
                uVar8 = uVar8 + 1;
                iVar2 = param_3->GetMaxLevels();
            } while ((long)uVar8 < (long)iVar2);
        }
    }

    // 0x100214760, 96 bytes, placed by class name
    // RenderedMapSquare::GetBlendedGroundColour(int, int, PackableArea&, BlendedGround&)
    ulong RenderedMapSquare::GetBlendedGroundColour(int param_1, int param_2, PackableArea* param_3,
                                                    BlendedGround* param_4) {
        array<unsigned short, 4096ul>* this_00;
        short* psVar1;
        ulong uVar2;

        this_00 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&param_3->field_8, 0);
        psVar1 = (short*)std::array<unsigned short, 4096ul>::operator[](this_00, (long)(param_1 * 64 + param_2));
        if (*psVar1 == 0) {
            uVar2 = (ulong)field_56;
        } else {
            uVar2 = param_4->GetBlendedGroundColour(param_1, param_2);
        }
        return uVar2;
    }

    // 0x1002147d0, 224 bytes, placed by class name
    // RenderedMapSquare::RenderOrthogonalWall(int, int, int, int)
    void RenderedMapSquare::RenderOrthogonalWall(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        undefined4 in_register_0000003c;
        long lVar3;

        lVar3 = CONCAT44(in_register_0000003c, param_1);
        switch (param_4 % 4) {
        case 0:
            iVar2 = param_2 * *(int*)(lVar3 + 60);
            iVar1 = (63 - param_3) * *(int*)(lVar3 + 60);
            lVar3 = *m_toolkit2D;
            break;
        case 1:
            (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, param_2**(int*)(lVar3 + 60),
                                            (63 - param_3) * *(int*)(lVar3 + 60));
            return;
        case 2:
            iVar1 = *(int*)(lVar3 + 60);
            iVar2 = param_2 * iVar1 + iVar1 + -1;
            iVar1 = (63 - param_3) * iVar1;
            lVar3 = *m_toolkit2D;
            break;
        case 3:
            iVar1 = *(int*)(lVar3 + 60);
            (**(code**)(*m_toolkit2D + 56))(m_toolkit2D, param_2* iVar1, iVar1 + (63 - param_3) * iVar1 + -1);
        default:
            return;
        }
        (**(code**)(lVar3 + 72))(m_toolkit2D, iVar2, iVar1);
    }

    // 0x1002148f0, 128 bytes, placed by class name
    // RenderedMapSquare::RenderMapElement(MapElement&, int, int, float, graphics::Pix2D&)
    void RenderedMapSquare::RenderMapElement(MapElement* param_1, int param_2, int param_3, float param_4,
                                             Pix2D* param_5) {
        int iVar1;
        MapElementType* pMVar2;

        iVar1 = (**(code**)(param_1->field_0 + 8))(param_1);
        pMVar2 = (MapElementType*)configdecoder::MapElementType::List(iVar1);
        RenderMapElementSprite(this, pMVar2, param_2, param_3, param_5);
        RenderMapElementTextLabel(this, param_1, pMVar2, param_2, param_3, param_4, param_5);
    }

    // 0x100214970, 208 bytes, placed by class name
    // RenderedMapSquare::RenderMapElementSprite(configdecoder::MapElementType const&, int, int, graphics::Pix2D&)
    void RenderedMapSquare::RenderMapElementSprite(MapElementType* param_1, int param_2, int param_3, Pix2D* param_4) {
        undefined8 uVar1;
        int iVar3;
        int iVar4;
        shared_ptr<graphics::Pix32> local_48[20];

        local_48->GetSprite(SUB81(param_1, 0));
        if (operator!=((shared_ptr*)local_48, (_func_decltype_nullptr*)0)) {
            shared_ptr<graphics::Pix32>::operator*(local_48);
            iVar3 = GetHorizontalOffset();
            shared_ptr<graphics::Pix32>::operator*(local_48);
            iVar4 = GetVerticalOffset();
            uVar1 = shared_ptr<graphics::Pix32>::operator*(local_48);
            (**(code**)(param_4->field_0 + 176))(param_4, uVar1, iVar3 + param_2, iVar4 + param_3);
        }
        local_48->~shared_ptr();
    }

    // 0x100214a40, 416 bytes, placed by class name
    // RenderedMapSquare::RenderMapElementTextLabel(MapElement&, configdecoder::MapElementType const&, int, int, float, graphics::Pix2D&)
    void RenderedMapSquare::RenderMapElementTextLabel(MapElement* param_1, MapElementType* param_2, int param_3,
                                                      int param_4, float param_5, Pix2D* param_6) {
        int iVar1;
        uint uVar2;
        char cVar3;
        basic_string* pbVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long lVar8;
        int* piVar9;
        undefined1 auVar10[16];
        hashtable_iterator_base local_78[16];
        PixfontGeneric* local_58;
        eastl local_50[20];
        int local_38;
        float local_34;

        local_34 = param_5;
        cVar3 = (**(code**)(param_1->field_0 + 24))(param_1);
        if (cVar3 != '\0') {
            pbVar5 = (basic_string*)(**(code**)(param_1->field_0 + 16))(param_1);
            cVar3 = ((pbVar5 + 40))->ShouldRenderAtScale(local_34);
            if (cVar3 != '\0') {
                local_38 = ((pbVar5 + 40))->GetSize();
                local_50._0_16_ = (field_152, &local_38)->find();
                local_78 = (hashtable_iterator_base[16])field_152->end();
                if (eastl::operator==(local_50, local_78, local_78._8_8_)) {
                    uVar6 = logger::default_logger();
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar6, 1, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/worldmap/RenderedMapSquare.cpp",
                                        921, "Skipping label because font size is wrong: %s", uVar7);
                } else {
                    auVar10 = (field_152, &local_38)->find();
                    local_50._0_16_ = auVar10;
                    lVar8 = local_50->HeapBeginPtr();
                    local_58 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                        (shared_ptr<jstring::PixfontGeneric>*)(lVar8 + 8));
                    iVar1 = *(int*)(pbVar5 + 32);
                    local_34 = *(float*)(pbVar5 + 36);
                    uVar2 = param_2->field_48;
                    piVar9 = (int*)shared_ptr<jstring::PixfontGeneric>::operator->(
                        (shared_ptr<jstring::PixfontGeneric>*)(lVar8 + 8));
                    local_58->DrawStringMultiline(pbVar5, param_3 - iVar1 / 2, param_4, iVar1, (int)local_34,
                                                  uVar2 | 4278190080, 0, 1, 0, *piVar9 / 2, param_6);
                }
            }
        }
    }

    // 0x100214be0, 48 bytes, placed by class name
    // RenderedMapSquare::GetHorizontalOffset(graphics::Pix32&, game::MapElementHorizontalAlign)
    int RenderedMapSquare::GetHorizontalOffset(undefined8 param_1_00, long param_1, int param_3) {
        int iVar1;

        iVar1 = 0;
        if (param_3 != 0) {
            if (param_3 == 1) {
                return -(*(int*)(param_1 + 24) / 2);
            }
            iVar1 = -*(int*)(param_1 + 24);
        }
        return iVar1;
    }

    // 0x100214c10, 48 bytes, placed by class name
    // RenderedMapSquare::GetVerticalOffset(graphics::Pix32&, game::MapElementVerticalAlign)
    int RenderedMapSquare::GetVerticalOffset(undefined8 param_1_00, long param_1, int param_3) {
        int iVar1;

        iVar1 = 0;
        if (param_3 != 0) {
            if (param_3 == 1) {
                return -(*(int*)(param_1 + 28) / 2);
            }
            iVar1 = -*(int*)(param_1 + 28);
        }
        return iVar1;
    }

    // 0x100214c60, 112 bytes, placed by class name
    // RenderedMapSquare::GetMeltype(shared_ptr<configdecoder::LocType> const&)
    undefined8 RenderedMapSquare::GetMeltype(shared_ptr* param_1) {
        char cVar1;
        long lVar3;
        LocType* this;
        shared_ptr* this_00;

        lVar3 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
        cVar1 = ((lVar3 + 488))->empty();
        if (cVar1 == '\0') {
            this =
                (LocType*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
            this_00 = (shared_ptr*)GetMultiLoc();
            if (!shared_ptr::operator_cast_to_bool(this_00)) {
                return 0;
            }
        }
        lVar3 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
        if (*(int*)(lVar3 + 432) == -1) {
            return 0;
        }
        lVar3 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)param_1);
        return configdecoder::MapElementType::List(*(int*)(lVar3 + 432));
    }

    // 0x100227ab0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128() {
        new (&RenderedMapSquare::m_renderedMapSquareSpriteCache) LRUCache<graphics::Pix32>(37748736, "mapsqLRU");
        ___cxa_atexit(PTR__LRUCache_100ee6990, &RenderedMapSquare::m_renderedMapSquareSpriteCache, 4294967296);
    }

    // 0x100227af0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        OffscreenSoftwarePixToolkit* this;

        this = operator_new(6437456);
        graphics::OffscreenSoftwarePixToolkit::OffscreenSoftwarePixToolkit(this);
        RenderedMapSquare::m_toolkit = this;
    }

    // 0x100227b30, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133() {
        RenderedMapSquare::m_toolkit2D = (**(code**)*RenderedMapSquare::m_toolkit)();
    }

} // namespace jag::oldscape::rs2lib::worldmap
