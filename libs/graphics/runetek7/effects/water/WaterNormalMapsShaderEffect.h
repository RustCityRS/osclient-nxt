// libs/graphics/runetek7/effects/water/WaterNormalMapsShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class WaterNormalMapsShaderEffect {
    public:
        class NormalMapSamplingParams;
        class NormalMapTexCoordTransformParams;
        class SamplingConsts;
        class TexCoordTransformConsts;
        // virtual methods in vtable order
        virtual ~WaterNormalMapsShaderEffect();
        virtual void Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint64_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetUniforms(const render::ShaderProgram& shaderProgram) const;
        void SetNormalMapUniforms(const NormalMapTexCoordTransformParams& normalMapTexCoordTransformParams,
                                  const NormalMapSamplingParams& normalMapSamplingParams,
                                  const render::ShaderProgram& shaderProgram, ShaderVariable shaderVariable1,
                                  ShaderVariable shaderVariable2, ShaderVariable shaderVariable3,
                                  ShaderVariable shaderVariable4, ShaderVariable shaderVariable5) const;
        bool QualitySettingNormalMapEnabled(unsigned long arg1);
        bool QualitySettingNormalMapMacroEnabled(unsigned long arg1);
        void SetParameters(const WaterParameters& waterParameters, const std::array<int, 3ul>& arg2);
        WaterNormalMapsShaderEffect(RT7Core& rt7Core, int arg2, int arg3);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[680];
        uint32_t field_704;
        uint8_t _unknown_708[156];
        int field_864;
        int field_868;
        uint64_t field_872;
        uint32_t field_880;
        uint8_t _unknown_884[20];
    };

    class WaterNormalMapsShaderEffect::NormalMapSamplingParams {
    public:
        void Set(const WaterNormalMapParams& waterNormalMapParams, bool arg2);
        NormalMapSamplingParams();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint64_t field_8;
    };

    class WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams {
    public:
        void Set(const WaterNormalMapParams& waterNormalMapParams);
        void GetUVRotationMatrix() const;
        void GetFlowRotationMatrix() const;
        void SetUVRotation(const math::Matrix22T<float>& matrix22);
        void SetFlowRotation(const math::Matrix22T<float>& matrix22);
        uint8_t[16] UnpackMatrix22(const std::array<math::Vector4T<float>, 2ul>& vector4s) const;
        void PackMatrix22(std::array<math::Vector4T<float>, 2ul>& vector4s,
                          const math::Matrix22T<float>& matrix22) const;
        NormalMapTexCoordTransformParams();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
        uint8_t _unknown_16[72];
    };

    class WaterNormalMapsShaderEffect::SamplingConsts {
    public:
        SamplingConsts();

    private:
        uint8_t _unknown_0[96];
        uint64_t field_96;
        uint64_t field_104;
    };

    class WaterNormalMapsShaderEffect::TexCoordTransformConsts {
    public:
        TexCoordTransformConsts();

        uint8_t _unknown_0[296];
    };

    // 0x100922720
    SkyBox_DE* DrawableElementPool<SkyBox_DE>::Create<>() {
        uint32_t uVar3;
        SkyBox_DE* skyBox_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            skyBox_DE = ((FastPool<SkyBox_DE, int>*)&GetDrawableElementPool()::pool)->Create<>();
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            skyBox_DE = (SkyBox_DE*)operator new(128);
            skyBox_DE->_vptr = nullptr;
            *(uint64_t*)&skyBox_DE->field_8 = 0;
            *(uint64_t*)&skyBox_DE->field_16 = 0;
            *(uint64_t*)&skyBox_DE->field_24 = 0;
            *(uint64_t*)&skyBox_DE->field_32 = 0;
            *(uint64_t*)&skyBox_DE->field_40 = 0;
            *(uint64_t*)&skyBox_DE->field_48 = 0;
            *(uint64_t*)&skyBox_DE->field_56 = 0;
            *(uint64_t*)&skyBox_DE->field_64 = 0;
            *(uint64_t*)&skyBox_DE->field_72 = 0;
            *(uint64_t*)&skyBox_DE->field_80 = 0;
            *(uint64_t*)&skyBox_DE->field_88 = 0;
            *(uint64_t*)&skyBox_DE->field_96 = 0;
            skyBox_DE->field_104 = nullptr;
            *(uint64_t*)&skyBox_DE->field_112 = 0;
            *(uint64_t*)&skyBox_DE->field_120 = 0;
            new (skyBox_DE) SkyBox_DE();
        }
        return skyBox_DE;
    }

    // 0x100922910
    DrawableElementPool<SkyBox_DE>::DrawableElementPool() : DrawableElement() {}

    // 0x100922bd0
    SkyBoxEntry::SkyBoxEntry(int arg1, const shared_ptr<SkyBox>& skyBox) : field_0(arg1), field_8(skyBox) {
        field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
    }

    // 0x100922cc0
    ViewportMapEntry::ViewportMapEntry(int arg1, const shared_ptr<render::Texture2D>& texture2D)
        : field_0(arg1), field_8(texture2D) {
        field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
    }

    // 0x100923840
    WaterNormalMapsShaderEffect::~WaterNormalMapsShaderEffect() {
        field_888.~array();
        field_792.~TypedShaderConstBuffer();
        field_720.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093cb10
    WaterNormalMapsShaderEffect::WaterNormalMapsShaderEffect(RT7Core& rt7Core, int arg2, int arg3)
        : ShaderEffect(rt7Core), field_864(arg2), field_868(arg3), field_872(18446744073709551615),
          field_880(4294967295) {}

    // 0x10093cc00
    WaterNormalMapsShaderEffect::TexCoordTransformConsts::TexCoordTransformConsts()
        : std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>() {}

    // 0x10093cc80
    WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::NormalMapTexCoordTransformParams() {
        uint64_t uVar1 = *(uint64_t*)(PTR_ONE_100ee6700 + 8);
        *(uint64_t*)this = *(uint64_t*)PTR_ONE_100ee6700;
        field_8 = uVar1;
        new (&field_16) ImVec4(1.0, 1.0, 0.0, 0.0);
        new (&field_32) ImVec4(1.0, 0.0, 0.0, 0.0);
        new (&field_48) ImVec4(0.0, 1.0, 0.0, 0.0);
        new (&field_64) ImVec4(1.0, 0.0, 0.0, 0.0);
        new (&field_80) ImVec4(0.0, 1.0, 0.0, 0.0);
    }

    // 0x10093cd30
    WaterNormalMapsShaderEffect::SamplingConsts::SamplingConsts() {
        new (this) std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>();
        new (&field_48) std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>();
        uint64_t uVar1 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        field_96 = *(uint64_t*)PTR_ZERO_100ee6708;
        field_104 = uVar1;
    }

    // 0x10093cdb0
    WaterNormalMapsShaderEffect::NormalMapSamplingParams::NormalMapSamplingParams() {
        uint64_t uVar1 = *(uint64_t*)PTR_ZERO_100ee6708;
        uint64_t uVar2 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        field_0 = (int)uVar1;
        field_4 = (int)((unsigned long)uVar1 >> 32);
        field_8 = uVar2;
    }

} // namespace jag::graphics

// 0x1009221b0
void acos(float arg1) {
    _acosf();
}

// 0x1009221c0
void cos(float arg1) {
    _cosf();
}

// 0x1009221d0
void sin(float arg1) {
    _sinf();
}

// 0x100923900
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

namespace jag::render {
    // 0x100922290
    TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::TypedShaderConstBuffer()
        : HistoryCachedDynamicBuffer<ShaderConstBuffer>() {}

    // 0x1009222a0
    TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::~TypedShaderConstBuffer() {}

} // namespace jag::render
