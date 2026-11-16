// projects/osclient/objtags/ObjTagManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ObjTagManager.h"

namespace jag::oldscape::objtags {
    // 0x10001eaf0
    ObjTagManager::ObjTagManager()
        : std::array<eastl::hash_map<eastl::string, eastl::vector<unsigned int>>, 16ul>(), field_1792(0),
          field_1800(0) {}

    // 0x10001ebc0
    ObjTagManager::~ObjTagManager() {
        SaveTags();
        field_1840.~vector();
        field_1808.~vector();
        field_896.~array();
    }

    // 0x10001ec40
    void ObjTagManager::SaveTags() {
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        Value* this_00;
        Value local_338;
        Value local_310;
        StreamWriterBuilder local_2e8;
        Value local_2e0;
        ReturnValue local_2b8;
        uint8_t local_290[8];

        *((local_290 + 8)) = GameShell3Cache::GetAccountDirectory();
        Filename local_150 = (*((local_290 + 8))) / "ObjTags.dat";
        ((local_290 + 8))->~pair();
        new (local_290) callstack::Callstack();
        if (!(AreTagsEmpty())) {
            new ((local_290 + 8)) File(&local_150, 1538, local_290);
            if (!(local_290->IsValid())) {
                SerializeTags(&local_338);
                local_2e8 = Json::StreamWriterBuilder();
                local_310 = Json::Value(0);
                local_2b8 = Json::Value("");
                this_00 = &local_310["indentation"];
                *this_00 = local_2b8;
                local_2e0 = local_310;
                local_2b8 = Json::writeString(local_2e8, local_338);
                pcVar3 = (char*)std::string::c_str(&local_2b8);
                ((local_290 + 8))->write(pcVar3, nullptr);
                ((local_290 + 8))->close(nullptr);
                std::string::~string(&local_2b8);
            } else {
                pLVar2 = logger::default_logger();
                pcVar3 = local_150.GetName();
                local_2e8 = local_290->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "objtags/ObjTagManager.cpp",
                            351, "Error creating Obj Tags file %s: %s", pcVar3, uVar4);
            }
            ((local_290 + 8))->~File();
        } else {
            if (local_150.Exists()) {
                local_150.RemoveFile(local_290);
                if (local_290->IsValid()) {
                    pLVar2 = logger::default_logger();
                    pcVar3 = local_150.GetName();
                    *((local_290 + 8)) = local_290->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar2->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "objtags/ObjTagManager.cpp",
                                374, "Error deleting highlight file %s: %s", pcVar3, uVar4);
                    ((local_290 + 8))->~basic_string();
                }
            }
        }
    }

    // 0x10001f010
    void ObjTagManager::ResetAll() {
        unsigned long arg1 = 0;
        do {
            ((hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                        eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                        eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*this)[arg1])
                ->clear();
            ((hashtable<unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string>>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string>>>,
                        eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)field_896[arg1])
                ->clear();
            arg1 = arg1 + 1;
        } while (arg1 != 16);
    }

    // 0x10001f0f0
    void ObjTagManager::ClearGroup(int arg1) {
        if (IsGroupValid(arg1) != '\0') {
            ((hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                        eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                        eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*this)[(long)arg1])
                ->clear();
            ((hashtable<unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string>>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string>>>,
                        eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                 field_896[(long)arg1])
                ->clear();
        }
    }

    // 0x10001f150
    void ObjTagManager::AddTag(unsigned int arg1, const eastl::string& str, int arg3) {
        hashtable<
            unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
            eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        long lVar3;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        ReturnValue local_e0;
        ReturnValue local_d0;
        vector<eastl::string> local_c0;
        ReturnValue local_a0;
        ReturnValue local_78;

        unsigned int local_7c = arg1;
        if (IsGroupValid(arg3)) {
            if (!(HasTag(local_7c, str, arg3))) {
                if (!str == (*((value_type*)""))) {
                    this_00 = &field_896[(unsigned long)arg3];
                    local_e0 = this_00->find(local_7c);
                    local_78 = this_00->end();
                    if (!(local_e0 != local_78)) {
                        local_78 = eastl::string(str);
                        local_c0 = eastl::vector<eastl::string>(&local_78, DAT_00000001);
                        eastl::pair<unsigned int const, eastl::vector<eastl::string>>::pair<
                            unsigned int&, eastl::vector<eastl::string>&, void>(&local_78, &local_7c,
                                                                                (vector<eastl::string>*)&local_c0);
                        local_a0 = this_00->insert(local_78);
                    } else {
                        lVar3 = local_e0.HeapBeginPtr();
                        ((lVar3 + 8))->push_back(str);
                    }
                    this_01 =
                        (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                                   eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                   eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                   true>*)(*this)[(unsigned long)arg3];
                    local_d0 = this_01->find(str);
                    local_78 = this_01->end();
                    if (!(local_d0 != local_78)) {
                        local_a0[0]._0_4_ = local_7c;
                        local_c0 = eastl::vector<unsigned int>(&local_a0, DAT_00000001);
                        local_78.pair<eastl::vector<unsigned int>&, void>(str, local_c0);
                        local_a0 = this_01->insert(local_78);
                    } else {
                        lVar3 = local_d0.HeapBeginPtr();
                        ((lVar3 + 32))->push_back(local_7c);
                    }
                }
            }
        }
    }

    // 0x10001f400
    unsigned long ObjTagManager::HasTag(unsigned int arg1, const eastl::string& str, int arg3) {
        long lVar2;
        eastl::string* pbVar3;
        eastl::string* pbVar4;
        unsigned long uVar5;

        hashtable<
            unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
            eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00 =
            &field_896[(long)arg3];
        auto local_60 = this_00->find(arg1);
        auto local_50 = this_00->end();
        if (local_60 != local_50 == '\0') {
            uVar5 = 0;
        } else {
            lVar2 = local_60.HeapBeginPtr();
            new (&local_50) eastl::vector<eastl::string>(*((lVar2 + 8)));
            pbVar3 = (eastl::string*)local_50.HeapBeginPtr();
            pbVar4 = (eastl::string*)local_50.end();
            pbVar3 = eastl::find<eastl::string*, eastl::string>(pbVar3, pbVar4, str);
            pbVar4 = (eastl::string*)local_50.end();
            uVar5 = (((uint64_t)((int64_t)((unsigned long)pbVar3 >> 8)) << 8) | (uint8_t)(pbVar3 != pbVar4));
        }
        return uVar5 & 4294967295;
    }

    // 0x10001f700
    unsigned long ObjTagManager::DeleteTag(const eastl::string& str, int arg2) {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        unsigned long uVar2;
        long lVar3;
        unsigned int* puVar4;
        unsigned int* puVar5;
        ReturnValue local_68;
        ReturnValue local_48;
        unsigned int local_34;

        if (IsGroupValid(arg2) == '\0') {
            uVar2 = 0;
        } else {
            this_00 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>*)(*this)[(long)arg2];
            local_48 = this_00->find(str);
            local_68 = this_00->end();
            uVar2 = local_48 != local_68;
            if ((char)uVar2 != '\0') {
                local_34 = (unsigned int)uVar2;
                lVar3 = local_48.HeapBeginPtr();
                local_68 = eastl::vector<unsigned int>(*((lVar3 + 32)));
                puVar4 = (unsigned int*)local_68.HeapBeginPtr();
                puVar5 = (unsigned int*)local_68.end();
                if (puVar4 != puVar5) {
                    do {
                        RemoveTagFromObj(*puVar4, str, arg2);
                        puVar4 = puVar4 + 1;
                        puVar5 = (unsigned int*)local_68.end();
                    } while (puVar4 != puVar5);
                }
                uVar2 = (unsigned long)local_34;
            }
        }
        return uVar2;
    }

    // 0x10001f810
    uint64_t ObjTagManager::RemoveTagFromObj(unsigned int arg1, const eastl::string& str, int arg3) {
        hashtable<
            unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
            eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        long lVar3;
        eastl::string* str2;
        eastl::string* pbVar4;
        unsigned int* puVar5;
        unsigned int* arg2;
        Layout* pLVar6;
        ReturnValue local_88;
        ReturnValue local_78;
        hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string> _>, true, false>* local_68[2];
        hashtable_iterator<eastl::pair<eastl::string const, eastl::vector<unsigned int> _>, true, false>* local_58[2];
        ReturnValue local_48;

        bool cVar1 = IsGroupValid(arg3);
        if ((cVar1) && (cVar1 = HasTag(arg1, str, arg3), cVar1)) {
            this_00 = &field_896[(long)arg3];
            this_01 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>*)(*this)[(long)arg3];
            local_78 = this_00->find(arg1);
            local_48 = this_00->end();
            cVar1 = local_78 != local_48;
            if (cVar1) {
                lVar3 = local_78.HeapBeginPtr();
                pLVar6 = (Layout*)(lVar3 + 8);
                for (str2 = (eastl::string*)pLVar6->HeapBeginPtr();
                     pbVar4 = (eastl::string*)pLVar6->end(), str2 != pbVar4; str2 = str2 + 32) {
                    if (str == *str2) {
                        pLVar6->erase(str2);
                        cVar1 = pLVar6->empty();
                        if (cVar1) {
                            new (local_68) eastl::hashtable_iterator(&local_78);
                            local_48 = this_00->erase(local_68[0]);
                        }
                        local_48 = this_01->find(str);
                        local_88 = this_01->end();
                        cVar1 = local_48 != local_88;
                        if (cVar1) {
                            lVar3 = local_48.HeapBeginPtr();
                            pLVar6 = (Layout*)(lVar3 + 32);
                            puVar5 = (unsigned int*)pLVar6->HeapBeginPtr();
                            arg2 = (unsigned int*)pLVar6->end();
                            puVar5 = eastl::find<unsigned int const*, unsigned int>(puVar5, arg2, arg1);
                            pLVar6->erase(puVar5);
                            cVar1 = pLVar6->empty();
                            if (cVar1) {
                                new (local_58) eastl::hashtable_iterator(&local_48);
                                local_88 = this_01->erase(local_58[0]);
                            }
                        }
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x10001fb50
    uint32_t ObjTagManager::FindTagsById(unsigned int arg1, int arg2) {
        uint32_t uVar2;
        hashtable<
            unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
            eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        long lVar3;
        ReturnValue local_58;
        ReturnValue local_48;

        if (IsGroupValid(arg2) == '\0') {
            uVar2 = 0;
        } else {
            field_1808.clear();
            this_00 = &field_896[(long)arg2];
            local_48 = this_00->find(arg1);
            local_58 = this_00->end();
            uVar2 = local_48 != local_58;
            if ((char)uVar2 != '\0') {
                lVar3 = local_48.HeapBeginPtr();
                field_1808 = (*((lVar3 + 8)));
                field_1792 = 0;
            }
        }
        return uVar2;
    }

    // 0x10001fc00
    uint32_t ObjTagManager::FindTagsByGroup(int arg1) {
        bool cVar1;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        eastl::string* str;
        ReturnValue local_50;
        ReturnValue local_40;

        uint32_t uVar2 = IsGroupValid(arg1);
        if ((char)uVar2 != '\0') {
            field_1808.clear();
            this_00 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>*)(*this)[(long)arg1];
            local_40 = this_00->begin();
            local_50 = this_00->end();
            cVar1 = local_40 != local_50;
            if (cVar1) {
                do {
                    str = (eastl::string*)local_40.HeapBeginPtr();
                    field_1808.push_back(*str);
                    ++local_40;
                    cVar1 = local_40 != local_50;
                } while (cVar1);
            }
            field_1792 = 0;
        }
        return uVar2;
    }

    // 0x10001fcf0
    uint32_t ObjTagManager::FindIdsByTag(const eastl::string& str, int arg2) {
        uint32_t uVar2;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        long lVar3;
        ReturnValue local_50;
        ReturnValue local_40;

        if (IsGroupValid(arg2) == '\0') {
            uVar2 = 0;
        } else {
            field_1840.clear();
            this_00 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>*)(*this)[(long)arg2];
            local_40 = this_00->find(str);
            local_50 = this_00->end();
            uVar2 = local_40 != local_50;
            if ((char)uVar2 != '\0') {
                lVar3 = local_40.HeapBeginPtr();
                field_1840 = (*((lVar3 + 32)));
                field_1800 = 0;
            }
        }
        return uVar2;
    }

    // 0x10001fdf0
    uint64_t ObjTagManager::FindIdsByGroup(int arg1) {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        unsigned int* arg1_00;
        ReturnValue local_50;
        ReturnValue local_40;

        bool cVar1 = IsGroupValid(arg1);
        if (cVar1) {
            this_00 = &field_896[(long)arg1];
            cVar1 = this_00->empty();
            if (!cVar1) {
                field_1840.clear();
                local_50 = this_00->begin();
                local_40 = this_00->end();
                cVar1 = local_50 != local_40;
                if (cVar1) {
                    do {
                        arg1_00 = (unsigned int*)local_50.HeapBeginPtr();
                        field_1840.push_back(*arg1_00);
                        ++local_50;
                        cVar1 = local_50 != local_40;
                    } while (cVar1);
                }
                field_1800 = 0;
                return 1;
            }
        }
        return 0;
    }

    // 0x10001fee0
    char* ObjTagManager::GetNextTag() {
        char* pcVar3;

        unsigned long uVar1 = field_1792;
        unsigned long uVar2 = field_1808.size();
        if (uVar1 < uVar2) {
            uVar1 = field_1792;
            field_1792 = uVar1 + 1;
            field_1808[uVar1];
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            pcVar3 = "";
        }
        return pcVar3;
    }

    // 0x10001ff40
    void ObjTagManager::RestartFindTags() {
        field_1792 = 0;
    }

    // 0x10001ff60
    uint32_t ObjTagManager::GetNextId() {
        uint32_t* puVar4;

        unsigned long uVar1 = field_1800;
        unsigned long uVar3 = field_1840.size();
        uint32_t uVar2 = 4294967295;
        if (uVar1 < uVar3) {
            uVar1 = field_1800;
            field_1800 = uVar1 + 1;
            puVar4 = &field_1840[uVar1];
            uVar2 = *puVar4;
        }
        return uVar2;
    }

    // 0x10001ffc0
    void ObjTagManager::RestartFindIds() {
        field_1800 = 0;
    }

    // 0x100020030
    unsigned long ObjTagManager::AreTagsEmpty() {
        unsigned long arg1;
        uint64_t unaff_R15;

        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* phVar2 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*this)[0];
        bool cVar1 = phVar2->empty();
        bool bVar3 = true;
        if (cVar1) {
            arg1 = 1;
            do {
                bVar3 = arg1 - 1 < 15;
                if (arg1 == 16)
                    break;
                phVar2 = (hashtable<
                          eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                          eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                          eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                          eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*this)[arg1];
                cVar1 = phVar2->empty();
                arg1 = arg1 + 1;
            } while (cVar1);
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x1000200a0
    void ObjTagManager::LoadTags() {
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        unsigned long arg1;
        CharReader* charReader;
        long* plVar5;
        long lVar6;
        long lVar7;
        vector<unsigned char> local_320;
        string local_300;
        CharReaderBuilder local_2e0;
        unique_ptr<Json::CharReader> local_2b0;
        uint8_t local_2a8[8];

        *((local_2a8 + 8)) = GameShell3Cache::GetAccountDirectory();
        Filename local_168 = (*((local_2a8 + 8))) / "ObjTags.dat";
        ((local_2a8 + 8))->~pair();
        if (local_168.Exists()) {
            new (local_2a8) callstack::Callstack();
            new ((local_2a8 + 8)) File(local_168, local_2a8);
            if (local_2a8->IsValid()) {
                pLVar2 = logger::default_logger();
                pcVar3 = local_168.GetName();
                local_2e0 = local_2a8->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "objtags/ObjTagManager.cpp",
                            285, "Error reading obj tag file %s: %s", pcVar3, uVar4);
            }
            if (((local_2a8 + 8))->IsValid()) {
                arg1 = ((local_2a8 + 8))->length(nullptr);
                if (arg1 != 0) {
                    local_2e0 = Json::CharReaderBuilder();
                    charReader = local_2e0.newCharReader();
                    local_2b0.unique_ptr<true, void>(charReader);
                    local_2e0 = Json::Value(0);
                    local_300 = std::string();
                    local_320 = eastl::vector<unsigned char>(arg1, local_2e8);
                    ((local_2a8 + 8))->read(&local_320, (unsigned int)arg1, 0, nullptr);
                    plVar5 = (long*)local_2b0.operator->();
                    uVar4 = local_320.HeapBeginPtr();
                    lVar6 = local_320.HeapBeginPtr();
                    lVar7 = local_320.size();
                    if (!((**(void (**)(...))(*plVar5 + 16))(plVar5, uVar4, lVar6 + lVar7, &local_2e0, &local_300))) {
                        pLVar2 = logger::default_logger();
                        uVar4 = std::string::c_str(&local_300);
                        pLVar2->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/objtags/ObjTagManager.cpp",
                                    307, "Could not parse ObjTag JSON! Error: %s", uVar4);
                    } else {
                        DeserializeTags(local_2e0);
                    }
                    std::string::~string(&local_300);
                }
                ((local_2a8 + 8))->close(nullptr);
            }
            ((local_2a8 + 8))->~File();
        }
    }

    // 0x100020460
    void ObjTagManager::DeserializeTags(Json::Value& value) {
        unsigned int uVar3;
        Value* pVVar4;
        unsigned long uVar6;
        string* psVar7;
        char* str;
        unsigned int uVar8;
        unsigned long uVar9;
        eastl::string local_c0;
        ReturnValue local_a0;
        string local_80;
        unsigned long local_60;
        Value* local_58;
        unsigned long local_50;
        Value* local_48;
        Value* local_40;
        int local_34;

        if (value.size() != 0) {
            uVar9 = 0;
            local_48 = value;
            do {
                pVVar4 = &value[(unsigned int)uVar9];
                if (pVVar4->isMember("Group") != '\0') {
                    local_50 = uVar9;
                    local_34 = ((Value*)(*pVVar4)["Group"])->asInt();
                    local_58 = (Value*)(*pVVar4)["Tags"];
                    local_a0 = local_58->getMemberNames();
                    if (std::vector<std::string>::size(&local_a0) != 0) {
                        uVar9 = 0;
                        do {
                            local_60 = uVar9;
                            psVar7 = (string*)std::vector<std::string>::operator[](&local_a0, uVar9);
                            local_80 = std::string(psVar7);
                            local_40 = (Value*)(*local_58)[&local_80];
                            uVar8 = 0;
                            while (true) {
                                uVar3 = local_40->size();
                                if (uVar3 <= uVar8)
                                    break;
                                pVVar4 = (Value*)(*local_40)[uVar8];
                                uVar3 = pVVar4->asUInt();
                                str = (char*)std::string::c_str(&local_80);
                                local_c0 = eastl::string(str);
                                AddTag(uVar3, local_c0, local_34);
                                uVar8 = uVar8 + 1;
                            }
                            std::string::~string(&local_80);
                            uVar9 = (unsigned long)((int)local_60 + 1);
                            uVar6 = std::vector<std::string>::size(&local_a0);
                        } while (uVar9 < uVar6);
                    }
                    std::vector<std::string>::~vector(&local_a0);
                    uVar9 = local_50;
                    value = local_48;
                }
                uVar3 = (int)uVar9 + 1;
                uVar9 = (unsigned long)uVar3;
                uVar8 = value.size();
            } while (uVar3 < uVar8);
        }
    }

    // 0x1000206d0
    ObjTagManager* ObjTagManager::SerializeTags() {
        unsigned int arg1;
        bool cVar1;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        Value* pVVar2;
        long lVar3;
        unsigned int* puVar4;
        unsigned int* puVar5;
        array<eastl::hash_map<eastl::string, eastl::vector<unsigned int>>, 16ul>* in_RSI;
        Value local_c8;
        Value local_a0;
        ReturnValue local_78;
        ReturnValue local_68;
        char* local_58;
        Value* local_50;
        unsigned long local_48;

        unsigned long arg1_00 = 0;
        array<eastl::hash_map<eastl::string, eastl::vector<unsigned int>>, 16ul>* local_40 = in_RSI;
        new (this) Json::Value(0);
        do {
            this_00 = (hashtable<
                       eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*local_40)[arg1_00];
            cVar1 = this_00->empty();
            if (!cVar1) {
                local_a0 = Json::Value(0);
                local_c8 = Json::Value((int)arg1_00);
                pVVar2 = &local_a0["Group"];
                *pVVar2 = local_c8;
                pVVar2 = (Value*)append(local_a0);
                local_50 = (Value*)(*pVVar2)["Tags"];
                local_78 = this_00->begin();
                local_68 = this_00->end();
                local_48 = arg1_00;
                while (true) {
                    arg1_00 = local_48;
                    cVar1 = local_78 != local_68;
                    if (!cVar1)
                        break;
                    lVar3 = local_78.HeapBeginPtr();
                    local_58 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    puVar4 = (unsigned int*)((lVar3 + 32))->HeapBeginPtr();
                    puVar5 = (unsigned int*)((lVar3 + 32))->end();
                    for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                        arg1 = *puVar4;
                        pVVar2 = (Value*)(*local_50)[local_58];
                        local_c8 = Json::Value(arg1);
                        pVVar2->append(local_c8);
                    }
                    ++local_78;
                }
            }
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 16);
        return this;
    }

} // namespace jag::oldscape::objtags
