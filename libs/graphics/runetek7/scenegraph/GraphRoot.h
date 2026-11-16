// libs/graphics/runetek7/scenegraph/GraphRoot.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GraphRoot {
    public:
        void GetRoot() const;
        void GetRoot();
        ~GraphRoot();
        void VisibilityTest(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&,
                            unsigned int, math::Frustum const&, int, int,
                            std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&,
                                               math::Frustum const&, int, math::AABB const&, math::OBB const&)> const&,
                            math::AABB const*, math::Frustum const*);
        GraphRoot();
        void Reset();
        void VisibilityTestMultipleViews(unsigned int, math::Frustum const*, math::AABB const*, int, int, int);
        void TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, unsigned int, int, int,
                              math::AABB const**);

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[72];
    };

    // 0x1001c0a50, 16 bytes, inline, placed by class name and debug map
    // GraphRoot::GetRoot() const
    /* GraphRoot::GetRoot() */

    void GraphRoot::GetRoot() {
        (&field_64)->get();
    }

    // 0x1001cc670, 16 bytes, complete-object destructor, inline, placed by class name
    // GraphRoot::~GraphRoot(): jumps straight to the base-object destructor

    // 0x1001cff20, 96 bytes, inline, placed by class name
    // GraphRoot::VisibilityTest(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&, unsigned int, math::Frustum const&, int, int, std::function<bool (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&)> const&, math::AABB const*, math::Frustum const*)
    /* GraphRoot::VisibilityTest(eastl::vector<std::pair<GraphEntity*,
   GraphEntityTransformData>, eastl::allocator>&, unsigned int, math::Frustum
   const&, int, int, std::function<bool (std::array<math::IntersectionType, 10ul>&,
   math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB
   const&)> const&, math::AABB const*, math::Frustum const*) */

    void GraphRoot::VisibilityTest(vector* param_1, uint param_2, Frustum* param_3, int param_4, int param_5,
                                   function* param_6, AABB* param_7, Frustum* param_8) {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<GraphNode, GraphNodeDelete>::operator->(
            (unique_ptr<GraphNode, GraphNodeDelete>*)&field_64);
        this_00->VisibilityTest(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x1001df0b0, 16 bytes, base-object destructor, inline, placed by class name
    // GraphRoot::~GraphRoot()
    void GraphRoot::~GraphRoot() {
        (&field_64)->~unique_ptr();
    }

} // namespace jag::graphics
