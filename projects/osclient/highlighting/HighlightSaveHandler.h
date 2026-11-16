// projects/osclient/highlighting/HighlightSaveHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightSaveHandler {
    public:
        HighlightSaveHandler();
        ~HighlightSaveHandler();
        void SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                         eastl::equal_to<eastl::string>, eastl::allocator, false> const&,
                         eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
                                         eastl::allocator, false> const&,
                         eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
                                         eastl::allocator, false> const&,
                         eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
                                         eastl::allocator, false> const&,
                         eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>,
                                         eastl::allocator, false> const&,
                         std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                    eastl::equal_to<long long>, eastl::allocator, false>,
                                    25600ul> const&,
                         std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                    eastl::equal_to<long long>, eastl::allocator, false>,
                                    25600ul> const&,
                         std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                    eastl::allocator, false>,
                                    25600ul> const&,
                         std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&);
        void OnHighlightUpdate(HighlightCategory);
        void OnHighlightUpdate(HighlightCategory, rs2lib::CoordMapSquare const&);
        void OnHighlightUpdate(HighlightCategory, unsigned char, unsigned char);
        void LoadAllFromFiles(HighlightManager&);

        // data members, from how the methods use this: 448 bytes
        char _unknown_0[448];
    };

    // 0x10000cf60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HighlightSaveHandler::HighlightSaveHandler(): jumps straight to the base-object constructor

    // 0x10000d080, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HighlightSaveHandler::~HighlightSaveHandler(): jumps straight to the base-object destructor

    // 0x10002a4f0, 112 bytes, base-object constructor, inline, placed by class name
    // HighlightSaveHandler::HighlightSaveHandler()
    void HighlightSaveHandler::HighlightSaveHandler() {
        new (&field_40) eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul, true, eastl::allocator>();
        new (&field_240) eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul, true, eastl::allocator>();
        new (&field_440) eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul, true, eastl::allocator>();
    }

    // 0x10002ab00, 64 bytes, base-object destructor, inline, placed by class name
    // HighlightSaveHandler::~HighlightSaveHandler()
    void HighlightSaveHandler::~HighlightSaveHandler() {
        (&field_440)->~fixed_vector();
        (&field_240)->~fixed_vector();
        (&field_40)->~fixed_vector();
    }

    // 0x100039fd0, 176 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_9::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_9::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_9::operator()(basic_string* param_1,
                                                                                    int param_2) {
        char* pcVar1;
        int iVar2;
        uint extraout_EDX;
        stringstream local_150[280];
        string local_38[24];

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(local_38, pcVar1);
        std::stringstream::stringstream(local_150, local_38, extraout_EDX);
        std::string::~string(local_38);
        iVar2 = ParseInt(local_150);
        if (-1 < iVar2) {
            (field_0, iVar2, param_2, true)->AddNPCTypeHighlight();
        }
        std::stringstream::~stringstream(local_150);
    }

    // 0x10003ae90, 176 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_10::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_10::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_10::operator()(basic_string* param_1,
                                                                                     int param_2) {
        char* pcVar1;
        int iVar2;
        uint extraout_EDX;
        stringstream local_150[280];
        string local_38[24];

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(local_38, pcVar1);
        std::stringstream::stringstream(local_150, local_38, extraout_EDX);
        std::string::~string(local_38);
        iVar2 = ParseInt(local_150);
        if (-1 < iVar2) {
            (field_0, iVar2, param_2, true)->AddLocTypeHighlight();
        }
        std::stringstream::~stringstream(local_150);
    }

    // 0x10003b840, 176 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_11::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_11::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_11::operator()(basic_string* param_1,
                                                                                     int param_2) {
        char* pcVar1;
        int iVar2;
        uint extraout_EDX;
        stringstream local_150[280];
        string local_38[24];

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(local_38, pcVar1);
        std::stringstream::stringstream(local_150, local_38, extraout_EDX);
        std::string::~string(local_38);
        iVar2 = ParseInt(local_150);
        if (-1 < iVar2) {
            (field_0, iVar2, param_2, true)->AddObjTypeHighlight();
        }
        std::stringstream::~stringstream(local_150);
    }

    // 0x10003c1f0, 240 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_12::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_12::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_12::operator()(basic_string* param_1,
                                                                                     int param_2) {
        char* pcVar1;
        uint extraout_EDX;
        stringstream local_2a8[280];
        OpGroup local_190;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>((string*)&local_190, pcVar1);
        std::stringstream::stringstream(local_2a8, (string*)&local_190, extraout_EDX);
        local_190.~string();
        local_190.Create(param_1, false);
        if (local_190.IsBlank() == '\0') {
            (field_0, &local_190, param_2, true)->AddOpGroupHighlight();
        }
        local_190.~OpGroup();
        std::stringstream::~stringstream(local_2a8);
    }

    // 0x10003cbe0, 32 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_13::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_13::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_13::operator()(basic_string* param_1,
                                                                                     int param_2) {
        (field_0, param_1, param_2, true)->AddPlayerHighlight();
    }

    // 0x10003d4f0, 208 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_14::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_14::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_14::operator()(basic_string* param_1,
                                                                                     int param_2) {
        HighlightManager* this_00;
        int iVar1;
        char* pcVar2;
        uint extraout_EDX;
        stringstream local_150[280];
        CoordGrid local_38;

        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>((string*)&local_38, pcVar2);
        std::stringstream::stringstream(local_150, (string*)&local_38, extraout_EDX);
        local_38.~string();
        iVar1 = ParseCoordinate(local_150, *field_0, *field_8);
        if (iVar1 != -1) {
            this_00 = field_16;
            new (&local_38) rs2lib::CoordGrid(iVar1);
            this_00->AddTileHighlight(&local_38, param_2, true, false);
        }
        std::stringstream::~stringstream(local_150);
    }

    // 0x10003deb0, 256 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_15::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_15::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_15::operator()(basic_string* param_1,
                                                                                     int param_2) {
        HighlightManager* this_00;
        int iVar1;
        int iVar2;
        char* pcVar3;
        uint extraout_EDX;
        stringstream local_158[280];
        CoordGrid local_40;

        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>((string*)&local_40, pcVar3);
        std::stringstream::stringstream(local_158, (string*)&local_40, extraout_EDX);
        local_40.~string();
        iVar1 = ParseCoordinate(local_158, *field_0, *field_8);
        iVar2 = ParseInt(local_158);
        if ((iVar1 != -1) && (-2 < iVar2)) {
            this_00 = field_16;
            new (&local_40) rs2lib::CoordGrid(iVar1);
            this_00->AddLocHighlight(iVar2, &local_40, param_2, true, false);
        }
        std::stringstream::~stringstream(local_158);
    }

    // 0x10003e8a0, 256 bytes, inline, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_16::operator()(eastl::string const&, int) const
    /* HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, int) const */

    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::$_16::operator()(basic_string* param_1,
                                                                                     int param_2) {
        HighlightManager* this_00;
        int iVar1;
        int iVar2;
        char* pcVar3;
        uint extraout_EDX;
        stringstream local_158[280];
        CoordGrid local_40;

        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>((string*)&local_40, pcVar3);
        std::stringstream::stringstream(local_158, (string*)&local_40, extraout_EDX);
        local_40.~string();
        iVar1 = ParseCoordinate(local_158, *field_0, *field_8);
        iVar2 = ParseInt(local_158);
        if ((iVar1 != -1) && (-2 < iVar2)) {
            this_00 = field_16;
            new (&local_40) rs2lib::CoordGrid(iVar1);
            this_00->AddObjHighlight(iVar2, &local_40, param_2, true, false);
        }
        std::stringstream::~stringstream(local_158);
    }

    // 0x10003f300, 288 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_17::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_17::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_17::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        int* piVar5;
        hashtable_iterator_base* extraout_RDX;
        CoordGrid local_88;
        eastl::string local_78[32];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        File* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_78);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_58 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_58, local_48, local_48._8_8_);
        if (bVar1) {
            do {
                piVar5 = (int*)local_58->HeapBeginPtr();
                if ((piVar5[1] & 1 << ((byte)param_2 & 31)) != 0) {
                    new (&local_88) rs2lib::CoordGrid(*piVar5);
                    uVar2 = local_88.GetX();
                    uVar3 = local_88.GetLocalX();
                    uVar4 = local_88.GetLocalZ();
                    eastl::string::append_sprintf((char*)local_78, "    %d,%d,%d\n", (ulong)uVar2, (ulong)uVar3,
                                                  (ulong)uVar4);
                }
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_58);
                bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
            } while (bVar1);
        }
        local_38->write(local_78, 0);
        eastl::string::~basic_string(local_78);
    }

    // 0x10003fd70, 320 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_18::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_18::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_18::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        longlong* plVar6;
        hashtable_iterator_base* extraout_RDX;
        CoordGrid local_90;
        eastl::string local_80[32];
        eastl local_60[16];
        hashtable_iterator_base local_50[16];
        File* local_40;
        uint local_34;

        local_40 = param_1;
        eastl::string::basic_string(local_80);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_60 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_50 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        local_34 = 1 << ((byte)param_2 & 31);
        bVar1 = eastl::operator!=(local_60, local_50, local_50._8_8_);
        if (bVar1) {
            do {
                plVar6 = (longlong*)local_60->HeapBeginPtr();
                if ((*(uint*)(plVar6 + 1) & local_34) != 0) {
                    CoordFromStaticEntityKey((highlight*)&local_90, *plVar6);
                    uVar2 = CreactionCycleFromNPCKey(*plVar6);
                    uVar3 = local_90.GetX();
                    uVar4 = local_90.GetLocalX();
                    uVar5 = local_90.GetLocalZ();
                    eastl::string::append_sprintf((char*)local_80, "    %d,%d,%d,%d\n", (ulong)uVar3, (ulong)uVar4,
                                                  (ulong)uVar5, (ulong)uVar2);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_60);
                bVar1 = eastl::operator!=(local_60, local_50, extraout_RDX);
            } while (bVar1);
        }
        local_40->write(local_80, 0);
        eastl::string::~basic_string(local_80);
    }

    // 0x1000407b0, 320 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_19::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_19::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_19::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        longlong* plVar6;
        hashtable_iterator_base* extraout_RDX;
        CoordGrid local_90;
        eastl::string local_80[32];
        eastl local_60[16];
        hashtable_iterator_base local_50[16];
        File* local_40;
        uint local_34;

        local_40 = param_1;
        eastl::string::basic_string(local_80);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_60 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_50 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        local_34 = 1 << ((byte)param_2 & 31);
        bVar1 = eastl::operator!=(local_60, local_50, local_50._8_8_);
        if (bVar1) {
            do {
                plVar6 = (longlong*)local_60->HeapBeginPtr();
                if ((*(uint*)(plVar6 + 1) & local_34) != 0) {
                    CoordFromStaticEntityKey((highlight*)&local_90, *plVar6);
                    uVar2 = CreactionCycleFromNPCKey(*plVar6);
                    uVar3 = local_90.GetX();
                    uVar4 = local_90.GetLocalX();
                    uVar5 = local_90.GetLocalZ();
                    eastl::string::append_sprintf((char*)local_80, "    %d,%d,%d,%d\n", (ulong)uVar3, (ulong)uVar4,
                                                  (ulong)uVar5, (ulong)uVar2);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_60);
                bVar1 = eastl::operator!=(local_60, local_50, extraout_RDX);
            } while (bVar1);
        }
        local_40->write(local_80, 0);
        eastl::string::~basic_string(local_80);
    }

    // 0x1000411f0, 256 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_20::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_20::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_20::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        uint* puVar2;
        hashtable_iterator_base* extraout_RDX;
        eastl::string local_78[32];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        File* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_78);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_58 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_58, local_48, local_48._8_8_);
        if (bVar1) {
            do {
                puVar2 = (uint*)local_58->HeapBeginPtr();
                if ((puVar2[2] & 1 << ((byte)param_2 & 31)) != 0) {
                    eastl::string::append_sprintf((char*)local_78, "    %d\n", (ulong)*puVar2);
                }
                eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)local_58);
                bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
            } while (bVar1);
        }
        local_38->write(local_78, 0);
        eastl::string::~basic_string(local_78);
    }

    // 0x100041bf0, 256 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_21::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_21::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_21::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        uint* puVar2;
        hashtable_iterator_base* extraout_RDX;
        eastl::string local_78[32];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        File* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_78);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_58 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_58, local_48, local_48._8_8_);
        if (bVar1) {
            do {
                puVar2 = (uint*)local_58->HeapBeginPtr();
                if ((puVar2[2] & 1 << ((byte)param_2 & 31)) != 0) {
                    eastl::string::append_sprintf((char*)local_78, "    %d\n", (ulong)*puVar2);
                }
                eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)local_58);
                bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
            } while (bVar1);
        }
        local_38->write(local_78, 0);
        eastl::string::~basic_string(local_78);
    }

    // 0x1000425f0, 256 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_22::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_22::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_22::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        uint* puVar2;
        hashtable_iterator_base* extraout_RDX;
        eastl::string local_78[32];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        File* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_78);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_58 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_58, local_48, local_48._8_8_);
        if (bVar1) {
            do {
                puVar2 = (uint*)local_58->HeapBeginPtr();
                if ((puVar2[2] & 1 << ((byte)param_2 & 31)) != 0) {
                    eastl::string::append_sprintf((char*)local_78, "    %d\n", (ulong)*puVar2);
                }
                eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)local_58);
                bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
            } while (bVar1);
        }
        local_38->write(local_78, 0);
        eastl::string::~basic_string(local_78);
    }

    // 0x100042ff0, 304 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_23::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_23::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_23::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        long lVar2;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined1 local_98[32];
        eastl::string local_78[32];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        File* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_78);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_58 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_58, local_48, local_48._8_8_);
        if (bVar1) {
            do {
                lVar2 = local_58->HeapBeginPtr();
                if ((*(uint*)(lVar2 + 360) & 1 << ((byte)param_2 & 31)) != 0) {
                    local_98->ToString();
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::string::append_sprintf((char*)local_78, "    %s\n", uVar3);
                    local_98->~basic_string();
                }
                eastl::hashtable_iterator<eastl::pair<OpGroup_const, HighlightedGroup>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<OpGroup_const, HighlightedGroup>, true, false>*)local_58);
                bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
            } while (bVar1);
        }
        local_38->write(local_78, 0);
        eastl::string::~basic_string(local_78);
    }

    // 0x100043a20, 256 bytes, inline, placed by class name
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_24::operator()(File&, int) const
    /* HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::basic_string<char,
   eastl::allocator>, unsigned int, eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::hash_map<int, HighlightedGroup, eastl::hash<int>,
   eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int,
   HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
   eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
   eastl::hash_map<OpGroup, HighlightedGroup,
   eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
   false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
   eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&,
   std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long
   long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int,
   eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&,
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>
   const&)::$_24::TEMPNAMEPLACEHOLDERVALUE(File&, int) const */

    void HighlightSaveHandler::SaveChanges(
        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                        eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
        eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                        false> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                   eastl::allocator, false>,
                   25600ul> const&,
        std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul> const&,
        std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::$_24::operator()(File* param_1,
                                                                                                int param_2) {
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        bool bVar1;
        long lVar2;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        eastl::string local_78[32];
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        File* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_78);
        this_00 = *(hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)this;
        local_58 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_58, local_48, local_48._8_8_);
        if (bVar1) {
            do {
                lVar2 = local_58->HeapBeginPtr();
                if ((*(uint*)(lVar2 + 32) & 1 << ((byte)param_2 & 31)) != 0) {
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::string::append_sprintf((char*)local_78, "    %s\n", uVar3);
                }
                eastl::hashtable_iterator<
                    eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                operator++(
                    (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                        false, false>*)local_58);
                bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
            } while (bVar1);
        }
        local_38->write(local_78, 0);
        eastl::string::~basic_string(local_78);
    }

} // namespace jag::oldscape::highlight
