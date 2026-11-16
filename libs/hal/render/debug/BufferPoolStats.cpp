// libs/hal/render/debug/BufferPoolStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "BufferPoolStats.h"

namespace jag::render {
    // 0x103bdc768
    eastl::hash_map<eastl::fixed_string<char, 64>, eastl::map<unsigned int, BufferPoolStats::PoolStats>,
                    eastl::string_hash<eastl::fixed_string<char, 64>>>
        BufferPoolStats::m_stats;

    // 0x100759820: BufferPoolStats::PoolStats::PoolStats() has the same machine code as ImSpanAllocator<3>::ImSpanAllocator()

    // 0x10079e660: BufferPoolStats::PoolStats::PoolStats() has the same machine code as ImSpanAllocator<3>::ImSpanAllocator()

    // 0x100c0d690
    void BufferPoolStats::RecordBufferCreation(const char* str, unsigned int arg2, unsigned int arg3,
                                               BufferPoolStats::BufferCreationReason bufferCreationReason) {
        fixed_string<char, 64> local_90(this);
        map<unsigned int, BufferPoolStats::PoolStats>* this_00 = &m_stats[local_90];
        (*this_00)[(unsigned int)str];
    }

    // 0x100c0da60
    void BufferPoolStats::RecordBufferRecycle(const char* str, unsigned int arg2, unsigned int arg3,
                                              unsigned int arg4) {
        unsigned int local_8c = arg4;
        fixed_string<char, 64> local_88(str);
        map<unsigned int, BufferPoolStats::PoolStats>* map = &m_stats[local_88];
        (*map)[arg2];
    }

    // 0x100c0dd40
    void BufferPoolStats::RecordBufferDestruction(const char* str, unsigned int arg2, unsigned int arg3,
                                                  unsigned int arg4) {
        fixed_string<char, 64> local_90(this);
        map<unsigned int, BufferPoolStats::PoolStats>* this_00 = &m_stats[local_90];
        (*this_00)[(unsigned int)str];
    }

    // 0x100c0e600
    void BufferPoolStats::RecordEndOfFrameStats(const char* str, unsigned int arg2, unsigned int arg3,
                                                unsigned int arg4, unsigned int arg5) {
        fixed_string<char, 64> local_98(this);
        map<unsigned int, BufferPoolStats::PoolStats>* this_00 = &m_stats[local_98];
        (*this_00)[(unsigned int)str];
    }

    // 0x100c0e6e0
    void BufferPoolStats::PrintPoolUsage() {
        unsigned int uVar1;
        unsigned int uVar2;
        long lVar4;
        Logger* pLVar5;
        uint64_t uVar6;
        unsigned int* puVar7;
        unsigned int arg1;
        unsigned int arg1_00;
        float fVar8;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_b0;
        ReturnValue local_98;
        unsigned long local_90;
        unsigned long local_88;
        unsigned long local_80;
        Logger* local_78;
        double local_70;
        unsigned long local_68;
        unsigned long local_60;
        double local_58;
        unsigned long local_50;
        unsigned long local_48;
        double local_40;
        unsigned int local_34;

        auto local_a8 = m_stats.begin();
        auto local_c0 = m_stats.end();
        bool cVar3 = local_a8 != local_c0;
        while (cVar3) {
            lVar4 = local_a8.HeapBeginPtr();
            pLVar5 = logger::default_logger();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar5->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                        "BufferPoolStats.cpp",
                        88, "\n\n%s BufferPool stats:", uVar6);
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                        "BufferPoolStats.cpp",
                        89, "===========================================");
            local_98 = ((lVar4 + 104))->rbegin();
            local_b0.end();
            cVar3 = local_98 != local_b0;
            arg1 = 0;
            arg1_00 = 0;
            if (cVar3) {
                arg1_00 = 0;
                arg1 = 0;
                do {
                    puVar7 = (unsigned int*)*local_98;
                    arg1_00 = arg1_00 + (puVar7[2] + puVar7[4]) * *puVar7;
                    local_34 = arg1 + *puVar7 * puVar7[8];
                    local_78 = logger::default_logger();
                    local_90 = (unsigned long)*puVar7;
                    local_88 = (unsigned long)puVar7[2];
                    fVar8 = Bytes2Megabytes<unsigned int>(puVar7[2] * *puVar7);
                    local_70 = (double)fVar8;
                    local_80 = (unsigned long)puVar7[3];
                    fVar8 = Bytes2Megabytes<unsigned int>(*puVar7 * puVar7[3]);
                    local_58 = (double)fVar8;
                    uVar1 = puVar7[4];
                    fVar8 = Bytes2Megabytes<unsigned int>(*puVar7 * uVar1);
                    local_40 = (double)fVar8;
                    local_50 = (unsigned long)puVar7[1];
                    local_68 = (unsigned long)puVar7[5];
                    local_60 = (unsigned long)puVar7[6];
                    local_48 = (unsigned long)puVar7[7];
                    uVar2 = puVar7[8];
                    fVar8 = Bytes2Megabytes<unsigned int>(*puVar7 * uVar2);
                    arg1 = local_34;
                    local_78->Log(false, 7,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "debug/BufferPoolStats.cpp",
                                  109,
                                  "%8u bytes: permanent: %4u (%5.2f MB), perm low-water: %4u (%5.2f MB), peakOverflow: "
                                  "%4u (%5.2f MB), noneFree: %4u, noneReady: %4u, badFit: %4u, timesRecycled: %7u, "
                                  "numPooled: %4u (%5.2f MB), minFrame: %3u, maxFrame: %3u",
                                  local_70, local_58, local_40, (double)fVar8, local_90, local_88, local_80,
                                  (unsigned long)uVar1, local_68, local_60, local_48, local_50, (unsigned long)uVar2,
                                  (unsigned long)puVar7[9], (unsigned long)puVar7[10]);
                    ++local_98;
                    cVar3 = local_98 != local_b0;
                } while (cVar3);
            }
            pLVar5 = logger::default_logger();
            fVar8 = Bytes2Megabytes<unsigned int>(arg1_00);
            pLVar5->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                        "BufferPoolStats.cpp",
                        111,
                        "Peak GPU memory: %.2f MB (peak overflow + reserved, excluding overflow allocations in use)",
                        (double)fVar8);
            pLVar5 = logger::default_logger();
            fVar8 = Bytes2Megabytes<unsigned int>(arg1);
            pLVar5->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                        "BufferPoolStats.cpp",
                        112, "Current GPU memory: %.2f MB (excluding buffers currently in use)\n", (double)fVar8);
            ++local_a8;
            cVar3 = local_a8 != local_c0;
        }
    }

    // 0x100c0ea30
    void BufferPoolStats::ResetStats() {
        m_stats.clear();
    }

} // namespace jag::render
