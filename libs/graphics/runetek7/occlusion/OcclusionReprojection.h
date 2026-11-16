// libs/graphics/runetek7/occlusion/OcclusionReprojection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class OcclusionReprojection {
    public:
        class FrameData;
        bool IsCPUReprojectionReady() const;
        OcclusionReprojection(OcclusionManager& occlusionManager, ProjectionMode projectionMode);
        ~OcclusionReprojection();
        void ReprojectOcclusionBuffer(const OcclusionManager& occlusionManager, ThreadPool& threadPool,
                                      const SceneViewData& sceneViewData1, const SceneViewData& sceneViewData2,
                                      bool arg5, SceneViewData* sceneViewData3);
        void WriteReprojectionResult(float* arg1, bool arg2, SceneViewData* sceneViewData);
        void ReprojectAndRenderDepth(float* arg1, float arg2, float arg3, float arg4, const float __vector(4) & arg5,
                                     const float __vector(4) & arg6, const float __vector(4) & arg7,
                                     const float __vector(4) & arg8, const float __vector(4) & arg9,
                                     const float __vector(4) & arg10, const float __vector(4) & arg11,
                                     const float __vector(4) & arg12) const;
        void RenderDepth(float* arg1, const math::Vector4T<float>& vector4) const;

    private:
        OcclusionManager* field_0;
        uint8_t m_cPUReprojectionReady;
        uint8_t _unknown_9[1511];
        unsigned int field_1520;
        uint8_t _unknown_1524[4];
        ProjectionMode field_1528;
        uint8_t _unknown_1532[4];
    };

    class OcclusionReprojection::FrameData {
    public:
        FrameData();
        ~FrameData();

    private:
        uint8_t _unknown_0[64];
        SceneViewData field_64;
        uint8_t _unknown_728[8];
        uint8_t field_736;
        uint8_t _unknown_737[3];
        uint32_t field_740;
        uint8_t _unknown_744[4];
    };

    // 0x10082ed60
    OcclusionReprojection::FrameData::FrameData() : Array<float>(), field_736(0), field_740(2139095039) {}

    // 0x10082ede0
    OcclusionReprojection::FrameData::~FrameData() {
        field_64->~SceneViewData();
        (&field_48)->~future();
        field_24.~Array();
    }

} // namespace jag::graphics
