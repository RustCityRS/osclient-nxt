// libs/graphics/runetek7/caustics/CausticsManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class CausticsManager {
    public:
        class Config;
        Frustum GetCullFrustum() const;
        ViewTransforms GetViewTransforms() const;
        float GetCausticsPlaneHeight() const;
        CausticsManager(render::RenderTargetsManager&);
        ~CausticsManager();
        void Destroy();
        void Initialise(Config const&);
        void CreateRenderingResources(Config const&);
        void DestroyRenderingResources();
        GetCausticsMapViewport() const;
        GetCausticsComputeMapViewport() const;
        void GetCausticsIntegerMapRenderTargets(render::RenderTargetData&);
        void GetCausticsFloatMapRenderTargets(render::RenderTargetData&);
        void GetCausticsComputeMapRenderTargets(render::RenderTargetData&);
        CreateRenderTargets(Config const&);
        GetCausticsIntegerMapAtlas() const;
        GetCausticsFloatMapAtlas() const;
        GetCausticsComputeMapAtlas() const;
        void Update(ViewTransforms const&, float);

        // data members, from how the methods use this: 448 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
        Frustum m_cullFrustum; // offset 16
        char _unknown_120[56];
        ViewTransforms m_viewTransforms; // offset 176
        char _unknown_328[56];
        float m_causticsPlaneHeight; // offset 384
        char _unknown_388[4];
        shared_ptr field_392;            // offset 392
        shared_ptr field_408;            // offset 408
        shared_ptr field_424;            // offset 424
        RenderTargetsManager* field_440; // offset 440
    };

    class CausticsManager::Config {
    public:
        Config();

        // data members, from how the methods use this: 8 bytes
        undefined8 field_0; // offset 0
    };

    // 0x10092d090, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CausticsManager::Config::Config(): jumps straight to the base-object constructor

    // 0x100938150, 32 bytes, base-object constructor, inline, placed by class name
    // CausticsManager::Config::Config()
    void CausticsManager::Config::Config() {
        field_0 = 8796093023232;
    }

} // namespace jag::graphics
