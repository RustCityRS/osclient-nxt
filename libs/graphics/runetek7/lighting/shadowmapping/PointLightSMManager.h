// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightSMManager {
    public:
        class Config;
        GetConfig() const;
        GetRenderToTexture();
        GetShadowCubeMapAtlasRT() const;
        GetRenderTargetsManager();
        GetShadowCubeMapAtlasPacker() const;
        GetActivePointLightSM() const;
        bool IsActive(PointLightSM*) const;
        void FreePointLightSM(PointLightSM*);
        PointLightSMManager(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper*);
        Init(Config const&);
        ulong CreateRenderingResources(unsigned int);
        void Destroy();
        void DestroyRenderingResources();
        PointLightSM* AllocPointLightSM();
        void ResetActivePointLightSMPasses();
        void RegisterTweaks(tweak::ContainerGroup&, eastl::string const&);
        void RenderDebug() const;
        ~PointLightSMManager();
        static /* 4 bytes */ m_ClearShadowMapDepthAtlas;               // = 1
        static float /* 4 bytes */ m_occludedShadowCasterFrustumScale; // = 50.0f
        static /* 1 bytes */ m_ShowShadowMapDepthAtlas;
        static /* 1 bytes */ m_showPointLightFaceCameraFrustums;
        static /* 1 bytes */ m_showShadowCastingLights;
        static /* 1 bytes */ m_showShadowCastingLightDst;
        static /* 1 bytes */ m_cullOccludedShadowCasters;
        static /* 1 bytes */ m_showOccludedShadowCasterFrustums;
        static /* 2 bytes */ m_enableForcedUpdates;

        // data members, from how the methods use this: 232 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        char _unknown_56[4];
        undefined8 field_60; // offset 60
        undefined8 field_68; // offset 68
        char _unknown_76[4];
        RenderTargetsManager* field_80;  // offset 80
        RenderToTextureHelper* field_88; // offset 88
        shared_ptr field_96;             // offset 96
        char _unknown_112[120];
    };

    class PointLightSMManager::Config {
    public:
        uint GetMinShadowCubeMapFaceResolution() const;
        int GetShadowCubeMapAtlasSlotCount(unsigned int) const;
        Config();

        // data members, from how the methods use this: 76 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        uint field_8; // offset 8
        char _unknown_12[4];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined4 field_32; // offset 32
        char _unknown_36[16];
        undefined8 field_52; // offset 52
        undefined4 field_60; // offset 60
        undefined1 field_64; // offset 64
        char _unknown_65[3];
        undefined8 field_68; // offset 68
    };

    // 0x1008ae5c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PointLightSMManager::Config::Config(): jumps straight to the base-object constructor

    // 0x1008ccfa0, 208 bytes, base-object constructor, inline, placed by class name
    // PointLightSMManager::Config::Config()
    void PointLightSMManager::Config::Config() {
        float* pfVar1;
        ulong uVar2;

        field_0 = 4;
        field_4 = 4;
        *(undefined8*)&field_8 = 68719477760;
        field_16 = 5099007165106592154;
        field_24 = 13676531350393257984;
        field_32 = 3259498496;
        field_52 = 4647714816512543949;
        field_60 = 1065353216;
        field_64 = 0;
        field_68 = 4575657221408423940;
        uVar2 = 0;
        do {
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&field_36, uVar2);
            *pfVar1 = (float)uVar2 * -0.005 + -0.0045;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
    }

    // 0x100923420, 16 bytes, complete-object destructor, inline, placed by class name
    // PointLightSMManager::~PointLightSMManager(): jumps straight to the base-object destructor

    // 0x100923430, 176 bytes, base-object destructor, inline, placed by class name
    // PointLightSMManager::~PointLightSMManager()
    void PointLightSMManager::~PointLightSMManager() {
        Destroy(this);
        (&field_224)->~stack();
        (&field_192)->~vector();
        (&field_128)->~mutex();
        (&field_120)->~unique_ptr();
        (&field_112)->~unique_ptr();
        field_96->~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x1008b01f0, 32 bytes, inline, placed by debug map only (low confidence)
    // Viewport::GetViewAspectRatio() const
    float Viewport::GetViewAspectRatio() {
        return (float)field_8 / (float)field_12;
    }

} // namespace jag::render
