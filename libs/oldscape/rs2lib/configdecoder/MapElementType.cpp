// libs/oldscape/rs2lib/configdecoder/MapElementType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "MapElementType.h"

namespace jag::oldscape::configdecoder {
    // 0x101036e00, 8 bytes, __common; zero-initialised
    MapElementType::m_num;

    // 0x101036e08, 20736 bytes, __common; zero-initialised
    MapElementType::m_spriteCache;

    // 0x10103bf08, 8 bytes, __common; zero-initialised
    MapElementType::m_pConfigClient;

    // 0x10103bf10, 8 bytes, __common; zero-initialised
    MapElementType::m_pSprites;

    // 0x10103bf18, 24 bytes, __common; zero-initialised
    MapElementType::m_list;

    // 0x10022c060, 352 bytes, base-object constructor, placed by class name and debug map
    // MapElementType::MapElementType(int)
    void MapElementType::MapElementType(int param_1) {
        undefined1* this_00;
        ulong uVar1;

        m_iD = param_1;
        field_4 = 4294967295;
        field_8 = 4294967295;
        new (&field_16) eastl::string();
        field_52 = 4294967295;
        field_56 = 0;
        field_68 = 1;
        field_69 = 0;
        field_70 = true;
        this_00 = &field_72;
        new (this_00) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
        new (&field_272) eastl::string();
        field_304 = 4294967295;
        new (&field_312) Array<int, eastl::allocator>();
        field_336 = 2147483647;
        field_340 = 2147483647;
        field_344 = -2147483648;
        field_348 = -2147483648;
        field_356 = 4294967295;
        field_360 = 4294967295;
        field_364 = 4294967295;
        field_376 = 1;
        field_380 = 1;
        new (&field_384) Array<int, eastl::allocator>();
        new (&field_408) Array<signed char, eastl::allocator>();
        field_432 = 4294967295;
        field_436 = 1;
        field_440 = 4294967295;
        field_444 = 4294967295;
        uVar1 = this_00->capacity();
        this_00->resize(uVar1);
    }

    // 0x10022c1c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapElementType::MapElementType(int): jumps straight to the base-object constructor

    // 0x10022c1d0, 384 bytes, placed by class name and debug map
    // MapElementType::Init(jagex3::Js5*, jagex3::Js5*)
    bool MapElementType::Init(Js5* param_1, Js5* param_2) {
        bool bVar1;
        unique_ptr<MapElementType, std::default_delete<MapElementType>>* puVar2;
        MapElementType* pMVar3;
        PacketJ* pPVar4;
        _func_decltype_nullptr* p_Var5;
        shared_ptr local_58;
        unique_ptr local_48[8];
        long local_40;
        uint local_34;

        m_pConfigClient = param_1;
        m_pSprites = param_2;
        local_40 = param_1->RequestFullDownload();
        if (local_40 != 0) {
            m_num = param_1->GetFileIdLimit(35);
            p_Var5 = (_func_decltype_nullptr*)(long)m_num;
            m_list.set_max_size((ulong)p_Var5, 1);
            local_34 = 0;
            if (0 < m_num) {
                do {
                    new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var5);
                    ((shared_ptr*)param_1)->GetFile((int)&local_58, 35, (array*)(ulong)local_34);
                    std::make_unique<MapElementType, int&>((int*)local_48);
                    puVar2 = (unique_ptr<MapElementType, std::default_delete<MapElementType>>*)
                        Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>, eastl::allocator>::
                        operator[]((Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>,
                                          eastl::allocator>*)&m_list,
                                   (long)(int)local_34);
                    std::unique_ptr<MapElementType, std::default_delete<MapElementType>>::operator=(puVar2, local_48);
                    local_48->~unique_ptr();
                    p_Var5 = (_func_decltype_nullptr*)0;
                    bVar1 = operator!=(&local_58, (_func_decltype_nullptr*)0);
                    if (bVar1) {
                        puVar2 = (unique_ptr<MapElementType, std::default_delete<MapElementType>>*)Array<
                            std::unique_ptr<MapElementType, std::default_delete<MapElementType>>, eastl::allocator>::
                        operator[]((Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>,
                                          eastl::allocator>*)&m_list,
                                   (long)(int)local_34);
                        pMVar3 = (MapElementType*)
                                     std::unique_ptr<MapElementType, std::default_delete<MapElementType>>::operator->(
                                         puVar2);
                        pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_58);
                        Decode(pMVar3, pPVar4);
                        p_Var5 = (_func_decltype_nullptr*)(long)(int)local_34;
                        puVar2 = (unique_ptr<MapElementType, std::default_delete<MapElementType>>*)Array<
                            std::unique_ptr<MapElementType, std::default_delete<MapElementType>>, eastl::allocator>::
                        operator[]((Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>,
                                          eastl::allocator>*)&m_list,
                                   (ulong)p_Var5);
                        pMVar3 = (MapElementType*)
                                     std::unique_ptr<MapElementType, std::default_delete<MapElementType>>::operator->(
                                         puVar2);
                        PostDecode(pMVar3);
                    }
                    local_58.~shared_ptr();
                    local_34 = local_34 + 1;
                } while ((int)local_34 < m_num);
            }
        }
        return local_40 != 0;
    }

    // 0x10022c5c0, 64 bytes, placed by class name and debug map
    // MapElementType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void MapElementType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x10022c600, 304 bytes, placed by class name and debug map
    // MapElementType::PostDecode()
    void MapElementType::PostDecode() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        char cVar3;
        long lVar4;
        ulong uVar5;
        int* piVar6;
        ulong uVar7;

        this_00 = &field_312;
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            lVar4 = this_00->end();
            if (lVar4 != 0) {
                uVar7 = 0;
                do {
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar7);
                    iVar1 = *piVar6;
                    iVar2 = field_336;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar7);
                    if (iVar1 < iVar2) {
                        field_336 = *piVar6;
                    } else if (field_344 < *piVar6) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar7);
                        field_344 = *piVar6;
                    }
                    uVar5 = uVar7 + 1;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar5);
                    iVar1 = *piVar6;
                    iVar2 = field_340;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar5);
                    if (iVar1 < iVar2) {
                        field_340 = *piVar6;
                    } else if (field_348 < *piVar6) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar5);
                        field_348 = *piVar6;
                    }
                    uVar7 = uVar7 + 2;
                    uVar5 = this_00->end();
                } while (uVar7 < uVar5);
            }
        }
    }

    // 0x10022c730, 128 bytes, placed by class name and debug map
    // MapElementType::List(int)
    void MapElementType::List(int param_1) {
        bool bVar1;
        int iVar2;
        unique_ptr* puVar3;
        unique_ptr<MapElementType, std::default_delete<MapElementType>>* this;
        _func_decltype_nullptr* p_Var4;
        _func_decltype_nullptr* p_Var5;

        p_Var5 = (_func_decltype_nullptr*)(long)param_1;
        if (-1 < param_1) {
            iVar2 = m_list.end();
            if (param_1 < iVar2) {
                p_Var4 = p_Var5;
                puVar3 = (unique_ptr*)
                    Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>, eastl::allocator>::
                    operator[]((Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>,
                                      eastl::allocator>*)&m_list,
                               (ulong)p_Var5);
                bVar1 = std::operator!=(puVar3, p_Var4);
                if (bVar1) {
                    this = (unique_ptr<MapElementType, std::default_delete<MapElementType>>*)
                        Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>, eastl::allocator>::
                        operator[]((Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>,
                                          eastl::allocator>*)&m_list,
                                   (ulong)p_Var5);
                    std::unique_ptr<MapElementType, std::default_delete<MapElementType>>::operator*(this);
                    return;
                }
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("id >= 0 && id < (int)m_list.size() && m_list[id] != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/configdecoder/"
                  "MapElementType.cpp",
                  56, (char*)0);
    }

    // 0x10022c7d0, 1088 bytes, placed by class name and debug map
    // MapElementType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void MapElementType::Decode(PacketJ* param_1, int param_2) {
        uint uVar1;
        byte bVar2;
        char cVar3;
        byte bVar4;
        undefined1 uVar5;
        ushort uVar6;
        short sVar7;
        undefined4 uVar8;
        eastl::string* this_00;
        ulong uVar9;
        int* piVar10;
        long lVar11;
        undefined4* puVar12;
        undefined1* puVar13;
        undefined8 uVar14;
        ulong uVar15;
        bool bVar16;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_50[32];

        bVar16 = SUB81(param_1, 0);
        switch (param_2) {
        case 1:
            uVar8 = param_1->gSmart2or4s();
            field_4 = uVar8;
            break;
        case 2:
            uVar8 = param_1->gSmart2or4s();
            field_8 = uVar8;
            break;
        case 3:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar16);
            eastl::string::operator=((eastl::string*)&field_16, (basic_string*)local_50);
            goto LAB_10022c87c;
        case 4:
            uVar8 = param_1->g3();
            field_48 = uVar8;
            break;
        case 5:
            uVar8 = param_1->g3();
            field_52 = uVar8;
            break;
        case 6:
            bVar2 = param_1->g1();
            field_56 = (uint)bVar2;
            break;
        case 7:
            uVar9 = param_1->g1();
            if ((uVar9 & 1) == 0) {
                field_68 = 0;
            }
            if ((uVar9 & 2) != 0) {
                field_69 = 1;
            }
            break;
        case 8:
            cVar3 = param_1->g1();
            field_70 = cVar3 == '\x01';
            break;
        default:
            if (param_2 - 10U < 5) {
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    local_50, bVar16);
                this_00 = (eastl::string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string,
                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&field_72,
                    (ulong)(param_2 - 10U));
                eastl::string::operator=(this_00, (basic_string*)local_50);
            } else {
                switch (param_2) {
                case 15:
                    bVar2 = param_1->g1();
                    uVar1 = (uint)bVar2 * 2;
                    (&field_312, (ulong)uVar1, 5)->set_max_size();
                    if (bVar2 != 0) {
                        uVar9 = 1;
                        if (1 < uVar1) {
                            uVar9 = (ulong)uVar1;
                        }
                        uVar15 = 0;
                        do {
                            sVar7 = param_1->g2s();
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&field_312, uVar15);
                            *piVar10 = (int)sVar7;
                            uVar15 = uVar15 + 1;
                        } while (uVar9 != uVar15);
                    }
                    uVar8 = param_1->g4();
                    field_352 = uVar8;
                    bVar4 = param_1->g1();
                    puVar13 = &field_384;
                    puVar13->set_max_size((ulong)bVar4, 5);
                    lVar11 = puVar13->end();
                    if (lVar11 != 0) {
                        uVar9 = 0;
                        do {
                            uVar8 = param_1->g4();
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)puVar13, uVar9);
                            *puVar12 = uVar8;
                            uVar9 = uVar9 + 1;
                            uVar15 = puVar13->end();
                        } while (uVar9 < uVar15);
                    }
                    (&field_408, (ulong)bVar2, 5)->set_max_size();
                    if (bVar2 == 0) {
                        return;
                    }
                    uVar9 = 0;
                    do {
                        uVar5 = param_1->g1s();
                        puVar13 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                            (Array<signed char, eastl::allocator>*)&field_408, uVar9);
                        *puVar13 = uVar5;
                        uVar9 = uVar9 + 1;
                    } while (bVar2 != uVar9);
                    return;
                case 16:
                    field_436 = 0;
                    return;
                case 17:
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_50, bVar16);
                    eastl::string::operator=((eastl::string*)&field_272, (basic_string*)local_50);
                    break;
                case 18:
                    uVar8 = param_1->gSmart2or4s();
                    field_304 = uVar8;
                    return;
                case 19:
                    uVar6 = param_1->g2();
                    field_440 = (uint)uVar6;
                    return;
                default:
                    uVar14 = logger::default_logger();
                    logger::Logger::Log(uVar14, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/configdecoder/MapElementType.cpp",
                                        190, "Error unrecognised .mapelement config code: %i", param_2);
                    return;
                case 21:
                    uVar8 = param_1->g4();
                    field_64 = uVar8;
                    return;
                case 22:
                    uVar8 = param_1->g4();
                    field_60 = uVar8;
                    return;
                case 23:
                    bVar2 = param_1->g1();
                    field_356 = (uint)bVar2;
                    bVar2 = param_1->g1();
                    field_360 = (uint)bVar2;
                    bVar2 = param_1->g1();
                    field_364 = (uint)bVar2;
                    return;
                case 24:
                    sVar7 = param_1->g2s();
                    field_368 = (int)sVar7;
                    sVar7 = param_1->g2s();
                    field_372 = (int)sVar7;
                    return;
                case 25:
                    uVar8 = param_1->gSmart2or4s();
                    field_444 = uVar8;
                    return;
                case 28:
                    bVar2 = param_1->g1();
                    field_432 = (uint)bVar2;
                    return;
                case 29:
                    bVar2 = param_1->g1();
                    field_376 = (uint)bVar2;
                    return;
                case 30:
                    bVar2 = param_1->g1();
                    field_380 = (uint)bVar2;
                    return;
                }
            }
        LAB_10022c87c:
            local_50->~basic_string();
        }
    }

    // 0x10022cc10, 272 bytes, placed by class name and debug map
    // MapElementType::GetSprite(int) const
    MapElementType* MapElementType::GetSprite(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        int in_EDX;
        shared_ptr local_48;
        shared_ptr local_38;

        if (in_EDX < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_38._0_8_ = (long)in_EDX;
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_48) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_48, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_48);
            } else {
                local_38.Makepix32(m_pSprites, in_EDX, 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_48, &local_38);
                local_38.~shared_ptr();
                bVar1 = operator!=(&local_48, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_38._0_8_ = (long)in_EDX;
                    m_spriteCache.Put(&local_48, 1, (ulonglong*)&local_38);
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_48);
            }
            local_48.~shared_ptr();
        }
        return this;
    }

    // 0x10022ceb0, 32 bytes, placed by class name and debug map
    // MapElementType::GetSprite(bool) const
    MapElementType* MapElementType::GetSprite(bool param_1) {
        undefined3 in_register_00000031;

        GetSprite(this, CONCAT31(in_register_00000031, param_1));
        return this;
    }

    // 0x10022ced0, 32 bytes, placed by class name and debug map
    // MapElementType::GetFlashSprite()
    MapElementType* MapElementType::GetFlashSprite() {
        int in_ESI;

        GetSprite(this, in_ESI);
        return this;
    }

    // 0x10022cef0, 32 bytes, placed by class name and debug map
    // MapElementType::GetWorldmapArrow()
    MapElementType* MapElementType::GetWorldmapArrow() {
        int in_ESI;

        GetSprite(this, in_ESI);
        return this;
    }

    // 0x10022cf10, 16 bytes, placed by class name and debug map
    // MapElementType::GetID() const
    int MapElementType::GetID() {
        return m_iD;
    }

    // 0x10022cf20, 32 bytes, placed by class name and debug map
    // MapElementType::ResetCache()
    void MapElementType::ResetCache() {
        m_spriteCache.Reset();
    }

} // namespace jag::oldscape::configdecoder
