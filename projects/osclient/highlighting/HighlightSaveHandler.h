// projects/osclient/highlighting/HighlightSaveHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightSaveHandler {
    public:
        HighlightSaveHandler();
        ~HighlightSaveHandler();
        void SaveChanges(
            const eastl::hash_map<eastl::string, unsigned int>& arg1,
            const eastl::hash_map<int, HighlightedGroup>& arg2, const eastl::hash_map<int, HighlightedGroup>& arg3,
            const eastl::hash_map<int, HighlightedGroup>& arg4, const eastl::hash_map<OpGroup, HighlightedGroup>& arg5,
            const std::array<eastl::hash_map<long long, unsigned int>, 25600ul>& maps1,
            const std::array<eastl::hash_map<long long, unsigned int>, 25600ul>& maps2,
            const std::array<eastl::hash_map<int, unsigned int>, 25600ul>& maps3,
            const std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>& highlightChannelPropertiesss);
        void OnHighlightUpdate(HighlightCategory highlightCategory);
        void OnHighlightUpdate(HighlightCategory highlightCategory, const rs2lib::CoordMapSquare& coordMapSquare);
        void OnHighlightUpdate(HighlightCategory highlightCategory, unsigned char arg2, unsigned char arg3);
        void LoadAllFromFiles(HighlightManager& highlightManager);

        uint8_t _unknown_0[448];
    };

    // 0x10002a4f0
    HighlightSaveHandler::HighlightSaveHandler() {
        new (&field_40) eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul>();
        new (&field_240) eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul>();
        new (&field_440) eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul>();
    }

    // 0x10002ab00
    HighlightSaveHandler::~HighlightSaveHandler() {
        field_440.~fixed_vector();
        field_240.~fixed_vector();
        field_40.~fixed_vector();
    }

    // 0x100039fd0
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_9::operator()(const eastl::string& str,
                                                                                    int arg2) const {
        unsigned int arg2_00;
        string local_38;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(&local_38, str_00);
        stringstream local_150(&local_38, arg2_00);
        std::string::~string(&local_38);
        int arg1 = ParseInt((basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_150);
        if (-1 < arg1) {
            (*this)->AddNPCTypeHighlight(arg1, arg2, true);
        }
        std::stringstream::~stringstream(&local_150);
    }

    // 0x10003ae90
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_10::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        unsigned int arg2_00;
        string local_38;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(&local_38, str_00);
        stringstream local_150(&local_38, arg2_00);
        std::string::~string(&local_38);
        int arg1 = ParseInt((basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_150);
        if (-1 < arg1) {
            (*this)->AddLocTypeHighlight(arg1, arg2, true);
        }
        std::stringstream::~stringstream(&local_150);
    }

    // 0x10003b840
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_11::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        unsigned int arg2_00;
        string local_38;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(&local_38, str_00);
        stringstream local_150(&local_38, arg2_00);
        std::string::~string(&local_38);
        int arg1 = ParseInt((basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_150);
        if (-1 < arg1) {
            (*this)->AddObjTypeHighlight(arg1, arg2, true);
        }
        std::stringstream::~stringstream(&local_150);
    }

    // 0x10003c1f0
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_12::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        unsigned int arg2_00;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_190.string<decltype(nullptr)>(str_00);
        stringstream local_2a8(&local_190, arg2_00);
        OpGroup local_190 = OpGroup::Create(str, false);
        if (local_190.IsBlank() == '\0') {
            (*this)->AddOpGroupHighlight(local_190, arg2, true);
        }
        std::stringstream::~stringstream(&local_2a8);
    }

    // 0x10003cbe0
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_13::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        (*this)->AddPlayerHighlight(str, arg2, true);
    }

    // 0x10003d4f0
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_14::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        HighlightManager* this_00;
        unsigned int arg2_00;
        stringstream local_150;
        CoordGrid local_38;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_38.string<decltype(nullptr)>(str_00);
        new (&local_150) std::stringstream(&local_38, arg2_00);
        int arg1 = ParseCoordinate(
            (basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_150, *field_0, *field_8);
        if (arg1 != -1) {
            this_00 = field_16;
            local_38 = rs2lib::CoordGrid(arg1);
            this_00->AddTileHighlight(local_38, arg2, true, false);
        }
        std::stringstream::~stringstream(&local_150);
    }

    // 0x10003deb0
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_15::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        HighlightManager* this_00;
        unsigned int arg2_00;
        stringstream local_158;
        CoordGrid local_40;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_40.string<decltype(nullptr)>(str_00);
        new (&local_158) std::stringstream(&local_40, arg2_00);
        int arg1 = ParseCoordinate(
            (basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_158, *field_0, *field_8);
        int arg1_00 = ParseInt((basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_158);
        if ((arg1 != -1) && (-2 < arg1_00)) {
            this_00 = field_16;
            local_40 = rs2lib::CoordGrid(arg1);
            this_00->AddLocHighlight(arg1_00, local_40, arg2, true, false);
        }
        std::stringstream::~stringstream(&local_158);
    }

    // 0x10003e8a0
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_16::operator()(const eastl::string& str,
                                                                                     int arg2) const {
        HighlightManager* this_00;
        unsigned int arg2_00;
        stringstream local_158;
        CoordGrid local_40;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_40.string<decltype(nullptr)>(str_00);
        new (&local_158) std::stringstream(&local_40, arg2_00);
        int arg1 = ParseCoordinate(
            (basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_158, *field_0, *field_8);
        int arg1_00 = ParseInt((basic_stringstream<char, std::char_traits<char>, std::allocator<char> _>*)&local_158);
        if ((arg1 != -1) && (-2 < arg1_00)) {
            this_00 = field_16;
            local_40 = rs2lib::CoordGrid(arg1);
            this_00->AddObjHighlight(arg1_00, local_40, arg2, true, false);
        }
        std::stringstream::~stringstream(&local_158);
    }

    // 0x10003f300
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_17::operator()(File& file,
                                                                                                int arg2) const {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        int* piVar5;
        CoordGrid local_88;
        eastl local_58;
        obj_iterator local_48;

        eastl::string local_78;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_58 = (eastl[16])this_00->begin();
        &local_48 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            do {
                piVar5 = (int*)local_58.HeapBeginPtr();
                if ((piVar5[1] & 1 << ((uint8_t)arg2 & 31)) != 0) {
                    local_88 = rs2lib::CoordGrid(*piVar5);
                    uVar2 = local_88.GetX();
                    uVar3 = local_88.GetLocalX();
                    uVar4 = local_88.GetLocalZ();
                    local_78.append_sprintf(" %d,%d,%d\n", (unsigned long)uVar2, (unsigned long)uVar3,
                                            (unsigned long)uVar4);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
        file.write(&local_78, nullptr);
    }

    // 0x10003fd70
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_18::operator()(File& file,
                                                                                                int arg2) const {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        long long* plVar6;
        CoordGrid local_90;
        eastl local_60;
        obj_iterator local_50;

        eastl::string local_80;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_60 = (eastl[16])this_00->begin();
        &local_50 = (obj_iterator[16])this_00->end();
        unsigned int local_34 = 1 << ((uint8_t)arg2 & 31);
        bool cVar1 = local_60 != local_50;
        if (cVar1) {
            do {
                plVar6 = (long long*)local_60.HeapBeginPtr();
                if ((*(unsigned int*)(plVar6 + 1) & local_34) != 0) {
                    CoordFromStaticEntityKey((long long)&local_90);
                    uVar2 = CreactionCycleFromNPCKey(*plVar6);
                    uVar3 = local_90.GetX();
                    uVar4 = local_90.GetLocalX();
                    uVar5 = local_90.GetLocalZ();
                    local_80.append_sprintf(" %d,%d,%d,%d\n", (unsigned long)uVar3, (unsigned long)uVar4,
                                            (unsigned long)uVar5, (unsigned long)uVar2);
                }
                ++local_60;
                cVar1 = local_60 != local_50;
            } while (cVar1);
        }
        file.write(&local_80, nullptr);
    }

    // 0x1000407b0
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_19::operator()(File& file,
                                                                                                int arg2) const {
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        long long* plVar6;
        CoordGrid local_90;
        eastl local_60;
        obj_iterator local_50;

        eastl::string local_80;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_60 = (eastl[16])this_00->begin();
        &local_50 = (obj_iterator[16])this_00->end();
        unsigned int local_34 = 1 << ((uint8_t)arg2 & 31);
        bool cVar1 = local_60 != local_50;
        if (cVar1) {
            do {
                plVar6 = (long long*)local_60.HeapBeginPtr();
                if ((*(unsigned int*)(plVar6 + 1) & local_34) != 0) {
                    CoordFromStaticEntityKey((long long)&local_90);
                    uVar2 = CreactionCycleFromNPCKey(*plVar6);
                    uVar3 = local_90.GetX();
                    uVar4 = local_90.GetLocalX();
                    uVar5 = local_90.GetLocalZ();
                    local_80.append_sprintf(" %d,%d,%d,%d\n", (unsigned long)uVar3, (unsigned long)uVar4,
                                            (unsigned long)uVar5, (unsigned long)uVar2);
                }
                ++local_60;
                cVar1 = local_60 != local_50;
            } while (cVar1);
        }
        file.write(&local_80, nullptr);
    }

    // 0x1000411f0
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_20::operator()(File& file,
                                                                                                int arg2) const {
        unsigned int* puVar2;
        eastl local_58;
        obj_iterator local_48;

        eastl::string local_78;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_58 = (eastl[16])this_00->begin();
        &local_48 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            do {
                puVar2 = (unsigned int*)local_58.HeapBeginPtr();
                if ((puVar2[2] & 1 << ((uint8_t)arg2 & 31)) != 0) {
                    local_78.append_sprintf(" %d\n", (unsigned long)*puVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
        file.write(&local_78, nullptr);
    }

    // 0x100041bf0
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_21::operator()(File& file,
                                                                                                int arg2) const {
        unsigned int* puVar2;
        eastl local_58;
        obj_iterator local_48;

        eastl::string local_78;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_58 = (eastl[16])this_00->begin();
        &local_48 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            do {
                puVar2 = (unsigned int*)local_58.HeapBeginPtr();
                if ((puVar2[2] & 1 << ((uint8_t)arg2 & 31)) != 0) {
                    local_78.append_sprintf(" %d\n", (unsigned long)*puVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
        file.write(&local_78, nullptr);
    }

    // 0x1000425f0
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_22::operator()(File& file,
                                                                                                int arg2) const {
        unsigned int* puVar2;
        eastl local_58;
        obj_iterator local_48;

        eastl::string local_78;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_58 = (eastl[16])this_00->begin();
        &local_48 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            do {
                puVar2 = (unsigned int*)local_58.HeapBeginPtr();
                if ((puVar2[2] & 1 << ((uint8_t)arg2 & 31)) != 0) {
                    local_78.append_sprintf(" %d\n", (unsigned long)*puVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
        file.write(&local_78, nullptr);
    }

    // 0x100042ff0
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_23::operator()(File& file,
                                                                                                int arg2) const {
        OpGroup* this_01;
        uint64_t uVar2;
        ReturnValue local_98;
        eastl local_58;
        obj_iterator local_48;

        eastl::string local_78;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_58 = (eastl[16])this_00->begin();
        &local_48 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            do {
                this_01 = (OpGroup*)local_58.HeapBeginPtr();
                if ((*(unsigned int*)&this_01[1].field_24 & 1 << ((uint8_t)arg2 & 31)) != 0) {
                    local_98 = this_01->ToString();
                    uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_78.append_sprintf(" %s\n", uVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
        file.write(&local_78, nullptr);
    }

    // 0x100043a20
    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
        eastl::hash_map<OpGroup, HighlightedGroup> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_24::operator()(File& file,
                                                                                                int arg2) const {
        long lVar2;
        uint64_t uVar3;
        eastl local_58;
        obj_iterator local_48;

        eastl::string local_78;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>**)this;
        &local_58 = (eastl[16])this_00->begin();
        &local_48 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            do {
                lVar2 = local_58.HeapBeginPtr();
                if ((*(unsigned int*)(lVar2 + 32) & 1 << ((uint8_t)arg2 & 31)) != 0) {
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_78.append_sprintf(" %s\n", uVar3);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
        file.write(&local_78, nullptr);
    }

} // namespace jag::oldscape::highlight
