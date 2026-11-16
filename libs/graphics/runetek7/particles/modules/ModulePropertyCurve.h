// libs/graphics/runetek7/particles/modules/ModulePropertyCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    template <typename...> // 2 instantiations, e.g. <float>, <math::Vector3T<float> >
    class ModulePropertyCurve {
    public:
        class CacheEntry;
        class Key;
        uint8_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        float Eval(float arg1) const;
        uint64_t Eval(float arg1) const;
        uint64_t EvalLinear(float arg1) const;
        float EvalLinear(float arg1) const;
        int GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<float>::CacheEntry>>(
            const eastl::vector<ModulePropertyCurve<float>::CacheEntry>& cacheEntrys, float arg2);
        int GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry>>(
            const eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry>& cacheEntrys, float arg2);
        int GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul>>(
            const eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul>& keys, float arg2);
        int GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul>>(
            const eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul>& keys, float arg2);
        ~ModulePropertyCurve();
        void DecodePayload(PacketT<Array<unsigned char>>& arg1);
        void GenerateEvalCache();
        ModulePropertyCurve();
    };

    template <typename...> // 1 instantiations, e.g.
    class ModulePropertyCurve::CacheEntry {
    public:
        CacheEntry(float arg1, math::Vector3T<float> vector3);
    };

    template <typename...> // 1 instantiations, e.g.
    class ModulePropertyCurve::Key {
    public:
        Key();
    };

    // 0x1007e86b0
    ModulePropertyCurve<float>::~ModulePropertyCurve() {
        ((this + 56))->~vector();
    }

    // 0x1007e87e0
    ModulePropertyCurve<math::Vector3T<float>>::~ModulePropertyCurve() {
        ((this + 72))->~vector();
    }

    // 0x1007ecd20
    ModularParticleSystemTemplate::ModularParticleSystemTemplate() : eastl::bitset(), m_numLoops(0) {
        new ((m_renderPassBits + 4)) eastl::fixed_vector<ModularParticleEmitterTemplate, 1ul>();
    }

    // 0x1007ed0a0
    ModularParticleSystemTemplate::~ModularParticleSystemTemplate() {
        ((m_renderPassBits + 4))->~fixed_vector();
        field_8.~basic_string();
    }

    // 0x1007fa600
    void ModulePropertyCurve<float>::DecodePayload(PacketT<Array<unsigned char>>& arg1) {
        gFloat();
    }

    // 0x1007fa610
    void ModulePropertyCurve<float>::GenerateEvalCache() {
        unsigned long uVar2;
        float* arg1;
        float* pfVar3;
        int iVar4;
        float* arg2;
        float local_38;
        float local_34;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(this + 56);
        if ((this_00->empty() != '\0') && (uVar2 = size(), 1 < uVar2)) {
            arg1 = (float*)HeapBeginPtr();
            pfVar3 = (float*)end();
            if (arg1 != pfVar3) {
                do {
                    arg2 = arg1 + 4;
                    pfVar3 = (float*)end();
                    if ((arg2 != pfVar3) && (*arg1 != arg1[4])) {
                        this_00->emplace_back<float&, float&>(*arg1, *(arg1 + 1));
                        iVar4 = 1;
                        do {
                            local_38 = math::Lerp<float, float>(*arg1, *arg2, (float)iVar4 * 0.1);
                            math::CubicBezierCalcInterpolator(*arg1, arg1[2], arg1[6], arg1[4], local_38);
                            local_34 = (float)__ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f(arg1 + 1, arg1 + 3,
                                                                                                 arg1 + 7, arg1 + 5);
                            this_00->emplace_back<float&, float&>(local_38, local_34);
                            iVar4 = iVar4 + 1;
                        } while (iVar4 != 10);
                        this_00->emplace_back<float&, float&>(*arg2, *(arg1 + 5));
                    }
                    pfVar3 = (float*)end();
                    arg1 = arg2;
                } while (arg2 != pfVar3);
            }
        }
    }

    // 0x1007fabc0
    void ModulePropertyCurve<math::Vector3T<float>>::DecodePayload(PacketT<Array<unsigned char>>& arg1) {

        return local_30;
        Vector3T<float> local_40(arg1, false);
        local_30.SetXYZ(local_40);
        return local_30[0];
    }

    // 0x1007fac10
    void ModulePropertyCurve<math::Vector3T<float>>::GenerateEvalCache() {
        unsigned long uVar2;
        float* arg1;
        float* pfVar3;
        int iVar4;
        float* arg2;
        float arg2_00;
        uint64_t local_68;
        float local_60;
        Vector3T<float>* local_58;
        float* local_50;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_40;
        float local_34;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(this + 72);
        if (this_00->empty() != '\0') {
            uVar2 = size();
            if (1 < uVar2) {
                arg1 = (float*)HeapBeginPtr();
                pfVar3 = (float*)end();
                if (arg1 != pfVar3) {
                    local_40 = this_00;
                    do {
                        arg2 = arg1 + 8;
                        pfVar3 = (float*)end();
                        if ((arg2 != pfVar3) && (*arg1 != arg1[8])) {
                            local_58 = (Vector3T<float>*)(arg1 + 1);
                            this_00->emplace_back<float&, math::Vector3T<float>&>(*arg1, *local_58);
                            local_50 = arg1 + 5;
                            iVar4 = 1;
                            do {
                                local_34 = math::Lerp<float, float>(*arg1, *arg2, (float)iVar4 * 0.1);
                                arg2_00 = arg1[4];
                                math::CubicBezierCalcInterpolator(*arg1, arg2_00, arg1[12], arg1[8], local_34);
                                local_68 = __ZN3jag4math15CubicBezierGetYINS0_8Vector3TIfEEEEDaRKT_S7_S7_S7_f(
                                    local_58, local_50, arg1 + 13, (Vector3T<float>*)(arg1 + 9));
                                local_60 = arg2_00;
                                local_40->emplace_back<float&, math::Vector3T<float>&>(local_34, local_68);
                                this_00 = local_40;
                                iVar4 = iVar4 + 1;
                            } while (iVar4 != 10);
                            local_40->emplace_back<float&, math::Vector3T<float>&>(*arg2, *((arg1 + 9)));
                            this = this;
                        }
                        pfVar3 = (float*)end();
                        arg1 = arg2;
                    } while (arg2 != pfVar3);
                }
            }
        }
    }

    // 0x1007fafd0
    ModulePropertyCurve<math::Vector3T<float>>::Key::Key() {
        new ((this + 4)) math::Vector3T();
        new ((this + 20)) math::Vector3T();
    }

    // 0x1007fb2d0
    ModulePropertyCurve<math::Vector3T<float>>::CacheEntry::CacheEntry(float arg1, math::Vector3T<float> vector3) {
        uint64_t in_XMM1_Qa;
        uint32_t in_XMM2_Da;

        *(float*)this = arg1;
        *(uint64_t*)(this + 4) = in_XMM1_Qa;
        *(uint32_t*)(this + 12) = in_XMM2_Da;
    }

    // 0x10082f0a0
    ModulePropertyCurve<math::Vector3T<float>>::ModulePropertyCurve()
        : eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul>() {
        new ((this + 72)) eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry>();
    }

    // 0x10082f2e0
    ModulePropertyCurve<float>::ModulePropertyCurve() : eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul>() {
        new ((this + 56)) eastl::vector<ModulePropertyCurve<float>::CacheEntry>();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007ecae0
    shared_ptr_if_not_array<graphics::ModularParticleSystemTemplate>::type
    make_shared<graphics::ModularParticleSystemTemplate>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ModularParticleSystemTemplate* local_28[2];

        auto arg1 = aligned_alloc(320, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::ModularParticleSystemTemplate>::type result;
        } else {
            local_28[0] = placement_new<graphics::ModularParticleSystemTemplate>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::ModularParticleSystemTemplate>, int,
                              graphics::ModularParticleSystemTemplate*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1007eccc0
    graphics::ModularParticleSystemTemplate* placement_new<graphics::ModularParticleSystemTemplate>(void* arg1) {
        ___bzero(arg1, 288);
        new (arg1) graphics::ModularParticleSystemTemplate();
        return arg1;
    }

    // 0x1007eccf0
    ref_counter_shared<graphics::ModularParticleSystemTemplate>*
    placement_new<ref_counter_shared<graphics::ModularParticleSystemTemplate>, int,
                  graphics::ModularParticleSystemTemplate*&>(void* arg1, int&& arg2,
                                                             graphics::ModularParticleSystemTemplate*& arg3) {
        new (arg1) ref_counter_shared<graphics::ModularParticleSystemTemplate>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1007ecfa0
    ref_counter_shared<graphics::ModularParticleSystemTemplate>::ref_counter_shared(
        unsigned long arg1, graphics::ModularParticleSystemTemplate* modularParticleSystemTemplate)
        : ref_counter_base() {}

    // 0x1007ecfe0
    void ref_counter_shared<graphics::ModularParticleSystemTemplate>::DeleteData() {
        ref_counter_shared<graphics::ModularParticleSystemTemplate> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ModularParticleSystemTemplate*)((long)&(this[3]._vptr)->_dtor + lVar2))
                        ->~ModularParticleSystemTemplate();
                    prVar1 =
                        (ref_counter_shared<graphics::ModularParticleSystemTemplate> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 288;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1007ee1d0
    void SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::allocate(unsigned long arg1,
                             std::__packaged_task_func<
                                 std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                     eastl::vector<graphics::ParticleSystem*>>(
                                     std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                     eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{ lambda() #1 }>,
                                 SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x1007ee4f0
    void SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(std::__packaged_task_func<
                             std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                 eastl::vector<graphics::ParticleSystem*>>(
                                 std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                 eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{ lambda() #1 }>,
                             SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                         unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 48), arg2);
    }

    // 0x1007f08a0
    void SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::allocate(unsigned long arg1,
                             std::__packaged_task_func<
                                 std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                     eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                     std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                     eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&,
                                     float)::{ lambda() #1 }>,
                                 SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x1007f0b60
    void SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(std::__packaged_task_func<
                                   std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                       eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                       std::vector<std::future<void>, std::allocator<std::future<void>>>&,
                                       unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&,
                                       ThreadPool&, float)::{ lambda() #1 }>,
                                   SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                               unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 48), arg2);
    }

    // 0x1007f1880
    graphics::ModularParticleSystem*
    placement_new<graphics::ModularParticleSystem, shared_ptr<graphics::ModularParticleSystemTemplate> const&,
                  shared_ptr<graphics::VFXAttachmentInfo> const&>(
        void* arg1, const shared_ptr<graphics::ModularParticleSystemTemplate>& modularParticleSystemTemplate,
        const shared_ptr<graphics::VFXAttachmentInfo>& vfxAttachmentInfo) {
        new (arg1) graphics::ModularParticleSystem(modularParticleSystemTemplate, vfxAttachmentInfo);
        return arg1;
    }

    // 0x1007f18a0
    ref_counter_shared<graphics::ModularParticleSystem>*
    placement_new<ref_counter_shared<graphics::ModularParticleSystem>, int, graphics::ModularParticleSystem*&>(
        void* arg1, int&& arg2, graphics::ModularParticleSystem*& arg3) {
        new (arg1) ref_counter_shared<graphics::ModularParticleSystem>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1007f18d0
    ref_counter_shared<graphics::ModularParticleSystem>::ref_counter_shared(
        unsigned long arg1, graphics::ModularParticleSystem* modularParticleSystem)
        : ref_counter_base() {}

    // 0x1007f1910
    void ref_counter_shared<graphics::ModularParticleSystem>::DeleteData() {
        ref_counter_shared<graphics::ModularParticleSystem> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ModularParticleSystem*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ModularParticleSystem();
                    prVar1 = (ref_counter_shared<graphics::ModularParticleSystem> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 1712;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::graphics::particlemodules {
    class Attractor {
    public:
        // virtual methods in vtable order
        virtual ~Attractor();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                 ParticleModuleUpdateState& particleModuleUpdateState,
                                 ParticleData& particleData) const;
        virtual void RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const;
        Attractor();

    private:
        uint8_t _unknown_8[112];
    };

    class TriggerPlane {
    public:
        // virtual methods in vtable order
        virtual ~TriggerPlane();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                 ParticleModuleUpdateState& particleModuleUpdateState,
                                 ParticleData& particleData) const;
        virtual void RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const;
        void ApplyBounce(ParticleData& particleData, unsigned long arg2, const math::Vector3T<float>& vector3,
                         float arg4);
        void ApplyKill(ParticleData& particleData, unsigned long arg2, float arg3);
        TriggerPlane();

    private:
        uint8_t _unknown_8[208];
        uint8_t field_216;
        uint8_t _unknown_217[95];
    };

    // 0x1007e8790
    TriggerPlane::~TriggerPlane() {
        field_224.~ModulePropertyCurve();
        field_112.~ModulePropertyCurve();
        field_8.~ModulePropertyCurve();
    }

    // 0x1007e88c0
    Attractor::~Attractor() {
        field_112.~ModulePropertyCurve();
        field_8.~ModulePropertyCurve();
    }

    // 0x1007e8900
    Acceleration::~Acceleration() {
        field_104.~ModulePropertyCurve();
        field_16.~ModulePropertyCurve();
    }

    // 0x1007e8980
    Noise::~Noise() {
        *(uint8_t***)this = &PTR__Noise_100f14f10;
        field_96.~ModulePropertyCurve();
    }

    // 0x1007e89c0
    Colour::~Colour() {
        field_304.~ModulePropertyCurve();
        field_200.~ModulePropertyCurve();
        field_112.~ModulePropertyCurve();
        field_8.~ModulePropertyCurve();
    }

    // 0x1007e8a10
    Scale::~Scale() {
        field_296.~ModulePropertyCurve();
        field_208.~ModulePropertyCurve();
        field_120.~ModulePropertyCurve();
        field_32.~ModulePropertyCurve();
    }

} // namespace jag::graphics::particlemodules

// 0x1007ef390
void __ZNSt3__18functionIFvvEEC1IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_(
    void) {
    __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_();
}

// 0x1007ef3e0
void __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_(
    __value_func<void()>* param_1, vector<jag::graphics::ParticleSystem*>* param_2) {
    std::__function::__value_func<void()>::__value_func<
        jag::ThreadPool::AddTask<jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<jag::graphics::ParticleSystem*>>(std::vector<std::future<void>>&, unsigned long,
                                                           eastl::vector<jag::graphics::ParticleSystem*>&,
                                                           jag::ThreadPool&, float)::_lambda() _1_>(
            char const*, eastl::vector<jag::graphics::ParticleSystem*>&&)::_lambda() _1_,
        void>(param_1, param_2);
}

// 0x1007efdb0
void __ZNSt3__1L8__invokeIRZN3jag10ThreadPool7AddTaskIZNS1_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS4_14ParticleSystemENS7_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISF_EEEEmRT_RS2_fEUlvE_JEEENSE_INS_13invoke_resultISK_JDpT0_EE4typeEEEPKcOSK_DpOSP_EUlvE_JEEEDTclscSK_fp_spscSP_fp0_EESW_SY_(
    _lambda___1_* param_1) {
    jag::ThreadPool::AddTask <
        jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<jag::graphics::ParticleSystem*>>(
            std::vector<std::future<void>>&, unsigned long, eastl::vector<jag::graphics::ParticleSystem*>&,
            jag::ThreadPool&, float)::{
        lambda() #1
    }
    > (char const*, eastl::vector<jag::graphics::ParticleSystem*>&&)::{
        lambda() #1
    }
    ::operator()(param_1);
}

// 0x1007f0dd0
void __ZNSt3__18functionIFvvEEC1IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_(
    void) {
    __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_();
}

// 0x1007f0df0
void __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_(
    __value_func<void()>* param_1, vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>* param_2) {
    std::__function::__value_func<void()>::__value_func<
        jag::ThreadPool::AddTask<jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>>(
            std::vector<std::future<void>>&, unsigned long,
            eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>&, jag::ThreadPool&, float)::_lambda()
                                     _1_>(
            char const*, eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>&&)::_lambda() _1_,
        void>(param_1, param_2);
}

// 0x1007f1780
void __ZNSt3__1L8__invokeIRZN3jag10ThreadPool7AddTaskIZNS1_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS1_10shared_ptrINS4_21ModularParticleSystemEEENS7_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISG_EEEEmRT_RS2_fEUlvE_JEEENSF_INS_13invoke_resultISL_JDpT0_EE4typeEEEPKcOSL_DpOSQ_EUlvE_JEEEDTclscSL_fp_spscSQ_fp0_EESX_SZ_(
    _lambda___1_* param_1) {
    jag::ThreadPool::AddTask < jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                   eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>>(
                                   std::vector<std::future<void>>&, unsigned long,
                                   eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>&,
                                   jag::ThreadPool&, float)::{
        lambda() #1
    }
    > (char const*, eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>>&&)::{
        lambda() #1
    }
    ::operator()(param_1);
}

namespace jag::math {
    // 0x1007e8a60
    Matrix44T<float>::Matrix44T(const QuaternionT<float>& quaternion, const Vector3T<float>& vector31,
                                const Vector3T<float>& vector32) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set((ReturnValue*)this, quaternion, vector31, vector32);
    }

    // 0x1007e8ac0
    auto Matrix44T<float>::Set(const QuaternionT<float>& quaternion, const Vector3T<float>& vector31,
                               const Vector3T<float>& vector32) {
        auto result;
        Matrix33T<float> local_60;

        Matrix33T<float> local_b0(quaternion);
        Matrix33T<float> local_88;
        auto pfVar1 = vector32.SSOBeginPtr();
        float local_38 = *pfVar1;
        pfVar1 = (float*)vector32.y();
        float local_34 = *pfVar1;
        pfVar1 = (float*)vector32.second();
        local_88.SetToDiagonal(local_38, local_34, *pfVar1);
        local_60* local_b0;
        Set(&result, &local_60, vector31);
        return result;
    }

    // 0x1007e9170
    PlaneT<float>::PlaneT(const Vector3T<float>& vector31, const Vector3T<float>& vector32) : Vector3T() {
        Set(this, vector31, vector32);
    }

    // 0x1007e91b0
    void PlaneT<float>::Set(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        SetXYZ(vector31);
        float fVar1 = Vector3Dot<float>(vector31, vector32);
        *(float*)(this + 12) = -fVar1;
    }

} // namespace jag::math

namespace jag::graphics {
    namespace {
        // 0x1007ee550
        void UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<ParticleSystem*>&, ThreadPool&, float)::{
            lambda() #1
        }
        ::operator()() const {
            uint64_t* puVar1;

            unsigned long arg1 = *(unsigned long*)(this + 16);
            if (arg1 < *(unsigned long*)(this + 24)) {
                do {
                    puVar1 = (uint64_t*)(*(*(vector<ParticleSystem*>**)this))[arg1];
                    (*puVar1)->Update(*(float*)(this + 8));
                    arg1 = arg1 + 1;
                } while (arg1 < *(unsigned long*)(this + 24));
            }
        }

        // 0x1007f0bc0
        void UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<ModularParticleSystem>>&, ThreadPool&, float)::{
            lambda() #1
        }
        ::operator()() const {
            shared_ptr<ModularParticleSystem>* this_00;

            unsigned long arg1 = *(unsigned long*)(this + 16);
            if (arg1 < *(unsigned long*)(this + 24)) {
                do {
                    this_00 = (shared_ptr<ModularParticleSystem>*)(*(
                        *(vector<shared_ptr<ModularParticleSystem>>**)this))[arg1];
                    ((ModularParticleSystem*)(*this_00).operator->())->Update(*(float*)(this + 8));
                    arg1 = arg1 + 1;
                } while (arg1 < *(unsigned long*)(this + 24));
            }
        }

    } // namespace

} // namespace jag::graphics
