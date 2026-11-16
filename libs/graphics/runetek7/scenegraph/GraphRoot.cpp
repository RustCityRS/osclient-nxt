// libs/graphics/runetek7/scenegraph/GraphRoot.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GraphRoot.h"

namespace jag::graphics {
    // 0x1001c0a50: GraphRoot::GetRoot() has the same machine code as GraphRoot::GetRoot() const

    // 0x1007b0b40
    GraphRoot::GraphRoot() : math::AABB() {
        field_64.unique_ptr<true, void>();
        Reset();
    }

    // 0x1007b0ba0
    void GraphRoot::Reset() {
        GraphNode* pGVar2;
        unique_ptr<GraphNode, GraphNodeDelete> local_20;

        uint8_t* this_00 = &field_64;
        if (this_00->operator_cast_to_bool() != '\0') {
            pGVar2 = (GraphNode*)(*this_00).operator->();
            pGVar2->Reset();
        }
        pGVar2 = GraphNode::Create<>();
        local_20.unique_ptr<true, void>(pGVar2);
        *this_00 = local_20;
    }

    // 0x1007b0c90
    void GraphRoot::VisibilityTestMultipleViews(unsigned int arg1, const math::Frustum* frustum, const math::AABB* aabb,
                                                int arg4, int arg5, int arg6) {
        uint32_t in_register_0000000c;
        uint32_t in_register_0000003c;
        unsigned long uVar1;
        int in_stack_00000008;
        uint8_t local_68[40];

        AABB* this_00 = (AABB*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        AABB* local_40 = (AABB*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        this_00->Reset();
        if (0 < arg5) {
            uVar1 = (unsigned long)(unsigned int)arg5;
            do {
                local_68->GetMinimumEnclosingAABB();
                this_00->field_32 = *local_68;
                this_00->Union(this_00->field_32);
                uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
        }
        if (local_40 != nullptr) {
            this_00->Union(*local_40);
        }
        ((GraphNode*)this_00[1].field_28.operator->())
            ->VisibilityTestAABB((unsigned int)frustum, *this_00, arg6, in_stack_00000008);
    }

    // 0x1007b0d40
    void GraphRoot::TestIntersection(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                     unsigned int arg3, int arg4, int arg5, const math::AABB** arg6) {
        GraphNode::TestIntersection(*((Vector3T<float>*)(*((vector31 + 64))).operator->()), vector32, arg3, arg4, arg5,
                                    (AABB**)((unsigned long)arg6 & 4294967295));
    }

} // namespace jag::graphics
