// libs/graphics/runetek7/animation/AnimCurveSegmentCache.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x100991cd0
    void
    AnimCurveSegmentCache<eastl::allocator>::AllocateCache(const eastl::vector<eastl::vector<AnimCurve>>& animCurvess) {
        unsigned long uVar3;
        Array<AnimCurveSegmentCacheData>* this_01;
        unsigned long uVar4;
        Array<Joint>* joints;
        WrapArray<AnimCurveSegmentCacheData>* this_03;
        WrapArray<unsigned char const> local_50;
        Array<WrapArray<AnimCurveSegmentCacheData>>* local_40;

        if (*(char*)&this[1]._vptr != '\0') {
            LogAssert("!m_isReady",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimCurveSegmentCache.inl",
                      26, nullptr);
        }
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 2);
        long lVar1 = this_00->end();
        long lVar2 = animCurvess.size();
        if (lVar1 != lVar2) {
            uVar3 = animCurvess.size();
            this_00->set_max_size(uVar3, 1);
            uVar3 = animCurvess.size();
            ((this + 5))->set_max_size(uVar3, 1);
        }
        AnimCurveSegmentCache<eastl::allocator>* local_38 = this;
        lVar1 = animCurvess.size();
        if (lVar1 != 0) {
            local_40 = (Array<WrapArray<AnimCurveSegmentCacheData>>*)(local_38 + 5);
            uVar3 = 0;
            do {
                this_01 = (Array<AnimCurveSegmentCacheData>*)(*this_00)[uVar3];
                uVar4 = ((vector<oldscape::dash3d::DepthBiasComputer::Node>*)animCurvess[uVar3])->size();
                this_01->set_max_size(uVar4, 0);
                joints = (Array<Joint>*)(*this_00)[uVar3];
                local_50.WrapArray<Array<unsigned char>>(*joints);
                this_03 = (WrapArray<AnimCurveSegmentCacheData>*)(*local_40)[uVar3];
                *this_03 = local_50;
                uVar3 = uVar3 + 1;
                uVar4 = animCurvess.size();
            } while (uVar3 < uVar4);
        }
        *(uint8_t*)&local_38[1]._vptr = 1;
    }

    // 0x1009a0a30
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::AllocateCache(
        const eastl::vector<eastl::vector<AnimCurve>>& animCurvess) {
        unsigned long uVar3;
        Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>* this_01;
        unsigned long uVar4;
        Array<Joint>* joints;
        WrapArray<AnimCurveSegmentCacheData>* this_03;
        WrapArray<unsigned char const> local_50;
        Array<WrapArray<AnimCurveSegmentCacheData>, BucketAllocatorEASTL>* local_40;

        if (*(char*)&this[1]._vptr != '\0') {
            LogAssert("!m_isReady",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimCurveSegmentCache.inl",
                      26, nullptr);
        }
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(this + 2);
        long lVar1 = this_00->end();
        long lVar2 = animCurvess.size();
        if (lVar1 != lVar2) {
            uVar3 = animCurvess.size();
            this_00->set_max_size(uVar3, 1);
            uVar3 = animCurvess.size();
            ((this + 5))->set_max_size(uVar3, 1);
        }
        AnimCurveSegmentCache<BucketAllocatorEASTL>* local_38 = this;
        lVar1 = animCurvess.size();
        if (lVar1 != 0) {
            local_40 = (Array<WrapArray<AnimCurveSegmentCacheData>, BucketAllocatorEASTL>*)(local_38 + 5);
            uVar3 = 0;
            do {
                this_01 = (Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>*)(*this_00)[uVar3];
                uVar4 = ((vector<oldscape::dash3d::DepthBiasComputer::Node>*)animCurvess[uVar3])->size();
                this_01->set_max_size(uVar4, 0);
                joints = (Array<Joint>*)(*this_00)[uVar3];
                local_50.WrapArray<Array<unsigned char>>(*joints);
                this_03 = (WrapArray<AnimCurveSegmentCacheData>*)(*local_40)[uVar3];
                *this_03 = local_50;
                uVar3 = uVar3 + 1;
                uVar4 = animCurvess.size();
            } while (uVar3 < uVar4);
        }
        *(uint8_t*)&local_38[1]._vptr = 1;
    }

} // namespace jag::graphics
