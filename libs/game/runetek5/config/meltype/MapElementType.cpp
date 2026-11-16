// libs/game/runetek5/config/meltype/MapElementType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapElementType.h"

namespace jag::game {
    // 0x1039bbc00, 16 bytes, __common; set at startup by ___cxx_global_var_init.13
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> MapElementType::NullMapElementType;

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    MapElementType::GetMyID() const;

    // 0x10012f260: the linker folded this into oldscape::social::OnlinePlayerData<oldscape::social::FriendChatUser>::GetWorldId() const, which has identical code
    MapElementType::GetTextSize() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    MapElementType::GetSpriteID() const;

    // 0x100515c90, 2704 bytes, placed by class name and debug map
    // MapElementType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* MapElementType::DecodeType(PacketT* param_1, uint param_2) {
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        char cVar1;
        bool bVar2;
        byte bVar3;
        ushort uVar4;
        short sVar5;
        short sVar6;
        int iVar7;
        uint uVar8;
        undefined4 uVar9;
        fixed_string* pfVar10;
        uint* puVar11;
        int* piVar12;
        undefined4* puVar13;
        vector<math::Point<int>, eastl::allocator>* pvVar14;
        Layout* this_01;
        vector* pvVar15;
        Vector2T<int>* this_02;
        Js5RequestKey* this_03;
        Js5RequestKey* pJVar16;
        long lVar17;
        undefined8 uVar18;
        ulong uVar19;
        type* ptVar20;
        type* ptVar21;
        undefined1* puVar22;
        MakeUniquePool<MapElementType::Polygon, 256> local_48[8];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* local_40;
        type* local_38;

        switch (param_2) {
        case 1:
            uVar8 = param_1->gSmart2or4s();
            field_56 = uVar8;
            break;
        case 2:
            uVar8 = param_1->gSmart2or4s();
            field_60 = uVar8;
            break;
        case 3:
            pfVar10 = (fixed_string*)&field_64;
            goto LAB_1005162cc;
        case 4:
            iVar7 = param_1->g3();
            field_128 = iVar7 << 8 | 255;
            break;
        case 5:
            iVar7 = param_1->g3();
            field_132 = iVar7 << 8 | 255;
            break;
        case 6:
            bVar3 = param_1->g1();
            field_136 = (uint)bVar3;
            break;
        case 7:
            uVar19 = param_1->g1();
            if ((uVar19 & 1) == 0) {
                field_148 = 0;
            }
            if ((uVar19 & 2) != 0) {
                m_showOnMiniMap = 1;
            }
            break;
        case 8:
            cVar1 = param_1->g1();
            field_150 = cVar1 == '\x01';
            break;
        case 9:
            uVar4 = param_1->g2();
            uVar8 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar8 = 4294967295;
            }
            field_260 = uVar8;
            uVar4 = param_1->g2();
            uVar8 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar8 = 4294967295;
            }
            field_264 = uVar8;
            iVar7 = param_1->g4();
            field_252 = iVar7;
            iVar7 = param_1->g4();
            field_256 = iVar7;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
            puVar22 = &field_152;
            cVar1 = puVar22->empty();
            if (cVar1 != '\0') {
                puVar22->resize(5);
            }
            pfVar10 = (fixed_string*)
                eastl::vector<eastl::fixed_string<char, 8, true, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::fixed_string<char, 8, true, eastl::allocator>, eastl::allocator>*)puVar22,
                    (long)(int)(param_2 - 10));
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::fixed_string<char, 8, true, eastl::allocator>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pfVar10, false);
            break;
        case 15:
            puVar22 = &field_312;
            bVar2 = puVar22->operator_cast_to_bool();
            if (!bVar2) {
                MakeUniquePool<MapElementType::Polygon, 256>::MakeUnique<>(local_48);
                std::unique_ptr<MapElementType::Polygon,
                                MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                operator=((unique_ptr<MapElementType::Polygon,
                                      MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22,
                          (unique_ptr*)local_48);
                local_48->~unique_ptr();
            }
            bVar3 = param_1->g1();
            uVar19 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            eastl::vector<math::Point<int>, eastl::allocator>::resize(uVar19);
            if (bVar3 != 0) {
                ptVar20 = (type*)0;
                local_40 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1;
                do {
                    this_00 = local_40;
                    sVar6 = local_40->g2s();
                    sVar5 = this_00->g2s();
                    pvVar14 =
                        (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                            MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                        operator->(
                            (unique_ptr<MapElementType::Polygon,
                                        MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
                    ptVar21 = ptVar20;
                    this_01 =
                        (Layout*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](pvVar14, (ulong)ptVar20);
                    pvVar15 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar21);
                    *(int*)pvVar15 = (int)sVar6 << 7;
                    pvVar14 =
                        (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                            MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                        operator->(
                            (unique_ptr<MapElementType::Polygon,
                                        MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
                    this_02 = (Vector2T<int>*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                        pvVar14, (ulong)ptVar20);
                    piVar12 = (int*)this_02->y();
                    *piVar12 = (int)sVar5 << 7;
                    ptVar20 = ptVar20 + 1;
                    param_1 = (PacketT*)local_40;
                } while ((type*)(ulong)bVar3 != ptVar20);
            }
            local_38 = (type*)(ulong)bVar3;
            uVar8 = param_1->g4();
            lVar17 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            *(uint*)(lVar17 + 48) = uVar8 << 8 | uVar8 >> 24;
            bVar3 = param_1->g1();
            lVar17 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            ((lVar17 + 64))->set_max_size((ulong)bVar3, 0);
            if (bVar3 != 0) {
                uVar19 = 0;
                do {
                    uVar8 = param_1->g4();
                    lVar17 = std::unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                             operator->(
                                 (unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
                    puVar11 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)(lVar17 + 64), uVar19);
                    *puVar11 = uVar8 << 8 | uVar8 >> 24;
                    uVar19 = uVar19 + 1;
                } while (bVar3 != uVar19);
            }
            lVar17 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            ptVar20 = local_38;
            ((lVar17 + 88))->set_max_size((ulong)local_38, 0);
            if (ptVar20 != (type*)0) {
                ptVar21 = (type*)0;
                do {
                    cVar1 = param_1->g1s();
                    lVar17 = std::unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                             operator->(
                                 (unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar17 + 88), (ulong)ptVar21);
                    *piVar12 = (int)cVar1;
                    ptVar21 = ptVar21 + 1;
                } while (ptVar20 != ptVar21);
            }
            pvVar14 = (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                          MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                      operator->((unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            this_03 = (Js5RequestKey*)eastl::vector<math::Point<int>, eastl::allocator>::front(pvVar14);
            pvVar14 = (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                          MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                      operator->((unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            pJVar16 = (Js5RequestKey*)eastl::vector<math::Point<int>, eastl::allocator>::back(pvVar14);
            cVar1 = oldscape::jagex3::Js5RequestKey::operator==(this_03, pJVar16);
            if (cVar1 != '\0') {
                pvVar14 =
                    (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                        MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                    operator->((unique_ptr<MapElementType::Polygon,
                                           MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
                eastl::vector<math::Point<int>, eastl::allocator>::pop_back(pvVar14);
            }
            pvVar15 = (vector*)std::unique_ptr<MapElementType::Polygon,
                                               MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                      operator->((unique_ptr<MapElementType::Polygon,
                                             MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            Triangulate::ConvertPolygon(pvVar15 + 112, pvVar15);
            break;
        case 16:
            m_listable = 0;
            break;
        case 17:
            pfVar10 = (fixed_string*)&field_184;
        LAB_1005162cc:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::fixed_string<char, 24, true, eastl::allocator>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pfVar10, false);
            break;
        case 18:
            uVar9 = param_1->gSmart2or4s();
            field_248 = uVar9;
            break;
        case 19:
            uVar4 = param_1->g2();
            m_category = (uint)uVar4;
            break;
        case 20:
            uVar4 = param_1->g2();
            uVar8 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar8 = 4294967295;
            }
            field_276 = uVar8;
            uVar4 = param_1->g2();
            uVar8 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar8 = 4294967295;
            }
            field_280 = uVar8;
            iVar7 = param_1->g4();
            field_268 = iVar7;
            iVar7 = param_1->g4();
            field_272 = iVar7;
            break;
        case 21:
            uVar8 = param_1->g4();
            field_144 = uVar8 << 8 | uVar8 >> 24;
            break;
        case 22:
            uVar8 = param_1->g4();
            field_140 = uVar8 << 8 | uVar8 >> 24;
            break;
        case 23:
            puVar22 = &field_312;
            bVar2 = puVar22->operator_cast_to_bool();
            if (!bVar2) {
                MakeUniquePool<MapElementType::Polygon, 256>::MakeUnique<>(local_48);
                std::unique_ptr<MapElementType::Polygon,
                                MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                operator=((unique_ptr<MapElementType::Polygon,
                                      MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22,
                          (unique_ptr*)local_48);
                local_48->~unique_ptr();
            }
            bVar3 = param_1->g1();
            lVar17 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            *(uint*)(lVar17 + 52) = (uint)bVar3;
            bVar3 = param_1->g1();
            lVar17 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            *(uint*)(lVar17 + 56) = (uint)bVar3;
            bVar3 = param_1->g1();
            lVar17 = std::unique_ptr<MapElementType::Polygon,
                                     MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)puVar22);
            *(uint*)(lVar17 + 60) = (uint)bVar3;
            break;
        case 24:
            sVar6 = param_1->g2s();
            field_320 = (int)sVar6 << 7;
            sVar6 = param_1->g2s();
            field_324 = (int)sVar6 << 7;
            break;
        case 25:
            uVar9 = param_1->gSmart2or4s();
            field_336 = uVar9;
            break;
        case 26:
        case 27:
            uVar4 = param_1->g2();
            uVar8 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar8 = 4294967295;
            }
            field_260 = uVar8;
            uVar4 = param_1->g2();
            uVar8 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar8 = 4294967295;
            }
            field_264 = uVar8;
            uVar8 = 4294967295;
            if (param_2 == 27) {
                uVar4 = param_1->g2();
                uVar8 = 4294967295;
                if (uVar4 != 65535) {
                    uVar8 = (uint)uVar4;
                }
            }
            local_38 = (type*)CONCAT44(local_38._4_4_, uVar8);
            bVar3 = param_1->g1();
            puVar22 = &field_288;
            uVar19 = 0;
            puVar22->set_max_size((ulong)(bVar3 + 2), 0);
            do {
                uVar4 = param_1->g2();
                puVar11 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar22, uVar19);
                *puVar11 = (uint)uVar4;
                piVar12 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar22, uVar19);
                if (*piVar12 == 65535) {
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar22, uVar19);
                    *puVar13 = 4294967295;
                }
                uVar19 = uVar19 + 1;
            } while (bVar3 + 1 != uVar19);
            puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar22,
                                                                            (ulong)(bVar3 + 1));
            *puVar13 = local_38._0_4_;
            break;
        case 28:
            bVar3 = param_1->g1();
            field_340 = (uint)bVar3;
            break;
        case 29:
            bVar3 = param_1->g1();
            field_344 = (uint)bVar3;
            break;
        case 30:
            bVar3 = param_1->g1();
            m_vAlign = (uint)bVar3;
            break;
        default:
            uVar18 = logger::default_logger();
            logger::Logger::Log(uVar18, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/meltype/MapElementType.cpp",
                                262, "Unrecognised .mel config code: %u", param_2);
            break;
        case 249:
            DecodeParams(param_1);
        }
        return DataStatus::READY;
    }

    // 0x100517070, 352 bytes, placed by class name
    // MapElementType::PostDecode()
    void MapElementType::PostDecode() {
        int iVar1;
        undefined4 uVar3;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar4;
        long lVar5;
        vector<math::Point<int>, eastl::allocator>* pvVar6;
        Layout* this_00;
        vector* pvVar7;
        Vector2T<int>* this_01;
        int* piVar8;
        type* ptVar9;
        int iVar10;
        uint uVar11;
        undefined1* this_02;
        int iVar12;
        type* ptVar13;

        this_02 = &field_312;
        if (this_02->operator_cast_to_bool()) {
            pvVar4 = (vector<eastl::pair<int, int>, eastl::allocator>*)std::unique_ptr<
                         MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                     operator->((unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
            lVar5 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar4);
            if (lVar5 != 0) {
                uVar11 = 2;
                ptVar13 = (type*)0;
                do {
                    pvVar6 =
                        (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                            MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                        operator->(
                            (unique_ptr<MapElementType::Polygon,
                                        MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    ptVar9 = ptVar13;
                    this_00 =
                        (Layout*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](pvVar6, (ulong)ptVar13);
                    pvVar7 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar9);
                    iVar1 = *(int*)pvVar7;
                    iVar10 = iVar1 + 127;
                    if (-1 < iVar1) {
                        iVar10 = iVar1;
                    }
                    pvVar6 =
                        (vector<math::Point<int>, eastl::allocator>*)std::unique_ptr<
                            MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                        operator->(
                            (unique_ptr<MapElementType::Polygon,
                                        MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    this_01 = (Vector2T<int>*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                        pvVar6, (ulong)ptVar13);
                    piVar8 = (int*)this_01->y();
                    iVar1 = *piVar8;
                    iVar12 = iVar1 + 127;
                    if (-1 < iVar1) {
                        iVar12 = iVar1;
                    }
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    uVar3 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(lVar5 + 32), iVar10 >> 7);
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    *(undefined4*)(lVar5 + 32) = uVar3;
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    uVar3 = eastl::max<int>(*(int*)(lVar5 + 40), iVar10 >> 7);
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    *(undefined4*)(lVar5 + 40) = uVar3;
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    uVar3 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(lVar5 + 36), iVar12 >> 7);
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    *(undefined4*)(lVar5 + 36) = uVar3;
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    uVar3 = eastl::max<int>(*(int*)(lVar5 + 44), iVar12 >> 7);
                    lVar5 = std::unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<MapElementType::Polygon,
                                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    *(undefined4*)(lVar5 + 44) = uVar3;
                    ptVar13 = (type*)(ulong)uVar11;
                    pvVar4 =
                        (vector<eastl::pair<int, int>, eastl::allocator>*)std::unique_ptr<
                            MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
                        operator->(
                            (unique_ptr<MapElementType::Polygon,
                                        MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)this_02);
                    ptVar9 = (type*)eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar4);
                    uVar11 = uVar11 + 2;
                } while (ptVar13 < ptVar9);
            }
        }
    }

    // 0x1005171d0, 624 bytes, placed by class name
    // MapElementType::GetSprite(graphics::RT7Core&, bool)
    PacketView* MapElementType::GetSprite(RT7Core* param_1, bool param_2) {
        uint uVar1;
        bool bVar2;
        char cVar3;
        uint uVar4;
        PacketView* this_00;
        SpriteAtlasReference* this_01;
        Js5ResourceProvider* this_02;
        undefined* puVar5;
        TextureManager* this_03;
        LoginManager* this_04;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_05;
        CoordMapSquare* pCVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_06;
        shared_ptr* psVar7;
        PacketView* this_07;
        undefined7 in_register_00000011;
        PacketView local_b0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_88[16];
        shared_ptr local_78;
        MapElementTypeList* local_68;
        void* local_60;
        undefined8 local_58;
        vector local_50[24];
        uint local_38;
        char local_31;

        if (((int)CONCAT71(in_register_00000011, param_2) == 0) || (uVar1 = field_60, uVar1 == 4294967295)) {
            uVar1 = field_56;
        }
        if (uVar1 == 4294967295) {
            return (PacketView*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        }
        local_68 = (MapElementTypeList*)field_24;
        this_00 = (PacketView*)MapElementTypeList::FindCachedSprite((int)local_68);
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            this_01 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            cVar3 = this_01->IsReady();
            if (cVar3 != '\0') {
                return this_00;
            }
        }
        this_02 = (Js5ResourceProvider*)field_24->GetOutputType();
        this_07 = &local_b0;
        PacketView::PacketView(this_07);
        puVar5 = (undefined*)this_02->GetFile(this_07, Js5Archive::JS5_SPRITES, uVar1, 0, (Priority*)Priority::HIGH,
                                              true, false, false);
        if (puVar5 == DataStatus::READY) {
            eastl::vector<RGBAImage, BucketAllocatorEASTL>::vector();
            local_31 = RAWDecoder::LoadFromPacket(local_50, &local_b0);
            if (local_31 != '\0') {
                this_03 = (TextureManager*)param_1->GetTextureManager();
                local_60 = (void*)this_03->GetSpriteAtlasManager();
                this_04 = (LoginManager*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                this_05 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_04->GetDevCredentialsOutputDirectory();
                local_58 = this_05->data();
                pCVar6 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                local_38 = pCVar6->GetX();
                pCVar6 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                uVar4 = pCVar6->GetZ();
                this_06 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                    eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                psVar7 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_06);
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_88,
                                                                                         (_func_decltype_nullptr*)0);
                local_78.AddRuntimeSprite(local_60, (uint)local_58, local_38, uVar4, (fixed_vector*)&DAT_00000001,
                                          psVar7);
                local_88->~shared_ptr();
                this_07 = (PacketView*)local_68->CacheSprite(&local_78, uVar1);
                local_78.~shared_ptr();
            }
            local_50->~vector();
            if (local_31 != '\0') {
                bVar2 = false;
                goto LAB_1005173c6;
            }
        }
        bVar2 = true;
    LAB_1005173c6:
        local_b0.~PacketView();
        if (bVar2) {
            return this_00;
        }
        return this_07;
    }

    // 0x1005174a0, 592 bytes, placed by class name
    // MapElementType::GetFlashSprite(graphics::RT7Core&)
    PacketView* MapElementType::GetFlashSprite(RT7Core* param_1) {
        MapElementTypeList* this_00;
        bool bVar1;
        char cVar2;
        SpriteAtlasReference* this_01;
        Js5ResourceProvider* this_02;
        undefined* puVar3;
        TextureManager* this_03;
        LoginManager* this_04;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_05;
        CoordMapSquare* pCVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_06;
        shared_ptr* psVar5;
        PacketView* this_07;
        PacketView local_b0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_88[16];
        shared_ptr local_78;
        void* local_68;
        undefined8 local_60;
        vector local_58[24];
        PacketView* local_40;
        uint local_38;
        uint local_34;

        if (field_336 == -1) {
            return (PacketView*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        }
        this_00 = (MapElementTypeList*)field_24;
        local_40 = (PacketView*)MapElementTypeList::FindCachedSprite((int)this_00);
        bVar1 = local_40->operator_cast_to_bool();
        if (bVar1) {
            this_01 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)local_40);
            cVar2 = this_01->IsReady();
            if (cVar2 != '\0') {
                return local_40;
            }
        }
        this_02 = (Js5ResourceProvider*)field_24->GetOutputType();
        this_07 = &local_b0;
        PacketView::PacketView(this_07);
        puVar3 = (undefined*)this_02->GetFile(this_07, Js5Archive::JS5_SPRITES, field_336, 0, (Priority*)Priority::HIGH,
                                              true, false, false);
        if (puVar3 == DataStatus::READY) {
            eastl::vector<RGBAImage, BucketAllocatorEASTL>::vector();
            cVar2 = RAWDecoder::LoadFromPacket(local_58, &local_b0);
            if (cVar2 != '\0') {
                this_03 = (TextureManager*)param_1->GetTextureManager();
                local_68 = (void*)this_03->GetSpriteAtlasManager();
                this_04 = (LoginManager*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_58, 0);
                this_05 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_04->GetDevCredentialsOutputDirectory();
                local_60 = this_05->data();
                pCVar4 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_58, 0);
                local_38 = pCVar4->GetX();
                pCVar4 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                    (vector<RGBAImage, BucketAllocatorEASTL>*)local_58, 0);
                local_34 = pCVar4->GetZ();
                this_06 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                    eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_58, 0);
                psVar5 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_06);
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_88,
                                                                                         (_func_decltype_nullptr*)0);
                local_78.AddRuntimeSprite(local_68, (uint)local_60, local_38, local_34, (fixed_vector*)&DAT_00000001,
                                          psVar5);
                local_88->~shared_ptr();
                this_07 = (PacketView*)this_00->CacheSprite(&local_78, field_336);
                local_78.~shared_ptr();
            }
            local_58->~vector();
            if (cVar2 != '\0') {
                bVar1 = false;
                goto LAB_100517671;
            }
        }
        bVar1 = true;
    LAB_100517671:
        local_b0.~PacketView();
        if (bVar1) {
            return local_40;
        }
        return this_07;
    }

    // 0x1005176f0, 400 bytes, placed by class name
    // MapElementType::GetMultiME(PlayerVarDomain const*, ConfigProvider*)
    MapElementType* MapElementType::GetMultiME(PlayerVarDomain* param_1, ConfigProvider* param_2) {
        undefined1* this_00;
        ConfigProvider* this_01;
        char cVar1;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        VarValue* this_02;
        int* piVar5;
        shared_ptr* psVar6;
        int* piVar7;
        ConfigProvider* in_RCX;
        shared_ptr* extraout_RDX;
        enable_shared_from_this<PathingEntity> local_40[16];

        this_00 = &param_1->field_288;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            local_40->shared_from_this();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)this,
                                                                                         (jag*)local_40, extraout_RDX);
            local_40->~shared_ptr();
            return this;
        }
        iVar2 = -1;
        if (param_2 != (ConfigProvider*)0) {
            if (*(int*)&param_1->field_260 == -1) {
                if (*(int*)&param_1->field_264 != -1) {
                    uVar4 = in_RCX->GetVarType(VarDomainType::PLAYER, *(int*)&param_1->field_264);
                    this_02 = (VarValue*)(*(code*)param_2->field_0[2])(param_2, uVar4);
                    iVar2 = this_02->GetInt();
                }
            } else {
                uVar4 = in_RCX->GetVarBitType(*(int*)&param_1->field_260);
                iVar2 = (*(code*)param_2->field_0[4])(param_2, uVar4);
            }
        }
        if ((iVar2 < 0) || (iVar3 = this_00->end(), iVar3 + -1 <= iVar2)) {
            piVar5 = (int*)this_00->data();
            piVar7 = (int*)this_00->end();
            for (; piVar5 != piVar7; piVar5 = piVar5 + 1) {
                if (*piVar5 != -1) {
                    psVar6 = (shared_ptr*)(param_1->field_24, *piVar5, (DataStatus**)0)->List();
                    new (this) shared_ptr<oldscape::dash3d::Decor>(psVar6);
                    return this;
                }
            }
        } else {
            piVar5 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar2);
            if (*piVar5 != -1) {
                this_01 = param_1->field_24;
                piVar5 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar2);
                psVar6 = (shared_ptr*)this_01->List(*piVar5, 0);
                goto LAB_10051784b;
            }
        }
        psVar6 = (shared_ptr*)&NullMapElementType;
    LAB_10051784b:
        new (this) shared_ptr<oldscape::dash3d::Decor>(psVar6);
        return this;
    }

    // 0x1005178b0, 496 bytes, placed by class name
    // MapElementType::VariableTest(bool&, PlayerVarDomain const*, ConfigProvider*)
    undefined* MapElementType::VariableTest(bool* param_1, PlayerVarDomain* param_2, ConfigProvider* param_3) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        VarValue* pVVar6;
        int* piVar7;
        undefined** ppuVar8;

        *param_1 = false;
        uVar1 = field_264;
        if (param_2 == (PlayerVarDomain*)0) {
            ppuVar8 = &DataStatus::MISSING;
            if ((uVar1 != 4294967295) || (field_260 != 4294967295))
                goto LAB_100517a82;
        LAB_100517a74:
            *param_1 = true;
        } else {
            if (uVar1 == 4294967295) {
                if (field_260 == 4294967295)
                    goto LAB_100517a74;
                uVar5 = param_3->GetVarBitType(field_260);
                iVar3 = (*(code*)param_2->field_0[4])(param_2, uVar5);
            } else {
                uVar5 = param_3->GetVarType(VarDomainType::PLAYER, uVar1);
                pVVar6 = (VarValue*)(*(code*)param_2->field_0[2])(param_2, uVar5);
                iVar3 = pVVar6->GetInt();
            }
            this_00 = &field_288;
            cVar2 = this_00->empty();
            if (cVar2 != '\0') {
                ppuVar8 = &DataStatus::READY;
                if ((iVar3 < field_252) || (field_256 < iVar3))
                    goto LAB_100517a82;
            LAB_100517a05:
                if (field_280 == 4294967295) {
                    if (field_276 == 4294967295)
                        goto LAB_100517a74;
                    uVar5 = param_3->GetVarBitType(field_276);
                    iVar3 = (*(code*)param_2->field_0[4])(param_2, uVar5);
                } else {
                    uVar5 = param_3->GetVarType(VarDomainType::PLAYER, field_280);
                    pVVar6 = (VarValue*)(*(code*)param_2->field_0[2])(param_2, uVar5);
                    iVar3 = pVVar6->GetInt();
                }
                ppuVar8 = &DataStatus::READY;
                if ((iVar3 < field_268) || (field_272 < iVar3))
                    goto LAB_100517a82;
                goto LAB_100517a74;
            }
            if ((iVar3 < 0) || (iVar4 = this_00->end(), iVar4 + -1 <= iVar3)) {
                cVar2 = this_00->empty();
                ppuVar8 = &DataStatus::READY;
                if (((cVar2 != '\0') || (piVar7 = (int*)this_00->back(), *piVar7 == -1)) ||
                    ((field_252 != -1 && ((field_256 != -1 && ((iVar3 < field_252 || (field_256 < iVar3))))))))
                    goto LAB_100517a82;
            }
            piVar7 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar3);
            if (*piVar7 != -1)
                goto LAB_100517a05;
        }
        ppuVar8 = &DataStatus::READY;
    LAB_100517a82:
        return *ppuVar8;
    }

    // 0x100521db0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&MapElementType::NullMapElementType) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee51f0, &MapElementType::NullMapElementType, 4294967296);
    }

} // namespace jag::game
