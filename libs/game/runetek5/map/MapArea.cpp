// libs/game/runetek5/map/MapArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapArea.h"

namespace jag::game {
    // 0x1039bb6b0, 16 bytes, __common; set at startup by ___cxx_global_var_init.7
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> MapArea::NullMapArea;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    int MapArea::GetMapID() const;

    // 0x10005d8c0: the linker folded this into oldscape::OSClientConsoleUI::GetBounds() const, which has identical code
    MapArea::GetOrigin() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    MapArea::GetUniqueName() const;

    // 0x1000dc670: the linker folded this into oldscape::javapal::GameShell::GetMinimumCanvasHeight() const, which has identical code
    MapArea::GetAdvisedZoom() const;

    // 0x1000e10c0: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    MapArea::CompositeTextureMeta::CompositeTextureMeta();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    MapArea::CompositeTextureMeta::~CompositeTextureMeta();

    // 0x10012d150: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    MapArea::CompositeTextureMeta::CompositeTextureMeta();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    MapArea::CompositeTextureMeta::~CompositeTextureMeta();

    // 0x100450440: the linker folded this into MapSquareStatus::MapSquareStatus(MapSquareStatus&&), which has identical code
    MapArea::CompositeTextureMeta::CompositeTextureMeta(MapArea::CompositeTextureMeta&&);

    // 0x100450450: the linker folded this into MapSquareStatus::MapSquareStatus(MapSquareStatus&&), which has identical code
    MapArea::CompositeTextureMeta::CompositeTextureMeta(MapArea::CompositeTextureMeta&&);

    // 0x1004ac600, 1408 bytes, base-object constructor, placed by class name and debug map
    // MapArea::MapArea(Js5ResourceProvider*, int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void MapArea::MapArea(Js5ResourceProvider* param_1, int param_2, PacketT* param_3, PacketT* param_4) {
        PacketT* pPVar1;
        Array<MapArea::CompositeSquare, eastl::allocator>* this_00;
        char cVar2;
        byte bVar3;
        ushort uVar4;
        ushort uVar5;
        int iVar6;
        uint uVar7;
        uint uVar8;
        uint uVar9;
        uint* puVar10;
        ulong uVar12;
        CoordGrid local_a0;
        ulong local_90;
        ulong local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        basic_string* local_68;
        basic_string* local_60;
        Array<MapArea::SubArea, eastl::allocator>* local_58;
        Array<MapArea::CompositeZone, eastl::allocator>* local_50;
        Array<MapArea::CompositeSquare, eastl::allocator>* local_38;

        field_0 = param_1;
        m_mapID = param_2;
        local_68 = (basic_string*)&field_16;
        new (local_68) eastl::string();
        local_60 = (basic_string*)&field_48;
        new (local_60) eastl::string();
        local_58 = (Array<MapArea::SubArea, eastl::allocator>*)&field_80;
        Array<MapArea::SubArea, eastl::allocator>::Array(local_58);
        new (&m_origin, 0, 0, 0) oldscape::rs2lib::worldmap::LocationData();
        m_backgroundRGBA = 255;
        field_120 = 1;
        m_advisedZoom = 4294967295;
        new (&field_128) Array<MapArea::CompositeSquare, eastl::allocator>();
        local_50 = (Array<MapArea::CompositeZone, eastl::allocator>*)&field_152;
        Array<MapArea::CompositeZone, eastl::allocator>::Array(local_50);
        local_80 = field_176;
        new (local_80) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        local_78 = field_192;
        new (local_78) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_216 = 1;
        field_220 = 1;
        new (&field_224, 1600, 1600, -1600, -1600) oldscape::dash3d::GridRect();
        new (field_240, 12800, 12800, -12800, -12800) oldscape::dash3d::GridRect();
        field_240[16] = 0;
        local_70 = &field_264;
        new (local_70) Array<StaticMapElement, eastl::allocator>();
        new (&field_288, 12800, 12800, -12800, -12800) oldscape::dash3d::GridRect();
        new (((MapArea*)this)->m_targetBounds, 12800, 12800, -12800, -12800) oldscape::dash3d::GridRect();
        new ((((MapArea*)this)->m_targetBounds + 16), 0, 0, 0) oldscape::rs2lib::worldmap::LocationData();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_3, local_68, false);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_3, local_60, false);
        iVar6 = param_3->g4s();
        new (&local_a0) game::CoordGrid(iVar6);
        field_112 = local_a0.field_8;
        m_origin = local_a0._0_8_;
        iVar6 = param_3->g4s();
        if (iVar6 != -1) {
            ((MapArea*)this)->m_backgroundRGBA = iVar6 << 8 | 255;
        }
        cVar2 = param_3->g1();
        ((MapArea*)this)->field_120 = cVar2 == '\x01';
        bVar3 = param_3->g1();
        ((MapArea*)this)->m_advisedZoom = (uint)bVar3;
        param_3->g1();
        local_38 = (Array<MapArea::CompositeSquare, eastl::allocator>*)&field_128;
        bVar3 = param_3->g1();
        local_88 = (ulong)bVar3;
        local_58->set_max_size(local_88, 4);
        if (bVar3 != 0) {
            uVar12 = 0;
            do {
                local_90 = uVar12;
                puVar10 = (uint*)Array<MapArea::SubArea, eastl::allocator>::operator[](local_58, uVar12);
                bVar3 = param_3->g1();
                *puVar10 = (uint)bVar3;
                uVar7 = param_3->g2();
                uVar8 = param_3->g2();
                uVar9 = param_3->g2();
                uVar4 = param_3->g2();
                ((puVar10 + 1))->SetMinMax(uVar7 & 65535, uVar9 & 65535, uVar8 & 65535, (uint)uVar4);
                uVar7 = param_3->g2();
                uVar8 = param_3->g2();
                uVar9 = param_3->g2();
                uVar4 = param_3->g2();
                ((puVar10 + 5))->SetMinMax(uVar7 & 65535, uVar9 & 65535, uVar8 & 65535, (uint)uVar4);
                uVar12 = local_90 + 1;
            } while (local_88 != uVar12);
        }
        this_00 = local_38;
        uVar4 = param_4->g2();
        this_00->set_max_size((ulong)uVar4, 4);
        pPVar1 = param_4;
        if (uVar4 != 0) {
            uVar12 = 0;
            do {
                puVar10 = (uint*)Array<MapArea::CompositeSquare, eastl::allocator>::operator[](this_00, uVar12);
                bVar3 = pPVar1->g1();
                *puVar10 = (uint)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[1] = (uint)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[2] = (uint)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[3] = (uint)uVar5;
                bVar3 = pPVar1->g1();
                puVar10[4] = (uint)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[5] = (uint)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[6] = (uint)uVar5;
                uVar12 = uVar12 + 1;
            } while (uVar4 != uVar12);
        }
        uVar4 = param_4->g2();
        local_50->set_max_size((ulong)uVar4, 4);
        pPVar1 = param_4;
        if (uVar4 != 0) {
            uVar12 = 0;
            do {
                puVar10 = (uint*)Array<MapArea::CompositeZone, eastl::allocator>::operator[](local_50, uVar12);
                bVar3 = pPVar1->g1();
                *puVar10 = (uint)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[1] = (uint)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[2] = (uint)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[3] = (uint)uVar5;
                bVar3 = pPVar1->g1();
                puVar10[4] = (uint)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[5] = (uint)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[6] = (uint)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[7] = (uint)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[8] = (uint)uVar5;
                bVar3 = pPVar1->g1();
                puVar10[9] = (uint)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[10] = (uint)bVar3;
                uVar12 = uVar12 + 1;
            } while (uVar4 != uVar12);
        }
        bVar3 = param_4->g1();
        ((MapArea*)this)->field_216 = (uint)bVar3;
        bVar3 = param_4->g1();
        ((MapArea*)this)->field_220 = (uint)bVar3;
        CalculateBounds((MapArea*)this);
    }

    // 0x1004ad170, 592 bytes, placed by class name and debug map
    // MapArea::CalculateBounds()
    void MapArea::CalculateBounds() {
        undefined1* puVar1;
        undefined1* this_00;
        int iVar2;
        MapArea* pMVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        ulong uVar8;
        vector* pvVar9;
        int* piVar10;
        ulong uVar11;
        Rect<int>* in_RSI;
        uint uVar12;
        undefined1* puVar13;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        MapArea* local_38;

        puVar13 = &field_80;
        puVar1 = &field_288;
        local_38 = this;
        lVar7 = puVar13->end();
        if (lVar7 != 0) {
            this_00 = local_38->m_targetBounds;
            uVar11 = 0;
            do {
                lVar7 = Array<MapArea::SubArea, eastl::allocator>::operator[](
                    (Array<MapArea::SubArea, eastl::allocator>*)puVar13, uVar11);
                puVar1->Union((Rect*)(lVar7 + 4));
                in_RSI = (Rect<int>*)(lVar7 + 20);
                this_00->Union(in_RSI);
                uVar11 = uVar11 + 1;
                uVar8 = puVar13->end();
            } while (uVar11 < uVar8);
        }
        pvVar9 = puVar1->SSOBeginPtr(in_RSI);
        iVar2 = *(int*)pvVar9;
        iVar4 = puVar1->Right();
        pMVar3 = local_38;
        *(int*)&local_38->field_324 = (iVar4 + iVar2) / 2;
        piVar10 = (int*)puVar1->y();
        iVar2 = *piVar10;
        iVar4 = puVar1->MaxZ();
        pMVar3->field_328 = (iVar4 + iVar2) / 2;
        puVar13 = &pMVar3->field_128;
        puVar1 = &pMVar3->field_224;
        lVar7 = puVar13->end();
        if (lVar7 != 0) {
            uVar11 = 0;
            do {
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                    local_48, (_func_decltype_nullptr*)in_RSI);
                lVar7 = Array<MapArea::CompositeSquare, eastl::allocator>::operator[](
                    (Array<MapArea::CompositeSquare, eastl::allocator>*)puVar13, uVar11);
                iVar2 = *(int*)(lVar7 + 20);
                lVar7 = Array<MapArea::CompositeSquare, eastl::allocator>::operator[](
                    (Array<MapArea::CompositeSquare, eastl::allocator>*)puVar13, uVar11);
                in_RSI = (Rect<int>*)local_48;
                in_RSI->SetMinMax(iVar2 * 8, iVar2 * 8 + 7, *(int*)(lVar7 + 24) << 3, *(int*)(lVar7 + 24) * 8 + 7);
                puVar1->Union(in_RSI);
                uVar11 = uVar11 + 1;
                uVar8 = puVar13->end();
            } while (uVar11 < uVar8);
        }
        puVar13 = &local_38->field_152;
        lVar7 = puVar13->end();
        if (lVar7 != 0) {
            uVar11 = 0;
            do {
                lVar7 = Array<MapArea::CompositeZone, eastl::allocator>::operator[](
                    (Array<MapArea::CompositeZone, eastl::allocator>*)puVar13, uVar11);
                iVar2 = *(int*)(lVar7 + 28);
                lVar7 = Array<MapArea::CompositeZone, eastl::allocator>::operator[](
                    (Array<MapArea::CompositeZone, eastl::allocator>*)puVar13, uVar11);
                uVar12 = iVar2 * 8 + *(int*)(lVar7 + 36);
                lVar7 = Array<MapArea::CompositeZone, eastl::allocator>::operator[](
                    (Array<MapArea::CompositeZone, eastl::allocator>*)puVar13, uVar11);
                iVar2 = *(int*)(lVar7 + 32);
                lVar7 = Array<MapArea::CompositeZone, eastl::allocator>::operator[](
                    (Array<MapArea::CompositeZone, eastl::allocator>*)puVar13, uVar11);
                in_RSI = (Rect<int>*)(ulong)uVar12;
                puVar1->Union(uVar12, iVar2 * 8 + *(int*)(lVar7 + 40));
                uVar11 = uVar11 + 1;
                uVar8 = puVar13->end();
            } while (uVar11 < uVar8);
        }
        puVar13 = local_38->field_240;
        pvVar9 = puVar1->SSOBeginPtr(in_RSI);
        iVar2 = *(int*)pvVar9;
        iVar5 = puVar1->Right();
        piVar10 = (int*)puVar1->y();
        iVar4 = *piVar10;
        iVar6 = puVar1->MaxZ();
        puVar13->SetMinMax(iVar2 << 3, iVar5 * 8 + 7, iVar4 << 3, iVar6 * 8 + 7);
    }

    // 0x1004ad3c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapArea::MapArea(Js5ResourceProvider*, int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1004ad3d0, 736 bytes, base-object constructor, placed by class name and debug map
    // MapArea::MapArea(Js5ResourceProvider*, int, int, int)
    void MapArea::MapArea(Js5ResourceProvider* param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        undefined4* puVar1;
        int iVar3;

        field_0 = param_1;
        m_mapID = -1;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        this_00 = &field_80;
        new (this_00) Array<MapArea::SubArea, eastl::allocator>();
        new (&m_origin, 0, param_2, param_3) oldscape::rs2lib::worldmap::LocationData();
        m_backgroundRGBA = 255;
        field_120 = 1;
        m_advisedZoom = 4294967295;
        new (&field_128) Array<MapArea::CompositeSquare, eastl::allocator>();
        new (&field_152) Array<MapArea::CompositeZone, eastl::allocator>();
        new (field_176, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_216 = 1;
        field_220 = 1;
        new (&field_224, 1600, 1600, -1600, -1600) oldscape::dash3d::GridRect();
        new (field_240, 12800, 12800, -12800, -12800) oldscape::dash3d::GridRect();
        field_240[16] = 0;
        new (&field_264) Array<StaticMapElement, eastl::allocator>();
        new (&field_288, 12800, 12800, -12800, -12800) oldscape::dash3d::GridRect();
        new (m_targetBounds, 12800, 12800, -12800, -12800) oldscape::dash3d::GridRect();
        new ((m_targetBounds + 16), 0, 0, 0) oldscape::rs2lib::worldmap::LocationData();
        (&field_16, "dummyarea")->assign();
        (&field_48, "Dummy Area")->assign();
        m_advisedZoom = 0;
        this_00->set_max_size(1, 4);
        puVar1 = (undefined4*)Array<MapArea::SubArea, eastl::allocator>::operator[](
            (Array<MapArea::SubArea, eastl::allocator>*)this_00, 0);
        *puVar1 = 0;
        iVar3 = param_4 / 2;
        ((puVar1 + 1))->SetMinMax(param_2 - iVar3, param_2 + iVar3, param_3 - iVar3, iVar3 + param_3);
        ((puVar1 + 5))->SetMinMax(param_2 - iVar3, param_2 + iVar3, param_3 - iVar3, iVar3 + param_3);
        (&field_128)->clear();
        (&field_152)->clear();
        field_216 = 1;
        field_220 = 1;
        CalculateBounds(this);
    }

    // 0x1004ad750, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapArea::MapArea(Js5ResourceProvider*, int, int, int): jumps straight to the base-object constructor

    // 0x1004ad760, 832 bytes, placed by class name and debug map
    // MapArea::GetCompositeTextureMeta(MapArea::CompositeTextureMeta&)
    /* WARNING: Removing unreachable block (ram,4299872378) */
    /* MapArea::GetCompositeTextureMeta(MapArea::CompositeTextureMeta&) */

    undefined* MapArea::GetCompositeTextureMeta(CompositeTextureMeta* param_1) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        undefined** ppuVar5;
        undefined* puVar6;
        DataStatus* pDVar7;
        undefined* puVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        void* pvVar9;
        ulong uVar10;
        uint in_stack_ffffffffffffff10;
        PacketView local_e8;
        shared_ptr local_c0;
        Js5Index* local_b0;
        void* local_a8;
        uint local_a0;
        uint local_9c;
        undefined1 local_98[8];
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_mapID == -1) {
            ppuVar5 = &DataStatus::MISSING;
        } else {
            this_00 = field_192;
            bVar1 = this_00->operator_cast_to_bool();
            if (!bVar1) {
                local_b0 = (Js5Index*)0;
                puVar6 = (undefined*)(*(code*)field_0->field_0[3])(field_0, &local_b0, Js5Archive::JS5_WORLDMAPDATA);
                if (puVar6 != DataStatus::READY) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("indexStatus == DataStatus::READY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                              "MapArea.cpp",
                              138, (char*)0);
                }
                local_9c = 0;
                pDVar7 = Js5Index::GetGroupID<char[17]>(local_b0, &local_9c, "compositetexture");
                if (pDVar7 != (DataStatus*)DataStatus::READY) {
                    puVar6 = DataStatus::MISSING;
                    goto LAB_1004ad7bf;
                }
                new (&local_e8) PacketView();
                puVar8 = (undefined*)(field_0, &local_e8, Js5Archive::JS5_WORLDMAPDATA, local_9c, m_mapID,
                                      (Priority*)Priority::HIGH, true, false, false)
                             ->GetFile();
                puVar6 = DataStatus::NOTLOADED;
                bVar1 = puVar8 == DataStatus::NOTLOADED;
                if (!bVar1) {
                    new ((local_98 + 8)) RGBAImage();
                    PNGDecoder::LoadFromPacket((RGBAImage*)(local_98 + 8), &local_e8);
                    iVar2 = ((local_98 + 8))->GetX();
                    iVar3 = ((local_98 + 8))->GetZ();
                    uVar10 = (ulong)(iVar3 * iVar2 * 4);
                    local_a8 = operator_new__(uVar10);
                    this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)((local_98 + 8))
                                  ->GetDevCredentialsOutputDirectory();
                    pvVar9 = (void*)this_01->data();
                    _memcpy(local_a8, pvVar9, uVar10);
                    new (local_98) callstack::Callstack();
                    local_98->AddFormatType(5);
                    local_a0 = ((local_98 + 8))->GetX();
                    uVar4 = ((local_98 + 8))->GetZ();
                    graphicutils::CreateHALTexture2D<render::Texture2D>(
                        &local_c0, (graphicutils*)(ulong)local_a0, uVar4, (uint)local_a8, &DAT_00000001, 0, 0, true,
                        false, (bool)local_98[0], (TextureFormatBitSet)0, in_stack_ffffffffffffff10);
                    shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)this_00, &local_c0);
                    local_c0.~shared_ptr();
                    field_208 = 32767.0 / (float)field_216;
                    field_212 = 32767.0 / (float)field_220;
                    ((local_98 + 8))->~RGBAImage();
                }
                local_e8.~PacketView();
                if (bVar1)
                    goto LAB_1004ad7bf;
            }
            CompositeTextureMeta::operator=(param_1, (CompositeTextureMeta*)this_00);
            ppuVar5 = &DataStatus::READY;
        }
        puVar6 = *ppuVar5;
    LAB_1004ad7bf:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar6;
    }

    // 0x1004adb00, 32 bytes, placed by class name and debug map
    // MapArea::ReleaseCompositeTextureMeta()
    void MapArea::ReleaseCompositeTextureMeta() {
        shared_ptr<render::Texture2D>::reset();
    }

    // 0x1004adb70, 1088 bytes, placed by class name and debug map
    // MapArea::GetCompositeMap()
    void MapArea::GetCompositeMap() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        Layout* pLVar8;
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>* this_01;
        bool bVar9;
        int iVar10;
        vector* pvVar11;
        int* piVar12;
        vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
               eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* pvVar13;
        vector<int, eastl::allocator>* pvVar14;
        undefined4* puVar15;
        long lVar16;
        type* ptVar17;
        uint* puVar18;
        int* piVar19;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_02;
        uint uVar20;
        type* ptVar21;
        shared_ptr* this_03;
        uint uVar22;
        ulong uVar23;
        ulong uVar24;
        ulong uVar25;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        MapArea* this_05;
        long lVar26;
        shared_ptr local_b0;
        long local_a0;
        long local_98;
        type* local_90;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        Layout* local_80;
        ulong local_78;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_70;
        MapArea* local_68;
        ulong local_60;
        ulong local_58;
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>* local_50;
        type* local_48;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_40;
        uint local_34;

        local_50 =
            (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                            true, eastl::allocator>>*)field_176;
        bVar9 = local_50->operator_cast_to_bool();
        if (!bVar9) {
            this_03 = &local_b0;
            make_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                            true, eastl::allocator>>((jag*)this_03);
            shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                           true, eastl::allocator>>::operator=(local_50, this_03);
            local_b0.~shared_ptr();
            this_00 = &field_224;
            local_68 = this;
            iVar10 = this_00->Right();
            pvVar11 = this_00->SSOBeginPtr(this_03);
            local_70 =
                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(ulong)(uint)(iVar10 - *(int*)pvVar11);
            uVar22 = (iVar10 - *(int*)pvVar11) + 1;
            iVar10 = this_00->MaxZ();
            local_80 = (Layout*)this_00;
            piVar12 = (int*)this_00->y();
            local_60 = CONCAT44(local_60._4_4_, iVar10 - *piVar12);
            uVar20 = (iVar10 - *piVar12) + 1;
            local_58 = (ulong)(int)uVar22;
            local_48 = (type*)(long)(int)uVar20;
            uVar23 = 0;
            local_34 = uVar22;
            do {
                pvVar13 = (vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                  eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    shared_ptr<
                        eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                            true, eastl::allocator>>::operator*(local_50);
                local_78 = uVar23;
                local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)eastl::vector<
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                    eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar13,
                                                                                                            uVar23);
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::resize(local_40, local_58);
                if (-1 < (int)local_70) {
                    uVar25 = (ulong)local_34;
                    uVar23 = 0;
                    do {
                        pvVar14 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40,
                                                                                                              uVar23);
                        eastl::vector<int, eastl::allocator>::resize((ulong)pvVar14);
                        if (-1 < (int)(uint)local_60) {
                            uVar24 = 0;
                            do {
                                puVar15 =
                                    (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar14, uVar24);
                                *puVar15 = 4294967295;
                                uVar24 = uVar24 + 1;
                            } while (uVar20 != uVar24);
                        }
                        uVar23 = uVar23 + 1;
                    } while (uVar23 != uVar25);
                }
                uVar23 = local_78 + 1;
            } while (uVar23 != 4);
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_68->field_128;
            lVar16 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            if (lVar16 != 0) {
                ptVar21 = (type*)0;
                local_88 = this_04;
                do {
                    local_90 = ptVar21;
                    ptVar17 = (type*)Array<MapArea::CompositeSquare, eastl::allocator>::operator[](
                        (Array<MapArea::CompositeSquare, eastl::allocator>*)this_04, (ulong)ptVar21);
                    pLVar8 = local_80;
                    local_58 = (ulong) * (uint*)(ptVar17 + 8);
                    local_34 = *(uint*)(ptVar17 + 12);
                    iVar10 = *(int*)(ptVar17 + 20);
                    pvVar11 = eastl::string::Layout::SSOBeginPtr(local_80, ptVar21);
                    iVar1 = *(int*)pvVar11;
                    iVar2 = *(int*)(ptVar17 + 24);
                    piVar12 = (int*)pLVar8->y();
                    if (0 < *(int*)(ptVar17 + 4)) {
                        local_58 = (ulong)(uint)((int)local_58 << 3);
                        local_a0 = (long)(iVar2 * 8 - *piVar12);
                        local_98 = (long)(iVar10 * 8 - iVar1);
                        local_34 = local_34 << 6;
                        iVar10 = 0;
                        local_48 = ptVar17;
                        do {
                            ptVar21 = local_48;
                            pvVar13 =
                                (vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                        eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    shared_ptr<eastl::fixed_vector<
                                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                        true, eastl::allocator>>::operator*(local_50);
                            local_70 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)eastl::vector<
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](pvVar13, (long)iVar10 + (long)*(int*)(ptVar21 + 16));
                            uVar23 = 0;
                            do {
                                local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        local_70, uVar23 + local_98);
                                lVar16 = local_a0;
                                local_60 = CONCAT44(local_60._4_4_, ((int)local_58 + (int)uVar23) * 16384);
                                lVar26 = 0;
                                uVar20 = local_34;
                                local_78 = uVar23;
                                do {
                                    iVar1 = *(int*)local_48;
                                    uVar22 = uVar20 | (uint)local_60;
                                    puVar18 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)local_40, lVar16 + lVar26);
                                    *puVar18 = uVar22 | (iVar1 + iVar10) * 16777216;
                                    lVar26 = lVar26 + 1;
                                    uVar20 = uVar20 + 8;
                                } while (lVar26 != 8);
                                uVar23 = local_78 + 1;
                            } while (uVar23 != 8);
                            iVar10 = iVar10 + 1;
                        } while (iVar10 < *(int*)(local_48 + 4));
                    }
                    this_04 = local_88;
                    ptVar21 = local_90 + 1;
                    ptVar17 =
                        (type*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_88);
                } while (ptVar21 < ptVar17);
            }
            this_05 = (MapArea*)&local_68->field_152;
            lVar16 = this_05->end();
            if (lVar16 != 0) {
                ptVar21 = (type*)0;
                local_68 = this_05;
                do {
                    local_48 = ptVar21;
                    piVar12 = (int*)Array<MapArea::CompositeZone, eastl::allocator>::operator[](
                        (Array<MapArea::CompositeZone, eastl::allocator>*)this_05, (ulong)ptVar21);
                    pLVar8 = local_80;
                    iVar10 = piVar12[2];
                    iVar1 = piVar12[4];
                    local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)CONCAT44(
                        local_40._4_4_, piVar12[3] * 8 + piVar12[5]);
                    iVar2 = piVar12[7];
                    iVar3 = piVar12[9];
                    pvVar11 = eastl::string::Layout::SSOBeginPtr(local_80, ptVar21);
                    iVar4 = *(int*)pvVar11;
                    iVar5 = piVar12[8];
                    iVar6 = piVar12[10];
                    piVar19 = (int*)pLVar8->y();
                    this_01 = local_50;
                    if (0 < piVar12[1]) {
                        iVar7 = *piVar19;
                        local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)CONCAT44(
                            local_40._4_4_, (uint)local_40 << 3 | (iVar10 * 8 + iVar1) * 16384);
                        local_60 = (ulong)((iVar2 * 8 + iVar3) - iVar4);
                        iVar10 = 0;
                        do {
                            uVar20 = (*piVar12 + iVar10) * 16777216 | (uint)local_40;
                            pvVar13 =
                                (vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                        eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    shared_ptr<eastl::fixed_vector<
                                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                        true, eastl::allocator>>::operator*(this_01);
                            this_02 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)eastl::vector<
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](pvVar13, (long)(piVar12[6] + iVar10));
                            pvVar14 = (vector<int, eastl::allocator>*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    this_02, local_60);
                            puVar18 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                                pvVar14, (long)((iVar5 * 8 + iVar6) - iVar7));
                            *puVar18 = uVar20;
                            iVar10 = iVar10 + 1;
                        } while (iVar10 < piVar12[1]);
                    }
                    this_05 = local_68;
                    ptVar21 = local_48 + 1;
                    ptVar17 = (type*)local_68->end();
                } while (ptVar21 < ptVar17);
            }
        }
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>::operator*(local_50);
    }

    // 0x1004ae0c0, 192 bytes, placed by class name and debug map
    // MapArea::ContainsSource(CoordGrid const&) const
    ulong MapArea::ContainsSource(CoordGrid* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        long lVar4;
        ulong uVar5;
        ulong uVar6;
        CoordMapSquare* this_00;
        undefined1* this_01;
        undefined8 unaff_R15;
        bool bVar7;

        uVar1 = param_1->field_4;
        uVar2 = param_1->field_8;
        this_01 = &field_80;
        lVar4 = this_01->end();
        bVar7 = lVar4 != 0;
        if (bVar7) {
            uVar6 = 0;
            do {
                lVar4 = Array<MapArea::SubArea, eastl::allocator>::operator[](
                    (Array<MapArea::SubArea, eastl::allocator>*)this_01, uVar6);
                this_00 = (CoordMapSquare*)(lVar4 + 4);
                iVar3 = this_00->GetX();
                if (iVar3 <= (int)uVar1) {
                    iVar3 = this_00->Right();
                    if ((int)uVar1 <= iVar3) {
                        iVar3 = this_00->GetZ();
                        if (iVar3 <= (int)uVar2) {
                            iVar3 = this_00->MaxZ();
                            if ((int)uVar2 <= iVar3)
                                break;
                        }
                    }
                }
                uVar6 = uVar6 + 1;
                uVar5 = this_01->end();
                bVar7 = uVar6 < uVar5;
            } while (bVar7);
        }
        return CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar7) & 4294967295;
    }

    // 0x1004ae200, 304 bytes, placed by class name and debug map
    // MapArea::GetTargetCoord(CoordGrid&, CoordGrid const&) const
    ulong MapArea::GetTargetCoord(CoordGrid* param_1, CoordGrid* param_2) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        ulong uVar6;
        int* piVar7;
        ulong uVar8;
        undefined1* this_01;
        undefined8 unaff_R13;
        bool bVar9;
        LocationData local_58;
        uint local_38;
        uint local_34;

        local_38 = param_2->field_4;
        local_34 = param_2->field_8;
        this_01 = &field_80;
        lVar5 = this_01->end();
        bVar9 = lVar5 != 0;
        if (bVar9) {
            uVar8 = 0;
            do {
                piVar7 = (int*)Array<MapArea::SubArea, eastl::allocator>::operator[](
                    (Array<MapArea::SubArea, eastl::allocator>*)this_01, uVar8);
                if (*piVar7 <= (int)param_2->field_0) {
                    this_00 = (CoordMapSquare*)(piVar7 + 1);
                    iVar1 = this_00->GetX();
                    if (iVar1 <= (int)local_38) {
                        iVar1 = this_00->Right();
                        if ((int)local_38 <= iVar1) {
                            iVar1 = this_00->GetZ();
                            if (iVar1 <= (int)local_34) {
                                iVar1 = this_00->MaxZ();
                                if ((int)local_34 <= iVar1) {
                                    iVar1 = ((piVar7 + 5))->GetX();
                                    iVar2 = this_00->GetX();
                                    iVar1 = iVar1 + local_38;
                                    iVar3 = ((piVar7 + 5))->GetZ();
                                    iVar4 = this_00->GetZ();
                                    new (&local_58) oldscape::rs2lib::worldmap::LocationData(
                                        0, iVar1 - iVar2, (iVar3 + local_34) - iVar4);
                                    param_1->field_8 = local_58.field_8;
                                    param_1->field_0 = local_58.field_0;
                                    param_1->field_4 = local_58.field_4;
                                    break;
                                }
                            }
                        }
                    }
                }
                uVar8 = uVar8 + 1;
                uVar6 = this_01->end();
                bVar9 = uVar8 < uVar6;
            } while (bVar9);
        }
        return CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar9) & 4294967295;
    }

    // 0x1004ae330, 304 bytes, placed by class name and debug map
    // MapArea::GetSourceCoord(CoordGrid&, CoordGrid const&) const
    ulong MapArea::GetSourceCoord(CoordGrid* param_1, CoordGrid* param_2) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        ulong uVar6;
        int* piVar7;
        ulong uVar8;
        undefined8 unaff_R12;
        undefined1* this_01;
        bool bVar9;
        LocationData local_58;
        int local_3c;
        uint local_38;
        uint local_34;

        local_38 = param_2->field_4;
        local_34 = param_2->field_8;
        this_01 = &field_80;
        lVar5 = this_01->end();
        bVar9 = lVar5 != 0;
        if (bVar9) {
            uVar8 = 0;
            do {
                piVar7 = (int*)Array<MapArea::SubArea, eastl::allocator>::operator[](
                    (Array<MapArea::SubArea, eastl::allocator>*)this_01, uVar8);
                this_00 = (CoordMapSquare*)(piVar7 + 5);
                iVar1 = this_00->GetX();
                if (iVar1 <= (int)local_38) {
                    iVar1 = this_00->Right();
                    if ((int)local_38 <= iVar1) {
                        iVar1 = this_00->GetZ();
                        if (iVar1 <= (int)local_34) {
                            iVar1 = this_00->MaxZ();
                            if ((int)local_34 <= iVar1) {
                                local_3c = *piVar7;
                                iVar1 = ((piVar7 + 1))->GetX();
                                iVar2 = this_00->GetX();
                                iVar1 = iVar1 + local_38;
                                iVar3 = ((piVar7 + 1))->GetZ();
                                iVar4 = this_00->GetZ();
                                new (&local_58) oldscape::rs2lib::worldmap::LocationData(local_3c, iVar1 - iVar2,
                                                                                         (iVar3 + local_34) - iVar4);
                                param_1->field_8 = local_58.field_8;
                                param_1->field_0 = local_58.field_0;
                                param_1->field_4 = local_58.field_4;
                                break;
                            }
                        }
                    }
                }
                uVar8 = uVar8 + 1;
                uVar6 = this_01->end();
                bVar9 = uVar8 < uVar6;
            } while (bVar9);
        }
        return CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar9) & 4294967295;
    }

    // 0x1004ae460, 528 bytes, placed by class name and debug map
    // MapArea::LoadStaticMapElements()
    undefined1 MapArea::LoadStaticMapElements() {
        undefined1* this_00;
        char cVar1;
        ushort uVar2;
        int iVar3;
        uint uVar4;
        undefined* puVar5;
        DataStatus* pDVar6;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar7;
        undefined8* puVar8;
        long lVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        ulong uVar13;
        Js5Index* local_70;
        CoordGrid local_68;
        undefined1* local_58;
        ulong local_50;
        shared_ptr local_48;
        uint local_34;

        if (field_240[16] == '\0') {
            puVar5 = (undefined*)(*(code*)field_0->field_0[3])(field_0, &local_70, Js5Archive::JS5_WORLDMAPLABELS);
            if (puVar5 == DataStatus::READY) {
                pDVar6 = Js5Index::GetGroupID<eastl::string>(local_70, (uint*)(_func_decltype_nullptr*)&local_34,
                                                             (basic_string*)&field_16);
                if (pDVar6 == (DataStatus*)DataStatus::READY) {
                    new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
                        (_func_decltype_nullptr*)&local_34);
                    puVar5 = (undefined*)(field_0, &local_48, Js5Archive::JS5_WORLDMAPLABELS, local_34, 0,
                                          (Priority*)Priority::HIGH, true, false, false)
                                 ->GetFile();
                    if (puVar5 == DataStatus::READY) {
                        local_58 = &field_16;
                        pPVar7 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
                        uVar2 = pPVar7->g2();
                        local_50 = (ulong)uVar2;
                        this_00 = &field_264;
                        this_00->set_max_size(local_50, 4);
                        if (uVar2 != 0) {
                            uVar13 = 0;
                            do {
                                pPVar7 =
                                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
                                iVar3 = pPVar7->g4();
                                new (&local_68) game::CoordGrid(iVar3);
                                puVar8 = (undefined8*)Array<StaticMapElement, eastl::allocator>::operator[](
                                    (Array<StaticMapElement, eastl::allocator>*)this_00, uVar13);
                                *(uint*)(puVar8 + 1) = local_68.field_8;
                                *puVar8 = local_68._0_8_;
                                pPVar7 =
                                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
                                uVar4 = pPVar7->g2();
                                lVar9 = Array<StaticMapElement, eastl::allocator>::operator[](
                                    (Array<StaticMapElement, eastl::allocator>*)this_00, uVar13);
                                *(uint*)(lVar9 + 12) = uVar4 & 65535;
                                pPVar7 =
                                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
                                cVar1 = pPVar7->g1();
                                lVar9 = Array<StaticMapElement, eastl::allocator>::operator[](
                                    (Array<StaticMapElement, eastl::allocator>*)this_00, uVar13);
                                *(bool*)(lVar9 + 16) = cVar1 == '\x01';
                                uVar13 = uVar13 + 1;
                            } while (local_50 != uVar13);
                        }
                        uVar10 = logger::default_logger();
                        uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar10, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/map/MapArea.cpp",
                                            371, "MapArea: Loaded %u static map elements in map area: %s",
                                            (int)local_50, uVar11);
                        field_240[16] = 1;
                    }
                    local_48.~shared_ptr();
                } else if (pDVar6 == (DataStatus*)DataStatus::MISSING) {
                    field_240[16] = 1;
                }
            }
        }
        return field_240[16];
    }

    // 0x1004ae840, 464 bytes, placed by class name and debug map
    // MapArea::GetValidZones(Array<bool, eastl::allocator>&, int, int, int, int) const
    void MapArea::GetValidZones(Array* param_1, int param_2, int param_3, int param_4, int param_5) {
        Minimap* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        long lVar6;
        int* piVar7;
        undefined1* puVar8;
        int iVar9;
        int local_44;
        int local_40;
        int local_34;

        local_40 = param_5;
        local_34 = param_4;
        param_1->clear();
        param_1->set_max_size((long)local_40 * (long)local_34, 0);
        lVar5 = (&field_80)->data();
        lVar6 = (&field_80)->end();
        for (; lVar5 != lVar6; lVar5 = lVar5 + 36) {
            this_00 = (Minimap*)(lVar5 + 20);
            iVar1 = this_00->GetX();
            iVar9 = iVar1 + 7;
            if (-1 < iVar1) {
                iVar9 = iVar1;
            }
            iVar9 = iVar9 >> 3;
            iVar2 = this_00->GetZ();
            iVar1 = iVar2 + 7;
            if (-1 < iVar2) {
                iVar1 = iVar2;
            }
            iVar3 = this_00->GetPos();
            iVar2 = iVar3 + 8;
            if (-1 < iVar3 + 1) {
                iVar2 = iVar3 + 1;
            }
            iVar4 = this_00->GetLevel();
            iVar3 = iVar4 + 8;
            if (-1 < iVar4 + 1) {
                iVar3 = iVar4 + 1;
            }
            if ((((iVar9 < local_34 + param_2) && (iVar1 = iVar1 >> 3, iVar1 < local_40 + param_3)) &&
                 (param_2 <= (iVar2 >> 3) + iVar9)) &&
                (param_3 <= iVar1 + (iVar3 >> 3))) {
                iVar9 = iVar9 - param_2;
                iVar1 = iVar1 - param_3;
                local_44 = (iVar2 >> 3) + iVar9;
                piVar7 = std::min<int>(&local_44, &local_34);
                iVar2 = *piVar7;
                local_44 = (iVar3 >> 3) + iVar1;
                piVar7 = std::min<int>(&local_44, &local_40);
                iVar3 = *piVar7;
                if (iVar1 < iVar3) {
                    do {
                        iVar4 = iVar9;
                        if (iVar9 < iVar2) {
                            do {
                                puVar8 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                                    (Array<bool, eastl::allocator>*)param_1, (long)(local_34 * iVar1 + iVar4));
                                *puVar8 = 1;
                                iVar4 = iVar4 + 1;
                            } while (iVar2 != iVar4);
                        }
                        iVar1 = iVar1 + 1;
                    } while (iVar1 != iVar3);
                }
            }
        }
    }

    // 0x1004b2d10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&MapArea::NullMapArea) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5288, &MapArea::NullMapArea, 4294967296);
    }

} // namespace jag::game

namespace jag {
    // 0x1004adfb0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> >::type make_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator>>()
    jag* jag::make_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                              4ul, true, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        fixed_vector* local_28[2];

        pvVar1 = (void*)aligned_alloc(200, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                  4ul, true, eastl::allocator>>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<eastl::fixed_vector<
                                  eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                  eastl::allocator>>,
                              int,
                              eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                  4ul, true, eastl::allocator>*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
