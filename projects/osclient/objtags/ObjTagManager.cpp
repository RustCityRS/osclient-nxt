// projects/osclient/objtags/ObjTagManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ObjTagManager.h"

namespace jag::oldscape::objtags {
    // 0x10001eaf0, 128 bytes, base-object constructor, placed by class name
    // ObjTagManager::ObjTagManager()
    void ObjTagManager::ObjTagManager() {
        new (this) std::array<
            eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>, eastl::hash<eastl::string>,
                            eastl::equal_to<eastl::string>, eastl::allocator, false>,
            16ul>();
        new (&field_896) std::array<
            eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>, eastl::hash<unsigned int>,
                            eastl::equal_to<unsigned int>, eastl::allocator, false>,
            16ul>();
        field_1792 = 0;
        field_1800 = 0;
        new (&field_1808) eastl::vector<eastl::string, eastl::allocator>();
        new (&field_1840) eastl::vector<unsigned int, eastl::allocator>();
    }

    // 0x10001ebb0, 16 bytes, complete-object constructor, placed by class name
    // ObjTagManager::ObjTagManager(): jumps straight to the base-object constructor

    // 0x10001ebc0, 128 bytes, base-object destructor, placed by class name
    // ObjTagManager::~ObjTagManager()
    void ObjTagManager::~ObjTagManager() {
        SaveTags(this);
        (&field_1840)->~vector();
        (&field_1808)->~vector();
        (&field_896)->~array();
        ~array();
    }

    // 0x10001ec40, 960 bytes, placed by class name
    // ObjTagManager::SaveTags()
    void ObjTagManager::SaveTags() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        Value* this_00;
        char* pcVar5;
        Value local_338[40];
        Value local_310[40];
        Error local_2e8[2];
        Value local_2e0[40];
        Value local_2b8[40];
        undefined1 local_290[8];
        File local_288[13];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ((local_290 + 8))->GetAccountDirectory();
        Filename::operator/(local_150, (char*)(local_290 + 8));
        ((local_290 + 8))->~pair();
        new (local_290) callstack::Callstack();
        cVar1 = AreTagsEmpty(this);
        if (cVar1 == '\0') {
            new ((local_290 + 8)) File(local_150, 1538, local_290);
            cVar1 = local_290->IsValid();
            if (cVar1 == '\0') {
                SerializeTags((ObjTagManager*)local_338);
                new (local_2e8) Json::StreamWriterBuilder();
                Json::Value::Value(local_310, 0);
                Json::Value::Value(local_2b8, "");
                this_00 = (Value*)Json::Value::operator[](local_310, "indentation");
                Json::Value::operator=(this_00, local_2b8);
                Json::Value::~Value(local_2b8);
                Json::Value::operator=(local_2e0, local_310);
                local_2b8->writeString(local_2e8, local_338);
                pcVar5 = (char*)local_2b8->c_str();
                ((local_290 + 8))->write(pcVar5, 0);
                ((local_290 + 8))->close(0);
                local_2b8->~string();
                Json::Value::~Value(local_310);
                local_2e8->~StreamWriterBuilder();
                Json::Value::~Value(local_338);
            } else {
                uVar2 = logger::default_logger();
                uVar3 = local_150->GetName();
                local_2e8->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/objtags/ObjTagManager.cpp",
                                    351, "Error creating Obj Tags file %s: %s", uVar3, uVar4);
                local_2e8->~basic_string();
            }
            ((local_290 + 8))->~File();
        } else {
            cVar1 = local_150->Exists();
            if (cVar1 != '\0') {
                local_150->RemoveFile(local_290);
                cVar1 = local_290->IsValid();
                if (cVar1 != '\0') {
                    uVar2 = logger::default_logger();
                    uVar3 = local_150->GetName();
                    ((local_290 + 8))->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar2, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/objtags/ObjTagManager.cpp",
                                        374, "Error deleting highlight file %s: %s", uVar3, uVar4);
                    ((local_290 + 8))->~basic_string();
                }
            }
        }
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10001f000, 16 bytes, complete-object destructor, placed by class name
    // ObjTagManager::~ObjTagManager(): jumps straight to the base-object destructor

    // 0x10001f010, 96 bytes, placed by class name
    // ObjTagManager::ResetAll()
    void ObjTagManager::ResetAll() {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        hashtable<unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                  eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_01;
        ulong uVar1;

        uVar1 = 0;
        do {
            this_00 = (hashtable<
                       eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                           eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
                                           false>,
                           16ul>::
                operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                  eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                  eastl::allocator, false>,
                                  16ul>*)this,
                           uVar1);
            eastl::hashtable<
                eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                eastl::allocator,
                eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(this_00);
            this_01 =
                (hashtable<
                    unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                    eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                    std::array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                               eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                               eastl::allocator, false>,
                               16ul>::
                    operator[]((array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                                      eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                      eastl::allocator, false>,
                                      16ul>*)&field_896,
                               uVar1);
            eastl::hashtable<
                unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                eastl::allocator,
                eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(this_01);
            uVar1 = uVar1 + 1;
        } while (uVar1 != 16);
    }

    // 0x10001f0f0, 80 bytes, placed by class name
    // ObjTagManager::ClearGroup(int)
    void ObjTagManager::ClearGroup(int param_1) {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        hashtable<unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                  eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_01;
        char cVar1;

        cVar1 = IsGroupValid(this, param_1);
        if (cVar1 != '\0') {
            this_00 = (hashtable<
                       eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                           eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
                                           false>,
                           16ul>::
                operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                  eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                  eastl::allocator, false>,
                                  16ul>*)this,
                           (long)param_1);
            eastl::hashtable<
                eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                eastl::allocator,
                eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(this_00);
            this_01 =
                (hashtable<
                    unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                    eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                    std::array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                               eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                               eastl::allocator, false>,
                               16ul>::
                    operator[]((array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                                      eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                      eastl::allocator, false>,
                                      16ul>*)&field_896,
                               (long)param_1);
            eastl::hashtable<
                unsigned int, eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                eastl::allocator,
                eastl::use_first<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(this_01);
        }
    }

    // 0x10001f150, 688 bytes, placed by class name
    // ObjTagManager::AddTag(unsigned int, eastl::string const&, int)
    void ObjTagManager::AddTag(uint param_1, basic_string* param_2, int param_3) {
        char cVar1;
        bool bVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_e0[16];
        basic_string local_d0[16];
        vector local_c0[32];
        uint local_a0[6];
        uint local_7c;
        hashtable_iterator_base local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_7c = param_1;
        cVar1 = IsGroupValid(this, param_3);
        if (cVar1 != '\0') {
            cVar1 = HasTag(this, local_7c, param_2, param_3);
            if (cVar1 == '\0') {
                bVar2 = eastl::operator==(param_2, (value_type*)"");
                if (!bVar2) {
                    std::array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                               eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                               eastl::allocator, false>,
                               16ul>::
                    operator[]((array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                                      eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                      eastl::allocator, false>,
                                      16ul>*)&field_896,
                               (ulong)param_3);
                    eastl::hashtable<
                        unsigned int,
                        eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
                        eastl::allocator,
                        eastl::use_first<
                            eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
                        eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)
                                                                                                             local_e0);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar2 = eastl::operator!=(local_e0, local_78, extraout_RDX);
                    if (bVar2) {
                        lVar3 = local_e0->HeapBeginPtr();
                        ((lVar3 + 8))->push_back(param_2);
                    } else {
                        new (local_78) eastl::string(param_2);
                        new (local_a0) eastl::allocator("EASTL vector");
                        eastl::vector<eastl::string, eastl::allocator>::vector(local_c0, local_78, 1, local_a0);
                        local_78->~basic_string();
                        eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>::pair<
                            unsigned int&, eastl::vector<eastl::string, eastl::allocator>&, void>(
                            (pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>*)local_78,
                            &local_7c, local_c0);
                        eastl::hashtable<
                            unsigned int,
                            eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                            eastl::allocator,
                            eastl::use_first<
                                eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::insert((pair*)local_a0);
                        local_78->~pair();
                        local_c0->~vector();
                    }
                    std::array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                               eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                               eastl::allocator, false>,
                               16ul>::
                    operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                      eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                      eastl::allocator, false>,
                                      16ul>*)this,
                               (ulong)param_3);
                    eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                                     eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                     eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::find(local_d0);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)local_d0, local_78, extraout_RDX_00);
                    if (bVar2) {
                        lVar3 = local_d0->HeapBeginPtr();
                        ((lVar3 + 32))->push_back(&local_7c);
                    } else {
                        local_a0[0] = local_7c;
                        new (local_78) eastl::allocator("EASTL vector");
                        eastl::vector<unsigned int, eastl::allocator>::vector(local_c0, local_a0, 1,
                                                                              (allocator*)local_78);
                        eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>::pair<
                            eastl::vector<unsigned int, eastl::allocator>&, void>(
                            (pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>*)local_78, param_2,
                            local_c0);
                        eastl::hashtable<eastl::string,
                                         eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                                         eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst,
                                                                      eastl::vector<unsigned int, eastl::allocator>>>,
                                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::insert((pair*)local_a0);
                        local_78->~pair();
                        local_c0->~vector();
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10001f400, 224 bytes, placed by class name
    // ObjTagManager::HasTag(unsigned int, eastl::string const&, int)
    ulong ObjTagManager::HasTag(uint param_1, basic_string* param_2, int param_3) {
        long lVar2;
        basic_string* pbVar3;
        basic_string* pbVar4;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar5;
        eastl local_60[16];
        hashtable_iterator_base local_50[36];
        uint local_2c;

        local_2c = param_1;
        std::array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                   eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, eastl::allocator, false>,
                   16ul>::
        operator[](
            (array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                   eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, eastl::allocator, false>,
                   16ul>*)&field_896,
            (long)param_3);
        eastl::hashtable<
            unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
            eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)local_60);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_60, local_50, extraout_RDX)) {
            lVar2 = local_60->HeapBeginPtr();
            new (local_50) eastl::vector<eastl::string, eastl::allocator>((vector*)(lVar2 + 8));
            pbVar3 = (basic_string*)local_50->HeapBeginPtr();
            pbVar4 = (basic_string*)local_50->end();
            pbVar3 = eastl::find<eastl::string*, eastl::string>(pbVar3, pbVar4, param_2);
            pbVar4 = (basic_string*)local_50->end();
            uVar5 = CONCAT71((int7)((ulong)pbVar3 >> 8), pbVar3 != pbVar4);
            local_50->~vector();
        } else {
            uVar5 = 0;
        }
        return uVar5 & 4294967295;
    }

    // 0x10001f700, 256 bytes, placed by class name
    // ObjTagManager::DeleteTag(eastl::string const&, int)
    ulong ObjTagManager::DeleteTag(basic_string* param_1, int param_2) {
        bool bVar2;
        undefined7 extraout_var;
        ulong uVar3;
        long lVar4;
        uint* puVar5;
        uint* puVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_68[32];
        basic_string local_48[20];
        uint local_34;

        if (IsGroupValid(this, param_2) == '\0') {
            uVar3 = 0;
        } else {
            std::array<
                eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                         eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                         eastl::allocator, false>,
                                         16ul>*)this,
                                  (long)param_2);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_48);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=((eastl*)local_48, local_68, extraout_RDX);
            uVar3 = CONCAT71(extraout_var, bVar2);
            if (bVar2) {
                local_34 = (uint)uVar3;
                lVar4 = local_48->HeapBeginPtr();
                new (local_68) eastl::vector<unsigned int, eastl::allocator>((vector*)(lVar4 + 32));
                puVar5 = (uint*)local_68->HeapBeginPtr();
                puVar6 = (uint*)local_68->end();
                if (puVar5 != puVar6) {
                    do {
                        RemoveTagFromObj(this, *puVar5, param_1, param_2);
                        puVar5 = puVar5 + 1;
                        puVar6 = (uint*)local_68->end();
                    } while (puVar5 != puVar6);
                }
                local_68->~vector();
                uVar3 = (ulong)local_34;
            }
        }
        return uVar3;
    }

    // 0x10001f810, 464 bytes, placed by class name
    // ObjTagManager::RemoveTagFromObj(unsigned int, eastl::string const&, int)
    undefined8 ObjTagManager::RemoveTagFromObj(uint param_1, basic_string* param_2, int param_3) {
        char cVar1;
        bool bVar2;
        char extraout_AL;
        undefined8 uVar3;
        undefined8 uVar4;
        long lVar5;
        basic_string* pbVar6;
        basic_string* pbVar7;
        undefined7 extraout_var;
        uint* puVar8;
        uint* puVar9;
        undefined7 extraout_var_00;
        undefined7 extraout_var_01;
        undefined7 uVar10;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        Layout* pLVar11;
        hashtable_iterator_base local_88[16];
        eastl local_78[16];
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        undefined8 local_50;
        hashtable_iterator_base local_48[20];
        uint local_34;

        local_34 = param_1;
        cVar1 = IsGroupValid(this, param_3);
        if ((cVar1 != '\0') && (cVar1 = HasTag(this, local_34, param_2, param_3), cVar1 != '\0')) {
            uVar3 = std::array<
                eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>, eastl::hash<unsigned int>,
                                eastl::equal_to<unsigned int>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                                         eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                         eastl::allocator, false>,
                                         16ul>*)&field_896,
                                  (long)param_3);
            uVar4 = std::array<
                eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                         eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                         eastl::allocator, false>,
                                         16ul>*)this,
                                  (long)param_3);
            eastl::hashtable<
                unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
                eastl::allocator,
                eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
                eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)local_78);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=(local_78, local_48, extraout_RDX);
            if (bVar2) {
                lVar5 = local_78->HeapBeginPtr();
                pLVar11 = (Layout*)(lVar5 + 8);
                for (pbVar6 = (basic_string*)eastl::basic_string<
                         char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                             eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                     pbVar7 = (basic_string*)pLVar11->end(), pbVar6 != pbVar7; pbVar6 = pbVar6 + 32) {
                    bVar2 = eastl::operator==(param_2, pbVar6);
                    if (bVar2) {
                        pLVar11->erase(pbVar6);
                        cVar1 = pLVar11->empty();
                        if (cVar1 != '\0') {
                            new (&local_68)
                                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                                    local_78);
                            eastl::hashtable<
                                unsigned int,
                                eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                eastl::allocator,
                                eastl::use_first<
                                    eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>>,
                                eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::erase(local_48, uVar3, local_68, local_60);
                        }
                        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>,
                                         eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::find((basic_string*)local_48);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar2 = eastl::operator!=((eastl*)local_48, local_88, extraout_RDX_00);
                        uVar10 = extraout_var;
                        if (bVar2) {
                            lVar5 = local_48->HeapBeginPtr();
                            pLVar11 = (Layout*)(lVar5 + 32);
                            puVar8 = (uint*)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                            puVar9 = (uint*)pLVar11->end();
                            puVar8 = eastl::find<unsigned int const*, unsigned int>(puVar8, puVar9, &local_34);
                            pLVar11->erase(puVar8);
                            pLVar11->empty();
                            uVar10 = extraout_var_00;
                            if (extraout_AL != '\0') {
                                new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>,
                                                                          false, false>(local_48);
                                eastl::hashtable<
                                    eastl::string,
                                    eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                                    eastl::allocator,
                                    eastl::use_first<
                                        eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                    eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                    false, true, true>::erase(local_88, uVar4, local_58, local_50);
                                uVar10 = extraout_var_01;
                            }
                        }
                        return CONCAT71(uVar10, 1);
                    }
                }
            }
        }
        return 0;
    }

    // 0x10001fb50, 176 bytes, placed by class name
    // ObjTagManager::FindTagsById(unsigned int, int)
    ulong ObjTagManager::FindTagsById(uint param_1, int param_2) {
        bool bVar2;
        undefined7 extraout_var;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar4;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];
        uint local_34;

        local_34 = param_1;
        if (IsGroupValid(this, param_2) == '\0') {
            uVar4 = 0;
        } else {
            (&field_1808)->clear();
            std::array<
                eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>, eastl::hash<unsigned int>,
                                eastl::equal_to<unsigned int>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                                         eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                         eastl::allocator, false>,
                                         16ul>*)&field_896,
                                  (long)param_2);
            eastl::hashtable<
                unsigned int, eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>,
                eastl::allocator,
                eastl::use_first<eastl::pair<unsigned int const, game::BuildCombinedLocationRequestData_PerModelData>>,
                eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)local_48);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=(local_48, local_58, extraout_RDX);
            uVar4 = CONCAT71(extraout_var, bVar2) & 4294967295;
            if (bVar2) {
                lVar3 = local_48->HeapBeginPtr();
                eastl::vector<eastl::string, eastl::allocator>::operator=(
                    (vector<eastl::string, eastl::allocator>*)&field_1808, (vector*)(lVar3 + 8));
                field_1792 = 0;
            }
        }
        return uVar4;
    }

    // 0x10001fc00, 208 bytes, placed by class name
    // ObjTagManager::FindTagsByGroup(int)
    undefined4 ObjTagManager::FindTagsByGroup(int param_1) {
        bool bVar1;
        undefined4 uVar2;
        basic_string* pbVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base local_50[16];
        eastl local_40[16];

        uVar2 = IsGroupValid(this, param_1);
        if ((char)uVar2 != '\0') {
            (&field_1808)->clear();
            std::array<
                eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                         eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                         eastl::allocator, false>,
                                         16ul>*)this,
                                  (long)param_1);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=(local_40, local_50, extraout_RDX);
            if (bVar1) {
                do {
                    pbVar3 = (basic_string*)local_40->HeapBeginPtr();
                    (&field_1808, pbVar3)->push_back();
                    eastl::hashtable_iterator<
                        eastl::pair<unsigned long long const, LRUHashCacheWrapper<DBTableIndex, unsigned long long>>,
                        false, false>::
                    operator++((hashtable_iterator<eastl::pair<unsigned long long const,
                                                               LRUHashCacheWrapper<DBTableIndex, unsigned long long>>,
                                                   false, false>*)local_40);
                    bVar1 = eastl::operator!=(local_40, local_50, extraout_RDX_00);
                } while (bVar1);
            }
            field_1792 = 0;
        }
        return uVar2;
    }

    // 0x10001fcf0, 176 bytes, placed by class name
    // ObjTagManager::FindIdsByTag(eastl::string const&, int)
    ulong ObjTagManager::FindIdsByTag(basic_string* param_1, int param_2) {
        bool bVar2;
        undefined7 extraout_var;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar4;
        hashtable_iterator_base local_50[16];
        basic_string local_40[16];

        if (IsGroupValid(this, param_2) == '\0') {
            uVar4 = 0;
        } else {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            std::array<
                eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                         eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                         eastl::allocator, false>,
                                         16ul>*)this,
                                  (long)param_2);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_40);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=((eastl*)local_40, local_50, extraout_RDX);
            uVar4 = CONCAT71(extraout_var, bVar2) & 4294967295;
            if (bVar2) {
                lVar3 = local_40->HeapBeginPtr();
                eastl::vector<unsigned int, eastl::allocator>::operator=(
                    (vector<unsigned int, eastl::allocator>*)&field_1840, (vector*)(lVar3 + 32));
                field_1800 = 0;
            }
        }
        return uVar4;
    }

    // 0x10001fdf0, 224 bytes, placed by class name
    // ObjTagManager::FindIdsByGroup(int)
    undefined8 ObjTagManager::FindIdsByGroup(int param_1) {
        char cVar1;
        bool bVar2;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        undefined7 extraout_var;
        uint* puVar3;
        undefined7 extraout_var_00;
        undefined7 uVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[16];
        hashtable_iterator_base local_40[16];

        cVar1 = IsGroupValid(this, param_1);
        if (cVar1 != '\0') {
            this_00 = (hashtable<
                       eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<
                    eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                    eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, eastl::allocator, false>,
                    16ul>::
                operator[]((array<eastl::hash_map<unsigned int, eastl::vector<eastl::string, eastl::allocator>,
                                                  eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                  eastl::allocator, false>,
                                  16ul>*)&field_896,
                           (long)param_1);
            cVar1 = eastl::hashtable<
                eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                eastl::allocator,
                eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::empty(this_00);
            if (cVar1 == '\0') {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator!=(local_50, local_40, extraout_RDX);
                uVar4 = extraout_var;
                if (bVar2) {
                    do {
                        puVar3 = (uint*)local_50->HeapBeginPtr();
                        (&field_1840, puVar3)->push_back();
                        eastl::hashtable_iterator<
                            eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false,
                            false>::
                        operator++((hashtable_iterator<
                                    eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                    false, false>*)local_50);
                        bVar2 = eastl::operator!=(local_50, local_40, extraout_RDX_00);
                        uVar4 = extraout_var_00;
                    } while (bVar2);
                }
                field_1800 = 0;
                return CONCAT71(uVar4, 1);
            }
        }
        return 0;
    }

    // 0x10001fee0, 96 bytes, placed by class name
    // ObjTagManager::GetNextTag()
    char* ObjTagManager::GetNextTag() {
        ulong uVar1;
        ulong uVar2;
        char* pcVar3;

        uVar1 = field_1792;
        uVar2 = (&field_1808)->size();
        if (uVar1 < uVar2) {
            uVar1 = field_1792;
            field_1792 = uVar1 + 1;
            eastl::vector<eastl::string, eastl::allocator>::operator[](
                (vector<eastl::string, eastl::allocator>*)&field_1808, uVar1);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            pcVar3 = "";
        }
        return pcVar3;
    }

    // 0x10001ff40, 32 bytes, placed by class name
    // ObjTagManager::RestartFindTags()
    void ObjTagManager::RestartFindTags() {
        field_1792 = 0;
    }

    // 0x10001ff60, 96 bytes, placed by class name
    // ObjTagManager::GetNextId()
    undefined4 ObjTagManager::GetNextId() {
        ulong uVar1;
        undefined4 uVar2;
        ulong uVar3;
        undefined4* puVar4;

        uVar1 = field_1800;
        uVar3 = (&field_1840)->size();
        uVar2 = 4294967295;
        if (uVar1 < uVar3) {
            uVar1 = field_1800;
            field_1800 = uVar1 + 1;
            puVar4 = (undefined4*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                (vector<unsigned int, eastl::allocator>*)&field_1840, uVar1);
            uVar2 = *puVar4;
        }
        return uVar2;
    }

    // 0x10001ffc0, 32 bytes, placed by class name
    // ObjTagManager::RestartFindIds()
    void ObjTagManager::RestartFindIds() {
        field_1800 = 0;
    }

    // 0x100020030, 112 bytes, placed by class name
    // ObjTagManager::AreTagsEmpty()
    ulong ObjTagManager::AreTagsEmpty() {
        char cVar1;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* phVar2;
        ulong uVar3;
        undefined8 unaff_R15;
        bool bVar4;

        phVar2 = (hashtable<
                  eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
            std::array<
                eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator, false>,
                16ul>::operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                         eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                         eastl::allocator, false>,
                                         16ul>*)this,
                                  0);
        cVar1 = eastl::hashtable<
            eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
            eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::empty(phVar2);
        bVar4 = true;
        if (cVar1 != '\0') {
            uVar3 = 1;
            do {
                bVar4 = uVar3 - 1 < 15;
                if (uVar3 == 16)
                    break;
                phVar2 =
                    (hashtable<eastl::string,
                               eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                               eastl::allocator,
                               eastl::use_first<
                                   eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                               eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        std::array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                   eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                   eastl::allocator, false>,
                                   16ul>::
                        operator[]((array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                                          eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                                          eastl::allocator, false>,
                                          16ul>*)this,
                                   uVar3);
                cVar1 = eastl::hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::empty(phVar2);
                uVar3 = uVar3 + 1;
            } while (cVar1 != '\0');
        }
        return (CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar4) ^ 1) & 4294967295;
    }

    // 0x1000200a0, 928 bytes, placed by class name
    // ObjTagManager::LoadTags()
    void ObjTagManager::LoadTags() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        ulong uVar5;
        CharReader* pCVar6;
        long* plVar7;
        long lVar8;
        long lVar9;
        vector<unsigned char, eastl::allocator> local_320[32];
        string local_300[24];
        allocator local_2e8[8];
        Error local_2e0[12];
        unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>> local_2b0[8];
        undefined1 local_2a8[320];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ((local_2a8 + 8))->GetAccountDirectory();
        Filename::operator/(local_168, (char*)(local_2a8 + 8));
        ((local_2a8 + 8))->~pair();
        cVar1 = local_168->Exists();
        if (cVar1 != '\0') {
            new (local_2a8) callstack::Callstack();
            new ((local_2a8 + 8)) File(local_168, local_2a8);
            cVar1 = local_2a8->IsValid();
            if (cVar1 != '\0') {
                uVar2 = logger::default_logger();
                uVar3 = local_168->GetName();
                local_2e0->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/objtags/ObjTagManager.cpp",
                                    285, "Error reading obj tag file %s: %s", uVar3, uVar4);
                local_2e0->~basic_string();
            }
            cVar1 = ((local_2a8 + 8))->IsValid();
            if (cVar1 != '\0') {
                uVar5 = ((local_2a8 + 8))->length(0);
                if (uVar5 != 0) {
                    new (local_2e0) Json::CharReaderBuilder();
                    pCVar6 = (CharReader*)local_2e0->newCharReader();
                    std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::unique_ptr<true, void>(
                        local_2b0, pCVar6);
                    local_2e0->~CharReaderBuilder();
                    new (local_2e0) Json::Value(0);
                    std::string::string(local_300);
                    eastl::allocator::allocator(local_2e8, "EASTL vector");
                    eastl::vector<unsigned char, eastl::allocator>::vector(local_320, uVar5, local_2e8);
                    ((local_2a8 + 8))->read(local_320, (uint)uVar5, 0, 0);
                    plVar7 =
                        (long*)std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::operator->(
                            local_2b0);
                    uVar2 = local_320->HeapBeginPtr();
                    lVar8 = local_320->HeapBeginPtr();
                    lVar9 = local_320->size();
                    cVar1 = (**(code**)(*plVar7 + 16))(plVar7, uVar2, lVar8 + lVar9, local_2e0, local_300);
                    if (cVar1 == '\0') {
                        uVar2 = logger::default_logger();
                        uVar3 = std::string::c_str(local_300);
                        logger::Logger::Log(uVar2, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/objtags/ObjTagManager.cpp",
                                            307, "Could not parse ObjTag JSON! Error: %s", uVar3);
                    } else {
                        DeserializeTags(this, (Value*)local_2e0);
                    }
                    eastl::vector<unsigned char, eastl::allocator>::~vector(local_320);
                    std::string::~string(local_300);
                    local_2e0->~Value();
                    std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::~unique_ptr(local_2b0);
                }
                ((local_2a8 + 8))->close(0);
            }
            ((local_2a8 + 8))->~File();
        }
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100020460, 512 bytes, placed by class name
    // ObjTagManager::DeserializeTags(Json::Value&)
    void ObjTagManager::DeserializeTags(Value* param_1) {
        string* psVar2;
        char* pcVar3;
        ulong uVar4;
        uint uVar7;
        Value* this_00;
        uint uVar8;
        ulong uVar9;
        eastl::string local_c0[32];
        vector<std::string, std::allocator<std::string>> local_a0[24];
        allocator local_88[8];
        string local_80[24];
        ulong local_60;
        Value* local_58;
        ulong local_50;
        Value* local_48;
        Value* local_40;
        int local_34;

        if (Json::Value::size(param_1) != 0) {
            uVar9 = 0;
            local_48 = param_1;
            do {
                this_00 = (Value*)Json::Value::operator[](param_1, (uint)uVar9);
                if (Json::Value::isMember(this_00, "Group") != '\0') {
                    local_50 = uVar9;
                    Json::Value::operator[](this_00, "Group");
                    local_34 = Json::Value::asInt();
                    local_58 = (Value*)Json::Value::operator[](this_00, "Tags");
                    Json::Value::getMemberNames();
                    if (std::vector<std::string, std::allocator<std::string>>::size(local_a0) != 0) {
                        uVar9 = 0;
                        do {
                            local_60 = uVar9;
                            psVar2 = (string*)std::vector<std::string, std::allocator<std::string>>::operator[](
                                local_a0, uVar9);
                            std::string::string(local_80, psVar2);
                            local_40 = (Value*)Json::Value::operator[](local_58, local_80);
                            uVar8 = 0;
                            while (true) {
                                uVar7 = Json::Value::size(local_40);
                                if (uVar7 <= uVar8)
                                    break;
                                Json::Value::operator[](local_40, uVar8);
                                uVar7 = Json::Value::asUInt();
                                pcVar3 = (char*)std::string::c_str(local_80);
                                eastl::allocator::allocator(local_88, "EASTL basic_string");
                                eastl::string::basic_string(local_c0, pcVar3, local_88);
                                AddTag((ObjTagManager*)this, uVar7, (basic_string*)local_c0, local_34);
                                eastl::string::~basic_string(local_c0);
                                uVar8 = uVar8 + 1;
                            }
                            std::string::~string(local_80);
                            uVar9 = (ulong)((int)local_60 + 1);
                            uVar4 = std::vector<std::string, std::allocator<std::string>>::size(local_a0);
                        } while (uVar9 < uVar4);
                    }
                    std::vector<std::string, std::allocator<std::string>>::~vector(local_a0);
                    uVar9 = local_50;
                    param_1 = local_48;
                }
                uVar7 = (int)uVar9 + 1;
                uVar9 = (ulong)uVar7;
                uVar8 = Json::Value::size(param_1);
            } while (uVar7 < uVar8);
        }
    }

    // 0x1000206d0, 512 bytes, placed by class name
    // ObjTagManager::SerializeTags()
    ObjTagManager* ObjTagManager::SerializeTags() {
        uint uVar1;
        char cVar2;
        bool bVar3;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        Value* pVVar4;
        long lVar5;
        uint* puVar6;
        uint* puVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar8;
        array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>, eastl::hash<eastl::string>,
                              eastl::equal_to<eastl::string>, eastl::allocator, false>,
              16ul>* in_RSI;
        ulong uVar9;
        Value local_c8[40];
        Value local_a0[40];
        hashtable_iterator<eastl::pair<unsigned long long const, LRUHashCacheWrapper<DBTableIndex, unsigned long long>>,
                           false, false>
            local_78[16];
        hashtable_iterator_base local_68[16];
        char* local_58;
        Value* local_50;
        ulong local_48;
        array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>, eastl::hash<eastl::string>,
                              eastl::equal_to<eastl::string>, eastl::allocator, false>,
              16ul>* local_40;
        ObjTagManager* local_38;

        uVar9 = 0;
        local_40 = in_RSI;
        local_38 = this;
        new (this) Json::Value(0);
        do {
            this_00 = (hashtable<
                       eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<eastl::string, eastl::vector<unsigned int, eastl::allocator>,
                                           eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
                                           false>,
                           16ul>::operator[](local_40, uVar9);
            cVar2 = eastl::hashtable<
                eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                eastl::allocator,
                eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::empty(this_00);
            if (cVar2 == '\0') {
                Json::Value::Value(local_a0, 0);
                Json::Value::Value(local_c8, (int)uVar9);
                pVVar4 = (Value*)Json::Value::operator[](local_a0, "Group");
                Json::Value::operator=(pVVar4, local_c8);
                Json::Value::~Value(local_c8);
                pVVar4 = (Value*)local_38->append(local_a0);
                local_50 = (Value*)Json::Value::operator[](pVVar4, "Tags");
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                phVar8 = extraout_RDX;
                local_48 = uVar9;
                while (true) {
                    uVar9 = local_48;
                    bVar3 = eastl::operator!=((eastl*)local_78, local_68, phVar8);
                    if (!bVar3)
                        break;
                    lVar5 = local_78->HeapBeginPtr();
                    local_58 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    puVar6 = (uint*)((lVar5 + 32))->HeapBeginPtr();
                    puVar7 = (uint*)((lVar5 + 32))->end();
                    for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
                        uVar1 = *puVar6;
                        pVVar4 = (Value*)Json::Value::operator[](local_50, local_58);
                        Json::Value::Value(local_c8, uVar1);
                        Json::Value::append(pVVar4, local_c8);
                        Json::Value::~Value(local_c8);
                    }
                    eastl::hashtable_iterator<
                        eastl::pair<unsigned long long const, LRUHashCacheWrapper<DBTableIndex, unsigned long long>>,
                        false, false>::operator++(local_78);
                    phVar8 = extraout_RDX_00;
                }
                Json::Value::~Value(local_a0);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 != 16);
        return local_38;
    }

} // namespace jag::oldscape::objtags
