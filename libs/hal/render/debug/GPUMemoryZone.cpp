// libs/hal/render/debug/GPUMemoryZone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "GPUMemoryZone.h"

namespace jag::render {
    // 0x100c2a0d0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(char const*): jumps straight to the base-object constructor

    // 0x100c2ad20, 160 bytes, placed by __FILE__ string
    // GPUMemoryAllocatorZone::RemoveMemoryAllocation(eastl::fixed_string<char, 512, true, eastl::allocator> const&, unsigned long long)
    void GPUMemoryAllocatorZone::RemoveMemoryAllocation(fixed_string* param_1, ulonglong param_2) {
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        fixed_string local_40[8];
        hashtable_iterator_base local_38[8];

        field_576 = field_576 + -1;
        eastl::rbtree<eastl::fixed_string<char, 512, true, eastl::allocator>,
                      eastl::pair<eastl::fixed_string<char, 512, true, eastl::allocator> const, ZoneObjectMemory>,
                      eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                      eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<
                          eastl::pair<eastl::fixed_string<char, 512, true, eastl::allocator> const, ZoneObjectMemory>>,
                      true, true>::find(local_40);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (!eastl::operator!=((eastl*)local_40, local_38, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_exclusiveObjectMemory.find(objectID) != m_exclusiveObjectMemory.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryZone.cpp",
                      26, "Trying to remove a memory allocation, but objectID was not found");
        }
        plVar2 = (long*)eastl::map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                                   eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                   eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                        eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                        eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>*)&field_584,
                   param_1);
        *plVar2 = *plVar2 - param_2;
    }

    // 0x100c2aea0, 192 bytes, placed by neighbouring functions
    // GPUMemoryAllocatorZone::UpdateInclusiveMemory()
    void GPUMemoryAllocatorZone::UpdateInclusiveMemory() {
        long lVar1;
        bool bVar2;
        fixed_string* pfVar3;
        long* plVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        m_inclusiveAllocations = field_576;
        (&field_29696)->clear();
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_40, local_38, extraout_RDX);
        if (bVar2) {
            do {
                pfVar3 = (fixed_string*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                lVar1 = *(long*)(pfVar3 + 552);
                plVar4 = (long*)eastl::map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                                           eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                           eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                         eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                         eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>*)&field_29696,
                    pfVar3);
                *plVar4 = *plVar4 + lVar1;
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar2 = eastl::operator!=(local_40, local_38, extraout_RDX_00);
            } while (bVar2);
        }
        ProcessChildren<GPUMemoryAllocatorZone::UpdateInclusiveMemory()::__105>(this, this);
    }

    // 0x100c2afe0, 144 bytes, placed by neighbouring functions
    // GPUMemoryAllocatorZone::GetExclusiveMemory() const
    long GPUMemoryAllocatorZone::GetExclusiveMemory() {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        long lVar3;
        undefined1 auVar4[16];
        undefined8 local_30;
        undefined8 local_28;

        local_30 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar4 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_28 = auVar4._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, auVar4._8_8_);
        lVar3 = 0;
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_30);
                lVar3 = lVar3 + *(long*)(lVar2 + 552);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_30);
                bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, extraout_RDX);
            } while (bVar1);
        }
        return lVar3;
    }

    // 0x100c2b070, 160 bytes, placed by neighbouring functions
    // GPUMemoryAllocatorZone::GetInclusiveMemory()
    long GPUMemoryAllocatorZone::GetInclusiveMemory() {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        long lVar3;
        eastl local_30[8];
        hashtable_iterator_base local_28[8];

        UpdateInclusiveMemory(this);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_30, local_28, extraout_RDX);
        lVar3 = 0;
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_30);
                lVar3 = lVar3 + *(long*)(lVar2 + 552);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_30);
                bVar1 = eastl::operator!=(local_30, local_28, extraout_RDX_00);
            } while (bVar1);
        }
        return lVar3;
    }

    // 0x100c2b110, 912 bytes, placed by __FILE__ string
    // GPUMemoryAllocatorZone::PrintToConsole(int)
    void GPUMemoryAllocatorZone::PrintToConsole(int param_1) {
        bool bVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        ulonglong uVar5;
        long lVar6;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        float fVar8;
        undefined1 auVar9[16];
        undefined1 auVar10[16];
        undefined8 local_c0;
        undefined8 local_b0;
        float local_a4;
        fixed_string<char, 64, true, eastl::allocator> local_a0[104];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_b0 = CONCAT71(local_b0._1_7_, 9);
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_a0, (long)param_1, (char*)&local_b0);
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            100, "");
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        ((GPUMemoryAllocatorZone*)this)->SSOBeginPtr(0);
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        uVar5 = GetExclusiveMemory((GPUMemoryAllocatorZone*)this);
        local_a4 = Bytes2Megabytes<unsigned long long>(uVar5);
        uVar5 = GetInclusiveMemory((GPUMemoryAllocatorZone*)this);
        fVar8 = Bytes2Megabytes<unsigned long long>(uVar5);
        logger::Logger::Log(
            (double)local_a4, (double)fVar8, uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            102, "%s<%s, Exclusive GPU Memory: %.2fMb, Inclusive GPU Memory: %.2fMb>", uVar3, uVar4);
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            103, "%s\tExclusive Object Allocations:", uVar3);
        ((GPUMemoryAllocatorZone*)this)->GetWaterHeights();
        local_b0 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar9 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        while (true) {
            local_c0 = auVar9._0_8_;
            bVar1 = eastl::operator!=((eastl*)&local_b0, (hashtable_iterator_base*)&local_c0, auVar9._8_8_);
            if (!bVar1)
                break;
            lVar6 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_b0);
            local_a4 = Bytes2Megabytes<unsigned long long>(*(ulonglong*)(lVar6 + 552));
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            logger::Logger::Log((double)local_a4, uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "debug/GPUMemoryZone.cpp",
                                107, "%s\t\t%s Memory: %.2lfMb", uVar3, uVar4);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_b0);
            auVar9._8_8_ = extraout_RDX;
            auVar9._0_8_ = local_c0;
        }
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/GPUMemoryZone.cpp",
            109, "%s\tInclusive Object Allocations:", uVar3);
        GetInclusiveObjectMemory((GPUMemoryAllocatorZone*)this);
        local_b0 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar10 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        while (true) {
            local_c0 = auVar10._0_8_;
            bVar1 = eastl::operator!=((eastl*)&local_b0, (hashtable_iterator_base*)&local_c0, auVar10._8_8_);
            if (!bVar1)
                break;
            lVar6 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_b0);
            local_a4 = Bytes2Megabytes<unsigned long long>(*(ulonglong*)(lVar6 + 552));
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            logger::Logger::Log((double)local_a4, uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "debug/GPUMemoryZone.cpp",
                                113, "%s\t\t%s Memory: %.2lfMb", uVar3, uVar4);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_b0);
            auVar10._8_8_ = extraout_RDX_00;
            auVar10._0_8_ = local_c0;
        }
        /* WARNING: Subroutine does not return */
        local_a0->~fixed_string();
    }

} // namespace jag::render
