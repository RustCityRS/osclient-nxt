// libs/hal/render/debug/GPUMemoryAllocatorZoneMonitor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100907970
    graphics::FontMetrics* placement_new<graphics::FontMetrics>(void* arg1) {
        new (arg1) graphics::FontMetrics();
        return arg1;
    }

    // 0x100907990
    MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>*
    placement_new<MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>,
                  MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData*&, graphics::FontMetrics*>(
        void* arg1, MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData*& arg2,
        graphics::FontMetrics*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x100908070
    MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::FontMetrics* fontMetrics)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b98 + 16;
        *(void**)(this + 16) = arg1;
        *(FontMetrics**)(this + 24) = fontMetrics;
    }

    // 0x1009080b0
    void MakeSharedPoolRefCounter<graphics::FontMetrics, MakeSharedPool<graphics::FontMetrics, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::FontMetrics, 64>::deallocate(arg1);
    }

    // 0x100908360
    graphics::Font* placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&,
                                  graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
        void* arg1, const shared_ptr<graphics::FontMetrics>& fontMetrics, graphics::SpriteAtlasManager*& arg3,
        const shared_ptr<graphics::SpriteAtlas>& spriteAtlas) {
        new (arg1) graphics::Font(fontMetrics, arg3, spriteAtlas);
        return arg1;
    }

    // 0x100908380
    ref_counter_shared<graphics::Font>*
    placement_new<ref_counter_shared<graphics::Font>, int, graphics::Font*&>(void* arg1, int&& arg2,
                                                                             graphics::Font*& arg3) {
        new (arg1) ref_counter_shared<graphics::Font>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1009083b0
    ref_counter_shared<graphics::Font>::ref_counter_shared(unsigned long arg1, graphics::Font* font)
        : ref_counter_base() {}

    // 0x1009083f0
    void ref_counter_shared<graphics::Font>::DeleteData() {
        ref_counter_shared<graphics::Font> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Font*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Font();
                    prVar1 = (ref_counter_shared<graphics::Font> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100908510
    graphics::Font* placement_new<graphics::Font, shared_ptr<graphics::FontMetrics> const&, graphics::VectorFontSource*,
                                  graphics::SpriteAtlasManager*&, shared_ptr<graphics::SpriteAtlas> const&>(
        void* arg1, const shared_ptr<graphics::FontMetrics>& fontMetrics, graphics::VectorFontSource*&& arg3,
        graphics::SpriteAtlasManager*& arg4, const shared_ptr<graphics::SpriteAtlas>& spriteAtlas) {
        new (arg1) graphics::Font(fontMetrics, arg3, arg4, spriteAtlas);
        return arg1;
    }

    // 0x10090b700
    graphics::FontHelpers* placement_new<graphics::FontHelpers>(void* arg1) {
        new (arg1) graphics::FontHelpers();
        return arg1;
    }

    // 0x10090b720
    ref_counter_shared<graphics::FontHelpers>*
    placement_new<ref_counter_shared<graphics::FontHelpers>, int, graphics::FontHelpers*&>(
        void* arg1, int&& arg2, graphics::FontHelpers*& arg3) {
        new (arg1) ref_counter_shared<graphics::FontHelpers>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10090b750
    ref_counter_shared<graphics::FontHelpers>::ref_counter_shared(unsigned long arg1,
                                                                  graphics::FontHelpers* fontHelpers)
        : ref_counter_base() {}

    // 0x10090b790
    void ref_counter_shared<graphics::FontHelpers>::DeleteData() {
        ref_counter_shared<graphics::FontHelpers> _vtbl* prVar1;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                prVar1 = nullptr;
                do {
                    ~FontHelpers();
                    prVar1 = (ref_counter_shared<graphics::FontHelpers> _vtbl*)((long)&prVar1->_dtor + 1);
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10090f240
    graphics::GUIAnimation*
    placement_new<graphics::GUIAnimation, graphics::GUIAnimationCurve const&, graphics::GUIAnimationTarget&,
                  graphics::GUIAnimationTargetMode&>(void* arg1, const graphics::GUIAnimationCurve& guiAnimationCurve,
                                                     graphics::GUIAnimationTarget& guiAnimationTarget,
                                                     graphics::GUIAnimationTargetMode& guiAnimationTargetMode) {
        new (arg1) graphics::GUIAnimation(guiAnimationCurve, guiAnimationTarget, guiAnimationTargetMode);
        return arg1;
    }

    // 0x10090f260
    BucketRefCounter<graphics::GUIAnimation>*
    placement_new<BucketRefCounter<graphics::GUIAnimation>,
                  managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&,
                  graphics::GUIAnimation*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*& arg2,
        graphics::GUIAnimation*& arg3) {
        new (arg1) BucketRefCounter<graphics::GUIAnimation>(arg2, arg3, 0);
        return arg1;
    }

    // 0x10090f290
    BucketRefCounter<graphics::GUIAnimation>::BucketRefCounter(void* arg1, graphics::GUIAnimation* guiAnimation,
                                                               unsigned int arg3)
        : ref_counter_base() {}

    // 0x10090f2f0
    void BucketRefCounter<graphics::GUIAnimation>::DeleteData() {
        if ((GUIAnimation*)this[3]._vptr != nullptr) {
            this[3]._vptr->~GUIAnimation();
            this[3]._vptr = nullptr;
        }
    }

    // 0x10090f320
    void BucketRefCounter<graphics::GUIAnimation>::DeleteSelf() {
        BucketRefCounter<graphics::GUIAnimation> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<graphics::GUIAnimation> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x10090f5a0
    graphics::GUIAnimation*
    placement_new<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&,
                  graphics::GUIAnimationTargetMode&>(void* arg1, math::EasingType& easingType, bool& arg3,
                                                     graphics::GUIAnimationTarget& guiAnimationTarget,
                                                     graphics::GUIAnimationTargetMode& guiAnimationTargetMode) {
        new (arg1) graphics::GUIAnimation(easingType, arg3, guiAnimationTarget, guiAnimationTargetMode);
        return arg1;
    }

} // namespace jag

namespace jag::math {
    // 0x10090cfd0
    Matrix44T<float>* Matrix44T<float>::Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                            float arg7, float arg8, float arg9, float arg10, float arg11, float arg12,
                                            float arg13, float arg14, float arg15, float arg16) {
        Set(arg1, arg2, arg3, arg4);
        ((this + 16))->Set(arg5, arg6, arg7, arg8);
        ((this + 32))->Set(arg9, arg10, arg11, arg12);
        ((this + 48))->Set(arg13, arg14, arg15, arg16);
        return this;
    }

    // 0x10090d0a0
    Vector2T<float>* Vector2T<float>::Set(float arg1, float arg2) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg2;
        return this;
    }

    // 0x10090d0c0
    Matrix22T<float>::Matrix22T() {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector2T();
            lVar1 = lVar1 + 8;
        } while (lVar1 != 16);
    }

    // 0x10090d220
    auto Vector2T<float>::SetToZero() {
        auto result;
        result = (ReturnValue)0;
        return result;
    }

    // 0x10090d230
    auto Vector2T<float>::SetToOne() {
        auto result;
        result = (ReturnValue)4575657222473777152;
        return result;
    }

    // 0x10090d250
    float Vector2T<float>::InvLength() const {
        float fVar1 = (float)Length(this);
        float fVar2 = 0.0;
        if (fVar1 != 0.0) {
            fVar2 = 1.0 / fVar1;
        }
        return fVar2;
    }

    // 0x10090d280
    Vector2T<float>* Vector2T<float>::operator*=(float arg1) {
        *(float*)this = *(float*)this * arg1;
        *(float*)(this + 4) = arg1 * *(float*)(this + 4);
        return this;
    }

    // 0x10090d2a0
    void Vector2T<float>::Length() const {
        float arg1;

        arg1 = (float)LengthSq(this);
        ::sqrt(arg1);
    }

    // 0x10090d2b0
    void Vector2T<float>::LengthSq() const {
        Vector2Dot<float>(this, this);
    }

    // 0x10090d2c0
    float Vector2Dot<float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22) {
        return *(float*)(vector22 + 4) * *(float*)(vector21 + 4) + *(float*)vector22 * *(float*)vector21;
    }

} // namespace jag::math

namespace jag::fixedfunction {
    // 0x10090b8d0
    function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&& arg1) {
        *(void (**)(...))(this + 80) = function<
            graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
            (unsigned int*)->InsertCodepoints(unsigned long, unsigned long, unsigned long)::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<
            graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
            (unsigned int*)->InsertCodepoints(unsigned long, unsigned long, unsigned long)::$_1&&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(void (**)(...))(this + 88) = function<
            graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
            (unsigned int*)->InsertCodepoints(unsigned long, unsigned long, unsigned long)::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10090b900
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {}

    // 0x10090b910
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* arg1, unsigned int arg2) {
        return 1;
    }

    // 0x10090b920
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(
        graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x10090bbf0
    function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&& arg1) {
        *(void (**)(...))(this + 80) =
            function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
                (char const*)->Insert(unsigned long, unsigned long, unsigned long)::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
                (char const*)->Insert(unsigned long, unsigned long, unsigned long)::$_2&&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(void (**)(...))(this + 88) =
            function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
                (char const*)->Insert(unsigned long, unsigned long, unsigned long)::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10090bc20
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {}

    // 0x10090bc30
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* arg1, unsigned int arg2) {
        return 1;
    }

    // 0x10090bc40
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(
        graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::render {
    class GPUMemoryAllocatorZoneMonitor {
    public:
        GPUMemoryAllocatorZone* GetRootZone() const;
        GPUMemoryAllocatorZone* GetRootZone();
        GPUMemoryAllocatorZoneMonitor();
        void PushZone(const char* str);
        void SetRootZone(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone);
        GPUMemoryAllocatorZone* GetCurrentZone();
        ~GPUMemoryAllocatorZoneMonitor();
        void PopZone();
        void GetZoneStack();
        GPUMemoryAllocatorZone* CreateZone(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone, const char* str);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[60268760];
        GPUMemoryAllocatorZone* m_pRootZone;
    };

    // 0x100904f20
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::GetRootZone() const {
        return m_pRootZone;
    }

    // 0x100c29be0
    void GPUMemoryAllocatorZoneMonitor::SetRootZone(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone) {
        m_pRootZone = gpuMemoryAllocatorZone;
    }

    // 0x100c29de0
    void GPUMemoryAllocatorZoneMonitor::GetZoneStack() {
        unsigned long local_18 = this_thread::GetThreadID();
        (*this)[local_18];
    }

} // namespace jag::render

namespace jag::graphics {
    // 0x100909690
    FontKerningData::~FontKerningData() {}

    // 0x10090a930
    FontKerningData::FontKerningData() : eastl::fixed_vector<eastl::fixed_vector<int, 256ul>, 256ul>() {}

    // 0x10090dc30
    GUIManagerVertexBase<float>::GUIManagerVertexBase() {
        new ((this + 12)) math::Vector2T();
        new ((this + 20)) math::Vector2T();
        new ((this + 28)) math::Vector2T();
    }

} // namespace jag::graphics

namespace jag::graphics::internal {
    // 0x10090c840
    VertexSetupRingArray<GUIManagerVertexBase<short>>::VertexSetupRingArray() : shared_ptr() {
        new ((this + 16)) render::VertexDeclaration();
        new ((this + 112)) Array<GUIManagerVertexBase<short>>();
        *(uint32_t*)(this + 136) = 0;
        new ((this + 144)) render::DynamicBuffer<render::VertexBuffer>();
        new ((this + 232)) render::IndexBuffer();
        new ((this + 320)) render::InputAssemblerState();
    }

    // 0x10090c940
    VertexSetupRingArray<GUIManagerVertexBase<float>>::VertexSetupRingArray() : shared_ptr() {
        new ((this + 16)) render::VertexDeclaration();
        new ((this + 112)) Array<GUIManagerVertexBase<float>>();
        *(uint32_t*)(this + 136) = 0;
        new ((this + 144)) render::DynamicBuffer<render::VertexBuffer>();
        new ((this + 232)) render::IndexBuffer();
        new ((this + 320)) render::InputAssemblerState();
    }

    // 0x10090ca40
    VertexSetupRingArray<GUIManagerLineVertex>::VertexSetupRingArray() : shared_ptr() {
        new ((this + 16)) render::VertexDeclaration();
        new ((this + 112)) Array<GUIManagerLineVertex>();
        *(uint32_t*)(this + 136) = 0;
        new ((this + 144)) render::DynamicBuffer<render::VertexBuffer>();
        new ((this + 232)) render::IndexBuffer();
        new ((this + 320)) render::InputAssemblerState();
    }

} // namespace jag::graphics::internal
