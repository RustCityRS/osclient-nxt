// libs/oldscape/osrendercore/rseven/entities/DynamicGeometry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class DynamicGeometry {
    public:
        // virtual methods in vtable order
        virtual ~DynamicGeometry();
        virtual void GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&,
                                            jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&,
                                            jag::graphics::EffectManager const&);
        virtual void Destruct();
        void UpdateModel(RenderState::ModelSubmissionRSeven const&, jag::graphics::RT7Core&);
        void Clear();
        void UpdateModelGeometry(RenderState::ModelSubmissionRSeven const&, jag::graphics::RT7Core&, int);
        void UpdateModelTransform(RenderState::ModelSubmissionRSeven const&, dash3d::ResolvedModel const&);
        void UpdateModelAnimationState(dash3d::ResolvedModel const&, jag::graphics::RT7Core&);
        DynamicGeometry(jag::graphics::GraphNode*);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined4 field_16; // offset 16
        char _unknown_20[1];
        byte field_21; // offset 21
        char _unknown_22[2];
        shared_ptr field_24; // offset 24
        shared_ptr field_40; // offset 40
        shared_ptr field_56; // offset 56
        int field_72;        // offset 72
        char _unknown_76[4];
    };

    // 0x1001d2090, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DynamicGeometry::~DynamicGeometry(): jumps straight to the base-object destructor

    // 0x1001d20a0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // DynamicGeometry::~DynamicGeometry()
    void DynamicGeometry::~DynamicGeometry() {
        ~DynamicGeometry(this);
        operator_delete(this);
    }

    // 0x1001dfbd0, 64 bytes, base-object destructor, inline, placed by class name
    // DynamicGeometry::~DynamicGeometry()
    void DynamicGeometry::~DynamicGeometry() {
        field_0 = &PTR__DynamicGeometry_100ef6bb0;
        field_56->~shared_ptr();
        field_40->~shared_ptr();
        field_24->~shared_ptr();
        ~Entity();
    }

    // 0x1001eb820, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicGeometry::DynamicGeometry(jag::graphics::GraphNode*): jumps straight to the base-object constructor

    // 0x1001eb830, 128 bytes, base-object constructor, inline, placed by class name
    // DynamicGeometry::DynamicGeometry(jag::graphics::GraphNode*)
    void DynamicGeometry::DynamicGeometry(GraphNode* param_1) {
        new (this) Entity(param_1, 4294967295);
        field_0 = &PTR__DynamicGeometry_100ef6bb0;
        *(undefined2*)&field_20 = 0;
        new (field_24, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_40, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_56, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::oldscape::rseven
