// libs/graphics/runetek7/animation/AnimCurveSegmentCache.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x100951620, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AnimCurveSegmentCache<eastl::allocator>::AnimCurveSegmentCache(): jumps straight to the base-object constructor

    // 0x100991cd0, 336 bytes, inline, placed by __FILE__ string
    // AnimCurveSegmentCache<eastl::allocator>::AllocateCache(eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator> const&)
    void AnimCurveSegmentCache<eastl::allocator>::AllocateCache(vector* param_1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar1;
        long lVar2;
        ulong uVar3;
        Array<AnimCurveSegmentCacheData, eastl::allocator>* this_01;
        vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>* this_02;
        ulong uVar4;
        Array* pAVar5;
        WrapArray<AnimCurveSegmentCacheData>* this_03;
        WrapArray<unsigned char const> local_50[16];
        AnimCurveSegmentCache<eastl::allocator>* local_40;

        if (this[8] != (AnimCurveSegmentCache<eastl::allocator>)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_isReady",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimCurveSegmentCache.inl",
                      26, (char*)0);
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 16);
        lVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        lVar2 = param_1->size();
        if (lVar1 != lVar2) {
            uVar3 = param_1->size();
            this_00->set_max_size(uVar3, 1);
            uVar3 = param_1->size();
            ((this + 40))->set_max_size(uVar3, 1);
        }
        lVar1 = param_1->size();
        if (lVar1 != 0) {
            local_40 = (AnimCurveSegmentCache<eastl::allocator>*)this + 40;
            uVar3 = 0;
            do {
                this_01 = (Array<AnimCurveSegmentCacheData, eastl::allocator>*)
                    Array<Array<AnimCurveSegmentCacheData, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<AnimCurveSegmentCacheData, eastl::allocator>, eastl::allocator>*)this_00, uVar3);
                this_02 = (vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>*)
                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)param_1, uVar3);
                uVar4 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_02);
                this_01->set_max_size(uVar4, 0);
                pAVar5 =
                    (Array*)Array<Array<AnimCurveSegmentCacheData, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<AnimCurveSegmentCacheData, eastl::allocator>, eastl::allocator>*)this_00, uVar3);
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_50, pAVar5);
                this_03 = (WrapArray<AnimCurveSegmentCacheData>*)
                    Array<WrapArray<AnimCurveSegmentCacheData>, eastl::allocator>::operator[](
                        (Array<WrapArray<AnimCurveSegmentCacheData>, eastl::allocator>*)local_40, uVar3);
                WrapArray<AnimCurveSegmentCacheData>::operator=(this_03, local_50);
                uVar3 = uVar3 + 1;
                uVar4 = param_1->size();
            } while (uVar3 < uVar4);
        }
        (AnimCurveSegmentCache<eastl::allocator>*)this[8] = (AnimCurveSegmentCache<eastl::allocator>)1;
    }

    // 0x1009a0a30, 336 bytes, inline, placed by __FILE__ string
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::AllocateCache(eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator> const&)
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::AllocateCache(vector* param_1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar1;
        long lVar2;
        ulong uVar3;
        Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>* this_01;
        vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>* this_02;
        ulong uVar4;
        Array* pAVar5;
        WrapArray<AnimCurveSegmentCacheData>* this_03;
        WrapArray<unsigned char const> local_50[16];
        AnimCurveSegmentCache<BucketAllocatorEASTL>* local_40;

        if (this[8] != (AnimCurveSegmentCache<BucketAllocatorEASTL>)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_isReady",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimCurveSegmentCache.inl",
                      26, (char*)0);
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 16);
        lVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        lVar2 = param_1->size();
        if (lVar1 != lVar2) {
            uVar3 = param_1->size();
            this_00->set_max_size(uVar3, 1);
            uVar3 = param_1->size();
            ((this + 40))->set_max_size(uVar3, 1);
        }
        lVar1 = param_1->size();
        if (lVar1 != 0) {
            local_40 = (AnimCurveSegmentCache<BucketAllocatorEASTL>*)this + 40;
            uVar3 = 0;
            do {
                this_01 = (Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>*)
                    Array<Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                        (Array<Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)this_00,
                        uVar3);
                this_02 = (vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>*)
                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)param_1, uVar3);
                uVar4 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_02);
                this_01->set_max_size(uVar4, 0);
                pAVar5 = (Array*)
                    Array<Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                        (Array<Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)this_00,
                        uVar3);
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_50, pAVar5);
                this_03 = (WrapArray<AnimCurveSegmentCacheData>*)
                    Array<WrapArray<AnimCurveSegmentCacheData>, BucketAllocatorEASTL>::operator[](
                        (Array<WrapArray<AnimCurveSegmentCacheData>, BucketAllocatorEASTL>*)local_40, uVar3);
                WrapArray<AnimCurveSegmentCacheData>::operator=(this_03, local_50);
                uVar3 = uVar3 + 1;
                uVar4 = param_1->size();
            } while (uVar3 < uVar4);
        }
        (AnimCurveSegmentCache<BucketAllocatorEASTL>*)this[8] = (AnimCurveSegmentCache<BucketAllocatorEASTL>)1;
    }

} // namespace jag::graphics
