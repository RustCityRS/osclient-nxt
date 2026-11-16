// projects/osclient/highlighting/HighlightManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "HighlightManager.h"
#include "libs/oldscape/jagex3/dash3d/AnimFrameSet.h"

namespace jag::oldscape::highlight {
    // 0x10000cbc0, 928 bytes, base-object constructor, placed by class name
    // HighlightManager::HighlightManager()
    void HighlightManager::HighlightManager() {
        undefined1* this_00;
        array<HighlightChannelProperties, 32ul>* this_01;
        array<HighlightChannelProperties, 32ul>* this_02;
        array<HighlightChannelProperties, 32ul>* this_03;
        array<HighlightChannelProperties, 32ul>* this_04;
        array<HighlightChannelProperties, 32ul>* this_05;
        array<HighlightChannelProperties, 32ul>* this_06;
        array<HighlightChannelProperties, 32ul>* this_07;
        array<HighlightChannelProperties, 32ul>* this_08;
        long lVar1;
        ulong uVar2;
        char cVar3;
        allocator local_38[8];

        new (this) HighlightSaveHandler();
        this_00 = &field_640;
        new (this_00) std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>();
        field_4096 = 0;
        field_4100 = 0;
        field_4104 = 0;
        field_4108 = 0;
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4112, local_38) eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                    eastl::equal_to<long long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4168, local_38) eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                                    eastl::equal_to<eastl::string>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4224, local_38)
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4280, local_38)
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4336, local_38)
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4392, local_38) eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>,
                                                    eastl::equal_to<OpGroup>, eastl::allocator, false>();
        new (&field_4448) std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                     eastl::equal_to<long long>, eastl::allocator, false>,
                                     25600ul>();
        new (&field_1438048) std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                        eastl::equal_to<long long>, eastl::allocator, false>,
                                        25600ul>();
        new (&field_2871648) std::array<
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
            25600ul>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4305248, local_38) eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                       eastl::equal_to<long long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4305304, local_38) eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                       eastl::equal_to<long long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_4305360, local_38)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_4305416 = 0;
        field_4305417 = false;
        field_4305418 = false;
        uVar2 = 0;
        this_01 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 0);
        this_02 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 2);
        this_03 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 4);
        this_04 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 6);
        this_05 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 7);
        this_06 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 1);
        this_07 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 3);
        this_08 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)this_00, 5);
        do {
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_01, uVar2);
            cVar3 = (char)uVar2;
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_02, uVar2);
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_03, uVar2);
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_04, uVar2);
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_05, uVar2);
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_06, uVar2);
            cVar3 = cVar3 + ' ';
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_07, uVar2);
            *(char*)(lVar1 + 10) = cVar3;
            lVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_08, uVar2);
            *(char*)(lVar1 + 10) = cVar3;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 32);
    }

    // 0x10000d090, 16 bytes, complete-object constructor, placed by class name
    // HighlightManager::HighlightManager(): jumps straight to the base-object constructor

    // 0x10000d0a0, 336 bytes, base-object destructor, placed by class name
    // HighlightManager::~HighlightManager()
    void HighlightManager::~HighlightManager() {
        SaveToFiles(this);
        (&field_4305360)->~hash_map();
        (&field_4305304)->~hash_map();
        (&field_4305248)->~hash_map();
        (&field_2871648)->~array();
        (&field_1438048)->~array();
        (&field_4448)->~array();
        (&field_4392)->~hash_map();
        (&field_4336)->~hash_map();
        (&field_4280)->~hash_map();
        (&field_4224)->~hash_map();
        (&field_4168)->~hash_map();
        (&field_4112)->~hash_map();
        ~HighlightSaveHandler();
    }

    // 0x10000d1f0, 96 bytes, placed by class name
    // HighlightManager::SaveToFiles()
    void HighlightManager::SaveToFiles() {
        SaveChanges((hash_map*)&field_4168, (hash_map*)&field_4224, (hash_map*)&field_4280, (hash_map*)&field_4336,
                    (hash_map*)&field_4392, (array*)&field_4448, (array*)&field_1438048, (array*)&field_2871648,
                    (array*)&field_640);
    }

    // 0x10000d260, 16 bytes, complete-object destructor, placed by class name
    // HighlightManager::~HighlightManager(): jumps straight to the base-object destructor

    // 0x10000dc40, 256 bytes, placed by class name
    // HighlightManager::ResetAll()
    void HighlightManager::ResetAll() {
        hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_00;
        hashtable<LoadingScreenScript::Keyframe*, eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>,
                  eastl::allocator, eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                  eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::hash<LoadingScreenScript::Keyframe*>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            phVar1;
        ulong uVar2;

        uVar2 = 0;
        do {
            this_00 = (hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>*)
                std::array<
                    eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                    25600ul>::operator[]((array<eastl::hash_map<int, unsigned int, eastl::hash<int>,
                                                                eastl::equal_to<int>, eastl::allocator, false>,
                                                25600ul>*)&field_2871648,
                                         uVar2);
            eastl::hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::clear(this_00);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 25600);
        uVar2 = 0;
        do {
            phVar1 = (hashtable<LoadingScreenScript::Keyframe*,
                                eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                                eastl::equal_to<LoadingScreenScript::Keyframe*>,
                                eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<
                    eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                    eastl::allocator, false>,
                    25600ul>::operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                                eastl::equal_to<long long>, eastl::allocator, false>,
                                                25600ul>*)&field_4448,
                                         uVar2);
            eastl::hashtable<LoadingScreenScript::Keyframe*,
                             eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                             eastl::equal_to<LoadingScreenScript::Keyframe*>,
                             eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(phVar1);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 25600);
        uVar2 = 0;
        do {
            phVar1 = (hashtable<LoadingScreenScript::Keyframe*,
                                eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                                eastl::equal_to<LoadingScreenScript::Keyframe*>,
                                eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<
                    eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                    eastl::allocator, false>,
                    25600ul>::operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                                eastl::equal_to<long long>, eastl::allocator, false>,
                                                25600ul>*)&field_1438048,
                                         uVar2);
            eastl::hashtable<LoadingScreenScript::Keyframe*,
                             eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                             eastl::equal_to<LoadingScreenScript::Keyframe*>,
                             eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(phVar1);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 25600);
        (&field_4112)->clear();
        (&field_4224)->clear();
        (&field_4280)->clear();
        (&field_4336)->clear();
        (&field_4168)->clear();
        (&field_4392)->clear();
        ResetRegionHighlights(this);
    }

    // 0x10000de50, 64 bytes, placed by class name
    // HighlightManager::ResetRegionHighlights()
    void HighlightManager::ResetRegionHighlights() {
        (&field_4305248)->clear();
        (&field_4305304)->clear();
        (&field_4305360)->clear();
    }

    // 0x10000de90, 80 bytes, placed by class name
    // HighlightManager::OnMapRebuild(int, int, int, int)
    void HighlightManager::OnMapRebuild(int param_1, int param_2, int param_3, int param_4) {
        field_4096 = param_1 >> 6;
        field_4104 = param_2 >> 6;
        field_4100 = param_3 + param_1 + -1 >> 6;
        field_4108 = param_2 + param_4 + -1 >> 6;
        if (param_3 + param_1 < 6401) {
            ResetRegionHighlights(this);
        }
    }

    // 0x10000dee0, 144 bytes, placed by class name
    // HighlightManager::ForEachLoadedMapSquare(std::function<void (rs2lib::CoordMapSquare const&)>)
    /* HighlightManager::ForEachLoadedMapSquare(std::function<void
   (rs2lib::CoordMapSquare const&)>) */

    void HighlightManager::ForEachLoadedMapSquare(function<void(rs2lib::CoordMapSquare_const&)>* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        undefined1 local_38[8];

        iVar3 = field_4096;
        if ((iVar3 < 100) && (iVar3 <= field_4100)) {
            do {
                iVar2 = field_4104;
                if (field_4104 <= field_4108) {
                    do {
                        new (local_38) sidebars::SideBarData(iVar3, iVar2);
                        std::function<void(rs2lib::CoordMapSquare_const&)>::operator()(param_2,
                                                                                       (CoordMapSquare*)local_38);
                        bVar1 = iVar2 < field_4108;
                        iVar2 = iVar2 + 1;
                    } while (bVar1);
                }
                bVar1 = iVar3 < field_4100;
                iVar3 = iVar3 + 1;
            } while (bVar1);
        }
    }

    // 0x10000df80, 1968 bytes, placed by class name
    // HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char, dash3d::EntityHighlightBitFlags)
    bool HighlightManager::ConfigureChannel(int param_2, uint param_3, undefined2 param_4, undefined2 param_5,
                                            int param_6, undefined2 param_7) {
        bool bVar1;
        char cVar2;
        int iVar3;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* this_01;
        undefined2* puVar4;
        longlong* plVar5;
        basic_string* pbVar6;
        long lVar7;
        Client* this_02;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        hashtable_iterator_base* extraout_RDX_05;
        hashtable_iterator_base* extraout_RDX_06;
        hashtable_iterator_base* extraout_RDX_07;
        hashtable_iterator_base* extraout_RDX_08;
        hashtable_iterator_base* extraout_RDX_09;
        hashtable_iterator_base* extraout_RDX_10;
        function<void(rs2lib::CoordMapSquare_const&)>* this_03;
        hashtable_iterator_base local_158[16];
        HighlightManager* local_148;
        uint* puStack_140;
        bool* local_138;
        HighlightManager* local_130;
        uint* puStack_128;
        bool* local_120;
        HighlightManager* local_118;
        uint* puStack_110;
        bool* local_108;
        uint local_fc;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        int local_d4;
        uint local_d0;
        bool local_c9;
        function<void(rs2lib::CoordMapSquare_const&)> local_c8[48];
        function<void(rs2lib::CoordMapSquare_const&)> local_98[48];
        function<void(rs2lib::CoordMapSquare_const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_d0 = param_3;
        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            133, "Highlight channel ID must be between 0 and %d (inclusive) - Got %d", 31,
                            (ulong)param_3);
        }
        local_d4 = param_6;
        this_00 = (array<HighlightChannelProperties, 32ul>*)
            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_2);
        local_fc = param_3;
        this_01 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
            this_00, (long)(int)param_3);
        local_c9 = (bool)this_01->IsEnabled();
        puVar4 = (undefined2*)std::array<HighlightChannelProperties, 32ul>::operator[](this_00, (long)(int)local_d0);
        *puVar4 = param_4;
        puVar4[1] = param_5;
        *(char*)(puVar4 + 2) = (char)local_d4;
        puVar4[4] = param_7;
        switch (param_2) {
        case 0:
            local_d4 = param_2;
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_e8) eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(0, 0);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_f8, local_158, extraout_RDX);
            if (bVar1) {
                do {
                    local_e8 = local_f8;
                    uStack_e0 = uStack_f0;
                    eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_e8);
                    lVar7 = local_f8.HeapBeginPtr();
                    cVar2 = EntityNeedsUpdateOnConfigureChannel(this, lVar7 + 8, 0, local_d0, local_c9);
                    if (cVar2 != '\0') {
                        plVar5 = (longlong*)local_f8.HeapBeginPtr();
                        UpdateUniqueNPCHighlightOrRemoveIfReused(this, *plVar5);
                    }
                    local_f8 = local_e8;
                    uStack_f0 = uStack_e0;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar1 = eastl::operator!=((eastl*)&local_f8, local_158, extraout_RDX_00);
                } while (bVar1);
            }
            param_2 = local_d4;
            break;
        case 1:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_01);
            if (bVar1) {
                do {
                    lVar7 = local_f8.HeapBeginPtr();
                    cVar2 = EntityNeedsUpdateOnConfigureChannel(this, (HighlightedGroup*)(lVar7 + 8), 1, local_d0,
                                                                local_c9);
                    if (cVar2 != '\0') {
                        UpdateCachedHighlights(this, (HighlightedGroup*)(lVar7 + 8));
                    }
                    eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)&local_f8);
                    bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_02);
                } while (bVar1);
            }
            break;
        case 3:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_03);
            if (bVar1) {
                do {
                    lVar7 = local_f8.HeapBeginPtr();
                    cVar2 = EntityNeedsUpdateOnConfigureChannel(this, (HighlightedGroup*)(lVar7 + 8), 3, local_d0,
                                                                local_c9);
                    if (cVar2 != '\0') {
                        UpdateCachedHighlights(this, (HighlightedGroup*)(lVar7 + 8));
                    }
                    eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)&local_f8);
                    bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_04);
                } while (bVar1);
            }
            break;
        case 5:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_05);
            if (bVar1) {
                do {
                    lVar7 = local_f8.HeapBeginPtr();
                    cVar2 = EntityNeedsUpdateOnConfigureChannel(this, (HighlightedGroup*)(lVar7 + 8), 5, local_d0,
                                                                local_c9);
                    if (cVar2 != '\0') {
                        UpdateCachedHighlights(this, (HighlightedGroup*)(lVar7 + 8));
                    }
                    eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)&local_f8);
                    bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_06);
                } while (bVar1);
            }
            break;
        case 6:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_07);
            if (bVar1) {
                do {
                    pbVar6 = (basic_string*)local_f8.HeapBeginPtr();
                    cVar2 = EntityNeedsUpdateOnConfigureChannel(this, pbVar6 + 32, 6, local_d0, local_c9);
                    if (cVar2 != '\0') {
                        UpdateUniquePlayerHighlight(this, pbVar6);
                    }
                    eastl::hashtable_iterator<
                        eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                    operator++((hashtable_iterator<
                                eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false,
                                false>*)&local_f8);
                    bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_08);
                } while (bVar1);
            }
            break;
        case 8:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_09);
            if (bVar1) {
                do {
                    lVar7 = local_f8.HeapBeginPtr();
                    cVar2 = EntityNeedsUpdateOnConfigureChannel(this, (HighlightedGroup*)(lVar7 + 360), 8, local_d0,
                                                                local_c9);
                    if (cVar2 != '\0') {
                        UpdateCachedHighlights(this, (HighlightedGroup*)(lVar7 + 360));
                    }
                    eastl::hashtable_iterator<eastl::pair<OpGroup_const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<OpGroup_const, HighlightedGroup>, true, false>*)&local_f8);
                    bVar1 = eastl::operator!=((eastl*)&local_f8, (hashtable_iterator_base*)&local_e8, extraout_RDX_10);
                } while (bVar1);
            }
        }
        this_02 = (Client*)Client::Instance();
        iVar3 = this_02->IsMapBuildRegionMode();
        if (iVar3 == 0) {
            if (param_2 == 7) {
                puStack_110 = &local_d0;
                local_108 = &local_c9;
                local_118 = this;
                std::function<void(rs2lib::CoordMapSquare_const&)>::function<
                    HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short,
                                                       unsigned char, dash3d::EntityHighlightBitFlags)::__2,
                    void>(local_c8);
                ForEachLoadedMapSquare(this, local_c8);
                this_03 = local_c8;
            } else if (param_2 == 4) {
                puStack_128 = &local_d0;
                local_120 = &local_c9;
                local_130 = this;
                std::function<void(rs2lib::CoordMapSquare_const&)>::function<
                    HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short,
                                                       unsigned char, dash3d::EntityHighlightBitFlags)::__1,
                    void>(local_98);
                ForEachLoadedMapSquare(this, local_98);
                this_03 = local_98;
            } else {
                if (param_2 != 2)
                    goto LAB_10000e6b9;
                puStack_140 = &local_d0;
                local_138 = &local_c9;
                local_148 = this;
                std::function<void(rs2lib::CoordMapSquare_const&)>::function<
                    HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short,
                                                       unsigned char, dash3d::EntityHighlightBitFlags)::__0,
                    void>(local_68);
                ForEachLoadedMapSquare(this, local_68);
                this_03 = local_68;
            }
            std::function<void(rs2lib::CoordMapSquare_const&)>::~function(this_03);
        } else {
            cVar2 = ShouldRebuildRegionHighlightsForChannel(this, local_d0, param_2);
            if (param_2 == 7) {
                UpdateTilesOnConfigureChannel(this, (hash_map*)&field_4305360, local_d0, local_c9);
                if (cVar2 != '\0') {
                    field_4305416 = 1;
                }
            } else if (param_2 == 4) {
                UpdateObjsOnConfigureChannel(this, (hash_map*)&field_4305304, local_d0, local_c9);
                if (cVar2 != '\0') {
                    field_4305418 = true;
                }
            } else if ((param_2 == 2) &&
                       (UpdateLocsOnConfigureChannel(this, (hash_map*)&field_4305248, local_d0, local_c9),
                        cVar2 != '\0')) {
                field_4305417 = true;
            }
        }
    LAB_10000e6b9:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_fc < 32;
    }

    // 0x10000e7c0, 80 bytes, placed by class name
    // HighlightManager::EntityNeedsUpdateOnConfigureChannel(unsigned int const&, HighlightCategory, int, bool) const
    byte HighlightManager::EntityNeedsUpdateOnConfigureChannel(uint* param_1, undefined8 param_3, uint param_4,
                                                               char param_5) {
        uint uVar1;
        bool bVar2;

        uVar1 = GetActiveChannelFromBitmask(this, *param_1);
        bVar2 = false;
        if (((*param_1 >> (param_4 & 31) & 1) != 0) && (param_5 != '\0')) {
            bVar2 = uVar1 == 4294967295 || (int)param_4 < (int)uVar1;
        }
        return uVar1 == param_4 | bVar2;
    }

    // 0x10000e810, 304 bytes, placed by class name
    // HighlightManager::UpdateUniqueNPCHighlightOrRemoveIfReused(long long)
    void HighlightManager::UpdateUniqueNPCHighlightOrRemoveIfReused(longlong param_1) {
        int iVar1;
        int iVar2;
        Client* this_00;
        ClientNpc* this_01;
        HighlightChannelProperties* pHVar3;
        undefined8 uVar4;
        OpGroup local_198;
        ulonglong local_30;

        local_30 = param_1;
        iVar1 = ClientNpc::GetShortIDFromUID((int)param_1);
        this_00 = (Client*)Client::Instance();
        this_01 = (ClientNpc*)this_00->GetClientNpc(iVar1);
        if (this_01 != (ClientNpc*)0) {
            iVar1 = CreactionCycleFromNPCKey(local_30);
            iVar2 = this_01->GetCreationCycle();
            if (iVar1 == iVar2) {
                pHVar3 = GetHighlightProperties<long long>(this, &local_30, &field_4112, 0);
                if (pHVar3 == (HighlightChannelProperties*)0) {
                    uVar4 = shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&this_01->field_1024);
                    pHVar3 = GetGroupHighlightProperties<int>(this, uVar4, &field_4224, 1);
                    if (pHVar3 == (HighlightChannelProperties*)0) {
                        local_198.Create(this_01);
                        pHVar3 = GetGroupHighlightProperties<OpGroup>(this, &local_198, &field_4392, 8);
                        local_198.~OpGroup();
                    }
                }
                this_01->SetHighlight(pHVar3);
            } else {
                (&field_4112, &local_30)->erase();
            }
        }
    }

    // 0x10000e940, 208 bytes, placed by class name
    // HighlightManager::UpdateUniquePlayerHighlight(eastl::string const&)
    void HighlightManager::UpdateUniquePlayerHighlight(basic_string* param_1) {
        bool bVar1;
        long lVar2;
        shared_ptr* this_00;
        shared_ptr* psVar3;
        DisplayName* this_01;
        basic_string* pbVar4;
        HighlightChannelProperties* pHVar5;
        ClientPlayer* this_02;

        lVar2 = Client::Instance();
        this_00 = (shared_ptr*)((lVar2 + 19216))->begin();
        psVar3 = (shared_ptr*)((lVar2 + 19216))->end();
        if (this_00 != psVar3) {
            do {
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    this_01 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                        (shared_ptr<rs2lib::social::DisplayName>*)(lVar2 + 992));
                    pbVar4 = (basic_string*)this_01->GetDisplayName();
                    bVar1 = eastl::operator==(pbVar4, param_1);
                    if (bVar1) {
                        pHVar5 = GetHighlightProperties<eastl::string>(this, param_1, &field_4168, 6);
                        this_02 =
                            (ClientPlayer*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                        this_02->SetHighlight(pHVar5);
                    }
                }
                this_00 = this_00 + 1;
            } while (this_00 != psVar3);
        }
    }

    // 0x10000ea30, 480 bytes, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup* param_1) {
        Client* this_00;
        undefined8 uVar1;
        function<void(EntityWithCoord<ClientObj>&)> local_158[48];
        function<void(EntityWithCoord<dash3d::Sprite>&)> local_128[48];
        function<void(EntityWithCoord<dash3d::GroundDecor>&)> local_f8[48];
        function<void(EntityWithCoord<dash3d::Decor>&)> local_c8[48];
        function<void(EntityWithCoord<dash3d::Wall>&)> local_98[48];
        function<void(ClientNpc_const&)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Client*)Client::Instance();
        std::function<void(ClientNpc_const&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__3, void>(local_68, this);
        uVar1 = this_00->GetNpcList();
        param_1->ForEachNPC(local_68, uVar1);
        std::function<void(ClientNpc_const&)>::~function(local_68);
        std::function<void(EntityWithCoord<dash3d::Wall>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__4, void>(local_98, this);
        param_1->ForEachWall(local_98);
        std::function<void(EntityWithCoord<dash3d::Wall>&)>::~function(local_98);
        std::function<void(EntityWithCoord<dash3d::Decor>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__5, void>(local_c8, this);
        param_1->ForEachDecor(local_c8);
        std::function<void(EntityWithCoord<dash3d::Decor>&)>::~function(local_c8);
        std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__6, void>(local_f8, this);
        param_1->ForEachGroundDecor(local_f8);
        std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::~function(local_f8);
        std::function<void(EntityWithCoord<dash3d::Sprite>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__7, void>(local_128, this);
        param_1->ForEachScenery(local_128);
        std::function<void(EntityWithCoord<dash3d::Sprite>&)>::~function(local_128);
        std::function<void(EntityWithCoord<ClientObj>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__8, void>(local_158, this);
        param_1->ForEachObj(local_158);
        std::function<void(EntityWithCoord<ClientObj>&)>::~function(local_158);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10000ec80, 192 bytes, placed by class name
    // HighlightManager::UpdateLocsOnConfigureChannel(eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, int, bool)
    void HighlightManager::UpdateLocsOnConfigureChannel(hash_map* param_1, int param_2, bool param_3) {
        undefined1 uVar1;
        bool bVar2;
        longlong* plVar4;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_58[16];
        hashtable_iterator_base local_48[20];
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX);
        if (bVar2) {
            uVar1 = (undefined1)local_34;
            do {
                plVar4 = (longlong*)local_58->HeapBeginPtr();
                if (EntityNeedsUpdateOnConfigureChannel(this, plVar4 + 1, 2, param_2, uVar1) != '\0') {
                    UpdateUniqueLocHighlight(this, *plVar4);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_58);
                bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x10000ed40, 192 bytes, placed by class name
    // HighlightManager::UpdateObjsOnConfigureChannel(eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, int, bool)
    void HighlightManager::UpdateObjsOnConfigureChannel(hash_map* param_1, int param_2, bool param_3) {
        undefined1 uVar1;
        bool bVar2;
        longlong* plVar4;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_58[16];
        hashtable_iterator_base local_48[20];
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX);
        if (bVar2) {
            uVar1 = (undefined1)local_34;
            do {
                plVar4 = (longlong*)local_58->HeapBeginPtr();
                if (EntityNeedsUpdateOnConfigureChannel(this, plVar4 + 1, 4, param_2, uVar1) != '\0') {
                    UpdateUniqueObjHighlight(this, *plVar4);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_58);
                bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x10000ee00, 192 bytes, placed by class name
    // HighlightManager::UpdateTilesOnConfigureChannel(eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, int, bool)
    void HighlightManager::UpdateTilesOnConfigureChannel(hash_map* param_1, int param_2, bool param_3) {
        undefined1 uVar1;
        bool bVar2;
        int* piVar4;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_58[16];
        hashtable_iterator_base local_48[20];
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX);
        if (bVar2) {
            uVar1 = (undefined1)local_34;
            do {
                piVar4 = (int*)local_58->HeapBeginPtr();
                if (EntityNeedsUpdateOnConfigureChannel(this, piVar4 + 1, 7, param_2, uVar1) != '\0') {
                    UpdateUniqueTileHighlight(this, *piVar4);
                }
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_58);
                bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x10000ef60, 112 bytes, placed by class name
    // HighlightManager::ServiceRegionHighlights()
    void HighlightManager::ServiceRegionHighlights() {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        if ((this_00->IsMapBuildRegionMode() != 0) &&
            ((((bool)field_4305416 != false || (field_4305417 != false)) || (field_4305418 != false)))) {
            RebuildRegionHighlights(this, (bool)field_4305416, field_4305417, field_4305418);
        }
        field_4305416 = 0;
        field_4305417 = false;
        field_4305418 = false;
    }

    // 0x10000efd0, 800 bytes, placed by class name
    // HighlightManager::RebuildRegionHighlights(bool, bool, bool)
    void HighlightManager::RebuildRegionHighlights(bool param_1, bool param_2, bool param_3) {
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        undefined8* puVar6;
        int* piVar7;
        longlong* plVar8;
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        hashtable_iterator_base* phVar9;
        undefined7 in_register_00000031;
        hashtable_iterator<eastl::pair<int const, unsigned int>, true, false> local_a8[16];
        hashtable_iterator_base local_98[16];
        CoordZoneSource local_88;
        Client* local_70;
        array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
              25600ul>* local_68;
        array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                              eastl::allocator, false>,
              25600ul>* local_60;
        array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                              eastl::allocator, false>,
              25600ul>* local_58;
        int local_4c;
        undefined4 local_48;
        undefined4 local_44;
        undefined4 local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_48 = (undefined4)CONCAT71(in_register_00000009, param_3);
        local_44 = (undefined4)CONCAT71(in_register_00000011, param_2);
        local_40 = (undefined4)CONCAT71(in_register_00000031, param_1);
        local_70 = (Client*)Client::Instance();
        iVar3 = local_70->IsMapBuildRegionMode();
        if (iVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("client->IsMapBuildRegionMode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1547, (char*)0);
        }
        local_68 =
            (array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                   25600ul>*)&field_2871648;
        local_60 = (array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                          eastl::allocator, false>,
                          25600ul>*)&field_4448;
        local_58 = (array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                          eastl::allocator, false>,
                          25600ul>*)&field_1438048;
        local_34 = 0;
        do {
            iVar3 = 0;
            do {
                iVar4 = 0;
                local_4c = iVar3;
                do {
                    puVar6 = (undefined8*)local_70->GetMapBuildRegionZoneSource(local_34, iVar3, iVar4);
                    local_88._0_8_ = *puVar6;
                    local_88._8_8_ = puVar6[1];
                    cVar1 = local_88.IsSet();
                    if (cVar1 != '\0') {
                        local_38 = iVar4;
                        iVar3 = local_88.GetMapSquareX();
                        iVar4 = local_88.GetMapSquareZ();
                        local_3c = GetMapSquareIndex(iVar3, iVar4);
                        if ((char)local_40 != '\0') {
                            std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                       eastl::allocator, false>,
                                       25600ul>::operator[](local_68, (long)local_3c);
                            eastl::hashtable<
                                eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>,
                                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                             true>::end();
                            phVar9 = extraout_RDX;
                            while (bVar2 = eastl::operator!=((eastl*)local_a8, local_98, phVar9), bVar2) {
                                piVar7 = (int*)local_a8->HeapBeginPtr();
                                uVar5 = GetActiveChannelFromBitmask(this, piVar7[1], 7);
                                cVar1 = ShouldRebuildRegionHighlightsForChannel(this, uVar5, 7);
                                if (cVar1 != '\0') {
                                    UpdateUniqueTileHighlight(this, *piVar7);
                                }
                                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true,
                                                          false>::operator++(local_a8);
                                phVar9 = extraout_RDX_00;
                            }
                        }
                        iVar3 = local_4c;
                        if ((char)local_44 != '\0') {
                            std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                       eastl::equal_to<long long>, eastl::allocator, false>,
                                       25600ul>::operator[](local_60, (long)local_3c);
                            eastl::hashtable<
                                eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>,
                                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                             true>::end();
                            phVar9 = extraout_RDX_01;
                            while (bVar2 = eastl::operator!=((eastl*)local_a8, local_98, phVar9), bVar2) {
                                plVar8 = (longlong*)local_a8->HeapBeginPtr();
                                uVar5 = GetActiveChannelFromBitmask(this, (int)plVar8[1], 2);
                                cVar1 = ShouldRebuildRegionHighlightsForChannel(this, uVar5, 2);
                                if (cVar1 != '\0') {
                                    UpdateUniqueLocHighlight(this, *plVar8);
                                }
                                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::
                                operator++(
                                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)
                                        local_a8);
                                phVar9 = extraout_RDX_02;
                            }
                        }
                        iVar4 = local_38;
                        if ((char)local_48 != '\0') {
                            std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                       eastl::equal_to<long long>, eastl::allocator, false>,
                                       25600ul>::operator[](local_58, (long)local_3c);
                            eastl::hashtable<
                                eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>,
                                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                             true>::end();
                            phVar9 = extraout_RDX_03;
                            while (bVar2 = eastl::operator!=((eastl*)local_a8, local_98, phVar9), bVar2) {
                                plVar8 = (longlong*)local_a8->HeapBeginPtr();
                                uVar5 = GetActiveChannelFromBitmask(this, (int)plVar8[1], 4);
                                cVar1 = ShouldRebuildRegionHighlightsForChannel(this, uVar5, 4);
                                if (cVar1 != '\0') {
                                    UpdateUniqueObjHighlight(this, *plVar8);
                                }
                                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::
                                operator++(
                                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)
                                        local_a8);
                                phVar9 = extraout_RDX_04;
                            }
                            iVar4 = local_38;
                        }
                    }
                    iVar4 = iVar4 + 1;
                } while (iVar4 != 13);
                iVar3 = iVar3 + 1;
            } while (iVar3 != 13);
            local_34 = local_34 + 1;
        } while (local_34 != 4);
    }

    // 0x10000f2f0, 144 bytes, placed by class name
    // HighlightManager::GetActiveChannelFromBitmask(unsigned int, HighlightCategory) const
    int HighlightManager::GetActiveChannelFromBitmask(uint param_1, int param_3) {
        char cVar1;
        int iVar2;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* this_01;
        uint local_34;

        local_34 = param_1;
        do {
            if (local_34 == 0) {
                return -1;
            }
            iVar2 = jag::graphics::FindClearLSB(&local_34);
            this_00 = (array<HighlightChannelProperties, 32ul>*)
                std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                    (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_3);
            this_01 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                this_00, (long)iVar2);
            cVar1 = this_01->IsEnabled();
        } while (cVar1 == '\0');
        return iVar2;
    }

    // 0x10000f380, 1520 bytes, placed by class name
    // HighlightManager::UpdateUniqueLocHighlight(long long)
    void HighlightManager::UpdateUniqueLocHighlight(longlong param_1) {
        HighlightManager* pHVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        CoordGrid* pCVar7;
        undefined8 uVar8;
        HighlightChannelProperties* pHVar9;
        shared_ptr<configdecoder::LocType>* this_00;
        LocType* pLVar10;
        long lVar11;
        undefined8* puVar12;
        undefined8* puVar13;
        unkbyte10 Var14;
        CoordGrid local_260[22];
        CoordGrid local_f8;
        undefined1 local_e8[16];
        shared_ptr local_d8;
        shared_ptr local_c8;
        EntityHighlight* local_b8;
        HighlightChannelProperties* local_b0;
        CoordGrid* local_a8;
        undefined1* local_a0;
        array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                              eastl::allocator, false>,
              25600ul>* local_98;
        undefined1* local_90;
        undefined1* local_88;
        shared_ptr local_80;
        shared_ptr local_70;
        CoordGrid local_60;
        GraphicsApp* local_50;
        CoordGrid* local_48;
        HighlightManager* local_40;
        int local_34;

        local_50 = (GraphicsApp*)param_1;
        local_40 = this;
        pCVar7 = (CoordGrid*)Client::Instance();
        CoordFromStaticEntityKey((highlight*)&local_f8, (longlong)local_50);
        rs2lib::CoordGrid::CoordGrid(local_260, 0, 0, 0);
        FindNextOccurrenceOfStoredHighlight((highlight*)&local_60, &local_f8, local_260, true);
        cVar2 = local_60.IsSet();
        if (cVar2 != '\0') {
            local_a0 = &local_40->field_4305248;
            local_98 = (array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                              eastl::equal_to<long long>, eastl::allocator, false>,
                              25600ul>*)&local_40->field_4448;
            local_90 = &local_40->field_4280;
            local_88 = &local_40->field_4392;
            local_48 = pCVar7 + 1199;
            local_a8 = pCVar7;
            do {
                cVar2 = ClientConstants::IsCoordInBuildArea(&local_60);
                if (cVar2 != '\0') {
                    local_e8->WorldCoordFromBuildCoord(pCVar7);
                    local_34 = CreactionCycleFromNPCKey((longlong)local_50);
                    cVar2 = local_e8->InRegion();
                    pHVar1 = local_40;
                    if (cVar2 == '\0') {
                        uVar8 = GetLocHighlightMap(local_40, (CoordGrid*)local_e8);
                        pHVar9 = GetHighlightProperties<long long>(pHVar1, &local_50, uVar8, 2);
                    } else {
                        local_260->WorldCoordToSourceCoord(pCVar7);
                        iVar5 = local_34;
                        iVar4 = local_260->ToBitPacked();
                        local_80._0_8_ = UniqueStaticEntityKey(iVar5, iVar4);
                        pHVar1 = local_40;
                        iVar5 = GetActiveChannel<long long>(local_40, &local_50, local_a0, 2);
                        iVar4 = GetMapSquareIndex(local_260);
                        uVar8 = std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                           eastl::equal_to<long long>, eastl::allocator, false>,
                                           25600ul>::operator[](local_98, (long)iVar4);
                        iVar4 = GetActiveChannel<long long>(pHVar1, &local_80, uVar8, 2);
                        uVar6 = LowestNonNegativeNumberOrMinusOne(iVar5, iVar4);
                        pHVar9 = (HighlightChannelProperties*)GetHighlightProperties(pHVar1, uVar6, 2);
                    }
                    if ((pHVar9 == (HighlightChannelProperties*)0) &&
                        (pHVar9 = GetGroupHighlightProperties<int>(local_40, &local_34, local_90, 3),
                         pHVar9 == (HighlightChannelProperties*)0)) {
                        this_00 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_34);
                        pLVar10 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(this_00);
                        local_260->Create(pLVar10);
                        pHVar9 = GetGroupHighlightProperties<OpGroup>(local_40, (Client*)local_260, local_88, 8);
                        local_260->~OpGroup();
                    }
                    local_b0 = pHVar9;
                    eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::vector();
                    iVar5 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)local_48);
                    iVar4 = local_60.GetX();
                    local_60.GetZ();
                    local_60.GetPos();
                    dash3d::world::GetWall((int)&local_80, iVar5, iVar4);
                    bVar3 = shared_ptr::operator_cast_to_bool(&local_80);
                    if (bVar3) {
                        lVar11 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_80);
                        iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar11 + 56));
                        if (iVar5 == local_34) {
                            local_d8._0_8_ = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_80);
                            local_d8._0_8_ = local_d8._0_8_ + 64;
                            local_260->push_back((EntityHighlight**)&local_d8);
                        }
                    }
                    iVar5 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)local_48);
                    iVar4 = local_60.GetX();
                    local_60.GetZ();
                    local_60.GetPos();
                    dash3d::world::GetDecor((int)&local_d8, iVar5, iVar4);
                    bVar3 = shared_ptr::operator_cast_to_bool(&local_d8);
                    if (bVar3) {
                        lVar11 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_d8);
                        iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar11 + 64));
                        if (iVar5 == local_34) {
                            local_70._0_8_ =
                                shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_d8);
                            local_70._0_8_ = local_70._0_8_ + 76;
                            local_260->push_back((EntityHighlight**)&local_70);
                        }
                    }
                    iVar5 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)local_48);
                    iVar4 = local_60.GetX();
                    local_60.GetZ();
                    local_60.GetPos();
                    dash3d::world::GetScene((int)&local_70, iVar5, iVar4);
                    bVar3 = shared_ptr::operator_cast_to_bool(&local_70);
                    if (bVar3) {
                        lVar11 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_70);
                        iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar11 + 80));
                        if (iVar5 == local_34) {
                            local_c8._0_8_ =
                                shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_70);
                            local_c8._0_8_ = local_c8._0_8_ + 92;
                            local_260->push_back((EntityHighlight**)&local_c8);
                        }
                    }
                    iVar5 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)local_48);
                    iVar4 = local_60.GetX();
                    local_60.GetZ();
                    local_60.GetPos();
                    dash3d::world::GetGd((int)&local_c8, iVar5, iVar4);
                    bVar3 = shared_ptr::operator_cast_to_bool(&local_c8);
                    if (bVar3) {
                        lVar11 =
                            shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_c8);
                        iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar11 + 32));
                        if (iVar5 == local_34) {
                            lVar11 = shared_ptr<dash3d::GroundDecor>::operator->(
                                (shared_ptr<dash3d::GroundDecor>*)&local_c8);
                            local_b8 = (EntityHighlight*)(lVar11 + 44);
                            local_260->push_back(&local_b8);
                        }
                    }
                    cVar2 = local_260->empty();
                    if (cVar2 == '\0') {
                        Var14 = HighlightChannelProperties::CreateHighlightData(local_b0);
                        puVar12 = (undefined8*)local_260->HeapBeginPtr();
                        puVar13 = (undefined8*)local_260->end();
                        for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
                            *(unkbyte10*)*puVar12 = Var14;
                        }
                    }
                    local_c8.~shared_ptr();
                    local_70.~shared_ptr();
                    local_d8.~shared_ptr();
                    local_80.~shared_ptr();
                    local_260->~vector();
                    pCVar7 = local_a8;
                }
                FindNextOccurrenceOfStoredHighlight((highlight*)local_260, &local_f8, &local_60, false);
                local_60.m_z = local_260[0].m_z;
                local_60.m_level = local_260[0].m_level;
                local_60.m_x = local_260[0].m_x;
                cVar2 = local_60.IsSet();
            } while (cVar2 != '\0');
        }
    }

    // 0x10000f970, 896 bytes, placed by class name
    // HighlightManager::UpdateUniqueObjHighlight(long long)
    void HighlightManager::UpdateUniqueObjHighlight(longlong param_1) {
        HighlightManager* pHVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        CoordGrid* pCVar7;
        undefined8 uVar8;
        Language* pLVar9;
        ObjType* pOVar10;
        Client* pCVar11;
        shared_ptr* this_00;
        long lVar12;
        SystemSettings* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar13;
        CoordGrid local_210[22];
        undefined1 local_a8[16];
        CoordGrid local_98;
        undefined1* local_88;
        array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                              eastl::allocator, false>,
              25600ul>* local_80;
        undefined1* local_78;
        undefined1* local_70;
        list<console::Line, eastl::allocator> local_68[16];
        CoordGrid local_58;
        longlong local_48;
        HighlightManager* local_40;
        int local_34;

        local_48 = param_1;
        local_40 = this;
        CoordFromStaticEntityKey((highlight*)&local_98, param_1);
        rs2lib::CoordGrid::CoordGrid(local_210, 0, 0, 0);
        FindNextOccurrenceOfStoredHighlight((highlight*)&local_58, &local_98, local_210, true);
        cVar2 = local_58.IsSet();
        if (cVar2 != '\0') {
            local_88 = &local_40->field_4305304;
            local_80 = (array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                              eastl::equal_to<long long>, eastl::allocator, false>,
                              25600ul>*)&local_40->field_1438048;
            local_78 = &local_40->field_4336;
            local_70 = &local_40->field_4392;
            do {
                cVar2 = ClientConstants::IsCoordInBuildArea(&local_58);
                if (cVar2 != '\0') {
                    pCVar7 = (CoordGrid*)Client::Instance();
                    local_a8->WorldCoordFromBuildCoord(pCVar7);
                    local_34 = CreactionCycleFromNPCKey(local_48);
                    cVar2 = local_a8->InRegion();
                    pHVar1 = local_40;
                    if (cVar2 == '\0') {
                        uVar8 = GetObjHighlightMap(local_40, (CoordGrid*)local_a8);
                        pLVar9 = (Language*)GetHighlightProperties<long long>(pHVar1, &local_48, uVar8);
                    } else {
                        pCVar7 = (CoordGrid*)Client::Instance();
                        local_210->WorldCoordToSourceCoord(pCVar7);
                        iVar5 = local_34;
                        iVar4 = local_210->ToBitPacked();
                        local_68._0_8_ = UniqueStaticEntityKey(iVar5, iVar4);
                        pHVar1 = local_40;
                        iVar5 = GetActiveChannel<long long>(local_40, &local_48, local_88, 4);
                        iVar4 = GetMapSquareIndex(local_210);
                        uVar8 = std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                           eastl::equal_to<long long>, eastl::allocator, false>,
                                           25600ul>::operator[](local_80, (long)iVar4);
                        iVar4 = GetActiveChannel<long long>(pHVar1, local_68, uVar8);
                        uVar6 = LowestNonNegativeNumberOrMinusOne(iVar5, iVar4);
                        pLVar9 = (Language*)GetHighlightProperties(pHVar1, uVar6, 4);
                    }
                    if (pLVar9 == (Language*)0) {
                        pLVar9 = (Language*)GetGroupHighlightProperties<int>(local_40, &local_34, local_78);
                        if (pLVar9 == (Language*)0) {
                            local_68->List(local_34);
                            pOVar10 = (ObjType*)shared_ptr<configdecoder::ObjType>::operator*(
                                (shared_ptr<configdecoder::ObjType>*)local_68);
                            local_210->Create(pOVar10);
                            local_68->~shared_ptr();
                            pLVar9 =
                                (Language*)GetGroupHighlightProperties<OpGroup>(local_40, (Client*)local_210, local_70);
                            local_210->~OpGroup();
                        }
                    }
                    pCVar11 = (Client*)Client::Instance();
                    pCVar11->GetObjectsOnTile(&local_58);
                    local_210->begin();
                    eastl::list<console::Line, eastl::allocator>::end(local_68);
                    phVar13 = extraout_RDX;
                    while (bVar3 = eastl::operator!=((eastl*)local_210, (hashtable_iterator_base*)local_68, phVar13),
                           bVar3) {
                        this_00 =
                            (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_210);
                        bVar3 = shared_ptr::operator_cast_to_bool(this_00);
                        if ((bVar3) && (lVar12 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00),
                                        *(int*)(lVar12 + 24) == local_34)) {
                            this_01 =
                                (SystemSettings*)shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00);
                            this_01->SetLanguage(pLVar9);
                            pCVar11 = (Client*)Client::Instance();
                            iVar5 = local_58.GetZ();
                            iVar4 = local_58.GetPos();
                            pCVar11->ShowObject(iVar5, iVar4);
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_210);
                        phVar13 = extraout_RDX_00;
                    }
                }
                FindNextOccurrenceOfStoredHighlight((highlight*)local_210, &local_98, &local_58, false);
                local_58.m_z = local_210[0].m_z;
                local_58.m_level = local_210[0].m_level;
                local_58.m_x = local_210[0].m_x;
                cVar2 = local_58.IsSet();
            } while (cVar2 != '\0');
        }
    }

    // 0x10000fcf0, 624 bytes, placed by class name
    // HighlightManager::UpdateUniqueTileHighlight(int)
    void HighlightManager::UpdateUniqueTileHighlight(int param_1) {
        HighlightManager* pHVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        CoordGrid* pCVar7;
        world* this_00;
        undefined8 uVar8;
        unkbyte10 Var9;
        CoordGrid local_a8;
        CoordGrid* local_98;
        CoordGrid* local_90;
        undefined1* local_88;
        array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
              25600ul>* local_80;
        CoordGrid local_78;
        EntityHighlight local_68;
        HighlightChannelProperties* local_58;
        CoordGrid local_50;
        HighlightManager* local_40;
        int local_38;
        undefined4 local_34;

        local_40 = this;
        local_38 = param_1;
        pCVar7 = (CoordGrid*)Client::Instance();
        new (&local_a8) rs2lib::CoordGrid(local_38);
        new (&local_50) rs2lib::CoordGrid(0, 0, 0);
        FindNextOccurrenceOfStoredHighlight((highlight*)&local_78, &local_a8, &local_50, true);
        cVar2 = local_78.IsSet();
        if (cVar2 != '\0') {
            local_88 = &local_40->field_4305360;
            local_80 =
                (array<
                    eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                    25600ul>*)&local_40->field_2871648;
            local_90 = pCVar7 + 1199;
            local_98 = pCVar7;
            do {
                cVar2 = ClientConstants::IsCoordInBuildArea(&local_78);
                if (cVar2 != '\0') {
                    local_50.WorldCoordFromBuildCoord(pCVar7);
                    cVar2 = local_50.InRegion();
                    pHVar1 = local_40;
                    if (cVar2 == '\0') {
                        uVar8 = GetTileHighlightMap(local_40, &local_50);
                        local_58 = GetHighlightProperties<int>(pHVar1, &local_38, uVar8, 7);
                    } else {
                        local_68.WorldCoordToSourceCoord(pCVar7);
                        local_34 = local_50.ToBitPacked();
                        pHVar1 = local_40;
                        iVar4 = GetActiveChannel<int>(local_40, &local_34, local_88, 7);
                        local_34 = local_68.ToBitPacked();
                        iVar5 = GetMapSquareIndex((CoordGrid*)&local_68);
                        uVar8 = std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                           eastl::allocator, false>,
                                           25600ul>::operator[](local_80, (long)iVar5);
                        iVar5 = GetActiveChannel<int>(pHVar1, &local_34, uVar8, 7);
                        uVar6 = LowestNonNegativeNumberOrMinusOne(iVar4, iVar5);
                        local_58 = (HighlightChannelProperties*)GetHighlightProperties(pHVar1, uVar6, 7);
                    }
                    iVar4 = local_78.GetX();
                    iVar5 = local_78.GetZ();
                    iVar3 = local_78.GetPos();
                    iVar4 = ClientBuild::GetLinkBelowLevel(iVar4, iVar5, iVar3);
                    this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)local_90);
                    iVar5 = local_78.GetZ();
                    iVar3 = local_78.GetPos();
                    Var9 = HighlightChannelProperties::CreateHighlightData(local_58);
                    local_68._0_10_ = Var9;
                    this_00->SetTileHighlight(iVar4, iVar5, iVar3, &local_68);
                    pCVar7 = local_98;
                }
                FindNextOccurrenceOfStoredHighlight((highlight*)&local_50, &local_a8, &local_78, false);
                local_78.m_z = local_50.m_z;
                local_78.m_level = local_50.m_level;
                local_78.m_x = local_50.m_x;
                cVar2 = local_78.IsSet();
            } while (cVar2 != '\0');
        }
    }

    // 0x10000ff80, 2432 bytes, placed by class name
    // HighlightManager::ClearHighlights(HighlightCategory, int)
    void HighlightManager::ClearHighlights(undefined4 param_2, uint param_3) {
        longlong lVar1;
        HighlightManager* pHVar2;
        uint uVar3;
        bool bVar4;
        int iVar5;
        longlong* plVar6;
        undefined8 uVar7;
        basic_string* pbVar8;
        long lVar9;
        long lVar10;
        int* piVar11;
        OpGroup* pOVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        hashtable_iterator_base* extraout_RDX_05;
        hashtable_iterator_base* extraout_RDX_06;
        hashtable_iterator_base* extraout_RDX_07;
        hashtable_iterator_base* extraout_RDX_08;
        hashtable_iterator_base* extraout_RDX_09;
        hashtable_iterator_base* extraout_RDX_10;
        hashtable_iterator_base* extraout_RDX_11;
        hashtable_iterator_base* extraout_RDX_12;
        hashtable_iterator_base* extraout_RDX_13;
        hashtable_iterator_base* extraout_RDX_14;
        hashtable_iterator_base* extraout_RDX_15;
        hashtable_iterator_base* extraout_RDX_16;
        hashtable_iterator_base* extraout_RDX_17;
        hashtable_iterator_base* extraout_RDX_18;
        hashtable_iterator_base* extraout_RDX_19;
        hashtable_iterator_base* extraout_RDX_20;
        ulong uVar13;
        CoordGrid local_78;
        uint local_5c;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;

        uVar13 = (ulong)param_3;
        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            327, "Highlight channel ID must be between 0 and %d (inclusive) - Got %d", 31, uVar13);
        }
        local_5c = param_3;
        switch (param_2) {
        case 0:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                    uVar7 = local_48.HeapBeginPtr();
                    bVar4 = RemoveEntityHighlight<long long>((HighlightManager*)this, uVar7, &field_4112, param_3, 0);
                    if (bVar4) {
                        plVar6 = (longlong*)local_48.HeapBeginPtr();
                        UpdateUniqueNPCHighlightOrRemoveIfReused((HighlightManager*)this, *plVar6);
                    }
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_00);
                } while (bVar4);
            }
            break;
        case 1:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_01);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)&local_58);
                    piVar11 = (int*)local_48.HeapBeginPtr();
                    RemoveNPCTypeHighlight(this, *piVar11, param_3);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_02);
                } while (bVar4);
            }
            break;
        case 2:
            lVar9 = (&field_4448)->begin();
            lVar10 = (&field_4448)->end();
            if (lVar9 != lVar10) {
                do {
                    eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                     eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::begin();
                    new (&local_58)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_48);
                    while (true) {
                        param_3 = (uint)uVar13;
                        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar4 =
                            eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_03);
                        if (!bVar4)
                            break;
                        eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                            (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                        plVar6 = (longlong*)local_48.HeapBeginPtr();
                        lVar1 = *plVar6;
                        iVar5 = CreactionCycleFromNPCKey(lVar1);
                        uVar3 = local_5c;
                        uVar13 = (ulong)local_5c;
                        CoordFromStaticEntityKey((highlight*)&local_78, lVar1);
                        RemoveLocHighlight((HighlightManager*)this, iVar5, &local_78, uVar3, false);
                        local_48 = local_58;
                        uStack_40 = uStack_50;
                    }
                    lVar9 = lVar9 + 56;
                } while (lVar9 != lVar10);
            }
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_15);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                    plVar6 = (longlong*)local_48.HeapBeginPtr();
                    lVar1 = *plVar6;
                    iVar5 = CreactionCycleFromNPCKey(lVar1);
                    CoordFromStaticEntityKey((highlight*)&local_78, lVar1);
                    RemoveLocHighlight((HighlightManager*)this, iVar5, &local_78, param_3, false);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_16);
                } while (bVar4);
            }
            break;
        case 3:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_04);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)&local_58);
                    piVar11 = (int*)local_48.HeapBeginPtr();
                    RemoveLocTypeHighlight(this, *piVar11, param_3);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_05);
                } while (bVar4);
            }
            break;
        case 4:
            lVar9 = (&field_1438048)->begin();
            lVar10 = (&field_1438048)->end();
            if (lVar9 != lVar10) {
                do {
                    eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                     eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::begin();
                    new (&local_58)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_48);
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_06);
                    if (bVar4) {
                        do {
                            eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::
                            operator++((
                                hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                            plVar6 = (longlong*)local_48.HeapBeginPtr();
                            lVar1 = *plVar6;
                            iVar5 = CreactionCycleFromNPCKey(lVar1);
                            pHVar2 = (HighlightManager*)this;
                            CoordFromStaticEntityKey((highlight*)&local_78, lVar1);
                            RemoveObjHighlight(pHVar2, iVar5, &local_78, local_5c, false);
                            local_48 = local_58;
                            uStack_40 = uStack_50;
                            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>,
                                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                             true>::end();
                            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78,
                                                      extraout_RDX_07);
                        } while (bVar4);
                    }
                    lVar9 = lVar9 + 56;
                } while (lVar9 != lVar10);
            }
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_17);
            uVar3 = local_5c;
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                    plVar6 = (longlong*)local_48.HeapBeginPtr();
                    lVar1 = *plVar6;
                    iVar5 = CreactionCycleFromNPCKey(lVar1);
                    CoordFromStaticEntityKey((highlight*)&local_78, lVar1);
                    RemoveObjHighlight((HighlightManager*)this, iVar5, &local_78, uVar3, false);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_18);
                } while (bVar4);
            }
            break;
        case 5:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_08);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>*)&local_58);
                    piVar11 = (int*)local_48.HeapBeginPtr();
                    RemoveObjTypeHighlight(this, *piVar11, param_3);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_09);
                } while (bVar4);
            }
            break;
        case 6:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            uVar3 = local_5c;
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_10);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<
                        eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                    operator++((hashtable_iterator<
                                eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false,
                                false>*)&local_58);
                    uVar7 = local_48.HeapBeginPtr();
                    bVar4 = RemoveEntityHighlight<eastl::string>((HighlightManager*)this, uVar7, &field_4168, uVar3, 6);
                    if (bVar4) {
                        pbVar8 = (basic_string*)local_48.HeapBeginPtr();
                        UpdateUniquePlayerHighlight((HighlightManager*)this, pbVar8);
                    }
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_11);
                } while (bVar4);
            }
            break;
        case 7:
            lVar9 = (&field_2871648)->begin();
            lVar10 = (&field_2871648)->end();
            uVar3 = local_5c;
            if (lVar9 != lVar10) {
                do {
                    eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                     eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::begin();
                    new (&local_58)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_48);
                    while (true) {
                        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar4 =
                            eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_12);
                        if (!bVar4)
                            break;
                        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                            (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)&local_58);
                        piVar11 = (int*)local_48.HeapBeginPtr();
                        new (&local_78) rs2lib::CoordGrid(*piVar11);
                        RemoveTileHighlight((HighlightManager*)this, &local_78, uVar3, false);
                        local_48 = local_58;
                        uStack_40 = uStack_50;
                    }
                    lVar9 = lVar9 + 56;
                } while (lVar9 != lVar10);
            }
            pHVar2 = (HighlightManager*)this;
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_19);
            uVar3 = local_5c;
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)&local_58);
                    piVar11 = (int*)local_48.HeapBeginPtr();
                    new (&local_78) rs2lib::CoordGrid(*piVar11);
                    RemoveTileHighlight(pHVar2, &local_78, uVar3, false);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_20);
                } while (bVar4);
            }
            break;
        case 8:
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            new (&local_58) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                (hashtable_iterator*)&local_48);
            eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_13);
            if (bVar4) {
                do {
                    eastl::hashtable_iterator<eastl::pair<OpGroup_const, HighlightedGroup>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<OpGroup_const, HighlightedGroup>, true, false>*)&local_58);
                    pOVar12 = (OpGroup*)local_48.HeapBeginPtr();
                    RemoveOpGroupHighlight(this, pOVar12, param_3);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_78, extraout_RDX_14);
                } while (bVar4);
            }
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            486, "Invalid highlight category");
        }
    }

    // 0x100010a70: the linker folded this into TypeIDFromStaticEntityKey(long long), which has identical code
    CreactionCycleFromNPCKey(long long);

    // 0x100010aa0, 192 bytes, placed by class name
    // HighlightManager::RemoveLocHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool)
    void HighlightManager::RemoveLocHighlight(int param_1, CoordGrid* param_2, uint param_3, bool param_4) {
        CoordGrid* pCVar1;
        undefined8 uVar2;
        int iVar4;
        undefined7 in_register_00000081;
        CoordGrid local_48;
        longlong local_38;

        if ((int)CONCAT71(in_register_00000081, param_4) == 0) {
            new (&local_48) rs2lib::CoordGrid(param_2);
        } else {
            pCVar1 = (CoordGrid*)Client::Instance();
            local_48.WorldCoordToSourceCoord(pCVar1);
        }
        uVar2 = GetLocHighlightMap(this, &local_48);
        iVar4 = local_48.ToBitPacked();
        local_38 = UniqueStaticEntityKey(param_1, iVar4);
        if (RemoveEntityHighlight<long long>(this, &local_38, uVar2, param_3, 2)) {
            UpdateUniqueLocHighlight(this, local_38);
        }
        UpdateSave(this, &local_48, 2, param_3, 0);
    }

    // 0x100010b60, 192 bytes, placed by class name
    // HighlightManager::RemoveObjHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool)
    void HighlightManager::RemoveObjHighlight(int param_1, CoordGrid* param_2, uint param_3, bool param_4) {
        CoordGrid* pCVar1;
        undefined8 uVar2;
        int iVar4;
        undefined7 in_register_00000081;
        CoordGrid local_48;
        longlong local_38;

        if ((int)CONCAT71(in_register_00000081, param_4) == 0) {
            new (&local_48) rs2lib::CoordGrid(param_2);
        } else {
            pCVar1 = (CoordGrid*)Client::Instance();
            local_48.WorldCoordToSourceCoord(pCVar1);
        }
        uVar2 = GetObjHighlightMap(this, &local_48);
        iVar4 = local_48.ToBitPacked();
        local_38 = UniqueStaticEntityKey(param_1, iVar4);
        if (RemoveEntityHighlight<long long>(this, &local_38, uVar2, param_3, 4)) {
            UpdateUniqueObjHighlight(this, local_38);
        }
        UpdateSave(this, &local_48, 4, param_3, 0);
    }

    // 0x100010d80, 176 bytes, placed by class name
    // HighlightManager::RemoveTileHighlight(rs2lib::CoordGrid const&, unsigned int, bool)
    void HighlightManager::RemoveTileHighlight(CoordGrid* param_1, uint param_2, bool param_3) {
        CoordGrid* pCVar1;
        undefined8 uVar2;
        undefined7 in_register_00000009;
        CoordGrid local_38;

        if ((int)CONCAT71(in_register_00000009, param_3) == 0) {
            new (&local_38) rs2lib::CoordGrid(param_1);
        } else {
            pCVar1 = (CoordGrid*)Client::Instance();
            local_38.WorldCoordToSourceCoord(pCVar1);
        }
        uVar2 = GetTileHighlightMap(this, &local_38);
        local_38._12_4_ = local_38.ToBitPacked();
        if (RemoveEntityHighlight<int>(this, &local_38.field_12, uVar2, param_2, 7)) {
            UpdateUniqueTileHighlight(this, local_38._12_4_);
        }
        UpdateSave(this, &local_38, 7, param_2, 0);
    }

    // 0x100010e30, 80 bytes, placed by class name
    // HighlightManager::RemoveNPCTypeHighlight(int, unsigned int)
    void HighlightManager::RemoveNPCTypeHighlight(int param_1, uint param_2) {
        int local_1c;

        local_1c = param_1;
        RemoveGroupHighlight<int>(this, &local_1c, &field_4224, param_2, 1);
        UpdateSave(this, 1, param_2, 0);
    }

    // 0x100010e80, 80 bytes, placed by class name
    // HighlightManager::RemoveLocTypeHighlight(int, unsigned int)
    void HighlightManager::RemoveLocTypeHighlight(int param_1, uint param_2) {
        int local_1c;

        local_1c = param_1;
        RemoveGroupHighlight<int>(this, &local_1c, &field_4280, param_2, 3);
        UpdateSave(this, 3, param_2, 0);
    }

    // 0x100010ed0, 80 bytes, placed by class name
    // HighlightManager::RemoveObjTypeHighlight(int, unsigned int)
    void HighlightManager::RemoveObjTypeHighlight(int param_1, uint param_2) {
        int local_1c;

        local_1c = param_1;
        RemoveGroupHighlight<int>(this, &local_1c, &field_4336, param_2, 5);
        UpdateSave(this, 5, param_2, 0);
    }

    // 0x100010f20, 64 bytes, placed by class name
    // HighlightManager::RemoveOpGroupHighlight(OpGroup const&, unsigned int)
    void HighlightManager::RemoveOpGroupHighlight(OpGroup* param_1, uint param_2) {
        RemoveGroupHighlight<OpGroup>(this, param_1, &field_4392, param_2, 8);
        UpdateSave(this, 8, param_2, 0);
    }

    // 0x100010fb0, 80 bytes, placed by class name
    // HighlightManager::AddNewChannelToMask(int, unsigned int*, HighlightCategory)
    bool HighlightManager::AddNewChannelToMask(uint param_1, uint* param_2, undefined4 param_4) {
        int iVar1;
        int iVar2;
        uint uVar3;

        iVar1 = GetActiveChannelFromBitmask(this, *param_2, param_4);
        uVar3 = *param_2 | 1 << (param_1 & 31);
        *param_2 = uVar3;
        iVar2 = GetActiveChannelFromBitmask(this, uVar3, param_4);
        return iVar1 != iVar2;
    }

    // 0x100011000, 80 bytes, placed by class name
    // HighlightManager::AddNPCHighlight(int, int, unsigned int)
    void HighlightManager::AddNPCHighlight(int param_1, int param_2, uint param_3) {
        longlong local_20;

        local_20 = UniqueNPCKey(param_1, param_2);
        if (AddEntityHighlight<long long>(this, &local_20, &field_4112, param_3, 0)) {
            UpdateUniqueNPCHighlightOrRemoveIfReused(this, local_20);
        }
    }

    // 0x100011090, 112 bytes, placed by neighbouring functions
    // UnpackCoord(int, bool, int*)
    highlight* UnpackCoord(int param_1, bool param_2, int* param_3) {
        CoordGrid* pCVar2;
        undefined7 in_register_00000011;
        undefined1 local_38[16];

        new (this) rs2lib::CoordGrid(param_1);
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            if (InRegion() != '\0') {
                pCVar2 = (CoordGrid*)Client::Instance();
                local_38->WorldCoordToSourceCoord(pCVar2);
                field_8 = local_38._8_4_;
                *(undefined8*)this = local_38._0_8_;
                if (param_3 != (int*)0) {
                    *param_3 = param_1;
                }
            }
        }
        return this;
    }

    // 0x100011100, 192 bytes, placed by class name
    // HighlightManager::AddLocHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool, bool)
    void HighlightManager::AddLocHighlight(int param_1, CoordGrid* param_2, uint param_3, bool param_4, bool param_5) {
        CoordGrid* pCVar1;
        undefined8 uVar2;
        int iVar4;
        undefined7 in_register_00000081;
        undefined3 in_register_00000089;
        CoordGrid local_50;
        longlong local_40;

        register0x00000089 = in_register_00000089;
        if ((int)CONCAT71(in_register_00000081, param_4) == 0) {
            new (&local_50) rs2lib::CoordGrid(param_2);
        } else {
            pCVar1 = (CoordGrid*)Client::Instance();
            local_50.WorldCoordToSourceCoord(pCVar1);
        }
        uVar2 = GetLocHighlightMap(this, &local_50);
        iVar4 = local_50.ToBitPacked();
        local_40 = UniqueStaticEntityKey(param_1, iVar4);
        if (AddEntityHighlight<long long>(this, &local_40, uVar2, param_3, 2)) {
            UpdateUniqueLocHighlight(this, local_40);
        }
        UpdateSave(this, &local_50, 2, param_3, (undefined1)param_5);
    }

    // 0x100011220, 128 bytes, placed by class name
    // HighlightManager::UpdateSave(rs2lib::CoordGrid const&, HighlightCategory, int, bool)
    void HighlightManager::UpdateSave(CoordGrid* param_1, int param_3, int param_4, int param_5) {
        array<HighlightChannelProperties, 32ul>* this_00;
        EntityHighlight* this_01;
        char cVar1;
        undefined1 local_30[8];

        if (param_5 == 0) {
            cVar1 = param_1->InRegion();
            if (cVar1 == '\0') {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_3);
                this_01 =
                    (EntityHighlight*)std::array<HighlightChannelProperties, 32ul>::operator[](this_00, (long)param_4);
                cVar1 = this_01->SaveToFileEnable();
                if (cVar1 != '\0') {
                    new (local_30) rs2lib::CoordMapSquare(param_1);
                    OnHighlightUpdate(param_3, local_30);
                }
            }
        }
    }

    // 0x1000112a0, 192 bytes, placed by class name
    // HighlightManager::AddObjHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool, bool)
    void HighlightManager::AddObjHighlight(int param_1, CoordGrid* param_2, uint param_3, bool param_4, bool param_5) {
        CoordGrid* pCVar1;
        undefined8 uVar2;
        int iVar4;
        undefined7 in_register_00000081;
        undefined3 in_register_00000089;
        CoordGrid local_50;
        longlong local_40;

        register0x00000089 = in_register_00000089;
        if ((int)CONCAT71(in_register_00000081, param_4) == 0) {
            new (&local_50) rs2lib::CoordGrid(param_2);
        } else {
            pCVar1 = (CoordGrid*)Client::Instance();
            local_50.WorldCoordToSourceCoord(pCVar1);
        }
        uVar2 = GetObjHighlightMap(this, &local_50);
        iVar4 = local_50.ToBitPacked();
        local_40 = UniqueStaticEntityKey(param_1, iVar4);
        if (AddEntityHighlight<long long>(this, &local_40, uVar2, param_3, 4)) {
            UpdateUniqueObjHighlight(this, local_40);
        }
        UpdateSave(this, &local_50, 4, param_3, (undefined1)param_5);
    }

    // 0x1000113b0, 96 bytes, placed by class name
    // HighlightManager::AddPlayerHighlight(eastl::string const&, unsigned int, bool)
    void HighlightManager::AddPlayerHighlight(basic_string* param_1, uint param_2, bool param_3) {
        bool bVar1;

        bVar1 = AddEntityHighlight<eastl::string>(this, param_1, &field_4168, param_2, 6);
        if (bVar1) {
            UpdateUniquePlayerHighlight(this, param_1);
        }
        UpdateSave(this, 6, param_2, param_3);
    }

    // 0x100011450, 96 bytes, placed by class name
    // HighlightManager::UpdateSave(HighlightCategory, int, bool)
    void HighlightManager::UpdateSave(int param_2, int param_3, int param_4) {
        array<HighlightChannelProperties, 32ul>* this_00;
        EntityHighlight* this_01;

        if (param_4 == 0) {
            this_00 = (array<HighlightChannelProperties, 32ul>*)
                std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                    (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_2);
            this_01 =
                (EntityHighlight*)std::array<HighlightChannelProperties, 32ul>::operator[](this_00, (long)param_3);
            if (this_01->SaveToFileEnable() != '\0') {
                OnHighlightUpdate(param_2);
            }
        }
    }

    // 0x1000114b0, 176 bytes, placed by class name
    // HighlightManager::AddTileHighlight(rs2lib::CoordGrid const&, unsigned int, bool, bool)
    void HighlightManager::AddTileHighlight(CoordGrid* param_1, uint param_2, bool param_3, bool param_4) {
        CoordGrid* pCVar1;
        undefined8 uVar2;
        undefined7 in_register_00000009;
        CoordGrid local_40;

        if ((int)CONCAT71(in_register_00000009, param_3) == 0) {
            new (&local_40) rs2lib::CoordGrid(param_1);
        } else {
            pCVar1 = (CoordGrid*)Client::Instance();
            local_40.WorldCoordToSourceCoord(pCVar1);
        }
        uVar2 = GetTileHighlightMap(this, &local_40);
        local_40._12_4_ = local_40.ToBitPacked();
        if (AddEntityHighlight<int>(this, &local_40.field_12, uVar2, param_2, 7)) {
            UpdateUniqueTileHighlight(this, local_40._12_4_);
        }
        UpdateSave(this, &local_40, 7, param_2, param_4);
    }

    // 0x1000115f0, 400 bytes, placed by class name
    // HighlightManager::AddNPCTypeHighlight(int, unsigned int, bool)
    void HighlightManager::AddNPCTypeHighlight(int param_1, uint param_2, bool param_3) {
        char cVar1;
        int iVar3;
        uint uVar4;
        HighlightedGroup* pHVar5;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* this_01;
        Client* this_02;
        long lVar6;
        uint* puVar7;
        undefined7 in_register_00000009;
        int iVar8;
        ulong uVar9;
        SeparatedIndexCount local_60[2];
        uint local_4c;
        HighlightedGroup* local_48;
        uint local_3c;
        uint local_38;
        char local_31;

        if (param_2 < 32) {
            uVar9 = CONCAT71(in_register_00000009, param_3) & 4294967295;
            local_3c = param_1;
            pHVar5 = (HighlightedGroup*)eastl::hash_map<
                int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                false>::operator[]((hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
                                             eastl::allocator, false>*)&field_4224,
                                   (int*)&local_3c);
            if (*(int*)pHVar5 == 0) {
                local_38 = (uint)CONCAT71(in_register_00000009, param_3);
                *(int*)pHVar5 = 1 << ((byte)param_2 & 31);
                local_48 = pHVar5;
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, 1);
                this_01 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (ulong)param_2);
                local_31 = this_01->IsEnabled();
                this_02 = (Client*)Client::Instance();
                iVar3 = this_02->GetLastNpcNum();
                if (iVar3 < 1) {
                } else {
                    iVar8 = 0;
                    local_4c = param_2;
                    do {
                        uVar4 = this_02->GetLastNpcId(iVar8);
                        lVar6 = this_02->GetClientNpc(uVar4);
                        if (lVar6 != 0) {
                            if (((lVar6 + 1024))->operator_cast_to_bool()) {
                                puVar7 = (uint*)shared_ptr<configdecoder::NpcType>::operator->(
                                    (shared_ptr<configdecoder::NpcType>*)(lVar6 + 1024));
                                if (*puVar7 == local_3c) {
                                    dash3d::AnimateBaseOperation::SeparatedIndexCount::SeparatedIndexCount(
                                        local_60, (ulong)local_3c, (ulong)uVar4);
                                    local_48->CacheEntity(local_60);
                                }
                            }
                        }
                        iVar8 = iVar8 + 1;
                    } while (iVar3 != iVar8);
                    this = (HighlightManager*)this;
                    param_2 = local_4c;
                }
                uVar9 = (ulong)local_38;
                pHVar5 = local_48;
                cVar1 = local_31;
            } else {
                cVar1 = AddNewChannelToMask(this, param_2, pHVar5, 1);
            }
            if (cVar1 != '\0') {
                UpdateCachedHighlights(this, pHVar5);
            }
            UpdateSave(this, 1, param_2, uVar9 & 255);
        }
    }

    // 0x1000117d0, 1248 bytes, placed by class name
    // HighlightManager::AddLocTypeHighlight(int, unsigned int, bool)
    void HighlightManager::AddLocTypeHighlight(int param_1, uint param_2, bool param_3) {
        int iVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        HighlightedGroup* pHVar5;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* this_01;
        long lVar6;
        undefined7 in_register_00000009;
        int iVar7;
        int iVar8;
        ulong uVar9;
        shared_ptr in_stack_fffffffffffffef8;
        shared_ptr<dash3d::Decor> asStack_f6[6];
        shared_ptr<RSevenDebugPresetProvider> local_f0[16];
        shared_ptr<dash3d::Decor> local_e0[16];
        shared_ptr<dash3d::Decor> local_d0[16];
        shared_ptr local_c0;
        CoordGrid* local_b0;
        CoordGrid local_a0;
        shared_ptr local_90;
        shared_ptr local_80;
        EntityWithCoord<dash3d::Decor> local_70[24];
        uint local_58;
        uint local_54;
        undefined8 local_50;
        HighlightedGroup* local_48;
        int local_40;
        int local_3c;
        int local_38;
        char local_31;

        if (param_2 < 32) {
            uVar9 = CONCAT71(in_register_00000009, param_3) & 4294967295;
            local_3c = param_1;
            pHVar5 = (HighlightedGroup*)eastl::hash_map<
                int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                false>::operator[]((hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
                                             eastl::allocator, false>*)&field_4280,
                                   &local_3c);
            if (*(int*)pHVar5 == 0) {
                local_54 = (uint)CONCAT71(in_register_00000009, param_3);
                *(int*)pHVar5 = 1 << ((byte)param_2 & 31);
                local_48 = pHVar5;
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, 3);
                local_58 = param_2;
                this_01 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (ulong)param_2);
                local_31 = this_01->IsEnabled();
                local_b0 = (CoordGrid*)Client::Instance();
                local_50 = ((local_b0 + 1199))->get();
                local_38 = 0;
                do {
                    iVar7 = 0;
                    do {
                        iVar8 = 0;
                        do {
                            iVar1 = local_38;
                            new (&local_a0) rs2lib::CoordGrid(local_38, iVar7, iVar8);
                            local_70->WorldCoordFromBuildCoord(local_b0);
                            local_40 = local_70->ToBitPacked();
                            dash3d::world::GetWall((int)&local_a0, (int)local_50, iVar1);
                            bVar3 = local_a0.operator_cast_to_bool();
                            if (bVar3) {
                                lVar6 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_a0);
                                iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar6 + 56));
                                iVar1 = local_3c;
                                if (iVar4 == local_3c) {
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_e0, (shared_ptr*)&local_a0);
                                    EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_70, local_40, iVar1,
                                                                                    in_stack_fffffffffffffef8);
                                    local_48->CacheEntity(local_70);
                                    local_70->~EntityWithCoord();
                                    local_e0->~shared_ptr();
                                }
                            }
                            dash3d::world::GetDecor((int)&local_90, (int)local_50, local_38);
                            bVar3 = shared_ptr::operator_cast_to_bool(&local_90);
                            if (bVar3) {
                                lVar6 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_90);
                                iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar6 + 64));
                                iVar1 = local_3c;
                                if (iVar4 == local_3c) {
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_d0, &local_90);
                                    EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_70, local_40, iVar1,
                                                                                    in_stack_fffffffffffffef8);
                                    local_48->CacheEntity(local_70);
                                    local_70->~EntityWithCoord();
                                    local_d0->~shared_ptr();
                                }
                            }
                            dash3d::world::GetScene((int)&local_80, (int)local_50, local_38);
                            bVar3 = shared_ptr::operator_cast_to_bool(&local_80);
                            if (bVar3) {
                                lVar6 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_80);
                                iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar6 + 80));
                                iVar1 = local_3c;
                                if (iVar4 == local_3c) {
                                    shared_ptr<dash3d::Decor>::shared_ptr(asStack_f6 + -10, &local_80);
                                    EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_70, local_40, iVar1,
                                                                                    in_stack_fffffffffffffef8);
                                    local_48->CacheEntity(local_70);
                                    local_70->~EntityWithCoord();
                                    ((asStack_f6 + -10))->~shared_ptr();
                                }
                            }
                            dash3d::world::GetGd((int)&local_c0, (int)local_50, local_38);
                            bVar3 = shared_ptr::operator_cast_to_bool(&local_c0);
                            if (bVar3) {
                                lVar6 = shared_ptr<dash3d::GroundDecor>::operator->(
                                    (shared_ptr<dash3d::GroundDecor>*)&local_c0);
                                iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar6 + 32));
                                iVar1 = local_3c;
                                if (iVar4 == local_3c) {
                                    new (local_f0) shared_ptr<dash3d::Decor>(&local_c0);
                                    EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_70, local_40, iVar1,
                                                                                    in_stack_fffffffffffffef8);
                                    local_48->CacheEntity(local_70);
                                    local_70->~EntityWithCoord();
                                    local_f0->~shared_ptr();
                                }
                            }
                            local_c0.~shared_ptr();
                            local_80.~shared_ptr();
                            local_90.~shared_ptr();
                            local_a0.~shared_ptr();
                            iVar8 = iVar8 + 1;
                        } while (iVar8 != 103);
                        iVar7 = iVar7 + 1;
                    } while (iVar7 != 103);
                    local_38 = local_38 + 1;
                } while (local_38 != 4);
                uVar9 = (ulong)local_54;
                local_38 = 4;
                this = (HighlightManager*)this;
                param_2 = local_58;
                pHVar5 = local_48;
                cVar2 = local_31;
            } else {
                cVar2 = AddNewChannelToMask(this, param_2, pHVar5, 3);
            }
            if (cVar2 != '\0') {
                UpdateCachedHighlights(this, pHVar5);
            }
            UpdateSave(this, 3, param_2, uVar9 & 255);
        }
    }

    // 0x100011d40, 624 bytes, placed by class name
    // HighlightManager::AddObjTypeHighlight(int, unsigned int, bool)
    void HighlightManager::AddObjTypeHighlight(int param_1, uint param_2, bool param_3) {
        list<console::Line, eastl::allocator>* this_00;
        char cVar1;
        bool bVar2;
        HighlightedGroup* pHVar3;
        array<HighlightChannelProperties, 32ul>* this_01;
        HighlightChannelProperties* this_02;
        shared_ptr* this_03;
        long lVar4;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar5;
        int iVar6;
        ulong uVar7;
        shared_ptr in_stack_ffffffffffffff58;
        list<console::Line, eastl::allocator> local_98[2];
        list<console::Line, eastl::allocator> alStack_96[6];
        CoordGrid local_90;
        shared_ptr<dash3d::Decor> local_78[16];
        Client* local_68;
        HighlightedGroup* local_58;
        int local_50;
        int local_4c;
        uint local_48;
        uint local_44;
        int local_40;
        int local_3c;
        int local_38;
        char local_31;

        if (param_2 < 32) {
            uVar7 = CONCAT71(in_register_00000009, param_3) & 4294967295;
            local_40 = param_1;
            pHVar3 = (HighlightedGroup*)eastl::hash_map<
                int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                false>::operator[]((hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>,
                                             eastl::allocator, false>*)&field_4336,
                                   &local_40);
            if (*(int*)pHVar3 == 0) {
                local_44 = (uint)CONCAT71(in_register_00000009, param_3);
                *(int*)pHVar3 = 1 << ((byte)param_2 & 31);
                local_58 = pHVar3;
                this_01 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, 5);
                local_48 = param_2;
                this_02 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_01, (ulong)param_2);
                local_31 = this_02->IsEnabled();
                local_38 = 0;
                local_68 = (Client*)Client::Instance();
                this_00 = local_98 + -8;
                do {
                    local_3c = 0;
                    do {
                        iVar6 = 0;
                        do {
                            new (&local_90) rs2lib::CoordGrid(local_38, local_3c, iVar6);
                            local_68->GetObjectsOnTile(&local_90);
                            eastl::list<console::Line, eastl::allocator>::begin(this_00);
                            eastl::list<console::Line, eastl::allocator>::end(local_98);
                            phVar5 = extraout_RDX;
                            while (bVar2 =
                                       eastl::operator!=((eastl*)this_00, (hashtable_iterator_base*)local_98, phVar5),
                                   bVar2) {
                                this_03 = (shared_ptr*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)this_00);
                                bVar2 = shared_ptr::operator_cast_to_bool(this_03);
                                if ((bVar2) &&
                                    (lVar4 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_03),
                                     *(int*)(lVar4 + 24) == local_40)) {
                                    local_50 = rs2lib::CoordGrid::BitPack(local_38, local_3c, iVar6);
                                    local_4c = local_40;
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_78, this_03);
                                    new (&local_90)
                                        EntityWithCoord<dash3d::Decor>(local_50, local_4c, in_stack_ffffffffffffff58);
                                    local_58->CacheEntity((EntityWithCoord*)&local_90);
                                    local_90.~EntityWithCoord();
                                    local_78->~shared_ptr();
                                }
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)this_00);
                                phVar5 = extraout_RDX_00;
                            }
                            iVar6 = iVar6 + 1;
                        } while (iVar6 != 103);
                        local_3c = local_3c + 1;
                    } while (local_3c != 103);
                    local_38 = local_38 + 1;
                } while (local_38 != 4);
                uVar7 = (ulong)local_44;
                local_3c = 103;
                local_38 = 4;
                this = (HighlightManager*)this;
                pHVar3 = local_58;
                param_2 = local_48;
                cVar1 = local_31;
            } else {
                cVar1 = AddNewChannelToMask(this, param_2, pHVar3, 5);
            }
            if (cVar1 != '\0') {
                UpdateCachedHighlights(this, pHVar3);
            }
            UpdateSave(this, 5, param_2, uVar7 & 255);
        }
    }

    // 0x100011fd0, 2352 bytes, placed by class name
    // HighlightManager::AddOpGroupHighlight(OpGroup const&, unsigned int, bool)
    void HighlightManager::AddOpGroupHighlight(OpGroup* param_1, uint param_2, bool param_3) {
        Client* pCVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        int iVar5;
        HighlightedGroup* pHVar6;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* this_01;
        shared_ptr* this_02;
        ClientObj* pCVar7;
        long lVar8;
        ClientNpc* pCVar9;
        uint* puVar10;
        shared_ptr<configdecoder::LocType>* psVar11;
        LocType* pLVar12;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar13;
        ulong uVar14;
        int iVar15;
        shared_ptr in_stack_fffffffffffffd88;
        shared_ptr<dash3d::Decor> local_108[16];
        shared_ptr<RSevenDebugPresetProvider> local_f8[16];
        shared_ptr<dash3d::Decor> local_e8[16];
        shared_ptr<dash3d::Decor> local_d8[16];
        shared_ptr<dash3d::Decor> local_c8[16];
        shared_ptr local_b8;
        CoordGrid local_a8;
        shared_ptr local_98;
        CoordGrid local_88;
        Client* local_70;
        HighlightManager* local_68;
        int local_60;
        OpGroup* local_58;
        uint local_50;
        uint local_4c;
        HighlightedGroup* local_48;
        int local_40;
        int local_3c;
        int local_38;
        char local_31;

        if (31 < param_2) {
            return;
        }
        uVar14 = CONCAT71(in_register_00000009, param_3) & 4294967295;
        pHVar6 = (HighlightedGroup*)eastl::hash_map<
            OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
            false>::operator[]((hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>,
                                         eastl::allocator, false>*)&field_4392,
                               param_1);
        if (*(int*)pHVar6 == 0) {
            *(int*)pHVar6 = 1 << ((byte)param_2 & 31);
            this_00 = (array<HighlightChannelProperties, 32ul>*)
                std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                    (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, 8);
            this_01 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                this_00, (ulong)param_2);
            local_31 = this_01->IsEnabled();
            local_70 = (Client*)Client::Instance();
            iVar15 = param_1->field_0;
            uVar4 = (uint)CONCAT71(in_register_00000009, param_3);
            if (iVar15 == 2) {
                local_58 = param_1;
                iVar15 = local_70->GetLastNpcNum();
                cVar2 = local_31;
                if (iVar15 < 1)
                    goto joined_r0x000100012757;
                iVar5 = 0;
                local_68 = this;
                local_50 = param_2;
                local_4c = uVar4;
                local_48 = pHVar6;
                do {
                    pCVar1 = local_70;
                    uVar4 = local_70->GetLastNpcId(iVar5);
                    pCVar9 = (ClientNpc*)pCVar1->GetClientNpc(uVar4);
                    if (pCVar9 != (ClientNpc*)0) {
                        (((long)register0x00000020 + -624))->Create(pCVar9);
                        cVar2 = (((long)register0x00000020 + -624))->MatchPattern(local_58, true);
                        if (cVar2 != '\0') {
                            puVar10 = (uint*)shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)&pCVar9->field_1024);
                            new (&local_88)
                                dash3d::AnimateBaseOperation::SeparatedIndexCount((ulong)*puVar10, (ulong)uVar4);
                            local_48->CacheEntity((NpcUID*)&local_88);
                        }
                        (((long)register0x00000020 + -624))->~OpGroup();
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar15 != iVar5);
            } else if (iVar15 == 3) {
                local_68 = this;
                local_58 = param_1;
                local_50 = param_2;
                local_4c = uVar4;
                local_48 = pHVar6;
                _local_60 = (&local_70->field_19184)->get();
                local_38 = 0;
                pCVar1 = (Client*)((long)register0x00000020 + -624);
                do {
                    local_40 = 0;
                    do {
                        iVar15 = 0;
                        do {
                            iVar5 = local_38;
                            new (&local_88) rs2lib::CoordGrid(local_38, local_40, iVar15);
                            pCVar1->WorldCoordFromBuildCoord(local_70);
                            local_3c = pCVar1->ToBitPacked();
                            dash3d::world::GetWall((int)&local_88, (int)_local_60, iVar5);
                            bVar3 = local_88.operator_cast_to_bool();
                            if (bVar3) {
                                lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_88);
                                iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar8 + 56));
                                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar5);
                                pLVar12 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(psVar11);
                                pCVar1->Create(pLVar12);
                                cVar2 = pCVar1->MatchPattern(local_58, true);
                                pCVar1->~OpGroup();
                                if (cVar2 != '\0') {
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_108, (shared_ptr*)&local_88);
                                    new (pCVar1)
                                        EntityWithCoord<dash3d::Decor>(local_3c, iVar5, in_stack_fffffffffffffd88);
                                    local_48->CacheEntity(pCVar1);
                                    pCVar1->~EntityWithCoord();
                                    local_108->~shared_ptr();
                                }
                            }
                            dash3d::world::GetDecor((int)&local_a8, (int)_local_60, local_38);
                            bVar3 = local_a8.operator_cast_to_bool();
                            if (bVar3) {
                                lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_a8);
                                iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar8 + 64));
                                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar5);
                                pLVar12 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(psVar11);
                                pCVar1->Create(pLVar12);
                                cVar2 = pCVar1->MatchPattern(local_58, true);
                                pCVar1->~OpGroup();
                                if (cVar2 != '\0') {
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_e8, (shared_ptr*)&local_a8);
                                    new (pCVar1)
                                        EntityWithCoord<dash3d::Decor>(local_3c, iVar5, in_stack_fffffffffffffd88);
                                    local_48->CacheEntity(pCVar1);
                                    pCVar1->~EntityWithCoord();
                                    local_e8->~shared_ptr();
                                }
                            }
                            dash3d::world::GetScene((int)&local_98, (int)_local_60, local_38);
                            bVar3 = shared_ptr::operator_cast_to_bool(&local_98);
                            if (bVar3) {
                                lVar8 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_98);
                                iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar8 + 80));
                                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar5);
                                pLVar12 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(psVar11);
                                pCVar1->Create(pLVar12);
                                cVar2 = pCVar1->MatchPattern(local_58, true);
                                pCVar1->~OpGroup();
                                if (cVar2 != '\0') {
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_d8, &local_98);
                                    new (pCVar1)
                                        EntityWithCoord<dash3d::Decor>(local_3c, iVar5, in_stack_fffffffffffffd88);
                                    local_48->CacheEntity(pCVar1);
                                    pCVar1->~EntityWithCoord();
                                    local_d8->~shared_ptr();
                                }
                            }
                            dash3d::world::GetGd((int)&local_b8, (int)_local_60, local_38);
                            bVar3 = shared_ptr::operator_cast_to_bool(&local_b8);
                            if (bVar3) {
                                lVar8 = shared_ptr<dash3d::GroundDecor>::operator->(
                                    (shared_ptr<dash3d::GroundDecor>*)&local_b8);
                                iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar8 + 32));
                                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar5);
                                pLVar12 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(psVar11);
                                pCVar1->Create(pLVar12);
                                cVar2 = pCVar1->MatchPattern(local_58, true);
                                pCVar1->~OpGroup();
                                if (cVar2 != '\0') {
                                    new (local_f8) shared_ptr<dash3d::Decor>(&local_b8);
                                    new (pCVar1)
                                        EntityWithCoord<dash3d::Decor>(local_3c, iVar5, in_stack_fffffffffffffd88);
                                    local_48->CacheEntity(pCVar1);
                                    pCVar1->~EntityWithCoord();
                                    local_f8->~shared_ptr();
                                }
                            }
                            local_b8.~shared_ptr();
                            local_98.~shared_ptr();
                            local_a8.~shared_ptr();
                            local_88.~shared_ptr();
                            iVar15 = iVar15 + 1;
                        } while (iVar15 != 103);
                        local_40 = local_40 + 1;
                    } while (local_40 != 103);
                    local_38 = local_38 + 1;
                    local_40 = 103;
                } while (local_38 != 4);
            } else {
                cVar2 = local_31;
                if (iVar15 != 4)
                    goto joined_r0x000100012757;
                local_38 = 0;
                local_68 = this;
                local_58 = param_1;
                local_50 = param_2;
                local_4c = uVar4;
                local_48 = pHVar6;
                do {
                    local_3c = 0;
                    do {
                        iVar15 = 0;
                        do {
                            iVar5 = local_3c;
                            new (&local_a8) rs2lib::CoordGrid(local_38, local_3c, iVar15);
                            pCVar1 = local_70;
                            local_88.WorldCoordFromBuildCoord(local_70);
                            local_40 = local_88.ToBitPacked();
                            local_60 = iVar15;
                            new (&local_88) rs2lib::CoordGrid(local_38, iVar5, iVar15);
                            pCVar1->GetObjectsOnTile(&local_88);
                            local_a8.begin();
                            local_98.end();
                            phVar13 = extraout_RDX;
                            while (bVar3 = eastl::operator!=((eastl*)&local_a8, (hashtable_iterator_base*)&local_98,
                                                             phVar13),
                                   bVar3) {
                                this_02 = (shared_ptr*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_a8);
                                bVar3 = shared_ptr::operator_cast_to_bool(this_02);
                                if (bVar3) {
                                    pCVar7 =
                                        (ClientObj*)shared_ptr<ClientObj>::operator*((shared_ptr<ClientObj>*)this_02);
                                    (((long)register0x00000020 + -624))->Create(pCVar7);
                                    cVar2 = (((long)register0x00000020 + -624))->MatchPattern(local_58, true);
                                    (((long)register0x00000020 + -624))->~OpGroup();
                                } else {
                                    cVar2 = '\0';
                                }
                                if (cVar2 != '\0') {
                                    lVar8 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_02);
                                    iVar15 = *(int*)(lVar8 + 24);
                                    shared_ptr<dash3d::Decor>::shared_ptr(local_c8, this_02);
                                    new (&local_88)
                                        EntityWithCoord<dash3d::Decor>(local_40, iVar15, in_stack_fffffffffffffd88);
                                    local_48->CacheEntity((EntityWithCoord*)&local_88);
                                    local_88.~EntityWithCoord();
                                    local_c8->~shared_ptr();
                                }
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_a8);
                                phVar13 = extraout_RDX_00;
                            }
                            iVar15 = local_60 + 1;
                        } while (iVar15 != 103);
                        local_3c = local_3c + 1;
                    } while (local_3c != 103);
                    local_38 = local_38 + 1;
                    local_3c = 103;
                } while (local_38 != 4);
            }
            uVar14 = (ulong)local_4c;
            pHVar6 = local_48;
            this = local_68;
            param_2 = local_50;
            cVar2 = local_31;
        } else {
            cVar2 = AddNewChannelToMask(this, param_2, pHVar6, 8);
        }
    joined_r0x000100012757:
        if (cVar2 != '\0') {
            UpdateCachedHighlights(this, pHVar6);
        }
        UpdateSave(this, 8, param_2, uVar14 & 255);
    }

    // 0x100012970, 80 bytes, placed by class name
    // HighlightManager::RemoveNPCHighlight(int, int, unsigned int)
    void HighlightManager::RemoveNPCHighlight(int param_1, int param_2, uint param_3) {
        longlong local_20;

        local_20 = UniqueNPCKey(param_1, param_2);
        if (RemoveEntityHighlight<long long>(this, &local_20, &field_4112, param_3, 0)) {
            UpdateUniqueNPCHighlightOrRemoveIfReused(this, local_20);
        }
    }

    // 0x1000129c0, 96 bytes, placed by class name
    // HighlightManager::RemovePlayerHighlight(eastl::string const&, unsigned int)
    void HighlightManager::RemovePlayerHighlight(basic_string* param_1, uint param_2) {
        bool bVar1;

        bVar1 = RemoveEntityHighlight<eastl::string>(this, param_1, &field_4168, param_2, 6);
        if (bVar1) {
            UpdateUniquePlayerHighlight(this, param_1);
        }
        UpdateSave(this, 6, param_2, 0);
    }

    // 0x100012dc0, 160 bytes, placed by class name
    // HighlightManager::IsLocHighlighted(int, int, unsigned int, bool)
    void HighlightManager::IsLocHighlighted(int param_1, int param_2, uint param_3, bool param_4) {
        hash_map* phVar1;
        int iVar3;
        CoordGrid local_48;
        longlong local_38;

        if ((ShouldRebuildRegionHighlightsForChannel(this, param_3, 2) != '\0') && (field_4305417 != false)) {
            ServiceRegionHighlights(this);
        }
        UnpackCoord((highlight*)&local_48, param_2, param_4, (int*)0);
        phVar1 = (hash_map*)GetLocHighlightMap(this, &local_48);
        iVar3 = local_48.ToBitPacked();
        local_38 = UniqueStaticEntityKey(param_1, iVar3);
        IsEntityHighlighted<long long>(this, &local_38, phVar1, param_3);
    }

    // 0x100012e60, 160 bytes, placed by class name
    // HighlightManager::IsObjHighlighted(int, int, unsigned int, bool)
    void HighlightManager::IsObjHighlighted(int param_1, int param_2, uint param_3, bool param_4) {
        hash_map* phVar1;
        int iVar3;
        CoordGrid local_48;
        longlong local_38;

        if ((ShouldRebuildRegionHighlightsForChannel(this, param_3, 4) != '\0') && (field_4305418 != false)) {
            ServiceRegionHighlights(this);
        }
        UnpackCoord((highlight*)&local_48, param_2, param_4, (int*)0);
        phVar1 = (hash_map*)GetObjHighlightMap(this, &local_48);
        iVar3 = local_48.ToBitPacked();
        local_38 = UniqueStaticEntityKey(param_1, iVar3);
        IsEntityHighlighted<long long>(this, &local_38, phVar1, param_3);
    }

    // 0x100012f00, 144 bytes, placed by class name
    // HighlightManager::IsTileHighlighted(int, unsigned int, bool)
    void HighlightManager::IsTileHighlighted(int param_1, uint param_2, bool param_3) {
        hash_map* phVar1;
        CoordGrid local_38;

        if ((ShouldRebuildRegionHighlightsForChannel(this, param_2, 7) != '\0') && (field_4305416 != '\0')) {
            ServiceRegionHighlights(this);
        }
        UnpackCoord((highlight*)&local_38, param_1, param_3, (int*)0);
        phVar1 = (hash_map*)GetTileHighlightMap(this, &local_38);
        local_38._12_4_ = local_38.ToBitPacked();
        IsEntityHighlighted<int>(this, (int*)&local_38.field_12, phVar1, param_2);
    }

    // 0x100013030, 48 bytes, placed by class name
    // HighlightManager::IsNPCTypeHighlighted(int, unsigned int)
    void HighlightManager::IsNPCTypeHighlighted(int param_1, uint param_2) {
        int local_c;

        local_c = param_1;
        IsGroupHighlighted<int>(this, &local_c, (hash_map*)&field_4224, param_2);
    }

    // 0x100013100, 48 bytes, placed by class name
    // HighlightManager::IsLocTypeHighlighted(int, unsigned int)
    void HighlightManager::IsLocTypeHighlighted(int param_1, uint param_2) {
        int local_c;

        local_c = param_1;
        IsGroupHighlighted<int>(this, &local_c, (hash_map*)&field_4280, param_2);
    }

    // 0x100013130, 48 bytes, placed by class name
    // HighlightManager::IsObjTypeHighlighted(int, unsigned int)
    void HighlightManager::IsObjTypeHighlighted(int param_1, uint param_2) {
        int local_c;

        local_c = param_1;
        IsGroupHighlighted<int>(this, &local_c, (hash_map*)&field_4336, param_2);
    }

    // 0x100013160, 32 bytes, placed by class name
    // HighlightManager::IsOpGroupHighlighted(OpGroup const&, unsigned int)
    void HighlightManager::IsOpGroupHighlighted(OpGroup* param_1, uint param_2) {
        IsGroupHighlighted<OpGroup>(this, param_1, (hash_map*)&field_4392, param_2);
    }

    // 0x100013810, 64 bytes, placed by class name
    // HighlightManager::GetHighlightProperties(int, HighlightCategory) const
    undefined8 HighlightManager::GetHighlightProperties(uint param_1, int param_3) {
        array<HighlightChannelProperties, 32ul>* this_00;
        undefined8 uVar1;

        if (param_1 < 32) {
            this_00 = (array<HighlightChannelProperties, 32ul>*)
                std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                    (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_3);
            uVar1 = std::array<HighlightChannelProperties, 32ul>::operator[](this_00, (long)(int)param_1);
            return uVar1;
        }
        return 0;
    }

    // 0x100013e90, 560 bytes, placed by class name
    // HighlightManager::OnNPCAdded(shared_ptr<ClientNpc> const&)
    void HighlightManager::OnNPCAdded(shared_ptr* param_1) {
        HighlightManager* pHVar1;
        bool bVar2;
        undefined4 uVar3;
        int iVar4;
        ClientNpc* pCVar6;
        int* piVar7;
        longlong* plVar8;
        long lVar9;
        undefined8 uVar10;
        HighlightChannelProperties* pHVar11;
        HighlightChannelProperties* pHVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        OpGroup local_1c8;
        undefined8 local_60;
        undefined8 local_58;
        NpcUID local_48[4];
        HighlightChannelProperties* local_38;

        pCVar6 = (ClientNpc*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)param_1);
        uVar3 = pCVar6->GetCreationCycle();
        local_38 = (HighlightChannelProperties*)CONCAT44(local_38._4_4_, uVar3);
        pCVar6 = (ClientNpc*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)param_1);
        iVar4 = pCVar6->GetUID();
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=((eastl*)&local_1c8, (hashtable_iterator_base*)local_48, extraout_RDX);
        if (bVar2) {
            do {
                piVar7 = (int*)local_1c8.HeapBeginPtr();
                if (iVar4 == *piVar7) {
                    plVar8 = (longlong*)local_1c8.HeapBeginPtr();
                    if (CreactionCycleFromNPCKey(*plVar8) != (int)local_38) {
                        new (&local_60)
                            eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                                (hashtable_iterator*)&local_1c8);
                        eastl::hashtable<
                            LoadingScreenScript::Keyframe*,
                            eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                            eastl::equal_to<LoadingScreenScript::Keyframe*>,
                            eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::erase(local_48, &field_4112, local_60, local_58);
                    }
                    break;
                }
                eastl::hashtable_iterator<eastl::pair<int const, SubInterface>, false, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, SubInterface>, false, false>*)local_48, (int)&local_1c8);
                eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator!=((eastl*)&local_1c8, (hashtable_iterator_base*)local_48, extraout_RDX_00);
            } while (bVar2);
        }
        local_1c8._0_8_ = UniqueNPCKey(iVar4, (int)local_38);
        pHVar1 = (HighlightManager*)this;
        local_38 = GetHighlightProperties<long long>((HighlightManager*)this, &local_1c8, &field_4112, 0);
        lVar9 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)param_1);
        uVar10 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)(lVar9 + 1024));
        new (&local_1c8) NpcUID(iVar4);
        pHVar11 = CacheAndGetGroupHighlightProperties<int, NpcUID>(pHVar1, uVar10, &pHVar1->field_4224, &local_1c8, 1);
        if (local_38 != (HighlightChannelProperties*)0) {
            pHVar11 = local_38;
        }
        pCVar6 = (ClientNpc*)shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)param_1);
        local_1c8.Create(pCVar6);
        NpcUID::NpcUID(local_48, iVar4);
        pHVar12 =
            CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(pHVar1, &local_1c8, &pHVar1->field_4392, local_48, 8);
        if (pHVar11 != (HighlightChannelProperties*)0) {
            pHVar12 = pHVar11;
        }
        if (pHVar12 != (HighlightChannelProperties*)0) {
            pCVar6 = (ClientNpc*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)param_1);
            pCVar6->SetHighlight(pHVar12);
        }
        local_1c8.~OpGroup();
    }

    // 0x100014300, 576 bytes, placed by class name
    // HighlightManager::OnWallLocAdded(shared_ptr<dash3d::Wall> const&, int, int, int, int)
    void HighlightManager::OnWallLocAdded(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5) {
        shared_ptr sVar1;
        shared_ptr sVar2;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        long lVar7;
        HighlightChannelProperties* pHVar8;
        HighlightChannelProperties* pHVar9;
        shared_ptr<configdecoder::LocType>* this;
        LocType* pLVar10;
        undefined4 in_register_00000034;
        unkbyte10 Var11;
        undefined8 in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor> aEStack_1e6[350];
        undefined1 local_88[16];
        EntityWithCoord<dash3d::Decor> local_78[24];
        shared_ptr<dash3d::Decor> local_60[16];
        shared_ptr<dash3d::Decor> local_50[16];
        shared_ptr* local_40;
        int local_34;

        local_40 = (shared_ptr*)CONCAT44(in_register_00000034, param_2);
        local_34 = param_3;
        if (!operator!=(local_40, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("wall != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1390, (char*)0);
        }
        iVar4 = Client::Instance();
        local_88->WorldCoordFromBuildCoord(iVar4, param_4, param_5);
        iVar5 = local_88->ToBitPacked();
        uVar6 = GetLocHighlightMap((HighlightManager*)param_1, (CoordGrid*)local_88);
        lVar7 = UniqueStaticEntityKey(local_34, iVar5);
        pHVar8 = GetHighlightProperties<long long>((HighlightManager*)param_1, aEStack_1e6 + -10, uVar6, 2);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_60, local_40);
        sVar1.field_8 = lVar7;
        sVar1._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(aEStack_1e6 + -10, iVar5, iVar4, sVar1);
        pHVar9 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall>>(
            (HighlightManager*)param_1, &local_34, &param_1[267].field_8, aEStack_1e6 + -10, 3);
        (aEStack_1e6 + -10)->~EntityWithCoord();
        local_60->~shared_ptr();
        if (pHVar8 != (HighlightChannelProperties*)0) {
            pHVar9 = pHVar8;
        }
        this = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_34);
        pLVar10 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(this);
        ((aEStack_1e6 + -10))->Create(pLVar10);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_50, local_40);
        sVar2.field_8 = lVar7;
        sVar2._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_78, iVar5, iVar4, sVar2);
        pHVar8 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall>>(
            (HighlightManager*)param_1, aEStack_1e6 + -10, &param_1[274].field_8, local_78, 8);
        local_78->~EntityWithCoord();
        local_50->~shared_ptr();
        if (pHVar9 != (HighlightChannelProperties*)0) {
            pHVar8 = pHVar9;
        }
        if (pHVar8 != (HighlightChannelProperties*)0) {
            Var11 = HighlightChannelProperties::CreateHighlightData(pHVar8);
            lVar7 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_40);
            *(unkbyte10*)(lVar7 + 64) = Var11;
        }
        ((aEStack_1e6 + -10))->~OpGroup();
    }

    // 0x1000146c0, 576 bytes, placed by class name
    // HighlightManager::OnDecorLocAdded(shared_ptr<dash3d::Decor> const&, int, int, int, int)
    void HighlightManager::OnDecorLocAdded(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5) {
        shared_ptr sVar1;
        shared_ptr sVar2;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        long lVar7;
        HighlightChannelProperties* pHVar8;
        HighlightChannelProperties* pHVar9;
        shared_ptr<configdecoder::LocType>* this;
        LocType* pLVar10;
        undefined4 in_register_00000034;
        unkbyte10 Var11;
        undefined8 in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor> aEStack_1e6[350];
        undefined1 local_88[16];
        EntityWithCoord<dash3d::Decor> local_78[24];
        shared_ptr<dash3d::Decor> local_60[16];
        shared_ptr<dash3d::Decor> local_50[16];
        shared_ptr* local_40;
        int local_34;

        local_40 = (shared_ptr*)CONCAT44(in_register_00000034, param_2);
        local_34 = param_3;
        if (!operator!=(local_40, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("decor != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1415, (char*)0);
        }
        iVar4 = Client::Instance();
        local_88->WorldCoordFromBuildCoord(iVar4, param_4, param_5);
        iVar5 = local_88->ToBitPacked();
        uVar6 = GetLocHighlightMap((HighlightManager*)param_1, (CoordGrid*)local_88);
        lVar7 = UniqueStaticEntityKey(local_34, iVar5);
        pHVar8 = GetHighlightProperties<long long>((HighlightManager*)param_1, aEStack_1e6 + -10, uVar6, 2);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_60, local_40);
        sVar1.field_8 = lVar7;
        sVar1._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(aEStack_1e6 + -10, iVar5, iVar4, sVar1);
        pHVar9 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor>>(
            (HighlightManager*)param_1, &local_34, &param_1[267].field_8, aEStack_1e6 + -10, 3);
        (aEStack_1e6 + -10)->~EntityWithCoord();
        local_60->~shared_ptr();
        if (pHVar8 != (HighlightChannelProperties*)0) {
            pHVar9 = pHVar8;
        }
        this = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_34);
        pLVar10 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(this);
        ((aEStack_1e6 + -10))->Create(pLVar10);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_50, local_40);
        sVar2.field_8 = lVar7;
        sVar2._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_78, iVar5, iVar4, sVar2);
        pHVar8 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor>>(
            (HighlightManager*)param_1, aEStack_1e6 + -10, &param_1[274].field_8, local_78, 8);
        local_78->~EntityWithCoord();
        local_50->~shared_ptr();
        if (pHVar9 != (HighlightChannelProperties*)0) {
            pHVar8 = pHVar9;
        }
        if (pHVar8 != (HighlightChannelProperties*)0) {
            Var11 = HighlightChannelProperties::CreateHighlightData(pHVar8);
            lVar7 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_40);
            *(unkbyte10*)(lVar7 + 76) = Var11;
        }
        ((aEStack_1e6 + -10))->~OpGroup();
    }

    // 0x100014a80, 576 bytes, placed by class name
    // HighlightManager::OnGroundDecorLocAdded(shared_ptr<dash3d::GroundDecor> const&, int, int, int, int)
    void HighlightManager::OnGroundDecorLocAdded(shared_ptr* param_1, int param_2, int param_3, int param_4,
                                                 int param_5) {
        shared_ptr sVar1;
        shared_ptr sVar2;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        long lVar7;
        HighlightChannelProperties* pHVar8;
        HighlightChannelProperties* pHVar9;
        shared_ptr<configdecoder::LocType>* this;
        LocType* pLVar10;
        undefined4 in_register_00000034;
        unkbyte10 Var11;
        undefined8 in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor> aEStack_1e6[350];
        undefined1 local_88[16];
        EntityWithCoord<dash3d::Decor> local_78[24];
        shared_ptr<dash3d::Decor> local_60[16];
        shared_ptr<dash3d::Decor> local_50[16];
        shared_ptr* local_40;
        int local_34;

        local_40 = (shared_ptr*)CONCAT44(in_register_00000034, param_2);
        local_34 = param_3;
        if (!operator!=(local_40, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("groundDecor != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1440, (char*)0);
        }
        iVar4 = Client::Instance();
        local_88->WorldCoordFromBuildCoord(iVar4, param_4, param_5);
        iVar5 = local_88->ToBitPacked();
        uVar6 = GetLocHighlightMap((HighlightManager*)param_1, (CoordGrid*)local_88);
        lVar7 = UniqueStaticEntityKey(local_34, iVar5);
        pHVar8 = GetHighlightProperties<long long>((HighlightManager*)param_1, aEStack_1e6 + -10, uVar6, 2);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_60, local_40);
        sVar1.field_8 = lVar7;
        sVar1._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(aEStack_1e6 + -10, iVar5, iVar4, sVar1);
        pHVar9 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor>>(
            (HighlightManager*)param_1, &local_34, &param_1[267].field_8, aEStack_1e6 + -10, 3);
        (aEStack_1e6 + -10)->~EntityWithCoord();
        local_60->~shared_ptr();
        if (pHVar8 != (HighlightChannelProperties*)0) {
            pHVar9 = pHVar8;
        }
        this = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_34);
        pLVar10 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(this);
        ((aEStack_1e6 + -10))->Create(pLVar10);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_50, local_40);
        sVar2.field_8 = lVar7;
        sVar2._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_78, iVar5, iVar4, sVar2);
        pHVar8 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor>>(
            (HighlightManager*)param_1, aEStack_1e6 + -10, &param_1[274].field_8, local_78, 8);
        local_78->~EntityWithCoord();
        local_50->~shared_ptr();
        if (pHVar9 != (HighlightChannelProperties*)0) {
            pHVar8 = pHVar9;
        }
        if (pHVar8 != (HighlightChannelProperties*)0) {
            Var11 = HighlightChannelProperties::CreateHighlightData(pHVar8);
            lVar7 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)local_40);
            *(unkbyte10*)(lVar7 + 44) = Var11;
        }
        ((aEStack_1e6 + -10))->~OpGroup();
    }

    // 0x100014e40, 576 bytes, placed by class name
    // HighlightManager::OnSceneryLocAdded(shared_ptr<dash3d::Sprite> const&, int, int, int, int)
    void HighlightManager::OnSceneryLocAdded(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5) {
        shared_ptr sVar1;
        shared_ptr sVar2;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        long lVar7;
        HighlightChannelProperties* pHVar8;
        HighlightChannelProperties* pHVar9;
        shared_ptr<configdecoder::LocType>* this;
        LocType* pLVar10;
        undefined4 in_register_00000034;
        unkbyte10 Var11;
        undefined8 in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor> aEStack_1e6[350];
        undefined1 local_88[16];
        EntityWithCoord<dash3d::Decor> local_78[24];
        shared_ptr<dash3d::Decor> local_60[16];
        shared_ptr<dash3d::Decor> local_50[16];
        shared_ptr* local_40;
        int local_34;

        local_40 = (shared_ptr*)CONCAT44(in_register_00000034, param_2);
        local_34 = param_3;
        if (!operator!=(local_40, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("scenery != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1465, (char*)0);
        }
        iVar4 = Client::Instance();
        local_88->WorldCoordFromBuildCoord(iVar4, param_4, param_5);
        iVar5 = local_88->ToBitPacked();
        uVar6 = GetLocHighlightMap((HighlightManager*)param_1, (CoordGrid*)local_88);
        lVar7 = UniqueStaticEntityKey(local_34, iVar5);
        pHVar8 = GetHighlightProperties<long long>((HighlightManager*)param_1, aEStack_1e6 + -10, uVar6, 2);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_60, local_40);
        sVar1.field_8 = lVar7;
        sVar1._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(aEStack_1e6 + -10, iVar5, iVar4, sVar1);
        pHVar9 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite>>(
            (HighlightManager*)param_1, &local_34, &param_1[267].field_8, aEStack_1e6 + -10, 3);
        (aEStack_1e6 + -10)->~EntityWithCoord();
        local_60->~shared_ptr();
        if (pHVar8 != (HighlightChannelProperties*)0) {
            pHVar9 = pHVar8;
        }
        this = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_34);
        pLVar10 = (LocType*)shared_ptr<configdecoder::LocType>::operator*(this);
        ((aEStack_1e6 + -10))->Create(pLVar10);
        iVar4 = local_34;
        shared_ptr<dash3d::Decor>::shared_ptr(local_50, local_40);
        sVar2.field_8 = lVar7;
        sVar2._0_8_ = in_stack_fffffffffffffe08;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_78, iVar5, iVar4, sVar2);
        pHVar8 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite>>(
            (HighlightManager*)param_1, aEStack_1e6 + -10, &param_1[274].field_8, local_78, 8);
        local_78->~EntityWithCoord();
        local_50->~shared_ptr();
        if (pHVar9 != (HighlightChannelProperties*)0) {
            pHVar8 = pHVar9;
        }
        if (pHVar8 != (HighlightChannelProperties*)0) {
            Var11 = HighlightChannelProperties::CreateHighlightData(pHVar8);
            lVar7 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)local_40);
            *(unkbyte10*)(lVar7 + 92) = Var11;
        }
        ((aEStack_1e6 + -10))->~OpGroup();
    }

    // 0x100015200, 560 bytes, placed by class name
    // HighlightManager::OnObjAdded(shared_ptr<ClientObj> const&, int, int, int)
    void HighlightManager::OnObjAdded(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        shared_ptr sVar1;
        shared_ptr sVar2;
        shared_ptr* this_00;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        long lVar6;
        undefined8 uVar7;
        long lVar8;
        Language* pLVar9;
        ClientObj* pCVar10;
        Language* pLVar11;
        SystemSettings* this_01;
        OpGroup aOStackY_a9f8[128];
        long in_stack_fffffffffffffe10;
        undefined1 local_90[16];
        EntityWithCoord<dash3d::Decor> local_80[24];
        shared_ptr<dash3d::Decor> local_68[16];
        shared_ptr<dash3d::Decor> local_58[16];
        Language* local_48;
        int local_3c;
        shared_ptr* local_38;

        local_38 = (shared_ptr*)CONCAT44(local_38._4_4_, param_4);
        iVar3 = Client::Instance();
        local_90->WorldCoordFromBuildCoord(iVar3, param_2, param_3);
        iVar4 = local_90->ToBitPacked();
        uVar5 = GetObjHighlightMap(this, (CoordGrid*)local_90);
        lVar6 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)param_1);
        uVar7 = UniqueStaticEntityKey(*(int*)(lVar6 + 24), iVar4);
        local_48 = (Language*)GetHighlightProperties<long long>(this, aOStackY_a9f8 + 128, uVar5, 4);
        lVar6 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)param_1);
        lVar8 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)param_1);
        iVar3 = *(int*)(lVar8 + 24);
        local_38 = param_1;
        shared_ptr<dash3d::Decor>::shared_ptr(local_68, param_1);
        sVar1.field_8 = in_stack_fffffffffffffe10;
        sVar1._0_8_ = uVar7;
        local_3c = iVar4;
        new ((aOStackY_a9f8 + 128)) EntityWithCoord<dash3d::Decor>(iVar4, iVar3, sVar1);
        pLVar9 = (Language*)CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj>>(
            this, lVar6 + 24, &field_4336, aOStackY_a9f8 + 128, 5);
        ((aOStackY_a9f8 + 128))->~EntityWithCoord();
        local_68->~shared_ptr();
        this_00 = local_38;
        if (local_48 != (Language*)0) {
            pLVar9 = local_48;
        }
        pCVar10 = (ClientObj*)shared_ptr<ClientObj>::operator*((shared_ptr<ClientObj>*)local_38);
        (aOStackY_a9f8 + 128)->Create(pCVar10);
        lVar6 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00);
        iVar3 = *(int*)(lVar6 + 24);
        shared_ptr<dash3d::Decor>::shared_ptr(local_58, this_00);
        sVar2.field_8 = in_stack_fffffffffffffe10;
        sVar2._0_8_ = uVar7;
        EntityWithCoord<dash3d::Decor>::EntityWithCoord(local_80, local_3c, iVar3, sVar2);
        pLVar11 = (Language*)CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj>>(
            this, aOStackY_a9f8 + 128, &field_4392, local_80, 8);
        local_80->~EntityWithCoord();
        local_58->~shared_ptr();
        if (pLVar9 != (Language*)0) {
            pLVar11 = pLVar9;
        }
        if (pLVar11 != (Language*)0) {
            this_01 = (SystemSettings*)shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00);
            this_01->SetLanguage(pLVar11);
        }
        (aOStackY_a9f8 + 128)->~OpGroup();
    }

    // 0x1000155b0, 80 bytes, placed by class name
    // HighlightManager::OnPlayerAdded(ClientPlayer&)
    void HighlightManager::OnPlayerAdded(ClientPlayer* param_1) {
        DisplayName* this_00;
        undefined8 uVar1;
        HighlightChannelProperties* pHVar2;

        this_00 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
            (shared_ptr<rs2lib::social::DisplayName>*)&param_1->field_992);
        uVar1 = this_00->GetDisplayName();
        pHVar2 = GetHighlightProperties<eastl::string>(this, uVar1, &field_4168, 6);
        if (pHVar2 != (HighlightChannelProperties*)0) {
            param_1->SetHighlight(pHVar2);
        }
    }

    // 0x100015600, 192 bytes, placed by class name
    // HighlightManager::OnTileAdded(int, int, int)
    void HighlightManager::OnTileAdded(int param_1, int param_2, int param_3) {
        int iVar1;
        undefined8 uVar2;
        HighlightChannelProperties* pHVar3;
        long lVar4;
        world* this_00;
        undefined1 local_50[16];
        EntityHighlight local_40;

        iVar1 = Client::Instance();
        local_50->WorldCoordFromBuildCoord(iVar1, param_1, param_2);
        local_40._12_4_ = local_50->ToBitPacked();
        uVar2 = GetTileHighlightMap(this, (CoordGrid*)local_50);
        pHVar3 = GetHighlightProperties<int>(this, &local_40.field_12, uVar2, 7);
        if (pHVar3 != (HighlightChannelProperties*)0) {
            lVar4 = Client::Instance();
            this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar4 + 19184));
            local_40._0_10_ = HighlightChannelProperties::CreateHighlightData(pHVar3);
            this_00->SetTileHighlight(param_1, param_2, param_3, &local_40);
        }
    }

    // 0x1000156c0, 32 bytes, placed by class name
    // HighlightManager::RebuildRegionHighlights()
    void HighlightManager::RebuildRegionHighlights() {
        RebuildRegionHighlights(this, true, true, true);
    }

    // 0x1000156f0, 192 bytes, placed by class name
    // HighlightManager::AddEntityHighlight(unsigned int&, unsigned int, HighlightCategory) const
    ulong HighlightManager::AddEntityHighlight(uint* param_1, uint param_2, int param_4) {
        int iVar1;
        int iVar2;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* this_01;
        ulong uVar3;
        uint uVar4;

        if (31 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            1621, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_2, 31);
        }
        if (*param_1 == 0) {
            *param_1 = 1 << ((byte)param_2 & 31);
            this_00 = (array<HighlightChannelProperties, 32ul>*)
                std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                    (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_4);
            this_01 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                this_00, (ulong)param_2);
            uVar4 = this_01->IsEnabled();
            uVar3 = (ulong)uVar4;
        } else {
            iVar1 = GetActiveChannelFromBitmask(this, *param_1, param_4);
            uVar4 = *param_1 | 1 << (param_2 & 31);
            *param_1 = uVar4;
            iVar2 = GetActiveChannelFromBitmask(this, uVar4, param_4);
            uVar3 = CONCAT71((int7)((ulong)param_1 >> 8), iVar1 != iVar2);
        }
        return uVar3 & 4294967295;
    }

    // 0x1000157b0, 48 bytes, placed by class name
    // HighlightManager::GetHighlightProperties(unsigned int const&, HighlightCategory) const
    void HighlightManager::GetHighlightProperties(undefined4* param_1, undefined4 param_3) {
        undefined4 uVar1;

        uVar1 = GetActiveChannelFromBitmask(this, *param_1);
        GetHighlightProperties(this, uVar1, param_3);
    }

    // 0x100032350, 80 bytes, placed by class name
    // HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char, dash3d::EntityHighlightBitFlags)::$_0::operator()(rs2lib::CoordMapSquare const&) const
    /* HighlightManager::ConfigureChannel(HighlightCategory,
   int, unsigned short, unsigned short, unsigned char,
   dash3d::EntityHighlightBitFlags)::$_0::TEMPNAMEPLACEHOLDERVALUE(rs2lib::CoordMapSquare
   const&) const */

    void HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char,
                                            dash3d::EntityHighlightBitFlags)::$_0::operator()(CoordMapSquare* param_1) {
        HighlightManager* this_00;
        hash_map* phVar1;
        int iVar2;

        this_00 = *(HighlightManager**)this;
        iVar2 = GetMapSquareIndex(param_1);
        phVar1 = (hash_map*)
            std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                       eastl::allocator, false>,
                       25600ul>::operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                                   eastl::equal_to<long long>, eastl::allocator, false>,
                                                   25600ul>*)&this_00->field_4448,
                                            (long)iVar2);
        UpdateLocsOnConfigureChannel(this_00, phVar1, **(int**)(this + 8), *(bool*)*(undefined8*)(this + 16));
    }

    // 0x100032cd0, 80 bytes, placed by class name
    // HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char, dash3d::EntityHighlightBitFlags)::$_1::operator()(rs2lib::CoordMapSquare const&) const
    /* HighlightManager::ConfigureChannel(HighlightCategory,
   int, unsigned short, unsigned short, unsigned char,
   dash3d::EntityHighlightBitFlags)::$_1::TEMPNAMEPLACEHOLDERVALUE(rs2lib::CoordMapSquare
   const&) const */

    void HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char,
                                            dash3d::EntityHighlightBitFlags)::$_1::operator()(CoordMapSquare* param_1) {
        HighlightManager* this_00;
        hash_map* phVar1;
        int iVar2;

        this_00 = *(HighlightManager**)this;
        iVar2 = GetMapSquareIndex(param_1);
        phVar1 = (hash_map*)
            std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                       eastl::allocator, false>,
                       25600ul>::operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                                   eastl::equal_to<long long>, eastl::allocator, false>,
                                                   25600ul>*)&this_00->field_1438048,
                                            (long)iVar2);
        UpdateObjsOnConfigureChannel(this_00, phVar1, **(int**)(this + 8), *(bool*)*(undefined8*)(this + 16));
    }

    // 0x100033600, 80 bytes, placed by class name
    // HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char, dash3d::EntityHighlightBitFlags)::$_2::operator()(rs2lib::CoordMapSquare const&) const
    /* HighlightManager::ConfigureChannel(HighlightCategory,
   int, unsigned short, unsigned short, unsigned char,
   dash3d::EntityHighlightBitFlags)::$_2::TEMPNAMEPLACEHOLDERVALUE(rs2lib::CoordMapSquare
   const&) const */

    void HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char,
                                            dash3d::EntityHighlightBitFlags)::$_2::operator()(CoordMapSquare* param_1) {
        HighlightManager* this_00;
        hash_map* phVar1;
        int iVar2;

        this_00 = *(HighlightManager**)this;
        iVar2 = GetMapSquareIndex(param_1);
        phVar1 = (hash_map*)std::array<
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
            25600ul>::operator[]((array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                        eastl::allocator, false>,
                                        25600ul>*)&this_00->field_2871648,
                                 (long)iVar2);
        UpdateTilesOnConfigureChannel(this_00, phVar1, **(int**)(this + 8), *(bool*)*(undefined8*)(this + 16));
    }

    // 0x100035f50, 80 bytes, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_3::operator()(ClientNpc const&) const
    /* HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_3::TEMPNAMEPLACEHOLDERVALUE(ClientNpc
   const&) const */

    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_3::operator()(ClientNpc* param_1) {
        HighlightManager* this_00;
        longlong lVar1;
        int iVar2;
        int iVar3;

        this_00 = *(HighlightManager**)this;
        iVar2 = param_1->GetUID();
        iVar3 = param_1->GetCreationCycle();
        lVar1 = UniqueNPCKey(iVar2, iVar3);
        UpdateUniqueNPCHighlightOrRemoveIfReused(this_00, lVar1);
    }

} // namespace jag::oldscape::highlight

namespace jag::graphics {
    // 0x100010f60: the linker folded this into jag::FindClearLSB(unsigned int*), which has identical code
    FindClearLSB(unsigned int*);

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x1000117c0: the linker folded this into highlight::NpcUID::NpcUID(int, int), which has identical code
    AnimateBaseOperation::SeparatedIndexCount::SeparatedIndexCount(unsigned long, unsigned long);

} // namespace jag::oldscape::dash3d
