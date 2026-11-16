// libs/graphics/runetek7/particles/modules/ModulePropertyCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    template <typename...> // 2 instantiations, e.g. <float>, <math::Vector3T<float> >
    class ModulePropertyCurve {
    public:
        class CacheEntry;
        class Key;
        LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        float Eval(float) const;
        Eval(float) const;
        EvalLinear(float) const;
        float EvalLinear(float) const;
        int GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>>(
            eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator> const&, float);
        int
        GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>>(
            eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator> const&, float);
        int GetStartingKeyIndex<
            eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul, true, eastl::allocator>>(
            eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul, true, eastl::allocator> const&,
            float);
        int GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator>>(
            eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator> const&, float);
        ~ModulePropertyCurve();
        void DecodePayload(PacketT<Array<unsigned char, eastl::allocator>>&);
        void GenerateEvalCache();
        DecodePayload(PacketT<Array<unsigned char, eastl::allocator>>&);
        ModulePropertyCurve();
    };

    template <typename...> // 1 instantiations, e.g.
    class ModulePropertyCurve::CacheEntry {
    public:
        CacheEntry(float, math::Vector3T<float>);
    };

    template <typename...> // 1 instantiations, e.g.
    class ModulePropertyCurve::Key {
    public:
        Key();
    };

    // 0x1007e86a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModulePropertyCurve<float>::~ModulePropertyCurve(): jumps straight to the base-object destructor

    // 0x1007e86b0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ModulePropertyCurve<float>::~ModulePropertyCurve()
    void ModulePropertyCurve<float>::~ModulePropertyCurve() {
        ((this + 56))->~vector();
        ~fixed_vector();
    }

    // 0x1007e87d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModulePropertyCurve<math::Vector3T<float> >::~ModulePropertyCurve(): jumps straight to the base-object destructor

    // 0x1007e87e0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ModulePropertyCurve<math::Vector3T<float> >::~ModulePropertyCurve()
    void ModulePropertyCurve<math::Vector3T<float>>::~ModulePropertyCurve() {
        ((this + 72))->~vector();
        ~fixed_vector();
    }

    // 0x1007ecd10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModularParticleSystemTemplate::ModularParticleSystemTemplate(): jumps straight to the base-object constructor

    // 0x1007ecd20, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModularParticleSystemTemplate::ModularParticleSystemTemplate()
    void ModularParticleSystemTemplate::ModularParticleSystemTemplate() {
        new (this) eastl::bitset<4ul, unsigned char>();
        new (&field_8) eastl::string();
        m_numLoops = 0;
        new (field_44) callstack::Callstack();
        new ((field_44 + 4)) eastl::fixed_vector<ModularParticleEmitterTemplate, 1ul, true, eastl::allocator>();
    }

    // 0x1007ed090, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ModularParticleSystemTemplate::~ModularParticleSystemTemplate(): jumps straight to the base-object destructor

    // 0x1007ed0a0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ModularParticleSystemTemplate::~ModularParticleSystemTemplate()
    void ModularParticleSystemTemplate::~ModularParticleSystemTemplate() {
        ((field_44 + 4))->~fixed_vector();
        (&field_8)->~basic_string();
    }

    // 0x1007fa600, 16 bytes, inline, placed by class name
    // ModulePropertyCurve<float>::DecodePayload(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ModulePropertyCurve<float>::DecodePayload(PacketT* param_1) {
        param_1->gFloat();
    }

    // 0x1007fa610, 352 bytes, inline, placed by class name
    // ModulePropertyCurve<float>::GenerateEvalCache()
    void ModulePropertyCurve<float>::GenerateEvalCache() {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        ulong uVar2;
        float* pfVar3;
        float* pfVar4;
        int iVar5;
        float* pfVar6;
        float local_38;
        float local_34;

        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(this + 56);
        if ((eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                 this_00) != '\0') &&
            (uVar2 = size(), 1 < uVar2)) {
            pfVar3 = (float*)HeapBeginPtr();
            pfVar4 = (float*)end();
            if (pfVar3 != pfVar4) {
                do {
                    pfVar6 = pfVar3 + 4;
                    pfVar4 = (float*)end();
                    if ((pfVar6 != pfVar4) && (*pfVar3 != pfVar3[4])) {
                        eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>::emplace_back<float&,
                                                                                                              float&>(
                            (vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>*)this_00, pfVar3,
                            pfVar3 + 1);
                        iVar5 = 1;
                        do {
                            local_38 = math::Lerp<float, float>(pfVar3, pfVar6, (float)iVar5 * 0.1);
                            math::CubicBezierCalcInterpolator(*pfVar3, pfVar3[2], pfVar3[6], pfVar3[4], local_38);
                            local_34 = (float)__ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f(
                                pfVar3 + 1, pfVar3 + 3, pfVar3 + 7, pfVar3 + 5);
                            eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>::emplace_back<
                                float&, float&>(
                                (vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>*)this_00, &local_38,
                                &local_34);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 != 10);
                        eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>::emplace_back<float&,
                                                                                                              float&>(
                            (vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>*)this_00, pfVar6,
                            pfVar3 + 5);
                    }
                    pfVar4 = (float*)end();
                    pfVar3 = pfVar6;
                } while (pfVar6 != pfVar4);
            }
        }
    }

    // 0x1007fabc0, 80 bytes, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::DecodePayload(PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 ModulePropertyCurve<math::Vector3T<float>>::DecodePayload(PacketT* param_1) {
        Vector3T<float> local_40[16];
        undefined8 local_30[2];

        new (local_30) math::Vector3T<int>();
        math::Vector3T<float>::Vector3T(local_40, param_1, false);
        local_30->SetXYZ(local_40);
        return local_30[0];
    }

    // 0x1007fac10, 368 bytes, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::GenerateEvalCache()
    void ModulePropertyCurve<math::Vector3T<float>>::GenerateEvalCache() {
        ulong uVar2;
        float* pfVar3;
        float* pfVar4;
        int iVar5;
        float* pfVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        float fVar7;
        undefined8 local_68;
        float local_60;
        Vector3T* local_58;
        float* local_50;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_40;
        float local_34;

        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(this + 72);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) != '\0') {
            uVar2 = size();
            if (1 < uVar2) {
                pfVar3 = (float*)HeapBeginPtr();
                pfVar4 = (float*)end();
                if (pfVar3 != pfVar4) {
                    local_40 = this_00;
                    do {
                        pfVar6 = pfVar3 + 8;
                        pfVar4 = (float*)end();
                        if ((pfVar6 != pfVar4) && (*pfVar3 != pfVar3[8])) {
                            local_58 = (Vector3T*)(pfVar3 + 1);
                            eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>::
                                emplace_back<float&, math::Vector3T<float>&>(
                                    (vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>*)
                                        this_00,
                                    pfVar3, local_58);
                            local_50 = pfVar3 + 5;
                            iVar5 = 1;
                            do {
                                local_34 = math::Lerp<float, float>(pfVar3, pfVar6, (float)iVar5 * 0.1);
                                fVar7 = pfVar3[4];
                                math::CubicBezierCalcInterpolator(*pfVar3, fVar7, pfVar3[12], pfVar3[8], local_34);
                                local_68 = __ZN3jag4math15CubicBezierGetYINS0_8Vector3TIfEEEEDaRKT_S7_S7_S7_f(
                                    local_58, local_50, pfVar3 + 13, (Vector3T*)(pfVar3 + 9));
                                local_60 = fVar7;
                                eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry,
                                              eastl::allocator>::emplace_back<float&,
                                                                              math::Vector3T<float>&>(
                                    (vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>*)
                                        local_40,
                                    &local_34, (Vector3T*)&local_68);
                                this_00 = local_40;
                                iVar5 = iVar5 + 1;
                            } while (iVar5 != 10);
                            eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>::
                                emplace_back<float&, math::Vector3T<float>&>(
                                    (vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>*)
                                        local_40,
                                    pfVar6, (Vector3T*)(pfVar3 + 9));
                            this = (ModulePropertyCurve<math::Vector3T<float>>*)this;
                        }
                        pfVar4 = (float*)end();
                        pfVar3 = pfVar6;
                    } while (pfVar6 != pfVar4);
                }
            }
        }
    }

    // 0x1007fafc0, 16 bytes, complete-object constructor, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::Key::Key(): jumps straight to the base-object constructor

    // 0x1007fafd0, 48 bytes, base-object constructor, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::Key::Key()
    void ModulePropertyCurve<math::Vector3T<float>>::Key::Key() {
        new ((this + 4)) math::Vector3T<int>();
        new ((this + 20)) math::Vector3T<int>();
    }

    // 0x1007fb1a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::CacheEntry::CacheEntry(float, math::Vector3T<float>): jumps straight to the base-object constructor

    // 0x1007fb2d0, 48 bytes, base-object constructor, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::CacheEntry::CacheEntry(float, math::Vector3T<float>)
    void ModulePropertyCurve<math::Vector3T<float>>::CacheEntry::CacheEntry(undefined4 param_1, undefined8 param_2,
                                                                            undefined4 param_3, CacheEntry* this) {
        *(undefined4*)this = param_1;
        *(undefined8*)(this + 4) = param_2;
        *(undefined4*)(this + 12) = param_3;
    }

    // 0x10082f080, 16 bytes, complete-object constructor, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::ModulePropertyCurve(): jumps straight to the base-object constructor

    // 0x10082f090, 16 bytes, complete-object constructor, inline, placed by class name
    // ModulePropertyCurve<float>::ModulePropertyCurve(): jumps straight to the base-object constructor

    // 0x10082f0a0, 48 bytes, base-object constructor, inline, placed by class name
    // ModulePropertyCurve<math::Vector3T<float> >::ModulePropertyCurve()
    void ModulePropertyCurve<math::Vector3T<float>>::ModulePropertyCurve() {
        new (this) eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul, true, eastl::allocator>();
        new ((this + 72)) eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>();
    }

    // 0x10082f2e0, 48 bytes, base-object constructor, inline, placed by class name
    // ModulePropertyCurve<float>::ModulePropertyCurve()
    void ModulePropertyCurve<float>::ModulePropertyCurve() {
        new (this) eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator>();
        new ((this + 56)) eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007ecae0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::ModularParticleSystemTemplate>::type make_shared<graphics::ModularParticleSystemTemplate>()
    jag* make_shared<graphics::ModularParticleSystemTemplate>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ModularParticleSystemTemplate* local_28[2];

        pvVar1 = (void*)aligned_alloc(320, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<graphics::ModularParticleSystemTemplate>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::ModularParticleSystemTemplate>, int,
                                   graphics::ModularParticleSystemTemplate*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1007eccc0, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::ModularParticleSystemTemplate* placement_new<graphics::ModularParticleSystemTemplate>(void*)
    ModularParticleSystemTemplate* placement_new<graphics::ModularParticleSystemTemplate>(void* param_1) {
        ___bzero(param_1, 288);
        graphics::ModularParticleSystemTemplate::ModularParticleSystemTemplate(param_1);
        return param_1;
    }

    // 0x1007eccf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystemTemplate>* placement_new<ref_counter_shared<graphics::ModularParticleSystemTemplate>, int, graphics::ModularParticleSystemTemplate*&>(void*, int&&, graphics::ModularParticleSystemTemplate*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::ModularParticleSystemTemplate>, int,
                       graphics::ModularParticleSystemTemplate*&>(void* param_1, int* param_2,
                                                                  ModularParticleSystemTemplate** param_3) {
        ref_counter_shared<graphics::ModularParticleSystemTemplate>::ref_counter_shared(param_1, (long)*param_2,
                                                                                        *param_3);
        return param_1;
    }

    // 0x1007ecf90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystemTemplate>::ref_counter_shared(unsigned long, graphics::ModularParticleSystemTemplate*): jumps straight to the base-object constructor

    // 0x1007ecfa0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystemTemplate>::ref_counter_shared(unsigned long, graphics::ModularParticleSystemTemplate*)
    void ref_counter_shared<graphics::ModularParticleSystemTemplate>::ref_counter_shared(
        ulong param_1, ModularParticleSystemTemplate* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7560 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModularParticleSystemTemplate**)(this + 24) = param_2;
    }

    // 0x1007ecfe0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystemTemplate>::DeleteData()
    void ref_counter_shared<graphics::ModularParticleSystemTemplate>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ModularParticleSystemTemplate();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 288;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1007ee1d0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::allocate(ulong param_1, __packaged_task_func* param_2) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x1007ee4f0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 48);
    }

    // 0x1007f08a0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::allocate(ulong param_1, __packaged_task_func* param_2) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x1007f0b60, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 48);
    }

    // 0x1007f1880, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::ModularParticleSystem* placement_new<graphics::ModularParticleSystem, shared_ptr<graphics::ModularParticleSystemTemplate> const&, shared_ptr<graphics::VFXAttachmentInfo> const&>(void*, shared_ptr<graphics::ModularParticleSystemTemplate> const&, shared_ptr<graphics::VFXAttachmentInfo> const&)
    ModularParticleSystem*
    jag::placement_new<graphics::ModularParticleSystem, shared_ptr<graphics::ModularParticleSystemTemplate> const&,
                       shared_ptr<graphics::VFXAttachmentInfo> const&>(void* param_1, shared_ptr* param_2,
                                                                       shared_ptr* param_3) {
        graphics::ModularParticleSystem::ModularParticleSystem(param_1, param_2, param_3);
        return param_1;
    }

    // 0x1007f18a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystem>* placement_new<ref_counter_shared<graphics::ModularParticleSystem>, int, graphics::ModularParticleSystem*&>(void*, int&&, graphics::ModularParticleSystem*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::ModularParticleSystem>, int, graphics::ModularParticleSystem*&>(
        void* param_1, int* param_2, ModularParticleSystem** param_3) {
        ref_counter_shared<graphics::ModularParticleSystem>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1007f18c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystem>::ref_counter_shared(unsigned long, graphics::ModularParticleSystem*): jumps straight to the base-object constructor

    // 0x1007f18d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystem>::ref_counter_shared(unsigned long, graphics::ModularParticleSystem*)
    void ref_counter_shared<graphics::ModularParticleSystem>::ref_counter_shared(ulong param_1,
                                                                                 ModularParticleSystem* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7548 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModularParticleSystem**)(this + 24) = param_2;
    }

    // 0x1007f1910, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::ModularParticleSystem>::DeleteData()
    void ref_counter_shared<graphics::ModularParticleSystem>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ModularParticleSystem();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 1712;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::graphics::particlemodules {
    class Attractor {
    public:
        // virtual methods in vtable order
        virtual ~Attractor();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                 ParticleData&) const;
        virtual void RenderDebug(math::Matrix44T<float> const&, float) const;
        Attractor();

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    class TriggerPlane {
    public:
        // virtual methods in vtable order
        virtual ~TriggerPlane();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                 ParticleData&) const;
        virtual void RenderDebug(math::Matrix44T<float> const&, float) const;
        void ApplyBounce(ParticleData&, unsigned long, math::Vector3T<float> const&, float);
        void ApplyKill(ParticleData&, unsigned long, float);
        TriggerPlane();

        // data members, from how the methods use this: 312 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[208];
        byte field_216; // offset 216
        char _unknown_217[95];
    };

    // 0x1007e8790, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TriggerPlane::~TriggerPlane()
    void TriggerPlane::~TriggerPlane() {
        field_0 = &PTR__TriggerPlane_100f14df8;
        (&field_224)->~ModulePropertyCurve();
        (&field_112)->~ModulePropertyCurve();
        (&field_8)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x1007e88c0, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Attractor::~Attractor()
    void Attractor::~Attractor() {
        field_0 = &PTR__Attractor_100f14e30;
        (&field_112)->~ModulePropertyCurve();
        (&field_8)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x1007e8900, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Acceleration::~Acceleration()
    void Acceleration::~Acceleration() {
        field_0 = &PTR__Acceleration_100f14ea0;
        (&field_104)->~ModulePropertyCurve();
        (&field_16)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x1007e8980, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Noise::~Noise()
    void Noise::~Noise() {
        *(undefined***)this = &PTR__Noise_100f14f10;
        (&field_96)->~ModulePropertyCurve();
        (&field_8)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x1007e89c0, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Colour::~Colour()
    void Colour::~Colour() {
        field_0 = &PTR__Colour_100f14f48;
        (&field_304)->~ModulePropertyCurve();
        (&field_200)->~ModulePropertyCurve();
        (&field_112)->~ModulePropertyCurve();
        (&field_8)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x1007e8a10, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Scale::~Scale()
    void Scale::~Scale() {
        field_0 = &PTR__Scale_100f14f80;
        (&field_296)->~ModulePropertyCurve();
        (&field_208)->~ModulePropertyCurve();
        (&field_120)->~ModulePropertyCurve();
        (&field_32)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x100829e00, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TriggerPlane::TriggerPlane(): jumps straight to the base-object constructor

    // 0x100829e10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Attractor::Attractor(): jumps straight to the base-object constructor

} // namespace jag::graphics::particlemodules

// 0x1007ef390, 16 bytes, placed by debug map only (low confidence)
// _ZNSt3__18functionIFvvEEC1IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_
void __ZNSt3__18functionIFvvEEC1IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_() {
    __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_();
}

// 0x1007ef3e0, 16 bytes, placed by debug map only (low confidence)
// _ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_
void __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS7_14ParticleSystemENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISI_EEEEmRT_RS5_fEUlvE_JEEENSH_INS_13invoke_resultISN_JDpT0_EE4typeEEEPKcOSN_DpOSS_EUlvE_vEESN_(
    __value_func<void()>* param_1, vector* param_2) {
    std::__function::__value_func<void()>::__value_func<
        jag::ThreadPool::AddTask<jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<jag::graphics::ParticleSystem*, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<jag::graphics::ParticleSystem*, eastl::allocator>&, jag::ThreadPool&, float)::_lambda() _1_>(
            char const*, eastl::vector<jag::graphics::ParticleSystem*, eastl::allocator>&&)::_lambda() _1_,
        void>(param_1, param_2);
}

// 0x1007efdb0, 16 bytes, placed by debug map only (low confidence)
// _ZNSt3__1L8__invokeIRZN3jag10ThreadPool7AddTaskIZNS1_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS4_14ParticleSystemENS7_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISF_EEEEmRT_RS2_fEUlvE_JEEENSE_INS_13invoke_resultISK_JDpT0_EE4typeEEEPKcOSK_DpOSP_EUlvE_JEEEDTclscSK_fp_spscSP_fp0_EESW_SY_
void __ZNSt3__1L8__invokeIRZN3jag10ThreadPool7AddTaskIZNS1_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorIPNS4_14ParticleSystemENS7_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISF_EEEEmRT_RS2_fEUlvE_JEEENSE_INS_13invoke_resultISK_JDpT0_EE4typeEEEPKcOSK_DpOSP_EUlvE_JEEEDTclscSK_fp_spscSP_fp0_EESW_SY_(
    _lambda___1_* param_1) {
    jag::ThreadPool::AddTask < jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                   eastl::vector<jag::graphics::ParticleSystem*, eastl::allocator>>(
                                   std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                   eastl::vector<jag::graphics::ParticleSystem*, eastl::allocator>&, jag::ThreadPool&,
                                   float)::{
        lambda() #1
    }
    > (char const*, eastl::vector<jag::graphics::ParticleSystem*, eastl::allocator>&&)::{
        lambda() #1
    }
    ::operator()(param_1);
}

// 0x1007f0dd0, 16 bytes, placed by debug map only (low confidence)
// _ZNSt3__18functionIFvvEEC1IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_
void __ZNSt3__18functionIFvvEEC1IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_() {
    __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_();
}

// 0x1007f0df0, 16 bytes, placed by debug map only (low confidence)
// _ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_
void __ZNSt3__18functionIFvvEEC2IZN3jag10ThreadPool7AddTaskIZNS4_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS4_10shared_ptrINS7_21ModularParticleSystemEEENSA_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISJ_EEEEmRT_RS5_fEUlvE_JEEENSI_INS_13invoke_resultISO_JDpT0_EE4typeEEEPKcOSO_DpOST_EUlvE_vEESO_(
    __value_func<void()>* param_1, vector* param_2) {
    std::__function::__value_func<void()>::__value_func<
        jag::ThreadPool::AddTask<jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>, eastl::allocator>&, jag::ThreadPool&,
            float)::_lambda() _1_>(char const*, eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>,
                                                              eastl::allocator>&&)::_lambda() _1_,
        void>(param_1, param_2);
}

// 0x1007f1780, 16 bytes, placed by debug map only (low confidence)
// _ZNSt3__1L8__invokeIRZN3jag10ThreadPool7AddTaskIZNS1_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS1_10shared_ptrINS4_21ModularParticleSystemEEENS7_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISG_EEEEmRT_RS2_fEUlvE_JEEENSF_INS_13invoke_resultISL_JDpT0_EE4typeEEEPKcOSL_DpOSQ_EUlvE_JEEEDTclscSL_fp_spscSQ_fp0_EESX_SZ_
void __ZNSt3__1L8__invokeIRZN3jag10ThreadPool7AddTaskIZNS1_8graphics12_GLOBAL__N_125UpdateParticleSystemsImplIN5eastl6vectorINS1_10shared_ptrINS4_21ModularParticleSystemEEENS7_9allocatorEEEEEvRNS_6vectorINS_6futureIvEENS_9allocatorISG_EEEEmRT_RS2_fEUlvE_JEEENSF_INS_13invoke_resultISL_JDpT0_EE4typeEEEPKcOSL_DpOSQ_EUlvE_JEEEDTclscSL_fp_spscSQ_fp0_EESX_SZ_(
    _lambda___1_* param_1) {
    jag::ThreadPool::AddTask <
        jag::graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>, eastl::allocator>&, jag::ThreadPool&,
            float)::{
        lambda() #1
    }
    > (char const*, eastl::vector<jag::shared_ptr<jag::graphics::ModularParticleSystem>, eastl::allocator>&&)::{
        lambda() #1
    }
    ::operator()(param_1);
}

namespace jag::math {
    // 0x1007e8a60, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(QuaternionT<float> const&, Vector3T<float> const&, Vector3T<float> const&)
    void Matrix44T<float>::Matrix44T(QuaternionT* param_1, Vector3T* param_2, Vector3T* param_3) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(this, param_1, param_2, param_3);
    }

    // 0x1007e8ac0, 176 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Set(QuaternionT<float> const&, Vector3T<float> const&, Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::Set(QuaternionT* param_1, Vector3T* param_2, Vector3T* param_3) {
        vector* pvVar1;
        float* pfVar2;
        Matrix33T<float> local_b0[40];
        Matrix33T<float> local_88[40];
        Matrix33T local_60[40];
        float local_38;
        float local_34;

        Matrix33T<float>::Matrix33T(local_b0, param_1);
        Matrix33T<float>::Matrix33T(local_88);
        pvVar1 = param_3->SSOBeginPtr(param_1);
        local_38 = *(float*)pvVar1;
        pfVar2 = (float*)param_3->y();
        local_34 = *pfVar2;
        pfVar2 = (float*)param_3->second();
        Matrix33T<float>::SetToDiagonal(local_38, local_34, *pfVar2);
        math::operator*(local_60, local_b0);
        Set(this, local_60, param_2);
        return this;
    }

    // 0x1007e9170, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PlaneT<float>::PlaneT(Vector3T<float> const&, Vector3T<float> const&)
    void PlaneT<float>::PlaneT(Vector3T* param_1, Vector3T* param_2) {
        new (this) Vector3T<int>();
        Set(this, param_1, param_2);
    }

    // 0x1007e91b0, 64 bytes, inline, placed by debug map only (low confidence)
    // PlaneT<float>::Set(Vector3T<float> const&, Vector3T<float> const&)
    void PlaneT<float>::Set(Vector3T* param_1, Vector3T* param_2) {
        float fVar1;

        SetXYZ(param_1);
        fVar1 = Vector3Dot<float>(param_1, param_2);
        *(float*)(this + 12) = -fVar1;
    }

} // namespace jag::math

namespace jag::graphics {
    namespace {
        // 0x1007ee550, 80 bytes, inline, placed by debug map only (low confidence)
        // UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}::operator()() const
        /* graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

        void(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
            lambda() #1
        }
        ::operator()() {
            undefined8* puVar1;
            ulong uVar2;

            uVar2 = *(ulong*)(this + 16);
            if (uVar2 < *(ulong*)(this + 24)) {
                do {
                    puVar1 = (undefined8*)eastl::vector<ParticleSystem*, eastl::allocator>::operator[](
                        *(vector<ParticleSystem*, eastl::allocator>**)this, uVar2);
                    (*puVar1)->Update(*(float*)(this + 8));
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(ulong*)(this + 24));
            }
        }

        // 0x1007f0bc0, 80 bytes, inline, placed by debug map only (low confidence)
        // UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}::operator()() const
        /* graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

        void(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{
            lambda() #1
        }
        ::operator()() {
            shared_ptr<ModularParticleSystem>* this_00;
            ModularParticleSystem* this_01;
            ulong uVar1;

            uVar1 = *(ulong*)(this + 16);
            if (uVar1 < *(ulong*)(this + 24)) {
                do {
                    this_00 = (shared_ptr<ModularParticleSystem>*)
                        eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>::operator[](
                            *(vector<shared_ptr<ModularParticleSystem>, eastl::allocator>**)this, uVar1);
                    this_01 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_00);
                    this_01->Update(*(float*)(this + 8));
                    uVar1 = uVar1 + 1;
                } while (uVar1 < *(ulong*)(this + 24));
            }
        }

    } // namespace

} // namespace jag::graphics
