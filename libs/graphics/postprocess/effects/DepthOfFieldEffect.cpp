// libs/graphics/postprocess/effects/DepthOfFieldEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "DepthOfFieldEffect.h"

namespace jag::postprocess {
    // 0x1009b1c50, 384 bytes, base-object constructor, placed by class name and debug map
    // DepthOfFieldEffect::DepthOfFieldEffect(int, int)
    void DepthOfFieldEffect::DepthOfFieldEffect(int param_1, int param_2) {
        undefined4 in_register_00000034;

        new (this) PostProcessEffect(param_1, param_2);
        field_0 = &PTR__DepthOfFieldEffect_100f1c400;
        field_20 = '\0';
        field_21 = '\0';
        new (field_24) DepthOfFieldEffectConfig();
        new (field_96, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                           shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_112, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_128, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_144, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_160, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_176, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_192, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_208, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_224, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_240) render::InputAssemblerState();
    }

    // 0x1009b1dd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthOfFieldEffect::DepthOfFieldEffect(int, int): jumps straight to the base-object constructor

    // 0x1009b1de0, 288 bytes, base-object destructor, placed by class name and debug map
    // DepthOfFieldEffect::~DepthOfFieldEffect()
    void DepthOfFieldEffect::~DepthOfFieldEffect() {
        field_0 = &PTR__DepthOfFieldEffect_100f1c400;
        Destroy(this);
        field_240->~InputAssemblerState();
        field_224->~shared_ptr();
        field_208->~shared_ptr();
        field_192->~shared_ptr();
        field_176->~shared_ptr();
        field_160->~shared_ptr();
        field_144->~shared_ptr();
        field_128->~shared_ptr();
        field_112->~shared_ptr();
        field_96->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x1009b1f00, 16 bytes, complete-object destructor, placed by class name and debug map
    // DepthOfFieldEffect::~DepthOfFieldEffect(): jumps straight to the base-object destructor

    // 0x1009b1f10, 32 bytes, deleting destructor, placed by class name and debug map
    // DepthOfFieldEffect::~DepthOfFieldEffect()
    void DepthOfFieldEffect::~DepthOfFieldEffect() {
        ~DepthOfFieldEffect(this);
        operator_delete(this);
    }

    // 0x1009b1f30, 1104 bytes, placed by class name and debug map
    // DepthOfFieldEffect::Init()
    undefined8 DepthOfFieldEffect::Init() {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* pbVar4;
        ostream* poVar5;
        undefined1 local_178[280];
        shared_ptr local_60;
        shadersourceprovider local_50[24];
        shared_ptr local_38;

        (*(code*)field_0[6])();
        pcVar1 = (char*)((DepthOfFieldEffect*)this)->Instance();
        local_178->BuildVSFragment();
        pcVar2 = (char*)local_178->c_str();
        local_50->GetCompletedShader(13);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_128, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        pbVar4 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_178;
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(pbVar4);
        pcVar1 = (char*)pbVar4->Instance();
        local_178->BuildVSFragment();
        pcVar2 = (char*)local_178->c_str();
        local_50->GetCompletedShader(15);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_96, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        pbVar4 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_178;
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(pbVar4);
        pcVar1 = (char*)pbVar4->Instance();
        local_178->BuildVSFragment();
        pcVar2 = (char*)local_178->c_str();
        local_50->GetCompletedShader(14);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_112, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        local_178->~basic_string();
        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        poVar5 = (ostream*)(local_178 + 16);
        std::operator<<(poVar5, "\n#define SCENE_BLUR_NEAR\n");
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(16);
        std::operator<<(poVar5, pcVar1);
        pcVar1 = (char*)poVar5->Instance();
        local_50->BuildVSFragment();
        pcVar2 = (char*)local_50->c_str();
        local_38.str();
        pVVar3 = (VertexElementDesc*)local_38.c_str();
        local_60.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_144, &local_60);
        local_60.~shared_ptr();
        local_38.~basic_string();
        local_50->~basic_string();
        local_178->~PixelShaderSourceStream();
        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        poVar5 = (ostream*)(local_178 + 16);
        std::operator<<(poVar5, "\n#define SCENE_BLUR_FAR\n");
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(16);
        std::operator<<(poVar5, pcVar1);
        pcVar1 = (char*)poVar5->Instance();
        local_50->BuildVSFragment();
        pcVar2 = (char*)local_50->c_str();
        local_38.str();
        pVVar3 = (VertexElementDesc*)local_38.c_str();
        local_60.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_160, &local_60);
        local_60.~shared_ptr();
        local_38.~basic_string();
        local_50->~basic_string();
        local_178->~PixelShaderSourceStream();
        return 1;
    }

    // 0x1009b23a0, 128 bytes, placed by class name and debug map
    // DepthOfFieldEffect::Destroy()
    void DepthOfFieldEffect::Destroy() {
        ShaderProgramManager* pSVar1;

        pSVar1 = (ShaderProgramManager*)Instance();
        pSVar1->Unregister(field_128);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_96);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_112);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_144);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_160);
    }

    // 0x1009b2420, 1024 bytes, placed by class name and debug map
    // DepthOfFieldEffect::CreateRenderTargets(render::RenderTargetsManager&, render::Texture const*, render::Texture const*, render::Texture const*)
    void DepthOfFieldEffect::CreateRenderTargets(RenderTargetsManager* param_1, Texture* param_2, Texture* param_3,
                                                 Texture* param_4) {
        uint uVar1;
        long* plVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        Texture* this_00;
        RenderTargetsManager* pRVar10;
        uint uVar11;
        undefined8* puVar12;
        uint* puVar13;
        RenderTargets* pRVar14;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar15;
        long lVar16;
        undefined1 local_110[192];
        Texture* local_50;
        RenderTargetsManager* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40[16];

        local_50 = param_4;
        if (field_24[54] != '\0') {
            new ((local_110 + 64)) std::array<render::Texture::Desc, 2ul>();
            puVar12 = (undefined8*)param_2->second();
            puVar13 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)(local_110 + 64));
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            uVar7 = puVar12[4];
            uVar8 = puVar12[5];
            uVar9 = puVar12[7];
            *(undefined8*)(puVar13 + 12) = puVar12[6];
            *(undefined8*)(puVar13 + 14) = uVar9;
            *(undefined8*)(puVar13 + 8) = uVar7;
            *(undefined8*)(puVar13 + 10) = uVar8;
            *(undefined8*)(puVar13 + 4) = uVar5;
            *(undefined8*)(puVar13 + 6) = uVar6;
            *(undefined8*)puVar13 = uVar3;
            *(undefined8*)(puVar13 + 2) = uVar4;
            if (field_24[53] != '\0') {
                *puVar13 = *puVar13 >> 1;
                puVar13[1] = puVar13[1] >> 1;
            }
            puVar13[6] = 0;
            *(undefined1*)(puVar13 + 8) = 0;
            new (local_110) render::Texture::Desc();
            local_40->Register(param_1, "DoFBlurNearRT", 3553, local_110 + 64, 1, local_110, 0, 1);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_192,
                                                         (shared_ptr*)local_40);
            local_40->~shared_ptr();
            pRVar14 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_192);
            pvVar15 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar14->GetColourTargetTextures();
            puVar12 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar15, 0);
            plVar2 = (long*)*puVar12;
            lVar16 = pvVar15->Instance();
            (**(code**)(*plVar2 + 24))(plVar2, lVar16 + 208, 0);
        }
        if (field_24[55] != '\0') {
            new ((local_110 + 64)) std::array<render::Texture::Desc, 2ul>();
            puVar12 = (undefined8*)param_3->second();
            puVar13 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)(local_110 + 64));
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            uVar7 = puVar12[4];
            uVar8 = puVar12[5];
            uVar9 = puVar12[7];
            *(undefined8*)(puVar13 + 12) = puVar12[6];
            *(undefined8*)(puVar13 + 14) = uVar9;
            *(undefined8*)(puVar13 + 8) = uVar7;
            *(undefined8*)(puVar13 + 10) = uVar8;
            *(undefined8*)(puVar13 + 4) = uVar5;
            *(undefined8*)(puVar13 + 6) = uVar6;
            *(undefined8*)puVar13 = uVar3;
            *(undefined8*)(puVar13 + 2) = uVar4;
            if (field_24[53] != '\0') {
                *puVar13 = *puVar13 >> 1;
                puVar13[1] = puVar13[1] >> 1;
            }
            puVar13[6] = 0;
            *(undefined1*)(puVar13 + 8) = 0;
            new (local_110) render::Texture::Desc();
            local_40->Register(param_1, "DoFBlurFarRT", 3553, local_110 + 64, 1, local_110, 0, 1);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_176,
                                                         (shared_ptr*)local_40);
            local_40->~shared_ptr();
            pRVar14 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_176);
            pvVar15 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar14->GetColourTargetTextures();
            puVar12 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar15, 0);
            plVar2 = (long*)*puVar12;
            lVar16 = pvVar15->Instance();
            (**(code**)(*plVar2 + 24))(plVar2, lVar16 + 208, 0);
        }
        local_48 = param_1;
        new ((local_110 + 64)) std::array<render::Texture::Desc, 2ul>();
        this_00 = local_50;
        puVar13 = (uint*)local_50->second();
        uVar1 = *puVar13;
        uVar11 = math::IntegerExponentPow<int>(2, *(uint*)(field_24 + 48));
        puVar13 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)(local_110 + 64));
        *puVar13 = uVar1 / uVar11;
        lVar16 = this_00->second();
        uVar1 = *(uint*)(lVar16 + 4);
        uVar11 = math::IntegerExponentPow<int>(2, *(uint*)(field_24 + 48));
        puVar13[1] = uVar1 / uVar11;
        puVar13[6] = 0;
        *(undefined1*)(puVar13 + 8) = 0;
        puVar13[3] = 18;
        new (local_110) render::Texture::Desc();
        pRVar10 = local_48;
        local_40->Register(local_48, "DoFFocusRT1", 3553, local_110 + 64, 1, local_110, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_208,
                                                     (shared_ptr*)local_40);
        local_40->~shared_ptr();
        pRVar14 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_208);
        pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar14->GetColourTargetTextures();
        puVar12 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar15, 0);
        plVar2 = (long*)*puVar12;
        lVar16 = pvVar15->Instance();
        (**(code**)(*plVar2 + 24))(plVar2, lVar16 + 208, 0);
        new (local_110) render::Texture::Desc();
        local_40->Register(pRVar10, "DoFFocusRT2", 3553, local_110 + 64, 1, local_110, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_224,
                                                     (shared_ptr*)local_40);
        local_40->~shared_ptr();
        pRVar14 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_224);
        pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar14->GetColourTargetTextures();
        puVar12 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar15, 0);
        plVar2 = (long*)*puVar12;
        lVar16 = pvVar15->Instance();
        (**(code**)(*plVar2 + 24))(plVar2, lVar16 + 208, 0);
    }

    // 0x1009b2820, 96 bytes, placed by class name and debug map
    // DepthOfFieldEffect::DestroyRenderTargets(render::RenderTargetsManager&)
    void DepthOfFieldEffect::DestroyRenderTargets(RenderTargetsManager* param_1) {
        param_1->Unregister(field_224);
        param_1->Unregister(field_208);
        param_1->Unregister(field_176);
        param_1->Unregister(field_192);
    }

    // 0x1009b2880, 480 bytes, placed by class name and debug map
    // DepthOfFieldEffect::SetSharedState(render::ShaderProgram const&, ViewTransforms const&)
    void DepthOfFieldEffect::SetSharedState(ShaderProgram* param_1, ViewTransforms* param_2) {
        uint uVar1;
        int iVar2;
        HashedString* pHVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        uint* puVar7;
        long lVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float local_28;
        float local_24;

        local_28 = 0.0;
        local_24 = 0.0;
        param_2->GetNearFarPlaneDistances(&local_28, &local_24);
        pHVar3 = (HashedString*)postprocess::operator*((postprocess*)41);
        iVar2 = param_1->GetConstIndex(pHVar3);
        param_1->SetShaderConstFloat1(iVar2, *(float*)(field_24 + 16));
        pHVar3 = (HashedString*)postprocess::operator*((postprocess*)11);
        param_1->SetShaderConstFloat4(pHVar3, local_24 * local_28, local_28 - local_24, local_24, 0.0);
        pHVar3 = (HashedString*)postprocess::operator*((postprocess*)42);
        iVar2 = param_1->GetConstIndex(pHVar3);
        fVar12 = -1.0;
        fVar9 = -1.0;
        if (field_24[54] != '\0') {
            fVar9 = *(float*)field_24;
        }
        fVar10 = -1.0;
        if (field_24[54] != '\0') {
            fVar10 = *(float*)(field_24 + 4);
        }
        fVar11 = -1.0;
        if (field_24[55] != '\0') {
            fVar11 = *(float*)(field_24 + 8);
            fVar12 = *(float*)(field_24 + 12);
        }
        param_1->SetShaderConstFloat4(iVar2, fVar9, fVar10, fVar11, fVar12);
        pHVar3 = (HashedString*)postprocess::operator*((postprocess*)43);
        iVar2 = param_1->GetConstIndex(pHVar3);
        fVar12 = 1e+06;
        fVar9 = 1e+06;
        if (field_24[52] != '\0') {
            fVar9 = *(float*)(field_24 + 20);
            fVar12 = *(float*)(field_24 + 24);
        }
        param_1->SetShaderConstFloat4(iVar2, fVar9, fVar12, *(float*)(field_24 + 28), *(float*)(field_24 + 32));
        pHVar3 = (HashedString*)postprocess::operator*((postprocess*)44);
        iVar2 = param_1->GetConstIndex(pHVar3);
        pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_208);
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar4->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        puVar7 = (uint*)(*puVar6)->second();
        uVar1 = *puVar7;
        pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_208);
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar4->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        lVar8 = (*puVar6)->second();
        param_1->SetShaderConstFloat2(iVar2, 1.0 / (float)uVar1, 1.0 / (float)*(uint*)(lVar8 + 4));
    }

    // 0x1009b2a60, 48 bytes, placed by class name and debug map
    // DepthOfFieldEffect::GetRequirements() const
    byte DepthOfFieldEffect::GetRequirements() {
        byte bVar1;
        uint uVar2;

        uVar2 = (byte)field_24[53] ^ 1;
        bVar1 = 3;
        if (*(uint*)(field_24 + 36) <= uVar2) {
            bVar1 = uVar2 < *(uint*)(field_24 + 40) | 2;
        }
        return (*(int*)(field_24 + 44) != 0) << 2 | bVar1;
    }

    // 0x1009b2a90, 2192 bytes, placed by class name and debug map
    // DepthOfFieldEffect::Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*, PostProcessManager&)
    void DepthOfFieldEffect::Render(RenderContext* param_1, RenderTargets* param_2, Texture* param_3, Texture* param_4,
                                    Viewport* param_5, ViewRenderTargets* param_6, PostProcessManager* param_7) {
        undefined1* puVar1;
        undefined1* this_00;
        bool bVar2;
        Array<shared_ptr<render::RenderTargets>, eastl::allocator>* pAVar3;
        shared_ptr<render::RenderTargets>* psVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        RenderTargetsManager* pRVar8;
        Layout* pLVar9;
        long lVar10;
        int* piVar11;
        Viewport* pVVar12;
        OutputMergerState* pOVar13;
        RenderPipelineState* pRVar14;
        ShaderProgram* pSVar15;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar16;
        VertexDeclaration* pVVar17;
        GeometryBatch* pGVar18;
        VertexBuffer* pVVar19;
        ViewTransforms* pVVar20;
        HashedString* pHVar21;
        RenderToTextureHelper* pRVar22;
        KawaseBlurFilter* pKVar23;
        undefined8 uVar24;
        InputAssemblerState* this_01;
        int iVar25;
        Texture* pTVar26;
        DrawCallState* pDVar27;
        int iVar28;
        undefined1 local_c8[32];
        RenderTargets* local_a8;
        Texture* local_a0;
        Texture* local_98;
        Texture* local_90;
        Texture* local_88;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80;
        Texture* local_78;
        shared_ptr<render::RenderTargets>* local_70;
        RenderContext* local_68;
        DrawCallState local_60;

        local_80 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_128;
        local_c8._24_8_ = param_5;
        local_90 = param_3;
        local_88 = param_4;
        local_68 = param_1;
        bVar2 = local_80->operator_cast_to_bool();
        if (bVar2) {
            iVar25 = *(int*)(field_24 + 36);
            iVar28 = *(int*)(field_24 + 40);
            if (field_24[53] != '\0') {
                iVar25 = iVar25 + -1 + (uint)(iVar25 == 0);
                iVar28 = iVar28 + -1 + (uint)(iVar28 == 0);
            }
            local_78 = local_90;
            local_a8 = param_2;
            if (iVar25 != 0) {
                pAVar3 =
                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)param_7->GetDownSampledSourceRTs();
                psVar4 = (shared_ptr<render::RenderTargets>*)
                    Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](pAVar3, (ulong)(iVar25 - 1));
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar4);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                local_78 = (Texture*)*puVar7;
            }
            pTVar26 = local_90;
            if (iVar28 != 0) {
                pAVar3 =
                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)param_7->GetDownSampledSourceRTs();
                psVar4 = (shared_ptr<render::RenderTargets>*)
                    Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](pAVar3, (ulong)(iVar28 - 1));
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar4);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                pTVar26 = (Texture*)*puVar7;
            }
            local_98 = local_88;
            if (*(int*)(field_24 + 44) != 0) {
                pAVar3 = (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)param_7->GetPointLightBounds();
                psVar4 = (shared_ptr<render::RenderTargets>*)
                    Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                        pAVar3, (ulong)(*(int*)(field_24 + 44) - 1));
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar4);
                local_98 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
            }
            pRVar8 = (RenderTargetsManager*)param_7->GetRenderTargetsManager();
            local_a0 = pTVar26;
            CreateRenderTargets(this, pRVar8, local_78, pTVar26, local_88);
            pDVar27 = &local_60;
            render::DrawCallState::DrawCallState(pDVar27);
            pLVar9 = (Layout*)pDVar27->GetRenderPipelineState();
            lVar10 = pDVar27->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar9, lVar10 + 1080);
            this_00 = field_208;
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            piVar11 = (int*)(*puVar7)->second();
            iVar25 = *piVar11;
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            lVar10 = (*puVar7)->second();
            new (local_c8) render::Viewport(0, 0, iVar25, *(int*)(lVar10 + 4), 0.0, 1.0);
            pVVar12 = (Viewport*)local_60.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar12, (uint)local_c8);
            pOVar13 = (OutputMergerState*)local_60.GetOutputMergerState();
            pRVar5 = (RenderTargets*)this_00->end();
            pOVar13->SetRenderTargets(pRVar5);
            pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            puVar1 = field_96;
            pSVar15 = (ShaderProgram*)puVar1->end();
            pRVar14->SetShaderProgram(pSVar15);
            pcVar16 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
            pVVar17 = (VertexDeclaration*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar16);
            pGVar18 = (GeometryBatch*)param_7->GetRenderToTexture();
            pVVar19 = (VertexBuffer*)pGVar18->GetBoneIDMap();
            (field_240, pVVar17, pVVar19)->SetVertexStreamData();
            local_60.SetInputAssemblerState(field_240);
            pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)puVar1);
            pTVar26 = local_98;
            pVVar20 = (ViewTransforms*)param_7->GetViewTransforms();
            SetSharedState(this, pSVar15, pVVar20);
            pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pHVar21 = (HashedString*)postprocess::operator*((postprocess*)3);
            iVar25 = pSVar15->GetConstIndex(pHVar21);
            pRVar14->SetPSTextureSamplerPair(0, pTVar26, iVar25, 0, false);
            pRVar22 = (RenderToTextureHelper*)param_7->GetRenderToTexture();
            pRVar22->RenderQuad(local_68, &local_60);
            local_60.~DrawCallState();
            pKVar23 = (KawaseBlurFilter*)param_7->GetKawaseBlurFilter();
            new (&local_60) render::DrawCallState();
            local_70 = (shared_ptr<render::RenderTargets>*)field_224;
            uVar24 = shared_ptr<render::RenderTargets>::operator*(local_70);
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            pKVar23->BlurMultiPass(local_68, &local_60, uVar24, *puVar7, *(undefined4*)(field_24 + 64), field_112, 0);
            local_60.~DrawCallState();
            if (field_24[55] != '\0') {
                new (&local_60) render::DrawCallState();
                puVar1 = field_160;
                pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                    (shared_ptr<render::ShaderProgram>*)puVar1);
                pVVar20 = (ViewTransforms*)param_7->GetViewTransforms();
                SetSharedState(this, pSVar15, pVVar20);
                pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)puVar1);
                pHVar21 = (HashedString*)postprocess::operator*((postprocess*)3);
                iVar25 = pSVar15->GetConstIndex(pHVar21);
                pRVar14->SetPSTextureSamplerPair(1, pTVar26, iVar25, 0, false);
                pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_70);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                pTVar26 = (Texture*)*puVar7;
                pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)puVar1);
                pHVar21 = (HashedString*)postprocess::operator*((postprocess*)47);
                iVar25 = pSVar15->GetConstIndex(pHVar21);
                pRVar14->SetPSTextureSamplerPair(2, pTVar26, iVar25, 0, false);
                pKVar23 = (KawaseBlurFilter*)param_7->GetKawaseBlurFilter();
                uVar24 = shared_ptr<render::RenderTargets>::operator*((shared_ptr<render::RenderTargets>*)field_176);
                pKVar23->BlurMultiPass(local_68, &local_60, uVar24, local_a0, *(undefined4*)(field_24 + 56), puVar1, 0);
                local_60.~DrawCallState();
            }
            if (field_24[54] != '\0') {
                new (&local_60) render::DrawCallState();
                puVar1 = field_144;
                pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                    (shared_ptr<render::ShaderProgram>*)puVar1);
                pVVar20 = (ViewTransforms*)param_7->GetViewTransforms();
                SetSharedState(this, pSVar15, pVVar20);
                pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_70);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                pTVar26 = (Texture*)*puVar7;
                pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)puVar1);
                pHVar21 = (HashedString*)postprocess::operator*((postprocess*)47);
                iVar25 = pSVar15->GetConstIndex(pHVar21);
                pRVar14->SetPSTextureSamplerPair(2, pTVar26, iVar25, 0, false);
                pKVar23 = (KawaseBlurFilter*)param_7->GetKawaseBlurFilter();
                uVar24 = shared_ptr<render::RenderTargets>::operator*((shared_ptr<render::RenderTargets>*)field_192);
                pKVar23->BlurMultiPass(local_68, &local_60, uVar24, local_78, *(undefined4*)(field_24 + 60), puVar1, 0);
                local_60.~DrawCallState();
            }
            new (&local_60) render::DrawCallState();
            pVVar12 = (Viewport*)local_60.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar12, local_c8._24_4_);
            pOVar13 = (OutputMergerState*)local_60.GetOutputMergerState();
            pOVar13->SetRenderTargets(local_a8);
            pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pSVar15 =
                (ShaderProgram*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_80);
            pRVar14->SetShaderProgram(pSVar15);
            this_01 = (InputAssemblerState*)local_60.GetInputAssemblerState();
            pcVar16 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)local_80);
            pVVar17 = (VertexDeclaration*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar16);
            pGVar18 = (GeometryBatch*)param_7->GetRenderToTexture();
            pVVar19 = (VertexBuffer*)pGVar18->GetBoneIDMap();
            this_01->SetVertexStreamData(pVVar17, pVVar19);
            pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)local_80);
            pVVar20 = (ViewTransforms*)param_7->GetViewTransforms();
            SetSharedState(this, pSVar15, pVVar20);
            pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pHVar21 = (HashedString*)postprocess::operator*((postprocess*)2);
            iVar25 = pSVar15->GetConstIndex(pHVar21);
            pRVar14->SetPSTextureSamplerPair(0, local_90, iVar25, 0, false);
            if (field_24[55] != '\0') {
                pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_176);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                pTVar26 = (Texture*)*puVar7;
                pHVar21 = (HashedString*)postprocess::operator*((postprocess*)46);
                iVar25 = pSVar15->GetConstIndex(pHVar21);
                pRVar14->SetPSTextureSamplerPair(1, pTVar26, iVar25, 0, false);
            }
            if (field_24[54] != '\0') {
                pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_192);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                pTVar26 = (Texture*)*puVar7;
                pHVar21 = (HashedString*)postprocess::operator*((postprocess*)45);
                iVar25 = pSVar15->GetConstIndex(pHVar21);
                pRVar14->SetPSTextureSamplerPair(2, pTVar26, iVar25, 0, false);
            }
            pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_70);
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            pTVar26 = (Texture*)*puVar7;
            pHVar21 = (HashedString*)postprocess::operator*((postprocess*)47);
            iVar25 = pSVar15->GetConstIndex(pHVar21);
            pRVar14->SetPSTextureSamplerPair(3, pTVar26, iVar25, 0, false);
            pRVar14 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pHVar21 = (HashedString*)postprocess::operator*((postprocess*)3);
            iVar25 = pSVar15->GetConstIndex(pHVar21);
            pRVar14->SetPSTextureSamplerPair(4, local_88, iVar25, 0, false);
            pDVar27 = &local_60;
            pLVar9 = (Layout*)pDVar27->GetRenderPipelineState();
            lVar10 = pDVar27->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar9, lVar10 + 1080);
            pRVar22 = (RenderToTextureHelper*)param_7->GetRenderToTexture();
            pRVar22->RenderQuad(local_68, &local_60);
            local_60.~DrawCallState();
            if ((field_20 == '\0') && (field_21 == '\0')) {
                pRVar8 = (RenderTargetsManager*)param_7->GetRenderTargetsManager();
                DestroyRenderTargets(this, pRVar8);
            }
        }
    }

    // 0x1009b37b0, 576 bytes, placed by class name and debug map
    // DepthOfFieldEffect::RenderDebug(render::Viewport const&)
    void DepthOfFieldEffect::RenderDebug(Viewport* param_1) {
        undefined8 uVar1;
        bool bVar2;
        int iVar3;
        long* plVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        shared_ptr* psVar8;
        shared_ptr<render::RenderTargets>* psVar9;
        ImVec4 local_60[16];
        Point<float> local_50[8];
        undefined1 local_48[16];
        undefined1 local_38[8];

        if ((field_20 != '\0') || (field_21 != '\0')) {
            psVar8 = (shared_ptr*)field_176;
            if (field_21 == '\0') {
                psVar8 = (shared_ptr*)field_208;
            }
            bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
            if (bVar2) {
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    psVar9 = (shared_ptr<render::RenderTargets>*)field_176;
                    if (field_21 == '\0') {
                        psVar9 = (shared_ptr<render::RenderTargets>*)field_208;
                    }
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar9);
                    pvVar6 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 pRVar5->GetColourTargetTextures();
                    puVar7 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                    uVar1 = *puVar7;
                    ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                    new ((local_48 + 8)) math::Point<float>(0.0, 0.0);
                    math::Point<float>::Point(local_50, 1.0, 1.0);
                    new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_48) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar1, local_60, local_48 + 8, local_50, 0, 0, 0,
                                                (SideBarData*)local_48);
                }
            }
            psVar8 = (shared_ptr*)field_192;
            if (field_21 == '\0') {
                psVar8 = (shared_ptr*)field_224;
            }
            bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
            if (bVar2) {
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    psVar9 = (shared_ptr<render::RenderTargets>*)field_192;
                    if (field_21 == '\0') {
                        psVar9 = (shared_ptr<render::RenderTargets>*)field_224;
                    }
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar9);
                    pvVar6 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 pRVar5->GetColourTargetTextures();
                    puVar7 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                    uVar1 = *puVar7;
                    ImVec4::ImVec4(local_60, 0.0, 0.5, 0.5, 0.5);
                    new ((local_48 + 8)) math::Point<float>(0.0, 0.0);
                    math::Point<float>::Point(local_50, 1.0, 1.0);
                    new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_48) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar1, local_60, local_48 + 8, local_50, 0, 0, 0,
                                                (SideBarData*)local_48);
                }
            }
        }
    }

} // namespace jag::postprocess
