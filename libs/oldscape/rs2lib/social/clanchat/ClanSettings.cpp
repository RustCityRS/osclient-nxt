// libs/oldscape/rs2lib/social/clanchat/ClanSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ClanSettings.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1016af933, 1 bytes, __common; zero-initialised
    ClanSettings::m_fluttered;

    // 0x1016af934, 12 bytes, __common; zero-initialised
    ClanSettings::m_verbose;

    // 0x100243890: the linker folded this into configdecoder::ObjSpriteCacheKey::ObjSpriteCacheKey(), which has identical code
    ClanSettings::ExtraSettingsParam::ExtraSettingsParam();

    // 0x1002438a0: the linker folded this into configdecoder::ObjSpriteCacheKey::ObjSpriteCacheKey(), which has identical code
    ClanSettings::ExtraSettingsParam::ExtraSettingsParam();

    // 0x10025cec0, 528 bytes, base-object constructor, placed by class name and debug map
    // ClanSettings::ClanSettings(long long, PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettings::ClanSettings(longlong param_1, PacketJ* param_2) {
        allocator local_38[8];

        *(undefined8*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_16, "", local_38) eastl::string();
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        m_allowNonMembers = false;
        new (&field_72) eastl::vector<long long, eastl::allocator>();
        new (&field_104) eastl::vector<signed char, eastl::allocator>();
        new (&field_136) eastl::vector<int, eastl::allocator>();
        new (&field_168) eastl::vector<int, eastl::allocator>();
        new (&field_200) eastl::vector<int, eastl::allocator>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        new (&field_248) eastl::vector<long long, eastl::allocator>();
        new (&field_280) eastl::vector<eastl::string, eastl::allocator>();
        new (&field_312) eastl::vector<eastl::string, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_344, local_38) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_400) Array<int, eastl::allocator>();
        field_0 = param_1;
        Decode(this, param_2);
    }

    // 0x10025d0f0, 1904 bytes, placed by class name and debug map
    // ClanSettings::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettings::Decode(PacketJ* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        byte bVar1;
        char cVar2;
        undefined1 uVar3;
        ushort uVar4;
        uint uVar5;
        undefined4 uVar6;
        int iVar7;
        int iVar8;
        undefined8 uVar9;
        ulong uVar10;
        undefined8* puVar11;
        eastl::string* pbVar12;
        undefined1* puVar13;
        undefined4* puVar14;
        uint* puVar15;
        ExtraSettingsParam* pEVar16;
        char* pcVar17;
        bool bVar18;
        byte bVar19;
        ulong uVar20;
        uint uVar21;
        ulong local_c0[4];
        ulong local_a0;
        vector<int, eastl::allocator>* local_98;
        vector<long long, eastl::allocator>* local_90;
        vector<eastl::string, eastl::allocator>* local_88;
        vector<int, eastl::allocator>* local_80;
        undefined1 local_78[48];
        ulong local_48;
        vector<signed char, eastl::allocator>* local_40;
        vector<int, eastl::allocator>* local_38;

        uVar5 = param_1->g1();
        uVar20 = (ulong)uVar5;
        bVar19 = (byte)uVar5;
        if (5 < (byte)(bVar19 - 1)) {
            uVar9 = logger::default_logger();
            pcVar17 = "";
            if (m_fluttered == '\0') {
                pcVar17 = "Unsupported ClanSettings version: ";
            }
            logger::Logger::Log(uVar9, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                1099, "%s %i", pcVar17, uVar5 & 255);
        }
        uVar10 = param_1->g1();
        if ((uVar10 & 1) != 0) {
            field_12 = true;
        }
        if ((uVar10 & 2) == 0) {
            cVar2 = field_12;
        } else {
            field_13 = '\x01';
            cVar2 = field_12;
        }
        if (cVar2 == '\0') {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            cVar2 = field_13;
        } else {
            cVar2 = field_13;
        }
        if (cVar2 == '\0') {
            (&field_280)->clear();
            (&field_312)->clear();
        }
        uVar6 = param_1->g4();
        field_8 = uVar6;
        iVar7 = param_1->g4();
        iVar8 = iVar7 + 16912800;
        if (iVar7 == 0) {
            iVar8 = iVar7;
        }
        if (3 < bVar19) {
            iVar8 = iVar7;
        }
        field_48 = iVar8;
        uVar4 = param_1->g2();
        field_64 = (uint)uVar4;
        bVar1 = param_1->g1();
        field_240 = (uint)bVar1;
        bVar18 = SUB81(param_1, 0);
        local_78->gStringNoConversion(bVar18);
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)local_78);
        local_78->~basic_string();
        if (3 < bVar19) {
            uVar6 = param_1->g4();
            field_52 = uVar6;
        }
        cVar2 = param_1->g1();
        m_allowNonMembers = cVar2 == '\x01';
        cVar2 = param_1->g1s();
        field_57 = cVar2;
        cVar2 = param_1->g1s();
        field_58 = cVar2;
        cVar2 = param_1->g1s();
        field_59 = cVar2;
        cVar2 = param_1->g1s();
        field_60 = cVar2;
        local_48 = uVar20;
        if (0 < (int)field_64) {
            if (field_12 != false) {
                puVar13 = &field_72;
                cVar2 = puVar13->empty();
                if ((cVar2 != '\0') || (iVar8 = puVar13->size(), iVar8 < (int)field_64)) {
                    eastl::vector<long long, eastl::allocator>::resize((ulong)puVar13);
                }
            }
            if (field_13 != '\0') {
                puVar13 = &field_280;
                cVar2 = puVar13->empty();
                if ((cVar2 != '\0') || (iVar8 = puVar13->size(), iVar8 < (int)field_64)) {
                    puVar13->resize((long)(int)field_64);
                }
            }
            puVar13 = &field_104;
            cVar2 = puVar13->empty();
            if ((cVar2 != '\0') || (iVar8 = puVar13->size(), iVar8 < (int)field_64)) {
                eastl::vector<signed char, eastl::allocator>::resize((ulong)puVar13);
            }
            this_00 = &field_136;
            local_40 = (vector<signed char, eastl::allocator>*)puVar13;
            cVar2 = this_00->empty();
            if ((cVar2 != '\0') || (iVar8 = this_00->size(), iVar8 < (int)field_64)) {
                eastl::vector<int, eastl::allocator>::resize((ulong)this_00);
            }
            puVar13 = &field_168;
            cVar2 = puVar13->empty();
            if ((cVar2 != '\0') || (iVar8 = puVar13->size(), iVar8 < (int)field_64)) {
                eastl::vector<int, eastl::allocator>::resize((ulong)puVar13);
            }
            this_01 = &field_200;
            local_80 = (vector<int, eastl::allocator>*)this_00;
            local_38 = (vector<int, eastl::allocator>*)puVar13;
            cVar2 = this_01->empty();
            if ((cVar2 != '\0') || (iVar8 = this_01->size(), iVar8 < (int)field_64)) {
                eastl::vector<int, eastl::allocator>::resize((ulong)this_01);
            }
            local_98 = (vector<int, eastl::allocator>*)this_01;
            if (0 < (int)field_64) {
                local_90 = (vector<long long, eastl::allocator>*)&field_72;
                local_88 = (vector<eastl::string, eastl::allocator>*)&field_280;
                uVar10 = 0;
                do {
                    if (field_12 != false) {
                        uVar9 = param_1->g8();
                        puVar11 = (undefined8*)eastl::vector<long long, eastl::allocator>::operator[](local_90, uVar10);
                        *puVar11 = uVar9;
                    }
                    if (field_13 != '\0') {
                        local_78->gStringNoConversion(bVar18);
                        pbVar12 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](local_88,
                                                                                                             uVar10);
                        eastl::string::operator=(pbVar12, (basic_string*)local_78);
                        local_78->~basic_string();
                    }
                    uVar3 = param_1->g1s();
                    puVar13 = (undefined1*)eastl::vector<signed char, eastl::allocator>::operator[](local_40, uVar10);
                    *puVar13 = uVar3;
                    if (1 < (byte)uVar20) {
                        uVar6 = param_1->g4();
                        puVar14 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_80, uVar10);
                        *puVar14 = uVar6;
                    }
                    uVar5 = 0;
                    uVar21 = 0;
                    if (4 < (byte)local_48) {
                        uVar4 = param_1->g2();
                        uVar21 = (uint)uVar4;
                    }
                    puVar15 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_38, uVar10);
                    uVar20 = local_48;
                    *puVar15 = uVar21;
                    if (5 < (byte)local_48) {
                        cVar2 = param_1->g1();
                        uVar5 = (uint)(cVar2 == '\x01');
                    }
                    puVar15 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_98, uVar10);
                    *puVar15 = uVar5;
                    uVar10 = uVar10 + 1;
                } while ((long)uVar10 < (long)(int)field_64);
            }
            SetCurrentAndReplacementOwners(this);
        }
        bVar19 = (byte)uVar20;
        if (0 < (int)field_240) {
            if (field_12 != false) {
                puVar13 = &field_248;
                cVar2 = puVar13->empty();
                if ((cVar2 != '\0') || (iVar8 = puVar13->size(), iVar8 < (int)field_240)) {
                    eastl::vector<long long, eastl::allocator>::resize((ulong)puVar13);
                }
            }
            if (field_13 != '\0') {
                puVar13 = &field_312;
                cVar2 = puVar13->empty();
                if ((cVar2 != '\0') || (iVar8 = puVar13->size(), iVar8 < (int)field_240)) {
                    puVar13->resize((long)(int)field_240);
                }
            }
            if (0 < (int)field_240) {
                local_40 = (vector<signed char, eastl::allocator>*)&field_248;
                local_38 = (vector<int, eastl::allocator>*)&field_312;
                uVar10 = 0;
                do {
                    if (field_12 != false) {
                        uVar9 = param_1->g8();
                        puVar11 = (undefined8*)eastl::vector<long long, eastl::allocator>::operator[](
                            (vector<long long, eastl::allocator>*)local_40, uVar10);
                        *puVar11 = uVar9;
                        uVar20 = local_48;
                    }
                    bVar19 = (byte)uVar20;
                    if (field_13 != '\0') {
                        local_78->gStringNoConversion(bVar18);
                        pbVar12 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                            (vector<eastl::string, eastl::allocator>*)local_38, uVar10);
                        eastl::string::operator=(pbVar12, (basic_string*)local_78);
                        local_78->~basic_string();
                    }
                    uVar10 = uVar10 + 1;
                } while ((long)uVar10 < (long)(int)field_240);
            }
        }
        if ((2 < bVar19) && (uVar4 = param_1->g2(), uVar4 != 0)) {
            puVar13 = &field_344;
            puVar13->clear();
            iVar8 = uVar4 + 1;
            do {
                uVar5 = param_1->g4();
                uVar21 = uVar5 & 1073741823;
                if (uVar5 < 1073741824) {
                    iVar7 = param_1->g4();
                    local_78._0_4_ = 0;
                    local_78._8_8_ = SEXT48(iVar7);
                    new (local_c0) eastl::allocator("EASTL basic_string");
                    new ((local_78 + 16)) eastl::string("", local_c0);
                    local_c0[0] = (ulong)uVar21;
                    pEVar16 = (ExtraSettingsParam*)
                        eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                        eastl::equal_to<long long>, eastl::allocator, false>::
                        operator[]((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                             eastl::equal_to<long long>, eastl::allocator, false>*)puVar13,
                                   (longlong*)local_c0);
                    ExtraSettingsParam::operator=(pEVar16, (ExtraSettingsParam*)local_78);
                LAB_10025d620:
                    local_78->~ObjSpriteCacheKey();
                } else if (uVar5 >> 30 == 2) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_c0, bVar18);
                    local_78._0_4_ = 2;
                    local_78._8_8_ = 0;
                    new ((local_78 + 16)) eastl::string(local_c0);
                    local_a0 = (ulong)uVar21;
                    pEVar16 = (ExtraSettingsParam*)
                        eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                        eastl::equal_to<long long>, eastl::allocator, false>::
                        operator[]((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                             eastl::equal_to<long long>, eastl::allocator, false>*)puVar13,
                                   (longlong*)&local_a0);
                    ExtraSettingsParam::operator=(pEVar16, (ExtraSettingsParam*)local_78);
                    local_78->~ObjSpriteCacheKey();
                    local_c0->~basic_string();
                } else if (uVar5 >> 30 == 1) {
                    local_78._8_8_ = param_1->g8();
                    local_78._0_4_ = 1;
                    new (local_c0) eastl::allocator("EASTL basic_string");
                    new ((local_78 + 16)) eastl::string("", local_c0);
                    local_c0[0] = (ulong)uVar21;
                    pEVar16 = (ExtraSettingsParam*)
                        eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                        eastl::equal_to<long long>, eastl::allocator, false>::
                        operator[]((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                             eastl::equal_to<long long>, eastl::allocator, false>*)puVar13,
                                   (longlong*)local_c0);
                    ExtraSettingsParam::operator=(pEVar16, (ExtraSettingsParam*)local_78);
                    goto LAB_10025d620;
                }
                iVar8 = iVar8 + -1;
            } while (1 < iVar8);
        }
    }

    // 0x10025d860, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettings::ClanSettings(long long, PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x10025d870, 528 bytes, base-object constructor, placed by class name and debug map
    // ClanSettings::ClanSettings(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettings::ClanSettings(PacketJ* param_1) {
        allocator local_38[8];

        *(undefined8*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_16, "", local_38) eastl::string();
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        m_allowNonMembers = false;
        new (&field_72) eastl::vector<long long, eastl::allocator>();
        new (&field_104) eastl::vector<signed char, eastl::allocator>();
        new (&field_136) eastl::vector<int, eastl::allocator>();
        new (&field_168) eastl::vector<int, eastl::allocator>();
        new (&field_200) eastl::vector<int, eastl::allocator>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        new (&field_248) eastl::vector<long long, eastl::allocator>();
        new (&field_280) eastl::vector<eastl::string, eastl::allocator>();
        new (&field_312) eastl::vector<eastl::string, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_344, local_38) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_400) Array<int, eastl::allocator>();
        Decode(this, param_1);
    }

    // 0x10025da80, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettings::ClanSettings(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x10025da90, 640 bytes, base-object constructor, placed by class name and debug map
    // ClanSettings::ClanSettings(eastl::string, long long)
    undefined8 ClanSettings::ClanSettings(basic_string* param_2, longlong param_3) {
        undefined1 auVar1[16];
        int iVar2;
        ulonglong uVar3;
        eastl::string* this_00;
        allocator local_a8[32];
        allocator local_88[8];
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        eastl::string* local_38;

        *(undefined8*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        local_38 = (eastl::string*)&field_16;
        new (&field_16, "", local_a8) eastl::string();
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        m_allowNonMembers = false;
        new (&field_72) eastl::vector<long long, eastl::allocator>();
        local_70 = &field_72;
        new (&field_104) eastl::vector<signed char, eastl::allocator>();
        local_68 = &field_104;
        new (&field_136) eastl::vector<int, eastl::allocator>();
        local_58 = &field_168;
        local_60 = &field_136;
        new (local_58) eastl::vector<int, eastl::allocator>();
        local_50 = &field_200;
        new (local_50) eastl::vector<int, eastl::allocator>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        local_48 = &field_248;
        new (local_48) eastl::vector<long long, eastl::allocator>();
        new (&field_280) eastl::vector<eastl::string, eastl::allocator>();
        local_40 = &field_280;
        new (&field_312) eastl::vector<eastl::string, eastl::allocator>();
        eastl::allocator::allocator(local_a8, "EASTL hash_map");
        new (&field_344, local_a8) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_400) Array<int, eastl::allocator>();
        field_12 = true;
        eastl::string::operator=(local_38, param_2);
        eastl::allocator::allocator(local_88, "EASTL basic_string");
        new (local_a8) eastl::string(0, local_88);
        iVar2 = game::TimeTools::RuneDay();
        DoAddMember(this, param_3, (basic_string*)local_a8, iVar2);
        this_00 = (eastl::string*)local_a8;
        eastl::string::~basic_string(this_00);
        uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_00);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3 >> 5;
        field_48 = (int)((uVar3 >> 5) / 1875);
        return SUB168(auVar1 * ZEXT816(314824432191309681), 0);
    }

    // 0x10025dd10, 576 bytes, placed by class name and debug map
    // ClanSettings::DoAddMember(long long, eastl::string const&, int)
    void ClanSettings::DoAddMember(longlong param_1, basic_string* param_2, int param_3) {
        uint uVar1;
        byte bVar2;
        char cVar3;
        int iVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        longlong* plVar7;
        eastl::string* this_00;
        undefined1* puVar8;
        undefined4* puVar9;
        int* piVar10;
        char* pcVar11;
        undefined1 uVar12;

        if (field_12 != 0 < param_1) {
            uVar5 = logger::default_logger();
            pcVar11 = "";
            if (m_fluttered == '\0') {
                pcVar11 = "Invalid UserHash arg to this method - useUserHashes: %i but userhash: %i";
            }
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                470, pcVar11, field_12, param_1);
        }
        bVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (field_13 != (bVar2 ^ 1)) {
            uVar5 = logger::default_logger();
            pcVar11 = "";
            if (m_fluttered == '\0') {
                pcVar11 = "Invalid DisplayName arg to this method - useDisplayNames: %i but displayname: %s";
            }
            cVar3 = field_13;
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                475, pcVar11, cVar3, uVar6);
        }
        if (param_1 < 1) {
        LAB_10025de2a:
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar3 != '\0')
                goto LAB_10025de74;
            cVar3 = (&field_280)->empty();
            if (cVar3 == '\0') {
                uVar1 = field_64;
                iVar4 = (&field_280)->size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025de74;
            }
        } else {
            cVar3 = (&field_72)->empty();
            if (cVar3 == '\0') {
                uVar1 = field_64;
                iVar4 = (&field_72)->size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025de2a;
            }
        }
        ExtendMemberList(this, field_64 + 5);
    LAB_10025de74:
        cVar3 = (&field_72)->empty();
        if (cVar3 == '\0') {
            plVar7 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                (vector<long long, eastl::allocator>*)&field_72, (long)(int)field_64);
            *plVar7 = param_1;
        }
        cVar3 = (&field_280)->empty();
        if (cVar3 == '\0') {
            this_00 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                (vector<eastl::string, eastl::allocator>*)&field_280, (long)(int)field_64);
            eastl::string::operator=(this_00, param_2);
        }
        if (field_232 == 4294967295) {
            field_232 = field_64;
            uVar12 = 126;
        } else {
            uVar12 = 0;
        }
        puVar8 = (undefined1*)eastl::vector<signed char, eastl::allocator>::operator[](
            (vector<signed char, eastl::allocator>*)&field_104, (long)(int)field_64);
        *puVar8 = uVar12;
        puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
            (vector<int, eastl::allocator>*)&field_136, (long)(int)field_64);
        *puVar9 = 0;
        piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_168,
                                                                         (long)(int)field_64);
        *piVar10 = param_3;
        puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
            (vector<int, eastl::allocator>*)&field_200, (long)(int)field_64);
        *puVar9 = 0;
        field_64 = field_64 + 1;
        (&field_400)->clear();
    }

    // 0x10025df70, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettings::ClanSettings(eastl::string, long long): jumps straight to the base-object constructor

    // 0x10025df80, 624 bytes, placed by class name and debug map
    // ClanSettings::Copy()
    ClanSettings* ClanSettings::Copy() {
        undefined1 uVar1;
        undefined4 uVar2;
        int iVar3;
        char cVar4;
        long lVar5;
        long in_RSI;

        make_shared<ClanSettings>((jag*)this);
        uVar2 = *(undefined4*)(in_RSI + 8);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined4*)(lVar5 + 8) = uVar2;
        uVar2 = *(undefined4*)(in_RSI + 48);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined4*)(lVar5 + 48) = uVar2;
        uVar2 = *(undefined4*)(in_RSI + 52);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined4*)(lVar5 + 52) = uVar2;
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        eastl::string::operator=((eastl::string*)(lVar5 + 16), (basic_string*)(in_RSI + 16));
        uVar1 = *(undefined1*)(in_RSI + 56);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 56) = uVar1;
        uVar1 = *(undefined1*)(in_RSI + 57);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 57) = uVar1;
        uVar1 = *(undefined1*)(in_RSI + 58);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 58) = uVar1;
        uVar1 = *(undefined1*)(in_RSI + 59);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 59) = uVar1;
        uVar1 = *(undefined1*)(in_RSI + 60);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 60) = uVar1;
        uVar1 = *(undefined1*)(in_RSI + 12);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 12) = uVar1;
        uVar1 = *(undefined1*)(in_RSI + 13);
        lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
        *(undefined1*)(lVar5 + 13) = uVar1;
        iVar3 = *(int*)(in_RSI + 64);
        if (0 < iVar3) {
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            *(int*)(lVar5 + 64) = iVar3;
            if (*(char*)(in_RSI + 12) != '\0') {
                lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
                eastl::vector<long long, eastl::allocator>::operator=(
                    (vector<long long, eastl::allocator>*)(lVar5 + 72), (vector*)(in_RSI + 72));
            }
            if (*(char*)(in_RSI + 13) != '\0') {
                lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
                eastl::vector<eastl::string, eastl::allocator>::operator=(
                    (vector<eastl::string, eastl::allocator>*)(lVar5 + 280), (vector*)(in_RSI + 280));
            }
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            eastl::vector<signed char, eastl::allocator>::operator=(
                (vector<signed char, eastl::allocator>*)(lVar5 + 104), (vector*)(in_RSI + 104));
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)(lVar5 + 136),
                                                            (vector*)(in_RSI + 136));
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)(lVar5 + 168),
                                                            (vector*)(in_RSI + 168));
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)(lVar5 + 200),
                                                            (vector*)(in_RSI + 200));
            uVar2 = *(undefined4*)(in_RSI + 232);
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            *(undefined4*)(lVar5 + 232) = uVar2;
            uVar2 = *(undefined4*)(in_RSI + 236);
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            *(undefined4*)(lVar5 + 236) = uVar2;
        }
        iVar3 = *(int*)(in_RSI + 240);
        if (0 < iVar3) {
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            *(int*)(lVar5 + 240) = iVar3;
            if (*(char*)(in_RSI + 12) != '\0') {
                lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
                eastl::vector<long long, eastl::allocator>::operator=(
                    (vector<long long, eastl::allocator>*)(lVar5 + 248), (vector*)(in_RSI + 248));
            }
            if (*(char*)(in_RSI + 13) != '\0') {
                lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
                eastl::vector<eastl::string, eastl::allocator>::operator=(
                    (vector<eastl::string, eastl::allocator>*)(lVar5 + 312), (vector*)(in_RSI + 312));
            }
        }
        cVar4 = ((in_RSI + 344))->empty();
        if (cVar4 == '\0') {
            lVar5 = shared_ptr<ClanSettings>::operator->((shared_ptr<ClanSettings>*)this);
            eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                            eastl::equal_to<long long>, eastl::allocator, false>::
            operator=((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                eastl::equal_to<long long>, eastl::allocator, false>*)(lVar5 + 344),
                      (hash_map*)(in_RSI + 344));
        }
        return this;
    }

    // 0x10025e2f0, 480 bytes, placed by class name and debug map
    // ClanSettings::ValidateClanName(eastl::string)
    ClanSettings* ClanSettings::ValidateClanName(eastl::string* param_2) {
        int iVar2;
        long lVar3;
        char* pcVar4;
        undefined8 uVar5;
        int iVar6;
        int iVar7;
        regex local_d8[64];
        string local_98[24];
        eastl::string local_80[32];
        eastl::string local_60[32];
        allocator local_40[8];

        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar3 == 0) {
            new (this) eastl::string();
        } else {
            eastl::string::trim(param_2);
            iVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::basic_string(local_80);
            if (0 < iVar2) {
                iVar7 = 0;
                iVar6 = 1;
                do {
                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    if (core::stringtools::general::StringTools::IsASCIIAlphaNumeric((short)*pcVar4) == '\0') {
                        if (0 < iVar7) {
                            eastl::string::append(local_80, " ");
                            goto LAB_10025e395;
                        }
                    } else {
                        eastl::string::append(local_80, pcVar4);
                    LAB_10025e395:
                        iVar7 = iVar7 + 1;
                    }
                } while ((iVar6 < iVar2) && (iVar6 = iVar6 + 1, iVar7 < 20));
            }
            std::regex::basic_regex(local_d8);
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::regex_replace<std::regex_traits<char>, char>(local_98, uVar5, local_d8);
            pcVar4 = (char*)std::string::c_str(local_98);
            eastl::allocator::allocator(local_40, "EASTL basic_string");
            this = (ClanSettings*)this;
            eastl::string::basic_string(local_60, pcVar4, local_40);
            eastl::string::trim(local_60);
            lVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar3 == 0) {
                new (this) eastl::string();
            } else {
                new (this) eastl::string(local_60);
            }
            eastl::string::~basic_string(local_60);
            std::string::~string(local_98);
            std::regex::~basic_regex(local_d8);
            eastl::string::~basic_string(local_80);
        }
        return this;
    }

    // 0x10025e570, 272 bytes, placed by class name
    // ClanSettings::ExtendMemberList(int)
    void ClanSettings::ExtendMemberList(int param_1) {
        allocator local_58[8];
        ulong local_50[4];

        if (field_12 != false) {
            local_50[0] = 0;
            (&field_72, (ulong)param_1, (longlong*)local_50)->resize();
        }
        if (field_13 != '\0') {
            eastl::allocator::allocator(local_58, "EASTL basic_string");
            new (local_50) eastl::string("", local_58);
            (&field_280, (ulong)param_1, (basic_string*)local_50)->resize();
            local_50->~basic_string();
        }
        local_50[0] = local_50[0] & 18446744073709551360;
        (&field_104, (ulong)param_1, (signed*)local_50)->resize();
        local_50[0] = local_50[0] & 18446744069414584320;
        (&field_136, (ulong)param_1, (int*)local_50)->resize();
        local_50[0] = local_50[0] & 18446744069414584320;
        (&field_168, (ulong)param_1, (int*)local_50)->resize();
        local_50[0] = local_50[0] & 18446744069414584320;
        (&field_200, (ulong)param_1, (int*)local_50)->resize();
    }

    // 0x10025e7c0, 96 bytes, placed by class name
    // ClanSettings::ExtendBannedList(int)
    void ClanSettings::ExtendBannedList(int param_1) {
        longlong local_20;

        if (field_12 != false) {
            local_20 = 0;
            (&field_248, (long)param_1, &local_20)->resize();
        }
        if (field_13 != '\0') {
            (&field_312, (long)param_1)->resize();
        }
    }

    // 0x10025e820, 144 bytes, placed by class name
    // ClanSettings::IsBanned(long long)
    ulong ClanSettings::IsBanned(longlong param_1) {
        long* plVar1;
        ulong uVar2;
        undefined8 unaff_R13;
        ulong uVar3;

        if (param_1 == 0) {
            uVar3 = 0;
        } else {
            uVar3 = CONCAT71((int7)((ulong)unaff_R13 >> 8), 0 < (int)field_240);
            if (0 < (int)field_240) {
                plVar1 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                    (vector<long long, eastl::allocator>*)&field_248, 0);
                if (*plVar1 != param_1) {
                    uVar2 = 1;
                    do {
                        uVar3 = CONCAT71((int7)(uVar3 >> 8), (long)uVar2 < (long)(int)field_240);
                        if ((long)(int)field_240 <= (long)uVar2)
                            break;
                        plVar1 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                            (vector<long long, eastl::allocator>*)&field_248, uVar2);
                        uVar2 = uVar2 + 1;
                    } while (*plVar1 != param_1);
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x10025e8b0, 128 bytes, placed by class name
    // ClanSettings::IsAffined(long long)
    ulong ClanSettings::IsAffined(longlong param_1) {
        long* plVar1;
        ulong uVar2;
        undefined8 unaff_R13;
        ulong uVar3;

        if (param_1 == 0) {
            uVar3 = 0;
        } else {
            uVar3 = CONCAT71((int7)((ulong)unaff_R13 >> 8), 0 < (int)field_64);
            if (0 < (int)field_64) {
                plVar1 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                    (vector<long long, eastl::allocator>*)&field_72, 0);
                if (*plVar1 != param_1) {
                    uVar2 = 1;
                    do {
                        uVar3 = CONCAT71((int7)(uVar3 >> 8), (long)uVar2 < (long)(int)field_64);
                        if ((long)(int)field_64 <= (long)uVar2)
                            break;
                        plVar1 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                            (vector<long long, eastl::allocator>*)&field_72, uVar2);
                        uVar2 = uVar2 + 1;
                    } while (*plVar1 != param_1);
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x10025e930, 128 bytes, placed by class name
    // ClanSettings::FindBanned(long long)
    ulong ClanSettings::FindBanned(longlong param_1) {
        long* plVar1;
        ulong uVar2;

        if ((param_1 != 0) && (0 < (int)field_240)) {
            uVar2 = 0;
            do {
                plVar1 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                    (vector<long long, eastl::allocator>*)&field_248, uVar2);
                if (*plVar1 == param_1) {
                    return uVar2 & 4294967295;
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)field_240);
        }
        return 4294967295;
    }

    // 0x10025e9b0, 112 bytes, placed by class name
    // ClanSettings::FindMember(long long)
    ulong ClanSettings::FindMember(longlong param_1) {
        long* plVar1;
        ulong uVar2;

        if ((param_1 != 0) && (0 < (int)field_64)) {
            uVar2 = 0;
            do {
                plVar1 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                    (vector<long long, eastl::allocator>*)&field_72, uVar2);
                if (*plVar1 == param_1) {
                    return uVar2 & 4294967295;
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)field_64);
        }
        return 4294967295;
    }

    // 0x10025ea20, 128 bytes, placed by class name
    // ClanSettings::FindMember(eastl::string)
    ulong ClanSettings::FindMember(basic_string* param_2) {
        basic_string* pbVar3;
        ulong uVar4;

        if ((eastl::basic_string<char,
                                 eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
             0) &&
            (0 < (int)field_64)) {
            uVar4 = 0;
            do {
                pbVar3 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)&field_280, uVar4);
                if (eastl::operator==(pbVar3, param_2)) {
                    return uVar4 & 4294967295;
                }
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)field_64);
        }
        return 4294967295;
    }

    // 0x10025eaa0, 64 bytes, placed by class name
    // ClanSettings::GetMemberRank(long long)
    int ClanSettings::GetMemberRank(longlong param_1) {
        char cVar1;
        int iVar2;
        char* pcVar3;

        iVar2 = FindMember(this, param_1);
        if (iVar2 == -1) {
            cVar1 = -1;
        } else {
            pcVar3 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                (vector<signed char, eastl::allocator>*)&field_104, (long)iVar2);
            cVar1 = *pcVar3;
        }
        return (int)cVar1;
    }

    // 0x10025eae0, 64 bytes, placed by class name
    // ClanSettings::GetMemberJoinRuneday(long long)
    undefined4 ClanSettings::GetMemberJoinRuneday(longlong param_1) {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;

        iVar1 = FindMember(this, param_1);
        if (iVar1 == -1) {
            uVar2 = 4294967295;
        } else {
            puVar3 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&field_168, (long)iVar1);
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x10025eb20, 64 bytes, placed by class name
    // ClanSettings::GetMemberMuted(long long)
    bool ClanSettings::GetMemberMuted(longlong param_1) {
        int iVar1;
        int* piVar2;
        bool bVar3;

        iVar1 = FindMember(this, param_1);
        if (iVar1 == -1) {
            bVar3 = false;
        } else {
            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_200,
                                                                            (long)iVar1);
            bVar3 = *piVar2 != 0;
        }
        return bVar3;
    }

    // 0x10025eb60, 64 bytes, placed by class name
    // ClanSettings::GetMemberExtraInfo(long long, unsigned int, unsigned int)
    undefined8 ClanSettings::GetMemberExtraInfo(longlong param_1, uint param_2, uint param_3) {
        uint uVar1;
        undefined8 uVar2;

        uVar1 = FindMember(this, param_1);
        if (uVar1 == 4294967295) {
            uVar2 = 0;
        } else {
            uVar2 = GetMemberExtraInfoBySlot(this, uVar1, param_2, param_3);
        }
        return uVar2;
    }

    // 0x10025eba0, 64 bytes, placed by class name
    // ClanSettings::GetMemberExtraInfoBySlot(unsigned int, unsigned int, unsigned int)
    int ClanSettings::GetMemberExtraInfoBySlot(uint param_1, uint param_2, uint param_3) {
        uint* puVar1;
        uint uVar2;

        uVar2 = ~(-1 << ((char)param_3 + 1U & 31));
        if (param_3 == 31) {
            uVar2 = 4294967295;
        }
        puVar1 = (uint*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_136,
                                                                         (ulong)param_1);
        return (int)(uVar2 & *puVar1) >> ((byte)param_2 & 31);
    }

    // 0x10025ebe0, 144 bytes, placed by class name
    // ClanSettings::GetMemberDisplayName(long long)
    ClanSettings* ClanSettings::GetMemberDisplayName(longlong param_1) {
        int iVar2;
        basic_string* pbVar3;
        longlong in_RDX;
        allocator local_28[8];

        iVar2 = FindMember((ClanSettings*)param_1, in_RDX);
        if (iVar2 != -1) {
            eastl::vector<eastl::string, eastl::allocator>::operator[](
                (vector<eastl::string, eastl::allocator>*)(param_1 + 280), (long)iVar2);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                pbVar3 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)(param_1 + 280), (long)iVar2);
                new (this) eastl::string(pbVar3);
                return this;
            }
        }
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string("", local_28);
        return this;
    }

    // 0x10025ec70, 144 bytes, placed by class name
    // ClanSettings::GetBannedDisplayName(long long)
    ClanSettings* ClanSettings::GetBannedDisplayName(longlong param_1) {
        int iVar2;
        basic_string* pbVar3;
        longlong in_RDX;
        allocator local_28[8];

        iVar2 = FindBanned((ClanSettings*)param_1, in_RDX);
        if (iVar2 != -1) {
            eastl::vector<eastl::string, eastl::allocator>::operator[](
                (vector<eastl::string, eastl::allocator>*)(param_1 + 312), (long)iVar2);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                pbVar3 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)(param_1 + 312), (long)iVar2);
                new (this) eastl::string(pbVar3);
                return this;
            }
        }
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string("", local_28);
        return this;
    }

    // 0x10025ed00, 16 bytes, placed by class name
    // ClanSettings::IsAdmin(long long)
    bool ClanSettings::IsAdmin(longlong param_1) {
        char cVar1;

        cVar1 = GetMemberRank(this, param_1);
        return 'c' < cVar1;
    }

    // 0x10025ed10, 160 bytes, placed by class name
    // ClanSettings::GetExtraSettingAsInt(int)
    ClanSettings* ClanSettings::GetExtraSettingAsInt(int param_1) {
        char cVar1;
        long lVar3;
        int in_EDX;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_00000034;
        eastl local_48[16];
        long local_38[2];

        cVar1 = ((CONCAT44(in_register_00000034, param_1) + 344))->empty();
        if (cVar1 == '\0') {
            local_38[0] = (long)in_EDX;
            eastl::hashtable<
                long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_48);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if ((!eastl::operator==(local_48, (hashtable_iterator_base*)local_38, extraout_RDX)) &&
                (lVar3 = local_48->HeapBeginPtr(), *(int*)(lVar3 + 8) == 0)) {
                lVar3 = local_48->HeapBeginPtr();
                new (this) Nullable<int>(*(int*)(lVar3 + 16));
                return this;
            }
        }
        new (this) Nullable<int>();
        return this;
    }

    // 0x10025ee60, 224 bytes, placed by class name
    // ClanSettings::GetExtraSettingAsIntVarbit(int, unsigned int, unsigned int)
    ClanSettings* ClanSettings::GetExtraSettingAsIntVarbit(int param_1, uint param_2, uint param_3) {
        char cVar1;
        long lVar3;
        uint uVar4;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_00000034;
        int in_R8D;
        eastl local_58[16];
        long local_48[2];

        cVar1 = ((CONCAT44(in_register_00000034, param_1) + 344))->empty();
        if (cVar1 == '\0') {
            local_48[0] = (long)(int)param_2;
            eastl::hashtable<
                long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_58);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if ((!eastl::operator==(local_58, (hashtable_iterator_base*)local_48, extraout_RDX)) &&
                (lVar3 = local_58->HeapBeginPtr(), *(int*)(lVar3 + 8) == 0)) {
                lVar3 = local_58->HeapBeginPtr();
                uVar4 = ~(-1 << ((char)in_R8D + 1U & 31));
                if (in_R8D == 31) {
                    uVar4 = 4294967295;
                }
                local_48[0] = CONCAT44(local_48[0]._4_4_, (uVar4 & *(uint*)(lVar3 + 16)) >> ((byte)param_3 & 31));
                eastl::pair<int const, bool>::pair<int, bool, void>((pair<int const, bool>*)this, local_48);
                return this;
            }
        }
        new (this) Nullable<int>();
        return this;
    }

    // 0x10025ef50, 176 bytes, placed by class name
    // ClanSettings::GetExtraSettingAsLong(int)
    ClanSettings* ClanSettings::GetExtraSettingAsLong(int param_1) {
        char cVar1;
        long lVar3;
        int in_EDX;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_00000034;
        eastl local_48[16];
        long local_38[2];

        cVar1 = ((CONCAT44(in_register_00000034, param_1) + 344))->empty();
        if (cVar1 == '\0') {
            local_38[0] = (long)in_EDX;
            eastl::hashtable<
                long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_48);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if ((!eastl::operator==(local_48, (hashtable_iterator_base*)local_38, extraout_RDX)) &&
                (lVar3 = local_48->HeapBeginPtr(), *(int*)(lVar3 + 8) == 1)) {
                lVar3 = local_48->HeapBeginPtr();
                new (this) Nullable<long long>(*(longlong*)(lVar3 + 16));
                return this;
            }
        }
        new (this) Nullable<long long>();
        return this;
    }

    // 0x10025f020, 208 bytes, placed by class name
    // ClanSettings::GetExtraSettingAsString(int)
    ClanSettings* ClanSettings::GetExtraSettingAsString(int param_1) {
        char cVar1;
        long lVar3;
        int in_EDX;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_00000034;
        eastl::string local_68[32];
        eastl local_48[16];
        long local_38[2];

        cVar1 = ((CONCAT44(in_register_00000034, param_1) + 344))->empty();
        if (cVar1 == '\0') {
            local_38[0] = (long)in_EDX;
            eastl::hashtable<
                long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_48);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if ((!eastl::operator==(local_48, (hashtable_iterator_base*)local_38, extraout_RDX)) &&
                (lVar3 = local_48->HeapBeginPtr(), *(int*)(lVar3 + 8) == 2)) {
                lVar3 = local_48->HeapBeginPtr();
                eastl::string::basic_string(local_68, (basic_string*)(lVar3 + 24));
                new (this) Nullable<eastl::string>(local_68);
                eastl::string::~basic_string(local_68);
                return this;
            }
        }
        new (this) Nullable<eastl::string>();
        return this;
    }

    // 0x10025f110, 464 bytes, placed by class name
    // ClanSettings::GetMemberSortedIndex()
    ClanSettings* ClanSettings::GetMemberSortedIndex() {
        Array<game::VarValue, eastl::allocator>* this_00;
        char cVar1;
        int iVar2;
        basic_string* pbVar3;
        eastl::string* pbVar4;
        basic_string* pbVar5;
        undefined4* puVar6;
        ulong uVar7;
        long in_RSI;
        Array<eastl::string, eastl::allocator> local_50[24];
        Array<game::VarValue, eastl::allocator>* local_38;

        local_38 = (Array<game::VarValue, eastl::allocator>*)(in_RSI + 400);
        cVar1 = local_38->empty();
        if (cVar1 != '\0') {
            Array<eastl::string, eastl::allocator>::Array(local_50);
            local_50->set_max_size((long)*(int*)(in_RSI + 64), 1);
            local_38->set_max_size((long)*(int*)(in_RSI + 64), 3);
            if (0 < *(int*)(in_RSI + 64)) {
                uVar7 = 0;
                do {
                    pbVar3 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)(in_RSI + 280), uVar7);
                    pbVar4 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_50, uVar7);
                    eastl::string::operator=(pbVar4, pbVar3);
                    Array<eastl::string, eastl::allocator>::operator[](local_50, uVar7);
                    cVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar1 == '\0') {
                        Array<eastl::string, eastl::allocator>::operator[](local_50, uVar7);
                        eastl::string::make_lower();
                        pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_50, uVar7);
                        pbVar4 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_50, uVar7);
                        eastl::string::operator=(pbVar4, pbVar3);
                    }
                    uVar7 = uVar7 + 1;
                } while ((long)uVar7 < (long)*(int*)(in_RSI + 64));
            }
            pbVar3 = (basic_string*)local_50->data();
            pbVar5 = (basic_string*)local_50->end();
            std::sort<eastl::string*>(pbVar3, pbVar5);
            local_38->set_max_size((long)*(int*)(in_RSI + 64), 3);
            iVar2 = local_50->end();
            this_00 = local_38;
            if (0 < iVar2) {
                uVar7 = 0;
                do {
                    puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar7);
                    *puVar6 = (int)uVar7;
                    uVar7 = uVar7 + 1;
                    iVar2 = local_50->end();
                } while ((long)uVar7 < (long)iVar2);
            }
            local_50->~Array();
        }
        new (this) Array<int, eastl::allocator>(local_38);
        return this;
    }

    // 0x10025f310, 176 bytes, placed by class name
    // ClanSettings::AddMember(long long, int)
    ulong ClanSettings::AddMember(longlong param_1, int param_2) {
        char cVar1;
        ulong uVar2;
        eastl::string local_58[32];
        allocator local_38[8];

        if ((int)field_64 < 500) {
            cVar1 = IsAffined(this, param_1);
            if (cVar1 == '\0') {
                cVar1 = IsBanned(this, param_1);
                if (cVar1 == '\0') {
                    eastl::allocator::allocator(local_38, "EASTL basic_string");
                    eastl::string::basic_string(local_58, (char*)0, local_38);
                    uVar2 = (ulong)(uint)param_2;
                    DoAddMember(this, param_1, (basic_string*)local_58, param_2);
                    eastl::string::~basic_string(local_58);
                    uVar2 = CONCAT71((int7)(uVar2 >> 8), 1);
                    goto LAB_10025f34d;
                }
            }
        }
        uVar2 = 0;
    LAB_10025f34d:
        return uVar2 & 4294967295;
    }

    // 0x10025f3c0, 48 bytes, placed by class name
    // ClanSettings::DeleteMember(long long)
    int ClanSettings::DeleteMember(longlong param_1) {
        int iVar1;

        iVar1 = FindMember(this, param_1);
        if (iVar1 == -1) {
            iVar1 = -1;
        } else {
            DoDeleteMember(this, iVar1);
        }
        return iVar1;
    }

    // 0x10025f3f0, 416 bytes, placed by class name
    // ClanSettings::DoDeleteMember(int)
    void ClanSettings::DoDeleteMember(int param_1) {
        undefined1* puVar1;
        char cVar2;
        undefined8 uVar3;
        long lVar4;
        char* pcVar5;

        if ((param_1 < 0) || ((int)field_64 <= param_1)) {
            uVar3 = logger::default_logger();
            pcVar5 = "";
            if (m_fluttered == '\0') {
                pcVar5 = "Invalid pos in doDeleteMember - pos: %i memberCount: %i";
            }
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                525, pcVar5, param_1, field_64);
        }
        field_64 = field_64 - 1;
        (&field_400)->clear();
        if (field_64 == 0) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            (&field_280)->clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            field_232 = 4294967295;
            field_236 = 4294967295;
        } else {
            lVar4 = (&field_104)->HeapBeginPtr();
            (&field_104, (signed*)(lVar4 + (long)param_1))->erase();
            lVar4 = (&field_136)->HeapBeginPtr();
            (&field_136, (int*)(lVar4 + (long)param_1 * 4))->erase();
            lVar4 = (&field_168)->HeapBeginPtr();
            (&field_168, (int*)(lVar4 + (long)param_1 * 4))->erase();
            lVar4 = (&field_200)->HeapBeginPtr();
            (&field_200, (int*)(lVar4 + (long)param_1 * 4))->erase();
            puVar1 = &field_72;
            cVar2 = puVar1->empty();
            if (cVar2 == '\0') {
                lVar4 = puVar1->HeapBeginPtr();
                puVar1->erase((longlong*)(lVar4 + (long)param_1 * 8));
            }
            puVar1 = &field_280;
            cVar2 = puVar1->empty();
            if (cVar2 == '\0') {
                lVar4 = puVar1->HeapBeginPtr();
                puVar1->erase((basic_string*)((long)param_1 * 32 + lVar4));
            }
            SetCurrentAndReplacementOwners(this);
        }
    }

    // 0x10025f630, 240 bytes, placed by class name
    // ClanSettings::SetCurrentAndReplacementOwners()
    void ClanSettings::SetCurrentAndReplacementOwners() {
        char* pcVar1;
        undefined1* puVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;
        char cVar6;

        field_232 = 4294967295;
        field_236 = 4294967295;
        if (field_64 != 0) {
            puVar2 = &field_104;
            uVar4 = 0;
            pcVar1 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                (vector<signed char, eastl::allocator>*)puVar2, 0);
            if (1 < (int)field_64) {
                cVar6 = *pcVar1;
                uVar5 = 0;
                uVar3 = 1;
                do {
                    pcVar1 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                        (vector<signed char, eastl::allocator>*)puVar2, uVar3);
                    if (cVar6 < *pcVar1) {
                        if (cVar6 == '}') {
                            field_236 = (uint)uVar5;
                        }
                        pcVar1 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                            (vector<signed char, eastl::allocator>*)puVar2, uVar3);
                        cVar6 = *pcVar1;
                        uVar5 = uVar3 & 4294967295;
                    } else if (field_236 == 4294967295) {
                        pcVar1 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                            (vector<signed char, eastl::allocator>*)puVar2, uVar3);
                        if (*pcVar1 == '}') {
                            field_236 = (uint)uVar3;
                        }
                    }
                    uVar4 = (uint)uVar5;
                    uVar3 = uVar3 + 1;
                } while ((long)uVar3 < (long)(int)field_64);
            }
            field_232 = uVar4;
            if (uVar4 != 4294967295) {
                puVar2 = (undefined1*)eastl::vector<signed char, eastl::allocator>::operator[](
                    (vector<signed char, eastl::allocator>*)puVar2, (long)(int)uVar4);
                *puVar2 = 126;
            }
        }
    }

    // 0x10025f720, 160 bytes, placed by class name
    // ClanSettings::AddBanned(long long)
    ulong ClanSettings::AddBanned(longlong param_1) {
        char cVar1;
        undefined8 in_RCX;
        ulong uVar2;
        eastl::string local_50[32];
        allocator local_30[8];

        if ((int)field_240 < 100) {
            cVar1 = IsBanned(this, param_1);
            if (cVar1 == '\0') {
                cVar1 = IsAffined(this, param_1);
                if (cVar1 == '\0') {
                    eastl::allocator::allocator(local_30, "EASTL basic_string");
                    eastl::string::basic_string(local_50, (char*)0, local_30);
                    DoAddBanned(this, param_1, (basic_string*)local_50);
                    eastl::string::~basic_string(local_50);
                    uVar2 = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
                    goto LAB_10025f758;
                }
            }
        }
        uVar2 = 0;
    LAB_10025f758:
        return uVar2 & 4294967295;
    }

    // 0x10025f7c0, 448 bytes, placed by class name
    // ClanSettings::DoAddBanned(long long, eastl::string const&)
    void ClanSettings::DoAddBanned(longlong param_1, basic_string* param_2) {
        uint uVar1;
        byte bVar2;
        char cVar3;
        int iVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        longlong* plVar7;
        eastl::string* this_00;
        char* pcVar8;

        if ((0 < param_1) || (field_12 == false)) {
            uVar5 = logger::default_logger();
            pcVar8 = "";
            if (m_fluttered == '\0') {
                pcVar8 = "Invalid UserHash arg to this method - useUserHashes: %i but userhash: %i";
            }
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                627, pcVar8, field_12, param_1);
        }
        bVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (field_13 != (bVar2 ^ 1)) {
            uVar5 = logger::default_logger();
            pcVar8 = "";
            if (m_fluttered == '\0') {
                pcVar8 = "Invalid DisplayName arg to this method - useDisplayNames: %i but displayname: %s";
            }
            cVar3 = field_13;
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                631, pcVar8, cVar3, uVar6);
        }
        if (param_1 < 1) {
        LAB_10025f8c7:
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar3 != '\0')
                goto LAB_10025f90b;
            cVar3 = (&field_312)->empty();
            if (cVar3 == '\0') {
                uVar1 = field_240;
                iVar4 = (&field_312)->size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025f90b;
            }
        } else {
            cVar3 = (&field_248)->empty();
            if (cVar3 == '\0') {
                uVar1 = field_240;
                iVar4 = (&field_248)->size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025f8c7;
            }
        }
        ExtendBannedList(this, field_240 + 5);
    LAB_10025f90b:
        cVar3 = (&field_248)->empty();
        if (cVar3 == '\0') {
            plVar7 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                (vector<long long, eastl::allocator>*)&field_248, (long)(int)field_240);
            *plVar7 = param_1;
        }
        cVar3 = (&field_312)->empty();
        if (cVar3 == '\0') {
            this_00 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                (vector<eastl::string, eastl::allocator>*)&field_312, (long)(int)field_240);
            eastl::string::operator=(this_00, param_2);
        }
        field_240 = field_240 + 1;
    }

    // 0x10025f980, 48 bytes, placed by class name
    // ClanSettings::DeleteBanned(long long)
    int ClanSettings::DeleteBanned(longlong param_1) {
        int iVar1;

        iVar1 = FindBanned(this, param_1);
        if (iVar1 == -1) {
            iVar1 = -1;
        } else {
            DoDeleteBanned(this, iVar1);
        }
        return iVar1;
    }

    // 0x10025f9b0, 160 bytes, placed by class name
    // ClanSettings::DoDeleteBanned(int)
    void ClanSettings::DoDeleteBanned(int param_1) {
        uint* puVar1;
        long lVar2;
        char cVar3;
        undefined1* puVar4;

        puVar4 = &field_248;
        puVar1 = &field_240;
        *puVar1 = *puVar1 - 1;
        if (*puVar1 == 0) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            (&field_312)->clear();
        } else {
            cVar3 = puVar4->empty();
            if (cVar3 == '\0') {
                lVar2 = puVar4->HeapBeginPtr();
                puVar4->erase((longlong*)(lVar2 + (long)param_1 * 8));
            }
            puVar4 = &field_312;
            cVar3 = puVar4->empty();
            if (cVar3 == '\0') {
                lVar2 = puVar4->HeapBeginPtr();
                puVar4->erase((basic_string*)((long)param_1 * 32 + lVar2));
            }
        }
    }

    // 0x10025fa50, 64 bytes, placed by class name
    // ClanSettings::SetMemberRank(long long, signed char)
    undefined8 ClanSettings::SetMemberRank(longlong param_1, char param_3) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = FindMember(this, param_1);
        if (iVar1 == -1) {
            uVar2 = 4294967295;
        } else {
            uVar2 = SetMemberRankBySlot(this, iVar1, (int)param_3);
        }
        return uVar2;
    }

    // 0x10025fa90, 144 bytes, placed by class name
    // ClanSettings::SetMemberRankBySlot(int, signed char)
    uint ClanSettings::SetMemberRankBySlot(uint param_1, byte param_3) {
        char* pcVar1;
        byte* pbVar2;
        uint uVar3;

        if ((param_3 & 254) == 126) {
            return 4294967295;
        }
        if (field_232 == param_1) {
            if ((long)(int)field_236 == 18446744073709551615) {
                return 4294967295;
            }
            pcVar1 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                (vector<signed char, eastl::allocator>*)&field_104, (long)(int)field_236);
            if (*pcVar1 < '}') {
                return 4294967295;
            }
        }
        pbVar2 = (byte*)eastl::vector<signed char, eastl::allocator>::operator[](
            (vector<signed char, eastl::allocator>*)&field_104, (long)(int)param_1);
        uVar3 = 4294967295;
        if (*pbVar2 != param_3) {
            pbVar2 = (byte*)eastl::vector<signed char, eastl::allocator>::operator[](
                (vector<signed char, eastl::allocator>*)&field_104, (long)(int)param_1);
            *pbVar2 = param_3;
            SetCurrentAndReplacementOwners(this);
            uVar3 = param_1;
        }
        return uVar3;
    }

    // 0x10025fb20, 112 bytes, placed by class name
    // ClanSettings::SetOwnerBySlot(int)
    undefined8 ClanSettings::SetOwnerBySlot(int param_1) {
        char* pcVar1;
        undefined1* puVar2;
        undefined1* puVar3;

        if (field_232 != param_1) {
            puVar3 = &field_104;
            pcVar1 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                (vector<signed char, eastl::allocator>*)puVar3, (long)param_1);
            if (*pcVar1 != '~') {
                puVar2 = (undefined1*)eastl::vector<signed char, eastl::allocator>::operator[](
                    (vector<signed char, eastl::allocator>*)puVar3, (long)(int)field_232);
                *puVar2 = 125;
                field_236 = field_232;
                puVar3 = (undefined1*)eastl::vector<signed char, eastl::allocator>::operator[](
                    (vector<signed char, eastl::allocator>*)puVar3, (long)param_1);
                *puVar3 = 126;
                field_232 = param_1;
                return 1;
            }
        }
        return 0;
    }

    // 0x10025fb90, 64 bytes, placed by class name
    // ClanSettings::SetMemberMuted(long long, bool)
    undefined8 ClanSettings::SetMemberMuted(longlong param_1, bool param_2) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = FindMember(this, param_1);
        if (iVar1 == -1) {
            uVar2 = 4294967295;
        } else {
            uVar2 = SetMemberMutedBySlot(this, iVar1, param_2);
        }
        return uVar2;
    }

    // 0x10025fbd0, 80 bytes, placed by class name
    // ClanSettings::SetMemberMutedBySlot(int, bool)
    int ClanSettings::SetMemberMutedBySlot(int param_1, bool param_2) {
        int iVar1;
        int* piVar2;
        undefined3 in_register_00000011;

        piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_200,
                                                                        (long)param_1);
        iVar1 = -1;
        if (*piVar2 != CONCAT31(in_register_00000011, param_2)) {
            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_200,
                                                                            (long)param_1);
            *piVar2 = CONCAT31(in_register_00000011, param_2);
            iVar1 = param_1;
        }
        return iVar1;
    }

    // 0x10025fc20, 80 bytes, placed by class name
    // ClanSettings::SetMemberExtraInfo(long long, int, unsigned int, unsigned int)
    undefined8 ClanSettings::SetMemberExtraInfo(longlong param_1, int param_2, uint param_3, uint param_4) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = FindMember(this, param_1);
        if (iVar1 == -1) {
            uVar2 = 4294967295;
        } else {
            uVar2 = SetMemberExtraInfoBySlot(this, iVar1, param_2, param_3, param_4);
        }
        return uVar2;
    }

    // 0x10025fc70, 160 bytes, placed by class name
    // ClanSettings::SetMemberExtraInfoBySlot(int, int, unsigned int, unsigned int)
    int ClanSettings::SetMemberExtraInfoBySlot(int param_1, int param_2, uint param_3, uint param_4) {
        uint uVar1;
        int iVar2;
        uint* puVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;

        uVar6 = ~(-1 << ((char)param_4 + 1U & 31));
        if (param_4 == 31) {
            uVar6 = 4294967295;
        }
        uVar6 = uVar6 ^ -1 << ((byte)param_3 & 31);
        uVar5 = ~uVar6;
        uVar4 = param_2 << ((byte)param_3 & 31) & uVar5;
        puVar3 = (uint*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_136,
                                                                         (long)param_1);
        uVar1 = *puVar3;
        iVar2 = -1;
        if ((uVar5 & uVar1) != uVar4) {
            puVar3 = (uint*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_136,
                                                                             (long)param_1);
            *puVar3 = uVar1 & uVar6 | uVar4;
            iVar2 = param_1;
        }
        return iVar2;
    }

    // 0x10025fd10, 32 bytes, placed by class name
    // ClanSettings::SetAllowNonMembers(bool)
    bool ClanSettings::SetAllowNonMembers(bool param_1) {
        bool bVar1;

        bVar1 = m_allowNonMembers;
        if (bVar1 != param_1) {
            m_allowNonMembers = param_1;
        }
        return bVar1 != param_1;
    }

    // 0x10025fd30, 32 bytes, placed by class name
    // ClanSettings::SetRankTalk(signed char)
    bool ClanSettings::SetRankTalk(char param_2) {
        char cVar1;

        cVar1 = field_57;
        if (cVar1 != param_2) {
            field_57 = param_2;
        }
        return cVar1 != param_2;
    }

    // 0x10025fd50, 32 bytes, placed by class name
    // ClanSettings::SetRankKick(signed char)
    bool ClanSettings::SetRankKick(char param_2) {
        char cVar1;

        cVar1 = field_58;
        if (cVar1 != param_2) {
            field_58 = param_2;
        }
        return cVar1 != param_2;
    }

    // 0x10025fd70, 32 bytes, placed by class name
    // ClanSettings::SetRankLootShare(signed char)
    bool ClanSettings::SetRankLootShare(char param_2) {
        char cVar1;

        cVar1 = field_59;
        if (cVar1 != param_2) {
            field_59 = param_2;
        }
        return cVar1 != param_2;
    }

    // 0x10025fd90, 32 bytes, placed by class name
    // ClanSettings::SetCoinShare(signed char)
    bool ClanSettings::SetCoinShare(char param_2) {
        char cVar1;

        cVar1 = field_60;
        if (cVar1 != param_2) {
            field_60 = param_2;
        }
        return cVar1 != param_2;
    }

    // 0x10025fdb0, 256 bytes, placed by class name
    // ClanSettings::SetExtraSettingInt(int, int)
    undefined8 ClanSettings::SetExtraSettingInt(int param_1, int param_2) {
        long lVar2;
        ExtraSettingsParam* this_00;
        hashtable_iterator_base* extraout_RDX;
        eastl local_78[16];
        undefined1 local_68[48];
        ulong local_38;

        local_68._0_8_ = (long)param_1;
        eastl::hashtable<long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)
                                                                                                              local_78);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (((eastl::operator!=(local_78, (hashtable_iterator_base*)local_68, extraout_RDX)) &&
             (lVar2 = local_78->HeapBeginPtr(), *(int*)(lVar2 + 8) == 0)) &&
            (lVar2 = local_78->HeapBeginPtr(), *(int*)(lVar2 + 16) == param_2)) {
            return 0;
        }
        local_68._0_8_ = local_68._0_8_ & 18446744069414584320;
        local_68._8_8_ = SEXT48(param_2);
        new (&local_38) eastl::allocator("EASTL basic_string");
        new ((local_68 + 16)) eastl::string("", (allocator*)&local_38);
        local_38 = (long)param_1;
        this_00 =
            (ExtraSettingsParam*)eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                 eastl::equal_to<long long>, eastl::allocator, false>::
            operator[]((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                 eastl::equal_to<long long>, eastl::allocator, false>*)&field_344,
                       (longlong*)&local_38);
        ExtraSettingsParam::operator=(this_00, (ExtraSettingsParam*)local_68);
        local_68->~ObjSpriteCacheKey();
        return 1;
    }

    // 0x10025ff20, 384 bytes, placed by class name
    // ClanSettings::SetExtraSettingIntVarbit(int, int, unsigned int, unsigned int)
    /* WARNING: Removing unreachable block (ram,4297457623) */
    /* ClanSettings::SetExtraSettingIntVarbit(int, int, unsigned int,
   unsigned int) */

    undefined8 ClanSettings::SetExtraSettingIntVarbit(int param_1, int param_2, uint param_3, uint param_4) {
        uint uVar1;
        bool bVar2;
        long lVar3;
        ExtraSettingsParam* this_00;
        hashtable_iterator_base* extraout_RDX;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        undefined1 local_88[48];
        eastl local_58[16];
        hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>, eastl::equal_to<long long>,
                 eastl::allocator, false>* local_48;
        ulong local_40;
        ulong local_38;

        uVar5 = ~(-1 << ((char)param_4 + 1U & 31));
        if (param_4 == 31) {
            uVar5 = 4294967295;
        }
        uVar5 = uVar5 ^ -1 << ((byte)param_3 & 31);
        uVar6 = ~uVar5;
        uVar4 = param_2 << ((byte)param_3 & 31) & uVar6;
        local_88._0_8_ = SEXT48(param_1);
        local_40 = local_88._0_8_;
        eastl::hashtable<long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)
                                                                                                              local_58);
        local_48 = (hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                             eastl::equal_to<long long>, eastl::allocator, false>*)&field_344;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_58, (hashtable_iterator_base*)local_88, extraout_RDX);
        if (bVar2) {
            lVar3 = local_58->HeapBeginPtr();
            uVar1 = *(uint*)(lVar3 + 16);
            lVar3 = local_58->HeapBeginPtr();
            if (*(int*)(lVar3 + 8) == 0) {
                if ((uVar6 & uVar1) == uVar4) {
                    return 0;
                }
                lVar3 = local_58->HeapBeginPtr();
                *(long*)(lVar3 + 16) = (long)(int)(uVar5 & uVar1 | uVar4);
                return 1;
            }
        }
        local_88._0_8_ = local_88._0_8_ & 18446744069414584320;
        local_88._8_8_ = SEXT48((int)uVar4);
        new (&local_38) eastl::allocator("EASTL basic_string");
        new ((local_88 + 16)) eastl::string("", (allocator*)&local_38);
        local_38 = local_40;
        this_00 = (ExtraSettingsParam*)
            eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                            eastl::equal_to<long long>, eastl::allocator, false>::operator[](local_48,
                                                                                             (longlong*)&local_38);
        ExtraSettingsParam::operator=(this_00, (ExtraSettingsParam*)local_88);
        local_88->~ObjSpriteCacheKey();
        return 1;
    }

    // 0x1002600a0, 256 bytes, placed by class name
    // ClanSettings::SetExtraSettingLong(int, long long)
    undefined8 ClanSettings::SetExtraSettingLong(int param_1, longlong param_2) {
        long lVar2;
        ExtraSettingsParam* this_00;
        hashtable_iterator_base* extraout_RDX;
        eastl local_78[16];
        undefined1 local_68[48];
        long local_38;

        local_68._0_8_ = (long)param_1;
        eastl::hashtable<long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)
                                                                                                              local_78);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (((eastl::operator!=(local_78, (hashtable_iterator_base*)local_68, extraout_RDX)) &&
             (lVar2 = local_78->HeapBeginPtr(), *(int*)(lVar2 + 8) == 1)) &&
            (lVar2 = local_78->HeapBeginPtr(), *(long*)(lVar2 + 16) == param_2)) {
            return 0;
        }
        local_68._0_4_ = 1;
        local_68._8_8_ = param_2;
        new (&local_38) eastl::allocator("EASTL basic_string");
        new ((local_68 + 16)) eastl::string("", (allocator*)&local_38);
        local_38 = (long)param_1;
        this_00 =
            (ExtraSettingsParam*)eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                 eastl::equal_to<long long>, eastl::allocator, false>::
            operator[]((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                 eastl::equal_to<long long>, eastl::allocator, false>*)&field_344,
                       &local_38);
        ExtraSettingsParam::operator=(this_00, (ExtraSettingsParam*)local_68);
        local_68->~ObjSpriteCacheKey();
        return 1;
    }

    // 0x1002601a0, 320 bytes, placed by class name
    // ClanSettings::SetExtraSettingString(int, eastl::string)
    undefined8 ClanSettings::SetExtraSettingString(int param_1, eastl::string* param_3) {
        bool bVar1;
        ulong uVar2;
        long lVar3;
        ExtraSettingsParam* this_00;
        hashtable_iterator_base* extraout_RDX;
        eastl local_78[16];
        undefined1 local_68[48];
        long local_38;

        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (80 < uVar2) {
            eastl::string::substr((ulong)local_68, (ulong)param_3);
            eastl::string::operator=(param_3, (basic_string*)local_68);
            local_68->~basic_string();
        }
        local_68._0_8_ = (long)param_1;
        eastl::hashtable<long long, eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)
                                                                                                              local_78);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_78, (hashtable_iterator_base*)local_68, extraout_RDX);
        if ((bVar1) && (lVar3 = local_78->HeapBeginPtr(), *(int*)(lVar3 + 8) == 2)) {
            lVar3 = local_78->HeapBeginPtr();
            bVar1 = eastl::operator==((basic_string*)(lVar3 + 24), (basic_string*)param_3);
            if (bVar1) {
                return 0;
            }
        }
        local_68._0_4_ = 2;
        local_68._8_8_ = 0;
        new ((local_68 + 16)) eastl::string(param_3);
        local_38 = (long)param_1;
        this_00 =
            (ExtraSettingsParam*)eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                 eastl::equal_to<long long>, eastl::allocator, false>::
            operator[]((hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                 eastl::equal_to<long long>, eastl::allocator, false>*)&field_344,
                       &local_38);
        ExtraSettingsParam::operator=(this_00, (ExtraSettingsParam*)local_68);
        local_68->~ObjSpriteCacheKey();
        return 1;
    }

    // 0x1002602e0, 480 bytes, placed by class name
    // ClanSettings::GetEncodeLength(bool, bool)
    int ClanSettings::GetEncodeLength(bool param_1, bool param_2) {
        uint uVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        basic_string* pbVar7;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        undefined7 in_register_00000031;
        int iVar8;
        ulong uVar9;
        eastl local_58[16];
        hashtable_iterator_base local_48[20];
        undefined4 local_34;

        lVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar6 == 0) {
            iVar4 = 25;
        } else {
            iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                (basic_string*)&field_16, false);
            iVar4 = iVar4 + 24;
        }
        uVar1 = field_64;
        local_34 = (undefined4)CONCAT71(in_register_00000031, param_1);
        if (0 < (int)uVar1) {
            iVar5 = 0;
            if (param_1) {
                iVar5 = uVar1 << 3;
            }
            iVar4 = iVar5 + iVar4 + uVar1 * 8;
            if (param_2) {
                uVar9 = 0;
                do {
                    pbVar7 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)&field_280, uVar9);
                    iVar5 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>(pbVar7, false);
                    iVar4 = iVar4 + iVar5;
                    uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)(int)field_64);
            }
        }
        if (0 < (int)field_240) {
            iVar5 = 0;
            if ((char)local_34 != '\0') {
                iVar5 = field_240 << 3;
            }
            iVar4 = iVar5 + iVar4;
            if (param_2) {
                uVar9 = 0;
                do {
                    pbVar7 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)&field_312, uVar9);
                    iVar5 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>(pbVar7, false);
                    iVar4 = iVar4 + iVar5;
                    uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)(int)field_240);
            }
        }
        cVar2 = (&field_344)->empty();
        if (cVar2 == '\0') {
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar3 =
                eastl::operator!=(local_58, local_48, (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
            if (bVar3) {
                do {
                    lVar6 = local_58->HeapBeginPtr();
                    iVar5 = *(int*)(lVar6 + 8);
                    if (iVar5 == 2) {
                        iVar5 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                            eastl::string>((basic_string*)(lVar6 + 24), false);
                        iVar8 = iVar4 + 4 + iVar5;
                    } else {
                        if (iVar5 == 1) {
                            iVar8 = iVar4 + 12;
                        } else {
                            iVar8 = iVar4 + 4;
                            if (iVar5 != 0)
                                goto LAB_100260447;
                            iVar8 = iVar4 + 8;
                        }
                    }
                LAB_100260447:
                    iVar4 = iVar8;
                    eastl::hashtable_iterator<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, true,
                                              false>::
                    operator++((hashtable_iterator<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, true,
                                                   false>*)local_58);
                    bVar3 = eastl::operator!=(local_58, local_48,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                } while (bVar3);
            }
        }
        return iVar4;
    }

    // 0x1002604e0, 32 bytes, placed by class name
    // ClanSettings::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettings::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        Encode(this, param_1, param_2, param_3, true);
    }

    // 0x100260500, 1072 bytes, placed by class name
    // ClanSettings::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool, bool)
    void ClanSettings::Encode(PacketJ* param_1, bool param_2, bool param_3, bool param_4) {
        uint uVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        undefined8 uVar5;
        char* pcVar7;
        int* piVar8;
        longlong* plVar9;
        basic_string* pbVar10;
        uint* puVar11;
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        uint uVar12;
        undefined7 in_register_00000081;
        ulong uVar13;
        eastl local_80[16];
        hashtable_iterator_base local_70[16];
        vector<signed char, eastl::allocator>* local_60;
        vector<int, eastl::allocator>* local_58;
        vector<long long, eastl::allocator>* local_50;
        vector<eastl::string, eastl::allocator>* local_48;
        undefined4 local_3c;
        uint local_38;
        undefined4 local_34;

        local_3c = (undefined4)CONCAT71(in_register_00000081, param_4);
        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        local_38 = (uint)CONCAT71(in_register_00000011, param_2);
        if ((local_38 == 0) && (!param_3)) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                978, "Must encode with at least one of UserHashes or DisplayNames!");
        }
        if (((char)local_38 == '\0') || (field_12 != false)) {
        } else {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                982, "Asked to store UserHashes when not present");
        }
        if (((char)local_34 != '\0') && (field_13 == '\0')) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettings.cpp",
                                986, "Asked to store DisplayNames when not present");
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 6);
        uVar1 = (local_38 & 255) + 2;
        if ((char)local_34 == '\0') {
            uVar1 = local_38 & 255;
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_8);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_48);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_64);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_240);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() ==
            0) {
            param_1->pStringUTF8ToCP1252("", false);
        } else {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_16, false);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_52);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_allowNonMembers);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_57);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_58);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_59);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1);
        if (0 < (int)field_64) {
            local_50 = (vector<long long, eastl::allocator>*)&field_72;
            local_48 = (vector<eastl::string, eastl::allocator>*)&field_280;
            local_60 = (vector<signed char, eastl::allocator>*)&field_104;
            local_58 = (vector<int, eastl::allocator>*)&field_136;
            uVar13 = 0;
            do {
                if ((char)local_38 != '\0') {
                    plVar9 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](local_50, uVar13);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *plVar9);
                }
                if ((char)local_34 != '\0') {
                    pbVar10 =
                        (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](local_48, uVar13);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, pbVar10, false);
                }
                pcVar7 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](local_60, uVar13);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)*pcVar7);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_58, uVar13);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *piVar8);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)&field_168, uVar13);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *piVar8);
                eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_200, uVar13);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1);
                uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)field_64);
        }
        if (0 < (int)field_240) {
            uVar13 = 0;
            do {
                if ((char)local_38 != '\0') {
                    plVar9 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                        (vector<long long, eastl::allocator>*)&field_248, uVar13);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *plVar9);
                }
                if ((char)local_34 != '\0') {
                    pbVar10 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)&field_312, uVar13);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, pbVar10, false);
                }
                uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)field_240);
        }
        if ((char)local_3c != '\0') {
            cVar2 = (&field_344)->empty();
            if (cVar2 == '\0') {
                iVar4 = (&field_344)->size();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar4);
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar3 = eastl::operator!=(local_80, local_70, extraout_RDX);
                if (!bVar3) {
                    return;
                }
                do {
                    puVar11 = (uint*)local_80->HeapBeginPtr();
                    uVar12 = *puVar11 & 1073741823;
                    uVar1 = puVar11[2];
                    if (uVar1 == 2) {
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, uVar12 | 2147483648);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)(puVar11 + 6),
                            false);
                    } else if (uVar1 == 1) {
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, uVar12 | 1073741824);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *(longlong*)(puVar11 + 4));
                    } else if (uVar1 == 0) {
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, uVar12);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, puVar11[4]);
                    }
                    eastl::hashtable_iterator<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, true,
                                              false>::
                    operator++((hashtable_iterator<eastl::pair<long long const, ClanSettings::ExtraSettingsParam>, true,
                                                   false>*)local_80);
                    bVar3 = eastl::operator!=(local_80, local_70, extraout_RDX_00);
                } while (bVar3);
                return;
            }
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 0);
    }

    // 0x100260970, 80 bytes, placed by class name
    // ClanSettings::GetMaximumSize(bool, bool, int, int, int)
    int ClanSettings::GetMaximumSize(bool param_1, bool param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        undefined3 in_register_00000031;
        int iVar2;
        undefined7 in_register_00000039;
        int iVar3;

        iVar2 = (int)CONCAT71(in_register_00000039, param_1);
        iVar1 = 2545;
        if (iVar2 != 0) {
            iVar1 = 6545;
        }
        iVar3 = iVar1 + 6500;
        if (CONCAT31(in_register_00000031, param_2) == 0) {
            iVar3 = iVar1;
        }
        iVar1 = iVar3 + 800;
        if (iVar2 == 0) {
            iVar1 = iVar3;
        }
        iVar2 = iVar1 + 1300;
        if (CONCAT31(in_register_00000031, param_2) == 0) {
            iVar2 = iVar1;
        }
        return param_3 * 8 + param_4 * 12 + param_5 * 85 + iVar2;
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x10025e1f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettings>::type make_shared<oldscape::rs2lib::social::ClanSettings>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettings>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ClanSettings* local_28[2];

        pvVar1 = (void*)aligned_alloc(456, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettings>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int,
                                   oldscape::rs2lib::social::ClanSettings*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
