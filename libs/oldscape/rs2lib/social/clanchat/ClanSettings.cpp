// libs/oldscape/rs2lib/social/clanchat/ClanSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ClanSettings.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1016af933
    bool ClanSettings::m_fluttered;

    // 0x1016af934
    uint8_t ClanSettings::m_verbose[12];

    // 0x1002438a0: ClanSettings::ExtraSettingsParam::ExtraSettingsParam() has the same machine code as configdecoder::ObjSpriteCacheKey::ObjSpriteCacheKey()

    // 0x10025cec0
    ClanSettings::ClanSettings(long long arg1, PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {

        *(uint64_t*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        new (&field_16) eastl::string("");
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = false;
        new (&field_72) eastl::vector<long long>();
        new (&field_104) eastl::vector<signed char>();
        new (&field_136) eastl::vector<int>();
        new (&field_168) eastl::vector<int>();
        new (&field_200) eastl::vector<int>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        new (&field_248) eastl::vector<long long>();
        new (&field_280) eastl::vector<eastl::string>();
        new (&field_312) eastl::vector<eastl::string>();
        new (&field_344) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam>(local_38);
        new (&field_400) Array<int>();
        field_0 = arg1;
        Decode(packetJ);
    }

    // 0x10025d0f0
    void ClanSettings::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t bVar1;
        char cVar2;
        uint8_t uVar4;
        int iVar8;
        uint32_t uVar9;
        int iVar10;
        Logger* this_02;
        uint64_t uVar12;
        uint64_t* puVar13;
        eastl::string* pbVar14;
        uint8_t* puVar15;
        uint32_t* puVar16;
        unsigned int* puVar17;
        ExtraSettingsParam* pEVar18;
        char* pcVar19;
        unsigned long local_c0[4];
        unsigned long local_a0;
        vector<int>* local_98;
        vector<long long>* local_90;
        vector<eastl::string>* local_88;
        vector<int>* local_80;
        uint8_t local_78[48];
        vector<signed char>* local_40;
        vector<int>* local_38;

        unsigned int uVar6 = packetJ.g1();
        unsigned long uVar21 = (unsigned long)uVar6;
        uint8_t bVar20 = (uint8_t)uVar6;
        if (5 < (uint8_t)(bVar20 - 1)) {
            this_02 = logger::default_logger();
            pcVar19 = "";
            if (m_fluttered == '\0') {
                pcVar19 = "Unsupported ClanSettings version: ";
            }
            this_02->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                         "clanchat/ClanSettings.cpp",
                         1099, "%s %i", pcVar19, uVar6 & 255);
        }
        unsigned long uVar11 = packetJ.g1();
        if ((uVar11 & 1) != 0) {
            field_12 = true;
        }
        if ((uVar11 & 2) == 0) {
            cVar2 = field_12;
        } else {
            field_13 = 1;
            cVar2 = field_12;
        }
        if (!cVar2) {
            field_72.clear();
            field_248.clear();
            bVar1 = field_13;
        } else {
            bVar1 = field_13;
        }
        if (bVar1 == 0) {
            field_280.clear();
            field_312.clear();
        }
        uVar6 = packetJ.g4();
        field_8 = uVar6;
        unsigned int uVar7 = packetJ.g4();
        uVar6 = uVar7 + 16912800;
        if (uVar7 == 0) {
            uVar6 = uVar7;
        }
        if (3 < bVar20) {
            uVar6 = uVar7;
        }
        field_48 = uVar6;
        unsigned short uVar5 = packetJ.g2();
        field_64 = (unsigned int)uVar5;
        bVar1 = packetJ.g1();
        field_240 = (unsigned int)bVar1;
        local_78->gStringNoConversion((uint8_t)packetJ);
        field_16 = local_78;
        if (3 < bVar20) {
            uVar6 = packetJ.g4();
            field_52 = uVar6;
        }
        cVar2 = packetJ.g1();
        field_56 = cVar2 == '\x01';
        bool bVar3 = (bool)packetJ.g1s();
        field_57 = bVar3;
        bVar3 = (bool)packetJ.g1s();
        field_58 = bVar3;
        bVar3 = (bool)packetJ.g1s();
        field_59 = bVar3;
        bVar3 = (bool)packetJ.g1s();
        field_60 = bVar3;
        unsigned long local_48 = uVar21;
        if (0 < (int)field_64) {
            if (field_12 != false) {
                puVar15 = &field_72;
                cVar2 = puVar15->empty();
                if ((cVar2) || (iVar8 = puVar15->size(), iVar8 < (int)field_64)) {
                    puVar15->resize((long)(int)field_64);
                }
            }
            if (field_13 != 0) {
                puVar15 = &field_280;
                cVar2 = puVar15->empty();
                if ((cVar2) || (iVar8 = puVar15->size(), iVar8 < (int)field_64)) {
                    puVar15->resize((long)(int)field_64);
                }
            }
            puVar15 = &field_104;
            cVar2 = puVar15->empty();
            if ((cVar2) || (iVar8 = puVar15->size(), iVar8 < (int)field_64)) {
                puVar15->resize((long)(int)field_64);
            }
            this_00 = &field_136;
            local_40 = (vector<signed char>*)puVar15;
            cVar2 = this_00->empty();
            if ((cVar2) || (iVar8 = this_00->size(), iVar8 < (int)field_64)) {
                this_00->resize((long)(int)field_64);
            }
            puVar15 = &field_168;
            cVar2 = puVar15->empty();
            if ((cVar2) || (iVar8 = puVar15->size(), iVar8 < (int)field_64)) {
                puVar15->resize((long)(int)field_64);
            }
            this_01 = &field_200;
            local_80 = (vector<int>*)this_00;
            local_38 = (vector<int>*)puVar15;
            cVar2 = this_01->empty();
            if ((cVar2) || (iVar8 = this_01->size(), iVar8 < (int)field_64)) {
                this_01->resize((long)(int)field_64);
            }
            local_98 = (vector<int>*)this_01;
            if (0 < (int)field_64) {
                local_90 = (vector<long long>*)&field_72;
                local_88 = (vector<eastl::string>*)&field_280;
                uVar11 = 0;
                do {
                    if (field_12 != false) {
                        uVar12 = packetJ.g8();
                        puVar13 = (uint64_t*)(*local_90)[uVar11];
                        *puVar13 = uVar12;
                    }
                    if (field_13 != 0) {
                        local_78->gStringNoConversion((uint8_t)packetJ);
                        pbVar14 = (eastl::string*)(*local_88)[uVar11];
                        *pbVar14 = local_78;
                    }
                    uVar4 = packetJ.g1s();
                    puVar15 = (uint8_t*)(*local_40)[uVar11];
                    *puVar15 = uVar4;
                    if (1 < (uint8_t)uVar21) {
                        uVar9 = packetJ.g4();
                        puVar16 = (uint32_t*)(*local_80)[uVar11];
                        *puVar16 = uVar9;
                    }
                    uVar6 = 0;
                    uVar7 = 0;
                    if (4 < (uint8_t)local_48) {
                        uVar5 = packetJ.g2();
                        uVar7 = (unsigned int)uVar5;
                    }
                    puVar17 = (unsigned int*)(*local_38)[uVar11];
                    uVar21 = local_48;
                    *puVar17 = uVar7;
                    if (5 < (uint8_t)local_48) {
                        cVar2 = packetJ.g1();
                        uVar6 = (unsigned int)(cVar2 == '\x01');
                    }
                    puVar17 = (unsigned int*)(*local_98)[uVar11];
                    *puVar17 = uVar6;
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)field_64);
            }
            SetCurrentAndReplacementOwners();
        }
        bVar20 = (uint8_t)uVar21;
        if (0 < (int)field_240) {
            if (field_12 != false) {
                puVar15 = &field_248;
                cVar2 = puVar15->empty();
                if ((cVar2) || (iVar8 = puVar15->size(), iVar8 < (int)field_240)) {
                    puVar15->resize((long)(int)field_240);
                }
            }
            if (field_13 != 0) {
                puVar15 = &field_312;
                cVar2 = puVar15->empty();
                if ((cVar2) || (iVar8 = puVar15->size(), iVar8 < (int)field_240)) {
                    puVar15->resize((long)(int)field_240);
                }
            }
            if (0 < (int)field_240) {
                local_40 = (vector<signed char>*)&field_248;
                local_38 = (vector<int>*)&field_312;
                uVar11 = 0;
                do {
                    if (field_12 != false) {
                        uVar12 = packetJ.g8();
                        puVar13 = (uint64_t*)(*local_40)[uVar11];
                        *puVar13 = uVar12;
                        uVar21 = local_48;
                    }
                    bVar20 = (uint8_t)uVar21;
                    if (field_13 != 0) {
                        local_78->gStringNoConversion((uint8_t)packetJ);
                        pbVar14 = (eastl::string*)(*local_38)[uVar11];
                        *pbVar14 = local_78;
                    }
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)field_240);
            }
        }
        if ((2 < bVar20) && (uVar5 = packetJ.g2(), uVar5 != 0)) {
            puVar15 = &field_344;
            puVar15->clear();
            iVar8 = uVar5 + 1;
            do {
                uVar6 = packetJ.g4();
                uVar7 = uVar6 & 1073741823;
                if (uVar6 < 1073741824) {
                    iVar10 = packetJ.g4();
                    local_78._0_4_ = 0;
                    local_78._8_8_ = (int64_t)iVar10;
                    new (local_c0) eastl::allocator("EASTL basic_string");
                    new ((local_78 + 16)) eastl::string("", local_c0);
                    local_c0[0] = (unsigned long)uVar7;
                    pEVar18 = (ExtraSettingsParam*)(*puVar15)[*local_c0];
                    *pEVar18 = *local_78;
                LAB_10025d620:
                } else if (uVar6 >> 30 == 2) {
                    local_c0->gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
                    local_78._0_4_ = 2;
                    local_78._8_8_ = 0;
                    new ((local_78 + 16)) eastl::string(*local_c0);
                    local_a0 = (unsigned long)uVar7;
                    pEVar18 = (ExtraSettingsParam*)(*puVar15)[local_a0];
                    *pEVar18 = *local_78;
                } else if (uVar6 >> 30 == 1) {
                    local_78._8_8_ = packetJ.g8();
                    local_78._0_4_ = 1;
                    new (local_c0) eastl::allocator("EASTL basic_string");
                    new ((local_78 + 16)) eastl::string("", local_c0);
                    local_c0[0] = (unsigned long)uVar7;
                    pEVar18 = (ExtraSettingsParam*)(*puVar15)[*local_c0];
                    *pEVar18 = *local_78;
                    goto LAB_10025d620;
                }
                iVar8 = iVar8 - 1;
            } while (1 < iVar8);
        }
    }

    // 0x10025d870
    ClanSettings::ClanSettings(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {

        *(uint64_t*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        new (&field_16) eastl::string("");
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = false;
        new (&field_72) eastl::vector<long long>();
        new (&field_104) eastl::vector<signed char>();
        new (&field_136) eastl::vector<int>();
        new (&field_168) eastl::vector<int>();
        new (&field_200) eastl::vector<int>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        new (&field_248) eastl::vector<long long>();
        new (&field_280) eastl::vector<eastl::string>();
        new (&field_312) eastl::vector<eastl::string>();
        new (&field_344) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam>(local_38);
        new (&field_400) Array<int>();
        Decode(packetJ);
    }

    // 0x10025da90
    ClanSettings::ClanSettings(eastl::string str, long long arg2) {
        *(uint64_t*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        eastl::string* local_38 = (eastl::string*)&field_16;
        new (&field_16) eastl::string("");
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = false;
        new (&field_72) eastl::vector<long long>();
        uint8_t* local_70 = &field_72;
        new (&field_104) eastl::vector<signed char>();
        uint8_t* local_68 = &field_104;
        new (&field_136) eastl::vector<int>();
        uint8_t* local_58 = &field_168;
        uint8_t* local_60 = &field_136;
        new (local_58) eastl::vector<int>();
        uint8_t* local_50 = &field_200;
        new (local_50) eastl::vector<int>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        uint8_t* local_48 = &field_248;
        new (local_48) eastl::vector<long long>();
        new (&field_280) eastl::vector<eastl::string>();
        uint8_t* local_40 = &field_280;
        new (&field_312) eastl::vector<eastl::string>();
        new (&field_344) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam>(local_a8);
        new (&field_400) Array<int>();
        field_12 = true;
        *local_38 = str;
        local_a8 = eastl::string(nullptr);
        int arg3 = game::TimeTools::RuneDay();
        DoAddMember(arg2, local_a8, arg3);
        unsigned long long uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        field_48 = (unsigned int)(uVar1 / 60000);
    }

    // 0x10025dd10
    void ClanSettings::DoAddMember(long long arg1, const eastl::string& str, int arg3) {
        unsigned int uVar1;
        bool cVar3;
        int iVar4;
        Logger* pLVar5;
        uint64_t uVar6;
        long long* plVar7;
        eastl::string* this_00;
        char* pcVar11;
        uint8_t uVar12;

        if (field_12 != 0 < arg1) {
            pLVar5 = logger::default_logger();
            pcVar11 = "";
            if (m_fluttered == '\0') {
                pcVar11 = "Invalid UserHash arg to this method - useUserHashes: %i but userhash: %i";
            }
            pLVar5->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        470, pcVar11, (unsigned long)field_12, arg1);
        }
        uint8_t bVar2 = str.empty();
        if (field_13 != (bVar2 ^ 1)) {
            pLVar5 = logger::default_logger();
            pcVar11 = "";
            if (m_fluttered == '\0') {
                pcVar11 = "Invalid DisplayName arg to this method - useDisplayNames: %i but displayname: %s";
            }
            bVar2 = field_13;
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar5->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        475, pcVar11, (unsigned long)bVar2, uVar6);
        }
        if (arg1 < 1) {
        LAB_10025de2a:
            cVar3 = str.empty();
            if (cVar3)
                goto LAB_10025de74;
            cVar3 = field_280.empty();
            if (!cVar3) {
                uVar1 = field_64;
                iVar4 = field_280.size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025de74;
            }
        } else {
            cVar3 = field_72.empty();
            if (!cVar3) {
                uVar1 = field_64;
                iVar4 = field_72.size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025de2a;
            }
        }
        ExtendMemberList(field_64 + 5);
    LAB_10025de74:
        cVar3 = field_72.empty();
        if (!cVar3) {
            plVar7 = &field_72[(long)(int)field_64];
            *plVar7 = arg1;
        }
        cVar3 = field_280.empty();
        if (!cVar3) {
            this_00 = &field_280[(long)(int)field_64];
            *this_00 = str;
        }
        if (field_232 == 4294967295) {
            field_232 = field_64;
            uVar12 = 126;
        } else {
            uVar12 = 0;
        }
        uint8_t* puVar8 = &field_104[(long)(int)field_64];
        *puVar8 = uVar12;
        uint32_t* puVar9 = &field_136[(long)(int)field_64];
        *puVar9 = 0;
        int* piVar10 = &field_168[(long)(int)field_64];
        *piVar10 = arg3;
        puVar9 = &field_200[(long)(int)field_64];
        *puVar9 = 0;
        field_64 = field_64 + 1;
        field_400.clear();
    }

    // 0x10025df80
    auto ClanSettings::Copy() {
        auto result;

        make_shared<ClanSettings>(&result);
        unsigned int uVar3 = field_8;
        long lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 8) = uVar3;
        uVar3 = field_48;
        lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 48) = uVar3;
        uVar3 = field_52;
        lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 52) = uVar3;
        lVar5 = (result).operator->();
        (*((lVar5 + 16))) = &field_16;
        bool bVar1 = field_56;
        lVar5 = (result).operator->();
        *(bool*)(lVar5 + 56) = bVar1;
        bVar1 = field_57;
        lVar5 = (result).operator->();
        *(bool*)(lVar5 + 57) = bVar1;
        bVar1 = field_58;
        lVar5 = (result).operator->();
        *(bool*)(lVar5 + 58) = bVar1;
        bVar1 = field_59;
        lVar5 = (result).operator->();
        *(bool*)(lVar5 + 59) = bVar1;
        bVar1 = field_60;
        lVar5 = (result).operator->();
        *(bool*)(lVar5 + 60) = bVar1;
        bVar1 = field_12;
        lVar5 = (result).operator->();
        *(bool*)(lVar5 + 12) = bVar1;
        uint8_t bVar2 = field_13;
        lVar5 = (result).operator->();
        *(uint8_t*)(lVar5 + 13) = bVar2;
        uVar3 = field_64;
        if (0 < (int)uVar3) {
            lVar5 = (result).operator->();
            *(unsigned int*)(lVar5 + 64) = uVar3;
            if (field_12 != false) {
                lVar5 = (result).operator->();
                (*((lVar5 + 72))) = field_72;
            }
            if (field_13 != 0) {
                lVar5 = (result).operator->();
                (*((lVar5 + 280))) = field_280;
            }
            lVar5 = (result).operator->();
            (*((lVar5 + 104))) = field_104;
            lVar5 = (result).operator->();
            (*((lVar5 + 136))) = field_136;
            lVar5 = (result).operator->();
            (*((lVar5 + 168))) = field_168;
            lVar5 = (result).operator->();
            (*((lVar5 + 200))) = field_200;
            uVar3 = field_232;
            lVar5 = (result).operator->();
            *(unsigned int*)(lVar5 + 232) = uVar3;
            uVar3 = field_236;
            lVar5 = (result).operator->();
            *(unsigned int*)(lVar5 + 236) = uVar3;
        }
        uVar3 = field_240;
        if (0 < (int)uVar3) {
            lVar5 = (result).operator->();
            *(unsigned int*)(lVar5 + 240) = uVar3;
            if (field_12 != false) {
                lVar5 = (result).operator->();
                (*((lVar5 + 248))) = field_248;
            }
            if (field_13 != 0) {
                lVar5 = (result).operator->();
                (*((lVar5 + 312))) = field_312;
            }
        }
        if (field_344.empty() == '\0') {
            lVar5 = (result).operator->();
            (*((lVar5 + 344))) = field_344;
        }
        return result;
    }

    // 0x10025e2f0
    auto ClanSettings::ValidateClanName(eastl::string str) {
        int iVar2;
        ClanSettings* str_00;
        basic_regex<char, std::regex_traits<char> _>* basic_regex;
        char* str_01;
        match_flag_type in_ECX;
        syntax_option_type extraout_EDX;
        syntax_option_type extraout_EDX_00;
        syntax_option_type extraout_EDX_01;
        syntax_option_type extraout_EDX_02;
        syntax_option_type syntax_option_type;
        int iVar4;
        int iVar5;
        regex local_d8;
        string local_98;
        eastl::string local_80;
        eastl::string local_60;
        ReturnValue* local_38;

        ClanSettings* str_02 = this;
        long lVar3 = size();
        if (lVar3 == 0) {
            auto result;
        } else {
            local_38 = &result;
            trim();
            iVar2 = size();
            local_80 = eastl::string();
            syntax_option_type = extraout_EDX;
            if (0 < iVar2) {
                iVar5 = 0;
                iVar4 = 1;
                do {
                    str_00 = (ClanSettings*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    if (core::stringtools::general::StringTools::IsASCIIAlphaNumeric((short)(char)str_00->field_0) ==
                        '\0') {
                        syntax_option_type = extraout_EDX_00;
                        if (0 < iVar5) {
                            str_00 = (ClanSettings*)&DAT_100e35840;
                            local_80.append(" ");
                            syntax_option_type = extraout_EDX_02;
                            goto LAB_10025e395;
                        }
                    } else {
                        local_80.append(str_00);
                        syntax_option_type = extraout_EDX_01;
                    LAB_10025e395:
                        iVar5 = iVar5 + 1;
                        str_02 = str_00;
                    }
                } while ((iVar4 < iVar2) && (iVar4 = iVar4 + 1, iVar5 < 20));
            }
            std::regex::basic_regex(&local_d8, (char*)str_02, syntax_option_type);
            basic_regex =
                (basic_regex<char, std::regex_traits<char> _>*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::regex_replace<std::regex_traits<char>, char>(&local_98, basic_regex, &local_d8, in_ECX);
            str_01 = (char*)std::string::c_str(&local_98);
            &result = local_38;
            local_60 = eastl::string(str_01);
            local_60.trim();
            lVar3 = local_60.size();
            if (lVar3 == 0) {
                new (&result) eastl::string();
            } else {
                new (&result) eastl::string(local_60);
            }
            std::string::~string(&local_98);
            std::regex::~basic_regex(&local_d8);
        }
        return result;
    }

    // 0x10025e570
    void ClanSettings::ExtendMemberList(int arg1) {
        unsigned long local_50[4];

        if (field_12 != false) {
            local_50[0] = 0;
            field_72.resize((unsigned long)arg1, *local_50);
        }
        if (field_13 != 0) {
            new (local_50) eastl::string("");
            field_280.resize((unsigned long)arg1, *local_50);
        }
        local_50[0] = local_50[0] & 18446744073709551360;
        field_104.resize((unsigned long)arg1, *local_50);
        local_50[0] = local_50[0] & 18446744069414584320;
        field_136.resize((unsigned long)arg1, *local_50);
        local_50[0] = local_50[0] & 18446744069414584320;
        field_168.resize((unsigned long)arg1, *local_50);
        local_50[0] = local_50[0] & 18446744069414584320;
        field_200.resize((unsigned long)arg1, *local_50);
    }

    // 0x10025e7c0
    void ClanSettings::ExtendBannedList(int arg1) {
        if (field_12 != false) {
            field_248.resize((long)arg1, 0);
        }
        if (field_13 != 0) {
            field_312.resize((long)arg1);
        }
    }

    // 0x10025e820
    unsigned long ClanSettings::IsBanned(long long arg1) {
        long* plVar1;
        unsigned long arg1_00;
        uint64_t unaff_R13;
        unsigned long uVar2;

        if (arg1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)(0 < (int)field_240));
            if (0 < (int)field_240) {
                plVar1 = &field_248[0];
                if (*plVar1 != arg1) {
                    arg1_00 = 1;
                    do {
                        uVar2 = (((uint64_t)((int64_t)(uVar2 >> 8)) << 8) |
                                 (uint8_t)((long)arg1_00 < (long)(int)field_240));
                        if ((long)(int)field_240 <= (long)arg1_00)
                            break;
                        plVar1 = &field_248[arg1_00];
                        arg1_00 = arg1_00 + 1;
                    } while (*plVar1 != arg1);
                }
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x10025e8b0
    unsigned long ClanSettings::IsAffined(long long arg1) {
        long* plVar1;
        unsigned long arg1_00;
        uint64_t unaff_R13;
        unsigned long uVar2;

        if (arg1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)(0 < (int)field_64));
            if (0 < (int)field_64) {
                plVar1 = &field_72[0];
                if (*plVar1 != arg1) {
                    arg1_00 = 1;
                    do {
                        uVar2 =
                            (((uint64_t)((int64_t)(uVar2 >> 8)) << 8) | (uint8_t)((long)arg1_00 < (long)(int)field_64));
                        if ((long)(int)field_64 <= (long)arg1_00)
                            break;
                        plVar1 = &field_72[arg1_00];
                        arg1_00 = arg1_00 + 1;
                    } while (*plVar1 != arg1);
                }
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x10025e930
    unsigned long ClanSettings::FindBanned(long long arg1) {
        long* plVar1;
        unsigned long arg1_00;

        if ((arg1 != 0) && (0 < (int)field_240)) {
            arg1_00 = 0;
            do {
                plVar1 = &field_248[arg1_00];
                if (*plVar1 == arg1) {
                    return arg1_00 & 4294967295;
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_240);
        }
        return 4294967295;
    }

    // 0x10025e9b0
    unsigned long ClanSettings::FindMember(long long arg1) {
        long* plVar1;
        unsigned long arg1_00;

        if ((arg1 != 0) && (0 < (int)field_64)) {
            arg1_00 = 0;
            do {
                plVar1 = &field_72[arg1_00];
                if (*plVar1 == arg1) {
                    return arg1_00 & 4294967295;
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_64);
        }
        return 4294967295;
    }

    // 0x10025ea20
    unsigned long ClanSettings::FindMember(eastl::string str) {
        eastl::string* str1;
        unsigned long arg1;

        if ((str->size() != 0) && (0 < (int)field_64)) {
            arg1 = 0;
            do {
                str1 = &field_280[arg1];
                if (*str1 == *str) {
                    return arg1 & 4294967295;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_64);
        }
        return 4294967295;
    }

    // 0x10025eaa0
    int ClanSettings::GetMemberRank(long long arg1) {
        bool cVar1;
        char* pcVar3;

        int iVar2 = FindMember(arg1);
        if (iVar2 == -1) {
            cVar1 = -1;
        } else {
            pcVar3 = &field_104[(long)iVar2];
            cVar1 = *pcVar3;
        }
        return (int)cVar1;
    }

    // 0x10025eae0
    uint32_t ClanSettings::GetMemberJoinRuneday(long long arg1) {
        uint32_t uVar2;
        uint32_t* puVar3;

        int iVar1 = FindMember(arg1);
        if (iVar1 == -1) {
            uVar2 = 4294967295;
        } else {
            puVar3 = &field_168[(long)iVar1];
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x10025eb20
    bool ClanSettings::GetMemberMuted(long long arg1) {
        int* piVar2;
        bool bVar3;

        int iVar1 = FindMember(arg1);
        if (iVar1 == -1) {
            bVar3 = false;
        } else {
            piVar2 = &field_200[(long)iVar1];
            bVar3 = *piVar2 != 0;
        }
        return bVar3;
    }

    // 0x10025eb60
    uint64_t ClanSettings::GetMemberExtraInfo(long long arg1, unsigned int arg2, unsigned int arg3) {
        uint64_t uVar1;

        unsigned int arg1_00 = FindMember(arg1);
        if (arg1_00 == 4294967295) {
            uVar1 = 0;
        } else {
            uVar1 = GetMemberExtraInfoBySlot(arg1_00, arg2, arg3);
        }
        return uVar1;
    }

    // 0x10025eba0
    int ClanSettings::GetMemberExtraInfoBySlot(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        unsigned int uVar2 = ~(-1 << ((char)arg3 + 1U & 31));
        if (arg3 == 31) {
            uVar2 = 4294967295;
        }
        unsigned int* puVar1 = &field_136[(unsigned long)arg1];
        return (int)(uVar2 & *puVar1) >> ((uint8_t)arg2 & 31);
    }

    // 0x10025ebe0
    auto ClanSettings::GetMemberDisplayName(long long arg1) {
        eastl::string* str;

        int iVar2 = FindMember(arg1);
        if (iVar2 != -1) {
            if (((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)field_280[(long)iVar2])
                    ->empty() == '\0') {
                str = &field_280[(long)iVar2];
                return auto(*str);
            }
        }
        new (&result) eastl::string("");
        return result;
    }

    // 0x10025ec70
    auto ClanSettings::GetBannedDisplayName(long long arg1) {
        eastl::string* str;

        int iVar2 = FindBanned(arg1);
        if (iVar2 != -1) {
            if (((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)field_312[(long)iVar2])
                    ->empty() == '\0') {
                str = &field_312[(long)iVar2];
                return auto(*str);
            }
        }
        new (&result) eastl::string("");
        return result;
    }

    // 0x10025ed00
    bool ClanSettings::IsAdmin(long long arg1) {
        char cVar1 = GetMemberRank(arg1);
        return 'c' < cVar1;
    }

    // 0x10025ed10
    Nullable<int> ClanSettings::GetExtraSettingAsInt(int arg1) {
        long lVar2;
        ReturnValue local_48;
        ReturnValue local_38;

        uint8_t* this_00 = &field_344;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            local_38[0] = (ReturnValue)(long)arg1;
            local_48 = this_00->find(local_38);
            local_38 = this_00->end();
            cVar1 = local_48 == local_38;
            if ((!cVar1) && (lVar2 = local_48.HeapBeginPtr(), *(int*)(lVar2 + 8) == 0)) {
                lVar2 = local_48.HeapBeginPtr();
                return Nullable<int>(*(int*)(lVar2 + 16));
            }
        }
        new (&result) Nullable<int>();
        return result;
    }

    // 0x10025ee60
    Nullable<int> ClanSettings::GetExtraSettingAsIntVarbit(int arg1, unsigned int arg2, unsigned int arg3) {
        long lVar2;
        unsigned int uVar3;
        ReturnValue local_58;
        ReturnValue local_48;

        uint8_t* this_00 = &field_344;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            local_48[0] = (ReturnValue)(long)arg1;
            local_58 = this_00->find(local_48);
            local_48 = this_00->end();
            cVar1 = local_58 == local_48;
            if ((!cVar1) && (lVar2 = local_58.HeapBeginPtr(), *(int*)(lVar2 + 8) == 0)) {
                lVar2 = local_58.HeapBeginPtr();
                uVar3 = ~(-1 << ((char)arg3 + 1U & 31));
                if (arg3 == 31) {
                    uVar3 = 4294967295;
                }
                local_48[0]._0_4_ = (uVar3 & *(unsigned int*)(lVar2 + 16)) >> ((uint8_t)arg2 & 31);
                result.pair<int, bool, void>(&local_48);
                return result;
            }
        }
        return Nullable<int>();
    }

    // 0x10025ef50
    Nullable<long long> ClanSettings::GetExtraSettingAsLong(int arg1) {
        long lVar2;
        ReturnValue local_48;
        ReturnValue local_38;

        uint8_t* this_00 = &field_344;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            local_38[0] = (ReturnValue)(long)arg1;
            local_48 = this_00->find(local_38);
            local_38 = this_00->end();
            cVar1 = local_48 == local_38;
            if ((!cVar1) && (lVar2 = local_48.HeapBeginPtr(), *(int*)(lVar2 + 8) == 1)) {
                lVar2 = local_48.HeapBeginPtr();
                return Nullable<long long>(*(long long*)(lVar2 + 16));
            }
        }
        new (&result) Nullable();
        return result;
    }

    // 0x10025f020
    auto ClanSettings::GetExtraSettingAsString(int arg1) {
        long lVar2;
        eastl::string local_68;
        ReturnValue local_48;
        ReturnValue local_38;

        uint8_t* this_00 = &field_344;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            local_38[0] = (ReturnValue)(long)arg1;
            local_48 = this_00->find(local_38);
            local_38 = this_00->end();
            cVar1 = local_48 == local_38;
            if ((!cVar1) && (lVar2 = local_48.HeapBeginPtr(), *(int*)(lVar2 + 8) == 2)) {
                lVar2 = local_48.HeapBeginPtr();
                local_68 = eastl::string(*((lVar2 + 24)));
                auto result(&local_68);
                return result;
            }
        }
        new (&result) Nullable<eastl::string>();
        return result;
    }

    // 0x10025f110
    auto ClanSettings::GetMemberSortedIndex() {
        Array<int>* this_00;
        int iVar2;
        eastl::string* pbVar3;
        eastl::string* pbVar4;
        eastl::string* str2;
        uint32_t* puVar5;
        unsigned long uVar6;
        Array<eastl::string> local_50;

        Array<int>* local_38 = (Array<int>*)&field_400;
        if (local_38->empty()) {
            local_50 = Array<eastl::string>();
            local_50.set_max_size((long)(int)field_64, 1);
            local_38->set_max_size((long)(int)field_64, 3);
            if (0 < (int)field_64) {
                uVar6 = 0;
                do {
                    pbVar3 = &field_280[uVar6];
                    pbVar4 = &local_50[uVar6];
                    *pbVar4 = pbVar3;
                    if (!(((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                               local_50[uVar6])
                              ->empty())) {
                        pbVar4 = &local_50[uVar6];
                        pbVar4->make_lower();
                        pbVar3 = &local_50[uVar6];
                        pbVar4 = &local_50[uVar6];
                        *pbVar4 = pbVar3;
                    }
                    uVar6 = uVar6 + 1;
                } while ((long)uVar6 < (long)(int)field_64);
            }
            pbVar3 = (eastl::string*)local_50.data();
            str2 = (eastl::string*)local_50.end();
            std::sort<eastl::string*>(pbVar3, str2);
            local_38->set_max_size((long)(int)field_64, 3);
            iVar2 = local_50.end();
            this_00 = local_38;
            if (0 < iVar2) {
                uVar6 = 0;
                do {
                    puVar5 = (uint32_t*)(*this_00)[uVar6];
                    *puVar5 = (int)uVar6;
                    uVar6 = uVar6 + 1;
                    iVar2 = local_50.end();
                } while ((long)uVar6 < (long)iVar2);
            }
        }
        return auto(local_38);
    }

    // 0x10025f310
    unsigned long ClanSettings::AddMember(long long arg1, int arg2) {
        unsigned long uVar2;
        eastl::string local_58;

        if ((int)field_64 < 500) {
            if (!(IsAffined(arg1))) {
                if (!(IsBanned(arg1))) {
                    local_58 = eastl::string(nullptr);
                    uVar2 = (unsigned long)(unsigned int)arg2;
                    DoAddMember(arg1, local_58, arg2);
                    uVar2 = (((uint64_t)((int64_t)(uVar2 >> 8)) << 8) | (uint8_t)1);
                    goto LAB_10025f34d;
                }
            }
        }
        uVar2 = 0;
    LAB_10025f34d:
        return uVar2 & 4294967295;
    }

    // 0x10025f3c0
    int ClanSettings::DeleteMember(long long arg1) {
        int arg1_00 = FindMember(arg1);
        if (arg1_00 == -1) {
            arg1_00 = -1;
        } else {
            DoDeleteMember(arg1_00);
        }
        return arg1_00;
    }

    // 0x10025f3f0
    void ClanSettings::DoDeleteMember(int arg1) {
        uint8_t* puVar1;
        Logger* this_00;
        long lVar3;
        char* str2;

        if ((arg1 < 0) || ((int)field_64 <= arg1)) {
            this_00 = logger::default_logger();
            str2 = "";
            if (m_fluttered == '\0') {
                str2 = "Invalid pos in doDeleteMember - pos: %i memberCount: %i";
            }
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                         "clanchat/ClanSettings.cpp",
                         525, str2, (unsigned long)(unsigned int)arg1, (unsigned long)field_64);
        }
        field_64 = field_64 - 1;
        field_400.clear();
        if (field_64 == 0) {
            field_72.clear();
            field_280.clear();
            field_104.clear();
            field_136.clear();
            field_168.clear();
            field_200.clear();
            field_232 = 4294967295;
            field_236 = 4294967295;
        } else {
            lVar3 = field_104.HeapBeginPtr();
            field_104.erase((schar*)(lVar3 + (long)arg1));
            lVar3 = field_136.HeapBeginPtr();
            field_136.erase((int*)(lVar3 + (long)arg1 * 4));
            lVar3 = field_168.HeapBeginPtr();
            field_168.erase((int*)(lVar3 + (long)arg1 * 4));
            lVar3 = field_200.HeapBeginPtr();
            field_200.erase((int*)(lVar3 + (long)arg1 * 4));
            puVar1 = &field_72;
            if (!(puVar1->empty())) {
                lVar3 = puVar1->HeapBeginPtr();
                puVar1->erase((long long*)(lVar3 + (long)arg1 * 8));
            }
            puVar1 = &field_280;
            if (!(puVar1->empty())) {
                lVar3 = puVar1->HeapBeginPtr();
                puVar1->erase((eastl::string*)((long)arg1 * 32 + lVar3));
            }
            SetCurrentAndReplacementOwners();
        }
    }

    // 0x10025f630
    void ClanSettings::SetCurrentAndReplacementOwners() {
        char* pcVar1;
        uint8_t* puVar2;
        unsigned long arg1;
        unsigned int uVar3;
        unsigned long uVar4;
        char cVar5;

        field_232 = 4294967295;
        field_236 = 4294967295;
        if (field_64 != 0) {
            puVar2 = &field_104;
            uVar3 = 0;
            pcVar1 = (char*)(*puVar2)[0];
            if (1 < (int)field_64) {
                cVar5 = *pcVar1;
                uVar4 = 0;
                arg1 = 1;
                do {
                    pcVar1 = (char*)(*puVar2)[arg1];
                    if (cVar5 < *pcVar1) {
                        if (cVar5 == '}') {
                            field_236 = (unsigned int)uVar4;
                        }
                        pcVar1 = (char*)(*puVar2)[arg1];
                        cVar5 = *pcVar1;
                        uVar4 = arg1 & 4294967295;
                    } else if (field_236 == 4294967295) {
                        pcVar1 = (char*)(*puVar2)[arg1];
                        if (*pcVar1 == '}') {
                            field_236 = (unsigned int)arg1;
                        }
                    }
                    uVar3 = (unsigned int)uVar4;
                    arg1 = arg1 + 1;
                } while ((long)arg1 < (long)(int)field_64);
            }
            field_232 = uVar3;
            if (uVar3 != 4294967295) {
                puVar2 = (uint8_t*)(*puVar2)[(long)(int)uVar3];
                *puVar2 = 126;
            }
        }
    }

    // 0x10025f720
    unsigned long ClanSettings::AddBanned(long long arg1) {
        uint64_t in_RCX;
        unsigned long uVar2;
        eastl::string local_50;

        if ((int)field_240 < 100) {
            if (!(IsBanned(arg1))) {
                if (!(IsAffined(arg1))) {
                    local_50 = eastl::string(nullptr);
                    DoAddBanned(arg1, local_50);
                    uVar2 = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
                    goto LAB_10025f758;
                }
            }
        }
        uVar2 = 0;
    LAB_10025f758:
        return uVar2 & 4294967295;
    }

    // 0x10025f7c0
    void ClanSettings::DoAddBanned(long long arg1, const eastl::string& str) {
        unsigned int uVar1;
        bool cVar3;
        int iVar4;
        Logger* pLVar5;
        uint64_t uVar6;
        long long* plVar7;
        eastl::string* this_00;
        char* pcVar8;

        if ((0 < arg1) || (field_12 == false)) {
            pLVar5 = logger::default_logger();
            pcVar8 = "";
            if (m_fluttered == '\0') {
                pcVar8 = "Invalid UserHash arg to this method - useUserHashes: %i but userhash: %i";
            }
            pLVar5->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        627, pcVar8, (unsigned long)field_12, arg1);
        }
        uint8_t bVar2 = str.empty();
        if (field_13 != (bVar2 ^ 1)) {
            pLVar5 = logger::default_logger();
            pcVar8 = "";
            if (m_fluttered == '\0') {
                pcVar8 = "Invalid DisplayName arg to this method - useDisplayNames: %i but displayname: %s";
            }
            bVar2 = field_13;
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar5->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        631, pcVar8, (unsigned long)bVar2, uVar6);
        }
        if (arg1 < 1) {
        LAB_10025f8c7:
            cVar3 = str.empty();
            if (cVar3)
                goto LAB_10025f90b;
            cVar3 = field_312.empty();
            if (!cVar3) {
                uVar1 = field_240;
                iVar4 = field_312.size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025f90b;
            }
        } else {
            cVar3 = field_248.empty();
            if (!cVar3) {
                uVar1 = field_240;
                iVar4 = field_248.size();
                if ((int)uVar1 < iVar4)
                    goto LAB_10025f8c7;
            }
        }
        ExtendBannedList(field_240 + 5);
    LAB_10025f90b:
        cVar3 = field_248.empty();
        if (!cVar3) {
            plVar7 = &field_248[(long)(int)field_240];
            *plVar7 = arg1;
        }
        cVar3 = field_312.empty();
        if (!cVar3) {
            this_00 = &field_312[(long)(int)field_240];
            *this_00 = str;
        }
        field_240 = field_240 + 1;
    }

    // 0x10025f980
    int ClanSettings::DeleteBanned(long long arg1) {
        int arg1_00 = FindBanned(arg1);
        if (arg1_00 == -1) {
            arg1_00 = -1;
        } else {
            DoDeleteBanned(arg1_00);
        }
        return arg1_00;
    }

    // 0x10025f9b0
    void ClanSettings::DoDeleteBanned(int arg1) {
        long lVar2;

        uint8_t* puVar4 = &field_248;
        unsigned int* puVar1 = &field_240;
        *puVar1 = *puVar1 - 1;
        if (*puVar1 == 0) {
            puVar4->clear();
            field_312.clear();
        } else {
            if (!(puVar4->empty())) {
                lVar2 = puVar4->HeapBeginPtr();
                puVar4->erase((long long*)(lVar2 + (long)arg1 * 8));
            }
            puVar4 = &field_312;
            if (!(puVar4->empty())) {
                lVar2 = puVar4->HeapBeginPtr();
                puVar4->erase((eastl::string*)((long)arg1 * 32 + lVar2));
            }
        }
    }

    // 0x10025fa50
    uint64_t ClanSettings::SetMemberRank(long long arg1, signed char arg2) {
        uint64_t uVar1;

        int arg1_00 = FindMember(arg1);
        if (arg1_00 == -1) {
            uVar1 = 4294967295;
        } else {
            uVar1 = SetMemberRankBySlot(arg1_00, arg2);
        }
        return uVar1;
    }

    // 0x10025fa90
    int ClanSettings::SetMemberRankBySlot(int arg1, signed char arg2) {
        char* pcVar1;
        schar* psVar2;

        if ((arg2 & 254U) == 126) {
            return -1;
        }
        if (field_232 == arg1) {
            if ((long)(int)field_236 == 18446744073709551615) {
                return -1;
            }
            pcVar1 = &field_104[(long)(int)field_236];
            if (*pcVar1 < '}') {
                return -1;
            }
        }
        pcVar1 = &field_104[(long)arg1];
        int iVar3 = -1;
        if (*pcVar1 != arg2) {
            psVar2 = &field_104[(long)arg1];
            *psVar2 = arg2;
            SetCurrentAndReplacementOwners();
            iVar3 = arg1;
        }
        return iVar3;
    }

    // 0x10025fb20
    uint64_t ClanSettings::SetOwnerBySlot(int arg1) {
        char* pcVar1;
        uint8_t* puVar2;
        uint8_t* puVar3;

        if (field_232 != arg1) {
            puVar3 = &field_104;
            pcVar1 = (char*)(*puVar3)[(long)arg1];
            if (*pcVar1 != '~') {
                puVar2 = (uint8_t*)(*puVar3)[(long)(int)field_232];
                *puVar2 = 125;
                field_236 = field_232;
                puVar3 = (uint8_t*)(*puVar3)[(long)arg1];
                *puVar3 = 126;
                field_232 = arg1;
                return 1;
            }
        }
        return 0;
    }

    // 0x10025fb90
    uint64_t ClanSettings::SetMemberMuted(long long arg1, bool arg2) {
        uint64_t uVar1;

        int arg1_00 = FindMember(arg1);
        if (arg1_00 == -1) {
            uVar1 = 4294967295;
        } else {
            uVar1 = SetMemberMutedBySlot(arg1_00, arg2);
        }
        return uVar1;
    }

    // 0x10025fbd0
    int ClanSettings::SetMemberMutedBySlot(int arg1, bool arg2) {
        uint32_t in_register_00000011;

        int* piVar2 = &field_200[(long)arg1];
        int iVar1 = -1;
        if (*piVar2 != (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2)) {
            piVar2 = &field_200[(long)arg1];
            *piVar2 = (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2);
            iVar1 = arg1;
        }
        return iVar1;
    }

    // 0x10025fc20
    uint64_t ClanSettings::SetMemberExtraInfo(long long arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        uint64_t uVar1;

        int arg1_00 = FindMember(arg1);
        if (arg1_00 == -1) {
            uVar1 = 4294967295;
        } else {
            uVar1 = SetMemberExtraInfoBySlot(arg1_00, arg2, arg3, arg4);
        }
        return uVar1;
    }

    // 0x10025fc70
    int ClanSettings::SetMemberExtraInfoBySlot(int arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        unsigned int uVar6 = ~(-1 << ((char)arg4 + 1U & 31));
        if (arg4 == 31) {
            uVar6 = 4294967295;
        }
        uVar6 = uVar6 ^ -1 << ((uint8_t)arg3 & 31);
        unsigned int uVar5 = ~uVar6;
        unsigned int uVar4 = arg2 << ((uint8_t)arg3 & 31) & uVar5;
        unsigned int* puVar3 = &field_136[(long)arg1];
        unsigned int uVar1 = *puVar3;
        int iVar2 = -1;
        if ((uVar5 & uVar1) != uVar4) {
            puVar3 = &field_136[(long)arg1];
            *puVar3 = uVar1 & uVar6 | uVar4;
            iVar2 = arg1;
        }
        return iVar2;
    }

    // 0x10025fd10
    bool ClanSettings::SetAllowNonMembers(bool arg1) {
        bool bVar1 = field_56;
        if (bVar1 != arg1) {
            field_56 = arg1;
        }
        return bVar1 != arg1;
    }

    // 0x10025fd30
    bool ClanSettings::SetRankTalk(signed char arg1) {
        bool bVar1 = field_57;
        if (bVar1 != (bool)arg1) {
            field_57 = (bool)arg1;
        }
        return bVar1 != (bool)arg1;
    }

    // 0x10025fd50
    bool ClanSettings::SetRankKick(signed char arg1) {
        bool bVar1 = field_58;
        if (bVar1 != (bool)arg1) {
            field_58 = (bool)arg1;
        }
        return bVar1 != (bool)arg1;
    }

    // 0x10025fd70
    bool ClanSettings::SetRankLootShare(signed char arg1) {
        bool bVar1 = field_59;
        if (bVar1 != (bool)arg1) {
            field_59 = (bool)arg1;
        }
        return bVar1 != (bool)arg1;
    }

    // 0x10025fd90
    bool ClanSettings::SetCoinShare(signed char arg1) {
        bool bVar1 = field_60;
        if (bVar1 != (bool)arg1) {
            field_60 = (bool)arg1;
        }
        return bVar1 != (bool)arg1;
    }

    // 0x10025fdb0
    uint64_t ClanSettings::SetExtraSettingInt(int arg1, int arg2) {
        long lVar2;
        ExtraSettingsParam* this_00;
        uint8_t local_68[48];
        ReturnValue local_38;

        uint8_t* this_01 = &field_344;
        local_68._0_8_ = (long)arg1;
        auto local_78 = this_01->find(*local_68);
        *local_68 = this_01->end();
        if (((local_78 != *local_68 == '\0') || (lVar2 = local_78.HeapBeginPtr(), *(int*)(lVar2 + 8) != 0)) ||
            (lVar2 = local_78.HeapBeginPtr(), *(int*)(lVar2 + 16) != arg2)) {
            local_68._0_8_ = local_68._0_8_ & 18446744069414584320;
            local_68._8_8_ = (int64_t)arg2;
            new ((local_68 + 16)) eastl::string("");
            local_38 = (ReturnValue)(long)arg1;
            this_00 = (ExtraSettingsParam*)(*this_01)[local_38];
            *this_00 = *local_68;
            return 1;
        }
        return 0;
    }

    // 0x10025ff20
    uint64_t ClanSettings::SetExtraSettingIntVarbit(int arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        unsigned int uVar1;
        long lVar3;
        uint8_t local_88[48];

        unsigned int uVar5 = ~(-1 << ((char)arg4 + 1U & 31));
        if (arg4 == 31) {
            uVar5 = 4294967295;
        }
        uVar5 = uVar5 ^ -1 << ((uint8_t)arg3 & 31);
        unsigned int uVar6 = ~uVar5;
        unsigned int uVar4 = arg2 << ((uint8_t)arg3 & 31) & uVar6;
        uint8_t* this_01 = &field_344;
        local_88._0_8_ = (int64_t)arg1;
        ReturnValue local_40 = (ReturnValue)local_88._0_8_;
        auto local_58 = this_01->find(*local_88);
        hash_map<long long, ClanSettings::ExtraSettingsParam>* local_48 =
            (hash_map<long long, ClanSettings::ExtraSettingsParam>*)this_01;
        *local_88 = this_01->end();
        if (local_58 != *local_88 != '\0') {
            lVar3 = local_58.HeapBeginPtr();
            uVar1 = *(unsigned int*)(lVar3 + 16);
            lVar3 = local_58.HeapBeginPtr();
            if (*(int*)(lVar3 + 8) == 0) {
                if ((uVar6 & uVar1) == uVar4) {
                    return 0;
                }
                lVar3 = local_58.HeapBeginPtr();
                *(long*)(lVar3 + 16) = (long)(int)(uVar5 & uVar1 | uVar4);
                return 1;
            }
        }
        local_88._0_8_ = local_88._0_8_ & 18446744069414584320;
        local_88._8_8_ = (int64_t)((int)uVar4);
        new ((local_88 + 16)) eastl::string("");
        ReturnValue local_38 = local_40;
        ExtraSettingsParam* this_00 = (ExtraSettingsParam*)(*local_48)[local_38];
        *this_00 = *local_88;
        return 1;
    }

    // 0x1002600a0
    uint64_t ClanSettings::SetExtraSettingLong(int arg1, long long arg2) {
        long lVar2;
        ExtraSettingsParam* this_00;
        uint8_t local_68[48];
        ReturnValue local_38;

        uint8_t* this_01 = &field_344;
        local_68._0_8_ = (long)arg1;
        auto local_78 = this_01->find(*local_68);
        *local_68 = this_01->end();
        if (((local_78 != *local_68 == '\0') || (lVar2 = local_78.HeapBeginPtr(), *(int*)(lVar2 + 8) != 1)) ||
            (lVar2 = local_78.HeapBeginPtr(), *(long*)(lVar2 + 16) != arg2)) {
            local_68._0_4_ = 1;
            local_68._8_8_ = arg2;
            new ((local_68 + 16)) eastl::string("");
            local_38 = (ReturnValue)(long)arg1;
            this_00 = (ExtraSettingsParam*)(*this_01)[local_38];
            *this_00 = *local_68;
            return 1;
        }
        return 0;
    }

    // 0x1002601a0
    uint64_t ClanSettings::SetExtraSettingString(int arg1, eastl::string str) {
        long lVar4;
        uint8_t local_68[48];

        unsigned long uVar3 = str->size();
        if (80 < uVar3) {
            *local_68 = str->substr(0, 80);
            *str = local_68;
        }
        uint8_t* this_01 = &field_344;
        local_68._0_8_ = (long)arg1;
        auto local_78 = this_01->find(*local_68);
        *local_68 = this_01->end();
        if ((local_78 != *local_68 != '\0') && (lVar4 = local_78.HeapBeginPtr(), *(int*)(lVar4 + 8) == 2)) {
            lVar4 = local_78.HeapBeginPtr();
            if ((*((lVar4 + 24))) == *str) {
                return 0;
            }
        }
        local_68._0_4_ = 2;
        local_68._8_8_ = 0;
        new ((local_68 + 16)) eastl::string(*str);
        ReturnValue local_38 = (ReturnValue)(long)arg1;
        ExtraSettingsParam* this_00 = (ExtraSettingsParam*)(*this_01)[local_38];
        *this_00 = *local_68;
        return 1;
    }

    // 0x1002602e0
    int ClanSettings::GetEncodeLength(bool arg1, bool arg2) {
        int iVar3;
        int iVar4;
        eastl::string* pbVar6;
        uint64_t in_register_00000031;
        int iVar7;
        unsigned long uVar8;
        ReturnValue local_58;
        ReturnValue local_48;

        long lVar5 = field_16.size();
        if (lVar5 == 0) {
            iVar3 = 25;
        } else {
            iVar3 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_16, false);
            iVar3 = iVar3 + 24;
        }
        unsigned int uVar1 = field_64;
        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        if (0 < (int)uVar1) {
            iVar4 = 0;
            if (arg1) {
                iVar4 = uVar1 << 3;
            }
            iVar3 = iVar4 + iVar3 + uVar1 * 8;
            if (arg2) {
                uVar8 = 0;
                do {
                    pbVar6 = &field_280[uVar8];
                    iVar4 =
                        PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(*pbVar6, false);
                    iVar3 = iVar3 + iVar4;
                    uVar8 = uVar8 + 1;
                } while ((long)uVar8 < (long)(int)field_64);
            }
        }
        if (0 < (int)field_240) {
            iVar4 = 0;
            if ((char)local_34 != '\0') {
                iVar4 = field_240 << 3;
            }
            iVar3 = iVar4 + iVar3;
            if (arg2) {
                uVar8 = 0;
                do {
                    pbVar6 = &field_312[uVar8];
                    iVar4 =
                        PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(*pbVar6, false);
                    iVar3 = iVar3 + iVar4;
                    uVar8 = uVar8 + 1;
                } while ((long)uVar8 < (long)(int)field_240);
            }
        }
        uint8_t* this_00 = &field_344;
        bool cVar2 = this_00->empty();
        if (!cVar2) {
            local_58 = this_00->begin();
            local_48 = this_00->end();
            cVar2 = local_58 != local_48;
            if (cVar2) {
                do {
                    lVar5 = local_58.HeapBeginPtr();
                    iVar4 = *(int*)(lVar5 + 8);
                    if (iVar4 == 2) {
                        iVar4 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                            *((lVar5 + 24)), false);
                        iVar7 = iVar3 + 4 + iVar4;
                    } else {
                        if (iVar4 == 1) {
                            iVar7 = iVar3 + 12;
                        } else {
                            iVar7 = iVar3 + 4;
                            if (iVar4 != 0)
                                goto LAB_100260447;
                            iVar7 = iVar3 + 8;
                        }
                    }
                LAB_100260447:
                    iVar3 = iVar7;
                    ++local_58;
                    cVar2 = local_58 != local_48;
                } while (cVar2);
            }
        }
        return iVar3;
    }

    // 0x1002604e0
    void ClanSettings::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3) {
        Encode(packetJ, arg2, arg3, true);
    }

    // 0x100260500
    void ClanSettings::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3,
                              bool arg4) {
        bool cVar1;
        unsigned int uVar2;
        Logger* pLVar3;
        uint64_t uVar5;
        unsigned int* puVar6;
        int* piVar7;
        unsigned long long* puVar8;
        eastl::string* pbVar9;
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;
        unsigned int uVar10;
        uint64_t in_register_00000081;
        uint8_t* this_00;
        unsigned long uVar11;
        ReturnValue local_80;
        ReturnValue local_70;
        vector<signed char>* local_60;
        vector<int>* local_58;
        vector<long long>* local_50;
        vector<eastl::string>* local_48;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        PublishingPlatformType local_38 =
            (PublishingPlatformType)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if ((local_38 == 0) && (!arg3)) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        978, "Must encode with at least one of UserHashes or DisplayNames!");
        }
        if (((uint8_t)local_38 == '\0') || (field_12 != false)) {
        } else {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        982, "Asked to store UserHashes when not present");
        }
        if (((char)local_34 != '\0') && (field_13 == 0)) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettings.cpp",
                        986, "Asked to store DisplayNames when not present");
        }
        packetJ.p1<shared::LoginProt::ID>(6);
        PublishingPlatformType publishingPlatformType = (local_38 & 255) + 2;
        if ((char)local_34 == '\0') {
            publishingPlatformType = local_38 & 255;
        }
        packetJ.p1<shared::LoginProt::ID>(publishingPlatformType);
        packetJ.p4<int>((unsigned long)field_8);
        packetJ.p4<int>((unsigned long)field_48);
        packetJ.p2<int>(field_64);
        packetJ.p1<shared::LoginProt::ID>(field_240);
        if (field_16.size() == 0) {
            packetJ.pStringUTF8ToCP1252("", false);
        } else {
            packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_16, false);
        }
        packetJ.p4<int>((unsigned long)field_52);
        packetJ.p1<shared::LoginProt::ID>((unsigned int)field_56);
        packetJ.p1<signed char>(field_57);
        packetJ.p1<signed char>(field_58);
        packetJ.p1<signed char>(field_59);
        packetJ.p1<signed char>(field_60);
        if (0 < (int)field_64) {
            local_50 = (vector<long long>*)&field_72;
            local_48 = (vector<eastl::string>*)&field_280;
            local_60 = (vector<signed char>*)&field_104;
            local_58 = (vector<int>*)&field_136;
            uVar11 = 0;
            do {
                if ((uint8_t)local_38 != '\0') {
                    puVar8 = (unsigned long long*)(*local_50)[uVar11];
                    packetJ.p8<long long>(*puVar8);
                }
                if ((char)local_34 != '\0') {
                    pbVar9 = (eastl::string*)(*local_48)[uVar11];
                    packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar9, false);
                }
                uVar5 = (*local_60)[uVar11];
                packetJ.p1<signed char>(*(bool*)uVar5);
                puVar6 = (unsigned int*)(*local_58)[uVar11];
                packetJ.p4<int>((unsigned long)*puVar6);
                puVar6 = &field_168[uVar11];
                packetJ.p2<int>(*puVar6);
                piVar7 = &field_200[uVar11];
                packetJ.p1<shared::LoginProt::ID>((unsigned int)(*piVar7 != 0));
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)field_64);
        }
        if (0 < (int)field_240) {
            uVar11 = 0;
            do {
                if ((uint8_t)local_38 != '\0') {
                    puVar8 = &field_248[uVar11];
                    packetJ.p8<long long>(*puVar8);
                }
                if ((char)local_34 != '\0') {
                    pbVar9 = &field_312[uVar11];
                    packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar9, false);
                }
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)field_240);
        }
        if ((char)local_3c != '\0') {
            this_00 = &field_344;
            cVar1 = this_00->empty();
            if (!cVar1) {
                uVar2 = this_00->size();
                packetJ.p2<int>(uVar2);
                local_80 = this_00->begin();
                local_70 = this_00->end();
                cVar1 = local_80 != local_70;
                if (!cVar1) {
                    return;
                }
                do {
                    puVar6 = (unsigned int*)local_80.HeapBeginPtr();
                    uVar10 = *puVar6 & 1073741823;
                    uVar2 = puVar6[2];
                    if (uVar2 == 2) {
                        packetJ.p4<int>((unsigned long)(uVar10 | 2147483648));
                        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*((puVar6 + 6)),
                                                                                                     false);
                    } else if (uVar2 == 1) {
                        packetJ.p4<int>((unsigned long)(uVar10 | 1073741824));
                        packetJ.p8<long long>(*(unsigned long long*)(puVar6 + 4));
                    } else if (uVar2 == 0) {
                        packetJ.p4<int>((unsigned long)uVar10);
                        packetJ.p4<int>((unsigned long)puVar6[4]);
                    }
                    ++local_80;
                    cVar1 = local_80 != local_70;
                } while (cVar1);
                return;
            }
        }
        packetJ.p2<int>(0);
    }

    // 0x100260970
    int ClanSettings::GetMaximumSize(bool arg1, bool arg2, int arg3, int arg4, int arg5) {
        uint32_t in_register_00000031;
        uint64_t in_register_00000039;

        int iVar2 = (int)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1);
        int iVar1 = 2545;
        if (iVar2 != 0) {
            iVar1 = 6545;
        }
        int iVar3 = iVar1 + 6500;
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2) == 0) {
            iVar3 = iVar1;
        }
        iVar1 = iVar3 + 800;
        if (iVar2 == 0) {
            iVar1 = iVar3;
        }
        iVar2 = iVar1 + 1300;
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2) == 0) {
            iVar2 = iVar1;
        }
        return arg3 * 8 + arg4 * 12 + arg5 * 85 + iVar2;
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x10025e1f0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettings>::type
    make_shared<oldscape::rs2lib::social::ClanSettings>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ClanSettings* local_28[2];

        auto arg1 = aligned_alloc(456, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettings>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettings>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int,
                              oldscape::rs2lib::social::ClanSettings*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
