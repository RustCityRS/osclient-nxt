// libs/graphics/runetek7/effects/globalenvironmentmapping/GlobalEnvironmentMapping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::graphics {
    class ClipPlaneShaderConsts {
    public:
        ClipPlaneShaderConsts();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class GlobalEnvironmentMapping : public Effect // base inferred from shared vtable slots
    {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~GlobalEnvironmentMapping();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual byte CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void SetClearColour(math::Vector4T<float> const&);
        void SetSpecularHorizonOcclusionScale(float, long long, unsigned long long);
        void SetEnvironmentMapIrradianceScale(float, long long, unsigned long long);
        GlobalEnvironmentMapping(RT7Core&);
        GetCurrentTexture(bool) const;
        void SetTexture(shared_ptr<render::TextureCube> const&, unsigned long long, unsigned long long);
        void ClearTextures();
        void SetTextureOverride(shared_ptr<render::TextureCube> const&, unsigned long long);
        void DestroyTextures();
        void MainLogic(unsigned long long, EffectManager&);
        void RenderBlendedQuadToFace(render::RenderContext&, render::RenderTargets*, render::Texture const*,
                                     render::Texture const*, int, float);
        static /* 4 bytes */ SPECULAR_HORIZON_OCCLUSION_SCALE_DEFAULT;       // = 1066192077
        static float /* 4 bytes */ ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT; // = 2.75f

        // data members, from how the methods use this: 592 bytes, the first 8 are Effect
        uint field_8; // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[24];
        ulong field_48;       // offset 48
        ulong field_56;       // offset 56
        shared_ptr field_64;  // offset 64
        shared_ptr field_80;  // offset 80
        shared_ptr field_96;  // offset 96
        uint field_112;       // offset 112
        undefined1 field_116; // offset 116
        char field_117;       // offset 117
        char _unknown_118[90];
        shared_ptr field_208; // offset 208
        undefined1 field_224; // offset 224
        char _unknown_225[175];
        InputAssemblerState field_400; // offset 400
    };

    class GlobalEnvironmentMapping::ShaderConsts {
    public:
        ShaderConsts();
    };

    // 0x100441a30, 16 bytes, inline, placed by class name and debug map
    // GlobalEnvironmentMapping::SetClearColour(math::Vector4T<float> const&)
    void GlobalEnvironmentMapping::SetClearColour(Vector4T* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&field_128, (Rect*)param_1);
    }

    // 0x10048fcb0, 48 bytes, inline, placed by class name
    // GlobalEnvironmentMapping::SetSpecularHorizonOcclusionScale(float, long long, unsigned long long)
    void GlobalEnvironmentMapping::SetSpecularHorizonOcclusionScale(float param_1, longlong param_2,
                                                                    ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_144, &local_c, param_2, param_3)->SetValue();
    }

    // 0x10048fcf0, 48 bytes, inline, placed by class name
    // GlobalEnvironmentMapping::SetEnvironmentMapIrradianceScale(float, long long, unsigned long long)
    void GlobalEnvironmentMapping::SetEnvironmentMapIrradianceScale(float param_1, longlong param_2,
                                                                    ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_176, &local_c, param_2, param_3)->SetValue();
    }

    // 0x10092d710, 16 bytes, complete-object constructor, inline, placed by class name
    // GlobalEnvironmentMapping::ShaderConsts::ShaderConsts(): jumps straight to the base-object constructor

    // 0x100938170, 16 bytes, base-object constructor, inline, placed by class name
    // GlobalEnvironmentMapping::ShaderConsts::ShaderConsts()
    /* ClipPlaneShaderConsts::ClipPlaneShaderConsts() */

    void ClipPlaneShaderConsts::ClipPlaneShaderConsts() {
        new (this) math::Vector4T<float>();
    }

    // 0x100938170: the linker folded this into GlobalEnvironmentMapping::ShaderConsts::ShaderConsts(), which has identical code
    ClipPlaneShaderConsts::ClipPlaneShaderConsts();

} // namespace jag::graphics

namespace jag::math {
    // 0x100441d60, 224 bytes, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout> operator*<ARGB8StorageLayout>(ColourStorage8888<ARGB8StorageLayout>, float)
    /* ColourStorage8888<ARGB8StorageLayout>
   TEMPNAMEPLACEHOLDERVALUE(ColourStorage8888<ARGB8StorageLayout>,
   float) */

    uint operator*(uint param_1) {
        int iVar1;
        uint uVar2;
        Callstack local_28;

        new (&local_28) callstack::Callstack();
        local_28._4_4_ = RoundFloatToInt((float)(param_1 >> 16 & 255) * 1.5);
        local_28.field_8 = 0;
        local_28._9_3_ = 0;
        local_28._12_4_ = 255;
        iVar1 = Clamp<int>((int*)&local_28.field_4, (int*)&local_28.field_8, (int*)&local_28.field_12);
        local_28.m_stackFrames._0_3_ = CONCAT12((char)iVar1, (undefined2)local_28.m_stackFrames);
        local_28._4_4_ = RoundFloatToInt((float)(param_1 >> 8 & 255) * 1.5);
        local_28.field_8 = 0;
        local_28._9_3_ = 0;
        local_28._12_4_ = 255;
        iVar1 = Clamp<int>((int*)&local_28.field_4, (int*)&local_28.field_8, (int*)&local_28.field_12);
        local_28.m_stackFrames._0_2_ = CONCAT11((char)iVar1, (undefined1)local_28.m_stackFrames);
        local_28._4_4_ = RoundFloatToInt((float)(param_1 & 255) * 1.5);
        local_28.field_8 = 0;
        local_28._9_3_ = 0;
        local_28._12_4_ = 255;
        uVar2 = Clamp<int>((int*)&local_28.field_4, (int*)&local_28.field_8, (int*)&local_28.field_12);
        local_28.m_stackFrames = uVar2 & 255;
        return local_28.m_stackFrames;
    }

} // namespace jag::math
