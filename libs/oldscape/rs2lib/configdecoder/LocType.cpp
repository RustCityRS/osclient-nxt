// libs/oldscape/rs2lib/configdecoder/LocType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "LocType.h"

namespace jag::oldscape::configdecoder {
    // 0x100fd7da8
    int64_t LocType::m_lowMem;

    // 0x100fd7db0
    int64_t LocType::m_pConfigClient;

    // 0x100fd7db8
    int64_t LocType::m_pModels;

    // 0x100fd7dc0
    LRUHashCache<LocType, 4096ul, 4097ul, false, unsigned long long> LocType::m_recentUse;

    // 0x101027ec0
    LRUHashCache<dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long> LocType::m_mc1;

    // 0x101031c00
    LRUHashCache<dash3d::ModelSource, 128ul, 129ul, false, unsigned long long> LocType::m_mc2;

    // 0x101034500
    LRUHashCache<dash3d::ModelLit, 128ul, 129ul, false, unsigned long long> LocType::m_mc3;

    // 0x100228990
    void LocType::Init(jagex3::Js5* js51, jagex3::Js5* js52, bool arg3) {
        m_pConfigClient = js51;
        m_pModels = js52;
        m_lowMem = arg3;
    }

    // 0x1002289b0
    LocType::LocType() {
        new (&field_8) Array<int>();
        new (&field_32) Array<int>();
        new (&field_56) eastl::string("");
        new (&field_88) Array<short>();
        new (&field_112) Array<short>();
        new (&field_136) Array<short>();
        new (&field_160) Array<short>();
        field_184 = 1;
        field_188 = 1;
        field_192 = 2;
        field_196 = 1;
        field_200 = 4294967295;
        field_204 = 4294967295;
        field_208 = 0;
        field_209 = 0;
        field_212 = 4294967295;
        field_216 = 16;
        field_220 = 0;
        field_224 = 0;
        uint8_t* this_00 = &field_232;
        new (this_00) eastl::fixed_vector<eastl::string, 5ul>();
        field_432 = 4294967295;
        field_436 = 4294967295;
        field_440 = 4294967295;
        field_444 = 0;
        field_445 = 1;
        field_448 = 128;
        field_452 = 128;
        field_456 = 128;
        field_460 = 0;
        field_464 = 0;
        field_468 = 0;
        field_472 = 0;
        field_476 = 0;
        field_477 = 0;
        field_480 = 4294967295;
        new (&field_488) Array<int>();
        field_512 = 4294967295;
        field_516 = 4294967295;
        field_520 = 4294967295;
        field_524 = 0;
        field_528 = 0;
        field_532 = 0;
        new (&field_536) Array<int>();
        field_560 = 1;
        new (&field_568) eastl::hash_map<long long, ParamTypeHelper::ParamVariant>(local_38);
        this_00->resize(this_00->capacity());
    }

    // 0x100228cb0
    shared_ptr<midi2::MidiPlayerMainThread>* LocType::List(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        int* piVar2;
        LocType* pLVar3;
        long lVar4;
        unsigned long long local_40[2];
        ReturnValue local_30;

        local_40[0] = (long)arg1;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Find(*local_40);
        if (!(*midiPlayerMainThread != nullptr)) {
            new (local_40) shared_ptr();
            m_pConfigClient->GetFile(*local_40, 6, arg1, nullptr);
            make_shared<LocType>(&local_30);
            piVar2 = (int*)local_30.operator->();
            *piVar2 = arg1;
            if (*local_40 != nullptr) {
                pLVar3 = (LocType*)local_30.operator->();
                Decode(pLVar3, (shared_ptr<PacketJ<Array<unsigned char> _> _>*)local_40);
            }
            pLVar3 = (LocType*)local_30.operator->();
            PostDecode(pLVar3);
            lVar4 = local_30.operator->();
            if (*(char*)(lVar4 + 477) != '\0') {
                lVar4 = local_30.operator->();
                *(uint32_t*)(lVar4 + 192) = 0;
                lVar4 = local_30.operator->();
                *(uint8_t*)(lVar4 + 196) = 0;
            }
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_recentUse.Put(local_30, 1, (long)arg1);
        }
        return midiPlayerMainThread;
    }

    // 0x100228f30
    void LocType::Decode(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->())->g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100228f70
    void LocType::PostDecode() {
        int* piVar2;

        if (field_200 != 4294967295)
            goto LAB_100228f86;
        field_200 = 0;
        if (!(field_8.empty())) {
            if (!(field_32.empty())) {
                piVar2 = &field_32[0];
                if (*piVar2 != 10)
                    goto LAB_100228ff1;
            }
            field_200 = 1;
        }
    LAB_100228ff1:
        unsigned long arg1 = 0;
        do {
            if (!(((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)field_232[arg1])
                      ->empty())) {
                field_200 = 1;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 5);
    LAB_100228f86:
        if (field_480 == 4294967295) {
            field_480 = (unsigned int)(field_192 != 0);
        }
    }

    // 0x100229170
    void LocType::Decode(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2) {
        uint8_t bVar1;
        bool bVar2;
        char cVar3;
        unsigned short uVar4;
        uint16_t uVar5;
        short sVar6;
        unsigned int uVar7;
        PacketT<Array<unsigned char>>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar8;
        long lVar9;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar10;
        eastl::string* pbVar11;
        int* piVar12;
        uint32_t* puVar13;
        unsigned int* puVar14;
        uint16_t* puVar15;
        unsigned long uVar16;
        unsigned long uVar17;
        uint8_t* puVar18;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_58;
        Array<int>* local_38;

        switch (arg2) {
        case 1:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            bVar1 = pPVar10->g1();
            if (bVar1 == 0) {
                return;
            }
            uVar17 = (unsigned long)bVar1;
            puVar18 = &field_8;
            cVar3 = puVar18->empty();
            if ((cVar3) || (m_lowMem != '\0')) {
                field_32.set_max_size(uVar17, 5);
                puVar18->set_max_size(uVar17, 5);
                uVar16 = 0;
                local_38 = (Array<int>*)puVar18;
                do {
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    puVar14 = (unsigned int*)(*local_38)[uVar16];
                    *puVar14 = (unsigned int)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    puVar14 = &field_32[uVar16];
                    *puVar14 = (unsigned int)bVar1;
                    uVar16 = uVar16 + 1;
                } while (uVar17 != uVar16);
                return;
            }
            this_00 = (PacketT<Array<unsigned char>>*)packetJ.operator->();
            phVar8 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)packetJ.operator->();
            lVar9 = phVar8->size();
            uVar17 = uVar17 * 3 + lVar9;
            goto LAB_1002292a5;
        case 2:
            bVar2 = (bool)packetJ.operator->();
            local_58.gStringNoConversion(bVar2);
            field_56 = &local_58;
            break;
        default:
            if (arg2 - 30U < 5) {
                bVar2 = (bool)packetJ.operator->();
                local_58.gStringNoConversion(bVar2);
                puVar18 = &field_232;
                uVar17 = (unsigned long)(arg2 - 30U);
                pbVar11 = (eastl::string*)(*puVar18)[uVar17];
                *pbVar11 = &local_58;
                cVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                    *((eastl::string*)(*puVar18)[uVar17]), *((eastl::string*)&constants::text::hidden));
                if (cVar3) {
                    pbVar11 = (eastl::string*)(*puVar18)[uVar17];
                    eastl::string::assign(pbVar11, "");
                }
            } else {
                switch (arg2) {
                case 40:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    local_38 = (Array<int>*)&field_88;
                    uVar17 = (unsigned long)bVar1;
                    local_38->set_max_size(uVar17, 5);
                    field_112.set_max_size(uVar17, 5);
                    if (bVar1 != 0) {
                        uVar16 = 0;
                        do {
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                            uVar5 = pPVar10->g2();
                            puVar15 = (uint16_t*)(*local_38)[uVar16];
                            *puVar15 = uVar5;
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                            uVar5 = pPVar10->g2();
                            puVar15 = &field_112[uVar16];
                            *puVar15 = uVar5;
                            uVar16 = uVar16 + 1;
                        } while (uVar17 != uVar16);
                    }
                    break;
                case 41:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    local_38 = (Array<int>*)&field_136;
                    uVar17 = (unsigned long)bVar1;
                    local_38->set_max_size(uVar17, 5);
                    field_160.set_max_size(uVar17, 5);
                    if (bVar1 != 0) {
                        uVar16 = 0;
                        do {
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                            uVar5 = pPVar10->g2();
                            puVar15 = (uint16_t*)(*local_38)[uVar16];
                            *puVar15 = uVar5;
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                            uVar5 = pPVar10->g2();
                            puVar15 = &field_160[uVar16];
                            *puVar15 = uVar5;
                            uVar16 = uVar16 + 1;
                        } while (uVar17 != uVar16);
                    }
                    break;
                default:
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                              "configdecoder/LocType.cpp",
                              405, "Error unrecognised .loc config code: %i", arg2);
                    break;
                case 61:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_440 = (unsigned int)uVar4;
                    break;
                case 62:
                    field_444 = 1;
                    break;
                case 64:
                    field_445 = 0;
                    break;
                case 65:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_448 = (unsigned int)uVar4;
                    break;
                case 66:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_452 = (unsigned int)uVar4;
                    break;
                case 67:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_456 = (unsigned int)uVar4;
                    break;
                case 68:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_436 = (unsigned int)uVar4;
                    break;
                case 69:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    field_472 = (unsigned int)bVar1;
                    break;
                case 70:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    sVar6 = pPVar10->g2s();
                    field_460 = (int)sVar6;
                    break;
                case 71:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    sVar6 = pPVar10->g2s();
                    field_464 = (int)sVar6;
                    break;
                case 72:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    sVar6 = pPVar10->g2s();
                    field_468 = (int)sVar6;
                    break;
                case 73:
                    field_476 = 1;
                    break;
                case 74:
                    field_477 = 1;
                    break;
                case 75:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    field_480 = (unsigned int)bVar1;
                    break;
                case 77:
                case 92:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    uVar7 = (unsigned int)uVar4;
                    if (uVar4 == 65535) {
                        uVar7 = 4294967295;
                    }
                    field_512 = uVar7;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    uVar7 = (unsigned int)uVar4;
                    if (uVar4 == 65535) {
                        uVar7 = 4294967295;
                    }
                    field_516 = uVar7;
                    uVar7 = 4294967295;
                    if (arg2 == 92) {
                        pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                        uVar4 = pPVar10->g2();
                        uVar7 = 4294967295;
                        if (uVar4 != 65535) {
                            uVar7 = (unsigned int)uVar4;
                        }
                    }
                    local_38 = (Array<int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar7);
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    puVar18 = &field_488;
                    puVar18->set_max_size((unsigned long)(bVar1 + 2), 5);
                    uVar17 = 0;
                    do {
                        pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                        uVar4 = pPVar10->g2();
                        puVar14 = (unsigned int*)(*puVar18)[uVar17];
                        *puVar14 = (unsigned int)uVar4;
                        piVar12 = (int*)(*puVar18)[uVar17];
                        if (*piVar12 == 65535) {
                            puVar13 = (uint32_t*)(*puVar18)[uVar17];
                            *puVar13 = 4294967295;
                        }
                        uVar17 = uVar17 + 1;
                    } while (bVar1 + 1 != uVar17);
                    puVar13 = (uint32_t*)(*puVar18)[(unsigned long)(bVar1 + 1)];
                    *puVar13 = local_38._0_4_;
                    break;
                case 78:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_520 = (unsigned int)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    field_524 = (unsigned int)bVar1;
                    break;
                case 79:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_528 = (unsigned int)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_532 = (unsigned int)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    field_524 = (unsigned int)bVar1;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    field_536.set_max_size((unsigned long)bVar1, 5);
                    if (bVar1 != 0) {
                        uVar17 = 0;
                        do {
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                            uVar4 = pPVar10->g2();
                            puVar14 = &field_536[uVar17];
                            *puVar14 = (unsigned int)uVar4;
                            uVar17 = uVar17 + 1;
                        } while (bVar1 != uVar17);
                    }
                    break;
                case 81:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    bVar1 = pPVar10->g1();
                    field_204 = (unsigned int)bVar1 << 8;
                    break;
                case 82:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    field_432 = (unsigned int)uVar4;
                    break;
                case 89:
                    field_560 = 0;
                    break;
                case 249:
                    ParamTypeHelper::UnpackClientParams(*(packetJ), field_568);
                }
            }
            break;
        case 5:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            bVar1 = pPVar10->g1();
            if (bVar1 == 0) {
                return;
            }
            uVar17 = (unsigned long)bVar1;
            puVar18 = &field_8;
            cVar3 = puVar18->empty();
            if ((cVar3) || (m_lowMem != '\0')) {
                field_32.clear();
                puVar18->set_max_size(uVar17, 5);
                uVar16 = 0;
                do {
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
                    uVar4 = pPVar10->g2();
                    puVar14 = (unsigned int*)(*puVar18)[uVar16];
                    *puVar14 = (unsigned int)uVar4;
                    uVar16 = uVar16 + 1;
                } while (uVar17 != uVar16);
                return;
            }
            this_00 = (PacketT<Array<unsigned char>>*)packetJ.operator->();
            phVar8 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)packetJ.operator->();
            lVar9 = phVar8->size();
            uVar17 = lVar9 + uVar17 * 2;
        LAB_1002292a5:
            this_00->SetPos(uVar17);
            break;
        case 14:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            bVar1 = pPVar10->g1();
            field_184 = (unsigned int)bVar1;
            break;
        case 15:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            bVar1 = pPVar10->g1();
            field_188 = (unsigned int)bVar1;
            break;
        case 17:
            field_192 = 0;
        case 18:
            field_196 = 0;
            break;
        case 19:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            bVar1 = pPVar10->g1();
            field_200 = (unsigned int)bVar1;
            break;
        case 21:
            field_204 = 0;
            break;
        case 22:
            field_208 = 1;
            break;
        case 23:
            field_209 = 1;
            break;
        case 24:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            uVar4 = pPVar10->g2();
            uVar7 = 4294967295;
            if (uVar4 != 65535) {
                uVar7 = (unsigned int)uVar4;
            }
            field_212 = uVar7;
            break;
        case 27:
            field_192 = 1;
            break;
        case 28:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            bVar1 = pPVar10->g1();
            field_216 = (unsigned int)bVar1;
            break;
        case 29:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            cVar3 = pPVar10->g1s();
            field_220 = (int)cVar3;
            break;
        case 39:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)packetJ.operator->();
            cVar3 = pPVar10->g1s();
            field_224 = cVar3 * 5;
        }
    }

    // 0x10022a070
    unsigned long LocType::CheckModel(int arg1) {
        Js5* pJVar1;
        uint8_t bVar3;
        long lVar4;
        unsigned short* puVar5;
        unsigned long uVar6;
        int* piVar7;
        unsigned long uVar8;
        uint8_t bVar9;
        bool bVar11;

        uint8_t* puVar10 = &field_32;
        bool cVar2 = puVar10->empty();
        if (!cVar2) {
            lVar4 = puVar10->end();
            bVar11 = lVar4 != 0;
            uVar8 = 0;
            if (bVar11) {
                uVar6 = 0;
                piVar7 = (int*)(*puVar10)[0];
                if (*piVar7 != arg1) {
                    uVar6 = 0;
                    do {
                        uVar6 = uVar6 + 1;
                        uVar8 = puVar10->end();
                        bVar11 = uVar6 < uVar8;
                        if (!bVar11)
                            goto LAB_10022a17a;
                        piVar7 = (int*)(*puVar10)[uVar6];
                    } while (*piVar7 != arg1);
                }
                pJVar1 = m_pModels;
                puVar5 = &field_8[uVar6];
                uVar8 = pJVar1->RequestDownload((unsigned int)*puVar5, 0);
            }
        LAB_10022a17a:
            bVar9 = bVar11 ^ 1U | (uint8_t)uVar8;
        } else {
            puVar10 = &field_8;
            cVar2 = puVar10->empty();
            bVar9 = 1;
            if (((!cVar2) && (arg1 == 10)) && (lVar4 = puVar10->end(), lVar4 != 0)) {
                bVar9 = 1;
                uVar8 = 0;
                do {
                    pJVar1 = m_pModels;
                    puVar5 = (unsigned short*)(*puVar10)[uVar8];
                    bVar3 = pJVar1->RequestDownload((unsigned int)*puVar5, 0);
                    bVar9 = bVar9 & bVar3;
                    uVar8 = uVar8 + 1;
                    uVar6 = puVar10->end();
                } while (uVar8 < uVar6);
            }
        }
        return bVar9 & 4294967041;
    }

    // 0x10022a1a0
    unsigned long LocType::CheckModelAll() {
        Js5* this_00;
        uint8_t bVar2;
        unsigned short* puVar4;
        unsigned long uVar5;
        unsigned long arg1;
        uint64_t unaff_R15;

        uint8_t* this_01 = &field_8;
        bool cVar1 = this_01->empty();
        uint64_t uVar7 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        unsigned long uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
        if (!cVar1) {
            if (this_01->end() != 0) {
                uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
                arg1 = 0;
                do {
                    this_00 = m_pModels;
                    puVar4 = (unsigned short*)(*this_01)[arg1];
                    bVar2 = this_00->RequestDownload((unsigned int)*puVar4, 0);
                    uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)((uint8_t)uVar6 & bVar2));
                    arg1 = arg1 + 1;
                    uVar5 = this_01->end();
                } while (arg1 < uVar5);
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x10022a220
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* LocType::GetModel(int arg1, int arg2, int arg3, int arg4,
                                                                          int arg5, int arg6) {
        long* plVar4;
        uint32_t in_register_00000034;
        uint32_t in_register_0000003c;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* shared_ptr;
        uint32_t in_stack_00000008;
        uint32_t in_stack_00000010;
        unsigned long local_50[2];
        shared_ptr local_40;

        shared_ptr = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(((uint64_t)in_register_0000003c << 32) |
                                                                           (uint32_t)arg1);
        int* piVar6 = (int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        bool cVar1 = ((piVar6 + 8))->empty();
        int iVar5 = arg3 * 8;
        if (cVar1) {
            iVar5 = 0;
        }
        unsigned long uVar3 = (unsigned long)(iVar5 + *piVar6 * 1024 + arg4);
        unsigned long uVar7 = uVar3 | 134217728;
        if (dash3d::g_usingRSeven == '\0') {
            uVar7 = uVar3;
        }
        local_50[0] = uVar7;
        auto groundDecor = m_mc2.Find(*local_50);
        shared_ptr<dash3d::Decor> local_60(groundDecor);
        bool bVar2 = local_60 == nullptr;
        if (bVar2) {
            BuildModel((LocType*)local_50, arg2, arg3);
            bVar2 = *local_50 == nullptr;
            if (bVar2) {
                new (shared_ptr) shared_ptr();
            } else {
                if ((char)piVar6[52] == '\0') {
                    plVar4 = (long*)(*local_50).operator->();
                    (**(void (**)(...))(*plVar4 + 72))(&local_40, plVar4, piVar6[55] + 64, piVar6[56] * 5 + 768,
                                                       4294967246, 4294967286, 4294967246);
                    local_60 = local_40;
                } else {
                    plVar4 = (long*)(*local_50).operator->();
                    (**(void (**)(...))(*plVar4 + 88))(plVar4, (int)(short)(piVar6[55] + 64),
                                                       (int)(short)((short)piVar6[56] * 5 + 768), piVar6[55] + 64);
                    plVar4 = (long*)(*local_50).operator->();
                    (**(void (**)(...))(*plVar4 + 64))(plVar4);
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)&local_40);
                    local_60 = local_40;
                }
                local_40._0_8_ = uVar7;
                m_mc2.Put(local_60, 1, local_40);
            }
            if (bVar2)
                goto LAB_10022a55b;
        }
        if ((char)piVar6[52] != '\0') {
            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)&local_40);
            plVar4 = (long*)local_40.operator->();
            (**(void (**)(...))(*plVar4 + 96))(local_50, plVar4);
            local_60 = *local_50;
        }
        if (-1 < piVar6[51]) {
            plVar4 = (long*)local_60.operator->();
            cVar1 = (**(void (**)(...))(*plVar4 + 24))(plVar4);
            if (!cVar1) {
                plVar4 = (long*)local_60.operator->();
                cVar1 = (**(void (**)(...))(*plVar4 + 32))(plVar4);
                if (cVar1) {
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)local_50);
                    plVar4 = (long*)(*local_50).operator->();
                    (**(void (**)(...))(*plVar4 + 104))(&local_40, plVar4, arg5, arg6, in_stack_00000008,
                                                        in_stack_00000010, piVar6[51]);
                    cVar1 = shared_ptr::operator_cast_to_bool(&local_40);
                    if (cVar1) {
                        local_60 = local_40;
                    }
                }
            } else {
                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)local_50);
                plVar4 = (long*)(*local_50).operator->();
                (**(void (**)(...))(*plVar4 + 184))(&local_40, plVar4, arg5, arg6, in_stack_00000008, in_stack_00000010,
                                                    piVar6[51]);
                cVar1 = shared_ptr::operator_cast_to_bool(&local_40);
                if (cVar1) {
                    local_60 = local_40;
                }
            }
        }
        shared_ptr->shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
    LAB_10022a55b:
        return shared_ptr;
    }

    // 0x10022a6a0
    LocType* LocType::BuildModel(int arg1, int arg2) {
        Array<short>* pAVar2;
        short sVar3;
        unsigned int uVar4;
        Js5* pJVar5;
        bool bVar7;
        bool bVar8;
        int iVar9;
        int* piVar10;
        unsigned long uVar11;
        unsigned int* puVar12;
        shared_ptr<dash3d::ModelUnlit>* psVar13;
        long* plVar14;
        ModelUnlit* modelUnlit;
        short* psVar16;
        unsigned int in_ECX;
        uint8_t bVar17;
        unsigned int uVar18;
        uint32_t in_register_00000034;
        unsigned long uVar19;
        bool bVar20;
        uint8_t local_98[24];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_78;
        uint8_t local_60[28];
        unsigned int local_34;

        unsigned int local_44 = in_ECX;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_70;
        Array<game::VarValue>* pAVar1 =
            (Array<game::VarValue>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 32);
        long local_40 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        bool cVar6 = pAVar1->empty();
        long lVar15 = local_40;
        if (!cVar6) {
            local_60._24_4_ = arg2;
            iVar9 = pAVar1->end();
            if (0 < iVar9) {
                uVar11 = 0;
                do {
                    piVar10 = (int*)(*pAVar1)[uVar11];
                    lVar15 = local_40;
                    if (*piVar10 == local_60._24_4_) {
                        if ((int)uVar11 != -1) {
                            puVar12 = (unsigned int*)(*((local_40 + 8)))[(long)(int)uVar11];
                            cVar6 = *(char*)(lVar15 + 444);
                            bVar7 = 3 < (int)local_44;
                            uVar4 = *puVar12 + 65536;
                            if (cVar6 == bVar7) {
                                uVar4 = *puVar12;
                            }
                            uVar18 = uVar4 + 131072;
                            if (dash3d::g_usingRSeven == '\0') {
                                uVar18 = uVar4;
                            }
                            local_60._0_8_ = (long)(int)uVar18;
                            psVar13 = (shared_ptr<dash3d::ModelUnlit>*)m_mc1.Find(*local_60);
                            local_70 = *psVar13;
                            bVar8 = local_70 == nullptr;
                            pJVar5 = m_pModels;
                            if (bVar8) {
                                bVar8 = (bool)IsWallShape(local_60._24_4_);
                                local_60->Load(*pJVar5, uVar18 & 65535, 0, bVar8);
                                local_70 = *local_60;
                                bVar8 = local_70 == nullptr;
                                if (bVar8) {
                                    new (this) shared_ptr();
                                    goto LAB_10022ad64;
                                }
                                if (cVar6 != bVar7) {
                                    plVar14 = (long*)local_70.operator->();
                                    (**(void (**)(...))(*plVar14 + 176))(plVar14);
                                }
                                local_60._0_8_ = (long)(int)uVar18;
                                m_mc1.Put(local_70, 1, *local_60);
                            }
                            plVar14 = (long*)local_70.operator->();
                            cVar6 = (**(void (**)(...))(*plVar14 + 56))(plVar14);
                            if (dash3d::g_usingRSeven != cVar6) {
                                LogAssert("m->IsForRSeven() == dash3d::g_usingRSeven",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/rs2lib/configdecoder/LocType.cpp",
                                          769, nullptr);
                            }
                            goto LAB_10022aaac;
                        }
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    iVar9 = pAVar1->end();
                } while ((long)uVar11 < (long)iVar9);
            }
            new (this) shared_ptr();
        } else if (arg2 == 10) {
            local_78 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(local_40 + 8);
            local_60._24_4_ = arg2;
            cVar6 = local_78->empty();
            if (!cVar6) {
                local_98[16] = *(uint8_t*)(lVar15 + 444);
                uVar11 = local_78->end();
                local_98->destruct<highlight::NpcUID*>();
                new (local_60) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(uVar11, *local_98);
                if (uVar11 != 0) {
                    uVar19 = 0;
                    do {
                        puVar12 = (unsigned int*)(*local_78)[uVar19];
                        uVar4 = *puVar12 + 65536;
                        if (local_98[16] == '\0') {
                            uVar4 = *puVar12;
                        }
                        uVar18 = uVar4 + 131072;
                        if (dash3d::g_usingRSeven == '\0') {
                            uVar18 = uVar4;
                        }
                        local_98._0_8_ = (ModelUnlit_vtbl*)(long)(int)uVar18;
                        psVar13 = (shared_ptr<dash3d::ModelUnlit>*)m_mc1.Find(*local_98);
                        local_70 = *psVar13;
                        bVar7 = local_70 == nullptr;
                        pJVar5 = m_pModels;
                        if (bVar7) {
                            local_34 = uVar18 & 65535;
                            bVar7 = (bool)IsWallShape(10);
                            local_98->Load(*pJVar5, local_34, 0, bVar7);
                            local_70 = *local_98;
                            bVar7 = local_70 == nullptr;
                            if (bVar7) {
                                new (this) shared_ptr();
                                goto LAB_10022ad64;
                            }
                            if (local_98[16] != '\0') {
                                plVar14 = (long*)local_70.operator->();
                                (**(void (**)(...))(*plVar14 + 176))(plVar14);
                            }
                            local_98._0_8_ = (ModelUnlit_vtbl*)(long)(int)uVar18;
                            m_mc1.Put(local_70, 1, *local_98);
                        }
                        if (1 < uVar11) {
                            psVar13 = (shared_ptr<dash3d::ModelUnlit>*)(*local_60)[uVar19];
                            *psVar13 = local_70;
                        }
                        uVar19 = uVar19 + 1;
                    } while (uVar11 != uVar19);
                }
                if (1 < uVar11) {
                    local_98->Combine(*local_60);
                    local_70 = *local_98;
                }
            LAB_10022aaac:
                local_34 = (((uint32_t)local_34._1_3_ << 8) | (uint8_t)1);
                local_78 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_78._1_7_ << 8) |
                                                                                     (uint8_t)1);
                if ((*(int*)(local_40 + 448) == 128) &&
                    (local_78 =
                         (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_78._1_7_ << 8) |
                                                                                   (uint8_t)1),
                     *(int*)(local_40 + 452) == 128)) {
                    local_78 =
                        (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_78._1_7_ << 8) |
                                                                                  (uint8_t)(*(int*)(local_40 + 456) !=
                                                                                            128));
                }
                if ((*(int*)(local_40 + 460) == 0) && (*(int*)(local_40 + 464) == 0)) {
                    local_34 = (((uint32_t)local_34._1_3_ << 8) | (uint8_t)(*(int*)(local_40 + 468) != 0));
                }
                modelUnlit = (ModelUnlit*)*local_70;
                lVar15 = local_40;
                bVar20 = local_44 == 0;
                bVar17 = (uint8_t)local_78 | (uint8_t)local_34;
                pAVar1 = (Array<game::VarValue>*)(local_40 + 88);
                bVar7 = (bool)pAVar1->empty();
                local_98._16_8_ = lVar15 + 136;
                bVar8 = (bool)local_98._16_8_->empty();
                *local_60 = dash3d::ModelUnlit::Copy(*modelUnlit, (bool)((bVar17 ^ 1) & bVar20), bVar7, bVar8, true);
                if ((local_60._24_4_ == 4) && (3 < (int)local_44)) {
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 136))(plVar14, 256);
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 152))(plVar14, 45, 0, 4294967251);
                }
                local_44 = local_44 & 3;
                if (local_44 == 3) {
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 128))(plVar14);
                } else if (local_44 == 2) {
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 120))(plVar14);
                } else if (local_44 == 1) {
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 112))(plVar14);
                }
                cVar6 = pAVar1->empty();
                if ((!cVar6) && (lVar15 = pAVar1->end(), lVar15 != 0)) {
                    pAVar2 = (Array<short>*)(local_40 + 112);
                    uVar11 = 0;
                    do {
                        plVar14 = (long*)(*local_60).operator->();
                        psVar16 = (short*)(*pAVar1)[uVar11];
                        sVar3 = *psVar16;
                        psVar16 = (short*)(*pAVar2)[uVar11];
                        (**(void (**)(...))(*plVar14 + 160))(plVar14, (int)sVar3, (int)*psVar16);
                        uVar11 = uVar11 + 1;
                        uVar19 = pAVar1->end();
                    } while (uVar11 < uVar19);
                }
                cVar6 = local_98._16_8_->empty();
                if ((!cVar6) && (lVar15 = local_98._16_8_->end(), lVar15 != 0)) {
                    pAVar2 = (Array<short>*)(local_40 + 160);
                    uVar11 = 0;
                    do {
                        plVar14 = (long*)(*local_60).operator->();
                        psVar16 = (short*)(*local_98._16_8_)[uVar11];
                        sVar3 = *psVar16;
                        psVar16 = (short*)(*pAVar2)[uVar11];
                        (**(void (**)(...))(*plVar14 + 168))(plVar14, (int)sVar3, (int)*psVar16);
                        uVar11 = uVar11 + 1;
                        uVar19 = local_98._16_8_->end();
                    } while (uVar11 < uVar19);
                }
                if ((uint8_t)local_78 != '\0') {
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 184))(plVar14, *(uint32_t*)(local_40 + 448),
                                                         *(uint32_t*)(local_40 + 452), *(uint32_t*)(local_40 + 456));
                }
                if ((uint8_t)local_34 != '\0') {
                    plVar14 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar14 + 152))(plVar14, *(uint32_t*)(local_40 + 460),
                                                         *(uint32_t*)(local_40 + 464), *(uint32_t*)(local_40 + 468));
                }
                shared_ptr<FileRSevenDebugPresetProvider, void>(*local_60);
            } else {
                new (this) shared_ptr();
            }
        } else {
            new (this) shared_ptr();
        }
    LAB_10022ad64:
        return this;
    }

    // 0x10022af30
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* LocType::GetModelLit(int arg1, int arg2, int arg3, int arg4,
                                                                             int arg5, int arg6) {
        long* plVar4;
        uint32_t in_register_00000034;
        uint32_t in_register_0000003c;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* shared_ptr;
        uint32_t in_stack_00000008;
        uint32_t in_stack_00000010;
        unsigned long local_50[2];
        unsigned long local_40[2];

        shared_ptr = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(((uint64_t)in_register_0000003c << 32) |
                                                                           (uint32_t)arg1);
        int* piVar6 = (int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        bool cVar1 = ((piVar6 + 8))->empty();
        int iVar5 = arg3 * 8;
        if (cVar1) {
            iVar5 = 0;
        }
        unsigned long uVar3 = (unsigned long)(iVar5 + *piVar6 * 1024 + arg4);
        unsigned long uVar7 = uVar3 | 134217728;
        if (dash3d::g_usingRSeven == '\0') {
            uVar7 = uVar3;
        }
        local_40[0] = uVar7;
        auto groundDecor = m_mc3.Find(*local_40);
        shared_ptr<dash3d::Decor> local_60(groundDecor);
        bool bVar2 = local_60 == nullptr;
        if (bVar2) {
            BuildModel((LocType*)local_40, arg2, arg3);
            bVar2 = *local_40 == nullptr;
            if (bVar2) {
                new (shared_ptr) shared_ptr();
            } else {
                plVar4 = (long*)(*local_40).operator->();
                (**(void (**)(...))(*plVar4 + 72))(local_50, plVar4, piVar6[55] + 64, piVar6[56] * 5 + 768, 4294967246,
                                                   4294967286, 4294967246);
                local_60 = *local_50;
                local_50[0] = uVar7;
                m_mc3.Put(local_60, 1, *local_50);
            }
            if (bVar2)
                goto LAB_10022b13b;
        }
        if (-1 < piVar6[51]) {
            plVar4 = (long*)local_60.operator->();
            (**(void (**)(...))(*plVar4 + 184))(local_40, plVar4, arg5, arg6, in_stack_00000008, in_stack_00000010,
                                                piVar6[51]);
            plVar4 = (long*)(*local_40).operator->();
            cVar1 = (**(void (**)(...))(*plVar4 + 24))(plVar4);
            if (!cVar1) {
                LogAssert("mc->IsLit()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                          "configdecoder/LocType.cpp",
                          583, nullptr);
            }
            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)local_50);
            local_60 = *local_50;
        }
        shared_ptr->shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
    LAB_10022b13b:
        return shared_ptr;
    }

    // 0x10022b340
    LocType* LocType::GetTempModel(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, SeqType* seqType,
                                   int arg8) {
        ModelLit* modelLit;
        long* plVar4;
        uint32_t in_register_00000034;
        uint32_t in_stack_0000001c;
        int in_stack_00000020;
        ReturnValue local_70;
        ReturnValue local_40;

        int* piVar6 = (int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        bool cVar1 = ((piVar6 + 8))->empty();
        int iVar5 = arg2 * 8;
        if (cVar1) {
            iVar5 = 0;
        }
        ReturnValue RVar3 = (ReturnValue)(long)(iVar5 + *piVar6 * 1024 + arg3);
        ReturnValue RVar7 = (ReturnValue)((unsigned long)RVar3 | 134217728);
        if (dash3d::g_usingRSeven == '\0') {
            RVar7 = RVar3;
        }
        local_40[0] = RVar7;
        auto groundDecor = m_mc3.Find(local_40);
        shared_ptr<dash3d::Decor> local_50(groundDecor);
        bool bVar2 = local_50 == nullptr;
        if (bVar2) {
            BuildModel(&local_40, arg1, arg2);
            bVar2 = local_40 == nullptr;
            if (bVar2) {
                new (this) shared_ptr();
            } else {
                plVar4 = (long*)local_40.operator->();
                (**(void (**)(...))(*plVar4 + 72))(&local_70, plVar4, piVar6[55] + 64, piVar6[56] * 5 + 768, 4294967246,
                                                   4294967286, 4294967246);
                local_50 = local_70;
                local_70[0] = RVar7;
                m_mc3.Put(local_50, 1, local_70);
            }
            if (bVar2)
                goto LAB_10022b555;
        }
        if ((SeqType*)(((uint64_t)in_stack_0000001c << 32) | (uint32_t)arg8) == nullptr) {
            if (piVar6[51] == -1) {
                shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
                goto LAB_10022b555;
            }
            plVar4 = (long*)local_50.operator->();
            (**(void (**)(...))(*plVar4 + 80))(&local_40, plVar4, 1, 1);
            local_50 = local_40;
        } else {
            modelLit = (ModelLit*)*local_50;
            local_40 = ((SeqType*)(((uint64_t)in_stack_0000001c << 32) | (uint32_t)arg8))
                           ->AnimateModel90(*modelLit, in_stack_00000020, arg3, 1);
            local_50 = local_40;
        }
        if (-1 < piVar6[51]) {
            plVar4 = (long*)local_50.operator->();
            (**(void (**)(...))(*plVar4 + 192))(plVar4, arg4, arg5, arg6, (unsigned long)seqType & 4294967295,
                                                piVar6[51]);
        }
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
    LAB_10022b555:
        return this;
    }

    // 0x10022bb20
    uint8_t* LocType::GetMultiLoc() const {
        int iVar1;
        int iVar2;
        int* piVar4;
        uint8_t* puVar5;
        unsigned long arg1;

        if (field_512 == 4294967295) {
            if ((long)(int)field_516 != 18446744073709551615) {
                piVar4 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)(int)field_516];
                iVar1 = *piVar4;
                goto joined_r0x00010022bb66;
            }
        } else {
            iVar1 = ClientVarCache::GetVarbit(field_512);
        joined_r0x00010022bb66:
            if ((-1 < iVar1) && (iVar2 = field_488.end(), iVar1 < iVar2 - 1)) {
                arg1 = (unsigned long)iVar1;
                goto LAB_10022bbaa;
            }
        }
        arg1 = field_488.end() - 1;
    LAB_10022bbaa:
        piVar4 = &field_488[arg1];
        if (*piVar4 == -1) {
            puVar5 = &GetMultiLoc()::nullLocType;
            if ((GetMultiLoc()::nullLocType == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetMultiLoc()::nullLocType), iVar1 != 0)) {
                puVar5 = &GetMultiLoc()::nullLocType;
                new ((shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&GetMultiLoc()::nullLocType) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5448, &GetMultiLoc()::nullLocType, 4294967296);
                ___cxa_guard_release(&GetMultiLoc()::nullLocType);
            }
        } else {
            puVar5 = (uint8_t*)List(*piVar4);
        }
        return puVar5;
    }

    // 0x10022bc40
    LocType* LocType::GetMultiLocOrThis() const {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        LocType* pLVar2;

        if (field_488.empty() == '\0') {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetMultiLoc();
            pLVar2 = (LocType*)this_00->end();
        } else {
            pLVar2 = nullptr;
        }
        if (pLVar2 != nullptr) {
            this = pLVar2;
        }
        return this;
    }

    // 0x10022bc80
    LocType* LocType::GetSpecifiedMultiLocOrThis(int arg1) const {
        int iVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        LocType* pLVar4;
        unsigned long arg1_00;

        if ((arg1 < 0) || (iVar1 = field_488.end(), iVar1 - 1 <= arg1)) {
            arg1_00 = field_488.end() - 1;
        } else {
            arg1_00 = (unsigned long)arg1;
        }
        int* piVar3 = &field_488[arg1_00];
        if (*piVar3 != -1) {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)List(*piVar3);
            pLVar4 = (LocType*)this_00->end();
            if (pLVar4 != nullptr) {
                return pLVar4;
            }
        }
        return this;
    }

    // 0x10022bd00
    void LocType::GetParam(int arg1, int arg2) {
        ParamTypeHelper::GetParam(&field_568, arg1, arg2);
    }

    // 0x10022bdb0
    auto LocType::GetParam(int arg1, const eastl::string& str) {
        auto str_00 = ParamTypeHelper::GetParam(&field_568, arg1, str);
        return auto(*str_00);
    }

    // 0x10022be80
    void LocType::ResetCache() {
        m_recentUse.Reset();
        m_mc1.Reset();
        m_mc2.Reset();
        m_mc3.Reset();
    }

    // 0x10022bf00
    unsigned long LocType::HasBgSound() {
        unsigned int uVar2;
        long lVar3;
        unsigned long uVar4;
        int* piVar5;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        unsigned long arg1;
        uint64_t unaff_R15;
        unsigned long uVar6;
        shared_ptr<dash3d::Decor> local_38;

        uint8_t* this_00 = &field_488;
        bool cVar1 = this_00->empty();
        uint64_t uVar7 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        if (!cVar1) {
            lVar3 = this_00->end();
            uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)(lVar3 != 0));
            if (lVar3 != 0) {
                arg1 = 0;
                do {
                    piVar5 = (int*)(*this_00)[arg1];
                    if (*piVar5 != -1) {
                        piVar5 = (int*)(*this_00)[arg1];
                        groundDecor = (shared_ptr<dash3d::GroundDecor>*)List(*piVar5);
                        local_38 = shared_ptr(groundDecor);
                        lVar3 = local_38.operator->();
                        if (*(int*)(lVar3 + 520) == -1) {
                            lVar3 = local_38.operator->();
                            cVar1 = ((lVar3 + 536))->empty();
                            if (cVar1) {
                                goto LAB_10022bf70;
                            }
                        }
                        break;
                    }
                LAB_10022bf70:
                    arg1 = arg1 + 1;
                    uVar4 = this_00->end();
                    uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)(arg1 < uVar4));
                } while (arg1 < uVar4);
            }
        } else {
            uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
            if (field_520 == 4294967295) {
                uVar2 = field_536.empty();
                uVar6 = (unsigned long)uVar2 ^ 1;
            }
        }
        return uVar6 & 4294967041;
    }

} // namespace jag::oldscape::configdecoder
