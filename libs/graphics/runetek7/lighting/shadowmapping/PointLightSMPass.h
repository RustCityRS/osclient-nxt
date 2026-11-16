// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightSMPass : public ShadowPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PointLightSMPass();
        virtual void PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        PointLightSMPass(PointLightSM*, render::CubeFace, ThreadPool*);
        void Reset();
        UpdateLightViewMatrices(float&, float&, unsigned long&, unsigned long&, math::AABB&, math::AABB&,
                                math::Matrix44T<float> const&, DrawableQueue const&);

        // data members, from how the methods use this: 6516656 bytes, the first 769 are ShadowPass
        char _unknown_769[8];
        bool field_777;       // offset 777
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        int field_780; // offset 780
        char _unknown_784[16];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_800; // offset 800
        char _unknown_808[8];
        ViewTransforms field_816; // offset 816
        char _unknown_968[56];
        OBB field_1024; // offset 1024
        char _unknown_1096[8];
        Sphere field_1104; // offset 1104
        char _unknown_1124[4];
        undefined8 field_1128; // offset 1128
        char _unknown_1136[6515520];
    };

    // 0x1008ae3c0, 32 bytes, inline, placed by class name and debug map
    // PointLightSMPass::Reset()
    void PointLightSMPass::Reset() {
        *(undefined8*)(field_1104 + 16) = 4294967295;
        field_1128 = 4294967295;
    }

} // namespace jag::graphics
