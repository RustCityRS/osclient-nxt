// libs/graphics/runetek7/caustics/CausticsManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class CausticsManager {
    public:
        class Config;
        Frustum GetCullFrustum() const;
        ViewTransforms GetViewTransforms() const;
        float GetCausticsPlaneHeight() const;
        CausticsManager(render::RenderTargetsManager& renderTargetsManager);
        ~CausticsManager();
        void Destroy();
        void Initialise(const Config& config);
        void CreateRenderingResources(const Config& config);
        void DestroyRenderingResources();
        CausticsManager* GetCausticsMapViewport() const;
        CausticsManager* GetCausticsComputeMapViewport() const;
        void GetCausticsIntegerMapRenderTargets(render::RenderTargetData& renderTargetData);
        void GetCausticsFloatMapRenderTargets(render::RenderTargetData& renderTargetData);
        void GetCausticsComputeMapRenderTargets(render::RenderTargetData& renderTargetData);
        uint64_t CreateRenderTargets(const Config& config);
        uint64_t GetCausticsIntegerMapAtlas() const;
        uint64_t GetCausticsFloatMapAtlas() const;
        void GetCausticsComputeMapAtlas() const;
        void Update(const ViewTransforms& viewTransforms, float arg2);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
        Frustum m_cullFrustum;
        uint8_t _unknown_120[56];
        ViewTransforms m_viewTransforms;
        uint8_t _unknown_328[56];
        float m_causticsPlaneHeight;
        uint8_t _unknown_388[52];
        RenderTargetsManager* field_440;
    };

    class CausticsManager::Config {
    public:
        Config();

    private:
        uint64_t field_0;
    };

    // 0x100938150
    CausticsManager::Config::Config() : field_0(8796093023232) {}

} // namespace jag::graphics
