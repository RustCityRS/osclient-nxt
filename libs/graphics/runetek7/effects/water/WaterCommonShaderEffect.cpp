// libs/graphics/runetek7/effects/water/WaterCommonShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterCommonShaderEffect.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterCommonShaderEffect::~WaterCommonShaderEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    WaterCommonShaderEffect::~WaterCommonShaderEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    WaterCommonShaderEffect::~WaterCommonShaderEffect();

    // 0x10091ff90, 16 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::Initialise()
    undefined1 WaterCommonShaderEffect::Initialise() {
        return 1;
    }

    // 0x10091ffa0, 192 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void WaterCommonShaderEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;
        float fVar2;
        ImVec4 local_38[16];
        Point<float> local_28[8];

        this_00 = (ShaderProgram*)param_3->GetProgram();
        fVar2 = (float)FrameTime::GetSecondsSinceProgramStart();
        math::Point<float>::Point(local_28, fVar2, field_24);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)120);
        this_00->SetShaderConstVector4(pHVar1, (Vector4T*)&field_32);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)121);
        this_00->SetShaderConstVector2(pHVar1, local_28);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)128);
        this_00->SetShaderConstVector4(pHVar1, (Vector4T*)&field_48);
        ImVec4::ImVec4(local_38, field_72, 0.0, field_68, field_64);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)131);
        this_00->SetShaderConstVector4(pHVar1, local_38);
    }

    // 0x100920060, 16 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void WaterCommonShaderEffect::BindConstBufferToShader(ShaderProgram* param_1) {}

    // 0x100920070, 16 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::CreateRenderingResources()
    undefined1 WaterCommonShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100920080, 16 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::DestroyRenderingResources()
    void WaterCommonShaderEffect::DestroyRenderingResources() {}

    // 0x100920090, 16 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::OnEndFrame()
    void WaterCommonShaderEffect::OnEndFrame() {}

    // 0x1009200a0, 160 bytes, placed by class name and debug map
    // WaterCommonShaderEffect::SetParameters(WaterParameters const&)
    void WaterCommonShaderEffect::SetParameters(WaterParameters* param_1) {
        EffectManager* pEVar1;
        char cVar2;
        float fVar3;
        undefined8 uVar4;
        undefined8 in_XMM1_Qa;
        undefined8 local_28;
        undefined4 uStack_20;
        undefined4 uStack_1c;

        local_28 = param_1->GetWaterNormalMapTextureScalesFlowNoiseScale();
        uStack_20 = (undefined4)in_XMM1_Qa;
        uStack_1c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        math::Rect<float>::operator=((Rect<float>*)&field_48, (Rect*)&local_28);
        uVar4 = WaterParameters::GetFeatureFlags();
        uStack_20 = (undefined4)in_XMM1_Qa;
        uStack_1c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_28 = uVar4;
        math::Rect<float>::operator=((Rect<float>*)&field_32, (Rect*)&local_28);
        fVar3 = (float)param_1->GetWaterSpecularShininess();
        field_64 = fVar3;
        fVar3 = (float)param_1->GetWaterSpecularPower();
        field_68 = fVar3;
        fVar3 = (float)param_1->GetFresnelBias();
        field_72 = fVar3;
        pEVar1 = (EffectManager*)field_16->GetEffectManager();
        cVar2 = pEVar1->IsEnabled(94);
        fVar3 = 0.0;
        if (cVar2 != '\0') {
            fVar3 = (float)param_1->GetFade();
        }
        field_24 = fVar3;
    }

    // 0x100920260, 32 bytes, placed by class name
    // WaterCommonShaderEffect::BuildDefines()
    WaterCommonShaderEffect* WaterCommonShaderEffect::BuildDefines() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, "");
        return this;
    }

    // 0x100920280, 16 bytes, placed by class name
    // WaterCommonShaderEffect::UseGLES2CompatMode()
    undefined8 WaterCommonShaderEffect::UseGLES2CompatMode() {
        return 0;
    }

    // 0x100920290, 112 bytes, placed by class name
    // WaterCommonShaderEffect::BuildUniforms()
    WaterCommonShaderEffect* WaterCommonShaderEffect::BuildUniforms() {
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128[16];
        ostream local_118[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_128);
        std::operator<<(local_118,
                        "uniform lowp vec4 uWaterFeatureFlags;\nuniform highp vec4 "
                        "uWaterNormalMapTextureScales_FlowNoiseScale;\nuniform highp vec2 uWaterTickFade;\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_128);
        return this;
    }

} // namespace jag::graphics
