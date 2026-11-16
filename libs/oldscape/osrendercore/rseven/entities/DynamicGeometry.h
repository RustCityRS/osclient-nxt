// libs/oldscape/osrendercore/rseven/entities/DynamicGeometry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class DynamicGeometry {
    public:
        // virtual methods in vtable order
        virtual ~DynamicGeometry();
        virtual void GatherDrawableElements(jag::graphics::DrawableQueue& drawableQueue,
                                            jag::graphics::RT7Core& rt7Core,
                                            const jag::math::Matrix44T<float>& matrix44,
                                            const jag::graphics::SceneViewData& sceneViewData,
                                            const jag::graphics::EffectManager& effectManager);
        virtual void Destruct();
        void UpdateModel(const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven,
                         jag::graphics::RT7Core& rt7Core);
        void Clear();
        void UpdateModelGeometry(const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven,
                                 jag::graphics::RT7Core& rt7Core, int arg3);
        void UpdateModelTransform(const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven,
                                  const dash3d::ResolvedModel& resolvedModel);
        void UpdateModelAnimationState(const dash3d::ResolvedModel& resolvedModel, jag::graphics::RT7Core& rt7Core);
        DynamicGeometry(jag::graphics::GraphNode* graphNode);

    private:
        uint8_t _unknown_8[8];
        EntityType field_16;
        uint8_t _unknown_20[1];
        uint8_t field_21;
        uint8_t _unknown_22[34];
        shared_ptr field_56;
        int field_72;
        uint8_t _unknown_76[4];
    };

    // 0x1001dfbd0
    DynamicGeometry::~DynamicGeometry() {
        field_56->~shared_ptr();
        field_40.~shared_ptr();
        field_24.~shared_ptr();
    }

    // 0x1001eb830
    DynamicGeometry::DynamicGeometry(jag::graphics::GraphNode* graphNode) : Entity(graphNode, 4294967295) {
        *(uint16_t*)&field_20 = 0;
        new (&field_24) shared_ptr();
        new (&field_40) shared_ptr();
        new (field_56) shared_ptr();
    }

} // namespace jag::oldscape::rseven
