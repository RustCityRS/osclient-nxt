// libs/game/runetek5/scene/PointLightShadowRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LightShadowImportanceKeyGenerator {
    public:
        LightShadowImportanceKeyGenerator(float, float, float);
        ulong CalculateShadowCastingImportanceKey(ViewTransforms const&, math::Vector3T<float> const&,
                                                  math::Sphere const&, float);
        ulong CalculateShadowCastingImportanceKey(math::Vector3T<float> const&, math::Sphere const&, float);

        // data members, from how the methods use this: 16 bytes
        float field_0; // offset 0
        float field_4; // offset 4
        float field_8; // offset 8
        char _unknown_12[4];
    };

    class PointLightShadowRenderer {
    public:
        class PointLightSMJobData;
        PointLightShadowRenderer(graphics::RT7Core&, graphics::Renderer&, graphics::PointLightShadowPassVisTestFunctor&,
                                 std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&,
                                                    math::Frustum const&, int, math::AABB const&, math::OBB const&)>&,
                                 eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>&,
                                 math::Vector3T<float>&);
        void RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                     graphics::GraphRoot*);
        void CullOccludedShadowCasters(
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>&);

        // data members, from how the methods use this: 48 bytes
        RT7Core* field_0;                             // offset 0
        Renderer* field_8;                            // offset 8
        PointLightShadowPassVisTestFunctor* field_16; // offset 16
        function* field_24;                           // offset 24
        vector* field_32;                             // offset 32
        Vector3T* field_40;                           // offset 40
    };

    class PointLightShadowRenderer::PointLightSMJobData {
    public:
        PointLightSMJobData();
        ~PointLightSMJobData();
        PointLightSMJobData(PointLightSMJobData&&);

        // data members, from how the methods use this: 4252 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[4232];
        undefined4 field_4240; // offset 4240
        undefined2 field_4244; // offset 4244
        char _unknown_4246[6];
    };

    // 0x1001cc520, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LightShadowImportanceKeyGenerator::LightShadowImportanceKeyGenerator(float, float, float): jumps straight to the base-object constructor

    // 0x1001d09a0, 32 bytes, complete-object constructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightShadowRenderer(graphics::RT7Core&, graphics::Renderer&, graphics::PointLightShadowPassVisTestFunctor&, std::function<bool (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&)>&, eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>&, math::Vector3T<float>&)
    /* PointLightShadowRenderer::PointLightShadowRenderer(graphics::RT7Core&,
   graphics::Renderer&, graphics::PointLightShadowPassVisTestFunctor&, std::function<bool
   (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
   int, math::AABB const&, math::OBB const&)>&,
   eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>&,
   math::Vector3T<float>&) */

    void PointLightShadowRenderer::PointLightShadowRenderer(RT7Core* param_1, Renderer* param_2,
                                                            PointLightShadowPassVisTestFunctor* param_3,
                                                            function* param_4, vector* param_5, Vector3T* param_6) {
        PointLightShadowRenderer(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x1001defc0, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // LightShadowImportanceKeyGenerator::LightShadowImportanceKeyGenerator(float, float, float)
    void LightShadowImportanceKeyGenerator::LightShadowImportanceKeyGenerator(float param_1, float param_2,
                                                                              float param_3) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        if (1.0 < param_2 + param_1 + param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("(dstWeight + radiusWeight + intensityWeight) <= 1.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "PointLightShadowRenderer.h",
                      111, "The sum of all weights must be <= 1.0f for a correct weight average");
        }
    }

    // 0x1001df900, 48 bytes, base-object constructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightShadowRenderer(graphics::RT7Core&, graphics::Renderer&, graphics::PointLightShadowPassVisTestFunctor&, std::function<bool (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&)>&, eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>&, math::Vector3T<float>&)
    /* PointLightShadowRenderer::PointLightShadowRenderer(graphics::RT7Core&,
   graphics::Renderer&, graphics::PointLightShadowPassVisTestFunctor&, std::function<bool
   (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
   int, math::AABB const&, math::OBB const&)>&,
   eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>&,
   math::Vector3T<float>&) */

    void PointLightShadowRenderer::PointLightShadowRenderer(RT7Core* param_1, Renderer* param_2,
                                                            PointLightShadowPassVisTestFunctor* param_3,
                                                            function* param_4, vector* param_5, Vector3T* param_6) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        field_24 = param_4;
        field_32 = param_5;
        field_40 = param_6;
    }

    // 0x10047dc60, 16 bytes, complete-object constructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData(): jumps straight to the base-object constructor

    // 0x10047e100, 16 bytes, complete-object destructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightSMJobData::~PointLightSMJobData(): jumps straight to the base-object destructor

    // 0x10047f970, 96 bytes, base-object constructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData()
    void PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData() {
        field_0 = 0;
        new (&field_16) std::array<graphics::SceneViewData, 6ul>();
        new (&field_4048) std::array<
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>,
            6ul>();
        field_4244 = 0;
        field_4240 = 0;
    }

    // 0x10047fbf0, 48 bytes, base-object destructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightSMJobData::~PointLightSMJobData()
    void PointLightShadowRenderer::PointLightSMJobData::~PointLightSMJobData() {
        (&field_4048)->~array();
        (&field_16)->~array();
    }

    // 0x10048c8d0, 16 bytes, complete-object constructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData(PointLightShadowRenderer::PointLightSMJobData&&): jumps straight to the base-object constructor

    // 0x10048c8f0, 96 bytes, base-object constructor, inline, placed by class name
    // PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData(PointLightShadowRenderer::PointLightSMJobData&&)
    void PointLightShadowRenderer::PointLightSMJobData::PointLightSMJobData(PointLightSMJobData* param_1) {
        field_0 = param_1->field_0;
        new (&field_16, (array*)&param_1->field_16) std::array<graphics::SceneViewData, 6ul>();
        new (&field_4048, (array*)&param_1->field_4048) std::array<
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>,
            6ul>();
        field_4244 = param_1->field_4244;
        field_4240 = param_1->field_4240;
    }

    // 0x10048ce70, 320 bytes, inline, placed by class name
    // PointLightShadowRenderer::CullOccludedShadowCasters(eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>&)::$_10::operator()(std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData> const&) const
    /* PointLightShadowRenderer::CullOccludedShadowCasters(eastl::vector<std::pair<graphics::GraphEntity*,
   graphics::GraphEntityTransformData>,
   eastl::allocator>&)::$_10::TEMPNAMEPLACEHOLDERVALUE(std::pair<graphics::GraphEntity*,
   graphics::GraphEntityTransformData> const&) const */

    undefined8 PointLightShadowRenderer::CullOccludedShadowCasters(
        eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>,
                      eastl::allocator>&)::$_10::operator()(pair* param_1) {
        Layout* this_00;
        char cVar1;
        long* plVar2;
        long* plVar3;
        Frustum local_178;
        Frustum local_d8;
        undefined1 local_38[8];

        cVar1 = ((param_1 + 32))->IsValid();
        if (cVar1 != '\0') {
            _memcpy(&local_d8, (Frustum*)(param_1 + 32), 160);
            local_d8.Resize(graphics::PointLightSMManager::m_occludedShadowCasterFrustumScale);
            this_00 = *(Layout**)this;
            plVar2 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            plVar3 = (long*)this_00->end();
            if (plVar2 != plVar3) {
                do {
                    _memcpy(&local_178, plVar2 + 4, 160);
                    if (((*plVar2 != *(long*)param_1) && (cVar1 = local_178.IsValid(), cVar1 != '\0')) &&
                        (cVar1 = local_178.IsInside(&local_d8), cVar1 != '\0')) {
                        if (graphics::PointLightSMManager::m_showOccludedShadowCasterFrustums != '\0') {
                            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar2 != (long*)0) {
                                new (local_38) oldscape::sidebars::SideBarData(-16776961, 2);
                                (**(code**)(*plVar2 + 96))(plVar2, &local_d8, PTR_IDENTITY_100ee6730,
                                                           (SideBarData*)local_38);
                            }
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
