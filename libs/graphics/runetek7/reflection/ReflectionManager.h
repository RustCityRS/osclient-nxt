// libs/graphics/runetek7/reflection/ReflectionManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ReflectionManager {
    public:
        class Config;
        Frustum GetCullFrustum() const;
        ViewTransforms GetViewTransforms() const;
        ReflectionManager(render::RenderTargetsManager& renderTargetsManager);
        ~ReflectionManager();
        void Destroy();
        void Initialise(const Config& config);
        void CreateRenderingResources(const Config& config);
        void DestroyRenderingResources();
        void Update(const ViewTransforms& viewTransforms1, const ViewTransforms& viewTransforms2);
        uint64_t GetReflectionMapAtlas() const;
        void GetReflectionMapAtlasDT() const;
        ReflectionManager* GetReflectionMapViewport() const;
        void GetReflectionMapRenderTargets(render::RenderTargetData& renderTargetData);
        unsigned long CreateRenderTargets(const Config& config);
        void AddWaterPatchAABB(const math::AABB& aabb);
        void ResetScissorRect();
        oldscape::dash3d::GridRect GetScissorRect();

    private:
        uint64_t field_0;
        uint64_t field_8;
        Frustum m_cullFrustum;
        uint8_t _unknown_120[56];
        ViewTransforms m_viewTransforms;
        uint8_t _unknown_328[72];
        ViewTransforms field_400;
        uint8_t _unknown_552[88];
        RenderTargetsManager* field_640;
        uint8_t _unknown_648[21892];
    };

    class ReflectionManager::Config {
    public:
        Config();

    private:
        uint64_t field_0;
        uint64_t field_8;
    };

    // 0x1007e8000
    ReflectionManager::Config::Config() : field_0(8796093024256), field_8(16) {}

} // namespace jag::graphics
