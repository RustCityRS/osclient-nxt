// libs/graphics/runetek7/lighting/shadowmapping/DirLightCsmManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DirLightCsmManager {
    public:
        class Config;
        // virtual methods in vtable order
        virtual ~DirLightCsmManager();
        uint8_t* GetLightViewMat() const;
        uint8_t* GetCamViewMat() const;
        void SetCascadeSplitWeight(float arg1);
        unsigned int GetConfig() const;
        uint8_t UpdatePaused() const;
        DirLightCsmManager* GetShadowMapAtlasViewport() const;
        void GetShadowMapCascade(unsigned int arg1);
        float GetMaxShadowDistance() const;
        void GetShadowMapCascade(unsigned int arg1) const;
        DirLightCsmManager(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        void Destroy();
        uint8_t Initialise(const Config& config);
        uint32_t CreateRasterizerStates();
        void CreateSamplerStates();
        uint32_t SetShadowMapCascadeRes(unsigned int arg1, unsigned int arg2);
        void ApplyConfig(const Config& config);
        void SetSlopeBias(float arg1, float arg2);
        void DestroyRenderingResources();
        void SetCascadeCount(unsigned int arg1);
        void SetCascadeNearClip(float arg1);
        void SetCascadeFarClip(float arg1);
        void SetCascadeFadeRangeScale(float arg1);
        void SetLightCamNearClipOffset(float arg1);
        void SetCascadeBias(unsigned int arg1, float arg2);
        void SetCascadeLightProjFit(unsigned int arg1, LightProjectionFit lightProjectionFit);
        void SetShadowStrength(float arg1);
        void Update(const ViewTransforms& viewTransforms, const math::Vector3T<float>& vector3,
                    std::array<unsigned int, 4ul>& arg3, bool arg4);
        void UpdateLightViewMat(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32);
        void UpdateShadowMapClip2TexMat(const std::array<float, 4ul>& arg1);
        math::AABB GetCascadesWorldSpaceAABB() const;
        void GetShadowMapAtlasRenderTargetData(render::RenderTargetData& renderTargetData);
        void GetShaderConsts(ShaderConsts& shaderConsts) const;
        void GetShadowMapClip2TexMat(unsigned int arg1) const;
        void RenderDebug() const;
        void CreateRenderTargets(unsigned int arg1, unsigned int arg2);
        void UpdateCascadeRenderTargetData();
        void GetShadowDepthMapAtlas() const;
        uint64_t GetShadowTranslucencyMapAtlas() const;
        uint8_t CreateRenderingResources(unsigned int arg1, unsigned int arg2);
        void RegisterTweaks(tweak::ContainerGroup& containerGroup, const eastl::string& str);
        AlphaMode* GetShadowPassRS(render::CullMode cullMode) const;
        void GetShadowMapAtlasRT();

    private:
        uint8_t _unknown_8[8];
        uint8_t m_lightViewMat[96];
        uint8_t _unknown_112[432];
        uint8_t field_544;
        uint8_t _unknown_545[63];
        uint8_t field_608;
        uint8_t _unknown_609[63];
        shared_ptr field_672;
        unsigned int field_688;
        float field_692;
        uint8_t _unknown_696[48];
        unsigned int m_config;
        unsigned int field_748;
        unsigned int field_752;
        uint8_t _unknown_756[4];
        uint64_t field_760;
        uint64_t field_768;
        float m_cascadeSplitWeight;
        float m_cascadeNearClip;
        float m_maxShadowDistance;
        float field_788;
        float m_cascadeFadeRangeScale;
        float m_lightCamNearClipOffset;
        uint64_t field_800;
        uint64_t field_808;
        uint64_t field_816;
        uint64_t field_824;
        uint64_t field_832;
        uint64_t field_840;
        float field_848;
        bool field_852;
        uint8_t field_853;
        uint8_t _unknown_854[10];
        RenderTargetsManager* field_864;
        bool field_872;
        bool field_873;
        uint8_t _unknown_874[1];
        bool field_875;
        bool field_876;
        bool field_877;
        uint8_t _unknown_878[6];
    };

    class DirLightCsmManager::Config {
    public:
        Config();
        int GetUseableCascadeResolution() const;

    private:
        uint8_t _unknown_0[4];
        int field_4;
        uint32_t field_8;
        uint64_t field_12;
        uint64_t field_20;
        uint64_t field_28;
        uint64_t field_36;
        uint64_t field_44;
        uint32_t field_52;
        uint8_t _unknown_56[16];
        uint64_t field_72;
        uint8_t _unknown_80[16];
        uint64_t field_96;
        uint32_t field_104;
        uint16_t field_108;
        uint8_t _unknown_110[2];
        uint32_t field_112;
        uint8_t field_116;
        uint8_t _unknown_117[3];
    };

    // 0x1001d0870
    void DirLightCsmManager::SetCascadeSplitWeight(float arg1) {
        m_cascadeSplitWeight = arg1;
    }

    // 0x1001d0880
    unsigned int DirLightCsmManager::GetConfig() const {
        return m_headList;
    }

    // 0x1001d0890
    uint8_t DirLightCsmManager::UpdatePaused() const {
        return field_877;
    }

    // 0x1001d08d0
    DirLightCsmManager* DirLightCsmManager::GetShadowMapAtlasViewport() const {
        long in_RSI;

        new (this) render::Viewport(0, 0, *(int*)(in_RSI + 688), *(int*)(in_RSI + 688), 0.0, 1.0);
        return this;
    }

    // 0x1001d0930
    void DirLightCsmManager::GetShadowMapCascade(unsigned int arg1) {
        GetShadowMapCascade(arg1);
    }

    // 0x1007b8980
    float DirLightCsmManager::GetMaxShadowDistance() const {
        return m_maxShadowDistance;
    }

    // 0x1008aae90
    void DirLightCsmManager::SetCascadeNearClip(float arg1) {
        m_cascadeNearClip = arg1;
    }

    // 0x1008aaea0
    void DirLightCsmManager::SetCascadeFarClip(float arg1) {
        m_maxShadowDistance = arg1;
    }

    // 0x1008aaeb0
    void DirLightCsmManager::SetCascadeFadeRangeScale(float arg1) {
        m_cascadeFadeRangeScale = arg1;
    }

    // 0x1008aaec0
    void DirLightCsmManager::SetLightCamNearClipOffset(float arg1) {
        m_lightCamNearClipOffset = arg1;
    }

    // 0x1008aaf30
    void DirLightCsmManager::SetCascadeLightProjFit(unsigned int arg1, LightProjectionFit lightProjectionFit) {
        LightProjectionFit* pLVar1 = &field_824[(unsigned long)arg1];
        *pLVar1 = lightProjectionFit;
    }

    // 0x1008aaf60
    void DirLightCsmManager::SetShadowStrength(float arg1) {
        field_848 = math::Clamp<float>(arg1, 0.0, 1.0);
    }

    // 0x1008ac060
    void DirLightCsmManager::GetShadowMapClip2TexMat(unsigned int arg1) const {
        field_144[(unsigned long)arg1];
    }

    // 0x1008acf70
    int DirLightCsmManager::Config::GetUseableCascadeResolution() const {
        return field_4 - 2;
    }

    // 0x1008b1190
    AlphaMode* DirLightCsmManager::GetShadowPassRS(render::CullMode cullMode) const {
        int iVar2 = render::GetCullModeIndex(cullMode);
        return (AlphaMode*)field_400[(long)iVar2];
    }

    // 0x1008b11c0
    void DirLightCsmManager::GetShadowMapAtlasRT() {
        **field_672;
    }

    // 0x1008cc940
    DirLightCsmManager::Config::Config() {
        unsigned int in_EAX;
        uint64_t uStack_18;

        *(uint64_t*)this = 4398046511120;
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
        field_72 = 4647714816512543949;
        field_12 = 4294967297;
        field_20 = 4294967297;
        uStack_18 = (unsigned long)(unsigned int)uStack_18;
        field_80.fill(*((LightProjectionFit*)((long)&uStack_18 + 4)));
    }

} // namespace jag::graphics
