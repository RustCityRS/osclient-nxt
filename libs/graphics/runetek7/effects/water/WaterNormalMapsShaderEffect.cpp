// libs/graphics/runetek7/effects/water/WaterNormalMapsShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterNormalMapsShaderEffect.h"

namespace jag::graphics {
    // 0x100920cf0
    void WaterNormalMapsShaderEffect::Initialise() {
        CreateRenderingResources();
    }

    // 0x100920d00
    uint64_t WaterNormalMapsShaderEffect::CreateRenderingResources() {
        uint64_t uVar2;

        if (field_720.Create(1, &field_32) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_792.Create(1, &field_608);
        }
        return uVar2;
    }

    // 0x100920d50
    void WaterNormalMapsShaderEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                         render::RenderContext& renderContext, Shader& shader) const {
        unsigned int uVar1;
        int arg3;
        RenderPipelineState* midiPlayerMainThread;
        unsigned int* puVar4;
        RenderPipelineState* pRVar5;
        Texture* texture;
        ShaderProgram* pSVar6;
        ShaderVariable* pSVar7;
        HashedString* hashedString;
        ShaderConstBuffer* pSVar9;

        uint32_t local_60 = 161;
        array<shared_ptr<render::Texture>, 3ul>* this_02 = (array<shared_ptr<render::Texture>, 3ul>*)&field_888;
        RenderPipelineState* local_58 = (RenderPipelineState*)&field_872;
        unsigned long arg1 = 0;
        array<shared_ptr<render::Texture>, 3ul>* local_50 = this_02;
        do {
            midiPlayerMainThread = (RenderPipelineState*)(*this_02)[arg1];
            pRVar5 = midiPlayerMainThread;
            if (*midiPlayerMainThread != nullptr) {
                pRVar5 = local_58;
                puVar4 = (unsigned int*)(*local_58)[arg1];
                if (*puVar4 != 4294967295) {
                    pRVar5 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
                    uVar1 = *puVar4;
                    texture = (Texture*)midiPlayerMainThread->end();
                    pSVar6 = shader.GetProgram();
                    pSVar7 = &644245094539 [arg1];
                    hashedString = (HashedString*)graphics::operator*(*pSVar7);
                    arg3 = pSVar6->GetConstIndex(*hashedString);
                    this_02 = local_50;
                    pRVar5->SetPSTextureSamplerPair(uVar1, texture, arg3, nullptr, true);
                }
            }
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        long lVar8 = ((MapArea*)pRVar5->Instance())->GetOrigin();
        if (*(char*)(lVar8 + 120) == '\0') {
            pSVar6 = shader.GetProgram();
            SetUniforms(this, pSVar6);
        } else {
            pRVar5 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_864;
            pSVar9 = (ShaderConstBuffer*)field_720.CurrentBuffer();
            pRVar5->SetVSShaderConstBuffer(uVar1, pSVar9);
            pRVar5 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_868;
            pSVar9 = (ShaderConstBuffer*)field_792.CurrentBuffer();
            pRVar5->SetPSShaderConstBuffer(uVar1, pSVar9);
        }
    }

    // 0x100920f10
    void WaterNormalMapsShaderEffect::SetUniforms(const render::ShaderProgram& shaderProgram) const {
        uint8_t* this_00 = &field_32;
        NormalMapTexCoordTransformParams* pNVar1 = (NormalMapTexCoordTransformParams*)(*this_00)[0];
        WaterNormalMapsShaderEffect* this_02 = (WaterNormalMapsShaderEffect*)&field_608;
        WaterNormalMapsShaderEffect* pWVar3 = this_02;
        NormalMapSamplingParams* pNVar2 = (NormalMapSamplingParams*)(*this_02)[0];
        SetNormalMapUniforms(pWVar3, pNVar1, pNVar2, shaderProgram, 140, 141, 142, 143, 148);
        uint8_t* this_01 = &field_320;
        pNVar1 = (NormalMapTexCoordTransformParams*)(*this_01)[0];
        pWVar3 = (WaterNormalMapsShaderEffect*)&field_656;
        WaterNormalMapsShaderEffect* pWVar4 = pWVar3;
        pNVar2 = (NormalMapSamplingParams*)(*pWVar3)[0];
        SetNormalMapUniforms(pWVar4, pNVar1, pNVar2, shaderProgram, 144, 145, 146, 147, 149);
        pNVar1 = (NormalMapTexCoordTransformParams*)(*this_00)[1];
        pWVar4 = this_02;
        pNVar2 = (NormalMapSamplingParams*)(*this_02)[1];
        SetNormalMapUniforms(pWVar4, pNVar1, pNVar2, shaderProgram, 151, 152, 153, 154, 159);
        pNVar1 = (NormalMapTexCoordTransformParams*)(*this_01)[1];
        pWVar4 = pWVar3;
        pNVar2 = (NormalMapSamplingParams*)(*pWVar3)[1];
        SetNormalMapUniforms(pWVar4, pNVar1, pNVar2, shaderProgram, 155, 156, 157, 158, 160);
        pNVar1 = (NormalMapTexCoordTransformParams*)(*this_00)[2];
        pNVar2 = (NormalMapSamplingParams*)(*this_02)[2];
        SetNormalMapUniforms(this_02, pNVar1, pNVar2, shaderProgram, 162, 163, 164, 165, 170);
        pNVar1 = (NormalMapTexCoordTransformParams*)(*this_01)[2];
        pNVar2 = (NormalMapSamplingParams*)(*pWVar3)[2];
        SetNormalMapUniforms(pWVar3, pNVar1, pNVar2, shaderProgram, 166, 167, 168, 169, 171);
        shaderProgram.SetShaderConstVector4((HashedString*)graphics::operator*(172), &field_704);
    }

    // 0x100921150
    void WaterNormalMapsShaderEffect::SetNormalMapUniforms(
        const WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams& normalMapTexCoordTransformParams,
        const WaterNormalMapsShaderEffect::NormalMapSamplingParams& normalMapSamplingParams,
        const render::ShaderProgram& shaderProgram, ShaderVariable shaderVariable1, ShaderVariable shaderVariable2,
        ShaderVariable shaderVariable3, ShaderVariable shaderVariable4, ShaderVariable shaderVariable5) const {
        uint64_t local_58[2];
        uint64_t local_48[3];

        auto pHVar1 = graphics::operator*(shaderVariable1);
        shaderProgram.SetShaderConstVector4(pHVar1, normalMapTexCoordTransformParams);
        pHVar1 = (HashedString*)graphics::operator*(shaderVariable2);
        shaderProgram.SetShaderConstVector4(pHVar1, &normalMapTexCoordTransformParams.field_16);
        local_58[0] = normalMapTexCoordTransformParams.GetUVRotationMatrix();
        pHVar1 = (HashedString*)graphics::operator*(shaderVariable3);
        shaderProgram.SetShaderConstMatrix2(pHVar1, 1, local_58, 1);
        local_48[0] = normalMapTexCoordTransformParams.GetFlowRotationMatrix();
        pHVar1 = (HashedString*)graphics::operator*(shaderVariable4);
        shaderProgram.SetShaderConstMatrix2(pHVar1, 1, local_48, 1);
        pHVar1 = (HashedString*)graphics::operator*(shaderVariable5);
        shaderProgram.SetShaderConstVector4(pHVar1, normalMapSamplingParams);
    }

    // 0x100921260
    bool WaterNormalMapsShaderEffect::QualitySettingNormalMapEnabled(unsigned long arg1) {
        GraphicsQuality GVar1 = field_8;
        if (((GVar1 == 3) || ((GVar1 == 2 && (arg1 < 2)))) || ((GVar1 == 1 && (arg1 == 0)))) {
            return true;
        }
        return GVar1 == 0 && arg1 == 0;
    }

    // 0x1009212a0
    bool WaterNormalMapsShaderEffect::QualitySettingNormalMapMacroEnabled(unsigned long arg1) {
        GraphicsQuality GVar1 = field_8;
        if ((GVar1 == 3) || ((GVar1 == 2 && (arg1 < 2)))) {
            return true;
        }
        return GVar1 == 1 && arg1 < 2;
    }

    // 0x1009212d0
    void WaterNormalMapsShaderEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        unsigned int uVar1;
        unsigned int uVar3;
        int iVar4;

        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram const&)::texCoordParamsBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram const&)::texCoordParamsBlockName);
                if (iVar4 != 0) {
                    new ((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::texCoordParamsBlockName)
                        HashedString("WaterNormalMapTexCoordParams");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::texCoordParamsBlockName);
                }
            }
            if (BindConstBufferToShader(render::ShaderProgram const&)::samplingParamsBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram const&)::samplingParamsBlockName);
                if (iVar4 != 0) {
                    new ((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::samplingParamsBlockName)
                        HashedString("WaterNormalMapSamplingParams");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::samplingParamsBlockName);
                }
            }
            uVar1 = field_864;
            uVar3 = field_720.GetAmplitude();
            shaderProgram.BindConstBufferSlot(
                uVar1,
                *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::texCoordParamsBlockName),
                uVar3);
            uVar1 = field_868;
            uVar3 = field_792.GetAmplitude();
            shaderProgram.BindConstBufferSlot(
                uVar1,
                *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::samplingParamsBlockName),
                uVar3);
        }
    }

    // 0x100921410
    void WaterNormalMapsShaderEffect::DestroyRenderingResources() {
        field_720.Destroy();
        field_792.Destroy();
    }

    // 0x100921440
    void WaterNormalMapsShaderEffect::OnEndFrame() {
        uint32_t* puVar1;
        shared_ptr<render::Texture>* this_00;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        field_720.RotateBuffers();
        field_792.RotateBuffers();
        unsigned long arg1 = 0;
        do {
            puVar1 = &field_872[arg1];
            *puVar1 = 4294967295;
            local_38 = shared_ptr();
            this_00 = &field_888[arg1];
            *this_00 = local_38;
            arg1 = arg1 + 1;
        } while (arg1 != 3);
    }

    // 0x100921510
    void WaterNormalMapsShaderEffect::SetParameters(const WaterParameters& waterParameters,
                                                    const std::array<int, 3ul>& arg2) {
        bool bVar1;
        uint8_t uVar2;
        uint32_t* puVar3;
        shared_ptr<render::Texture>* texture;
        shared_ptr<render::Texture>* this_00;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        WaterNormalMapParams* pWVar4;
        NormalMapTexCoordTransformParams* pNVar5;
        NormalMapSamplingParams* pNVar6;
        uint32_t uVar8;

        unsigned long arg1 = 0;
        do {
            texture = (shared_ptr<render::Texture>*)waterParameters.GetNormalMapTexture(arg1);
            this_00 = &field_888[arg1];
            *this_00 = *texture;
            midiPlayerMainThread =
                (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)waterParameters.GetNormalMapTexture(arg1);
            uVar2 = false;
            bVar1 = *midiPlayerMainThread != nullptr;
            pWVar4 = (WaterNormalMapParams*)waterParameters.GetNormalMapParams(arg1);
            pNVar5 = &field_32[arg1];
            pNVar5->Set(*pWVar4);
            if (bVar1) {
                uVar2 = QualitySettingNormalMapEnabled(arg1);
            }
            pNVar6 = &field_608[arg1];
            pNVar6->Set(*pWVar4, (bool)uVar2);
            pWVar4 = (WaterNormalMapParams*)waterParameters.GetNormalMapMacroParams(arg1);
            pNVar5 = &field_320[arg1];
            pNVar5->Set(*pWVar4);
            if (bVar1) {
                uVar2 = QualitySettingNormalMapMacroEnabled(arg1);
            } else {
                uVar2 = false;
            }
            pNVar6 = &field_656[arg1];
            pNVar6->Set(*pWVar4, (bool)uVar2);
            puVar3 = &arg2[arg1];
            uVar8 = *puVar3;
            puVar3 = &field_872[arg1];
            *puVar3 = uVar8;
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        uVar8 = waterParameters.GetStillWaterNormalStrength();
        field_704 = uVar8;
        long lVar7 = ((MapArea*)waterParameters.Instance())->GetOrigin();
        if (*(char*)(lVar7 + 120) != '\0') {
            field_720.Update(0, &field_32);
            field_792.Update(0, &field_608);
        }
    }

    // 0x100921730
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::Set(
        const WaterNormalMapParams& waterNormalMapParams) {
        uint64_t local_38;

        field_0 = *(uint32_t*)((long)&waterNormalMapParams.field_4 + 4);
        float arg2 = *(float*)((long)&waterNormalMapParams.field_16 + 4);
        new (&local_38) ImVec4(*(float*)&waterNormalMapParams.field_16, arg2, *(float*)&waterNormalMapParams.field_24,
                               *(float*)((long)&waterNormalMapParams.field_24 + 4));
        field_16 = local_38;
        float fVar1 = (float)math::Deg2Rad(*(float*)&waterNormalMapParams.field_32);
        local_38 = math::Matrix22Rotation<float>(fVar1);
        float fStack_30 = arg2;
        uint32_t uStack_2c = 0;
        SetUVRotation(local_38);
        fVar1 = (float)math::Deg2Rad(*(float*)((long)&waterNormalMapParams.field_32 + 4));
        uint64_t uVar2 = math::Matrix22Rotation<float>(fVar1);
        fStack_30 = arg2;
        uStack_2c = 0;
        local_38 = uVar2;
        SetFlowRotation(local_38);
    }

    // 0x1009217e0
    void WaterNormalMapsShaderEffect::NormalMapSamplingParams::Set(const WaterNormalMapParams& waterNormalMapParams,
                                                                   bool arg2) {
        uint32_t in_register_00000011;

        uint32_t uVar1 = 0;
        if (waterNormalMapParams.field_0 != '\0') {
            uVar1 = *(uint32_t*)&waterNormalMapParams.field_4;
        }
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            uVar1 = 0;
        }
        field_0 = uVar1;
        field_4 = waterNormalMapParams.field_12;
    }

    // 0x100921890
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::GetUVRotationMatrix() const {
        UnpackMatrix22(field_32);
    }

    // 0x1009218a0
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::GetFlowRotationMatrix() const {
        UnpackMatrix22(field_64);
    }

    // 0x1009218b0
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::SetUVRotation(
        const math::Matrix22T<float>& matrix22) {
        PackMatrix22(field_32, matrix22);
    }

    // 0x100921920
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::SetFlowRotation(
        const math::Matrix22T<float>& matrix22) {
        PackMatrix22(field_64, matrix22);
    }

    // 0x100921940
    uint8_t[16] WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::UnpackMatrix22(
        const std::array<math::Vector4T<float>, 2ul>& vector4s) const {
        uint8_t auVar2[16];

        float* pfVar1 = &vector4s[0];
        float local_18 = *pfVar1;
        float local_14 = pfVar1[1];
        pfVar1 = &vector4s[1];
        Matrix22T<float> local_28(local_18, local_14, *pfVar1, pfVar1[1]);
        auVar2[0] = local_28[0];
        auVar2[1] = local_28[1];
        auVar2[2] = local_28[2];
        auVar2[3] = local_28[3];
        auVar2[4] = local_28[4];
        auVar2[5] = local_28[5];
        auVar2[6] = local_28[6];
        auVar2[7] = local_28[7];
        auVar2[8] = local_28[8];
        auVar2[9] = local_28[9];
        auVar2[10] = local_28[10];
        auVar2[11] = local_28[11];
        auVar2[12] = local_28[12];
        auVar2[13] = local_28[13];
        auVar2[14] = local_28[14];
        auVar2[15] = local_28[15];
        return auVar2;
    }

    // 0x1009219b0
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::PackMatrix22(
        std::array<math::Vector4T<float>, 2ul>& vector4s, const math::Matrix22T<float>& matrix22) const {
        float* pfVar1 = &matrix22[0];
        float local_24 = *pfVar1;
        long lVar2 = matrix22[0];
        ImVec4 local_38(local_24, *(float*)(lVar2 + 4), 0.0, 0.0);
        Rect<float>* pRVar3 = &vector4s[0];
        *pRVar3 = local_38;
        pfVar1 = &matrix22[1];
        local_24 = *pfVar1;
        lVar2 = matrix22[1];
        local_38 = ImVec4(local_24, *(float*)(lVar2 + 4), 0.0, 0.0);
        pRVar3 = &vector4s[1];
        *pRVar3 = local_38;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1009218d0
    Matrix22T<float> Matrix22Rotation<float>(float arg1) {
        float arg3 = (float)::sin(arg1);
        float arg1_00 = (float)::cos(arg1);
        return local_20(arg1_00, -arg3, arg3, arg1_00);
        return local_20[0];
    }

} // namespace jag::math
