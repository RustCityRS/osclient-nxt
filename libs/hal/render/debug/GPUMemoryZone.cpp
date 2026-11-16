// libs/hal/render/debug/GPUMemoryZone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "GPUMemoryZone.h"

namespace jag::render {
    // 0x100c2ad20
    void GPUMemoryAllocatorZone::RemoveMemoryAllocation(const eastl::fixed_string<char, 512>& str,
                                                        unsigned long long arg2) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        field_576 = field_576 - 1;
        auto local_40 = field_584.find(str);
        local_38.end();
        if (local_40 != local_38 == '\0') {
            LogAssert("m_exclusiveObjectMemory.find(objectID) != m_exclusiveObjectMemory.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryZone.cpp",
                      26, "Trying to remove a memory allocation, but objectID was not found");
        }
        long* plVar2 = &field_584[str];
        *plVar2 = *plVar2 - arg2;
    }

    // 0x100c2aea0
    void GPUMemoryAllocatorZone::UpdateInclusiveMemory() {
        long lVar1;
        fixed_string<char, _512>* str;
        long* plVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        m_inclusiveAllocations = field_576;
        field_29696.clear();
        auto local_40 = field_584.rbegin();
        local_38.end();
        bool cVar2 = local_40 != local_38;
        if (cVar2) {
            do {
                str = (fixed_string<char, _512>*)*local_40;
                lVar1 = *(long*)(str + 552);
                plVar3 = &field_29696[*str];
                *plVar3 = *plVar3 + lVar1;
                ++local_40;
                cVar2 = local_40 != local_38;
            } while (cVar2);
        }
        ProcessChildren<GPUMemoryAllocatorZone::UpdateInclusiveMemory()::__105>(this, (__105*)this);
    }

    // 0x100c2afe0
    long GPUMemoryAllocatorZone::GetExclusiveMemory() const {
        long lVar2;

        uint64_t local_30 = field_584.begin();
        uint64_t local_28 = field_584.end();
        bool cVar1 = local_30 != local_28;
        long lVar3 = 0;
        if (cVar1) {
            do {
                lVar2 = *local_30;
                lVar3 = lVar3 + *(long*)(lVar2 + 552);
                ++local_30;
                cVar1 = local_30 != local_28;
            } while (cVar1);
        }
        return lVar3;
    }

    // 0x100c2b070
    long GPUMemoryAllocatorZone::GetInclusiveMemory() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_28;

        UpdateInclusiveMemory();
        auto local_30 = field_29696.rbegin();
        local_28.end();
        bool cVar1 = local_30 != local_28;
        long lVar3 = 0;
        if (cVar1) {
            do {
                lVar2 = *local_30;
                lVar3 = lVar3 + *(long*)(lVar2 + 552);
                ++local_30;
                cVar1 = local_30 != local_28;
            } while (cVar1);
        }
        return lVar3;
    }

    // 0x100c2b110
    void GPUMemoryAllocatorZone::PrintToConsole(int arg1) {
        bool cVar1;
        uint64_t local_b0;

        local_b0 = (((uint64_t)local_b0._1_7_ << 8) | (uint8_t)9);
        fixed_string<char, 64> local_a0((long)arg1, &local_b0);
        auto pLVar2 = logger::default_logger();
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            100, "");
        pLVar2 = logger::default_logger();
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto pbVar4 = SSOBeginPtr();
        uint64_t uVar5 = pbVar4->begin();
        unsigned long long uVar6 = GetExclusiveMemory();
        float local_a4 = Bytes2Megabytes<unsigned long long>(uVar6);
        uVar6 = GetInclusiveMemory();
        float fVar8 = Bytes2Megabytes<unsigned long long>(uVar6);
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            102, "%s<%s, Exclusive GPU Memory: %.2fMb, Inclusive GPU Memory: %.2fMb>", (double)local_a4, (double)fVar8,
            uVar3, uVar5);
        pLVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            103, "%s\tExclusive Object Allocations:", uVar3);
        auto prVar7 = GetWaterHeights();
        local_b0 = prVar7->begin();
        uint64_t local_c0 = prVar7->end();
        while (true) {
            cVar1 = local_b0 != local_c0;
            if (!cVar1)
                break;
            pbVar4 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>*)*local_b0;
            local_a4 = Bytes2Megabytes<unsigned long long>(*(unsigned long long*)(pbVar4 + 552));
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = pbVar4->begin();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                        "GPUMemoryZone.cpp",
                        107, "%s\t\t%s Memory: %.2lfMb", (double)local_a4, uVar3, uVar5);
            ++local_b0;
        }
        pLVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            109, "%s\tInclusive Object Allocations:", uVar3);
        prVar7 =
            (rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>*)GetInclusiveObjectMemory();
        local_b0 = prVar7->begin();
        local_c0 = prVar7->end();
        while (true) {
            cVar1 = local_b0 != local_c0;
            if (!cVar1)
                break;
            pbVar4 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>*)*local_b0;
            local_a4 = Bytes2Megabytes<unsigned long long>(*(unsigned long long*)(pbVar4 + 552));
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = pbVar4->begin();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                        "GPUMemoryZone.cpp",
                        113, "%s\t\t%s Memory: %.2lfMb", (double)local_a4, uVar3, uVar5);
            ++local_b0;
        }
    }

} // namespace jag::render
