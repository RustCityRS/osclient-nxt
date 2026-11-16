// libs/graphics/runetek7/occlusion/OcclusionReprojection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class OcclusionReprojection {
    public:
        class FrameData;
        IsCPUReprojectionReady() const;
        OcclusionReprojection(OcclusionManager&, ProjectionMode);
        ~OcclusionReprojection();
        void ReprojectOcclusionBuffer(OcclusionManager const&, ThreadPool&, SceneViewData const&, SceneViewData const&,
                                      bool, SceneViewData*);
        void WriteReprojectionResult(float*, bool, SceneViewData*);
        void ReprojectAndRenderDepth(float*, float, float, float, float __vector(4) const&, float __vector(4) const&,
                                     float __vector(4) const&, float __vector(4) const&, float __vector(4) const&,
                                     float __vector(4) const&, float __vector(4) const&,
                                     float __vector(4) const&) const;
        void RenderDepth(float*, math::Vector4T<float> const&) const;

        // data members, from how the methods use this: 1536 bytes
        OcclusionManager* field_0;         // offset 0
        undefined1 m_cPUReprojectionReady; // offset 8
        char _unknown_9[1511];
        uint field_1520; // offset 1520
        char _unknown_1524[4];
        int field_1528; // offset 1528
        char _unknown_1532[4];
    };

    class OcclusionReprojection::FrameData {
    public:
        FrameData();
        ~FrameData();

        // data members, from how the methods use this: 748 bytes
        char _unknown_0[64];
        SceneViewData field_64; // offset 64
        char _unknown_728[8];
        undefined1 field_736; // offset 736
        char _unknown_737[3];
        undefined4 field_740; // offset 740
        char _unknown_744[4];
    };

    // 0x10082ed40, 16 bytes, complete-object constructor, inline, placed by class name
    // OcclusionReprojection::FrameData::FrameData(): jumps straight to the base-object constructor

    // 0x10082ed50, 16 bytes, complete-object destructor, inline, placed by class name
    // OcclusionReprojection::FrameData::~FrameData(): jumps straight to the base-object destructor

    // 0x10082ed60, 128 bytes, base-object constructor, inline, placed by class name
    // OcclusionReprojection::FrameData::FrameData()
    void OcclusionReprojection::FrameData::FrameData() {
        new (this) Array<float, eastl::allocator>();
        new (&field_24) Array<float, eastl::allocator>();
        new (&field_48) std::future<void>();
        new (field_64) SceneViewData();
        field_736 = 0;
        field_740 = 2139095039;
    }

    // 0x10082ede0, 64 bytes, base-object destructor, inline, placed by class name
    // OcclusionReprojection::FrameData::~FrameData()
    void OcclusionReprojection::FrameData::~FrameData() {
        field_64->~SceneViewData();
        (&field_48)->~future();
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::graphics
