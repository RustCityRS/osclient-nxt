// libs/jtl/WrapArrayValueCopy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    template <
        typename...> // 2 instantiations, e.g. <unsigned char, eastl::allocator>, <unsigned char, BucketAllocatorEASTL>
    class WrapArrayValueCopy {
    public:
        ulong operator==(WrapArrayValueCopy<unsigned char, eastl::allocator> const&) const;
        WrapArrayValueCopy(unsigned char const*, unsigned long, bool);
        WrapArrayValueCopy(WrapArrayValueCopy<unsigned char, eastl::allocator> const&);
        ~WrapArrayValueCopy();
        WrapArrayValueCopy(WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL> const&);
    };

    // 0x100940020, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned char>(unsigned long&, unsigned char const&)
    void hash_combine<unsigned char>(ulong* param_1, uchar* param_2) {
        ulong uVar1;
        long lVar2;

        lVar2 = std::hash<unsigned char>::operator()((hash<unsigned char>*)(ulong)*param_2, (uchar)param_2);
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009400c0, 112 bytes, inline, placed by class name and debug map
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::operator==(WrapArrayValueCopy<unsigned char, eastl::allocator> const&) const
    /* WrapArrayValueCopy<unsigned char,
   eastl::allocator>::TEMPNAMEPLACEHOLDERVALUE(WrapArrayValueCopy<unsigned char,
   eastl::allocator> const&) const */

    ulong WrapArrayValueCopy<unsigned char, eastl::allocator>::operator==(
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this, WrapArrayValueCopy* param_1) {
        uchar* puVar2;
        uchar* puVar3;
        uchar* puVar4;
        undefined8 unaff_R14;
        ulong uVar5;

        if (*(long*)this == *(long*)param_1) {
            uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (*(long*)(this + 8) == *(long*)(param_1 + 8))
                goto LAB_100940119;
            puVar2 = (uchar*)end();
            puVar3 = (uchar*)end(this);
            puVar4 = (uchar*)param_1->end();
            if (eastl::equal<unsigned char const*, unsigned char const*>(puVar2, puVar3, puVar4))
                goto LAB_100940119;
        }
        uVar5 = 0;
    LAB_100940119:
        return uVar5 & 4294967295;
    }

    // 0x100941090, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Slider>::type make_shared<tweak::Slider, char const*&, float&, float&, float&>(char const*&, float&, float&, float&)
    jag* make_shared<tweak::Slider, char const*&, float&, float&, float&>(char** param_1, float* param_2,
                                                                          float* param_3, float* param_4) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        Slider* local_40[2];

        pvVar1 = (void*)aligned_alloc(592, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::Slider, char const*&, float&, float&, float&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Slider>, int, tweak::Slider*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Slider>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1009411d0, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::Slider* placement_new<tweak::Slider, char const*&, float&, float&, float&>(void*, char const*&, float&, float&, float&)
    Slider* placement_new<tweak::Slider, char const*&, float&, float&, float&>(void* param_1, char** param_2,
                                                                               float* param_3, float* param_4,
                                                                               float* param_5) {
        tweak::Slider::Slider(param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100941200, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Slider>* placement_new<ref_counter_shared<tweak::Slider>, int, tweak::Slider*&>(void*, int&&, tweak::Slider*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::Slider>, int, tweak::Slider*&>(void* param_1,
                                                                                               int* param_2,
                                                                                               Slider** param_3) {
        ref_counter_shared<tweak::Slider>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100941220, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Slider>(ref_counter_base*, tweak::Slider*, tweak::Slider::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Slider>(ref_counter_base* param_1, Slider* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x1009412b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Slider>::ref_counter_shared(unsigned long, tweak::Slider*): jumps straight to the base-object constructor

    // 0x1009412c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Slider>::ref_counter_shared(unsigned long, tweak::Slider*)
    void ref_counter_shared<tweak::Slider>::ref_counter_shared(ulong param_1, Slider* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7468 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Slider**)(this + 24) = param_2;
    }

    // 0x100941300, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Slider>::DeleteData()
    /* ref_counter_shared<tweak::EditField>::DeleteData() */

    void ref_counter_shared<tweak::EditField>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 560;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100bcb970, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(unsigned char const*, unsigned long, bool): jumps straight to the base-object constructor

    // 0x100bcb980, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(WrapArrayValueCopy<unsigned char, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100bcb9b0, 16 bytes, complete-object destructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::~WrapArrayValueCopy(): jumps straight to the base-object destructor

    // 0x100bd2120, 16 bytes, base-object destructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::~WrapArrayValueCopy()
    void WrapArrayValueCopy<unsigned char, eastl::allocator>::~WrapArrayValueCopy(
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this) {
        ((this + 16))->~Array();
    }

    // 0x100bd8710, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(unsigned char const*, unsigned long, bool)
    void WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this, uchar* param_1, ulong param_2, bool param_3) {
        *(ulong*)this = param_2;
        *(uchar**)(this + 8) = param_1;
        new ((this + 16)) Array<unsigned char, eastl::allocator>();
        this[40] = (WrapArrayValueCopy<unsigned char, eastl::allocator>)param_3;
    }

    // 0x100bd8740, 160 bytes, base-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(WrapArrayValueCopy<unsigned char, eastl::allocator> const&)
    void WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this, WrapArrayValueCopy* param_1) {
        Array<unsigned char, eastl::allocator>* this_00;
        WrapArrayValueCopy WVar1;
        char* pcVar2;
        long lVar3;
        char* pcVar4;
        undefined8 uVar5;

        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = 0;
        this_00 = (Array<unsigned char, eastl::allocator>*)(this + 16);
        Array<unsigned char, eastl::allocator>::Array(this_00);
        WVar1 = param_1[40];
        *(WrapArrayValueCopy*)(this + 40) = WVar1;
        if (WVar1 == (WrapArrayValueCopy)0) {
            uVar5 = *(undefined8*)(param_1 + 8);
        } else {
            this_00->set_max_size(*(ulong*)this, 4);
            pcVar2 = *(char**)(param_1 + 8);
            lVar3 = *(long*)param_1;
            pcVar4 = (char*)this_00->data();
            eastl::copy<char*, char*>(pcVar2, pcVar2 + lVar3, pcVar4);
            uVar5 = this_00->data();
        }
        *(undefined8*)(this + 8) = uVar5;
    }

    // 0x100c14950, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(unsigned char const*, unsigned long, bool): jumps straight to the base-object constructor

    // 0x100c14960, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x100c14990, 16 bytes, complete-object destructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::~WrapArrayValueCopy(): jumps straight to the base-object destructor

    // 0x100c31a20, 16 bytes, base-object destructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::~WrapArrayValueCopy()
    void WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::~WrapArrayValueCopy(
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>* this) {
        ((this + 16))->~Array();
    }

    // 0x100c3c8f0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(unsigned char const*, unsigned long, bool)
    void WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>* this, uchar* param_1, ulong param_2, bool param_3) {
        *(ulong*)this = param_2;
        *(uchar**)(this + 8) = param_1;
        new ((this + 16)) Array<unsigned char, BucketAllocatorEASTL>();
        this[40] = (WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>)param_3;
    }

    // 0x100c3c920, 160 bytes, base-object constructor, inline, placed by class name
    // WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL> const&)
    void WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>::WrapArrayValueCopy(
        WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>* this, WrapArrayValueCopy* param_1) {
        Array<unsigned char, BucketAllocatorEASTL>* this_00;
        WrapArrayValueCopy WVar1;
        char* pcVar2;
        long lVar3;
        char* pcVar4;
        undefined8 uVar5;

        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = 0;
        this_00 = (Array<unsigned char, BucketAllocatorEASTL>*)(this + 16);
        Array<unsigned char, BucketAllocatorEASTL>::Array(this_00);
        WVar1 = param_1[40];
        *(WrapArrayValueCopy*)(this + 40) = WVar1;
        if (WVar1 == (WrapArrayValueCopy)0) {
            uVar5 = *(undefined8*)(param_1 + 8);
        } else {
            this_00->set_max_size(*(ulong*)this, 4);
            pcVar2 = *(char**)(param_1 + 8);
            lVar3 = *(long*)param_1;
            pcVar4 = (char*)this_00->data();
            eastl::copy<char*, char*>(pcVar2, pcVar2 + lVar3, pcVar4);
            uVar5 = this_00->data();
        }
        *(undefined8*)(this + 8) = uVar5;
    }

} // namespace jag

// 0x100940f80, 32 bytes, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&>(void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&))(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&)>({parm#1}))(static_cast<jag::graphics::EffectManager&>({parm#2}), static_cast<jag::tweak::Event const&>({parm#2}), static_cast<jag::graphics::EffectType&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN3jag8graphics13EffectManagerERKNS1_5tweak5EventERKNS2_10EffectTypeEEJS4_S8_RS9_EEEDTclscT_fp_spscT0_fp0_EEOSG_DpOSH_(
    undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    (*(code*)*param_1)(param_2, param_3, param_4);
}

// 0x100942b90, 144 bytes, inline, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_0&>(void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_0&))(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>)>({parm#1}))(static_cast<jag::graphics::EffectManager&>({parm#2}), static_cast<jag::tweak::Event const&>({parm#2}), static_cast<jag::graphics::EffectType&>({parm#2}), static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_0&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN3jag8graphics13EffectManagerERKNS1_5tweak5EventERKNS2_10EffectTypeENS_8functionIFvRKNS5_12EditBoxEventIfEEEEEEJS4_S8_RS9_RZNS2_21LightScatteringEffect19InitialiseTweakVarsERNS5_14ContainerGroupES4_E3__0EEEDTclscT_fp_spscT0_fp0_EEOSS_DpOST_(
    undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    long lVar1;
    code* pcVar2;
    function<void(jag::tweak::EditBoxEvent<float> const&)> afStackY_e8[128];
    __0 in_stack_ffffffffffffff98;

    lVar1 = *(long*)PTR____stack_chk_guard_100ee9d98;
    pcVar2 = (code*)*param_1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__0,
        void>(in_stack_ffffffffffffff98);
    (*pcVar2)(param_2, param_3, param_4, afStackY_e8 + 128);
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::~function(afStackY_e8 + 128);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar1) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x100943fc0, 144 bytes, inline, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_1&>(void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_1&))(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>)>({parm#1}))(static_cast<jag::graphics::EffectManager&>({parm#2}), static_cast<jag::tweak::Event const&>({parm#2}), static_cast<jag::graphics::EffectType&>({parm#2}), static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_1&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN3jag8graphics13EffectManagerERKNS1_5tweak5EventERKNS2_10EffectTypeENS_8functionIFvRKNS5_12EditBoxEventIfEEEEEEJS4_S8_RS9_RZNS2_21LightScatteringEffect19InitialiseTweakVarsERNS5_14ContainerGroupES4_E3__1EEEDTclscT_fp_spscT0_fp0_EEOSS_DpOST_(
    undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    long lVar1;
    code* pcVar2;
    function<void(jag::tweak::EditBoxEvent<float> const&)> afStackY_e8[128];
    __1 in_stack_ffffffffffffff98;

    lVar1 = *(long*)PTR____stack_chk_guard_100ee9d98;
    pcVar2 = (code*)*param_1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__1,
        void>(in_stack_ffffffffffffff98);
    (*pcVar2)(param_2, param_3, param_4, afStackY_e8 + 128);
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::~function(afStackY_e8 + 128);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar1) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x100945350, 144 bytes, inline, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_2&>(void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_2&))(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>)>({parm#1}))(static_cast<jag::graphics::EffectManager&>({parm#2}), static_cast<jag::tweak::Event const&>({parm#2}), static_cast<jag::graphics::EffectType&>({parm#2}), static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_2&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN3jag8graphics13EffectManagerERKNS1_5tweak5EventERKNS2_10EffectTypeENS_8functionIFvRKNS5_12EditBoxEventIfEEEEEEJS4_S8_RS9_RZNS2_21LightScatteringEffect19InitialiseTweakVarsERNS5_14ContainerGroupES4_E3__2EEEDTclscT_fp_spscT0_fp0_EEOSS_DpOST_(
    undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    long lVar1;
    code* pcVar2;
    function<void(jag::tweak::EditBoxEvent<float> const&)> afStackY_e8[128];
    __2 in_stack_ffffffffffffff98;

    lVar1 = *(long*)PTR____stack_chk_guard_100ee9d98;
    pcVar2 = (code*)*param_1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__2,
        void>(in_stack_ffffffffffffff98);
    (*pcVar2)(param_2, param_3, param_4, afStackY_e8 + 128);
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::~function(afStackY_e8 + 128);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar1) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009466f0, 144 bytes, inline, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_3&>(void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&, jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_3&))(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&, std::function<void (jag::tweak::EditBoxEvent<float> const&)>)>({parm#1}))(static_cast<jag::graphics::EffectManager&>({parm#2}), static_cast<jag::tweak::Event const&>({parm#2}), static_cast<jag::graphics::EffectType&>({parm#2}), static_cast<jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&, jag::graphics::EffectManager&)::$_3&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN3jag8graphics13EffectManagerERKNS1_5tweak5EventERKNS2_10EffectTypeENS_8functionIFvRKNS5_12EditBoxEventIfEEEEEEJS4_S8_RS9_RZNS2_21LightScatteringEffect19InitialiseTweakVarsERNS5_14ContainerGroupES4_E3__3EEEDTclscT_fp_spscT0_fp0_EEOSS_DpOST_(
    undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    long lVar1;
    code* pcVar2;
    function<void(jag::tweak::EditBoxEvent<float> const&)> afStackY_e8[128];
    __3 in_stack_ffffffffffffff98;

    lVar1 = *(long*)PTR____stack_chk_guard_100ee9d98;
    pcVar2 = (code*)*param_1;
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::function<
        jag::graphics::LightScatteringEffect::InitialiseTweakVars(jag::tweak::ContainerGroup&,
                                                                  jag::graphics::EffectManager&)::__3,
        void>(in_stack_ffffffffffffff98);
    (*pcVar2)(param_2, param_3, param_4, afStackY_e8 + 128);
    std::function<void(jag::tweak::EditBoxEvent<float> const&)>::~function(afStackY_e8 + 128);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar1) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

namespace jag::math {
    // 0x10094a4a0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(unsigned int, unsigned int, unsigned int, unsigned int)
    void ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(uint param_1, uint param_2, uint param_3,
                                                                  uint param_4) {
        Set(this, param_1, param_2, param_3, param_4);
    }

    // 0x10094a4b0, 144 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::Set(unsigned int, unsigned int, unsigned int, unsigned int)
    void ColourStorage8888<ARGB8StorageLayout>::Set(uint param_1, uint param_2, uint param_3, uint param_4) {
        ColourStorage8888<ARGB8StorageLayout>* pCVar1;
        uint local_24;
        uint local_20;
        uint local_1c;
        uint local_18[2];

        local_18[1] = 255;
        local_24 = param_1;
        local_20 = param_2;
        local_1c = param_3;
        local_18[0] = param_4;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(&local_24, local_18 + 1);
        this[2] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(&local_20, local_18 + 1);
        this[1] = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(&local_1c, local_18 + 1);
        *this = *pCVar1;
        local_18[1] = 255;
        pCVar1 = (ColourStorage8888<ARGB8StorageLayout>*)std::min<unsigned int>(local_18, local_18 + 1);
        this[3] = *pCVar1;
    }

    // 0x10094a540, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> Lerp<Vector2T<float>, float>(Vector2T<float> const&, Vector2T<float> const&, float)
    void Lerp<Vector2T<float>, float>(Vector2T* param_1, Vector2T* param_2, float param_3) {
        undefined8 local_28;
        undefined8 local_20;

        local_20 = operator-(param_2, param_1);
        local_28 = operator*(param_3, (Vector2T*)&local_20);
        operator+(param_1, (Vector2T*)&local_28);
    }

    // 0x10094af70, 144 bytes, inline, placed by debug map only (low confidence)
    // SRGBToLinear(Vector3T<float> const&)
    undefined8 SRGBToLinear(Vector3T* param_1) {
        vector* pvVar1;
        undefined4* puVar2;
        float fVar3;
        undefined8 uVar4;
        ColourHSL local_28;
        float local_18;
        float local_14;

        pvVar1 = SSOBeginPtr(param_1);
        local_18 = (float)_powf(*(undefined4*)pvVar1, 1074580685);
        puVar2 = (undefined4*)y();
        local_14 = (float)_powf(*puVar2, 1074580685);
        puVar2 = (undefined4*)second();
        fVar3 = (float)_powf(*puVar2, 1074580685);
        new (&local_28) ColourHSL(local_18, local_14, fVar3);
        uVar4._0_4_ = local_28.field_0;
        uVar4._4_4_ = local_28.field_4;
        return uVar4;
    }

} // namespace jag::math

namespace jag::tweak {
    template <typename...> // 1 instantiations, e.g. <float>
    class EditBoxEvent {
    public:
        EditBoxEvent(float const&, graphics::Effect*, Event const*);
    };

    // 0x1009421d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // EditBoxEvent<float>::EditBoxEvent(float const&, graphics::Effect*, Event const*): jumps straight to the base-object constructor

    // 0x100942200, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // EditBoxEvent<float>::EditBoxEvent(float const&, graphics::Effect*, Event const*)
    void EditBoxEvent<float>::EditBoxEvent(float* param_1, Effect* param_2, Event* param_3) {
        *(float*)this = *param_1;
        *(Effect**)(this + 8) = param_2;
        *(Event**)(this + 16) = param_3;
    }

} // namespace jag::tweak
