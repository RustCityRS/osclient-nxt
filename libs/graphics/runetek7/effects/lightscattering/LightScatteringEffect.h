// libs/graphics/runetek7/effects/lightscattering/LightScatteringEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class LightScatteringEffect {
    public:
        // virtual methods in vtable order
        virtual ~LightScatteringEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        GetHorizonFalloff();
        GetScatteringDensity();
        GetScatteringStartDistance();
        void UpdateShaderConstants();
        void Update();
        void SetScatteringParams(SimpleScatteringParams const&, long long, unsigned long long);
        void SetOutscatteringAmount(math::Vector3T<float> const&, long long, unsigned long long);
        void SetInscatteringAmount(math::Vector3T<float> const&, long long, unsigned long long);
        void SetScatteringTintColour(math::Vector3T<float> const&, long long, unsigned long long);
        void SetScatteringDensity(float, long long, unsigned long long);
        void SetScatteringStartDistance(float, long long, unsigned long long);
        void SetObjectFalloff(float, long long, unsigned long long);
        void SetHorizonFalloff(float, long long, unsigned long long);
        LightScatteringEffect(RT7Core&, int);
        GetObjectFalloff();

        // data members, from how the methods use this: 520 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[8];
        SimpleScatteringParams field_32; // offset 32
        char _unknown_88[80];
        uint field_168; // offset 168
        char _unknown_172[348];
    };

    // 0x100076a20, 112 bytes, inline, placed by debug map only (low confidence)
    // SimpleScatteringParams::operator=(SimpleScatteringParams&&)
    /* SimpleScatteringParams::TEMPNAMEPLACEHOLDERVALUE(SimpleScatteringParams
   const&) */

    SimpleScatteringParams* SimpleScatteringParams::operator=(SimpleScatteringParams* param_1) {
        SetXYZ(param_1);
        field_12 = param_1->field_12;
        (&field_16, (Vector3T*)&param_1->field_16)->SetXYZ();
        field_28 = param_1->field_28;
        (&field_32, (Vector3T*)&param_1->field_32)->SetXYZ();
        field_44 = param_1->field_44;
        math::Rect<float>::operator=((Rect<float>*)&field_48, (Rect*)&param_1->field_48);
        return this;
    }

    // 0x100076a20: the linker folded this into SimpleScatteringParams::operator=(SimpleScatteringParams&&), which has identical code
    SimpleScatteringParams::operator=(SimpleScatteringParams const&);

    // 0x100932300, 32 bytes, inline, placed by class name
    // LightScatteringEffect::SetOutscatteringAmount(math::Vector3T<float> const&, long long, unsigned long long)
    void LightScatteringEffect::SetOutscatteringAmount(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 176))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x100932320, 32 bytes, inline, placed by class name
    // LightScatteringEffect::SetInscatteringAmount(math::Vector3T<float> const&, long long, unsigned long long)
    void LightScatteringEffect::SetInscatteringAmount(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 224))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x100932340, 32 bytes, inline, placed by class name
    // LightScatteringEffect::SetScatteringTintColour(math::Vector3T<float> const&, long long, unsigned long long)
    void LightScatteringEffect::SetScatteringTintColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 272))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x100932360, 48 bytes, inline, placed by class name
    // LightScatteringEffect::SetScatteringDensity(float, long long, unsigned long long)
    void LightScatteringEffect::SetScatteringDensity(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_320, &local_c, param_2, param_3)->SetValue();
    }

    // 0x100932390, 48 bytes, inline, placed by class name
    // LightScatteringEffect::SetScatteringStartDistance(float, long long, unsigned long long)
    void LightScatteringEffect::SetScatteringStartDistance(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_352, &local_c, param_2, param_3)->SetValue();
    }

    // 0x1009323c0, 48 bytes, inline, placed by class name
    // LightScatteringEffect::SetObjectFalloff(float, long long, unsigned long long)
    void LightScatteringEffect::SetObjectFalloff(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_384, &local_c, param_2, param_3)->SetValue();
    }

    // 0x1009323f0, 48 bytes, inline, placed by class name
    // LightScatteringEffect::SetHorizonFalloff(float, long long, unsigned long long)
    void LightScatteringEffect::SetHorizonFalloff(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_416, &local_c, param_2, param_3)->SetValue();
    }

    // 0x100937e30, 16 bytes, complete-object destructor, inline, placed by class name
    // LightScatteringEffect::~LightScatteringEffect(): jumps straight to the base-object destructor

    // 0x100937e40, 32 bytes, deleting destructor, inline, placed by class name
    // LightScatteringEffect::~LightScatteringEffect()
    void LightScatteringEffect::~LightScatteringEffect() {
        ~LightScatteringEffect(this);
        operator_delete(this);
    }

    // 0x1009396b0, 48 bytes, base-object destructor, inline, placed by class name
    // LightScatteringEffect::~LightScatteringEffect()
    void LightScatteringEffect::~LightScatteringEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__LightScatteringEffect_100f1a2c0;
        (&field_96)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093b810, 16 bytes, complete-object constructor, inline, placed by class name
    // LightScatteringEffect::LightScatteringEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093b830, 272 bytes, base-object constructor, inline, placed by class name
    // LightScatteringEffect::LightScatteringEffect(RT7Core&, int)
    void LightScatteringEffect::LightScatteringEffect(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__LightScatteringEffect_100f1a2c0;
        new (field_32) SimpleScatteringParams();
        new (&field_96) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_168 = param_2;
        new (&field_176, (Vector3T*)&DEF_OUTSCATTERING_AMOUNT) math::Transitionable<math::Vector3T<float>>();
        new (&field_224, (Vector3T*)&DEF_INSCATTERING_AMOUNT) math::Transitionable<math::Vector3T<float>>();
        new (&field_272, (Vector3T*)&DEF_SCATTERING_TINT) math::Transitionable<math::Vector3T<float>>();
        new (&field_320, (float*)&DEF_SCATTERING_DENSITY) math::Transitionable<float>();
        new (&field_352, (float*)&DEF_SCATTERING_START_DISTANCE) math::Transitionable<float>();
        new (&field_384, (float*)&DEF_SCATTERING_OBJECT_FALLOFF) math::Transitionable<float>();
        new (&field_416, (float*)&DEF_SCATTERING_HORIZON_FALLOFF) math::Transitionable<float>();
        new (&field_448) math::Transitionable<float>();
        new (&field_480) math::Transitionable<float>();
        new (&field_512) math::Transitionable<float>();
    }

    // 0x100943400, 352 bytes, inline, placed by class name
    // LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_0::operator()(tweak::EditBoxEvent<float> const&) const
    /* LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_0::TEMPNAMEPLACEHOLDERVALUE(tweak::EditBoxEvent<float>
   const&) const */

    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_0::operator()(EditBoxEvent* param_1) {
        Model* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* pcVar3;
        ulonglong uVar4;
        eastl::string local_b8[32];
        allocator local_98[12];
        float local_8c;
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_8;
        if ((field_16 != (shared_ptr<tweak::Control>*)0) && (*(int*)(field_16 + 16) == 1)) {
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_00->GetPointLightBounds();
            pfVar1 = (float*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            local_8c = *pfVar1;
            eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_88, (double)local_8c, &DAT_100e62aaa);
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->(field_16);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_98, "EASTL basic_string");
            eastl::string::basic_string(local_b8, pcVar3, local_98);
            (**(code**)(*plVar2 + 144))(plVar2, local_b8);
            eastl::string::~basic_string(local_b8);
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        local_8c = field_0;
        uVar4 = FrameTime::GetCurrentTimeMS();
        SetScatteringDensity((LightScatteringEffect*)this_00, local_8c, 0, uVar4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009447e0, 352 bytes, inline, placed by class name
    // LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_1::operator()(tweak::EditBoxEvent<float> const&) const
    /* LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_1::TEMPNAMEPLACEHOLDERVALUE(tweak::EditBoxEvent<float>
   const&) const */

    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_1::operator()(EditBoxEvent* param_1) {
        WaterType* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* pcVar3;
        ulonglong uVar4;
        eastl::string local_b8[32];
        allocator local_98[12];
        float local_8c;
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_8;
        if ((field_16 != (shared_ptr<tweak::Control>*)0) && (*(int*)(field_16 + 16) == 1)) {
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_00->GetEmissiveUVScale();
            pfVar1 = (float*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            local_8c = *pfVar1;
            eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_88, (double)local_8c, &DAT_100e62aaa);
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->(field_16);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_98, "EASTL basic_string");
            eastl::string::basic_string(local_b8, pcVar3, local_98);
            (**(code**)(*plVar2 + 144))(plVar2, local_b8);
            eastl::string::~basic_string(local_b8);
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        local_8c = field_0;
        uVar4 = FrameTime::GetCurrentTimeMS();
        SetScatteringStartDistance((LightScatteringEffect*)this_00, local_8c, 0, uVar4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100945b70, 352 bytes, inline, placed by class name
    // LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_2::operator()(tweak::EditBoxEvent<float> const&) const
    /* LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_2::TEMPNAMEPLACEHOLDERVALUE(tweak::EditBoxEvent<float>
   const&) const */

    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_2::operator()(EditBoxEvent* param_1) {
        LightScatteringEffect* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* pcVar3;
        ulonglong uVar4;
        eastl::string local_b8[32];
        allocator local_98[12];
        float local_8c;
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_8;
        if ((field_16 != (shared_ptr<tweak::Control>*)0) && (*(int*)(field_16 + 16) == 1)) {
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    GetObjectFalloff(this_00);
            pfVar1 = (float*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            local_8c = *pfVar1;
            eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_88, (double)local_8c, &DAT_100e62aaa);
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->(field_16);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_98, "EASTL basic_string");
            eastl::string::basic_string(local_b8, pcVar3, local_98);
            (**(code**)(*plVar2 + 144))(plVar2, local_b8);
            eastl::string::~basic_string(local_b8);
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        local_8c = field_0;
        uVar4 = FrameTime::GetCurrentTimeMS();
        SetObjectFalloff(this_00, local_8c, 0, uVar4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100945cd0, 16 bytes, inline, placed by class name
    // LightScatteringEffect::GetObjectFalloff()
    undefined1* LightScatteringEffect::GetObjectFalloff() {
        return &field_384;
    }

    // 0x100946f10, 352 bytes, inline, placed by class name
    // LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_3::operator()(tweak::EditBoxEvent<float> const&) const
    /* LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_3::TEMPNAMEPLACEHOLDERVALUE(tweak::EditBoxEvent<float>
   const&) const */

    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_3::operator()(EditBoxEvent* param_1) {
        Terrain* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* pcVar3;
        ulonglong uVar4;
        eastl::string local_b8[32];
        allocator local_98[12];
        float local_8c;
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_8;
        if ((field_16 != (shared_ptr<tweak::Control>*)0) && (*(int*)(field_16 + 16) == 1)) {
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_00->GetWaterPatches();
            pfVar1 = (float*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            local_8c = *pfVar1;
            eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_88, (double)local_8c, &DAT_100e62aaa);
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->(field_16);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_98, "EASTL basic_string");
            eastl::string::basic_string(local_b8, pcVar3, local_98);
            (**(code**)(*plVar2 + 144))(plVar2, local_b8);
            eastl::string::~basic_string(local_b8);
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        local_8c = field_0;
        uVar4 = FrameTime::GetCurrentTimeMS();
        SetHorizonFalloff((LightScatteringEffect*)this_00, local_8c, 0, uVar4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x100076af0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset()
    void FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset() {
        new (this) RSevenDebugConfiguration();
        new (field_368) Filename();
        new (&field_672) eastl::string();
    }

    // 0x100076b50, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::~RSevenDebugPreset()
    void FileRSevenDebugPresetProvider::RSevenDebugPreset::~RSevenDebugPreset() {
        (&field_672)->~basic_string();
        field_368->~pair();
        ~RSevenDebugConfiguration();
    }

} // namespace jag::oldscape

namespace jag::oldscape::widgets {
    // 0x100076ba0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BorderStyle::BorderStyle(bool, bool, bool, bool)
    /* jag::math::ColourStorage8888<jag::math::ABGR8StorageLayout>::Set(unsigned char, unsigned char,
   unsigned char, unsigned char) */

    void jag::math::ColourStorage8888<jag::math::ABGR8StorageLayout>::Set(uchar param_1, uchar param_2, uchar param_3,
                                                                          uchar param_4) {
        *this = (ColourStorage8888<jag::math::ABGR8StorageLayout>)param_1;
        this[1] = (ColourStorage8888<jag::math::ABGR8StorageLayout>)param_2;
        this[2] = (ColourStorage8888<jag::math::ABGR8StorageLayout>)param_3;
        this[3] = (ColourStorage8888<jag::math::ABGR8StorageLayout>)param_4;
    }

} // namespace jag::oldscape::widgets
