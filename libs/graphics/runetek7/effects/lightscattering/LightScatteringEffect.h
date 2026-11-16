// libs/graphics/runetek7/effects/lightscattering/LightScatteringEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class LightScatteringEffect {
    public:
        // virtual methods in vtable order
        virtual ~LightScatteringEffect();
        virtual unsigned long Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager);
        uint8_t* GetHorizonFalloff();
        uint8_t* GetScatteringDensity();
        uint32_t* GetScatteringStartDistance();
        void UpdateShaderConstants();
        void Update();
        void SetScatteringParams(const SimpleScatteringParams& simpleScatteringParams, long long arg2,
                                 unsigned long long arg3);
        void SetOutscatteringAmount(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetInscatteringAmount(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetScatteringTintColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetScatteringDensity(float arg1, long long arg2, unsigned long long arg3);
        void SetScatteringStartDistance(float arg1, long long arg2, unsigned long long arg3);
        void SetObjectFalloff(float arg1, long long arg2, unsigned long long arg3);
        void SetHorizonFalloff(float arg1, long long arg2, unsigned long long arg3);
        LightScatteringEffect(RT7Core& rt7Core, int arg2);
        uint8_t* GetObjectFalloff();

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[8];
        SimpleScatteringParams field_32;
        uint8_t _unknown_88[80];
        unsigned int field_168;
        uint8_t _unknown_172[348];
    };

    // 0x100076a20
    SimpleScatteringParams* SimpleScatteringParams::operator=(SimpleScatteringParams&& simpleScatteringParams) {
        SetXYZ(simpleScatteringParams);
        field_12 = simpleScatteringParams.field_12;
        field_16.SetXYZ(simpleScatteringParams.field_16);
        field_28 = simpleScatteringParams.field_28;
        field_32.SetXYZ(simpleScatteringParams.field_32);
        field_44 = simpleScatteringParams.field_44;
        field_48 = simpleScatteringParams.field_48;
        return this;
    }

    // 0x100076a20: SimpleScatteringParams::operator=(SimpleScatteringParams const&) has the same machine code as SimpleScatteringParams::operator=(SimpleScatteringParams&&)

    // 0x100932300
    void LightScatteringEffect::SetOutscatteringAmount(const math::Vector3T<float>& vector3, long long arg2,
                                                       unsigned long long arg3) {
        field_176.SetValue(vector3, arg2, arg3);
    }

    // 0x100932320
    void LightScatteringEffect::SetInscatteringAmount(const math::Vector3T<float>& vector3, long long arg2,
                                                      unsigned long long arg3) {
        field_224.SetValue(vector3, arg2, arg3);
    }

    // 0x100932340
    void LightScatteringEffect::SetScatteringTintColour(const math::Vector3T<float>& vector3, long long arg2,
                                                        unsigned long long arg3) {
        field_272.SetValue(vector3, arg2, arg3);
    }

    // 0x100932360
    void LightScatteringEffect::SetScatteringDensity(float arg1, long long arg2, unsigned long long arg3) {
        field_320.SetValue(arg1, arg2, arg3);
    }

    // 0x100932390
    void LightScatteringEffect::SetScatteringStartDistance(float arg1, long long arg2, unsigned long long arg3) {
        field_352.SetValue(arg1, arg2, arg3);
    }

    // 0x1009323c0
    void LightScatteringEffect::SetObjectFalloff(float arg1, long long arg2, unsigned long long arg3) {
        field_384.SetValue(arg1, arg2, arg3);
    }

    // 0x1009323f0
    void LightScatteringEffect::SetHorizonFalloff(float arg1, long long arg2, unsigned long long arg3) {
        field_416.SetValue(arg1, arg2, arg3);
    }

    // 0x1009396b0
    LightScatteringEffect::~LightScatteringEffect() {
        field_96.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093b830
    LightScatteringEffect::LightScatteringEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_168(arg2), field_176(DEF_OUTSCATTERING_AMOUNT),
          field_224(DEF_INSCATTERING_AMOUNT), field_272(DEF_SCATTERING_TINT), field_320(DEF_SCATTERING_DENSITY),
          field_352(DEF_SCATTERING_START_DISTANCE), field_384(DEF_SCATTERING_OBJECT_FALLOFF),
          field_416(DEF_SCATTERING_HORIZON_FALLOFF) {}

    // 0x100943400
    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_0::operator()(
        const tweak::EditBoxEvent<float>& editBoxEvent) const {
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* str;
        eastl::string local_b8;
        float local_8c;
        fixed_string<char, 64> local_88;

        Model* this_00 = field_8;
        if ((field_16 != nullptr) && (*(int*)(field_16 + 16) == 1)) {
            this_01 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_00->GetPointLightBounds();
            pfVar1 = (float*)this_01->second();
            local_8c = *pfVar1;
            local_88 = eastl::fixed_string<char, 64>();
            local_88.sprintf("%f", (double)local_8c);
            plVar2 = (long*)(*field_16).operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = eastl::string(str);
            (**(void (**)(...))(*plVar2 + 144))(plVar2, &local_b8);
        }
        local_8c = field_0;
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        SetScatteringDensity((LightScatteringEffect*)this_00, local_8c, 0, arg3);
    }

    // 0x1009447e0
    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_1::operator()(
        const tweak::EditBoxEvent<float>& editBoxEvent) const {
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* str;
        eastl::string local_b8;
        float local_8c;
        fixed_string<char, 64> local_88;

        WaterType* this_00 = field_8;
        if ((field_16 != nullptr) && (*(int*)(field_16 + 16) == 1)) {
            this_01 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_00->GetEmissiveUVScale();
            pfVar1 = (float*)this_01->second();
            local_8c = *pfVar1;
            local_88 = eastl::fixed_string<char, 64>();
            local_88.sprintf("%f", (double)local_8c);
            plVar2 = (long*)(*field_16).operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = eastl::string(str);
            (**(void (**)(...))(*plVar2 + 144))(plVar2, &local_b8);
        }
        local_8c = field_0;
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        SetScatteringStartDistance((LightScatteringEffect*)this_00, local_8c, 0, arg3);
    }

    // 0x100945b70
    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_2::operator()(
        const tweak::EditBoxEvent<float>& editBoxEvent) const {
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* str;
        eastl::string local_b8;
        float local_8c;
        fixed_string<char, 64> local_88;

        LightScatteringEffect* this_00 = field_8;
        if ((field_16 != nullptr) && (*(int*)(field_16 + 16) == 1)) {
            this_01 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)GetObjectFalloff(this_00);
            pfVar1 = (float*)this_01->second();
            local_8c = *pfVar1;
            local_88 = eastl::fixed_string<char, 64>();
            local_88.sprintf("%f", (double)local_8c);
            plVar2 = (long*)(*field_16).operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = eastl::string(str);
            (**(void (**)(...))(*plVar2 + 144))(plVar2, &local_b8);
        }
        local_8c = field_0;
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        SetObjectFalloff(this_00, local_8c, 0, arg3);
    }

    // 0x100945cd0
    uint8_t* LightScatteringEffect::GetObjectFalloff() {
        return &field_384;
    }

    // 0x100946f10
    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_3::operator()(
        const tweak::EditBoxEvent<float>& editBoxEvent) const {
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        float* pfVar1;
        long* plVar2;
        char* str;
        eastl::string local_b8;
        float local_8c;
        fixed_string<char, 64> local_88;

        Terrain* this_00 = field_8;
        if ((field_16 != nullptr) && (*(int*)(field_16 + 16) == 1)) {
            this_01 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_00->GetWaterPatches();
            pfVar1 = (float*)this_01->second();
            local_8c = *pfVar1;
            local_88 = eastl::fixed_string<char, 64>();
            local_88.sprintf("%f", (double)local_8c);
            plVar2 = (long*)(*field_16).operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = eastl::string(str);
            (**(void (**)(...))(*plVar2 + 144))(plVar2, &local_b8);
        }
        local_8c = field_0;
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        SetHorizonFalloff((LightScatteringEffect*)this_00, local_8c, 0, arg3);
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x100076af0
    FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset() : RSevenDebugConfiguration() {}

    // 0x100076b50
    FileRSevenDebugPresetProvider::RSevenDebugPreset::~RSevenDebugPreset() {
        field_672.~basic_string();
        field_368.~pair();
    }

} // namespace jag::oldscape

namespace jag::oldscape::widgets {
    // 0x100076ba0
    BorderStyle::BorderStyle(bool arg1, bool arg2, bool arg3, bool arg4) {
        *this = (ColourStorage8888<jag::math::ABGR8StorageLayout>)arg1;
        this[1] = (ColourStorage8888<jag::math::ABGR8StorageLayout>)arg2;
        this[2] = (ColourStorage8888<jag::math::ABGR8StorageLayout>)arg3;
        this[3] = (ColourStorage8888<jag::math::ABGR8StorageLayout>)arg4;
    }

} // namespace jag::oldscape::widgets
