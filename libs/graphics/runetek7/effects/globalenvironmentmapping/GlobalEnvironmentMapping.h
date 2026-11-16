// libs/graphics/runetek7/effects/globalenvironmentmapping/GlobalEnvironmentMapping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::graphics {
    class ClipPlaneShaderConsts {
    public:
        ClipPlaneShaderConsts();

        uint8_t _unknown_0[1];
    };

    class GlobalEnvironmentMapping : public Effect // base inferred from shared vtable slots
    {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~GlobalEnvironmentMapping();
        virtual uint8_t Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void SetClearColour(const math::Vector4T<float>& vector4);
        void SetSpecularHorizonOcclusionScale(float arg1, long long arg2, unsigned long long arg3);
        void SetEnvironmentMapIrradianceScale(float arg1, long long arg2, unsigned long long arg3);
        GlobalEnvironmentMapping(RT7Core& rt7Core);
        uint64_t GetCurrentTexture(bool arg1) const;
        void SetTexture(const shared_ptr<render::TextureCube>& textureCube, unsigned long long arg2,
                        unsigned long long arg3);
        void ClearTextures();
        void SetTextureOverride(const shared_ptr<render::TextureCube>& textureCube, unsigned long long arg2);
        void DestroyTextures();
        void MainLogic(unsigned long long arg1, EffectManager& effectManager);
        void RenderBlendedQuadToFace(render::RenderContext& renderContext, render::RenderTargets* renderTargets,
                                     const render::Texture* texture1, const render::Texture* texture2, int arg5,
                                     float arg6);
        static int32_t SPECULAR_HORIZON_OCCLUSION_SCALE_DEFAULT; // = 1066192077
        static float ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT;   // = 2.75f

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[24];
        unsigned long field_48;
        unsigned long field_56;
        shared_ptr field_64;
        shared_ptr field_80;
        shared_ptr field_96;
        unsigned int field_112;
        uint8_t field_116;
        char field_117;
        uint8_t _unknown_118[90];
        shared_ptr field_208;
        uint8_t _unknown_224[176];
        InputAssemblerState field_400;
    };

    class GlobalEnvironmentMapping::ShaderConsts {
    public:
        ShaderConsts();
    };

    // 0x100441a30
    void GlobalEnvironmentMapping::SetClearColour(const math::Vector4T<float>& vector4) {
        field_128 = vector4;
    }

    // 0x10048fcb0
    void GlobalEnvironmentMapping::SetSpecularHorizonOcclusionScale(float arg1, long long arg2,
                                                                    unsigned long long arg3) {
        field_144.SetValue(arg1, arg2, arg3);
    }

    // 0x10048fcf0
    void GlobalEnvironmentMapping::SetEnvironmentMapIrradianceScale(float arg1, long long arg2,
                                                                    unsigned long long arg3) {
        field_176.SetValue(arg1, arg2, arg3);
    }

    // 0x100938170
    GlobalEnvironmentMapping::ShaderConsts::ShaderConsts() : math::Vector4T() {}

    // 0x100938170: ClipPlaneShaderConsts::ClipPlaneShaderConsts() has the same machine code as GlobalEnvironmentMapping::ShaderConsts::ShaderConsts()

} // namespace jag::graphics

namespace jag::math {
    // 0x100441d60
    ColourStorage8888<ARGB8StorageLayout> operator*
        <ARGB8StorageLayout>(ColourStorage8888<ARGB8StorageLayout> colourStorage8888, float arg2) {
        Callstack local_28;
        local_28._4_4_ = RoundFloatToInt((float)((unsigned int)((unsigned long)colourStorage8888 >> 16) & 255) * 1.5);
        local_28.field_8 = 0;
        local_28._9_3_ = 0;
        local_28._12_4_ = 255;
        int iVar1 = Clamp<int>((int*)&local_28.field_4, (int*)&local_28.field_8, (int*)&local_28.field_12);
        local_28.m_stackFrames._0_3_ = (((uint32_t)((char)iVar1) << 16) | (uint16_t)((uint16_t)local_28.m_stackFrames));
        local_28._4_4_ = RoundFloatToInt((float)(uint8_t)((unsigned long)colourStorage8888 >> 8) * 1.5);
        local_28.field_8 = 0;
        local_28._9_3_ = 0;
        local_28._12_4_ = 255;
        iVar1 = Clamp<int>((int*)&local_28.field_4, (int*)&local_28.field_8, (int*)&local_28.field_12);
        local_28.m_stackFrames._0_2_ = (((uint16_t)((char)iVar1) << 8) | (uint8_t)((uint8_t)local_28.m_stackFrames));
        local_28._4_4_ = RoundFloatToInt((float)((unsigned int)colourStorage8888 & 255) * 1.5);
        local_28.field_8 = 0;
        local_28._9_3_ = 0;
        local_28._12_4_ = 255;
        local_28.m_stackFrames =
            Clamp<int>((int*)&local_28.field_4, (int*)&local_28.field_8, (int*)&local_28.field_12) & 255;
        return local_28.m_stackFrames;
    }

} // namespace jag::math
