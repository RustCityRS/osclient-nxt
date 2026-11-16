// libs/hal/render/debug/GPUMemoryAllocatorZoneMonitor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100907970, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::FontMetrics* placement_new<graphics::FontMetrics>(void*)
    FontMetrics* placement_new<graphics::FontMetrics>(void* param_1) {
        graphics::FontMetrics::FontMetrics(param_1);
        return param_1;
    }

    // 0x100907990, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64> >* placement_new<MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64> >, MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData*&, graphics::FontMetrics*>(void*, MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData*&, graphics::FontMetrics*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>,
                       MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData*&, graphics::FontMetrics*>(
        void* param_1, RefCounterAndData** param_2, FontMetrics** param_3) {
        MakeSharedPoolRefCounter<graphics::FontMetrics,
                                 MakeSharedPool<graphics::FontMetrics, 64>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                      *param_3);
        return param_1;
    }

    // 0x100908060, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64> >::MakeSharedPoolRefCounter(void*, graphics::FontMetrics*): jumps straight to the base-object constructor

    // 0x100908070, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64> >::MakeSharedPoolRefCounter(void*, graphics::FontMetrics*)
    void jag::MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>* this,
            void* param_1, FontMetrics* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b98 + 16;
        *(void**)(this + 16) = param_1;
        *(FontMetrics**)(this + 24) = param_2;
    }

    // 0x1009080b0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::FontMetrics, 64>::deallocate(pvVar1);
    }

    // 0x100908360, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::Font* placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(void*, shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&)
    Font* jag::placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::SpriteAtlasManager*&,
                             shared_ptr<graphics::SpriteAtlas> const&>(void* param_1, shared_ptr* param_2,
                                                                       SpriteAtlasManager** param_3,
                                                                       shared_ptr* param_4) {
        graphics::Font::Font(param_1, param_2, *param_3, param_4);
        return param_1;
    }

    // 0x100908380, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Font>* placement_new<ref_counter_shared<graphics::Font>, int, graphics::Font*&>(void*, int&&, graphics::Font*&)
    ref_counter_shared* placement_new<ref_counter_shared<graphics::Font>, int, graphics::Font*&>(void* param_1,
                                                                                                 int* param_2,
                                                                                                 Font** param_3) {
        ref_counter_shared<graphics::Font>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1009083a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Font>::ref_counter_shared(unsigned long, graphics::Font*): jumps straight to the base-object constructor

    // 0x1009083b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Font>::ref_counter_shared(unsigned long, graphics::Font*)
    void ref_counter_shared<graphics::Font>::ref_counter_shared(ulong param_1, Font* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7578 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Font**)(this + 24) = param_2;
    }

    // 0x1009083f0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Font>::DeleteData()
    void ref_counter_shared<graphics::Font>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Font();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100908510, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::Font* placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(void*, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*&&, graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&)
    Font* jag::placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*,
                             graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
        void* param_1, shared_ptr* param_2, VectorFontSource** param_3, SpriteAtlasManager** param_4,
        shared_ptr* param_5) {
        graphics::Font::Font(param_1, param_2, *param_3, *param_4, param_5);
        return param_1;
    }

    // 0x10090b700, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::FontHelpers* placement_new<graphics::FontHelpers>(void*)
    FontHelpers* placement_new<graphics::FontHelpers>(void* param_1) {
        graphics::FontHelpers::FontHelpers(param_1);
        return param_1;
    }

    // 0x10090b720, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::FontHelpers>* placement_new<ref_counter_shared<graphics::FontHelpers>, int, graphics::FontHelpers*&>(void*, int&&, graphics::FontHelpers*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::FontHelpers>, int, graphics::FontHelpers*&>(
        void* param_1, int* param_2, FontHelpers** param_3) {
        ref_counter_shared<graphics::FontHelpers>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10090b740, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::FontHelpers>::ref_counter_shared(unsigned long, graphics::FontHelpers*): jumps straight to the base-object constructor

    // 0x10090b750, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::FontHelpers>::ref_counter_shared(unsigned long, graphics::FontHelpers*)
    void ref_counter_shared<graphics::FontHelpers>::ref_counter_shared(ulong param_1, FontHelpers* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7508 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FontHelpers**)(this + 24) = param_2;
    }

    // 0x10090b790, 64 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::FontHelpers>::DeleteData()
    void ref_counter_shared<graphics::FontHelpers>::DeleteData() {
        ulong uVar1;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                uVar1 = 0;
                do {
                    ~FontHelpers();
                    uVar1 = uVar1 + 1;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10090f240, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::GUIAnimation* placement_new<graphics::GUIAnimation, graphics::GUIAnimationCurve const&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&>(void*, graphics::GUIAnimationCurve const&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&)
    GUIAnimation* jag::placement_new<graphics::GUIAnimation, graphics::GUIAnimationCurve_const&,
                                     graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&>(
        void* param_1, GUIAnimationCurve* param_2, GUIAnimationTarget* param_3, GUIAnimationTargetMode* param_4) {
        graphics::GUIAnimation::GUIAnimation(param_1, param_2, *(undefined4*)param_3, *(undefined4*)param_4);
        return param_1;
    }

    // 0x10090f260, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<graphics::GUIAnimation>* placement_new<BucketRefCounter<graphics::GUIAnimation>, managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&, graphics::GUIAnimation*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&, graphics::GUIAnimation*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<graphics::GUIAnimation>,
                       managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&,
                       graphics::GUIAnimation*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                 GUIAnimation** param_3) {
        BucketRefCounter<graphics::GUIAnimation>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x10090f280, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<graphics::GUIAnimation>::BucketRefCounter(void*, graphics::GUIAnimation*, unsigned int): jumps straight to the base-object constructor

    // 0x10090f290, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<graphics::GUIAnimation>::BucketRefCounter(void*, graphics::GUIAnimation*, unsigned int)
    void BucketRefCounter<graphics::GUIAnimation>::BucketRefCounter(void* param_1, GUIAnimation* param_2,
                                                                    uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7150 + 16;
        *(void**)(this + 16) = param_1;
        *(GUIAnimation**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x10090f2f0, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<graphics::GUIAnimation>::DeleteData()
    void BucketRefCounter<graphics::GUIAnimation>::DeleteData() {
        if (*(GUIAnimation**)(this + 24) != (GUIAnimation*)0) {
            (*(GUIAnimation**)(this + 24))->~GUIAnimation();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10090f320, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<graphics::GUIAnimation>::DeleteSelf()
    void BucketRefCounter<graphics::GUIAnimation>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x10090f5a0, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::GUIAnimation* placement_new<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&>(void*, math::EasingType&, bool&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&)
    GUIAnimation* jag::placement_new<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&,
                                     graphics::GUIAnimationTargetMode&>(void* param_1, EasingType* param_2,
                                                                        bool* param_3, GUIAnimationTarget* param_4,
                                                                        GUIAnimationTargetMode* param_5) {
        graphics::GUIAnimation::GUIAnimation(param_1, *(undefined4*)param_2, *param_3, *(undefined4*)param_4,
                                             *(undefined4*)param_5);
        return param_1;
    }

} // namespace jag

namespace jag::math {
    // 0x10090cfd0, 144 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Set(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
    Matrix44T<float>* Matrix44T<float>::Set(float param_1, float param_2, float param_3, float param_4, float param_5,
                                            float param_6, float param_7, float param_8, float param_9, float param_10,
                                            float param_11, float param_12, float param_13, float param_14,
                                            float param_15, float param_16) {
        Set(param_1, param_2, param_3, param_4);
        ((this + 16))->Set(param_5, param_6, param_7, param_8);
        ((this + 32))->Set(param_9, param_10, param_11, param_12);
        ((this + 48))->Set(param_13, param_14, param_15, param_16);
        return this;
    }

    // 0x10090d0a0, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Set(float, float)
    Vector2T<float>* Vector2T<float>::Set(float param_1, float param_2) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_2;
        return this;
    }

    // 0x10090d0c0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix22T<float>::Matrix22T()
    void Matrix22T<float>::Matrix22T() {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector2T<int>();
            lVar1 = lVar1 + 8;
        } while (lVar1 != 16);
    }

    // 0x10090d220, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::SetToZero()
    Vector2T<float>* Vector2T<float>::SetToZero() {
        *(undefined8*)this = 0;
        return this;
    }

    // 0x10090d230, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::SetToOne()
    Vector2T<float>* Vector2T<float>::SetToOne() {
        *(undefined8*)this = 4575657222473777152;
        return this;
    }

    // 0x10090d250, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::InvLength() const
    float Vector2T<float>::InvLength() {
        float fVar1;
        float fVar2;

        fVar1 = (float)Length(this);
        fVar2 = 0.0;
        if (fVar1 != 0.0) {
            fVar2 = 1.0 / fVar1;
        }
        return fVar2;
    }

    // 0x10090d280, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator*=(float)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Vector2T<float>* Vector2T<float>::operator*=(float param_1) {
        *(float*)this = *(float*)this * param_1;
        *(float*)(this + 4) = param_1 * *(float*)(this + 4);
        return this;
    }

    // 0x10090d2a0, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Length() const
    void Vector2T<float>::Length() {
        float fVar1;

        fVar1 = (float)LengthSq(this);
        ::sqrt(fVar1);
    }

    // 0x10090d2b0, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::LengthSq() const
    void Vector2T<float>::LengthSq() {
        Vector2Dot<float>((Vector2T*)this, (Vector2T*)this);
    }

    // 0x10090d2c0, 32 bytes, inline, placed by debug map only (low confidence)
    // float Vector2Dot<float>(Vector2T<float> const&, Vector2T<float> const&)
    float Vector2Dot<float>(Vector2T* param_1, Vector2T* param_2) {
        return *(float*)(param_2 + 4) * *(float*)(param_1 + 4) + *(float*)param_2 * *(float*)param_1;
    }

} // namespace jag::math

namespace jag::fixedfunction {
    // 0x10090b8d0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::__1, void>(
        __1* param_1) {
        *(code**)(param_1 + 80) = function<
            graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
            (unsigned int*)->InsertCodepoints(unsigned long, unsigned long, unsigned long)::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)param_1 = function<
            graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
            (unsigned int*)->InsertCodepoints(unsigned long, unsigned long, unsigned long)::$_1&&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(code**)(param_1 + 88) = function<
            graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
            (unsigned int*)->InsertCodepoints(unsigned long, unsigned long, unsigned long)::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10090b900, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {}

    // 0x10090b910, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{lambda(void*, unsigned int)#1}::__invoke(void*, unsigned int)
    /* __invoke(void*, unsigned int) */

    undefined1 function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* param_1, uint param_2) {
        return 1;
    }

    // 0x10090b920, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x10090bbf0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::__2, void>(__2* param_1) {
        *(code**)(param_1 + 80) =
            function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
                (char const*)->Insert(unsigned long, unsigned long, unsigned long)::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)param_1 =
            function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
                (char const*)->Insert(unsigned long, unsigned long, unsigned long)::$_2&&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(code**)(param_1 + 88) =
            function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
                (char const*)->Insert(unsigned long, unsigned long, unsigned long)::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10090bc20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {}

    // 0x10090bc30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{lambda(void*, unsigned int)#1}::__invoke(void*, unsigned int)
    /* __invoke(void*, unsigned int) */

    undefined1 function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* param_1, uint param_2) {
        return 1;
    }

    // 0x10090bc40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x100909680, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // FontKerningData::~FontKerningData(): jumps straight to the base-object destructor

    // 0x100909690, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // FontKerningData::~FontKerningData()
    void FontKerningData::~FontKerningData() {
        ~fixed_vector();
    }

    // 0x10090a910, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FontKerningData::FontKerningData(): jumps straight to the base-object constructor

    // 0x10090a930, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FontKerningData::FontKerningData()
    void FontKerningData::FontKerningData() {
        new (this) eastl::fixed_vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>, 256ul, true,
                                       eastl::allocator>();
    }

    // 0x10090dc20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GUIManagerVertexBase<float>::GUIManagerVertexBase(): jumps straight to the base-object constructor

    // 0x10090dc30, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GUIManagerVertexBase<float>::GUIManagerVertexBase()
    void GUIManagerVertexBase<float>::GUIManagerVertexBase() {
        new ((this + 12)) math::Vector2T<int>();
        new ((this + 20)) math::Vector2T<int>();
        new ((this + 28)) math::Vector2T<int>();
    }

} // namespace jag::graphics

namespace jag::render {
    class GPUMemoryAllocatorZoneMonitor {
    public:
        GPUMemoryAllocatorZone* GetRootZone() const;
        GPUMemoryAllocatorZone* GetRootZone();
        GPUMemoryAllocatorZoneMonitor();
        void PushZone(char const*);
        void SetRootZone(GPUMemoryAllocatorZone*);
        GPUMemoryAllocatorZone* GetCurrentZone();
        ~GPUMemoryAllocatorZoneMonitor();
        void PopZone();
        void GetZoneStack();
        GPUMemoryAllocatorZone* CreateZone(GPUMemoryAllocatorZone*, char const*);

        // data members, from how the methods use this: 60268784 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[60268760];
        GPUMemoryAllocatorZone* m_pRootZone; // offset 60268776
    };

    // 0x100904f20, 16 bytes, inline, placed by class name and debug map
    // GPUMemoryAllocatorZoneMonitor::GetRootZone() const
    /* GPUMemoryAllocatorZoneMonitor::GetRootZone() */

    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::GetRootZone() {
        return m_pRootZone;
    }

    // 0x100c29be0, 16 bytes, inline, placed by class name
    // GPUMemoryAllocatorZoneMonitor::SetRootZone(GPUMemoryAllocatorZone*)
    void GPUMemoryAllocatorZoneMonitor::SetRootZone(GPUMemoryAllocatorZone* param_1) {
        m_pRootZone = param_1;
    }

    // 0x100c29de0, 48 bytes, inline, placed by class name
    // GPUMemoryAllocatorZoneMonitor::GetZoneStack()
    void GPUMemoryAllocatorZoneMonitor::GetZoneStack() {
        ulong local_18;

        local_18 = this_thread::GetThreadID();
        eastl::vector_map<
            unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>, eastl::less<unsigned long>,
            eastl::allocator,
            eastl::vector<eastl::pair<unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>>,
                          eastl::allocator>>::
        operator[](
            (vector_map<
                unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>, eastl::less<unsigned long>,
                eastl::allocator,
                eastl::vector<eastl::pair<unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>>,
                              eastl::allocator>>*)this,
            &local_18);
    }

} // namespace jag::render

namespace jag::graphics::internal {
    // 0x10090c840, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexSetupRingArray<GUIManagerVertexBase<short> >::VertexSetupRingArray()
    void VertexSetupRingArray<GUIManagerVertexBase<short>>::VertexSetupRingArray() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new ((this + 16)) render::VertexDeclaration();
        new ((this + 112)) Array<GUIManagerVertexBase<short>, eastl::allocator>();
        *(undefined4*)(this + 136) = 0;
        new ((this + 144)) render::DynamicBuffer<render::VertexBuffer>();
        new ((this + 232)) render::IndexBuffer();
        new ((this + 320)) render::InputAssemblerState();
    }

    // 0x10090c940, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexSetupRingArray<GUIManagerVertexBase<float> >::VertexSetupRingArray()
    void VertexSetupRingArray<GUIManagerVertexBase<float>>::VertexSetupRingArray() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new ((this + 16)) render::VertexDeclaration();
        new ((this + 112)) Array<GUIManagerVertexBase<float>, eastl::allocator>();
        *(undefined4*)(this + 136) = 0;
        new ((this + 144)) render::DynamicBuffer<render::VertexBuffer>();
        new ((this + 232)) render::IndexBuffer();
        new ((this + 320)) render::InputAssemblerState();
    }

    // 0x10090ca40, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexSetupRingArray<GUIManagerLineVertex>::VertexSetupRingArray()
    void VertexSetupRingArray<GUIManagerLineVertex>::VertexSetupRingArray() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new ((this + 16)) render::VertexDeclaration();
        new ((this + 112)) Array<GUIManagerLineVertex, eastl::allocator>();
        *(undefined4*)(this + 136) = 0;
        new ((this + 144)) render::DynamicBuffer<render::VertexBuffer>();
        new ((this + 232)) render::IndexBuffer();
        new ((this + 320)) render::InputAssemblerState();
    }

} // namespace jag::graphics::internal
