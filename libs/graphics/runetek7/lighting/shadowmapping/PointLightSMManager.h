// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightSMManager {
    public:
        class Config;
        void GetConfig() const;
        RenderToTextureHelper* GetRenderToTexture();
        shared_ptr GetShadowCubeMapAtlasRT() const;
        RenderTargetsManager* GetRenderTargetsManager();
        uint8_t* GetShadowCubeMapAtlasPacker() const;
        uint8_t* GetActivePointLightSM() const;
        bool IsActive(PointLightSM* pointLightSM) const;
        void FreePointLightSM(PointLightSM* pointLightSM);
        PointLightSMManager(render::RenderTargetsManager* renderTargetsManager,
                            graphicutils::RenderToTextureHelper* renderToTextureHelper);
        uint32_t Init(const Config& config);
        uint32_t CreateRenderingResources(unsigned int arg1);
        void Destroy();
        void DestroyRenderingResources();
        PointLightSM* AllocPointLightSM();
        void ResetActivePointLightSMPasses();
        void RegisterTweaks(tweak::ContainerGroup& containerGroup, const eastl::string& str);
        void RenderDebug() const;
        ~PointLightSMManager();
        static int32_t m_ClearShadowMapDepthAtlas;       // = 1
        static float m_occludedShadowCasterFrustumScale; // = 50.0f
        static bool m_ShowShadowMapDepthAtlas;
        static bool m_showPointLightFaceCameraFrustums;
        static bool m_showShadowCastingLights;
        static bool m_showShadowCastingLightDst;
        static bool m_cullOccludedShadowCasters;
        static bool m_showOccludedShadowCasterFrustums;
        static bool m_enableForcedUpdates;

    private:
        int field_0;
        int field_4;
        unsigned int field_8;
        uint32_t field_12;
        uint64_t field_16;
        uint64_t field_24;
        uint32_t field_32;
        uint32_t field_36;
        uint64_t field_40;
        uint64_t field_48;
        uint8_t _unknown_56[4];
        uint32_t field_60;
        uint8_t field_64;
        uint8_t field_65[3];
        uint64_t field_68;
        uint8_t _unknown_76[4];
        RenderTargetsManager* m_pRenderTargetsManager;
        RenderToTextureHelper* m_pRenderToTexture;
        shared_ptr m_shadowCubeMapAtlasRT;
        uint8_t _unknown_112[120];
    };

    class PointLightSMManager::Config {
    public:
        unsigned int GetMinShadowCubeMapFaceResolution() const;
        int GetShadowCubeMapAtlasSlotCount(unsigned int arg1) const;
        Config();

    private:
        int field_0;
        int field_4;
        unsigned int field_8;
        uint8_t _unknown_12[4];
        uint64_t field_16;
        uint64_t field_24;
        uint32_t field_32;
        uint8_t _unknown_36[16];
        uint64_t field_52;
        uint32_t field_60;
        uint8_t field_64;
        uint8_t _unknown_65[3];
        uint64_t field_68;
    };

    // 0x1008ccfa0
    PointLightSMManager::Config::Config() : field_0(4), field_4(4) {
        float* pfVar1;

        *(uint64_t*)&field_8 = 68719477760;
        field_16 = 5099007165106592154;
        field_24 = 13676531350393257984;
        field_32 = 3259498496;
        field_52 = 4647714816512543949;
        field_60 = 1065353216;
        field_64 = 0;
        field_68 = 4575657221408423940;
        unsigned long arg1 = 0;
        do {
            pfVar1 = &field_36[arg1];
            *pfVar1 = (float)arg1 * -0.005 - 0.0045;
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x100923430
    PointLightSMManager::~PointLightSMManager() {
        Destroy();
        field_224.~stack();
        field_192.~vector();
        (&field_128)->~mutex();
        field_120.~unique_ptr();
        field_112.~unique_ptr();
        m_shadowCubeMapAtlasRT->~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x1008b01f0
    float Viewport::GetViewAspectRatio() const {
        return (float)field_8 / (float)field_12;
    }

} // namespace jag::render
