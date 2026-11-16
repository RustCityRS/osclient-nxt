// libs/game/runetek5/map/MapArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapArea.h"

namespace jag::game {
    // 0x1039bb6b0, set at startup by ___cxx_global_var_init.7
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> MapArea::NullMapArea =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100024170: MapArea::GetMapID() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10005d8c0: MapArea::GetOrigin() const has the same machine code as oldscape::OSClientConsoleUI::GetBounds() const

    // 0x1000b9950: MapArea::GetUniqueName() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000dc670: MapArea::GetAdvisedZoom() const has the same machine code as oldscape::javapal::GameShell::GetMinimumCanvasHeight() const

    // 0x10012d150: MapArea::CompositeTextureMeta::CompositeTextureMeta() has the same machine code as oldscape::FoundObject::FoundObject()

    // 0x10012d160: MapArea::CompositeTextureMeta::~CompositeTextureMeta() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x100450450: MapArea::CompositeTextureMeta::CompositeTextureMeta(MapArea::CompositeTextureMeta&&) has the same machine code as MapSquareStatus::MapSquareStatus(MapSquareStatus&&)

    // 0x1004ac600
    MapArea::MapArea(Js5ResourceProvider* js5ResourceProvider, int arg2, PacketT<Array<unsigned char>>& arg3,
                     PacketT<Array<unsigned char>>& arg4)
        : field_0(js5ResourceProvider), m_mapID(arg2) {
        unsigned short uVar4;
        unsigned short uVar5;
        unsigned int uVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        unsigned int* puVar10;
        unsigned long uVar11;
        unsigned long local_90;

        eastl::string* local_68 = (eastl::string*)&field_16;
        new (local_68) eastl::string();
        eastl::string* local_60 = (eastl::string*)&field_48;
        new (local_60) eastl::string();
        Array<MapArea::SubArea>* local_58 = (Array<MapArea::SubArea>*)&field_80;
        new (local_58) Array<MapArea::SubArea>();
        new (&m_origin) oldscape::rs2lib::worldmap::LocationData(0, 0, 0);
        m_backgroundRGBA = 255;
        field_120 = 1;
        m_advisedZoom = 4294967295;
        new (&field_128) Array<MapArea::CompositeSquare>();
        Array<MapArea::CompositeZone>* local_50 = (Array<MapArea::CompositeZone>*)&field_152;
        new (local_50) Array<MapArea::CompositeZone>();
        uint8_t* local_80 = field_176;
        new (local_80) shared_ptr();
        uint8_t* local_78 = field_192;
        new (local_78) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_216 = 1;
        field_220 = 1;
        new (&field_224) oldscape::dash3d::GridRect(1600, 1600, -1600, -1600);
        new (field_240) oldscape::dash3d::GridRect(12800, 12800, -12800, -12800);
        field_240[16] = 0;
        uint8_t* local_70 = &field_264;
        new (local_70) Array<StaticMapElement>();
        new (&field_288) oldscape::dash3d::GridRect(12800, 12800, -12800, -12800);
        new (m_targetBounds) oldscape::dash3d::GridRect(12800, 12800, -12800, -12800);
        new ((m_targetBounds + 16)) oldscape::rs2lib::worldmap::LocationData(0, 0, 0);
        arg3.gStringCP1252ToUTF8<eastl::string>(local_68, false);
        arg3.gStringCP1252ToUTF8<eastl::string>(local_60, false);
        int iVar6 = arg3.g4s();
        CoordGrid local_a0(iVar6);
        field_112 = local_a0.field_8;
        m_origin = local_a0._0_8_;
        iVar6 = arg3.g4s();
        if (iVar6 != -1) {
            m_backgroundRGBA = iVar6 << 8 | 255;
        }
        field_120 = arg3.g1() == '\x01';
        uint8_t bVar3 = arg3.g1();
        m_advisedZoom = (unsigned int)bVar3;
        arg3.g1();
        Array<MapArea::CompositeSquare>* local_38 = (Array<MapArea::CompositeSquare>*)&field_128;
        bVar3 = arg3.g1();
        unsigned long local_88 = (unsigned long)bVar3;
        local_58->set_max_size(local_88, 4);
        if (bVar3 != 0) {
            uVar11 = 0;
            do {
                local_90 = uVar11;
                puVar10 = (unsigned int*)(*local_58)[uVar11];
                bVar3 = arg3.g1();
                *puVar10 = (unsigned int)bVar3;
                uVar7 = arg3.g2();
                uVar8 = arg3.g2();
                uVar9 = arg3.g2();
                uVar4 = arg3.g2();
                ((puVar10 + 1))->SetMinMax(uVar7 & 65535, uVar9 & 65535, uVar8 & 65535, (unsigned int)uVar4);
                uVar7 = arg3.g2();
                uVar8 = arg3.g2();
                uVar9 = arg3.g2();
                uVar4 = arg3.g2();
                ((puVar10 + 5))->SetMinMax(uVar7 & 65535, uVar9 & 65535, uVar8 & 65535, (unsigned int)uVar4);
                uVar11 = local_90 + 1;
            } while (local_88 != uVar11);
        }
        Array<MapArea::CompositeSquare>* this_00 = local_38;
        uVar4 = arg4.g2();
        this_00->set_max_size((unsigned long)uVar4, 4);
        PacketT<Array<unsigned char> _>* pPVar1 = arg4;
        if (uVar4 != 0) {
            uVar11 = 0;
            do {
                puVar10 = (unsigned int*)(*this_00)[uVar11];
                bVar3 = pPVar1->g1();
                *puVar10 = (unsigned int)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[1] = (unsigned int)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[2] = (unsigned int)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[3] = (unsigned int)uVar5;
                bVar3 = pPVar1->g1();
                puVar10[4] = (unsigned int)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[5] = (unsigned int)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[6] = (unsigned int)uVar5;
                uVar11 = uVar11 + 1;
            } while (uVar4 != uVar11);
        }
        uVar4 = arg4.g2();
        local_50->set_max_size((unsigned long)uVar4, 4);
        pPVar1 = arg4;
        if (uVar4 != 0) {
            uVar11 = 0;
            do {
                puVar10 = (unsigned int*)(*local_50)[uVar11];
                bVar3 = pPVar1->g1();
                *puVar10 = (unsigned int)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[1] = (unsigned int)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[2] = (unsigned int)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[3] = (unsigned int)uVar5;
                bVar3 = pPVar1->g1();
                puVar10[4] = (unsigned int)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[5] = (unsigned int)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[6] = (unsigned int)bVar3;
                uVar5 = pPVar1->g2();
                puVar10[7] = (unsigned int)uVar5;
                uVar5 = pPVar1->g2();
                puVar10[8] = (unsigned int)uVar5;
                bVar3 = pPVar1->g1();
                puVar10[9] = (unsigned int)bVar3;
                bVar3 = pPVar1->g1();
                puVar10[10] = (unsigned int)bVar3;
                uVar11 = uVar11 + 1;
            } while (uVar4 != uVar11);
        }
        bVar3 = arg4.g1();
        field_216 = (unsigned int)bVar3;
        bVar3 = arg4.g1();
        field_220 = (unsigned int)bVar3;
        CalculateBounds();
    }

    // 0x1004ad170
    void MapArea::CalculateBounds() {
        uint8_t* this_00;
        int iVar5;
        unsigned long uVar8;
        unsigned long uVar10;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        uint8_t* puVar11 = &field_80;
        uint8_t* puVar1 = &field_288;
        MapArea* local_38 = this;
        long lVar7 = puVar11->end();
        if (lVar7 != 0) {
            this_00 = local_38->m_targetBounds;
            uVar10 = 0;
            do {
                lVar7 = (*puVar11)[uVar10];
                puVar1->Union(*((lVar7 + 4)));
                this_00->Union(*((lVar7 + 20)));
                uVar10 = uVar10 + 1;
                uVar8 = puVar11->end();
            } while (uVar10 < uVar8);
        }
        auto piVar9 = puVar1->SSOBeginPtr();
        int iVar2 = *piVar9;
        int iVar4 = puVar1->Right();
        MapArea* pMVar3 = local_38;
        *(int*)&local_38->field_324 = (iVar4 + iVar2) / 2;
        piVar9 = (int*)puVar1->y();
        iVar2 = *piVar9;
        iVar4 = puVar1->MaxZ();
        pMVar3->field_328 = (iVar4 + iVar2) / 2;
        puVar11 = &pMVar3->field_128;
        puVar1 = &pMVar3->field_224;
        lVar7 = puVar11->end();
        if (lVar7 != 0) {
            uVar10 = 0;
            do {
                local_48 = shared_ptr();
                lVar7 = (*puVar11)[uVar10];
                iVar2 = *(int*)(lVar7 + 20);
                lVar7 = (*puVar11)[uVar10];
                local_48.SetMinMax(iVar2 * 8, iVar2 * 8 + 7, *(int*)(lVar7 + 24) << 3, *(int*)(lVar7 + 24) * 8 + 7);
                puVar1->Union(local_48);
                uVar10 = uVar10 + 1;
                uVar8 = puVar11->end();
            } while (uVar10 < uVar8);
        }
        puVar11 = &local_38->field_152;
        lVar7 = puVar11->end();
        if (lVar7 != 0) {
            uVar10 = 0;
            do {
                lVar7 = (*puVar11)[uVar10];
                iVar2 = *(int*)(lVar7 + 28);
                lVar7 = (*puVar11)[uVar10];
                iVar4 = *(int*)(lVar7 + 36);
                lVar7 = (*puVar11)[uVar10];
                iVar5 = *(int*)(lVar7 + 32);
                lVar7 = (*puVar11)[uVar10];
                puVar1->Union(iVar2 * 8 + iVar4, iVar5 * 8 + *(int*)(lVar7 + 40));
                uVar10 = uVar10 + 1;
                uVar8 = puVar11->end();
            } while (uVar10 < uVar8);
        }
        puVar11 = local_38->field_240;
        piVar9 = (int*)puVar1->SSOBeginPtr();
        iVar2 = *piVar9;
        iVar5 = puVar1->Right();
        piVar9 = (int*)puVar1->y();
        iVar4 = *piVar9;
        int iVar6 = puVar1->MaxZ();
        puVar11->SetMinMax(iVar2 << 3, iVar5 * 8 + 7, iVar4 << 3, iVar6 * 8 + 7);
    }

    // 0x1004ad3d0
    MapArea::MapArea(Js5ResourceProvider* js5ResourceProvider, int arg2, int arg3, int arg4)
        : field_0(js5ResourceProvider), m_mapID(-1) {
        uint8_t* this_00 = &field_80;
        new (this_00) Array<MapArea::SubArea>();
        new (&m_origin) oldscape::rs2lib::worldmap::LocationData(0, arg2, arg3);
        m_backgroundRGBA = 255;
        field_120 = 1;
        m_advisedZoom = 4294967295;
        new (&field_128) Array<MapArea::CompositeSquare>();
        new (&field_152) Array<MapArea::CompositeZone>();
        new (field_176) shared_ptr();
        new (field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_216 = 1;
        field_220 = 1;
        new (&field_224) oldscape::dash3d::GridRect(1600, 1600, -1600, -1600);
        new (field_240) oldscape::dash3d::GridRect(12800, 12800, -12800, -12800);
        field_240[16] = 0;
        new (&field_264) Array<StaticMapElement>();
        new (&field_288) oldscape::dash3d::GridRect(12800, 12800, -12800, -12800);
        new (m_targetBounds) oldscape::dash3d::GridRect(12800, 12800, -12800, -12800);
        new ((m_targetBounds + 16)) oldscape::rs2lib::worldmap::LocationData(0, 0, 0);
        (&field_16)->assign("dummyarea");
        (&field_48)->assign("Dummy Area");
        m_advisedZoom = 0;
        this_00->set_max_size(1, 4);
        uint32_t* puVar1 = (uint32_t*)(*this_00)[0];
        *puVar1 = 0;
        int iVar2 = arg4 / 2;
        ((puVar1 + 1))->SetMinMax(arg2 - iVar2, arg2 + iVar2, arg3 - iVar2, iVar2 + arg3);
        ((puVar1 + 5))->SetMinMax(arg2 - iVar2, arg2 + iVar2, arg3 - iVar2, iVar2 + arg3);
        field_128.clear();
        field_152.clear();
        field_216 = 1;
        field_220 = 1;
        CalculateBounds();
    }

    // 0x1004ad760
    uint8_t* MapArea::GetCompositeTextureMeta(MapArea::CompositeTextureMeta& compositeTextureMeta) {
        uint8_t* compositeTextureMeta_00;
        uint8_t uVar2;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        uint8_t** ppuVar6;
        uint64_t extraout_var;
        uint8_t* puVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_00;
        void* pvVar9;
        uint8_t* puVar10;
        unsigned long arg1;
        bool bVar11;
        PacketView local_e8;
        shared_ptr<render::Texture2D> local_c0;
        Js5Index* local_b0;
        Priority* local_a8;
        unsigned int local_a0;
        uint8_t local_98[8];

        if (m_mapID == -1) {
            ppuVar6 = &DataStatus::MISSING;
        } else {
            compositeTextureMeta_00 = field_192;
            if (compositeTextureMeta_00->operator_cast_to_bool() == '\0') {
                local_b0 = nullptr;
                uVar2 = (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->field_24)((Js5Index**)field_0,
                                                                                     (Js5ArchiveSettings*)&local_b0);
                if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) != DataStatus::READY) {
                    LogAssert("indexStatus == DataStatus::READY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                              "MapArea.cpp",
                              138, nullptr);
                }
                if (local_b0->GetGroupID<char[17]>(0, "compositetexture") != (DataStatus*)DataStatus::READY) {
                    puVar10 = DataStatus::MISSING;
                    goto LAB_1004ad7bf;
                }
                local_e8 = PacketView();
                puVar8 = (uint8_t*)field_0->GetFile(local_e8, *(Js5Archive::JS5_WORLDMAPDATA), 0, m_mapID,
                                                    (Priority*)Priority::HIGH, true, false, false);
                puVar10 = DataStatus::NOTLOADED;
                bVar11 = puVar8 == DataStatus::NOTLOADED;
                if (!bVar11) {
                    new ((local_98 + 8)) RGBAImage();
                    PNGDecoder::LoadFromPacket(*((local_98 + 8)), local_e8);
                    iVar3 = ((local_98 + 8))->GetX();
                    iVar4 = ((local_98 + 8))->GetZ();
                    arg1 = (unsigned long)(iVar4 * iVar3 * 4);
                    local_a8 = (Priority*)operator_new__(arg1);
                    this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)((local_98 + 8))
                                  ->GetDevCredentialsOutputDirectory();
                    pvVar9 = (void*)this_00->data();
                    _memcpy(local_a8, pvVar9, arg1);
                    new (local_98) callstack::Callstack();
                    local_98->AddFormatType(5);
                    local_a0 = ((local_98 + 8))->GetX();
                    uVar5 = ((local_98 + 8))->GetZ();
                    graphicutils::CreateHALTexture2D<render::Texture2D>(
                        (unsigned int)&local_c0, local_a0, (unsigned char*)(unsigned long)uVar5, (unsigned int)local_a8,
                        1, false, false, true, (TextureFormatBitSet)0, local_98._0_4_);
                    *compositeTextureMeta_00 = local_c0;
                    field_208 = 32767.0 / (float)field_216;
                    field_212 = 32767.0 / (float)field_220;
                    ((local_98 + 8))->~RGBAImage();
                }
                if (bVar11)
                    goto LAB_1004ad7bf;
            }
            compositeTextureMeta = *compositeTextureMeta_00;
            ppuVar6 = &DataStatus::READY;
        }
        puVar10 = *ppuVar6;
    LAB_1004ad7bf:
        return puVar10;
    }

    // 0x1004adb00
    void MapArea::ReleaseCompositeTextureMeta() {
        field_192->reset();
    }

    // 0x1004adb70
    void MapArea::GetCompositeMap() {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        Layout* pLVar8;
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>* this_01;
        int iVar10;
        int* piVar11;
        vector<eastl::vector<eastl::vector<int>>, eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true>>* pvVar12;
        vector<int>* pvVar13;
        uint32_t* puVar14;
        long lVar15;
        unsigned long uVar16;
        int* piVar17;
        unsigned int* puVar18;
        vector<eastl::vector<int>>* this_02;
        unsigned int uVar19;
        unsigned int uVar20;
        unsigned long uVar21;
        unsigned long arg1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        MapArea* this_04;
        long lVar22;
        ReturnValue local_b0;
        long local_a0;
        long local_98;
        unsigned long local_90;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        Layout* local_80;
        unsigned long local_78;
        vector<eastl::vector<int>>* local_70;
        MapArea* local_68;
        unsigned long local_60;
        unsigned long local_58;
        int* local_48;
        vector<eastl::vector<int>>* local_40;
        unsigned int local_34;

        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>* local_50 =
            (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>*)field_176;
        if (local_50->operator_cast_to_bool() == '\0') {
            make_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>(&local_b0);
            *local_50 = local_b0;
            this_00 = &field_224;
            local_68 = this;
            iVar10 = this_00->Right();
            piVar11 = (int*)this_00->SSOBeginPtr();
            local_70 = (vector<eastl::vector<int>>*)(unsigned long)(unsigned int)(iVar10 - *piVar11);
            uVar20 = (iVar10 - *piVar11) + 1;
            iVar10 = this_00->MaxZ();
            local_80 = (Layout*)this_00;
            piVar11 = (int*)this_00->y();
            local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)(iVar10 - *piVar11));
            uVar19 = (iVar10 - *piVar11) + 1;
            local_58 = (unsigned long)(int)uVar20;
            local_48 = (int*)(long)(int)uVar19;
            uVar21 = 0;
            local_34 = uVar20;
            do {
                pvVar12 = (vector<eastl::vector<eastl::vector<int>>,
                                  eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true>>*)**local_50;
                local_78 = uVar21;
                local_40 = (vector<eastl::vector<int>>*)(*pvVar12)[uVar21];
                local_40->resize(local_58);
                if (-1 < (int)local_70) {
                    uVar16 = (unsigned long)local_34;
                    uVar21 = 0;
                    do {
                        pvVar13 = (vector<int>*)(*local_40)[uVar21];
                        pvVar13->resize((unsigned long)local_48);
                        if (-1 < (int)(unsigned int)local_60) {
                            arg1 = 0;
                            do {
                                puVar14 = (uint32_t*)(*pvVar13)[arg1];
                                *puVar14 = 4294967295;
                                arg1 = arg1 + 1;
                            } while (uVar19 != arg1);
                        }
                        uVar21 = uVar21 + 1;
                    } while (uVar21 != uVar16);
                }
                uVar21 = local_78 + 1;
            } while (uVar21 != 4);
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_68->field_128;
            lVar15 = this_03->end();
            if (lVar15 != 0) {
                uVar21 = 0;
                local_88 = this_03;
                do {
                    local_90 = uVar21;
                    piVar11 = (int*)(*this_03)[uVar21];
                    pLVar8 = local_80;
                    local_58 = (unsigned long)(unsigned int)piVar11[2];
                    local_34 = piVar11[3];
                    iVar10 = piVar11[5];
                    piVar17 = (int*)local_80->SSOBeginPtr();
                    iVar1 = *piVar17;
                    iVar2 = piVar11[6];
                    piVar17 = (int*)pLVar8->y();
                    if (0 < piVar11[1]) {
                        local_58 = (unsigned long)(unsigned int)((int)local_58 << 3);
                        local_a0 = (long)(iVar2 * 8 - *piVar17);
                        local_98 = (long)(iVar10 * 8 - iVar1);
                        local_34 = local_34 << 6;
                        iVar10 = 0;
                        local_48 = piVar11;
                        do {
                            piVar11 = local_48;
                            pvVar12 = (vector<eastl::vector<eastl::vector<int>>,
                                              eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true>>*)**local_50;
                            local_70 = (vector<eastl::vector<int>>*)(*pvVar12)[(long)iVar10 + (long)piVar11[4]];
                            uVar21 = 0;
                            do {
                                local_40 = (vector<eastl::vector<int>>*)(*local_70)[uVar21 + local_98];
                                lVar15 = local_a0;
                                local_60 = (((uint64_t)local_60._4_4_ << 32) |
                                            (uint32_t)(((int)local_58 + (int)uVar21) * 16384));
                                lVar22 = 0;
                                uVar19 = local_34;
                                local_78 = uVar21;
                                do {
                                    iVar1 = *local_48;
                                    uVar20 = uVar19 | (unsigned int)local_60;
                                    puVar18 = (unsigned int*)(*local_40)[lVar15 + lVar22];
                                    *puVar18 = uVar20 | (iVar1 + iVar10) * 16777216;
                                    lVar22 = lVar22 + 1;
                                    uVar19 = uVar19 + 8;
                                } while (lVar22 != 8);
                                uVar21 = local_78 + 1;
                            } while (uVar21 != 8);
                            iVar10 = iVar10 + 1;
                        } while (iVar10 < local_48[1]);
                    }
                    this_03 = local_88;
                    uVar21 = local_90 + 1;
                    uVar16 = local_88->end();
                } while (uVar21 < uVar16);
            }
            this_04 = (MapArea*)&local_68->field_152;
            lVar15 = this_04->end();
            if (lVar15 != 0) {
                piVar11 = nullptr;
                local_68 = this_04;
                do {
                    local_48 = piVar11;
                    piVar11 = (int*)(*this_04)[(unsigned long)piVar11];
                    pLVar8 = local_80;
                    iVar10 = piVar11[2];
                    iVar1 = piVar11[4];
                    local_40 = (vector<eastl::vector<int>>*)(((uint64_t)local_40._4_4_ << 32) |
                                                             (uint32_t)(piVar11[3] * 8 + piVar11[5]));
                    iVar2 = piVar11[7];
                    iVar3 = piVar11[9];
                    piVar17 = (int*)local_80->SSOBeginPtr();
                    iVar4 = *piVar17;
                    iVar5 = piVar11[8];
                    iVar6 = piVar11[10];
                    piVar17 = (int*)pLVar8->y();
                    this_01 = local_50;
                    if (0 < piVar11[1]) {
                        iVar7 = *piVar17;
                        local_40 = (vector<eastl::vector<int>>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                 (uint32_t)((unsigned int)local_40 << 3 |
                                                                            (iVar10 * 8 + iVar1) * 16384));
                        local_60 = (unsigned long)((iVar2 * 8 + iVar3) - iVar4);
                        iVar10 = 0;
                        do {
                            uVar19 = (*piVar11 + iVar10) * 16777216 | (unsigned int)local_40;
                            pvVar12 = (vector<eastl::vector<eastl::vector<int>>,
                                              eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true>>*)**this_01;
                            this_02 = (vector<eastl::vector<int>>*)(*pvVar12)[(long)(piVar11[6] + iVar10)];
                            pvVar13 = (vector<int>*)(*this_02)[local_60];
                            puVar18 = (unsigned int*)(*pvVar13)[(long)((iVar5 * 8 + iVar6) - iVar7)];
                            *puVar18 = uVar19;
                            iVar10 = iVar10 + 1;
                        } while (iVar10 < piVar11[1]);
                    }
                    this_04 = local_68;
                    piVar11 = (int*)((long)local_48 + 1);
                    piVar17 = (int*)local_68->end();
                } while (piVar11 < piVar17);
            }
        }
        **local_50;
    }

    // 0x1004ae0c0
    unsigned long MapArea::ContainsSource(const CoordGrid& coordGrid) const {
        int iVar3;
        unsigned long uVar5;
        unsigned long arg1;
        CoordMapSquare* this_00;

        unsigned int uVar1 = coordGrid.field_4;
        unsigned int uVar2 = coordGrid.field_8;
        uint8_t* this_01 = &field_80;
        long lVar4 = this_01->end();
        bool bVar6 = lVar4 != 0;
        if (bVar6) {
            arg1 = 0;
            do {
                lVar4 = (*this_01)[arg1];
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
                arg1 = arg1 + 1;
                uVar5 = this_01->end();
                bVar6 = arg1 < uVar5;
            } while (bVar6);
        }
        return bVar6 & 4294967295;
    }

    // 0x1004ae200
    unsigned long MapArea::GetTargetCoord(CoordGrid& coordGrid1, const CoordGrid& coordGrid2) const {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        unsigned long uVar6;
        int* piVar7;
        unsigned long arg1;
        LocationData local_58;

        unsigned int local_38 = coordGrid2.field_4;
        unsigned int local_34 = coordGrid2.field_8;
        uint8_t* this_01 = &field_80;
        bool bVar8 = this_01->end() != 0;
        if (bVar8) {
            arg1 = 0;
            do {
                piVar7 = (int*)(*this_01)[arg1];
                if (*piVar7 <= (int)coordGrid2.field_0) {
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
                                    local_58 = oldscape::rs2lib::worldmap::LocationData(0, iVar1 - iVar2,
                                                                                        (iVar3 + local_34) - iVar4);
                                    coordGrid1.field_8 = local_58.field_8;
                                    coordGrid1.field_0 = local_58.field_0;
                                    coordGrid1.field_4 = local_58.field_4;
                                    break;
                                }
                            }
                        }
                    }
                }
                arg1 = arg1 + 1;
                uVar6 = this_01->end();
                bVar8 = arg1 < uVar6;
            } while (bVar8);
        }
        return bVar8 & 4294967295;
    }

    // 0x1004ae330
    unsigned long MapArea::GetSourceCoord(CoordGrid& coordGrid1, const CoordGrid& coordGrid2) const {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        unsigned long uVar6;
        int* piVar7;
        unsigned long arg1;
        LocationData local_58;
        int local_3c;

        unsigned int local_38 = coordGrid2.field_4;
        unsigned int local_34 = coordGrid2.field_8;
        uint8_t* this_01 = &field_80;
        bool bVar8 = this_01->end() != 0;
        if (bVar8) {
            arg1 = 0;
            do {
                piVar7 = (int*)(*this_01)[arg1];
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
                                local_58 = oldscape::rs2lib::worldmap::LocationData(local_3c, iVar1 - iVar2,
                                                                                    (iVar3 + local_34) - iVar4);
                                coordGrid1.field_8 = local_58.field_8;
                                coordGrid1.field_0 = local_58.field_0;
                                coordGrid1.field_4 = local_58.field_4;
                                break;
                            }
                        }
                    }
                }
                arg1 = arg1 + 1;
                uVar6 = this_01->end();
                bVar8 = arg1 < uVar6;
            } while (bVar8);
        }
        return bVar8 & 4294967295;
    }

    // 0x1004ae460
    uint8_t MapArea::LoadStaticMapElements() {
        uint8_t* this_00;
        uint8_t uVar1;
        char cVar2;
        unsigned short uVar3;
        int arg1;
        unsigned int uVar4;
        uint64_t extraout_var;
        DataStatus* pDVar5;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar7;
        uint64_t* puVar8;
        long lVar9;
        Logger* this_01;
        uint64_t uVar10;
        unsigned long arg1_00;
        Js5Index* local_70;
        Priority* local_68;
        unsigned int local_60;
        EncodeType* local_58;
        unsigned long local_50;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        unsigned int local_34;

        if (field_240[16] == '\0') {
            uVar1 = (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->field_24)((Js5Index**)field_0,
                                                                                 (Js5ArchiveSettings*)&local_70);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
                pDVar5 = local_70->GetGroupID<eastl::string>(local_34, field_16);
                if (pDVar5 == (DataStatus*)DataStatus::READY) {
                    local_48 = shared_ptr();
                    if ((uint8_t*)field_0->GetFile(local_48, *(Js5Archive::JS5_WORLDMAPLABELS), local_34, 0,
                                                   (Priority*)Priority::HIGH, true, false,
                                                   false) == DataStatus::READY) {
                        local_58 = (EncodeType*)&field_16;
                        pPVar7 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_48.operator->();
                        uVar3 = pPVar7->g2();
                        local_50 = (unsigned long)uVar3;
                        this_00 = &field_264;
                        this_00->set_max_size(local_50, 4);
                        if (uVar3 != 0) {
                            arg1_00 = 0;
                            do {
                                pPVar7 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_48.operator->();
                                arg1 = pPVar7->g4();
                                new (&local_68) game::CoordGrid(arg1);
                                puVar8 = (uint64_t*)(*this_00)[arg1_00];
                                *(unsigned int*)(puVar8 + 1) = local_60;
                                *puVar8 = local_68;
                                pPVar7 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_48.operator->();
                                uVar4 = pPVar7->g2();
                                lVar9 = (*this_00)[arg1_00];
                                *(unsigned int*)(lVar9 + 12) = uVar4 & 65535;
                                pPVar7 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_48.operator->();
                                cVar2 = pPVar7->g1();
                                lVar9 = (*this_00)[arg1_00];
                                *(bool*)(lVar9 + 16) = cVar2 == '\x01';
                                arg1_00 = arg1_00 + 1;
                            } while (local_50 != arg1_00);
                        }
                        this_01 = logger::default_logger();
                        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_01->Log(false, 8,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                     "runetek5/map/MapArea.cpp",
                                     371, "MapArea: Loaded %u static map elements in map area: %s", (int)local_50,
                                     uVar10);
                        field_240[16] = 1;
                    }
                } else if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
                    field_240[16] = 1;
                }
            }
        }
        return field_240[16];
    }

    // 0x1004ae840
    void MapArea::GetValidZones(Array<bool>& arg1, int arg2, int arg3, int arg4, int arg5) const {
        Minimap* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int* piVar7;
        uint8_t* puVar8;
        int iVar9;
        int local_44;

        arg1.clear();
        arg1.set_max_size((long)arg5 * (long)arg4, 0);
        long lVar5 = field_80.data();
        long lVar6 = field_80.end();
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
            if ((((iVar9 < arg4 + arg2) && (iVar1 = iVar1 >> 3, iVar1 < arg5 + arg3)) &&
                 (arg2 <= (iVar2 >> 3) + iVar9)) &&
                (arg3 <= iVar1 + (iVar3 >> 3))) {
                iVar9 = iVar9 - arg2;
                iVar1 = iVar1 - arg3;
                local_44 = (iVar2 >> 3) + iVar9;
                piVar7 = std::min<int>(local_44, arg4);
                iVar2 = *piVar7;
                local_44 = (iVar3 >> 3) + iVar1;
                piVar7 = std::min<int>(local_44, arg5);
                iVar3 = *piVar7;
                if (iVar1 < iVar3) {
                    do {
                        iVar4 = iVar9;
                        if (iVar9 < iVar2) {
                            do {
                                puVar8 = &arg1[(long)(arg4 * iVar1 + iVar4)];
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

} // namespace jag::game

namespace jag {
    // 0x1004adfb0
    shared_ptr_if_not_array<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::type
    make_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>() {
        ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>* ref_counter_shared;
        int local_2c;
        fixed_vector<eastl::vector<eastl::vector<int>>, _4ul>* local_28[2];

        auto arg1 = aligned_alloc(200, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::type result;
        } else {
            local_28[0] =
                placement_new<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>, int,
                              eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
