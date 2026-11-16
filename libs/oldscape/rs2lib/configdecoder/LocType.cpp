// libs/oldscape/rs2lib/configdecoder/LocType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "LocType.h"

namespace jag::oldscape::configdecoder {
    // 0x100fd7da8, 8 bytes, __common; zero-initialised
    LocType::m_lowMem;

    // 0x100fd7db0, 8 bytes, __common; zero-initialised
    LocType::m_pConfigClient;

    // 0x100fd7db8, 8 bytes, __common; zero-initialised
    LocType::m_pModels;

    // 0x100fd7dc0, 327936 bytes, __common; zero-initialised
    LocType::m_recentUse;

    // 0x101027ec0, 40256 bytes, __common; zero-initialised
    LocType::m_mc1;

    // 0x101031c00, 10496 bytes, __common; zero-initialised
    LocType::m_mc2;

    // 0x101034500, 10496 bytes, __common; zero-initialised
    LocType::m_mc3;

    // 0x100228990, 32 bytes, placed by class name and debug map
    // LocType::Init(jagex3::Js5*, jagex3::Js5*, bool)
    void LocType::Init(Js5* param_1, Js5* param_2, bool param_3) {
        m_pConfigClient = param_1;
        m_pModels = param_2;
        m_lowMem = param_3;
    }

    // 0x1002289b0, 640 bytes, base-object constructor, placed by class name
    // LocType::LocType()
    void LocType::LocType() {
        undefined1* this_00;
        ulong uVar1;
        allocator local_38[8];

        new (&field_8) Array<int, eastl::allocator>();
        new (&field_32) Array<int, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_56, "", local_38) eastl::string();
        new (&field_88) Array<short, eastl::allocator>();
        new (&field_112) Array<short, eastl::allocator>();
        new (&field_136) Array<short, eastl::allocator>();
        new (&field_160) Array<short, eastl::allocator>();
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
        this_00 = &field_232;
        new (this_00) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
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
        new (&field_488) Array<int, eastl::allocator>();
        field_512 = 4294967295;
        field_516 = 4294967295;
        field_520 = 4294967295;
        field_524 = 0;
        field_528 = 0;
        field_532 = 0;
        new (&field_536) Array<int, eastl::allocator>();
        field_560 = 1;
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_568, local_38) eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>();
        uVar1 = this_00->capacity();
        this_00->resize(uVar1);
    }

    // 0x100228ca0, 16 bytes, complete-object constructor, placed by class name
    // LocType::LocType(): jumps straight to the base-object constructor

    // 0x100228cb0, 336 bytes, placed by class name
    // LocType::List(int)
    shared_ptr* LocType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        int* piVar3;
        LocType* pLVar4;
        long lVar5;
        ulonglong local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_40._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<LocType, 4096ul, 4097ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_40, 6, (array*)(ulong)(uint)param_1);
            make_shared<LocType>((jag*)&local_30);
            piVar3 = (int*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_30);
            *piVar3 = param_1;
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                pLVar4 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_30);
                Decode(pLVar4, &local_40);
            }
            pLVar4 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_30);
            PostDecode(pLVar4);
            lVar5 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_30);
            if (*(char*)(lVar5 + 477) != '\0') {
                lVar5 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_30);
                *(undefined4*)(lVar5 + 192) = 0;
                lVar5 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_30);
                *(undefined1*)(lVar5 + 196) = 0;
            }
            local_48 = (long)param_1;
            psVar2 = (shared_ptr*)m_recentUse.Put(&local_30, 1, &local_48);
            local_30.~shared_ptr();
            local_40.~shared_ptr();
        }
        return psVar2;
    }

    // 0x100228f30, 64 bytes, placed by class name
    // LocType::Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&)
    void LocType::Decode(shared_ptr* param_1) {
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        byte bVar1;

        while (true) {
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = this_00->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100228f70, 208 bytes, placed by class name
    // LocType::PostDecode()
    void LocType::PostDecode() {
        char cVar1;
        int* piVar2;
        ulong uVar3;

        if (field_200 != 4294967295)
            goto LAB_100228f86;
        field_200 = 0;
        cVar1 = (&field_8)->empty();
        if (cVar1 == '\0') {
            cVar1 = (&field_32)->empty();
            if (cVar1 == '\0') {
                piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_32, 0);
                if (*piVar2 != 10)
                    goto LAB_100228ff1;
            }
            field_200 = 1;
        }
    LAB_100228ff1:
        uVar3 = 0;
        do {
            eastl::vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::string,
                               eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&field_232,
                       uVar3);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                field_200 = 1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 5);
    LAB_100228f86:
        if (field_480 == 4294967295) {
            field_480 = (uint)(field_192 != 0);
        }
    }

    // 0x100229170, 3408 bytes, placed by class name
    // LocType::Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, int)
    void LocType::Decode(shared_ptr* param_1, int param_2) {
        byte bVar1;
        bool bVar2;
        char cVar3;
        ushort uVar4;
        undefined2 uVar5;
        short sVar6;
        uint uVar7;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar8;
        long lVar9;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar10;
        eastl::string* pbVar11;
        basic_string* pbVar12;
        int* piVar13;
        undefined4* puVar14;
        uint* puVar15;
        undefined2* puVar16;
        undefined8 uVar17;
        PacketJ* pPVar18;
        ulong uVar19;
        ulong uVar20;
        undefined1* puVar21;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_58[32];
        Array<int, eastl::allocator>* local_38;

        switch (param_2) {
        case 1:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = pPVar10->g1();
            if (bVar1 == 0) {
                return;
            }
            uVar20 = (ulong)bVar1;
            puVar21 = &field_8;
            cVar3 = puVar21->empty();
            if ((cVar3 != '\0') || (m_lowMem != '\0')) {
                (&field_32, uVar20, 5)->set_max_size();
                puVar21->set_max_size(uVar20, 5);
                uVar19 = 0;
                local_38 = (Array<int, eastl::allocator>*)puVar21;
                do {
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](local_38, uVar19);
                    *puVar15 = (uint)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_32,
                                                                              uVar19);
                    *puVar15 = (uint)bVar1;
                    uVar19 = uVar19 + 1;
                } while (uVar20 != uVar19);
                return;
            }
            this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            phVar8 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            lVar9 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar8);
            uVar20 = uVar20 * 3 + lVar9;
            goto LAB_1002292a5;
        case 2:
            bVar2 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            local_58->gStringNoConversion(bVar2);
            eastl::string::operator=((eastl::string*)&field_56, (basic_string*)local_58);
            local_58->~basic_string();
            break;
        default:
            if (param_2 - 30U < 5) {
                bVar2 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                local_58->gStringNoConversion(bVar2);
                puVar21 = &field_232;
                uVar20 = (ulong)(param_2 - 30U);
                pbVar11 = (eastl::string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar21,
                    uVar20);
                eastl::string::operator=(pbVar11, (basic_string*)local_58);
                local_58->~basic_string();
                pbVar12 = (basic_string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar21,
                    uVar20);
                cVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                    pbVar12, (basic_string*)&constants::text::hidden);
                if (cVar3 != '\0') {
                    pbVar11 = (eastl::string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)puVar21,
                        uVar20);
                    eastl::string::assign(pbVar11, "");
                }
            } else {
                switch (param_2) {
                case 40:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    local_38 = (Array<int, eastl::allocator>*)&field_88;
                    uVar20 = (ulong)bVar1;
                    local_38->set_max_size(uVar20, 5);
                    (&field_112, uVar20, 5)->set_max_size();
                    if (bVar1 != 0) {
                        uVar19 = 0;
                        do {
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                            uVar5 = pPVar10->g2();
                            puVar16 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)local_38, uVar19);
                            *puVar16 = uVar5;
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                            uVar5 = pPVar10->g2();
                            puVar16 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)&field_112, uVar19);
                            *puVar16 = uVar5;
                            uVar19 = uVar19 + 1;
                        } while (uVar20 != uVar19);
                    }
                    break;
                case 41:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    local_38 = (Array<int, eastl::allocator>*)&field_136;
                    uVar20 = (ulong)bVar1;
                    local_38->set_max_size(uVar20, 5);
                    (&field_160, uVar20, 5)->set_max_size();
                    if (bVar1 != 0) {
                        uVar19 = 0;
                        do {
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                            uVar5 = pPVar10->g2();
                            puVar16 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)local_38, uVar19);
                            *puVar16 = uVar5;
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                            uVar5 = pPVar10->g2();
                            puVar16 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)&field_160, uVar19);
                            *puVar16 = uVar5;
                            uVar19 = uVar19 + 1;
                        } while (uVar20 != uVar19);
                    }
                    break;
                default:
                    uVar17 = logger::default_logger();
                    logger::Logger::Log(uVar17, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/configdecoder/LocType.cpp",
                                        405, "Error unrecognised .loc config code: %i", param_2);
                    break;
                case 61:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_440 = (uint)uVar4;
                    break;
                case 62:
                    field_444 = 1;
                    break;
                case 64:
                    field_445 = 0;
                    break;
                case 65:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_448 = (uint)uVar4;
                    break;
                case 66:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_452 = (uint)uVar4;
                    break;
                case 67:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_456 = (uint)uVar4;
                    break;
                case 68:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_436 = (uint)uVar4;
                    break;
                case 69:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    field_472 = (uint)bVar1;
                    break;
                case 70:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    sVar6 = pPVar10->g2s();
                    field_460 = (int)sVar6;
                    break;
                case 71:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    sVar6 = pPVar10->g2s();
                    field_464 = (int)sVar6;
                    break;
                case 72:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
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
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    field_480 = (uint)bVar1;
                    break;
                case 77:
                case 92:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    uVar7 = (uint)uVar4;
                    if (uVar4 == 65535) {
                        uVar7 = 4294967295;
                    }
                    field_512 = uVar7;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    uVar7 = (uint)uVar4;
                    if (uVar4 == 65535) {
                        uVar7 = 4294967295;
                    }
                    field_516 = uVar7;
                    uVar7 = 4294967295;
                    if (param_2 == 92) {
                        pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                        uVar4 = pPVar10->g2();
                        uVar7 = 4294967295;
                        if (uVar4 != 65535) {
                            uVar7 = (uint)uVar4;
                        }
                    }
                    local_38 = (Array<int, eastl::allocator>*)CONCAT44(local_38._4_4_, uVar7);
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    puVar21 = &field_488;
                    puVar21->set_max_size((ulong)(bVar1 + 2), 5);
                    uVar20 = 0;
                    do {
                        pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                        uVar4 = pPVar10->g2();
                        puVar15 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar21, uVar20);
                        *puVar15 = (uint)uVar4;
                        piVar13 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar21,
                                                                                 uVar20);
                        if (*piVar13 == 65535) {
                            puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)puVar21, uVar20);
                            *puVar14 = 4294967295;
                        }
                        uVar20 = uVar20 + 1;
                    } while (bVar1 + 1 != uVar20);
                    puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar21, (ulong)(bVar1 + 1));
                    *puVar14 = local_38._0_4_;
                    break;
                case 78:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_520 = (uint)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    field_524 = (uint)bVar1;
                    break;
                case 79:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_528 = (uint)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_532 = (uint)uVar4;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    field_524 = (uint)bVar1;
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    (&field_536, (ulong)bVar1, 5)->set_max_size();
                    if (bVar1 != 0) {
                        uVar20 = 0;
                        do {
                            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                            uVar4 = pPVar10->g2();
                            puVar15 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&field_536, uVar20);
                            *puVar15 = (uint)uVar4;
                            uVar20 = uVar20 + 1;
                        } while (bVar1 != uVar20);
                    }
                    break;
                case 81:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    bVar1 = pPVar10->g1();
                    field_204 = (uint)bVar1 << 8;
                    break;
                case 82:
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    field_432 = (uint)uVar4;
                    break;
                case 89:
                    field_560 = 0;
                    break;
                case 249:
                    pPVar18 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    ParamTypeHelper::UnpackClientParams(pPVar18, (hash_map*)&field_568);
                }
            }
            break;
        case 5:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = pPVar10->g1();
            if (bVar1 == 0) {
                return;
            }
            uVar20 = (ulong)bVar1;
            puVar21 = &field_8;
            cVar3 = puVar21->empty();
            if ((cVar3 != '\0') || (m_lowMem != '\0')) {
                (&field_32)->clear();
                puVar21->set_max_size(uVar20, 5);
                uVar19 = 0;
                do {
                    pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
                    uVar4 = pPVar10->g2();
                    puVar15 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar21, uVar19);
                    *puVar15 = (uint)uVar4;
                    uVar19 = uVar19 + 1;
                } while (uVar20 != uVar19);
                return;
            }
            this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            phVar8 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            lVar9 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar8);
            uVar20 = lVar9 + uVar20 * 2;
        LAB_1002292a5:
            this_00->SetPos(uVar20);
            break;
        case 14:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = pPVar10->g1();
            field_184 = (uint)bVar1;
            break;
        case 15:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = pPVar10->g1();
            field_188 = (uint)bVar1;
            break;
        case 17:
            field_192 = 0;
        case 18:
            field_196 = 0;
            break;
        case 19:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = pPVar10->g1();
            field_200 = (uint)bVar1;
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
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            uVar4 = pPVar10->g2();
            uVar7 = 4294967295;
            if (uVar4 != 65535) {
                uVar7 = (uint)uVar4;
            }
            field_212 = uVar7;
            break;
        case 27:
            field_192 = 1;
            break;
        case 28:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            bVar1 = pPVar10->g1();
            field_216 = (uint)bVar1;
            break;
        case 29:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            cVar3 = pPVar10->g1s();
            field_220 = (int)cVar3;
            break;
        case 39:
            pPVar10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_1);
            cVar3 = pPVar10->g1s();
            field_224 = cVar3 * 5;
        }
    }

    // 0x10022a070, 304 bytes, placed by class name
    // LocType::CheckModel(int)
    ulong LocType::CheckModel(int param_1) {
        undefined8 uVar1;
        char cVar2;
        byte bVar3;
        long lVar4;
        ushort* puVar5;
        ulong uVar6;
        int* piVar7;
        ulong uVar8;
        byte bVar9;
        undefined8 unaff_R13;
        undefined1* puVar10;
        bool bVar11;

        puVar10 = &field_32;
        cVar2 = puVar10->empty();
        if (cVar2 == '\0') {
            lVar4 = puVar10->end();
            bVar11 = lVar4 != 0;
            uVar8 = 0;
            if (bVar11) {
                uVar6 = 0;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10, 0);
                if (*piVar7 != param_1) {
                    uVar6 = 0;
                    do {
                        uVar6 = uVar6 + 1;
                        uVar8 = puVar10->end();
                        bVar11 = uVar6 < uVar8;
                        if (!bVar11)
                            goto LAB_10022a17a;
                        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10,
                                                                                uVar6);
                    } while (*piVar7 != param_1);
                }
                uVar1 = m_pModels;
                puVar5 =
                    (ushort*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_8, uVar6);
                uVar8 = ((int)uVar1)->RequestDownload((uint)*puVar5);
            }
        LAB_10022a17a:
            bVar9 = bVar11 ^ 1U | (byte)uVar8;
        } else {
            puVar10 = &field_8;
            cVar2 = puVar10->empty();
            bVar9 = 1;
            if (((cVar2 == '\0') && (param_1 == 10)) && (lVar4 = puVar10->end(), lVar4 != 0)) {
                bVar9 = 1;
                uVar8 = 0;
                do {
                    uVar1 = m_pModels;
                    puVar5 = (ushort*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10,
                                                                               uVar8);
                    bVar3 = ((int)uVar1)->RequestDownload((uint)*puVar5);
                    bVar9 = bVar9 & bVar3;
                    uVar8 = uVar8 + 1;
                    uVar6 = puVar10->end();
                } while (uVar8 < uVar6);
            }
        }
        return CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar9) & 4294967041;
    }

    // 0x10022a1a0, 128 bytes, placed by class name
    // LocType::CheckModelAll()
    ulong LocType::CheckModelAll() {
        undefined8 uVar1;
        char cVar2;
        byte bVar3;
        long lVar4;
        ushort* puVar5;
        ulong uVar6;
        ulong uVar7;
        undefined1* this_00;
        undefined8 unaff_R15;
        undefined7 uVar9;
        ulong uVar8;

        this_00 = &field_8;
        cVar2 = this_00->empty();
        uVar9 = (undefined7)((ulong)unaff_R15 >> 8);
        uVar8 = CONCAT71(uVar9, 1);
        if (cVar2 == '\0') {
            lVar4 = this_00->end();
            if (lVar4 != 0) {
                uVar8 = CONCAT71(uVar9, 1);
                uVar7 = 0;
                do {
                    uVar1 = m_pModels;
                    puVar5 = (ushort*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                               uVar7);
                    bVar3 = ((int)uVar1)->RequestDownload((uint)*puVar5);
                    uVar8 = CONCAT71((int7)(uVar8 >> 8), (byte)uVar8 & bVar3);
                    uVar7 = uVar7 + 1;
                    uVar6 = this_00->end();
                } while (uVar7 < uVar6);
            }
        }
        return uVar8 & 4294967295;
    }

    // 0x10022a220, 992 bytes, placed by class name
    // LocType::GetModel(int, int, int, int, int, int)
    LocType* LocType::GetModel(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        char cVar1;
        bool bVar2;
        ulong uVar3;
        shared_ptr* psVar4;
        long* plVar5;
        int iVar6;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        shared_ptr* extraout_RDX_02;
        shared_ptr* extraout_RDX_03;
        undefined4 in_register_00000034;
        int* piVar7;
        ulong uVar8;
        undefined4 in_stack_00000010;
        shared_ptr local_60;
        shared_ptr local_50;
        shared_ptr local_40;

        piVar7 = (int*)CONCAT44(in_register_00000034, param_1);
        cVar1 = ((piVar7 + 8))->empty();
        iVar6 = param_2 * 8;
        if (cVar1 != '\0') {
            iVar6 = 0;
        }
        uVar3 = (ulong)(iVar6 + *piVar7 * 1024 + param_3);
        uVar8 = uVar3 | 134217728;
        if (dash3d::g_usingRSeven == '\0') {
            uVar8 = uVar3;
        }
        local_50._0_8_ = uVar8;
        psVar4 = (shared_ptr*)LRUHashCache<dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Find(
            (ulonglong*)&m_mc2);
        new (&local_60) shared_ptr<dash3d::Decor>(psVar4);
        bVar2 = operator==(&local_60, (_func_decltype_nullptr*)0);
        psVar4 = extraout_RDX;
        if (bVar2) {
            BuildModel((LocType*)&local_50, param_1, param_2);
            bVar2 = operator==(&local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                if ((char)piVar7[52] == '\0') {
                    plVar5 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_50);
                    (**(code**)(*plVar5 + 72))(&local_40, plVar5, piVar7[55] + 64, piVar7[56] * 5 + 768, 4294967246,
                                               4294967286, 4294967246);
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_60, &local_40);
                    local_40.~shared_ptr();
                } else {
                    plVar5 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_50);
                    (**(code**)(*plVar5 + 88))(plVar5, (int)(short)(piVar7[55] + 64),
                                               (int)(short)((short)piVar7[56] * 5 + 768), piVar7[55] + 64);
                    plVar5 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_50);
                    (**(code**)(*plVar5 + 64))(plVar5);
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_40, (jag*)&local_50,
                                                                             extraout_RDX_00);
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_60, &local_40);
                    local_40.~shared_ptr();
                }
                local_40._0_8_ = uVar8;
                m_mc2.Put(&local_60, 1, (ulonglong*)&local_40);
            }
            local_50.~shared_ptr();
            psVar4 = extraout_RDX_01;
            if (bVar2)
                goto LAB_10022a55b;
        }
        if ((char)piVar7[52] != '\0') {
            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_40, (jag*)&local_60, psVar4);
            plVar5 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_40);
            (**(code**)(*plVar5 + 96))(&local_50, plVar5);
            shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_60, &local_50);
            local_50.~shared_ptr();
            local_40.~shared_ptr();
        }
        if (-1 < piVar7[51]) {
            plVar5 = (long*)shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)&local_60);
            cVar1 = (**(code**)(*plVar5 + 24))(plVar5);
            if (cVar1 == '\0') {
                plVar5 =
                    (long*)shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)&local_60);
                cVar1 = (**(code**)(*plVar5 + 32))(plVar5);
                if (cVar1 != '\0') {
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50, (jag*)&local_60,
                                                                             extraout_RDX_03);
                    plVar5 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_50);
                    (**(code**)(*plVar5 + 104))(&local_40, plVar5, param_4, param_5, param_6, in_stack_00000010,
                                                piVar7[51]);
                    bVar2 = shared_ptr::operator_cast_to_bool(&local_40);
                    if (bVar2) {
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_60,
                                                                   &local_40);
                    }
                    local_40.~shared_ptr();
                    local_50.~shared_ptr();
                }
            } else {
                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50, (jag*)&local_60, extraout_RDX_02);
                plVar5 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_50);
                (**(code**)(*plVar5 + 184))(&local_40, plVar5, param_4, param_5, param_6, in_stack_00000010,
                                            piVar7[51]);
                bVar2 = shared_ptr::operator_cast_to_bool(&local_40);
                if (bVar2) {
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_60, &local_40);
                }
                local_40.~shared_ptr();
                local_50.~shared_ptr();
            }
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_60);
    LAB_10022a55b:
        local_60.~shared_ptr();
        return this;
    }

    // 0x10022a6a0, 1888 bytes, placed by class name
    // LocType::BuildModel(int, int)
    LocType* LocType::BuildModel(int param_1, int param_2) {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        Array<short, eastl::allocator>* pAVar2;
        short sVar3;
        uint uVar4;
        Js5* pJVar5;
        char cVar6;
        bool bVar7;
        bool bVar8;
        int iVar9;
        int* piVar10;
        uint* puVar11;
        shared_ptr* psVar12;
        long* plVar13;
        shared_ptr<dash3d::ModelUnlit>* this_00;
        ModelUnlit* pMVar14;
        long lVar15;
        short* psVar16;
        uint in_ECX;
        byte bVar17;
        uint uVar18;
        ulong uVar19;
        undefined4 in_register_00000034;
        ulong uVar20;
        bool bVar21;
        undefined1 auVar22[16];
        undefined1 local_98[24];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_78;
        shared_ptr local_70;
        undefined1 local_60[28];
        uint local_44;
        long local_40;
        uint local_34;

        local_44 = in_ECX;
        new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(CONCAT44(in_register_00000034, param_1) + 32);
        local_40 = CONCAT44(in_register_00000034, param_1);
        cVar6 = pAVar1->empty();
        lVar15 = local_40;
        if (cVar6 == '\0') {
            local_60._24_4_ = param_2;
            iVar9 = pAVar1->end();
            if (0 < iVar9) {
                uVar19 = 0;
                do {
                    piVar10 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar1, uVar19);
                    lVar15 = local_40;
                    if (*piVar10 == local_60._24_4_) {
                        if ((int)uVar19 != -1) {
                            puVar11 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)(local_40 + 8), (long)(int)uVar19);
                            cVar6 = *(char*)(lVar15 + 444);
                            bVar7 = 3 < (int)local_44;
                            uVar4 = *puVar11 + 65536;
                            if ((bool)cVar6 == bVar7) {
                                uVar4 = *puVar11;
                            }
                            uVar18 = uVar4 + 131072;
                            if (dash3d::g_usingRSeven == '\0') {
                                uVar18 = uVar4;
                            }
                            local_60._0_8_ = (undefined*)(long)(int)uVar18;
                            psVar12 = (shared_ptr*)
                                LRUHashCache<dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Find(
                                    (ulonglong*)&m_mc1);
                            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_70,
                                                                      psVar12);
                            bVar8 = operator==(&local_70, (_func_decltype_nullptr*)0);
                            pJVar5 = m_pModels;
                            if (bVar8) {
                                bVar8 = (bool)IsWallShape(local_60._24_4_);
                                local_60->Load(pJVar5, uVar18 & 65535, 0, bVar8);
                                shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_70,
                                                                          (shared_ptr*)local_60);
                                local_60->~shared_ptr();
                                bVar8 = operator==(&local_70, (_func_decltype_nullptr*)0);
                                if (bVar8) {
                                    new ((LocType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                    goto LAB_10022ad64;
                                }
                                if ((bool)cVar6 != bVar7) {
                                    plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                        (shared_ptr<dash3d::ModelUnlit>*)&local_70);
                                    (**(code**)(*plVar13 + 176))(plVar13);
                                }
                                local_60._0_8_ = (undefined*)(long)(int)uVar18;
                                m_mc1.Put(&local_70, 1, local_60);
                            }
                            plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                (shared_ptr<dash3d::ModelUnlit>*)&local_70);
                            cVar6 = (**(code**)(*plVar13 + 56))(plVar13);
                            if (dash3d::g_usingRSeven != cVar6) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m->IsForRSeven() == dash3d::g_usingRSeven",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/rs2lib/configdecoder/LocType.cpp",
                                          769, (char*)0);
                            }
                            goto LAB_10022aaac;
                        }
                        break;
                    }
                    uVar19 = uVar19 + 1;
                    iVar9 = pAVar1->end();
                } while ((long)uVar19 < (long)iVar9);
            }
            new ((LocType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else if (param_2 == 10) {
            local_78 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(local_40 + 8);
            local_60._24_4_ = param_2;
            cVar6 = local_78->empty();
            if (cVar6 == '\0') {
                local_98[16] = *(undefined1*)(lVar15 + 444);
                auVar22 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_78);
                uVar19 = auVar22._0_8_;
                eastl::destruct<highlight::NpcUID*>((eastl*)local_98, (NpcUID*)"EASTL vector", auVar22._8_8_);
                new (local_60) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(uVar19, local_98);
                if (uVar19 != 0) {
                    uVar20 = 0;
                    do {
                        puVar11 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)local_78, uVar20);
                        uVar4 = *puVar11 + 65536;
                        if (local_98[16] == '\0') {
                            uVar4 = *puVar11;
                        }
                        uVar18 = uVar4 + 131072;
                        if (dash3d::g_usingRSeven == '\0') {
                            uVar18 = uVar4;
                        }
                        local_98._0_8_ = (undefined*)(long)(int)uVar18;
                        psVar12 = (shared_ptr*)
                            LRUHashCache<dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Find(
                                (ulonglong*)&m_mc1);
                        shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_70, psVar12);
                        bVar7 = operator==(&local_70, (_func_decltype_nullptr*)0);
                        pJVar5 = m_pModels;
                        if (bVar7) {
                            local_34 = uVar18 & 65535;
                            bVar7 = (bool)IsWallShape(10);
                            local_98->Load(pJVar5, local_34, 0, bVar7);
                            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_70,
                                                                      (shared_ptr*)local_98);
                            local_98->~shared_ptr();
                            bVar7 = operator==(&local_70, (_func_decltype_nullptr*)0);
                            if (bVar7) {
                                new ((LocType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                local_60->~vector();
                                goto LAB_10022ad64;
                            }
                            if (local_98[16] != '\0') {
                                plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                    (shared_ptr<dash3d::ModelUnlit>*)&local_70);
                                (**(code**)(*plVar13 + 176))(plVar13);
                            }
                            local_98._0_8_ = (undefined*)(long)(int)uVar18;
                            m_mc1.Put(&local_70, 1, local_98);
                        }
                        if (1 < uVar19) {
                            this_00 = (shared_ptr<dash3d::ModelUnlit>*)
                                eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                                    (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_60, uVar20);
                            shared_ptr<dash3d::ModelUnlit>::operator=(this_00, &local_70);
                        }
                        uVar20 = uVar20 + 1;
                    } while (uVar19 != uVar20);
                }
                if (1 < uVar19) {
                    local_98->Combine(local_60);
                    shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_70,
                                                              (shared_ptr*)local_98);
                    local_98->~shared_ptr();
                }
                local_60->~vector();
            LAB_10022aaac:
                local_34 = CONCAT31(local_34._1_3_, 1);
                local_78 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT71(local_78._1_7_, 1);
                if ((*(int*)(local_40 + 448) == 128) &&
                    (local_78 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT71(local_78._1_7_, 1),
                     *(int*)(local_40 + 452) == 128)) {
                    local_78 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT71(
                        local_78._1_7_, *(int*)(local_40 + 456) != 128);
                }
                if ((*(int*)(local_40 + 460) == 0) && (*(int*)(local_40 + 464) == 0)) {
                    local_34 = CONCAT31(local_34._1_3_, *(int*)(local_40 + 468) != 0);
                }
                pMVar14 =
                    (ModelUnlit*)shared_ptr<dash3d::ModelUnlit>::operator*((shared_ptr<dash3d::ModelUnlit>*)&local_70);
                lVar15 = local_40;
                bVar21 = local_44 == 0;
                bVar17 = (byte)local_78 | (byte)local_34;
                pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_40 + 88);
                bVar7 = (bool)pAVar1->empty();
                local_98._16_8_ = lVar15 + 136;
                bVar8 = (bool)local_98._16_8_->empty();
                local_60->Copy(pMVar14, (bool)((bVar17 ^ 1) & bVar21), bVar7, bVar8, true);
                if ((local_60._24_4_ == 4) && (3 < (int)local_44)) {
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 136))(plVar13, 256);
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 152))(plVar13, 45, 0, 4294967251);
                }
                local_44 = local_44 & 3;
                if (local_44 == 3) {
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 128))(plVar13);
                } else if (local_44 == 2) {
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 120))(plVar13);
                } else if (local_44 == 1) {
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 112))(plVar13);
                }
                cVar6 = pAVar1->empty();
                if ((cVar6 == '\0') && (lVar15 = pAVar1->end(), lVar15 != 0)) {
                    pAVar2 = (Array<short, eastl::allocator>*)(local_40 + 112);
                    uVar19 = 0;
                    do {
                        plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_60);
                        psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar19);
                        sVar3 = *psVar16;
                        psVar16 = (short*)Array<short, eastl::allocator>::operator[](pAVar2, uVar19);
                        (**(code**)(*plVar13 + 160))(plVar13, (int)sVar3, (int)*psVar16);
                        uVar19 = uVar19 + 1;
                        uVar20 = pAVar1->end();
                    } while (uVar19 < uVar20);
                }
                cVar6 = local_98._16_8_->empty();
                if ((cVar6 == '\0') && (lVar15 = local_98._16_8_->end(), lVar15 != 0)) {
                    pAVar2 = (Array<short, eastl::allocator>*)(local_40 + 160);
                    uVar19 = 0;
                    do {
                        plVar13 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_60);
                        psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)local_98._16_8_, uVar19);
                        sVar3 = *psVar16;
                        psVar16 = (short*)Array<short, eastl::allocator>::operator[](pAVar2, uVar19);
                        (**(code**)(*plVar13 + 168))(plVar13, (int)sVar3, (int)*psVar16);
                        uVar19 = uVar19 + 1;
                        uVar20 = local_98._16_8_->end();
                    } while (uVar19 < uVar20);
                }
                if ((byte)local_78 != '\0') {
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 184))(plVar13, *(undefined4*)(local_40 + 448),
                                                 *(undefined4*)(local_40 + 452), *(undefined4*)(local_40 + 456));
                }
                if ((byte)local_34 != '\0') {
                    plVar13 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar13 + 152))(plVar13, *(undefined4*)(local_40 + 460),
                                                 *(undefined4*)(local_40 + 464), *(undefined4*)(local_40 + 468));
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(LocType*)this, (shared_ptr*)local_60);
                local_60->~shared_ptr();
            } else {
                new ((LocType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
        } else {
            new ((LocType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
    LAB_10022ad64:
        local_70.~shared_ptr();
        return (LocType*)this;
    }

    // 0x10022af30, 640 bytes, placed by class name
    // LocType::GetModelLit(int, int, int, int, int, int)
    LocType* LocType::GetModelLit(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        char cVar1;
        bool bVar2;
        ulong uVar3;
        shared_ptr* psVar4;
        long* plVar5;
        int iVar6;
        shared_ptr* extraout_RDX;
        undefined4 in_register_00000034;
        int* piVar7;
        ulong uVar8;
        undefined4 in_stack_00000010;
        shared_ptr local_60;
        shared_ptr local_50;
        shared_ptr local_40;

        piVar7 = (int*)CONCAT44(in_register_00000034, param_1);
        cVar1 = ((piVar7 + 8))->empty();
        iVar6 = param_2 * 8;
        if (cVar1 != '\0') {
            iVar6 = 0;
        }
        uVar3 = (ulong)(iVar6 + *piVar7 * 1024 + param_3);
        uVar8 = uVar3 | 134217728;
        if (dash3d::g_usingRSeven == '\0') {
            uVar8 = uVar3;
        }
        local_40._0_8_ = uVar8;
        psVar4 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Find(
            (ulonglong*)&m_mc3);
        new (&local_60) shared_ptr<dash3d::Decor>(psVar4);
        bVar2 = operator==(&local_60, (_func_decltype_nullptr*)0);
        if (bVar2) {
            BuildModel((LocType*)&local_40, param_1, param_2);
            bVar2 = operator==(&local_40, (_func_decltype_nullptr*)0);
            if (bVar2) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                plVar5 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_40);
                (**(code**)(*plVar5 + 72))(&local_50, plVar5, piVar7[55] + 64, piVar7[56] * 5 + 768, 4294967246,
                                           4294967286, 4294967246);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_60, &local_50);
                local_50.~shared_ptr();
                local_50._0_8_ = uVar8;
                m_mc3.Put(&local_60, 1, (ulonglong*)&local_50);
            }
            local_40.~shared_ptr();
            if (bVar2)
                goto LAB_10022b13b;
        }
        if (-1 < piVar7[51]) {
            plVar5 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
            (**(code**)(*plVar5 + 184))(&local_40, plVar5, param_4, param_5, param_6, in_stack_00000010, piVar7[51]);
            plVar5 = (long*)shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)&local_40);
            cVar1 = (**(code**)(*plVar5 + 24))(plVar5);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("mc->IsLit()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                          "configdecoder/LocType.cpp",
                          583, (char*)0);
            }
            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50, (jag*)&local_40, extraout_RDX);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_60, &local_50);
            local_50.~shared_ptr();
            local_40.~shared_ptr();
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_60);
    LAB_10022b13b:
        local_60.~shared_ptr();
        return this;
    }

    // 0x10022b340, 656 bytes, placed by class name
    // LocType::GetTempModel(int, int, int, int, int, int, SeqType*, int)
    LocType* LocType::GetTempModel(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                   SeqType* param_7, int param_8) {
        char cVar1;
        bool bVar2;
        int iVar3;
        ulong uVar4;
        shared_ptr* psVar5;
        long* plVar6;
        undefined4 in_register_00000034;
        int* piVar7;
        ulong uVar8;
        undefined4 in_stack_0000001c;
        int in_stack_00000020;
        shared_ptr local_70;
        shared_ptr local_50;
        shared_ptr local_40;

        piVar7 = (int*)CONCAT44(in_register_00000034, param_1);
        cVar1 = ((piVar7 + 8))->empty();
        iVar3 = param_2 * 8;
        if (cVar1 != '\0') {
            iVar3 = 0;
        }
        uVar4 = (ulong)(iVar3 + *piVar7 * 1024 + param_3);
        uVar8 = uVar4 | 134217728;
        if (dash3d::g_usingRSeven == '\0') {
            uVar8 = uVar4;
        }
        local_40._0_8_ = uVar8;
        psVar5 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Find(
            (ulonglong*)&m_mc3);
        new (&local_50) shared_ptr<dash3d::Decor>(psVar5);
        bVar2 = operator==(&local_50, (_func_decltype_nullptr*)0);
        if (bVar2) {
            BuildModel((LocType*)&local_40, param_1, param_2);
            bVar2 = operator==(&local_40, (_func_decltype_nullptr*)0);
            if (bVar2) {
                new ((LocType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                plVar6 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_40);
                (**(code**)(*plVar6 + 72))(&local_70, plVar6, piVar7[55] + 64, piVar7[56] * 5 + 768, 4294967246,
                                           4294967286, 4294967246);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_50, &local_70);
                local_70.~shared_ptr();
                local_70._0_8_ = uVar8;
                m_mc3.Put(&local_50, 1, (ulonglong*)&local_70);
            }
            local_40.~shared_ptr();
            if (bVar2)
                goto LAB_10022b555;
        }
        if ((ModelLit*)CONCAT44(in_stack_0000001c, param_8) == (ModelLit*)0) {
            if (piVar7[51] == -1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(LocType*)this, &local_50);
                goto LAB_10022b555;
            }
            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_50);
            (**(code**)(*plVar6 + 80))(&local_40, plVar6, 1, 1);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_50, &local_40);
        } else {
            iVar3 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_50);
            local_40.AnimateModel90((ModelLit*)CONCAT44(in_stack_0000001c, param_8), iVar3, in_stack_00000020, param_3);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_50, &local_40);
        }
        local_40.~shared_ptr();
        if (-1 < piVar7[51]) {
            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_50);
            (**(code**)(*plVar6 + 192))(plVar6, param_4, param_5, param_6, (ulong)param_7 & 4294967295, piVar7[51]);
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(LocType*)this, &local_50);
    LAB_10022b555:
        local_50.~shared_ptr();
        return (LocType*)this;
    }

    // 0x10022bb20, 288 bytes, placed by class name
    // LocType::GetMultiLoc() const
    undefined1* LocType::GetMultiLoc() {
        int iVar1;
        int iVar2;
        long lVar3;
        int* piVar4;
        undefined1* puVar5;
        _func_decltype_nullptr* p_Var6;

        if (field_512 == 4294967295) {
            if ((long)(int)field_516 != 18446744073709551615) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)(int)field_516);
                iVar1 = *piVar4;
                goto joined_r0x00010022bb66;
            }
        } else {
            iVar1 = ClientVarCache::GetVarbit(field_512);
        joined_r0x00010022bb66:
            if ((-1 < iVar1) && (iVar2 = (&field_488)->end(), iVar1 < iVar2 + -1)) {
                p_Var6 = (_func_decltype_nullptr*)(long)iVar1;
                goto LAB_10022bbaa;
            }
        }
        lVar3 = (&field_488)->end();
        p_Var6 = (_func_decltype_nullptr*)(lVar3 - 1);
    LAB_10022bbaa:
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_488, (ulong)p_Var6);
        if (*piVar4 == -1) {
            puVar5 = &GetMultiLoc()::nullLocType;
            if ((GetMultiLoc()::nullLocType == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetMultiLoc()::nullLocType), iVar1 != 0)) {
                puVar5 = &GetMultiLoc()::nullLocType;
                new (&GetMultiLoc()::nullLocType) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var6);
                ___cxa_atexit(PTR__shared_ptr_100ee5448, &GetMultiLoc()::nullLocType, 4294967296);
                ___cxa_guard_release(&GetMultiLoc()::nullLocType);
            }
        } else {
            puVar5 = (undefined1*)List(*piVar4);
        }
        return puVar5;
    }

    // 0x10022bc40, 64 bytes, placed by class name
    // LocType::GetMultiLocOrThis() const
    LocType* LocType::GetMultiLocOrThis() {
        char cVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        LocType* pLVar2;

        cVar1 = (&field_488)->empty();
        if (cVar1 == '\0') {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetMultiLoc(this);
            pLVar2 = (LocType*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        } else {
            pLVar2 = (LocType*)0;
        }
        if (pLVar2 != (LocType*)0) {
            this = pLVar2;
        }
        return this;
    }

    // 0x10022bc80, 128 bytes, placed by class name
    // LocType::GetSpecifiedMultiLocOrThis(int) const
    LocType* LocType::GetSpecifiedMultiLocOrThis(int param_1) {
        int iVar1;
        long lVar2;
        int* piVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        LocType* pLVar4;
        ulong uVar5;

        if ((param_1 < 0) || (iVar1 = (&field_488)->end(), iVar1 + -1 <= param_1)) {
            lVar2 = (&field_488)->end();
            uVar5 = lVar2 - 1;
        } else {
            uVar5 = (ulong)param_1;
        }
        piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_488, uVar5);
        if (*piVar3 != -1) {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)List(*piVar3);
            pLVar4 = (LocType*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (pLVar4 != (LocType*)0) {
                return pLVar4;
            }
        }
        return this;
    }

    // 0x10022bd00, 32 bytes, placed by class name
    // LocType::GetParam(int, int)
    void LocType::GetParam(int param_1, int param_2) {
        ParamTypeHelper::GetParam((hash_map*)&field_568, param_1, param_2);
    }

    // 0x10022bdb0, 48 bytes, placed by class name
    // LocType::GetParam(int, eastl::string const&)
    LocType* LocType::GetParam(int param_1, basic_string* param_2) {
        basic_string* pbVar1;
        basic_string* in_RCX;
        undefined4 in_register_00000034;

        pbVar1 = (basic_string*)ParamTypeHelper::GetParam((hash_map*)(CONCAT44(in_register_00000034, param_1) + 568),
                                                          (int)param_2, in_RCX);
        new (this) eastl::string(pbVar1);
        return this;
    }

    // 0x10022be80, 64 bytes, placed by class name
    // LocType::ResetCache()
    void LocType::ResetCache() {
        m_recentUse.Reset();
        m_mc1.Reset();
        m_mc2.Reset();
        m_mc3.Reset();
    }

    // 0x10022bf00, 288 bytes, placed by class name
    // LocType::HasBgSound()
    ulong LocType::HasBgSound() {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        long lVar3;
        ulong uVar4;
        int* piVar5;
        shared_ptr* psVar6;
        ulong uVar7;
        undefined8 unaff_R15;
        undefined7 uVar9;
        ulong uVar8;
        shared_ptr<dash3d::Decor> local_38[16];

        this_00 = &field_488;
        cVar1 = this_00->empty();
        uVar9 = (undefined7)((ulong)unaff_R15 >> 8);
        if (cVar1 == '\0') {
            lVar3 = this_00->end();
            uVar8 = CONCAT71(uVar9, lVar3 != 0);
            if (lVar3 != 0) {
                uVar7 = 0;
                do {
                    piVar5 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar7);
                    if (*piVar5 != -1) {
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar7);
                        psVar6 = (shared_ptr*)List(*piVar5);
                        shared_ptr<dash3d::Decor>::shared_ptr(local_38, psVar6);
                        lVar3 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_38);
                        if (*(int*)(lVar3 + 520) == -1) {
                            lVar3 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_38);
                            cVar1 = ((lVar3 + 536))->empty();
                            if (cVar1 != '\0') {
                                local_38->~shared_ptr();
                                goto LAB_10022bf70;
                            }
                        }
                        local_38->~shared_ptr();
                        break;
                    }
                LAB_10022bf70:
                    uVar7 = uVar7 + 1;
                    uVar4 = this_00->end();
                    uVar8 = CONCAT71((int7)(uVar8 >> 8), uVar7 < uVar4);
                } while (uVar7 < uVar4);
            }
        } else {
            uVar8 = CONCAT71(uVar9, 1);
            if (field_520 == 4294967295) {
                uVar2 = (&field_536)->empty();
                uVar8 = (ulong)uVar2 ^ 1;
            }
        }
        return uVar8 & 4294967041;
    }

} // namespace jag::oldscape::configdecoder
