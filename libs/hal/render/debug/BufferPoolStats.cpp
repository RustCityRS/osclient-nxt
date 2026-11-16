// libs/hal/render/debug/BufferPoolStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "BufferPoolStats.h"

namespace jag::render {
    // 0x103bdc768, 56 bytes, __common; zero-initialised
    BufferPoolStats::m_stats;

    // 0x100c0d690, 240 bytes, placed by class name and debug map
    // BufferPoolStats::RecordBufferCreation(char const*, unsigned int, unsigned int, BufferPoolStats::BufferCreationReason)
    void BufferPoolStats::RecordBufferCreation(char* param_1, uint param_2) {
        map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>* this;
        uint local_94;
        fixed_string<char, 64, true, eastl::allocator> local_90[104];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_94 = param_2;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_90, param_1);
        this = (map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>*)
            eastl::hash_map<
                eastl::fixed_string<char, 64, true, eastl::allocator>,
                eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>,
                eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                false>::operator[]((hash_map<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                             eastl::map<unsigned int, BufferPoolStats::PoolStats,
                                                        eastl::less<unsigned int>, eastl::allocator>,
                                             eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::allocator, false>*)&m_stats,
                                   (fixed_string*)local_90);
        eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>::operator[](
            this, &local_94);
        /* WARNING: Subroutine does not return */
        local_90->~fixed_string();
    }

    // 0x100c0da60, 224 bytes, placed by class name
    // BufferPoolStats::RecordBufferRecycle(char const*, unsigned int, unsigned int, unsigned int)
    void BufferPoolStats::RecordBufferRecycle(char* param_1, uint param_2, uint param_3, uint param_4) {
        map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>* this;
        uint local_90;
        uint local_8c;
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_90 = param_2;
        local_8c = param_4;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88, param_1);
        this = (map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>*)
            eastl::hash_map<
                eastl::fixed_string<char, 64, true, eastl::allocator>,
                eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>,
                eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                false>::operator[]((hash_map<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                             eastl::map<unsigned int, BufferPoolStats::PoolStats,
                                                        eastl::less<unsigned int>, eastl::allocator>,
                                             eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::allocator, false>*)&m_stats,
                                   (fixed_string*)local_88);
        eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>::operator[](
            this, &local_90);
        /* WARNING: Subroutine does not return */
        local_88->~fixed_string();
    }

    // 0x100c0dd40, 208 bytes, placed by class name
    // BufferPoolStats::RecordBufferDestruction(char const*, unsigned int, unsigned int, unsigned int)
    void BufferPoolStats::RecordBufferDestruction(char* param_1, uint param_2, uint param_3, uint param_4) {
        map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>* this;
        uint local_94;
        fixed_string<char, 64, true, eastl::allocator> local_90[104];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_94 = param_2;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_90, param_1);
        this = (map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>*)
            eastl::hash_map<
                eastl::fixed_string<char, 64, true, eastl::allocator>,
                eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>,
                eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                false>::operator[]((hash_map<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                             eastl::map<unsigned int, BufferPoolStats::PoolStats,
                                                        eastl::less<unsigned int>, eastl::allocator>,
                                             eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::allocator, false>*)&m_stats,
                                   (fixed_string*)local_90);
        eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>::operator[](
            this, &local_94);
        /* WARNING: Subroutine does not return */
        local_90->~fixed_string();
    }

    // 0x100c0e600, 192 bytes, placed by class name
    // BufferPoolStats::RecordEndOfFrameStats(char const*, unsigned int, unsigned int, unsigned int, unsigned int)
    void BufferPoolStats::RecordEndOfFrameStats(char* param_1, uint param_2, uint param_3, uint param_4, uint param_5) {
        map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>* this;
        uint local_9c;
        fixed_string<char, 64, true, eastl::allocator> local_98[104];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_9c = param_2;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_98, param_1);
        this = (map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>*)
            eastl::hash_map<
                eastl::fixed_string<char, 64, true, eastl::allocator>,
                eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>,
                eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                false>::operator[]((hash_map<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                             eastl::map<unsigned int, BufferPoolStats::PoolStats,
                                                        eastl::less<unsigned int>, eastl::allocator>,
                                             eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                                             eastl::allocator, false>*)&m_stats,
                                   (fixed_string*)local_98);
        eastl::map<unsigned int, BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>::operator[](
            this, &local_9c);
        /* WARNING: Subroutine does not return */
        local_98->~fixed_string();
    }

    // 0x100c0e6e0, 800 bytes, placed by class name
    // BufferPoolStats::PrintPoolUsage()
    void BufferPoolStats::PrintPoolUsage() {
        uint uVar1;
        uint uVar2;
        bool bVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        uint* puVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        uint uVar7;
        uint uVar8;
        float fVar9;
        hashtable_iterator_base local_c0[16];
        hashtable_iterator_base local_b0[8];
        eastl local_a8[16];
        eastl local_98[8];
        ulong local_90;
        ulong local_88;
        ulong local_80;
        undefined8 local_78;
        double local_70;
        ulong local_68;
        ulong local_60;
        double local_58;
        ulong local_50;
        ulong local_48;
        double local_40;
        uint local_34;

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar3 = eastl::operator!=(local_a8, local_c0, extraout_RDX);
        if (bVar3) {
            do {
                local_a8->HeapBeginPtr();
                uVar4 = logger::default_logger();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar4, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "debug/BufferPoolStats.cpp",
                                    88, "\n\n%s BufferPool stats:", uVar5);
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 7,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "debug/BufferPoolStats.cpp",
                                    89, "===========================================");
                eastl::vector<unsigned long,
                              eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                bVar3 = eastl::operator!=(local_98, local_b0, extraout_RDX_01);
                uVar7 = 0;
                uVar8 = 0;
                if (bVar3) {
                    uVar8 = 0;
                    uVar7 = 0;
                    do {
                        puVar6 = (uint*)eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                      local_98);
                        uVar8 = uVar8 + (puVar6[2] + puVar6[4]) * *puVar6;
                        local_34 = uVar7 + *puVar6 * puVar6[8];
                        local_78 = logger::default_logger();
                        local_90 = (ulong)*puVar6;
                        local_88 = (ulong)puVar6[2];
                        fVar9 = Bytes2Megabytes<unsigned int>(puVar6[2] * *puVar6);
                        local_70 = (double)fVar9;
                        local_80 = (ulong)puVar6[3];
                        fVar9 = Bytes2Megabytes<unsigned int>(*puVar6 * puVar6[3]);
                        local_58 = (double)fVar9;
                        uVar1 = puVar6[4];
                        fVar9 = Bytes2Megabytes<unsigned int>(*puVar6 * uVar1);
                        local_40 = (double)fVar9;
                        local_50 = (ulong)puVar6[1];
                        local_68 = (ulong)puVar6[5];
                        local_60 = (ulong)puVar6[6];
                        local_48 = (ulong)puVar6[7];
                        uVar2 = puVar6[8];
                        fVar9 = Bytes2Megabytes<unsigned int>(*puVar6 * uVar2);
                        uVar7 = local_34;
                        logger::Logger::Log(
                            local_70, local_58, local_40, (double)fVar9, local_78, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                            "BufferPoolStats.cpp",
                            109,
                            "%8u bytes: permanent: %4u (%5.2f MB), perm low-water: %4u (%5.2f MB), peakOverflow: %4u "
                            "(%5.2f MB), noneFree: %4u, noneReady: %4u, badFit: %4u, timesRecycled: %7u, numPooled: "
                            "%4u (%5.2f MB), minFrame: %3u, maxFrame: %3u",
                            local_90, local_88, local_80, uVar1, local_68, local_60, local_48, local_50, uVar2,
                            puVar6[9], puVar6[10]);
                        eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator++((rbtree_iterator<
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                       local_98);
                        bVar3 = eastl::operator!=(local_98, local_b0, extraout_RDX_02);
                    } while (bVar3);
                }
                uVar4 = logger::default_logger();
                fVar9 = Bytes2Megabytes<unsigned int>(uVar8);
                logger::Logger::Log(
                    (double)fVar9, uVar4, 0, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                    "BufferPoolStats.cpp",
                    111, "Peak GPU memory: %.2f MB (peak overflow + reserved, excluding overflow allocations in use)");
                uVar4 = logger::default_logger();
                fVar9 = Bytes2Megabytes<unsigned int>(uVar7);
                logger::Logger::Log((double)fVar9, uVar4, 0, 7,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "debug/BufferPoolStats.cpp",
                                    112, "Current GPU memory: %.2f MB (excluding buffers currently in use)\n");
                eastl::hashtable_iterator<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const,
                                                      eastl::map<unsigned int, BufferPoolStats::PoolStats,
                                                                 eastl::less<unsigned int>, eastl::allocator>>,
                                          false, false>::
                operator++((hashtable_iterator<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const,
                                                           eastl::map<unsigned int, BufferPoolStats::PoolStats,
                                                                      eastl::less<unsigned int>, eastl::allocator>>,
                                               false, false>*)local_a8);
                bVar3 = eastl::operator!=(local_a8, local_c0, extraout_RDX_00);
            } while (bVar3);
        }
    }

    // 0x100c0ea30, 32 bytes, placed by class name
    // BufferPoolStats::ResetStats()
    void BufferPoolStats::ResetStats() {
        m_stats.clear();
    }

} // namespace jag::render
