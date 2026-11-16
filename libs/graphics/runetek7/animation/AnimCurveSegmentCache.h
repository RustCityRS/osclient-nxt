// libs/graphics/runetek7/animation/AnimCurveSegmentCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    template <typename...> // 2 instantiations, e.g. <eastl::allocator>, <BucketAllocatorEASTL>
    class AnimCurveSegmentCache {
    public:
        // virtual methods in vtable order
        virtual ~AnimCurveSegmentCache();
        virtual void AllocateCache(const eastl::vector<eastl::vector<AnimCurve>>& animCurvess);
        virtual void Reset();
        virtual auto GetCacheArrays();
        AnimCurveSegmentCache();
        AnimCurveSegmentCache(const eastl::vector<eastl::vector<AnimCurve>>& animCurvess);
    };

    class AnimCurveSegmentCacheBase {
    public:
        // virtual methods in vtable order
        virtual ~AnimCurveSegmentCacheBase();
        bool IsReady() const;
        AnimCurveSegmentCacheBase();

    private:
        uint8_t _unknown_8[1];
    };

    class AnimCurveSegmentCacheData {
    public:
        AnimCurveSegmentCacheData();

    private:
        uint32_t field_0;
        uint8_t field_4;
        uint8_t _unknown_5[3];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
    };

    // 0x1009656c0
    AnimCurveSegmentCache<eastl::allocator>::AnimCurveSegmentCache() : AnimCurveSegmentCacheBase() {
        new ((this + 2)) Array<Array<AnimCurveSegmentCacheData>>();
        new ((this + 5)) Array<WrapArray<AnimCurveSegmentCacheData>>();
    }

    // 0x100991c50
    AnimCurveSegmentCache<eastl::allocator>::~AnimCurveSegmentCache() {
        ((this + 5))->~Array();
        ((this + 2))->~Array();
    }

    // 0x100991e20
    void AnimCurveSegmentCache<eastl::allocator>::Reset() {
        Array<AnimCurveSegmentCacheData>* animCurveSegmentCacheDatas;
        Array<AnimCurveSegmentCacheData> local_40;

        animCurveSegmentCacheDatas = (Array<AnimCurveSegmentCacheData>*)((this + 2))->data();
        Array<AnimCurveSegmentCacheData>* pAVar1 = (Array<AnimCurveSegmentCacheData>*)((this + 2))->end();
        if (animCurveSegmentCacheDatas != pAVar1) {
            do {
                local_40 = Array<AnimCurveSegmentCacheData>(*animCurveSegmentCacheDatas);
                local_40.data();
                local_40.end();
                animCurveSegmentCacheDatas = animCurveSegmentCacheDatas + 24;
            } while (animCurveSegmentCacheDatas != pAVar1);
        }
        *(uint8_t*)&this[1]._vptr = 0;
    }

    // 0x100991ec0
    auto AnimCurveSegmentCache<eastl::allocator>::GetCacheArrays() {
        auto result;
        result.WrapArray<Array<unsigned char>>(*((this + 5)));
        return result;
    }

    // 0x1009a0970
    AnimCurveSegmentCache<BucketAllocatorEASTL>::AnimCurveSegmentCache(
        const eastl::vector<eastl::vector<AnimCurve>>& animCurvess)
        : AnimCurveSegmentCacheBase() {
        new ((this + 2)) Array<Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new ((this + 5)) Array<WrapArray<AnimCurveSegmentCacheData>, BucketAllocatorEASTL>();
        AllocateCache(this, animCurvess);
    }

    // 0x1009a0bc0
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::Reset() {
        Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>* animCurveSegmentCacheDatas;
        Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL> local_40;

        animCurveSegmentCacheDatas = (Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>*)((this + 2))->data();
        Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>* pAVar1 =
            (Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>*)((this + 2))->end();
        if (animCurveSegmentCacheDatas != pAVar1) {
            do {
                local_40 = Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>(*animCurveSegmentCacheDatas);
                local_40.data();
                local_40.end();
                animCurveSegmentCacheDatas = animCurveSegmentCacheDatas + 24;
            } while (animCurveSegmentCacheDatas != pAVar1);
        }
        *(uint8_t*)&this[1]._vptr = 0;
    }

    // 0x1009a1590
    AnimCurveSegmentCache<BucketAllocatorEASTL>::~AnimCurveSegmentCache() {
        ((this + 5))->~Array();
        ((this + 2))->~Array();
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x100965fc0
    function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&& arg1) {
        *(uint64_t*)this = 0;
        long lVar1 = arg1.field_8;
        *(VariableList**)(this + 16) = arg1.field_0;
        *(long*)(this + 24) = lVar1;
        *(void (**)(...))(this + 80) =
            function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
                (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
                (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
        *(void (**)(...))(this + 88) =
            function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
                (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1&&)::{
            lambda(void*) #2
        }
        ::__invoke;
    }

    // 0x100966000
    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100966010
    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100966020
    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100966030
    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1::operator()((__1*)this);
    }

    // 0x100966070
    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*) #2
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction
