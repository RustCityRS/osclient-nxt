// libs/jtl/WrapArrayValueCopy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    template <
        typename...> // 2 instantiations, e.g. <unsigned char, eastl::allocator>, <unsigned char, BucketAllocatorEASTL>
    class WrapArrayValueCopy {
    public:
        unsigned long operator==(const WrapArrayValueCopy<unsigned char>& wrapArrayValueCopy) const;
        WrapArrayValueCopy(const unsigned char* arg1, unsigned long arg2, bool arg3);
        WrapArrayValueCopy(const WrapArrayValueCopy<unsigned char>& wrapArrayValueCopy);
        ~WrapArrayValueCopy();
        WrapArrayValueCopy(const WrapArrayValueCopy<unsigned char>& wrapArrayValueCopy);
    };

    // 0x100940020
    void hash_combine<unsigned char>(unsigned long& arg1, const unsigned char& arg2) {
        long lVar2 =
            std::hash<unsigned char>::operator()((hash<unsigned char>*)(unsigned long)*arg2, (unsigned char)arg2);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009400c0
    unsigned long
    WrapArrayValueCopy<unsigned char>::operator==(const WrapArrayValueCopy<unsigned char>& wrapArrayValueCopy) const {
        unsigned char* arg1;
        unsigned char* arg2;
        unsigned char* arg3;
        uint64_t unaff_R14;
        unsigned long uVar2;

        if (*(long*)this == *(long*)wrapArrayValueCopy) {
            uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (*(long*)(this + 8) == *(long*)(wrapArrayValueCopy + 8))
                goto LAB_100940119;
            arg1 = (unsigned char*)end();
            arg2 = (unsigned char*)end(this);
            arg3 = (unsigned char*)wrapArrayValueCopy.end();
            if (eastl::equal<unsigned char const*, unsigned char const*>(arg1, arg2, arg3))
                goto LAB_100940119;
        }
        uVar2 = 0;
    LAB_100940119:
        return uVar2 & 4294967295;
    }

    // 0x100941090
    shared_ptr_if_not_array<tweak::Slider>::type
    make_shared<tweak::Slider, char const*&, float&, float&, float&>(const char*& arg1, float& arg2, float& arg3,
                                                                     float& arg4) {
        ref_counter_base* ref_counter_base;
        int local_44;
        Slider* local_40[2];

        auto arg1_00 = aligned_alloc(592, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Slider>::type result;
        } else {
            local_40[0] = placement_new<tweak::Slider, char const*&, float&, float&, float&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Slider>, int, tweak::Slider*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Slider>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1009411d0
    tweak::Slider* placement_new<tweak::Slider, char const*&, float&, float&, float&>(void* arg1, const char*& arg2,
                                                                                      float& arg3, float& arg4,
                                                                                      float& arg5) {
        new (arg1) tweak::Slider(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x100941200
    ref_counter_shared<tweak::Slider>*
    placement_new<ref_counter_shared<tweak::Slider>, int, tweak::Slider*&>(void* arg1, int&& arg2,
                                                                           tweak::Slider*& arg3) {
        new (arg1) ref_counter_shared<tweak::Slider>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100941220
    void shared_ptr_do_enable_shared_from_this<tweak::Slider>(ref_counter_base* ref_counter_base, tweak::Slider* slider,
                                                              tweak::Slider::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)slider);
            local_38 = weak_ptr(local_48);
            slider->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1009412c0
    ref_counter_shared<tweak::Slider>::ref_counter_shared(unsigned long arg1, tweak::Slider* slider)
        : ref_counter_base() {}

    // 0x100941300
    void ref_counter_shared<tweak::Slider>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::EditField> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::EditField> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 560;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100bd2120
    WrapArrayValueCopy<unsigned char>::~WrapArrayValueCopy() {
        ((this + 16))->~Array();
    }

    // 0x100bd8710
    WrapArrayValueCopy<unsigned char>::WrapArrayValueCopy(const unsigned char* arg1, unsigned long arg2, bool arg3) {
        *(unsigned long*)this = arg2;
        *(unsigned char**)(this + 8) = arg1;
        new ((this + 16)) Array<unsigned char>();
        this[40] = (WrapArrayValueCopy<unsigned char>)arg3;
    }

    // 0x100bd8740
    WrapArrayValueCopy<unsigned char>::WrapArrayValueCopy(const WrapArrayValueCopy<unsigned char>& wrapArrayValueCopy) {
        SideBarData* sideBarData1;
        long lVar2;
        SideBarData* sideBarData3;
        uint64_t uVar3;

        *(uint64_t*)this = *(uint64_t*)wrapArrayValueCopy;
        *(uint64_t*)(this + 8) = 0;
        Array<unsigned char>* this_00 = (Array<unsigned char>*)(this + 16);
        new (this_00) Array<unsigned char>();
        WrapArrayValueCopy<unsigned char> WVar1 = wrapArrayValueCopy[40];
        *(WrapArrayValueCopy<unsigned char>*)(this + 40) = WVar1;
        if (WVar1 == (WrapArrayValueCopy<unsigned char>)0) {
            uVar3 = *(uint64_t*)(wrapArrayValueCopy + 8);
        } else {
            this_00->set_max_size(*(unsigned long*)this, 4);
            sideBarData1 = *(SideBarData**)(wrapArrayValueCopy + 8);
            lVar2 = *(long*)wrapArrayValueCopy;
            sideBarData3 = (SideBarData*)this_00->data();
            eastl::copy<char*, char*>(sideBarData1, (SideBarData*)((long)&sideBarData1->field_0 + lVar2), sideBarData3);
            uVar3 = this_00->data();
        }
        *(uint64_t*)(this + 8) = uVar3;
    }

    // 0x100c31a20
    WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::~WrapArrayValueCopy() {
        ((this + 16))->~Array();
    }

    // 0x100c3c8f0
    WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(const unsigned char* arg1,
                                                                                unsigned long arg2, bool arg3) {
        *(unsigned long*)this = arg2;
        *(unsigned char**)(this + 8) = arg1;
        new ((this + 16)) Array<unsigned char, BucketAllocatorEASTL>();
        this[40] = (WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>)arg3;
    }

    // 0x100c3c920
    WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(
        const WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>& wrapArrayValueCopy) {
        SideBarData* sideBarData1;
        long lVar2;
        SideBarData* sideBarData3;
        uint64_t uVar3;

        *(uint64_t*)this = *(uint64_t*)wrapArrayValueCopy;
        *(uint64_t*)(this + 8) = 0;
        Array<unsigned char, BucketAllocatorEASTL>* this_00 = (Array<unsigned char, BucketAllocatorEASTL>*)(this + 16);
        new (this_00) Array<unsigned char, BucketAllocatorEASTL>();
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL> WVar1 = wrapArrayValueCopy[40];
        *(WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>*)(this + 40) = WVar1;
        if (WVar1 == (WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>)0) {
            uVar3 = *(uint64_t*)(wrapArrayValueCopy + 8);
        } else {
            this_00->set_max_size(*(unsigned long*)this, 4);
            sideBarData1 = *(SideBarData**)(wrapArrayValueCopy + 8);
            lVar2 = *(long*)wrapArrayValueCopy;
            sideBarData3 = (SideBarData*)this_00->data();
            eastl::copy<char*, char*>(sideBarData1, (SideBarData*)((long)&sideBarData1->field_0 + lVar2), sideBarData3);
            uVar3 = this_00->data();
        }
        *(uint64_t*)(this + 8) = uVar3;
    }

} // namespace jag

// 0x100940f80
decltype((static_cast<void (
              *&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&,
                                        jag::graphics::EffectType const&),
                              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&>(
                  void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&),
                  jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&))(
              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&)>({ parm #1 }))(
    static_cast<jag::graphics::EffectManager&>({ parm #2 }), static_cast<jag::tweak::Event const&>({ parm #2 }),
    static_cast<jag::graphics::EffectType&>({ parm #2 }))arg1) {
    return (**(void (**)(...))arg1)();
}

// 0x100942b90
decltype((static_cast<void (
              *&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&,
                                        jag::graphics::EffectType const&,
                                        std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                              jag::graphics::LightScatteringEffect::InitialiseTweakVars(
                                  jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_0&>(
                  void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
                            std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                  jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                  jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                            jag::graphics::EffectManager&)::$_0&))(
              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
              std::function<void(jag::tweak::EditBoxEvent<float> const&)>)>({ parm #1 }))(
    static_cast<jag::graphics::EffectManager&>({ parm #2 }), static_cast<jag::tweak::Event const&>({ parm #2 }),
    static_cast<jag::graphics::EffectType&>({ parm #2 }),
    static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(
        jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_0&>({ parm #2 }))arg1) {
    __0* in_RSI;
    function<void(jag::tweak::EditBoxEvent<float> const&)> local_68[48];
    long local_38;

    void* pcVar1 = *(void (**)(...))arg1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__0,
        void>(local_68, in_RSI);
    (*pcVar1)();
    return (decltype)*(long*)PTR____stack_chk_guard_100ee9d98;
}

// 0x100943fc0
decltype((static_cast<void (
              *&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&,
                                        jag::graphics::EffectType const&,
                                        std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                              jag::graphics::LightScatteringEffect::InitialiseTweakVars(
                                  jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_1&>(
                  void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
                            std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                  jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                  jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                            jag::graphics::EffectManager&)::$_1&))(
              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
              std::function<void(jag::tweak::EditBoxEvent<float> const&)>)>({ parm #1 }))(
    static_cast<jag::graphics::EffectManager&>({ parm #2 }), static_cast<jag::tweak::Event const&>({ parm #2 }),
    static_cast<jag::graphics::EffectType&>({ parm #2 }),
    static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(
        jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_1&>({ parm #2 }))arg1) {
    __1* in_RSI;
    function<void(jag::tweak::EditBoxEvent<float> const&)> local_68[48];
    long local_38;

    void* pcVar1 = *(void (**)(...))arg1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__1,
        void>(local_68, in_RSI);
    (*pcVar1)();
    return (decltype)*(long*)PTR____stack_chk_guard_100ee9d98;
}

// 0x100945350
decltype((static_cast<void (
              *&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&,
                                        jag::graphics::EffectType const&,
                                        std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                              jag::graphics::LightScatteringEffect::InitialiseTweakVars(
                                  jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_2&>(
                  void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
                            std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                  jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                  jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                            jag::graphics::EffectManager&)::$_2&))(
              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
              std::function<void(jag::tweak::EditBoxEvent<float> const&)>)>({ parm #1 }))(
    static_cast<jag::graphics::EffectManager&>({ parm #2 }), static_cast<jag::tweak::Event const&>({ parm #2 }),
    static_cast<jag::graphics::EffectType&>({ parm #2 }),
    static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(
        jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_2&>({ parm #2 }))arg1) {
    __2* in_RSI;
    function<void(jag::tweak::EditBoxEvent<float> const&)> local_68[48];
    long local_38;

    void* pcVar1 = *(void (**)(...))arg1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__2,
        void>(local_68, in_RSI);
    (*pcVar1)();
    return (decltype)*(long*)PTR____stack_chk_guard_100ee9d98;
}

// 0x1009466f0
decltype((static_cast<void (
              *&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&,
                                        jag::graphics::EffectType const&,
                                        std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                              jag::graphics::LightScatteringEffect::InitialiseTweakVars(
                                  jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_3&>(
                  void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
                            std::function<void(jag::tweak::EditBoxEvent<float> const&)>),
                  jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&,
                  jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                            jag::graphics::EffectManager&)::$_3&))(
              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&,
              std::function<void(jag::tweak::EditBoxEvent<float> const&)>)>({ parm #1 }))(
    static_cast<jag::graphics::EffectManager&>({ parm #2 }), static_cast<jag::tweak::Event const&>({ parm #2 }),
    static_cast<jag::graphics::EffectType&>({ parm #2 }),
    static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(
        jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_3&>({ parm #2 }))arg1) {
    __3* in_RSI;
    function<void(jag::tweak::EditBoxEvent<float> const&)> local_68[48];
    long local_38;

    void* pcVar1 = *(void (**)(...))arg1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__3,
        void>(local_68, in_RSI);
    (*pcVar1)();
    return (decltype)*(long*)PTR____stack_chk_guard_100ee9d98;
}

namespace jag::math {
    // 0x10094a4a0
    ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                                             unsigned int arg4) {
        Set(this, arg1, arg2, arg3, arg4);
    }

    // 0x10094a4b0
    void ColourStorage8888<ARGB8StorageLayout>::Set(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                                    unsigned int arg4) {
        unsigned int local_18[2];

        local_18[1] = 255;
        local_18[0] = arg4;
        auto pCVar1 = std::min<unsigned int>(arg1, *(local_18 + 1));
        this[2] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(arg2, *(local_18 + 1));
        this[1] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(arg3, *(local_18 + 1));
        *this = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(*local_18, *(local_18 + 1));
        this[3] = *pCVar1;
    }

    // 0x10094a540
    Vector2T<float> Lerp<Vector2T<float>, float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22,
                                                 float arg3) {
        uint64_t local_20 = vector22 - vector21;
        uint64_t local_28 = &local_20 * arg3;
        vector21 + local_28;
    }

    // 0x10094af70
    void SRGBToLinear(const Vector3T<float>& vector3) {
        uint64_t uVar2;

        auto puVar1 = vector3.SSOBeginPtr();
        float local_18 = (float)_powf(*puVar1, 1074580685);
        puVar1 = (uint32_t*)vector3.y();
        float local_14 = (float)_powf(*puVar1, 1074580685);
        puVar1 = (uint32_t*)vector3.second();
        float arg3 = (float)_powf(*puVar1, 1074580685);
        ColourHSL local_28(local_18, local_14, arg3);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

} // namespace jag::math

namespace jag::tweak {
    template <typename...> // 1 instantiations, e.g. <float>
    class EditBoxEvent {
    public:
        EditBoxEvent(const float& arg1, graphics::Effect* effect, const Event* event);
    };

    // 0x100942200
    EditBoxEvent<float>::EditBoxEvent(const float& arg1, graphics::Effect* effect, const Event* event) {
        *(float*)this = arg1;
        *(Effect**)(this + 8) = effect;
        *(Event**)(this + 16) = event;
    }

} // namespace jag::tweak
