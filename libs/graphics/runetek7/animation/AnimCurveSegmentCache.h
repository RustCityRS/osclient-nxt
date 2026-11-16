// libs/graphics/runetek7/animation/AnimCurveSegmentCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    template <typename...> // 2 instantiations, e.g. <eastl::allocator>, <BucketAllocatorEASTL>
    class AnimCurveSegmentCache {
    public:
        // virtual methods in vtable order
        virtual ~AnimCurveSegmentCache();
        virtual void AllocateCache(eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator> const&);
        virtual void Reset();
        virtual AnimCurveSegmentCache<BucketAllocatorEASTL>* GetCacheArrays();
        AnimCurveSegmentCache();
        AnimCurveSegmentCache(eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator> const&);
    };

    class AnimCurveSegmentCacheBase {
    public:
        // virtual methods in vtable order
        virtual ~AnimCurveSegmentCacheBase();
        IsReady() const;
        AnimCurveSegmentCacheBase();

        // data members, from how the methods use this: 9 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[1];
    };

    class AnimCurveSegmentCacheData {
    public:
        AnimCurveSegmentCacheData();

        // data members, from how the methods use this: 48 bytes
        undefined4 field_0; // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[3];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
    };

    // 0x1009656c0, 96 bytes, base-object constructor, inline, placed by class name and debug map
    // AnimCurveSegmentCache<eastl::allocator>::AnimCurveSegmentCache()
    void AnimCurveSegmentCache<eastl::allocator>::AnimCurveSegmentCache() {
        new (this) AnimCurveSegmentCacheBase();
        *(undefined**)this = PTR_vtable_100ee8828 + 16;
        new ((this + 16)) Array<Array<AnimCurveSegmentCacheData, eastl::allocator>, eastl::allocator>();
        new ((this + 40)) Array<WrapArray<AnimCurveSegmentCacheData>, eastl::allocator>();
    }

    // 0x100981cf0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AnimCurveSegmentCacheData::AnimCurveSegmentCacheData(): jumps straight to the base-object constructor

    // 0x100991c40, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimCurveSegmentCache<eastl::allocator>::~AnimCurveSegmentCache(): jumps straight to the base-object destructor

    // 0x100991c50, 64 bytes, base-object destructor, inline, placed by class name
    // AnimCurveSegmentCache<eastl::allocator>::~AnimCurveSegmentCache()
    void AnimCurveSegmentCache<eastl::allocator>::~AnimCurveSegmentCache() {
        *(undefined**)this = PTR_vtable_100ee8828 + 16;
        ((this + 40))->~Array();
        ((this + 16))->~Array();
        ~AutoSingleton();
    }

    // 0x100991cb0, 32 bytes, deleting destructor, inline, placed by class name
    // AnimCurveSegmentCache<eastl::allocator>::~AnimCurveSegmentCache()
    void AnimCurveSegmentCache<eastl::allocator>::~AnimCurveSegmentCache() {
        ~AnimCurveSegmentCache(this);
        operator_delete(this);
    }

    // 0x100991e20, 160 bytes, inline, placed by class name
    // AnimCurveSegmentCache<eastl::allocator>::Reset()
    void AnimCurveSegmentCache<eastl::allocator>::Reset() {
        Array* pAVar1;
        Array* pAVar2;
        Array<AnimCurveSegmentCacheData, eastl::allocator> local_40[24];

        pAVar1 = (Array*)((this + 16))->data();
        pAVar2 = (Array*)((this + 16))->end();
        if (pAVar1 != pAVar2) {
            do {
                Array<AnimCurveSegmentCacheData, eastl::allocator>::Array(local_40, pAVar1);
                local_40->data();
                local_40->end();
                local_40->~Array();
                pAVar1 = pAVar1 + 24;
            } while (pAVar1 != pAVar2);
        }
        this[8] = (AnimCurveSegmentCache<eastl::allocator>)0;
    }

    // 0x100991ec0, 32 bytes, inline, placed by class name
    // AnimCurveSegmentCache<eastl::allocator>::GetCacheArrays()
    /* AnimCurveSegmentCache<BucketAllocatorEASTL>::GetCacheArrays() */

    AnimCurveSegmentCache<BucketAllocatorEASTL>* AnimCurveSegmentCache<BucketAllocatorEASTL>::GetCacheArrays() {
        long in_RSI;

        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)this, (Array*)(in_RSI + 40));
        return this;
    }

    // 0x1009a08d0, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::AnimCurveSegmentCache(eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1009a0960, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::~AnimCurveSegmentCache(): jumps straight to the base-object destructor

    // 0x1009a0970, 128 bytes, base-object constructor, inline, placed by class name
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::AnimCurveSegmentCache(eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator> const&)
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::AnimCurveSegmentCache(vector* param_1) {
        new (this) AnimCurveSegmentCacheBase();
        *(undefined**)this = PTR_vtable_100ee8830 + 16;
        new ((this + 16)) Array<Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new ((this + 40)) Array<WrapArray<AnimCurveSegmentCacheData>, BucketAllocatorEASTL>();
        AllocateCache(this, param_1);
    }

    // 0x1009a0ba0, 32 bytes, deleting destructor, inline, placed by class name
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::~AnimCurveSegmentCache()
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::~AnimCurveSegmentCache() {
        ~AnimCurveSegmentCache(this);
        operator_delete(this);
    }

    // 0x1009a0bc0, 160 bytes, inline, placed by class name
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::Reset()
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::Reset() {
        Array* pAVar1;
        Array* pAVar2;
        Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL> local_40[24];

        pAVar1 = (Array*)((this + 16))->data();
        pAVar2 = (Array*)((this + 16))->end();
        if (pAVar1 != pAVar2) {
            do {
                Array<AnimCurveSegmentCacheData, BucketAllocatorEASTL>::Array(local_40, pAVar1);
                local_40->data();
                local_40->end();
                local_40->~Array();
                pAVar1 = pAVar1 + 24;
            } while (pAVar1 != pAVar2);
        }
        this[8] = (AnimCurveSegmentCache<BucketAllocatorEASTL>)0;
    }

    // 0x1009a1590, 64 bytes, base-object destructor, inline, placed by class name
    // AnimCurveSegmentCache<BucketAllocatorEASTL>::~AnimCurveSegmentCache()
    void AnimCurveSegmentCache<BucketAllocatorEASTL>::~AnimCurveSegmentCache() {
        *(undefined**)this = PTR_vtable_100ee8830 + 16;
        ((this + 40))->~Array();
        ((this + 16))->~Array();
        ~AutoSingleton();
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x100965fc0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)
    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::__1, void>(
        function<void(), 64ul, 16ul, (Methods)0>* this, __1* param_1) {
        char* pcVar1;

        *(undefined8*)this = 0;
        pcVar1 = param_1[1].field_0;
        *(char**)(this + 16) = param_1->field_0;
        *(char**)(this + 24) = pcVar1;
        *(code**)(this + 80) =
            function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
                (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
                (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
        *(code**)(this + 88) =
            function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
                (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1&&)::{
            lambda(void*) #2
        }
        ::__invoke;
    }

    // 0x100966000, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100966010, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (), 64ul, 16ul,
   (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1,
   void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100966020, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100966030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (), 64ul, 16ul,
   (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1,
   void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (graphics::VariableList&)->InitialiseCallbackFunctions()::$_1::operator()((__1*)this);
    }

    // 0x100966070, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function<graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{lambda(void*)#2}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(), 64ul, 16ul, (Methods)0>::function<
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1, void>(
        graphics::AnimationDescriptor::InitialiseCallbackFunctions(graphics::VariableList&)::$_1&&)::{
        lambda(void*) #2
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction
