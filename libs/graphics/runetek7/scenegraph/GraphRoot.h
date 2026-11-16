// libs/graphics/runetek7/scenegraph/GraphRoot.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GraphRoot {
    public:
        void GetRoot() const;
        void GetRoot();
        ~GraphRoot();
        void VisibilityTest(
            eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs, unsigned int arg2,
            const math::Frustum& frustum1, int arg4, int arg5,
            std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                               math::AABB const&, math::OBB const&)> const& callback,
            const math::AABB* aabb, const math::Frustum* frustum2);
        GraphRoot();
        void Reset();
        void VisibilityTestMultipleViews(unsigned int arg1, const math::Frustum* frustum, const math::AABB* aabb,
                                         int arg4, int arg5, int arg6);
        void TestIntersection(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                              unsigned int arg3, int arg4, int arg5, const math::AABB** arg6);

        uint8_t _unknown_0[72];
    };

    // 0x1001c0a50
    void GraphRoot::GetRoot() const {
        field_64.get();
    }

    // 0x1001cff20
    void GraphRoot::VisibilityTest(
        eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs, unsigned int arg2,
        const math::Frustum& frustum1, int arg4, int arg5,
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                           math::AABB const&, math::OBB const&)> const& callback,
        const math::AABB* aabb, const math::Frustum* frustum2) {
        ((GraphNode*)field_64.operator->())
            ->VisibilityTest(pairs, arg2, frustum1, arg4, arg5, callback, aabb, frustum2);
    }

    // 0x1001df0b0
    GraphRoot::~GraphRoot() {
        field_64.~unique_ptr();
    }

} // namespace jag::graphics
