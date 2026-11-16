// libs/graphics/runetek7/effects/skybox/SkyBoxManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SkyBoxManager {
    public:
        uint8_t* GetSkyBoxes();
        SkyBoxManager(RT7Core& rt7Core);
        void Destroy();
        void DestroyRenderingResources();
        void MainLogic();
        uint64_t GetSkyBoxTexture(int arg1);
        void SetViewTransforms(const ViewTransforms& viewTransforms);
        void Render(unsigned int arg1, int arg2, EffectManager& effectManager, const render::Viewport& viewport,
                    std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
                                       int, math::AABB const&, math::OBB const&)>& callback,
                    GraphRoot* graphRoot);
        void CreateRenderingResources();
        auto RegisterSkyBox(int arg1);
        void DestroySkyBox(shared_ptr<SkyBox> skyBox);
        void UnregisterRenderTargets();
        ~SkyBoxManager();

    private:
        RT7Core* field_0;
        uint8_t _unknown_8[8];
        ViewTransforms field_16;
        uint8_t _unknown_168[56];
        Frustum field_224;
        uint8_t _unknown_328[56];
        Renderer field_384;
        uint8_t _unknown_472[6248];
    };

    // 0x1003dd390
    uint8_t* SkyBoxManager::GetSkyBoxes() {
        return &field_6712;
    }

    // 0x100928ea0
    bool SkyBoxManager::DestroySkyBox(shared_ptr<SkyBox>)::$_8::operator()(const SkyBoxEntry& skyBoxEntry) const {
        long lVar1 = skyBoxEntry.field_8.end();
        long lVar2 = (*(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>**)this)->end();
        return lVar1 == lVar2;
    }

    // 0x100990df0
    SkyBoxManager::~SkyBoxManager() {
        field_6712.~vector();
        field_384->~Renderer();
    }

} // namespace jag::graphics
