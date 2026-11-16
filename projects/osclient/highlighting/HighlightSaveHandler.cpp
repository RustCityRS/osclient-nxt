// projects/osclient/highlighting/HighlightSaveHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "HighlightSaveHandler.h"

namespace jag::oldscape::highlight {
    // 0x10000d270, 2512 bytes, placed by class name and debug map
    // HighlightSaveHandler::SaveChanges(eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>, 25600ul> const&, std::array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>, 25600ul> const&, std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)
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
   std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&) */

    void HighlightSaveHandler::SaveChanges(hash_map* param_1, hash_map* param_2, hash_map* param_3, hash_map* param_4,
                                           hash_map* param_5, array* param_6, array* param_7, array* param_8,
                                           array* param_9) {
        undefined1* puVar1;
        hash_map* phVar2;
        HighlightSaveHandler* this_00;
        char cVar3;
        uint uVar4;
        uint uVar5;
        int iVar6;
        undefined8 uVar7;
        int* piVar8;
        CoordMapSquare* pCVar9;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar10;
        void* pvVar11;
        long lVar12;
        undefined8* puVar13;
        undefined8* puVar14;
        byte bVar15;
        undefined8 local_11f8[48];
        undefined8 local_1078[48];
        undefined8 local_ef8[48];
        undefined8 local_d78[48];
        undefined8 local_bf8[48];
        undefined8 local_a78[48];
        undefined8 local_8f8[48];
        undefined8 local_778[48];
        undefined8 local_5f8[48];
        hash_map* local_478;
        hash_map* local_470;
        hash_map* local_468;
        hash_map* local_460;
        hash_map* local_458;
        eastl::string local_450[32];
        undefined8 local_430;
        CoordMapSquare* local_428;
        HighlightSaveHandler* local_420;
        function<void(File&, int)> local_418[48];
        function<void(File&, int)> local_3e8[48];
        function<void(File&, int)> local_3b8[48];
        function<void(File&, int)> local_388[48];
        function<void(File&, int)> local_358[48];
        function<void(File&, int)> local_328[48];
        function<void(File&, int)> local_2f8[48];
        function<void(File&, int)> local_2c8[48];
        GameShell3Cache local_298[12];
        Filename local_168[19];
        long local_38;

        bVar15 = 0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_478 = param_2;
        local_470 = param_3;
        local_468 = param_4;
        local_460 = param_5;
        local_458 = param_1;
        local_420 = this;
        local_298->GetAccountDirectory();
        Filename::operator/(local_168, (char*)local_298);
        local_298->~pair();
        cVar3 = local_168->Exists();
        if (cVar3 == '\0') {
            new (local_298) callstack::Callstack();
            local_168->CreateDirectories(local_298);
            cVar3 = local_298->IsValid();
            if (cVar3 != '\0') {
                uVar7 = logger::default_logger();
                local_11f8[0] = local_168->GetName();
                logger::Logger::Log(uVar7, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/highlighting/HighlightSaveHandler.cpp",
                                    383, "Error creating highlight directory at %s");
                if (cVar3 != '\0')
                    goto LAB_10000db2a;
            }
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 7);
        if (0 < *piVar8) {
            puVar1 = &local_420->field_440;
            pCVar9 = (CoordMapSquare*)puVar1->HeapBeginPtr();
            local_428 = (CoordMapSquare*)puVar1->end();
            if (pCVar9 != local_428) {
                do {
                    eastl::string::basic_string(local_450);
                    uVar4 = pCVar9->GetX();
                    uVar5 = pCVar9->GetZ();
                    eastl::string::append_sprintf((char*)local_450, "%d_%d.thl", (ulong)uVar4, (ulong)uVar5);
                    iVar6 = GetMapSquareIndex(pCVar9);
                    phVar10 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        std::array<
                            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                            false>,
                            25600ul>::operator[]((array<eastl::hash_map<int, unsigned int, eastl::hash<int>,
                                                                        eastl::equal_to<int>, eastl::allocator, false>,
                                                        25600ul>*)param_8,
                                                 (long)iVar6);
                    Filename::operator/((Filename*)local_298, local_168, (fixed_string*)local_450);
                    local_430 =
                        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(phVar10);
                    pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 7);
                    _memcpy(local_1078, pvVar11, 384);
                    std::function<void(File&, int)>::function<
                        HighlightSaveHandler::SaveChanges(
                            eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
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
                            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__17,
                        void>(local_2c8, phVar10);
                    puVar13 = local_1078;
                    puVar14 = local_11f8;
                    for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                        *puVar14 = *puVar13;
                        puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                        puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
                    }
                    SaveMapToFile(local_298, local_430, local_2c8);
                    std::function<void(File&, int)>::~function(local_2c8);
                    local_298->~pair();
                    eastl::string::~basic_string(local_450);
                    pCVar9 = (CoordMapSquare*)&pCVar9->field_8;
                } while (pCVar9 != local_428);
            }
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 2);
        if (0 < *piVar8) {
            puVar1 = &local_420->field_40;
            pCVar9 = (CoordMapSquare*)puVar1->HeapBeginPtr();
            local_428 = (CoordMapSquare*)puVar1->end();
            if (pCVar9 != local_428) {
                do {
                    eastl::string::basic_string(local_450);
                    uVar4 = pCVar9->GetX();
                    uVar5 = pCVar9->GetZ();
                    eastl::string::append_sprintf((char*)local_450, "%d_%d.lhl", (ulong)uVar4, (ulong)uVar5);
                    iVar6 = GetMapSquareIndex(pCVar9);
                    phVar10 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>,
                                   25600ul>::
                        operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                          eastl::equal_to<long long>, eastl::allocator, false>,
                                          25600ul>*)param_6,
                                   (long)iVar6);
                    Filename::operator/((Filename*)local_298, local_168, (fixed_string*)local_450);
                    local_430 =
                        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(phVar10);
                    pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 2);
                    _memcpy(local_ef8, pvVar11, 384);
                    std::function<void(File&, int)>::function<
                        HighlightSaveHandler::SaveChanges(
                            eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
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
                            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__18,
                        void>(local_2f8, phVar10);
                    puVar13 = local_ef8;
                    puVar14 = local_11f8;
                    for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                        *puVar14 = *puVar13;
                        puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                        puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
                    }
                    SaveMapToFile(local_298, local_430, local_2f8);
                    std::function<void(File&, int)>::~function(local_2f8);
                    local_298->~pair();
                    eastl::string::~basic_string(local_450);
                    pCVar9 = (CoordMapSquare*)&pCVar9->field_8;
                } while (pCVar9 != local_428);
            }
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 4);
        if (0 < *piVar8) {
            puVar1 = &local_420->field_240;
            pCVar9 = (CoordMapSquare*)puVar1->HeapBeginPtr();
            local_428 = (CoordMapSquare*)puVar1->end();
            if (pCVar9 != local_428) {
                do {
                    eastl::string::basic_string(local_450);
                    uVar4 = pCVar9->GetX();
                    uVar5 = pCVar9->GetZ();
                    eastl::string::append_sprintf((char*)local_450, "%d_%d.lhl", (ulong)uVar4, (ulong)uVar5);
                    iVar6 = GetMapSquareIndex(pCVar9);
                    phVar10 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        std::array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>,
                                   25600ul>::
                        operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                          eastl::equal_to<long long>, eastl::allocator, false>,
                                          25600ul>*)param_7,
                                   (long)iVar6);
                    Filename::operator/((Filename*)local_298, local_168, (fixed_string*)local_450);
                    local_430 =
                        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(phVar10);
                    pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 4);
                    _memcpy(local_d78, pvVar11, 384);
                    std::function<void(File&, int)>::function<
                        HighlightSaveHandler::SaveChanges(
                            eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
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
                            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__19,
                        void>(local_328, phVar10);
                    puVar13 = local_d78;
                    puVar14 = local_11f8;
                    for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                        *puVar14 = *puVar13;
                        puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                        puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
                    }
                    SaveMapToFile(local_298, local_430, local_328);
                    std::function<void(File&, int)>::~function(local_328);
                    local_298->~pair();
                    eastl::string::~basic_string(local_450);
                    pCVar9 = (CoordMapSquare*)&pCVar9->field_8;
                } while (pCVar9 != local_428);
            }
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 1);
        if (0 < *piVar8) {
            Filename::operator/((Filename*)local_298, (char*)local_168);
            phVar2 = local_478;
            uVar7 = local_478->size();
            pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 1);
            _memcpy(local_bf8, pvVar11, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                    eastl::equal_to<eastl::string>, eastl::allocator, false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
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
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__20,
                void>(local_358, phVar2);
            puVar13 = local_bf8;
            puVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
            }
            SaveMapToFile(local_298, uVar7, local_358);
            std::function<void(File&, int)>::~function(local_358);
            local_298->~pair();
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 3);
        if (0 < *piVar8) {
            Filename::operator/((Filename*)local_298, (char*)local_168);
            phVar2 = local_470;
            uVar7 = local_470->size();
            pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 3);
            _memcpy(local_a78, pvVar11, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                    eastl::equal_to<eastl::string>, eastl::allocator, false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
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
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__21,
                void>(local_388, phVar2);
            puVar13 = local_a78;
            puVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
            }
            SaveMapToFile(local_298, uVar7, local_388);
            std::function<void(File&, int)>::~function(local_388);
            local_298->~pair();
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 5);
        if (0 < *piVar8) {
            Filename::operator/((Filename*)local_298, (char*)local_168);
            phVar2 = local_468;
            uVar7 = local_468->size();
            pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 5);
            _memcpy(local_8f8, pvVar11, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                    eastl::equal_to<eastl::string>, eastl::allocator, false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
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
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__22,
                void>(local_3b8, phVar2);
            puVar13 = local_8f8;
            puVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
            }
            SaveMapToFile(local_298, uVar7, local_3b8);
            std::function<void(File&, int)>::~function(local_3b8);
            local_298->~pair();
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 8);
        if (0 < *piVar8) {
            Filename::operator/((Filename*)local_298, (char*)local_168);
            phVar2 = local_460;
            uVar7 = local_460->size();
            pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 8);
            _memcpy(local_778, pvVar11, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                    eastl::equal_to<eastl::string>, eastl::allocator, false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
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
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__23,
                void>(local_3e8, phVar2);
            puVar13 = local_778;
            puVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
            }
            SaveMapToFile(local_298, uVar7, local_3e8);
            std::function<void(File&, int)>::~function(local_3e8);
            local_298->~pair();
        }
        piVar8 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)local_420, 6);
        if (0 < *piVar8) {
            Filename::operator/((Filename*)local_298, (char*)local_168);
            phVar2 = local_458;
            uVar7 = local_458->size();
            pvVar11 = (void*)std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)param_9, 6);
            _memcpy(local_5f8, pvVar11, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                    eastl::equal_to<eastl::string>, eastl::allocator, false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
                    eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false> const&,
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
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__24,
                void>(local_418, phVar2);
            puVar13 = local_5f8;
            puVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
                puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
            }
            SaveMapToFile(local_298, uVar7, local_418);
            std::function<void(File&, int)>::~function(local_418);
            local_298->~pair();
        }
        this_00 = local_420;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        local_298[0]._0_4_ = 0;
        this_00->fill(local_298);
    LAB_10000db2a:
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000157f0, 80 bytes, placed by class name
    // HighlightSaveHandler::OnHighlightUpdate(HighlightCategory)
    void HighlightSaveHandler::OnHighlightUpdate(int param_2) {
        int* piVar1;

        if (param_2 == 9) {
            /* WARNING: Subroutine does not return */
            LogAssert("category != HighlightCategory::NUM_CATEGORIES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightSaveHandler.cpp",
                      23, (char*)0);
        }
        piVar1 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)this, (long)param_2);
        *piVar1 = *piVar1 + 1;
    }

    // 0x100015840, 160 bytes, placed by class name
    // HighlightSaveHandler::OnHighlightUpdate(HighlightCategory, rs2lib::CoordMapSquare const&)
    void HighlightSaveHandler::OnHighlightUpdate(int param_2, CoordMapSquare* param_3) {
        int* piVar2;
        CoordMapSquare* pCVar3;

        if (param_3->IsSource() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("mapSq.IsSource()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightSaveHandler.cpp",
                      34, (char*)0);
        }
        if (param_2 == 7) {
            pCVar3 = (CoordMapSquare*)&field_440;
        } else if (param_2 == 4) {
            pCVar3 = (CoordMapSquare*)&field_240;
        } else {
            if (param_2 != 2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "highlighting/HighlightSaveHandler.cpp",
                                47, "Invalid category");
            }
            pCVar3 = (CoordMapSquare*)&field_40;
        }
        eastl::fixed_vector<rs2lib::CoordMapSquare, 20ul, true, eastl::allocator>::push_back(pCVar3);
        piVar2 = (int*)std::array<int, 9ul>::operator[]((array<int, 9ul>*)this, (long)param_2);
        *piVar2 = *piVar2 + 1;
    }

    // 0x1000158f0, 64 bytes, placed by class name
    // HighlightSaveHandler::OnHighlightUpdate(HighlightCategory, unsigned char, unsigned char)
    void HighlightSaveHandler::OnHighlightUpdate(undefined4 param_2, int param_3, int param_4) {
        undefined1 local_28[8];

        new (local_28) sidebars::SideBarData(param_3, param_4);
        OnHighlightUpdate(this, param_2, (SideBarData*)local_28);
    }

    // 0x100015960, 848 bytes, placed by __FILE__ string
    // LoadHighlightsFromFile(Filename const&, std::function<void (eastl::string const&, int)>)
    /* LoadHighlightsFromFile(Filename const&, std::function<void
   (eastl::string const&, int)>) */

    undefined4 LoadHighlightsFromFile(Filename* param_1, basic_string* param_2, undefined8 param_3,
                                      undefined8 param_4) {
        char cVar1;
        bool bVar2;
        bool bVar3;
        uint uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long lVar8;
        undefined7 extraout_var;
        char* pcVar10;
        char* extraout_RDX;
        string local_1d0[32];
        File local_1b0;
        Callstack local_188;
        undefined4 local_174;
        ClientCompositeZone local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_188) callstack::Callstack();
        new (local_170) File(param_1, (Error*)&local_188);
        cVar1 = local_188.IsValid();
        if (cVar1 == '\0') {
            cVar1 = local_170->IsValid();
            local_174 = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8), 1);
            if (cVar1 == '\0')
                goto LAB_100015c1a;
            uVar4 = 4294967295;
            local_188._8_8_ = 0;
            do {
                cVar1 = local_170->IsValid();
                if (cVar1 == '\0') {
                LAB_100015c0c:
                    local_170->close(0);
                    goto LAB_100015c1a;
                }
                lVar8 = local_170->tell();
                if (local_170->length(0) <= lVar8)
                    goto LAB_100015c0c;
                local_1b0.readline();
                local_1b0.trim();
                if (uVar4 == 4294967295) {
                    bVar2 = IsNumber<eastl::string>((basic_string*)&local_1b0);
                    if (bVar2) {
                        pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        std::string::string<decltype(nullptr)>(local_1d0, pcVar10);
                        uVar4 = std::stoi(local_1d0, (ulong*)0, 10);
                        std::string::~string(local_1d0);
                        bVar2 = true;
                        if (31 < uVar4) {
                            bVar2 = false;
                            local_170->close(0);
                        }
                    } else {
                        bVar2 = false;
                        local_170->close(0);
                        uVar4 = 4294967295;
                    }
                } else if (((ulong)(byte)local_188.field_8 & 1) == 0) {
                    bVar2 = eastl::operator!=((basic_string*)&local_1b0, (value_type*)&DAT_100e35828);
                    if (bVar2) {
                        bVar2 = false;
                        local_170->close(0);
                    } else {
                        local_188._8_8_ = CONCAT71(extraout_var, 1);
                    LAB_100015a7a:
                        bVar2 = true;
                    }
                } else {
                    bVar3 = eastl::operator==((eastl*)&local_1b0, (basic_string*)&DAT_100e3582e, extraout_RDX);
                    bVar2 = true;
                    if (bVar3) {
                        uVar4 = 4294967295;
                        local_188._8_8_ = 0;
                        goto LAB_100015a7a;
                    }
                    local_1b0.find_first_not_of(' ', 0);
                    eastl::string::substr((ulong)local_1d0, (ulong)&local_1b0);
                    eastl::string::operator=((eastl::string*)&local_1b0, (basic_string*)local_1d0);
                    local_1d0->~basic_string();
                    std::function<void(eastl::stringconst&, int)>::operator()(param_2, (int)&local_1b0);
                }
                local_1b0.~basic_string();
            } while (bVar2);
        } else {
            uVar5 = logger::default_logger();
            uVar6 = param_1->GetName();
            local_1b0.GetErrorString();
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "highlighting/HighlightSaveHandler.cpp",
                                74, "Error reading highlight file %s: %s", uVar6, uVar7);
            local_1b0.~basic_string();
        }
        local_174 = 0;
    LAB_100015c1a:
        local_170->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_174;
    }

    // 0x100015de0, 128 bytes, placed by neighbouring functions
    // ParseInt(std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&)
    /* ParseInt(std::stringstream&) */

    undefined4 ParseInt(stringstream* param_1) {
        bool bVar1;
        undefined4 uVar2;
        string local_30[24];

        std::string::string(local_30);
        std::getline<char, std::char_traits<char>, std::allocator<char>>((istream*)param_1, local_30, ',');
        bVar1 = IsNumber<std::string>(local_30);
        uVar2 = 4294967295;
        if (bVar1) {
            uVar2 = std::stoi(local_30, (ulong*)0, 10);
        }
        std::string::~string(local_30);
        return uVar2;
    }

    // 0x100015ed0, 176 bytes, placed by neighbouring functions
    // ParseCoordinate(std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&, int, int)
    /* ParseCoordinate(std::stringstream&, int, int) */

    undefined8 ParseCoordinate(stringstream* param_1, int param_2, int param_3) {
        undefined4 uVar1;
        undefined8 uVar2;
        long lVar3;
        undefined8 local_40;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_40 = -1;
        lVar3 = 0;
        do {
            uVar1 = ParseInt(param_1);
            *(undefined4*)((long)&local_40 + lVar3 * 4) = uVar1;
            lVar3 = lVar3 + 1;
        } while (lVar3 != 3);
        uVar2 = 4294967295;
        if ((((uint)local_40 < 4) && (-1 < local_40)) && ((int)local_40._4_4_ < 64)) {
            if ((-1 < (int)4294967295) && ((int)4294967295 < 64)) {
                uVar2 = rs2lib::CoordGrid::BitPack((uint)local_40, local_40._4_4_ | param_2 << 6,
                                                   4294967295 | param_3 << 6);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x100015f80, 320 bytes, placed by neighbouring functions
    // ParseMapSquare(eastl::basic_string<char, BucketAllocatorEASTL> const&, int&, int&)
    ulong ParseMapSquare(basic_string* param_1, int* param_2, int* param_3) {
        bool bVar1;
        int iVar2;
        char* pcVar3;
        ulong uVar4;
        basic_string local_70[24];
        basic_string local_58[24];
        string local_40[24];

        param_1->find('_', 0);
        eastl::basic_string<char, BucketAllocatorEASTL>::substr((ulong)local_70, (ulong)param_1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        eastl::basic_string<char, BucketAllocatorEASTL>::substr((ulong)local_58, (ulong)param_1);
        bVar1 = IsNumber<eastl::basic_string<char, BucketAllocatorEASTL>>(local_58);
        if (bVar1) {
            bVar1 = IsNumber<eastl::basic_string<char, BucketAllocatorEASTL>>(local_70);
            if (bVar1) {
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::string::string<decltype(nullptr)>(local_40, pcVar3);
                iVar2 = std::stoi(local_40, (ulong*)0, 10);
                *param_2 = iVar2;
                std::string::~string(local_40);
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::string::string<decltype(nullptr)>(local_40, pcVar3);
                iVar2 = std::stoi(local_40, (ulong*)0, 10);
                *param_3 = iVar2;
                std::string::~string(local_40);
                uVar4 = CONCAT71((int7)((ulong)param_1 >> 8), 1);
                goto LAB_100016067;
            }
        }
        *param_2 = -1;
        *param_3 = -1;
        uVar4 = 0;
    LAB_100016067:
        local_58->~basic_string();
        local_70->~basic_string();
        return uVar4 & 4294967295;
    }

    // 0x100016280, 1552 bytes, placed by class name
    // HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager* param_1) {
        char cVar1;
        bool bVar2;
        long lVar3;
        function<void(eastl::stringconst&, int)>* pfVar4;
        Filename local_4c0;
        basic_string<char, BucketAllocatorEASTL> local_4a8[24];
        int* local_490;
        int* piStack_488;
        HighlightManager* local_480;
        int* local_478;
        int* piStack_470;
        HighlightManager* local_468;
        int* local_460;
        int* piStack_458;
        HighlightManager* local_450;
        long local_448;
        basic_string<char, BucketAllocatorEASTL> local_440[24];
        HighlightManager* local_428;
        int local_420;
        int local_41c;
        function<void(eastl::stringconst&, int)> local_418[48];
        function<void(eastl::stringconst&, int)> local_3e8[48];
        function<void(eastl::stringconst&, int)> local_3b8[48];
        function<void(eastl::stringconst&, int)> local_388[48];
        function<void(eastl::stringconst&, int)> local_358[48];
        function<void(eastl::stringconst&, int)> local_328[48];
        function<void(eastl::stringconst&, int)> local_2f8[48];
        function<void(eastl::stringconst&, int)> local_2c8[48];
        GameShell3Cache local_298[12];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_428 = param_1;
        local_298->GetAccountDirectory();
        Filename::operator/(local_168, (char*)local_298);
        local_298->~pair();
        cVar1 = local_168->Exists();
        if ((cVar1 != '\0') && (cVar1 = local_168->IsDirectoryEmpty(), cVar1 == '\0')) {
            local_298->GetAllFiles();
            lVar3 = local_298->HeapBeginPtr();
            local_448 = local_298->end();
            if (lVar3 != local_448) {
                do {
                    pfVar4 = local_328;
                    local_4c0.GetFile();
                    local_4c0.find_last_of('.', 18446744073709551615);
                    eastl::basic_string<char, BucketAllocatorEASTL>::substr((ulong)local_4a8, (ulong)&local_4c0);
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::basic_string<char, BucketAllocatorEASTL>::substr((ulong)local_440, (ulong)&local_4c0);
                    bVar2 = eastl::operator==((basic_string*)local_440, (value_type*)".hl");
                    if (bVar2) {
                        bVar2 = eastl::operator==((basic_string*)local_4a8, (value_type*)"npc");
                        if (bVar2) {
                            std::function<void(eastl::stringconst&, int)>::function<
                                HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__9, void>(local_2c8,
                                                                                                      local_428);
                            LoadHighlightsFromFile(lVar3, local_2c8);
                            std::function<void(eastl::stringconst&, int)>::~function(local_2c8);
                        } else {
                            bVar2 = eastl::operator==((basic_string*)local_4a8, (value_type*)"loc");
                            if (bVar2) {
                                std::function<void(eastl::stringconst&, int)>::function<
                                    HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__10, void>(local_2f8,
                                                                                                           local_428);
                                LoadHighlightsFromFile(lVar3, local_2f8);
                                std::function<void(eastl::stringconst&, int)>::~function(local_2f8);
                            } else {
                                bVar2 = eastl::operator==((basic_string*)local_4a8, (value_type*)"obj");
                                if (bVar2) {
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__11, void>(
                                        pfVar4, local_428);
                                    LoadHighlightsFromFile(lVar3, pfVar4);
                                } else {
                                    bVar2 = eastl::operator==((basic_string*)local_4a8, (value_type*)"groups");
                                    if (bVar2) {
                                        pfVar4 = local_358;
                                        std::function<void(eastl::stringconst&, int)>::function<
                                            HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__12, void>(
                                            pfVar4, local_428);
                                        LoadHighlightsFromFile(lVar3, pfVar4);
                                        goto LAB_1000164f7;
                                    }
                                    bVar2 = eastl::operator==((basic_string*)local_4a8, (value_type*)"player");
                                    if (!bVar2)
                                        goto LAB_100016360;
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__13, void>(
                                        local_388, local_428);
                                    LoadHighlightsFromFile(lVar3, local_388);
                                    pfVar4 = local_388;
                                }
                            LAB_100016356:
                                std::function<void(eastl::stringconst&, int)>::~function(pfVar4);
                            }
                        }
                    } else {
                        bVar2 = eastl::operator==((basic_string*)local_440, (value_type*)".thl");
                        if (bVar2) {
                            cVar1 = ParseMapSquare((basic_string*)local_4a8, &local_420, &local_41c);
                            if (cVar1 != '\0') {
                                local_490 = &local_420;
                                piStack_488 = &local_41c;
                                local_480 = local_428;
                                pfVar4 = local_3b8;
                                std::function<void(eastl::stringconst&, int)>::function<
                                    HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__14, void>(pfVar4);
                                LoadHighlightsFromFile(lVar3, pfVar4);
                            LAB_1000164f7:
                                std::function<void(eastl::stringconst&, int)>::~function(pfVar4);
                            }
                        } else {
                            bVar2 = eastl::operator==((basic_string*)local_440, (value_type*)".lhl");
                            if (bVar2) {
                                cVar1 = ParseMapSquare((basic_string*)local_4a8, &local_420, &local_41c);
                                if (cVar1 != '\0') {
                                    local_478 = &local_420;
                                    piStack_470 = &local_41c;
                                    local_468 = local_428;
                                    pfVar4 = local_3e8;
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__15, void>(pfVar4);
                                    LoadHighlightsFromFile(lVar3, pfVar4);
                                    goto LAB_100016356;
                                }
                            } else {
                                bVar2 = eastl::operator==((basic_string*)local_440, (value_type*)".ohl");
                                if ((bVar2) &&
                                    (cVar1 = ParseMapSquare((basic_string*)local_4a8, &local_420, &local_41c),
                                     cVar1 != '\0')) {
                                    local_460 = &local_420;
                                    piStack_458 = &local_41c;
                                    local_450 = local_428;
                                    pfVar4 = local_418;
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__16, void>(pfVar4);
                                    LoadHighlightsFromFile(lVar3, pfVar4);
                                    goto LAB_1000164f7;
                                }
                            }
                        }
                    }
                LAB_100016360:
                    eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_440);
                    eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_4a8);
                    local_4c0.~basic_string();
                    lVar3 = lVar3 + 304;
                } while (lVar3 != local_448);
            }
            local_298->~vector();
        }
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000169f0, 672 bytes, placed by __FILE__ string
    // SaveMapToFile(Filename const&, unsigned long, std::array<HighlightChannelProperties, 32ul>, std::function<void (File&, int)>)
    /* SaveMapToFile(Filename const&, unsigned long,
   std::array<HighlightChannelProperties, 32ul>, std::function<void (File&,
   int)>) */

    void SaveMapToFile(Filename* param_1, long param_2, File* param_3) {
        File* this;
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        EntityHighlight* this_00;
        ulong uVar5;
        array<HighlightChannelProperties, 32ul> aStack0000000000000008;
        Error local_198[8];
        undefined1 local_178[8];
        File local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_178) callstack::Callstack();
        if (param_2 == 0) {
            cVar1 = param_1->Exists();
            if (cVar1 != '\0') {
                param_1->RemoveFile(local_178);
                cVar1 = local_178->IsValid();
                if (cVar1 != '\0') {
                    uVar2 = logger::default_logger();
                    uVar3 = param_1->GetName();
                    ((local_178 + 8))->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar2, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/highlighting/HighlightSaveHandler.cpp",
                                        359, "Error deleting highlight file %s: %s", uVar3, uVar4);
                    ((local_178 + 8))->~basic_string();
                }
            }
        } else {
            new ((local_178 + 8)) File(param_1, 1538, local_178);
            cVar1 = local_178->IsValid();
            if (cVar1 == '\0') {
                this = (File*)(local_178 + 8);
                uVar5 = 0;
                do {
                    this_00 = (EntityHighlight*)std::array<HighlightChannelProperties, 32ul>::operator[](
                        &aStack0000000000000008, uVar5);
                    cVar1 = this_00->SaveToFileEnable();
                    if (cVar1 != '\0') {
                        new (local_198) eastl::string();
                        eastl::string::append_sprintf((char*)local_198, "%d\n{\n", uVar5 & 4294967295);
                        write(local_198, 0);
                        std::function<void(File&, int)>::operator()(param_3, (int)this);
                        write("}\n", 0);
                        local_198->~basic_string();
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 != 32);
                ((local_178 + 8))->close(0);
            } else {
                uVar2 = logger::default_logger();
                uVar3 = param_1->GetName();
                local_198->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/highlighting/HighlightSaveHandler.cpp",
                                    331, "Error creating highlight file %s: %s", uVar3, uVar4);
                local_198->~basic_string();
            }
            ((local_178 + 8))->~File();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::highlight
