// libs/game/runetek5/scene/PointLightShadowRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LightShadowImportanceKeyGenerator {
    public:
        LightShadowImportanceKeyGenerator(float arg1, float arg2, float arg3);
        unsigned long CalculateShadowCastingImportanceKey(const ViewTransforms& viewTransforms,
                                                          const math::Vector3T<float>& vector3,
                                                          const math::Sphere& sphere, float arg4);
        unsigned long CalculateShadowCastingImportanceKey(const math::Vector3T<float>& vector3,
                                                          const math::Sphere& sphere, float arg3);

    private:
        float field_0;
        float field_4;
        float field_8;
        uint8_t _unknown_12[4];
    };

    class PointLightShadowRenderer {
    public:
        class PointLightSMJobData;
        PointLightShadowRenderer(
            graphics::RT7Core& rt7Core, graphics::Renderer& renderer,
            graphics::PointLightShadowPassVisTestFunctor& pointLightShadowPassVisTestFunctor,
            std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                               math::AABB const&, math::OBB const&)>& callback,
            eastl::vector<VisibleShadowCastingLightInfo>& visibleShadowCastingLightInfos,
            math::Vector3T<float>& vector3);
        void RenderPointLightShadows(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                     const graphics::SceneViewData& sceneViewData, graphics::GraphRoot* graphRoot);
        void CullOccludedShadowCasters(
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>& pairs);

    private:
        RT7Core* field_0;
        Renderer* field_8;
        PointLightShadowPassVisTestFunctor* field_16;
        function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                      math::AABB const&, math::OBB const&)>* field_24;
        vector<VisibleShadowCastingLightInfo>* field_32;
        Vector3T<float>* field_40;
    };

    class PointLightShadowRenderer::PointLightSMJobData {
    public:
        PointLightSMJobData();
        ~PointLightSMJobData();
        PointLightSMJobData(PointLightSMJobData&& pointLightSMJobData);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[4232];
        uint32_t field_4240;
        uint16_t field_4244;
        uint8_t _unknown_4246[6];
    };

    // 0x1001defc0
    LightShadowImportanceKeyGenerator::LightShadowImportanceKeyGenerator(float arg1, float arg2, float arg3)
        : field_0(arg1), field_4(arg2), field_8(arg3) {
        if (1.0 < arg2 + arg1 + arg3) {
            LogAssert("(dstWeight + radiusWeight + intensityWeight) <= 1.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "PointLightShadowRenderer.h",
                      111, "The sum of all weights must be <= 1.0f for a correct weight average");
        }
    }

    // 0x1001df900
    PointLightShadowRenderer::PointLightShadowRenderer(
        graphics::RT7Core& rt7Core, graphics::Renderer& renderer,
        graphics::PointLightShadowPassVisTestFunctor& pointLightShadowPassVisTestFunctor,
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                           math::AABB const&, math::OBB const&)>& callback,
        eastl::vector<VisibleShadowCastingLightInfo>& visibleShadowCastingLightInfos, math::Vector3T<float>& vector3)
        : field_0(rt7Core), field_8(renderer), field_16(pointLightShadowPassVisTestFunctor), field_24(callback),
          field_32(visibleShadowCastingLightInfos), field_40(vector3) {}

    // 0x10047f970
    PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData() : field_0(0), field_4244(0), field_4240(0) {}

    // 0x10047fbf0
    PointLightShadowRenderer::PointLightSMJobData::~PointLightSMJobData() {
        field_4048.~array();
        field_16.~array();
    }

    // 0x10048c8f0
    PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData(
        PointLightShadowRenderer::PointLightSMJobData&& pointLightSMJobData)
        : field_0(pointLightSMJobData.field_0), field_16(pointLightSMJobData.field_16),
          field_4048(pointLightSMJobData.field_4048), field_4244(pointLightSMJobData.field_4244),
          field_4240(pointLightSMJobData.field_4240) {}

    // 0x10048ce70
    uint64_t PointLightShadowRenderer::CullOccludedShadowCasters(
        eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>&)::$_10::
    operator()(std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData> const& arg1) const {
        Layout* this_00;
        long* plVar2;
        long* plVar3;
        Frustum local_178;
        Frustum local_d8;
        uint8_t local_38[8];

        bool cVar1 = ((arg1 + 32))->IsValid();
        if (cVar1) {
            _memcpy(&local_d8, (Frustum*)(arg1 + 32), 160);
            local_d8.Resize(graphics::PointLightSMManager::m_occludedShadowCasterFrustumScale);
            this_00 = *(Layout**)this;
            plVar2 = (long*)this_00->HeapBeginPtr();
            plVar3 = (long*)this_00->end();
            if (plVar2 != plVar3) {
                do {
                    _memcpy(&local_178, plVar2 + 4, 160);
                    if (((*plVar2 != *(long*)arg1) && (cVar1 = local_178.IsValid(), cVar1)) &&
                        (cVar1 = local_178.IsInside(local_d8), cVar1)) {
                        if ((graphics::PointLightSMManager::m_showOccludedShadowCasterFrustums != '\0') &&
                            (plVar2 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar2 != nullptr)) {
                            new (local_38) oldscape::sidebars::SideBarData(-16776961, 2);
                            (**(void (**)(...))(*plVar2 + 96))(plVar2, &local_d8, PTR_IDENTITY_100ee6730,
                                                               (SideBarData*)local_38);
                        }
                        return 1;
                    }
                    plVar2 = plVar2 + 24;
                } while (plVar2 != plVar3);
            }
        }
        return 0;
    }

} // namespace jag::game
