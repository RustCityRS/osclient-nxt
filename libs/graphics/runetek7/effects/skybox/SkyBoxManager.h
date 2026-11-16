// libs/graphics/runetek7/effects/skybox/SkyBoxManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SkyBoxManager {
    public:
        GetSkyBoxes();
        SkyBoxManager(RT7Core&);
        void Destroy();
        void DestroyRenderingResources();
        void MainLogic();
        GetSkyBoxTexture(int);
        void SetViewTransforms(ViewTransforms const&);
        void Render(unsigned int, int, EffectManager&, render::Viewport const&,
                    std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
                                       int, math::AABB const&, math::OBB const&)>&,
                    GraphRoot*);
        CreateRenderingResources();
        RegisterSkyBox(int);
        void DestroySkyBox(shared_ptr<SkyBox>);
        void UnregisterRenderTargets();
        ~SkyBoxManager();

        // data members, from how the methods use this: 6515856 bytes
        RT7Core* field_0; // offset 0
        char _unknown_8[8];
        ViewTransforms field_16; // offset 16
        char _unknown_168[56];
        Frustum field_224; // offset 224
        char _unknown_328[6515528];
    };

    // 0x1003dd390, 16 bytes, inline, placed by class name and debug map
    // SkyBoxManager::GetSkyBoxes()
    undefined1* SkyBoxManager::GetSkyBoxes() {
        return &field_6712;
    }

    // 0x100928ea0, 48 bytes, inline, placed by class name
    // SkyBoxManager::DestroySkyBox(shared_ptr<SkyBox>)::$_8::operator()(SkyBoxEntry const&) const
    /* SkyBoxManager::DestroySkyBox(shared_ptr<SkyBox>)::$_8::TEMPNAMEPLACEHOLDERVALUE(SkyBoxEntry
   const&) const */

    bool SkyBoxManager::DestroySkyBox(shared_ptr<SkyBox>)::$_8::operator()(SkyBoxEntry* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = (&param_1->field_8)->end();
        lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
            *(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>**)this);
        return lVar1 == lVar2;
    }

    // 0x10097ee20, 16 bytes, complete-object destructor, inline, placed by class name
    // SkyBoxManager::~SkyBoxManager(): jumps straight to the base-object destructor

    // 0x100990df0, 48 bytes, base-object destructor, inline, placed by class name
    // SkyBoxManager::~SkyBoxManager()
    void SkyBoxManager::~SkyBoxManager() {
        (&field_6712)->~vector();
        (&field_384)->~Renderer();
    }

} // namespace jag::graphics
