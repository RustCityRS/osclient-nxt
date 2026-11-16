// libs/oldscape/rs2lib/configdecoder/MapElementType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "MapElementType.h"

namespace jag::oldscape::configdecoder {
    // 0x101036e00
    int64_t MapElementType::m_num;

    // 0x101036e08
    LRUHashCache<graphics::Pix32, 256ul, 257ul, false, unsigned long long> MapElementType::m_spriteCache;

    // 0x10103bf08
    int64_t MapElementType::m_pConfigClient;

    // 0x10103bf10
    int64_t MapElementType::m_pSprites;

    // 0x10103bf18
    Array<std::unique_ptr<MapElementType>> MapElementType::m_list;

    // 0x10022c060
    MapElementType::MapElementType(int arg1)
        : m_iD(arg1), field_4(4294967295), field_8(4294967295), field_52(4294967295), field_56(0), field_68(1),
          field_69(0), field_70(true) {
        uint8_t* this_00 = &field_72;
        new (this_00) eastl::fixed_vector<eastl::string, 5ul>();
        new (&field_272) eastl::string();
        field_304 = 4294967295;
        new (&field_312) Array<int>();
        field_336 = 2147483647;
        field_340 = 2147483647;
        field_344 = -2147483648;
        field_348 = -2147483648;
        field_356 = 4294967295;
        field_360 = 4294967295;
        field_364 = 4294967295;
        field_376 = 1;
        field_380 = 1;
        new (&field_384) Array<int>();
        new (&field_408) Array<signed char>();
        field_432 = 4294967295;
        field_436 = 1;
        field_440 = 4294967295;
        field_444 = 4294967295;
        this_00->resize(this_00->capacity());
    }

    // 0x10022c1d0
    bool MapElementType::Init(jagex3::Js5* js51, jagex3::Js5* js52) {
        unique_ptr<MapElementType>* puVar2;
        MapElementType* pMVar3;
        PacketJ<Array<unsigned char> _>* packetJ;
        shared_ptr<RSevenDebugPresetProvider> local_58;
        ReturnValue local_48;
        int local_34;

        m_pConfigClient = js51;
        m_pSprites = js52;
        long local_40 = js51->RequestFullDownload();
        if (local_40 != 0) {
            m_num = js51->GetFileIdLimit(35);
            m_list.set_max_size((long)m_num, 1);
            local_34 = 0;
            if (0 < m_num) {
                do {
                    local_58 = shared_ptr();
                    js51->GetFile(local_58, 35, local_34, nullptr);
                    local_48 = std::make_unique<MapElementType, int&>(local_34);
                    puVar2 = &m_list[(long)local_34];
                    *puVar2 = local_48;
                    if (local_58 != nullptr) {
                        puVar2 = &m_list[(long)local_34];
                        pMVar3 = (MapElementType*)(*puVar2).operator->();
                        packetJ = (PacketJ<Array<unsigned char> _>*)*local_58;
                        Decode(pMVar3, packetJ);
                        puVar2 = &m_list[(long)local_34];
                        pMVar3 = (MapElementType*)(*puVar2).operator->();
                        PostDecode(pMVar3);
                    }
                    local_34 = local_34 + 1;
                } while (local_34 < m_num);
            }
        }
        return local_40 != 0;
    }

    // 0x10022c5c0
    void MapElementType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x10022c600
    void MapElementType::PostDecode() {
        int iVar1;
        int iVar2;
        unsigned long uVar5;
        int* piVar6;
        unsigned long arg1;

        uint8_t* this_00 = &field_312;
        if (this_00->empty() == '\0') {
            if (this_00->end() != 0) {
                arg1 = 0;
                do {
                    piVar6 = (int*)(*this_00)[arg1];
                    iVar1 = *piVar6;
                    iVar2 = field_336;
                    piVar6 = (int*)(*this_00)[arg1];
                    if (iVar1 < iVar2) {
                        field_336 = *piVar6;
                    } else if (field_344 < *piVar6) {
                        piVar6 = (int*)(*this_00)[arg1];
                        field_344 = *piVar6;
                    }
                    uVar5 = arg1 + 1;
                    piVar6 = (int*)(*this_00)[uVar5];
                    iVar1 = *piVar6;
                    iVar2 = field_340;
                    piVar6 = (int*)(*this_00)[uVar5];
                    if (iVar1 < iVar2) {
                        field_340 = *piVar6;
                    } else if (field_348 < *piVar6) {
                        piVar6 = (int*)(*this_00)[uVar5];
                        field_348 = *piVar6;
                    }
                    arg1 = arg1 + 2;
                    uVar5 = this_00->end();
                } while (arg1 < uVar5);
            }
        }
    }

    // 0x10022c730
    MapElementType* MapElementType::List(int arg1) {
        int iVar2;
        unique_ptr<MapElementType, std::default_delete<MapElementType> _>* mapElementType;
        unique_ptr<MapElementType>* unique_ptr;
        void* arg2;

        void* arg1_00 = (void*)(long)arg1;
        if (-1 < arg1) {
            iVar2 = m_list.end();
            if (arg1 < iVar2) {
                arg2 = arg1_00;
                mapElementType =
                    (unique_ptr<MapElementType, std::default_delete<MapElementType> _>*)m_list[(unsigned long)arg1_00];
                if (mapElementType != arg2) {
                    unique_ptr = &m_list[(unsigned long)arg1_00];
                    return (MapElementType*)**unique_ptr;
                }
            }
        }
        LogAssert("id >= 0 && id < (int)m_list.size() && m_list[id] != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/configdecoder/"
                  "MapElementType.cpp",
                  56, nullptr);
    }

    // 0x10022c7d0
    void MapElementType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        unsigned int uVar1;
        uint8_t bVar2;
        uint8_t bVar4;
        uint8_t uVar5;
        unsigned short uVar6;
        short sVar7;
        uint32_t uVar8;
        eastl::string* this_00;
        unsigned long uVar9;
        int* piVar10;
        uint32_t* puVar12;
        uint8_t* puVar13;
        unsigned long uVar14;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_50;

        switch (arg2) {
        case 1:
            uVar8 = packetJ.gSmart2or4s();
            field_4 = uVar8;
            break;
        case 2:
            uVar8 = packetJ.gSmart2or4s();
            field_8 = uVar8;
            break;
        case 3:
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            field_16 = &local_50;
            goto LAB_10022c87c;
        case 4:
            uVar8 = packetJ.g3();
            field_48 = uVar8;
            break;
        case 5:
            uVar8 = packetJ.g3();
            field_52 = uVar8;
            break;
        case 6:
            bVar2 = packetJ.g1();
            field_56 = (unsigned int)bVar2;
            break;
        case 7:
            uVar9 = packetJ.g1();
            if ((uVar9 & 1) == 0) {
                field_68 = 0;
            }
            if ((uVar9 & 2) != 0) {
                field_69 = 1;
            }
            break;
        case 8:
            field_70 = packetJ.g1() == '\x01';
            break;
        default:
            if (arg2 - 10U < 5) {
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                     (uint8_t)packetJ);
                this_00 = &field_72[(unsigned long)(arg2 - 10U)];
                *this_00 = &local_50;
            } else {
                switch (arg2) {
                case 15:
                    bVar2 = packetJ.g1();
                    uVar1 = (unsigned int)bVar2 * 2;
                    field_312.set_max_size((unsigned long)uVar1, 5);
                    if (bVar2 != 0) {
                        uVar9 = 1;
                        if (1 < uVar1) {
                            uVar9 = (unsigned long)uVar1;
                        }
                        uVar14 = 0;
                        do {
                            sVar7 = packetJ.g2s();
                            piVar10 = &field_312[uVar14];
                            *piVar10 = (int)sVar7;
                            uVar14 = uVar14 + 1;
                        } while (uVar9 != uVar14);
                    }
                    uVar8 = packetJ.g4();
                    field_352 = uVar8;
                    bVar4 = packetJ.g1();
                    puVar13 = &field_384;
                    puVar13->set_max_size((unsigned long)bVar4, 5);
                    if (puVar13->end() != 0) {
                        uVar9 = 0;
                        do {
                            uVar8 = packetJ.g4();
                            puVar12 = (uint32_t*)(*puVar13)[uVar9];
                            *puVar12 = uVar8;
                            uVar9 = uVar9 + 1;
                            uVar14 = puVar13->end();
                        } while (uVar9 < uVar14);
                    }
                    field_408.set_max_size((unsigned long)bVar2, 5);
                    if (bVar2 == 0) {
                        return;
                    }
                    uVar9 = 0;
                    do {
                        uVar5 = packetJ.g1s();
                        puVar13 = &field_408[uVar9];
                        *puVar13 = uVar5;
                        uVar9 = uVar9 + 1;
                    } while (bVar2 != uVar9);
                    return;
                case 16:
                    field_436 = 0;
                    return;
                case 17:
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                        &local_50, (uint8_t)packetJ);
                    field_272 = &local_50;
                    break;
                case 18:
                    uVar8 = packetJ.gSmart2or4s();
                    field_304 = uVar8;
                    return;
                case 19:
                    uVar6 = packetJ.g2();
                    field_440 = (unsigned int)uVar6;
                    return;
                default:
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                              "configdecoder/MapElementType.cpp",
                              190, "Error unrecognised .mapelement config code: %i", arg2);
                    return;
                case 21:
                    uVar8 = packetJ.g4();
                    field_64 = uVar8;
                    return;
                case 22:
                    uVar8 = packetJ.g4();
                    field_60 = uVar8;
                    return;
                case 23:
                    bVar2 = packetJ.g1();
                    field_356 = (unsigned int)bVar2;
                    bVar2 = packetJ.g1();
                    field_360 = (unsigned int)bVar2;
                    bVar2 = packetJ.g1();
                    field_364 = (unsigned int)bVar2;
                    return;
                case 24:
                    sVar7 = packetJ.g2s();
                    field_368 = (int)sVar7;
                    sVar7 = packetJ.g2s();
                    field_372 = (int)sVar7;
                    return;
                case 25:
                    uVar8 = packetJ.gSmart2or4s();
                    field_444 = uVar8;
                    return;
                case 28:
                    bVar2 = packetJ.g1();
                    field_432 = (unsigned int)bVar2;
                    return;
                case 29:
                    bVar2 = packetJ.g1();
                    field_376 = (unsigned int)bVar2;
                    return;
                case 30:
                    bVar2 = packetJ.g1();
                    field_380 = (unsigned int)bVar2;
                    return;
                }
            }
        LAB_10022c87c:
        }
    }

    // 0x10022cc10
    auto MapElementType::GetSprite(int arg1) const {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_48;
        ReturnValue local_38;

        if (arg1 < 0) {
            auto result;
        } else {
            local_38[0] = (ReturnValue)(long)arg1;
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_38);
            local_48 = shared_ptr(groundDecor);
            if (local_48 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
            } else {
                local_38 = graphics::pixloader::Makepix32(*m_pSprites, arg1, 0);
                local_48 = local_38;
                if (local_48 != nullptr) {
                    local_38[0] = (ReturnValue)(long)arg1;
                    m_spriteCache.Put(local_48, 1, local_38);
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
            }
        }
        return result;
    }

    // 0x10022ceb0
    auto MapElementType::GetSprite(bool arg1) const {
        auto result;
        uint64_t in_register_00000011;

        GetSprite(&result, this, (&field_4)[(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg1) & 4294967295]);
        return result;
    }

    // 0x10022ced0
    auto MapElementType::GetFlashSprite() {
        auto result;
        GetSprite(&result, this, field_444);
        return result;
    }

    // 0x10022cef0
    auto MapElementType::GetWorldmapArrow() {
        auto result;
        GetSprite(&result, this, field_304);
        return result;
    }

    // 0x10022cf10
    int MapElementType::GetID() const {
        return m_iD;
    }

    // 0x10022cf20
    void MapElementType::ResetCache() {
        m_spriteCache.Reset();
    }

} // namespace jag::oldscape::configdecoder
