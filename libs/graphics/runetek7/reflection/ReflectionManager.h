// libs/graphics/runetek7/reflection/ReflectionManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ReflectionManager {
    public:
        class Config;
        GetCullFrustum() const;
        GetViewTransforms() const;
        ReflectionManager(render::RenderTargetsManager&);
        ~ReflectionManager();
        void Destroy();
        void Initialise(Config const&);
        void CreateRenderingResources(Config const&);
        void DestroyRenderingResources();
        void Update(ViewTransforms const&, ViewTransforms const&);
        GetReflectionMapAtlas() const;
        void GetReflectionMapAtlasDT() const;
        GetReflectionMapViewport() const;
        void GetReflectionMapRenderTargets(render::RenderTargetData&);
        ulong CreateRenderTargets(Config const&);
        void AddWaterPatchAABB(math::AABB const&);
        void ResetScissorRect();
        GetScissorRect();

        // data members, from how the methods use this: 22540 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        Frustum field_16;   // offset 16
        char _unknown_120[56];
        ViewTransforms field_176; // offset 176
        char _unknown_328[56];
        shared_ptr field_384;     // offset 384
        ViewTransforms field_400; // offset 400
        char _unknown_552[88];
        RenderTargetsManager* field_640; // offset 640
        char _unknown_648[21892];
    };

    class ReflectionManager::Config {
    public:
        Config();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
    };

    // 0x1007e0d50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ReflectionManager::Config::Config(): jumps straight to the base-object constructor

    // 0x1007e8000, 16 bytes, base-object constructor, inline, placed by class name
    // ReflectionManager::Config::Config()
    void ReflectionManager::Config::Config() {
        field_0 = 8796093024256;
        field_8 = 16;
    }

} // namespace jag::graphics
