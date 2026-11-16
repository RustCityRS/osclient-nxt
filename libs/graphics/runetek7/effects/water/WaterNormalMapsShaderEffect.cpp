// libs/graphics/runetek7/effects/water/WaterNormalMapsShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterNormalMapsShaderEffect.h"

namespace jag::graphics {
    // 0x100920cf0, 16 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::Initialise()
    void WaterNormalMapsShaderEffect::Initialise() {
        CreateRenderingResources(this);
    }

    // 0x100920d00, 80 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::CreateRenderingResources()
    undefined8 WaterNormalMapsShaderEffect::CreateRenderingResources() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_720, 1, (TexCoordTransformConsts*)&field_32)->Create();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_792, 1, (SamplingConsts*)&field_608)->Create();
        }
        return uVar2;
    }

    // 0x100920d50, 400 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void WaterNormalMapsShaderEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                         Shader* param_3) {
        uint uVar1;
        WaterNormalMapsShaderEffect* pWVar2;
        int iVar4;
        RenderPipelineState* this_01;
        uint* puVar5;
        RenderPipelineState* pRVar6;
        Texture* pTVar7;
        ShaderProgram* pSVar8;
        undefined8* puVar9;
        HashedString* pHVar10;
        MapArea* this_02;
        long lVar11;
        ShaderConstBuffer* pSVar12;
        ulong uVar13;
        array<shared_ptr<render::Texture>, 3ul>* this_03;
        undefined8 local_68;
        undefined4 local_60;
        RenderPipelineState* local_58;
        array<shared_ptr<render::Texture>, 3ul>* local_50;
        WaterNormalMapsShaderEffect* local_38;

        local_60 = 161;
        local_68 = 644245094539;
        this_03 = (array<shared_ptr<render::Texture>, 3ul>*)&field_888;
        local_58 = (RenderPipelineState*)&field_872;
        uVar13 = 0;
        local_50 = this_03;
        local_38 = this;
        do {
            this_01 = (RenderPipelineState*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](this_03, uVar13);
            pRVar6 = this_01;
            if (operator!=((shared_ptr*)this_01, (_func_decltype_nullptr*)0)) {
                pRVar6 = local_58;
                puVar5 = (uint*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)local_58, uVar13);
                if (*puVar5 != 4294967295) {
                    pRVar6 = (RenderPipelineState*)param_1->GetRenderPipelineState();
                    uVar1 = *puVar5;
                    pTVar7 = (Texture*)this_01->end();
                    pSVar8 = (ShaderProgram*)param_3->GetProgram();
                    puVar9 = (undefined8*)std::array<ShaderVariable, 3ul>::operator[](
                        (array<ShaderVariable, 3ul>*)&local_68, uVar13);
                    /* WARNING: Load size is inaccurate */
                    pHVar10 = (HashedString*)graphics::operator*(*puVar9);
                    iVar4 = pSVar8->GetConstIndex(pHVar10);
                    this_03 = local_50;
                    pRVar6->SetPSTextureSamplerPair(uVar1, pTVar7, iVar4, 0, true);
                }
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 != 3);
        this_02 = (MapArea*)pRVar6->Instance();
        lVar11 = this_02->GetOrigin();
        if (*(char*)(lVar11 + 120) == '\0') {
            pSVar8 = (ShaderProgram*)param_3->GetProgram();
            SetUniforms(local_38, pSVar8);
        } else {
            pRVar6 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            pWVar2 = local_38;
            uVar1 = local_38->field_864;
            pSVar12 = (ShaderConstBuffer*)(&local_38->field_720)->CurrentBuffer();
            pRVar6->SetVSShaderConstBuffer(uVar1, pSVar12);
            pRVar6 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = pWVar2->field_868;
            pSVar12 = (ShaderConstBuffer*)(&pWVar2->field_792)->CurrentBuffer();
            pRVar6->SetPSShaderConstBuffer(uVar1, pSVar12);
        }
    }

    // 0x100920f10, 576 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::SetUniforms(render::ShaderProgram const&) const
    void WaterNormalMapsShaderEffect::SetUniforms(ShaderProgram* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        HashedString* pHVar1;

        this_00 = &field_32;
        std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)this_00, 0);
        this_01 = &field_608;
        std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)this_01, 0);
        SetNormalMapUniforms();
        this_02 = &field_320;
        std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)this_02, 0);
        this_03 = &field_656;
        std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)this_03, 0);
        SetNormalMapUniforms();
        std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)this_00, 1);
        std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)this_01, 1);
        SetNormalMapUniforms();
        std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)this_02, 1);
        std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)this_03, 1);
        SetNormalMapUniforms();
        std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)this_00, 2);
        std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)this_01, 2);
        SetNormalMapUniforms();
        std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)this_02, 2);
        std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
            (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)this_03, 2);
        SetNormalMapUniforms();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)172);
        param_1->SetShaderConstVector4(pHVar1, (Vector4T*)&field_704);
    }

    // 0x100921150, 224 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::SetNormalMapUniforms(WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams const&, WaterNormalMapsShaderEffect::NormalMapSamplingParams const&, render::ShaderProgram const&, ShaderVariable, ShaderVariable, ShaderVariable, ShaderVariable, ShaderVariable) const
    void WaterNormalMapsShaderEffect::SetNormalMapUniforms(undefined8 param_1_00, undefined8 param_2_00,
                                                           undefined8 param_3_00,
                                                           NormalMapTexCoordTransformParams* param_1, Vector4T* param_2,
                                                           ShaderProgram* param_3, graphics* param_7, graphics* param_8,
                                                           graphics* param_9, graphics* param_10, graphics* param_11) {
        HashedString* pHVar1;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;

        pHVar1 = (HashedString*)graphics::operator*(param_7._0_4_);
        param_3->SetShaderConstVector4(pHVar1, param_1);
        pHVar1 = (HashedString*)graphics::operator*(param_8._0_4_);
        param_3->SetShaderConstVector4(pHVar1, (Vector4T*)&param_1->field_16);
        local_58 = param_1->GetUVRotationMatrix();
        uStack_50 = param_2_00;
        pHVar1 = (HashedString*)graphics::operator*(param_9._0_4_);
        param_3->SetShaderConstMatrix2(pHVar1, 1, (Matrix22T*)&local_58, 1);
        local_48 = param_1->GetFlowRotationMatrix();
        uStack_40 = param_2_00;
        pHVar1 = (HashedString*)graphics::operator*(param_10._0_4_);
        param_3->SetShaderConstMatrix2(pHVar1, 1, (Matrix22T*)&local_48, 1);
        pHVar1 = (HashedString*)graphics::operator*(param_11._0_4_);
        param_3->SetShaderConstVector4(pHVar1, param_2);
    }

    // 0x100921260, 64 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::QualitySettingNormalMapEnabled(unsigned long)
    bool WaterNormalMapsShaderEffect::QualitySettingNormalMapEnabled(ulong param_1) {
        uint uVar1;

        uVar1 = field_8;
        if (((uVar1 == 3) || ((uVar1 == 2 && (param_1 < 2)))) || ((uVar1 == 1 && (param_1 == 0)))) {
            return true;
        }
        return uVar1 == 0 && param_1 == 0;
    }

    // 0x1009212a0, 48 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::QualitySettingNormalMapMacroEnabled(unsigned long)
    bool WaterNormalMapsShaderEffect::QualitySettingNormalMapMacroEnabled(ulong param_1) {
        uint uVar1;

        uVar1 = field_8;
        if ((uVar1 == 3) || ((uVar1 == 2 && (param_1 < 2)))) {
            return true;
        }
        return uVar1 == 1 && param_1 < 2;
    }

    // 0x1009212d0, 288 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void WaterNormalMapsShaderEffect::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        uint uVar3;
        int iVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram_const&)::texCoordParamsBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::texCoordParamsBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::texCoordParamsBlockName)
                        HashedString("WaterNormalMapTexCoordParams");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::texCoordParamsBlockName);
                }
            }
            if (BindConstBufferToShader(render::ShaderProgram_const&)::samplingParamsBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::samplingParamsBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::samplingParamsBlockName)
                        HashedString("WaterNormalMapSamplingParams");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::samplingParamsBlockName);
                }
            }
            uVar1 = field_864;
            uVar3 = (&field_720)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::texCoordParamsBlockName,
                uVar3);
            uVar1 = field_868;
            uVar3 = (&field_792)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::samplingParamsBlockName,
                uVar3);
        }
    }

    // 0x100921410, 48 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::DestroyRenderingResources()
    void WaterNormalMapsShaderEffect::DestroyRenderingResources() {
        (&field_720)->Destroy();
        (&field_792)->Destroy();
    }

    // 0x100921440, 176 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::OnEndFrame()
    void WaterNormalMapsShaderEffect::OnEndFrame() {
        undefined4* puVar1;
        shared_ptr<render::Texture>* this_00;
        ulong uVar2;
        shared_ptr local_38;

        (&field_720)->RotateBuffers();
        (&field_792)->RotateBuffers();
        uVar2 = 0;
        do {
            puVar1 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&field_872, uVar2);
            *puVar1 = 4294967295;
            new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            this_00 = (shared_ptr<render::Texture>*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                (array<shared_ptr<render::Texture>, 3ul>*)&field_888, uVar2);
            shared_ptr<render::Texture>::operator=(this_00, &local_38);
            local_38.~shared_ptr();
            uVar2 = uVar2 + 1;
        } while (uVar2 != 3);
    }

    // 0x100921510, 480 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::SetParameters(WaterParameters const&, std::array<int, 3ul> const&)
    /* WaterNormalMapsShaderEffect::SetParameters(WaterParameters const&,
   std::array<int, 3ul> const&) */

    void WaterNormalMapsShaderEffect::SetParameters(WaterParameters* param_1, array* param_2) {
        bool bVar1;
        undefined1 uVar2;
        undefined4* puVar3;
        shared_ptr* psVar4;
        shared_ptr<render::Texture>* this_00;
        WaterNormalMapParams* pWVar5;
        NormalMapTexCoordTransformParams* pNVar6;
        NormalMapSamplingParams* pNVar7;
        MapArea* this_01;
        long lVar8;
        ulong uVar9;
        undefined4 uVar10;

        uVar9 = 0;
        do {
            psVar4 = (shared_ptr*)param_1->GetNormalMapTexture(uVar9);
            this_00 = (shared_ptr<render::Texture>*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                (array<shared_ptr<render::Texture>, 3ul>*)&field_888, uVar9);
            shared_ptr<render::Texture>::operator=(this_00, psVar4);
            psVar4 = (shared_ptr*)param_1->GetNormalMapTexture(uVar9);
            uVar2 = false;
            bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
            pWVar5 = (WaterNormalMapParams*)param_1->GetNormalMapParams(uVar9);
            pNVar6 = (NormalMapTexCoordTransformParams*)
                std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
                    (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)&field_32, uVar9);
            pNVar6->Set(pWVar5);
            if (bVar1) {
                uVar2 = QualitySettingNormalMapEnabled(this, uVar9);
            }
            pNVar7 = (NormalMapSamplingParams*)
                std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
                    (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)&field_608, uVar9);
            pNVar7->Set(pWVar5, (bool)uVar2);
            pWVar5 = (WaterNormalMapParams*)param_1->GetNormalMapMacroParams(uVar9);
            pNVar6 = (NormalMapTexCoordTransformParams*)
                std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>::operator[](
                    (array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>*)&field_320, uVar9);
            pNVar6->Set(pWVar5);
            if (bVar1) {
                uVar2 = QualitySettingNormalMapMacroEnabled(this, uVar9);
            } else {
                uVar2 = false;
            }
            pNVar7 = (NormalMapSamplingParams*)
                std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>::operator[](
                    (array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>*)&field_656, uVar9);
            pNVar7->Set(pWVar5, (bool)uVar2);
            puVar3 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_2, uVar9);
            uVar10 = *puVar3;
            puVar3 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&field_872, uVar9);
            *puVar3 = uVar10;
            uVar9 = uVar9 + 1;
        } while (uVar9 != 3);
        uVar10 = param_1->GetStillWaterNormalStrength();
        field_704 = uVar10;
        this_01 = (MapArea*)param_1->Instance();
        lVar8 = this_01->GetOrigin();
        if (*(char*)(lVar8 + 120) != '\0') {
            (&field_720, 0, (TexCoordTransformConsts*)&field_32)->Update();
            (&field_792, 0, (SamplingConsts*)&field_608)->Update();
        }
    }

    // 0x100921730, 160 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::Set(WaterNormalMapParams const&)
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::Set(WaterNormalMapParams* param_1) {
        float fVar1;
        undefined8 uVar2;
        float fVar3;
        undefined8 local_38;
        float fStack_30;
        undefined4 uStack_2c;

        field_0 = *(undefined4*)((long)&param_1->field_4 + 4);
        fVar3 = *(float*)((long)&param_1->field_16 + 4);
        new (&local_38) ImVec4(*(float*)&param_1->field_16, fVar3, *(float*)&param_1->field_24,
                               *(float*)((long)&param_1->field_24 + 4));
        math::Rect<float>::operator=((Rect<float>*)&field_16, (Rect*)&local_38);
        fVar1 = (float)math::Deg2Rad(*(float*)&param_1->field_32);
        local_38 = math::Matrix22Rotation<float>(fVar1);
        fStack_30 = fVar3;
        uStack_2c = 0;
        SetUVRotation(this, (Matrix22T*)&local_38);
        fVar1 = (float)math::Deg2Rad(*(float*)((long)&param_1->field_32 + 4));
        uVar2 = math::Matrix22Rotation<float>(fVar1);
        fStack_30 = fVar3;
        uStack_2c = 0;
        local_38 = uVar2;
        SetFlowRotation(this, (Matrix22T*)&local_38);
    }

    // 0x1009217e0, 48 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapSamplingParams::Set(WaterNormalMapParams const&, bool)
    void WaterNormalMapsShaderEffect::NormalMapSamplingParams::Set(WaterNormalMapParams* param_1, bool param_2) {
        undefined3 in_register_00000011;
        undefined4 uVar1;

        uVar1 = 0;
        if (param_1->field_0 != '\0') {
            uVar1 = *(undefined4*)&param_1->field_4;
        }
        if (CONCAT31(in_register_00000011, param_2) == 0) {
            uVar1 = 0;
        }
        field_0 = uVar1;
        field_4 = param_1->field_12;
    }

    // 0x100921890, 16 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::GetUVRotationMatrix() const
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::GetUVRotationMatrix() {
        UnpackMatrix22(this, (array*)&field_32);
    }

    // 0x1009218a0, 16 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::GetFlowRotationMatrix() const
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::GetFlowRotationMatrix() {
        UnpackMatrix22(this, (array*)&field_64);
    }

    // 0x1009218b0, 32 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::SetUVRotation(math::Matrix22T<float> const&)
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::SetUVRotation(Matrix22T* param_1) {
        PackMatrix22(this, (array*)&field_32, param_1);
    }

    // 0x100921920, 32 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::SetFlowRotation(math::Matrix22T<float> const&)
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::SetFlowRotation(Matrix22T* param_1) {
        PackMatrix22(this, (array*)&field_64, param_1);
    }

    // 0x100921940, 112 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::UnpackMatrix22(std::array<math::Vector4T<float>, 2ul> const&) const
    /* WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::UnpackMatrix22(std::array<math::Vector4T<float>,
   2ul> const&) const */

    undefined1[16] WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::UnpackMatrix22(array* param_1) {
        float* pfVar1;
        undefined1 auVar2[16];
        Matrix22T<float> local_28[16];
        float local_18;
        float local_14;

        pfVar1 =
            (float*)std::array<math::Vector4T<float>, 2ul>::operator[]((array<math::Vector4T<float>, 2ul>*)param_1, 0);
        local_18 = *pfVar1;
        local_14 = pfVar1[1];
        pfVar1 =
            (float*)std::array<math::Vector4T<float>, 2ul>::operator[]((array<math::Vector4T<float>, 2ul>*)param_1, 1);
        math::Matrix22T<float>::Matrix22T(local_28, local_18, local_14, *pfVar1, pfVar1[1]);
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

    // 0x1009219b0, 208 bytes, placed by class name and debug map
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::PackMatrix22(std::array<math::Vector4T<float>, 2ul>&, math::Matrix22T<float> const&) const
    /* WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::PackMatrix22(std::array<math::Vector4T<float>,
   2ul>&, math::Matrix22T<float> const&) const */

    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::PackMatrix22(array* param_1,
                                                                                     Matrix22T* param_2) {
        float* pfVar1;
        long lVar2;
        Rect<float>* pRVar3;
        ImVec4 local_38[20];
        float local_24;

        pfVar1 = (float*)math::Matrix22T<float>::operator[]((Matrix22T<float>*)param_2, 0);
        local_24 = *pfVar1;
        lVar2 = math::Matrix22T<float>::operator[]((Matrix22T<float>*)param_2, 0);
        ImVec4::ImVec4(local_38, local_24, *(float*)(lVar2 + 4), 0.0, 0.0);
        pRVar3 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
            (array<math::Vector4T<float>, 2ul>*)param_1, 0);
        math::Rect<float>::operator=(pRVar3, (Rect*)local_38);
        pfVar1 = (float*)math::Matrix22T<float>::operator[]((Matrix22T<float>*)param_2, 1);
        local_24 = *pfVar1;
        lVar2 = math::Matrix22T<float>::operator[]((Matrix22T<float>*)param_2, 1);
        ImVec4::ImVec4(local_38, local_24, *(float*)(lVar2 + 4), 0.0, 0.0);
        pRVar3 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
            (array<math::Vector4T<float>, 2ul>*)param_1, 1);
        math::Rect<float>::operator=(pRVar3, (Rect*)local_38);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1009218d0, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix22T<float> Matrix22Rotation<float>(float)
    undefined8 Matrix22Rotation<float>(float param_1) {
        float fVar1;
        float fVar2;
        undefined8 local_20[2];

        fVar1 = (float)::sin(param_1);
        fVar2 = (float)::cos(param_1);
        new (local_20) Matrix22T<float>(fVar2, -fVar1, fVar1, fVar2);
        return local_20[0];
    }

} // namespace jag::math
