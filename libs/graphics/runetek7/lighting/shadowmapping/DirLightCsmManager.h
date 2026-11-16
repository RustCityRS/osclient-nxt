// libs/graphics/runetek7/lighting/shadowmapping/DirLightCsmManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DirLightCsmManager {
    public:
        class Config;
        // virtual methods in vtable order
        virtual ~DirLightCsmManager();
        math GetLightViewMat() const;
        GetCamViewMat() const;
        void SetCascadeSplitWeight(float);
        uint GetConfig() const;
        char UpdatePaused() const;
        GetShadowMapAtlasViewport() const;
        void GetShadowMapCascade(unsigned int);
        float GetMaxShadowDistance() const;
        void GetShadowMapCascade(unsigned int) const;
        DirLightCsmManager(render::RenderTargetsManager*, ThreadPool*);
        void Destroy();
        byte Initialise(Config const&);
        CreateRasterizerStates();
        void CreateSamplerStates();
        SetShadowMapCascadeRes(unsigned int, unsigned int);
        void ApplyConfig(Config const&);
        void SetSlopeBias(float, float);
        void DestroyRenderingResources();
        void SetCascadeCount(unsigned int);
        void SetCascadeNearClip(float);
        void SetCascadeFarClip(float);
        void SetCascadeFadeRangeScale(float);
        void SetLightCamNearClipOffset(float);
        void SetCascadeBias(unsigned int, float);
        void SetCascadeLightProjFit(unsigned int, LightProjectionFit);
        void SetShadowStrength(float);
        void Update(ViewTransforms const&, math::Vector3T<float> const&, std::array<unsigned int, 4ul>&, bool);
        void UpdateLightViewMat(math::Vector3T<float> const&, math::Vector3T<float> const&);
        void UpdateShadowMapClip2TexMat(std::array<float, 4ul> const&);
        GetCascadesWorldSpaceAABB() const;
        void GetShadowMapAtlasRenderTargetData(render::RenderTargetData&);
        void GetShaderConsts(ShaderConsts&) const;
        void GetShadowMapClip2TexMat(unsigned int) const;
        void RenderDebug() const;
        void CreateRenderTargets(unsigned int, unsigned int);
        void UpdateCascadeRenderTargetData();
        void GetShadowDepthMapAtlas() const;
        GetShadowTranslucencyMapAtlas() const;
        byte CreateRenderingResources(unsigned int, unsigned int);
        void RegisterTweaks(tweak::ContainerGroup&, eastl::string const&);
        void GetShadowPassRS(render::CullMode) const;
        void GetShadowMapAtlasRT();

        // data members, from how the methods use this: 884 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        math m_lightViewMat; // offset 16
        char _unknown_112[432];
        undefined1 field_544; // offset 544
        char _unknown_545[63];
        undefined1 field_608; // offset 608
        char _unknown_609[63];
        shared_ptr field_672; // offset 672
        uint field_688;       // offset 688
        float field_692;      // offset 692
        char _unknown_696[48];
        uint m_config;  // offset 744
        uint field_748; // offset 748
        uint field_752; // offset 752
        char _unknown_756[4];
        undefined8 field_760;           // offset 760
        undefined8 field_768;           // offset 768
        float m_cascadeSplitWeight;     // offset 776
        float m_cascadeNearClip;        // offset 780
        float m_maxShadowDistance;      // offset 784
        float field_788;                // offset 788
        float m_cascadeFadeRangeScale;  // offset 792
        float m_lightCamNearClipOffset; // offset 796
        undefined8 field_800;           // offset 800
        undefined8 field_808;           // offset 808
        undefined8 field_816;           // offset 816
        undefined8 field_824;           // offset 824
        undefined8 field_832;           // offset 832
        undefined8 field_840;           // offset 840
        float field_848;                // offset 848
        char _unknown_852[1];
        byte field_853; // offset 853
        char _unknown_854[10];
        ThreadPool* field_864; // offset 864
        char field_872;        // offset 872
        char field_873;        // offset 873
        char _unknown_874[1];
        char field_875;       // offset 875
        undefined1 field_876; // offset 876
        char field_877;       // offset 877
        char _unknown_878[6];
    };

    class DirLightCsmManager::Config {
    public:
        Config();
        int GetUseableCascadeResolution() const;

        // data members, from how the methods use this: 120 bytes
        char _unknown_0[4];
        int field_4;         // offset 4
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        undefined8 field_28; // offset 28
        undefined8 field_36; // offset 36
        undefined8 field_44; // offset 44
        undefined4 field_52; // offset 52
        char _unknown_56[16];
        undefined8 field_72; // offset 72
        char _unknown_80[16];
        undefined8 field_96;  // offset 96
        undefined4 field_104; // offset 104
        undefined2 field_108; // offset 108
        char _unknown_110[2];
        undefined4 field_112; // offset 112
        undefined1 field_116; // offset 116
        char _unknown_117[3];
    };

    // 0x1001d0870, 16 bytes, inline, placed by class name and debug map
    // DirLightCsmManager::SetCascadeSplitWeight(float)
    void DirLightCsmManager::SetCascadeSplitWeight(float param_1) {
        m_cascadeSplitWeight = param_1;
    }

    // 0x1001d0880, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DirLightCsmManager::GetConfig() const
    /* game::NPCType::GetHeadList() const */

    undefined1* game::NPCType::GetHeadList() {
        return &m_headList;
    }

    // 0x1001d0890, 16 bytes, inline, placed by class name and debug map
    // DirLightCsmManager::UpdatePaused() const
    char DirLightCsmManager::UpdatePaused() {
        return field_877;
    }

    // 0x1001d08d0, 48 bytes, inline, placed by class name and debug map
    // DirLightCsmManager::GetShadowMapAtlasViewport() const
    DirLightCsmManager* DirLightCsmManager::GetShadowMapAtlasViewport() {
        long in_RSI;

        new (this) render::Viewport(0, 0, *(int*)(in_RSI + 688), *(int*)(in_RSI + 688), 0.0, 1.0);
        return this;
    }

    // 0x1001d0930, 16 bytes, inline, placed by class name
    // DirLightCsmManager::GetShadowMapCascade(unsigned int)
    void DirLightCsmManager::GetShadowMapCascade(uint param_1) {
        GetShadowMapCascade(this, param_1);
    }

    // 0x1007b8980, 16 bytes, inline, placed by class name
    // DirLightCsmManager::GetMaxShadowDistance() const
    float DirLightCsmManager::GetMaxShadowDistance() {
        return m_maxShadowDistance;
    }

    // 0x1008aa7a0, 16 bytes, complete-object constructor, inline, placed by class name
    // DirLightCsmManager::Config::Config(): jumps straight to the base-object constructor

    // 0x1008aae90, 16 bytes, inline, placed by class name
    // DirLightCsmManager::SetCascadeNearClip(float)
    void DirLightCsmManager::SetCascadeNearClip(float param_1) {
        m_cascadeNearClip = param_1;
    }

    // 0x1008aaea0, 16 bytes, inline, placed by class name
    // DirLightCsmManager::SetCascadeFarClip(float)
    void DirLightCsmManager::SetCascadeFarClip(float param_1) {
        m_maxShadowDistance = param_1;
    }

    // 0x1008aaeb0, 16 bytes, inline, placed by class name
    // DirLightCsmManager::SetCascadeFadeRangeScale(float)
    void DirLightCsmManager::SetCascadeFadeRangeScale(float param_1) {
        m_cascadeFadeRangeScale = param_1;
    }

    // 0x1008aaec0, 16 bytes, inline, placed by class name
    // DirLightCsmManager::SetLightCamNearClipOffset(float)
    void DirLightCsmManager::SetLightCamNearClipOffset(float param_1) {
        m_lightCamNearClipOffset = param_1;
    }

    // 0x1008aaf30, 32 bytes, inline, placed by class name
    // DirLightCsmManager::SetCascadeLightProjFit(unsigned int, LightProjectionFit)
    void DirLightCsmManager::SetCascadeLightProjFit(uint param_1, undefined4 param_3) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<LightProjectionFit, 4ul>::operator[](
            (array<LightProjectionFit, 4ul>*)&field_824, (ulong)param_1);
        *puVar1 = param_3;
    }

    // 0x1008aaf60, 64 bytes, inline, placed by class name
    // DirLightCsmManager::SetShadowStrength(float)
    void DirLightCsmManager::SetShadowStrength(float param_1) {
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 0.0;
        local_14 = 1.0;
        local_1c = param_1;
        field_848 = math::Clamp<float>(&local_1c, &local_18, &local_14);
    }

    // 0x1008ac060, 32 bytes, inline, placed by class name
    // DirLightCsmManager::GetShadowMapClip2TexMat(unsigned int) const
    void DirLightCsmManager::GetShadowMapClip2TexMat(uint param_1) {
        std::array<math::Matrix44T<float>, 4ul>::operator[]((array<math::Matrix44T<float>, 4ul>*)&field_144,
                                                            (ulong)param_1);
    }

    // 0x1008acf70, 16 bytes, inline, placed by class name
    // DirLightCsmManager::Config::GetUseableCascadeResolution() const
    int DirLightCsmManager::Config::GetUseableCascadeResolution() {
        return field_4 + -2;
    }

    // 0x1008b1190, 48 bytes, inline, placed by class name
    // DirLightCsmManager::GetShadowPassRS(render::CullMode) const
    void DirLightCsmManager::GetShadowPassRS(undefined4 param_2) {
        int iVar1;

        iVar1 = render::GetCullModeIndex(param_2);
        std::array<render::RasteriserState, 4ul>::operator[]((array<render::RasteriserState, 4ul>*)&field_400,
                                                             (long)iVar1);
    }

    // 0x1008b11c0, 32 bytes, inline, placed by class name
    // DirLightCsmManager::GetShadowMapAtlasRT()
    void DirLightCsmManager::GetShadowMapAtlasRT() {
        shared_ptr<render::RenderTargets>::operator*((shared_ptr<render::RenderTargets>*)field_672);
    }

    // 0x1008cc940, 160 bytes, base-object constructor, inline, placed by class name
    // DirLightCsmManager::Config::Config()
    void DirLightCsmManager::Config::Config() {
        uint in_EAX;
        float* in_RSI;
        undefined8 uStack_18;

        *(undefined8*)this = 4398046511120;
        field_8 = 4;
        field_28 = 4550437062836643430;
        field_36 = 5082514490663947469;
        field_44 = 4561245704520151859;
        field_52 = 3323740160;
        field_96 = 64;
        field_104 = 1065353216;
        field_108 = 256;
        field_112 = 1;
        field_116 = 0;
        uStack_18._0_4_ = in_EAX;
        (&field_56, in_RSI)->fill();
        field_72 = 4647714816512543949;
        field_12 = 4294967297;
        field_20 = 4294967297;
        uStack_18 = (ulong)(uint)uStack_18;
        (&field_80, (LightProjectionFit*)((long)&uStack_18 + 4))->fill();
    }

} // namespace jag::graphics
