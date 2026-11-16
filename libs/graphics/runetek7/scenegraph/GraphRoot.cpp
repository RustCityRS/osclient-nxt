// libs/graphics/runetek7/scenegraph/GraphRoot.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GraphRoot.h"

namespace jag::graphics {
    // 0x1001c0a50: the linker folded this into GraphRoot::GetRoot() const, which has identical code
    GraphRoot::GetRoot();

    // 0x1007b0b40, 80 bytes, base-object constructor, placed by class name and debug map
    // GraphRoot::GraphRoot()
    void GraphRoot::GraphRoot() {
        new (this) math::AABB();
        new (&field_32) math::AABB();
        std::unique_ptr<GraphNode, GraphNodeDelete>::unique_ptr<true, void>(
            (unique_ptr<GraphNode, GraphNodeDelete>*)&field_64);
        Reset(this);
    }

    // 0x1007b0ba0, 96 bytes, placed by class name and debug map
    // GraphRoot::Reset()
    void GraphRoot::Reset() {
        GraphNode* pGVar2;
        undefined1* this_00;
        unique_ptr<GraphNode, GraphNodeDelete> local_20[8];

        this_00 = &field_64;
        pGVar2 = (GraphNode*)this_00;
        if (this_00->operator_cast_to_bool()) {
            pGVar2 = (GraphNode*)std::unique_ptr<GraphNode, GraphNodeDelete>::operator->(
                (unique_ptr<GraphNode, GraphNodeDelete>*)this_00);
            pGVar2->Reset();
        }
        pGVar2 = GraphNode::Create<>(pGVar2);
        std::unique_ptr<GraphNode, GraphNodeDelete>::unique_ptr<true, void>(local_20, pGVar2);
        std::unique_ptr<GraphNode, GraphNodeDelete>::operator=((unique_ptr<GraphNode, GraphNodeDelete>*)this_00,
                                                               (unique_ptr*)local_20);
        std::unique_ptr<GraphNode, GraphNodeDelete>::~unique_ptr(local_20);
    }

    // 0x1007b0c10, 16 bytes, complete-object constructor, placed by class name and debug map
    // GraphRoot::GraphRoot(): jumps straight to the base-object constructor

    // 0x1007b0c90, 176 bytes, placed by class name and debug map
    // GraphRoot::VisibilityTestMultipleViews(unsigned int, math::Frustum const*, math::AABB const*, int, int, int)
    void GraphRoot::VisibilityTestMultipleViews(uint param_1, Frustum* param_2, AABB* param_3, int param_4, int param_5,
                                                int param_6) {
        GraphNode* this_00;
        ulong uVar1;
        undefined1 local_68[40];

        Reset();
        if (0 < param_4) {
            uVar1 = (ulong)(uint)param_4;
            do {
                local_68->GetMinimumEnclosingAABB();
                math::AABB::operator=((AABB*)&field_32, (AABB*)local_68);
                Union((AABB*)&field_32);
                uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
        }
        if (param_3 != (AABB*)0) {
            Union(param_3);
        }
        this_00 = (GraphNode*)std::unique_ptr<GraphNode, GraphNodeDelete>::operator->(
            (unique_ptr<GraphNode, GraphNodeDelete>*)&field_64);
        this_00->VisibilityTestAABB(param_1, this, param_5, param_6);
    }

    // 0x1007b0d40, 96 bytes, placed by class name and debug map
    // GraphRoot::TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, unsigned int, int, int, math::AABB const**)
    void GraphRoot::TestIntersection(Vector3T* param_1, Vector3T* param_2, uint param_3, int param_4, int param_5,
                                     AABB** param_6) {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<GraphNode, GraphNodeDelete>::operator->(
            (unique_ptr<GraphNode, GraphNodeDelete>*)&field_64);
        this_00->TestIntersection(param_1, param_2, param_3, param_4, param_5, param_6);
    }

} // namespace jag::graphics
