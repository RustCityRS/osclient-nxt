// libs/graphics/runetek7/effects/shadows/PointLightShadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightShadows.h"

namespace jag::graphics {
    // 0x10047dbc0: the linker folded this into PointLightShadows::GetPointLightSMManager(), which has identical code
    SceneManager PointLightShadows::GetPointLightSMManager() const;

    // 0x100918c20, 304 bytes, base-object constructor, placed by class name and debug map
    // PointLightShadows::PointLightShadows(RT7Core&, int)
    void PointLightShadows::PointLightShadows(RT7Core* param_1, int param_2) {
        RenderTargetsManager* pRVar1;
        RenderToTextureHelper* pRVar2;
        Vector4T<float>* this_00;
        undefined1* puVar3;
        long lVar4;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__PointLightShadows_100f192f0;
        this_00 = (Vector4T<float>*)&field_32;
        ___bzero(this_00, 576);
        puVar3 = &field_80;
        do {
            math::Vector4T<float>::Vector4T(this_00);
            math::Vector4T<float>::Vector4T(this_00 + 16);
            new ((this_00 + 32)) math::Vector2T<int>();
            new ((this_00 + 40)) math::Vector2T<int>();
            lVar4 = 0;
            do {
                new ((puVar3 + lVar4)) math::Vector4T<float>();
                lVar4 = lVar4 + 16;
            } while (lVar4 != 96);
            this_00 = this_00 + 144;
            puVar3 = puVar3 + 144;
        } while (this_00 != (Vector4T<float>*)&field_608);
        new (&field_608) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_680 = param_2;
        field_684 = -1;
        pRVar1 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
        pRVar2 = (RenderToTextureHelper*)param_1->GetRenderToTexture();
        new (m_pointLightSMManager, pRVar1, pRVar2) PointLightSMManager();
    }

    // 0x100918d70, 16 bytes, complete-object constructor, placed by class name and debug map
    // PointLightShadows::PointLightShadows(RT7Core&, int): jumps straight to the base-object constructor

    // 0x100918d80, 64 bytes, placed by class name and debug map
    // PointLightShadows::Initialise()
    byte PointLightShadows::Initialise() {
        uint uVar2;
        int iVar3;

        uVar2 = field_16->GetPSTextureSlotManager();
        iVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_684 = iVar3;
        return (*(code*)field_0[9])(this) & iVar3 != -1;
    }

    // 0x100918dc0, 16 bytes, placed by class name and debug map
    // PointLightShadows::OnEnabled()
    void PointLightShadows::OnEnabled() {}

    // 0x100918dd0, 16 bytes, placed by class name and debug map
    // PointLightShadows::OnDisabled()
    void PointLightShadows::OnDisabled() {}

    // 0x100918de0, 16 bytes, placed by class name and debug map
    // PointLightShadows::Update()
    void PointLightShadows::Update() {
        UpdateShaderConstants(this);
    }

    // 0x100918df0, 304 bytes, placed by class name and debug map
    // PointLightShadows::UpdateShaderConstants()
    void PointLightShadows::UpdateShaderConstants() {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        PointLightSM* this_01;
        uint uVar3;
        MapArea* this_02;
        long lVar4;
        Layout* this_03;
        long* plVar5;
        long* plVar6;
        ShaderConsts* pSVar7;
        vector* pvVar8;
        type* ptVar9;

        this_02 = (MapArea*)Instance();
        lVar4 = this_02->GetOrigin();
        if (*(char*)(lVar4 + 120) != '\0') {
            this_00 = m_pointLightSMManager;
            this_03 = (Layout*)this_00->GetEntityHighlightGlobalState();
            plVar5 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_03);
            plVar6 = (long*)this_03->end();
            for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
                if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pointLightSM != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "effects/shadows/PointLightShadows.cpp",
                              57, (char*)0);
                }
                this_01 = (PointLightSM*)*plVar5;
                uVar3 = this_01->GetID();
                ptVar9 = (type*)(ulong)uVar3;
                pSVar7 = (ShaderConsts*)std::array<PointLightSM::ShaderConsts, 4ul>::operator[](
                    (array<PointLightSM::ShaderConsts, 4ul>*)&field_32, (ulong)ptVar9);
                pvVar8 = this_00->SSOBeginPtr(ptVar9);
                fVar1 = *(float*)(pvVar8 + 20);
                pvVar8 = this_00->SSOBeginPtr(ptVar9);
                fVar2 = *(float*)(pvVar8 + 16);
                pvVar8 = this_00->SSOBeginPtr(ptVar9);
                this_01->GetShaderConsts(pSVar7, fVar1 * fVar2, *(float*)(pvVar8 + 20));
            }
            (&field_608, 0, (TexCoordTransformConsts*)&field_32)->Update();
        }
    }

    // 0x100918f60, 48 bytes, placed by class name and debug map
    // PointLightShadows::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void PointLightShadows::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1 auVar1[16];

        auVar1 = param_3->GetProgram();
        SetShaderConstantsDirect(this, param_1, auVar1._8_8_, auVar1._0_8_);
    }

    // 0x100918f90, 208 bytes, placed by class name and debug map
    // PointLightShadows::SetShaderConstantsDirect(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const
    void PointLightShadows::SetShaderConstantsDirect(DrawCallState* param_1, RenderContext* param_2,
                                                     ShaderProgram* param_3) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        RenderPipelineState* pRVar3;
        ShaderConstBuffer* pSVar4;
        shared_ptr<render::RenderTargets>* this_01;
        RenderTargets* this_02;
        HashedString* pHVar5;
        int iVar6;
        Texture* pTVar7;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            pRVar3 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_680;
            pSVar4 = (ShaderConstBuffer*)(&field_608)->CurrentBuffer();
            pRVar3->SetPSShaderConstBuffer(uVar1, pSVar4);
        }
        this_01 = (shared_ptr<render::RenderTargets>*)m_pointLightSMManager->GetCursorMutex();
        this_02 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_01);
        pTVar7 = (Texture*)this_02->GetDepthStencilTargetTexture();
        if (pTVar7 != (Texture*)0) {
            pHVar5 = (HashedString*)graphics::operator*((graphics*)47);
            iVar6 = param_3->GetConstIndex(pHVar5);
            pRVar3 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            pRVar3->SetPSTextureSamplerPair(field_684, pTVar7, iVar6, (SamplerState*)0, true);
        }
    }

    // 0x100919060, 160 bytes, placed by class name and debug map
    // PointLightShadows::BindConstBufferToShader(render::ShaderProgram const&) const
    void PointLightShadows::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;

        if (BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowsConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowsConstBlockName);
            if (iVar3 != 0) {
                new (&BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowsConstBlockName)
                    HashedString("PointLightShadows");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowsConstBlockName);
            }
        }
        uVar1 = field_680;
        uVar2 = (&field_608)->GetAmplitude();
        param_1->BindConstBufferSlot(
            uVar1,
            (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowsConstBlockName,
            uVar2);
    }

    // 0x100919100, 128 bytes, placed by class name and debug map
    // PointLightShadows::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)
    void PointLightShadows::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, "Pointlight Shadows", local_30);
        PointLightSMManager::RegisterTweaks((ContainerGroup*)m_pointLightSMManager, (basic_string*)param_1);
        eastl::string::~basic_string(local_50);
    }

    // 0x100919180, 32 bytes, placed by class name and debug map
    // PointLightShadows::CreateRenderingResources()
    void PointLightShadows::CreateRenderingResources() {
        (&field_608, 1, (TexCoordTransformConsts*)&field_32)->Create();
    }

    // 0x1009191c0, 32 bytes, placed by class name and debug map
    // PointLightShadows::DestroyRenderingResources()
    void PointLightShadows::DestroyRenderingResources() {
        (&field_608)->Destroy();
    }

    // 0x1009191e0, 32 bytes, placed by class name and debug map
    // PointLightShadows::OnEndFrame()
    void PointLightShadows::OnEndFrame() {
        (&field_608)->RotateBuffers();
    }

    // 0x100919200, 272 bytes, placed by class name and debug map
    // PointLightShadows::OnQualityChange(GraphicsQuality)
    undefined8 PointLightShadows::OnQualityChange(undefined4 param_2) {
        Config local_68;

        if ((*(code*)field_0[5])() == '\0') {
            return 0;
        }
        new (&local_68) PointLightSMManager::Config();
        switch (param_2) {
        case 0:
            local_68.field_16._4_4_ = 1176256512;
            local_68.field_0 = 2;
            local_68.field_4 = 2;
            break;
        case 1:
            local_68.field_16._4_4_ = 1178816512;
            local_68.field_0 = 2;
            local_68.field_4 = 3;
            break;
        case 2:
            local_68.field_16._4_4_ = 1182938453;
            local_68.field_0 = 3;
            local_68.field_4 = 3;
            goto LAB_1009192b9;
        case 3:
            local_68.field_16._4_4_ = 1187205120;
            local_68.field_0 = 4;
            local_68.field_4 = 4;
        LAB_1009192b9:
            local_68.field_8 = 512;
            local_68.field_68._0_4_ = 5;
            goto LAB_1009192cb;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "effects/shadows/PointLightShadows.cpp",
                            167, (char*)0);
        }
        local_68.field_8 = 256;
        local_68.field_68._0_4_ = 4;
    LAB_1009192cb:
        PointLightShadowMapping::SetDiskFilter((undefined4)local_68.field_68);
        (&field_32)->Clear();
        m_pointLightSMManager->Destroy();
        return (m_pointLightSMManager, &local_68)->Init();
    }

    // 0x100919370, 64 bytes, placed by class name
    // PointLightShadows::IsSupported() const
    undefined8 PointLightShadows::IsSupported() {
        undefined4 uVar1;
        MapArea* this_00;
        long lVar2;
        RenderDevice* this_01;
        undefined8 uVar3;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        uVar3 = 0;
        if ((*(char*)(lVar2 + 120) != '\0') && (*(char*)(lVar2 + 182) != '\0')) {
            this_01 = (RenderDevice*)this_00->Instance();
            uVar1 = this_01->GetGpuMemoryProfile();
            uVar3 = render::operator>=(uVar1, 2);
        }
        return uVar3;
    }

    // 0x1009193b0, 32 bytes, placed by class name
    // PointLightShadows::RenderDebug(render::Viewport const&) const
    void PointLightShadows::RenderDebug(Viewport* param_1) {
        m_pointLightSMManager->RenderDebug();
    }

} // namespace jag::graphics
