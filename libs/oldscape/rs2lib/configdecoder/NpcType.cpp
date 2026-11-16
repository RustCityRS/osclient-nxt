// libs/oldscape/rs2lib/configdecoder/NpcType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "NpcType.h"

namespace jag::oldscape::configdecoder {
    // 0x10103d438, 8 bytes, __common; zero-initialised
    NpcType::m_pConfigClient;

    // 0x10103d440, 8 bytes, __common; zero-initialised
    NpcType::m_pModels;

    // 0x10103d448, 5376 bytes, __common; zero-initialised
    NpcType::m_recentUse;

    // 0x10103e948, 5376 bytes, __common; zero-initialised
    NpcType::m_modelCache;

    // 0x10022d580, 32 bytes, placed by class name and debug map
    // NpcType::Init(jagex3::Js5*, jagex3::Js5*)
    void NpcType::Init(Js5* param_1, Js5* param_2) {
        m_pConfigClient = param_1;
        m_pModels = param_2;
    }

    // 0x10022d5a0, 336 bytes, placed by class name and debug map
    // NpcType::List(int)
    NpcType* NpcType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        int* piVar3;
        NpcType* this_00;
        shared_ptr in_stack_ffffffffffffffa8;
        shared_ptr<dash3d::Decor> asStack_46[6];
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<NpcType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 9, (array*)(ulong)(uint)param_1);
            make_shared<NpcType>((jag*)&local_40);
            shared_ptr<NpcType>::operator=((shared_ptr<NpcType>*)this, &local_40);
            local_40.~shared_ptr();
            piVar3 = (int*)shared_ptr<NpcType>::operator->((shared_ptr<NpcType>*)this);
            *piVar3 = param_1;
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (NpcType*)shared_ptr<NpcType>::operator->((shared_ptr<NpcType>*)this);
                shared_ptr<dash3d::Decor>::shared_ptr(asStack_46 + -10, &local_30);
                Decode(this_00, in_stack_ffffffffffffffa8);
                ((asStack_46 + -10))->~shared_ptr();
            }
            shared_ptr<NpcType>::operator->((shared_ptr<NpcType>*)this);
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x10022d820, 144 bytes, placed by class name and debug map
    // NpcType::Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >)
    void NpcType::Decode(shared_ptr param_1) {
        shared_ptr<dash3d::Decor>* this_00;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar1;
        char cVar2;
        shared_ptr* in_RSI;
        shared_ptr<dash3d::Decor> asStackY_b8[128];
        shared_ptr in_stack_ffffffffffffffc8;

        pPVar1 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)in_RSI);
        cVar2 = pPVar1->g1();
        if (cVar2 != '\0') {
            this_00 = asStackY_b8 + 128;
            do {
                shared_ptr<dash3d::Decor>::shared_ptr(this_00, in_RSI);
                Decode(this, in_stack_ffffffffffffffc8, (int)this_00);
                this_00->~shared_ptr();
                pPVar1 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)in_RSI);
                cVar2 = pPVar1->g1();
            } while (cVar2 != '\0');
        }
    }

    // 0x10022d8b0, 16 bytes, placed by class name and debug map
    // NpcType::PostDecode()
    void NpcType::PostDecode() {}

    // 0x10022d9b0, 3120 bytes, placed by class name and debug map
    // NpcType::Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >, int)
    void NpcType::Decode(shared_ptr param_1, int param_2) {
        byte bVar1;
        bool bVar2;
        char cVar3;
        ushort uVar4;
        undefined2 uVar5;
        short sVar6;
        undefined4 uVar7;
        uint* puVar8;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar9;
        eastl::string* pbVar10;
        basic_string* pbVar11;
        int* piVar12;
        undefined4* puVar13;
        undefined2* puVar14;
        undefined8 uVar15;
        PacketJ* pPVar16;
        uint uVar17;
        int in_EDX;
        uint uVar18;
        ulong uVar19;
        ulong uVar20;
        undefined4 in_register_00000034;
        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>* this_00;
        undefined1* puVar21;
        int iVar22;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_60[32];
        ulong local_40;
        Array<short, eastl::allocator>* local_38;

        this_00 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000034, param_2);
        switch (in_EDX) {
        case 1:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar1 = pPVar9->g1();
            (&field_48, (ulong)bVar1, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar19 = 0;
                do {
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    puVar8 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48,
                                                                             uVar19);
                    *puVar8 = (uint)uVar4;
                    uVar19 = uVar19 + 1;
                } while (bVar1 != uVar19);
            }
            break;
        case 2:
            bVar2 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_60, bVar2);
            eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_60);
            local_60->~basic_string();
            break;
        default:
            if (in_EDX - 30U < 5) {
                bVar2 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    local_60, bVar2);
                puVar21 = &field_256;
                uVar19 = (ulong)(in_EDX - 30U);
                pbVar10 = (eastl::string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar21,
                    uVar19);
                eastl::string::operator=(pbVar10, (basic_string*)local_60);
                local_60->~basic_string();
                pbVar11 = (basic_string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar21,
                    uVar19);
                cVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                    pbVar11, (basic_string*)&constants::text::hidden);
                if (cVar3 != '\0') {
                    pbVar10 = (eastl::string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)puVar21,
                        uVar19);
                    eastl::string::assign(pbVar10, "");
                }
            } else {
                switch (in_EDX) {
                case 40:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    bVar1 = pPVar9->g1();
                    local_38 = (Array<short, eastl::allocator>*)&field_160;
                    uVar19 = (ulong)bVar1;
                    local_38->set_max_size(uVar19, 5);
                    (&field_184, uVar19, 5)->set_max_size();
                    if (bVar1 != 0) {
                        uVar20 = 0;
                        do {
                            pPVar9 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                            uVar5 = pPVar9->g2();
                            puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](local_38, uVar20);
                            *puVar14 = uVar5;
                            pPVar9 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                            uVar5 = pPVar9->g2();
                            puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)&field_184, uVar20);
                            *puVar14 = uVar5;
                            uVar20 = uVar20 + 1;
                        } while (uVar19 != uVar20);
                    }
                    break;
                case 41:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    bVar1 = pPVar9->g1();
                    local_38 = (Array<short, eastl::allocator>*)&field_208;
                    uVar19 = (ulong)bVar1;
                    local_38->set_max_size(uVar19, 5);
                    (&field_232, uVar19, 5)->set_max_size();
                    if (bVar1 != 0) {
                        uVar20 = 0;
                        do {
                            pPVar9 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                            uVar5 = pPVar9->g2();
                            puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](local_38, uVar20);
                            *puVar14 = uVar5;
                            pPVar9 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                            uVar5 = pPVar9->g2();
                            puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)&field_232, uVar20);
                            *puVar14 = uVar5;
                            uVar20 = uVar20 + 1;
                        } while (uVar19 != uVar20);
                    }
                    break;
                default:
                    uVar15 = logger::default_logger();
                    logger::Logger::Log(uVar15, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/configdecoder/NpcType.cpp",
                                        306, "Error unrecognised .npc config code: %i");
                    break;
                case 60:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    bVar1 = pPVar9->g1();
                    (&field_72, (ulong)bVar1, 5)->set_max_size();
                    if (bVar1 != 0) {
                        uVar19 = 0;
                        do {
                            pPVar9 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                            uVar4 = pPVar9->g2();
                            puVar8 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&field_72, uVar19);
                            *puVar8 = (uint)uVar4;
                            uVar19 = uVar19 + 1;
                        } while (bVar1 != uVar19);
                    }
                    break;
                case 93:
                    field_456 = 0;
                    break;
                case 95:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_460 = (uint)uVar4;
                    break;
                case 97:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_464 = (uint)uVar4;
                    break;
                case 98:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_468 = (uint)uVar4;
                    break;
                case 99:
                    field_472 = 1;
                    break;
                case 100:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    cVar3 = pPVar9->g1s();
                    field_476 = (int)cVar3;
                    break;
                case 101:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    cVar3 = pPVar9->g1s();
                    field_480 = cVar3 * 5;
                    break;
                case 102:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    bVar1 = pPVar9->g1();
                    uVar18 = 0;
                    if (bVar1 != 0) {
                        uVar17 = (uint)bVar1;
                        do {
                            uVar18 = uVar18 + 1;
                            bVar2 = 1 < uVar17;
                            uVar17 = uVar17 >> 1;
                        } while (bVar2);
                    }
                    local_38 = (Array<short, eastl::allocator>*)&field_584;
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                     eastl::allocator>>::resize((ulong)local_38);
                    local_40 = (ulong)uVar18;
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                     eastl::allocator>>::resize((ulong)&field_656);
                    if (uVar18 != 0) {
                        uVar19 = 0;
                        do {
                            if ((bVar1 >> ((uint)uVar19 & 31) & 1) == 0) {
                                puVar13 = (undefined4*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<int,
                                            eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                        local_38,
                                    uVar19);
                                *puVar13 = 4294967295;
                                iVar22 = -1;
                            } else {
                                pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                                 this_00);
                                uVar7 = pPVar9->gSmart2or4s();
                                puVar13 = (undefined4*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<int,
                                            eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                        local_38,
                                    uVar19);
                                *puVar13 = uVar7;
                                pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                                 this_00);
                                sVar6 = pPVar9->gSmart1Or2Minus1();
                                iVar22 = (int)sVar6;
                            }
                            piVar12 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                  eastl::allocator>>*)&field_656,
                                       uVar19);
                            *piVar12 = iVar22;
                            uVar19 = uVar19 + 1;
                        } while (local_40 != uVar19);
                    }
                    break;
                case 103:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_484 = (uint)uVar4;
                    break;
                case 106:
                case 118:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    uVar18 = (uint)uVar4;
                    if (uVar4 == 65535) {
                        uVar18 = 4294967295;
                    }
                    field_512 = uVar18;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    uVar18 = (uint)uVar4;
                    if (uVar4 == 65535) {
                        uVar18 = 4294967295;
                    }
                    field_516 = uVar18;
                    uVar18 = 4294967295;
                    if (in_EDX == 118) {
                        pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar4 = pPVar9->g2();
                        uVar18 = 4294967295;
                        if (uVar4 != 65535) {
                            uVar18 = (uint)uVar4;
                        }
                    }
                    local_38 = (Array<short, eastl::allocator>*)CONCAT44(local_38._4_4_, uVar18);
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    bVar1 = pPVar9->g1();
                    puVar21 = &field_488;
                    puVar21->set_max_size((ulong)(bVar1 + 2), 5);
                    uVar19 = 0;
                    do {
                        pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar4 = pPVar9->g2();
                        puVar8 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar21,
                                                                                 uVar19);
                        *puVar8 = (uint)uVar4;
                        piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar21,
                                                                                 uVar19);
                        if (*piVar12 == 65535) {
                            puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)puVar21, uVar19);
                            *puVar13 = 4294967295;
                        }
                        uVar19 = uVar19 + 1;
                    } while (bVar1 + 1 != uVar19);
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar21, (ulong)(bVar1 + 1));
                    *puVar13 = local_38._0_4_;
                    break;
                case 107:
                    field_520 = 0;
                    break;
                case 109:
                    field_521 = 0;
                    break;
                case 111:
                    field_522 = 1;
                    break;
                case 114:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_124 = (uint)uVar4;
                    break;
                case 115:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_124 = (uint)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_128 = (uint)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_132 = (uint)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_136 = (uint)uVar4;
                    break;
                case 116:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_140 = (uint)uVar4;
                    break;
                case 117:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_140 = (uint)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_144 = (uint)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_148 = (uint)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar4 = pPVar9->g2();
                    field_152 = (uint)uVar4;
                    break;
                case 249:
                    pPVar16 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(this_00);
                    ParamTypeHelper::UnpackClientParams(pPVar16, (hash_map*)&field_528);
                }
            }
            break;
        case 12:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar1 = pPVar9->g1();
            field_40 = (uint)bVar1;
            break;
        case 13:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_96 = (uint)uVar4;
            break;
        case 14:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_108 = (uint)uVar4;
            break;
        case 15:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_100 = (uint)uVar4;
            break;
        case 16:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_104 = (uint)uVar4;
            break;
        case 17:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_108 = (uint)uVar4;
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_112 = (uint)uVar4;
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_116 = (uint)uVar4;
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_120 = (uint)uVar4;
            break;
        case 18:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar9->g2();
            field_156 = (uint)uVar4;
        }
    }

    // 0x10022e620, 1008 bytes, placed by class name and debug map
    // NpcType::GetTempModel(SeqType*, int, SeqType*, int, NPCTypeCustomisation*)
    NpcType* NpcType::GetTempModel(SeqType* param_1, int param_2, SeqType* param_3, int param_4,
                                   NPCTypeCustomisation* param_5) {
        char cVar1;
        bool bVar2;
        int iVar3;
        shared_ptr* psVar4;
        SeqType* pSVar5;
        long* plVar6;
        undefined4 in_register_00000014;
        ModelLit* pMVar7;
        undefined4 in_register_00000084;
        ModelLit* pMVar8;
        CoordMapSquare* in_stack_00000008;
        undefined8 in_stack_ffffffffffffff78;
        undefined4 uVar9;
        ulong local_70;
        shared_ptr local_68;
        shared_ptr local_58;
        shared_ptr local_40;

        uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 32);
        pMVar8 = (ModelLit*)CONCAT44(in_register_00000084, param_4);
        pMVar7 = (ModelLit*)CONCAT44(in_register_00000014, param_2);
        cVar1 = param_1[1].field_224.empty();
        if (cVar1 == '\0') {
            GetMultiNpc((NpcType*)&local_68);
            bVar2 = operator==(&local_68, (_func_decltype_nullptr*)0);
            if (bVar2) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                pSVar5 = (SeqType*)shared_ptr<NpcType>::operator->((shared_ptr<NpcType>*)&local_68);
                GetTempModel(this, pSVar5, param_2, (SeqType*)(ulong)(uint)param_3, param_4,
                             (NPCTypeCustomisation*)(ulong)(uint)param_5);
            }
            local_68.~shared_ptr();
            return this;
        }
        local_70 = (ulong)param_1->field_0;
        if (65535 < (long)local_70) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_myId < 0x10000",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/NpcType.cpp",
                      343, (char*)0);
        }
        if (in_stack_00000008 != (CoordMapSquare*)0) {
            iVar3 = in_stack_00000008->GetZ();
            local_70 = local_70 | (long)iVar3 << 16;
        }
        if (dash3d::g_usingRSeven != '\0') {
            local_70 = local_70 | 281474976710656;
        }
        psVar4 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_modelCache);
        new (&local_68) shared_ptr<dash3d::Decor>(psVar4);
        psVar4 = (shared_ptr*)0;
        bVar2 = operator==(&local_68, (_func_decltype_nullptr*)0);
        if (bVar2) {
            BuildModel((NpcType*)&local_58, (Array*)param_1, (NPCTypeCustomisation*)&param_1->field_48);
            bVar2 = operator==(&local_58, (_func_decltype_nullptr*)0);
            if (bVar2) {
                psVar4 = (shared_ptr*)0;
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                plVar6 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_58);
                (**(code**)(*plVar6 + 72))(&local_40, plVar6, *(int*)&param_1[1].field_212 + 64,
                                           *(int*)&param_1[1].field_216 + 850, 4294967266, 4294967246,
                                           CONCAT44(uVar9, 4294967266));
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_68, &local_40);
                local_40.~shared_ptr();
                psVar4 = &local_68;
                m_modelCache.Put(psVar4, 1, &local_70);
            }
            local_58.~shared_ptr();
            if (bVar2)
                goto LAB_10022e974;
        }
        new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(psVar4);
        if ((pMVar7 == (ModelLit*)0) || (pMVar8 == (ModelLit*)0)) {
            if (pMVar7 != (ModelLit*)0) {
                iVar3 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_68);
                local_40.AnimateModel(pMVar7, iVar3, (uint)param_3);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_58, &local_40);
                goto LAB_10022e913;
            }
            if (pMVar8 != (ModelLit*)0) {
                iVar3 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_68);
                local_40.AnimateModel(pMVar8, iVar3, (uint)param_5);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_58, &local_40);
                goto LAB_10022e913;
            }
            if ((*(int*)&param_1[1].field_200 != 128) || (*(int*)&param_1[1].field_204 != 128)) {
                plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_68);
                (**(code**)(*plVar6 + 80))(&local_40, plVar6, 1, 1);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_58, &local_40);
                goto LAB_10022e913;
            }
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_58, &local_68);
        } else {
            iVar3 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_68);
            local_40.SplitAnimateModel(pMVar7, iVar3, (SeqType*)(ulong)(uint)param_3, param_4);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_58, &local_40);
        LAB_10022e913:
            local_40.~shared_ptr();
        }
        if ((*(int*)&param_1[1].field_200 != 128) || (*(int*)&param_1[1].field_204 != 128)) {
            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_58);
            (**(code**)(*plVar6 + 168))(plVar6, *(undefined4*)&param_1[1].field_200,
                                        *(undefined4*)&param_1[1].field_204);
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_58);
        local_58.~shared_ptr();
    LAB_10022e974:
        local_68.~shared_ptr();
        return this;
    }

    // 0x10022ea10, 192 bytes, placed by class name and debug map
    // NpcType::GetMultiNpc() const
    NpcType* NpcType::GetMultiNpc() {
        int iVar1;
        int iVar2;
        long lVar3;
        int* piVar4;
        long in_RSI;
        ulong uVar5;

        if (*(int*)(in_RSI + 512) == -1) {
            if ((long)*(int*)(in_RSI + 516) != 18446744073709551615) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)*(int*)(in_RSI + 516));
                iVar1 = *piVar4;
                goto joined_r0x00010022ea5a;
            }
        } else {
            iVar1 = ClientVarCache::GetVarbit(*(int*)(in_RSI + 512));
        joined_r0x00010022ea5a:
            if ((-1 < iVar1) && (iVar2 = ((in_RSI + 488))->end(), iVar1 < iVar2 + -1)) {
                uVar5 = (ulong)iVar1;
                goto LAB_10022ea9e;
            }
        }
        lVar3 = ((in_RSI + 488))->end();
        uVar5 = lVar3 - 1;
    LAB_10022ea9e:
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(in_RSI + 488), uVar5);
        if (*piVar4 == -1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            List(this, *piVar4);
        }
        return this;
    }

    // 0x10022eb70, 1216 bytes, placed by class name and debug map
    // NpcType::BuildModel(Array<int, eastl::allocator> const&, NPCTypeCustomisation const*) const
    NpcType* NpcType::BuildModel(Array* param_1, NPCTypeCustomisation* param_2) {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        short sVar2;
        Js5* pJVar3;
        char cVar4;
        bool bVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        Layout* this_01;
        int* piVar6;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        int* piVar7;
        long lVar8;
        undefined1* puVar9;
        uint* puVar10;
        shared_ptr<dash3d::ModelUnlit>* this_03;
        ulong uVar11;
        shared_ptr* psVar12;
        Array<game::VarValue, eastl::allocator>* pAVar13;
        Array* pAVar14;
        long* plVar15;
        short* psVar16;
        LoginManager* in_RCX;
        NPCTypeCustomisation* pNVar17;
        ulong uVar18;
        NpcType* this_04;
        LoginManager* this_05;
        undefined1 auVar19[16];
        Array<int, eastl::allocator> local_a0[24];
        Array<int, eastl::allocator> local_88[24];
        LoginManager* local_68;
        shared_ptr local_60;
        shared_ptr local_48;

        Array<int, eastl::allocator>::Array(local_a0, (Array*)param_2);
        if (in_RCX != (LoginManager*)0) {
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          in_RCX->second();
            cVar4 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00);
            if (cVar4 == '\0') {
                this_01 = (Layout*)in_RCX->second();
                piVar6 = (int*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)in_RCX->second();
                piVar7 = (int*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                Array<int, eastl::allocator>::Array(local_88, piVar6, piVar7);
                param_2 = (NPCTypeCustomisation*)local_88;
                Array<int, eastl::allocator>::operator=(local_a0, (Array*)param_2);
                local_88->~Array();
            }
        }
        local_68 = in_RCX;
        lVar8 = local_a0->end();
        if (lVar8 == 0) {
            bVar5 = false;
        } else {
            pNVar17 = (NPCTypeCustomisation*)0;
            bVar5 = false;
            do {
                param_2 = pNVar17;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_a0, (ulong)pNVar17);
                pJVar3 = m_pModels;
                if (*piVar6 != -1) {
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](local_a0, (ulong)pNVar17);
                    param_2 = (NPCTypeCustomisation*)(ulong)*puVar10;
                    cVar4 = ((int)pJVar3)->RequestDownload(*puVar10);
                    if (cVar4 == '\0') {
                        bVar5 = true;
                    }
                }
                pNVar17 = (NPCTypeCustomisation*)&pNVar17->field_1;
                puVar9 = (undefined1*)local_a0->end();
            } while (pNVar17 < puVar9);
        }
        this_04 = (NpcType*)this;
        if (bVar5) {
            new ((NpcType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            goto LAB_10022ef96;
        }
        new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        auVar19 = local_a0->end();
        eastl::destruct<highlight::NpcUID*>((eastl*)&local_48, (NpcUID*)"EASTL vector", auVar19._8_8_);
        new (local_88) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(
            auVar19._0_8_, (BucketAllocatorEASTL*)&local_48);
        lVar8 = local_a0->end();
        if (lVar8 != 0) {
            uVar18 = 0;
            do {
                pJVar3 = m_pModels;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_a0, uVar18);
                local_48.Load(pJVar3, *piVar6, 0, false);
                this_03 = (shared_ptr<dash3d::ModelUnlit>*)
                    eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                        (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_88, uVar18);
                shared_ptr<dash3d::ModelUnlit>::operator=(this_03, &local_48);
                local_48.~shared_ptr();
                uVar18 = uVar18 + 1;
                uVar11 = local_a0->end();
            } while (uVar18 < uVar11);
        }
        lVar8 = local_88->size();
        if (lVar8 == 1) {
            psVar12 = (shared_ptr*)eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_88, 0);
            this_04 = (NpcType*)this;
            this_05 = local_68;
            pAVar14 = param_1;
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_60, psVar12);
            bVar5 = operator==(&local_60, (_func_decltype_nullptr*)0);
            if (bVar5) {
                local_48.Combine(local_88);
                shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_60, &local_48);
                goto LAB_10022edd9;
            }
        } else {
            local_48.Combine(local_88);
            this_04 = (NpcType*)this;
            this_05 = local_68;
            pAVar14 = param_1;
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_60, &local_48);
        LAB_10022edd9:
            local_48.~shared_ptr();
        }
        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(pAVar14 + 160);
        cVar4 = pAVar1->empty();
        if (cVar4 == '\0') {
            new (&local_48) Array<short, eastl::allocator>(pAVar14 + 184);
            if (this_05 != (LoginManager*)0) {
                pAVar13 = (Array<game::VarValue, eastl::allocator>*)this_05->get_overflow_allocator();
                cVar4 = pAVar13->empty();
                if (cVar4 == '\0') {
                    pAVar14 = (Array*)this_05->get_overflow_allocator();
                    Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&local_48, pAVar14);
                }
            }
            lVar8 = pAVar1->end();
            if (lVar8 != 0) {
                uVar18 = 0;
                do {
                    plVar15 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_60);
                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)pAVar1, uVar18);
                    sVar2 = *psVar16;
                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&local_48, uVar18);
                    (**(code**)(*plVar15 + 160))(plVar15, (int)sVar2, (int)*psVar16);
                    uVar18 = uVar18 + 1;
                    uVar11 = pAVar1->end();
                } while (uVar18 < uVar11);
            }
            local_48.~Array();
            pAVar14 = param_1;
            this_04 = (NpcType*)this;
            this_05 = local_68;
        }
        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(pAVar14 + 208);
        cVar4 = pAVar1->empty();
        if (cVar4 == '\0') {
            new (&local_48) Array<short, eastl::allocator>(pAVar14 + 232);
            if (this_05 != (LoginManager*)0) {
                pAVar13 = (Array<game::VarValue, eastl::allocator>*)this_05->GetDevCredentialsOutputDirectory();
                cVar4 = pAVar13->empty();
                if (cVar4 == '\0') {
                    pAVar14 = (Array*)this_05->GetDevCredentialsOutputDirectory();
                    Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&local_48, pAVar14);
                }
            }
            lVar8 = pAVar1->end();
            if (lVar8 != 0) {
                uVar18 = 0;
                do {
                    plVar15 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_60);
                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)pAVar1, uVar18);
                    sVar2 = *psVar16;
                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&local_48, uVar18);
                    (**(code**)(*plVar15 + 168))(plVar15, (int)sVar2, (int)*psVar16);
                    uVar18 = uVar18 + 1;
                    uVar11 = pAVar1->end();
                } while (uVar18 < uVar11);
            }
            local_48.~Array();
            this_04 = (NpcType*)this;
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this_04, &local_60);
        local_88->~vector();
        local_60.~shared_ptr();
    LAB_10022ef96:
        local_a0->~Array();
        return this_04;
    }

    // 0x10022f820, 176 bytes, placed by class name and debug map
    // NpcType::GetHead(NPCTypeCustomisation*)
    NpcType* NpcType::GetHead(NPCTypeCustomisation* param_1) {
        char cVar1;
        NPCTypeCustomisation* pNVar3;
        shared_ptr<NpcType> local_38[16];

        cVar1 = param_1[5].field_43.empty();
        if (cVar1 == '\0') {
            GetMultiNpc((NpcType*)local_38);
            if (operator==((shared_ptr*)local_38, (_func_decltype_nullptr*)0)) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                pNVar3 = (NPCTypeCustomisation*)shared_ptr<NpcType>::operator->(local_38);
                GetHead(this, pNVar3);
            }
            local_38->~shared_ptr();
        } else {
            BuildModel(this, (Array*)param_1, (NPCTypeCustomisation*)&param_1->field_72);
        }
        return this;
    }

    // 0x10022f8e0, 96 bytes, placed by class name and debug map
    // NpcType::GetMultiNpcOrThis() const
    NpcType* NpcType::GetMultiNpcOrThis() {
        char cVar1;
        NpcType* pNVar2;
        undefined1 local_30[16];

        cVar1 = (&field_488)->empty();
        if (cVar1 == '\0') {
            GetMultiNpc((NpcType*)local_30);
            pNVar2 = (NpcType*)local_30->end();
            local_30->~shared_ptr();
        } else {
            pNVar2 = (NpcType*)0;
        }
        if (pNVar2 != (NpcType*)0) {
            this = pNVar2;
        }
        return this;
    }

    // 0x10022f940, 144 bytes, placed by class name and debug map
    // NpcType::GetSpecifiedMultiNpcOrThis(int) const
    NpcType* NpcType::GetSpecifiedMultiNpcOrThis(int param_1) {
        int iVar1;
        long lVar2;
        int* piVar3;
        NpcType* pNVar4;
        ulong uVar5;
        undefined1 local_30[16];

        if ((param_1 < 0) || (iVar1 = (&field_488)->end(), iVar1 + -1 <= param_1)) {
            lVar2 = (&field_488)->end();
            uVar5 = lVar2 - 1;
        } else {
            uVar5 = (ulong)param_1;
        }
        piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_488, uVar5);
        if (*piVar3 != -1) {
            List((NpcType*)local_30, *piVar3);
            pNVar4 = (NpcType*)local_30->end();
            local_30->~shared_ptr();
            if (pNVar4 != (NpcType*)0) {
                return pNVar4;
            }
        }
        return this;
    }

    // 0x10022f9d0, 176 bytes, placed by class name and debug map
    // NpcType::IsMultiNpcVisible()
    bool NpcType::IsMultiNpcVisible() {
        undefined1* this_00;
        long lVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int* piVar5;
        ulong uVar6;

        this_00 = &field_488;
        cVar2 = this_00->empty();
        if (cVar2 != '\0') {
            return true;
        }
        if (field_512 == 4294967295) {
            if ((long)(int)field_516 != 18446744073709551615) {
                piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)(int)field_516);
                iVar3 = *piVar5;
                goto joined_r0x00010022fa2d;
            }
        } else {
            iVar3 = ClientVarCache::GetVarbit(field_512);
        joined_r0x00010022fa2d:
            if ((-1 < iVar3) && (iVar4 = this_00->end(), iVar3 < iVar4)) {
                uVar6 = (ulong)iVar3;
                goto LAB_10022fa5d;
            }
        }
        lVar1 = this_00->end();
        uVar6 = lVar1 - 1;
    LAB_10022fa5d:
        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar6);
        return *piVar5 != -1;
    }

    // 0x10022fa80, 48 bytes, placed by class name and debug map
    // NpcType::GetParam(int, eastl::string const&)
    NpcType* NpcType::GetParam(int param_1, basic_string* param_2) {
        basic_string* pbVar1;
        basic_string* in_RCX;
        undefined4 in_register_00000034;

        pbVar1 = (basic_string*)ParamTypeHelper::GetParam((hash_map*)(CONCAT44(in_register_00000034, param_1) + 528),
                                                          (int)param_2, in_RCX);
        new (this) eastl::string(pbVar1);
        return this;
    }

    // 0x10022fab0, 32 bytes, placed by class name and debug map
    // NpcType::GetParam(int, int)
    void NpcType::GetParam(int param_1, int param_2) {
        ParamTypeHelper::GetParam((hash_map*)&field_528, param_1, param_2);
    }

    // 0x10022fad0, 32 bytes, placed by class name and debug map
    // NpcType::ResetCache()
    void NpcType::ResetCache() {
        m_recentUse.Reset();
        m_modelCache.Reset();
    }

    // 0x10022faf0, 96 bytes, placed by class name and debug map
    // NpcType::GetHeadIconGraphic(int) const
    undefined4 NpcType::GetHeadIconGraphic(int param_1) {
        char cVar1;
        ulong uVar2;
        undefined4* puVar3;
        undefined1* this_00;
        undefined4 uVar4;

        this_00 = &field_584;
        cVar1 = this_00->empty();
        uVar4 = 4294967295;
        if (cVar1 == '\0') {
            uVar2 = this_00->size();
            if ((ulong)(long)param_1 < uVar2) {
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)param_1);
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x10022fb50, 96 bytes, placed by class name and debug map
    // NpcType::GetHeadIconIndex(int) const
    undefined4 NpcType::GetHeadIconIndex(int param_1) {
        char cVar1;
        ulong uVar2;
        undefined4* puVar3;
        undefined1* this_00;
        undefined4 uVar4;

        this_00 = &field_584;
        cVar1 = this_00->empty();
        uVar4 = 4294967295;
        if (cVar1 == '\0') {
            uVar2 = this_00->size();
            if ((ulong)(long)param_1 < uVar2) {
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)param_1);
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10022d790, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::NpcType>::type make_shared<oldscape::configdecoder::NpcType>()
    jag* make_shared<oldscape::configdecoder::NpcType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        NpcType* local_28[2];

        pvVar1 = (void*)aligned_alloc(760, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::NpcType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::NpcType>, int,
                                   oldscape::configdecoder::NpcType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
