// libs/graphics/runetek7/scenegraph/GraphNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GraphNode.h"

namespace jag::graphics {
    // 0x100f437e4
    int32_t GraphNode::m_ndcLodThresholds[10] = {0,          985963430,  1022739087, 1025758986, 1027101164,
                                                 1032805417, 1028443341, 1022739087, 1022739087, 1045220557};

    // 0x100f4380c
    int32_t GraphNode::m_ndcLodThresholdsSq[10] = {0,          907476661, 980151802, 986822423, 990164445,
                                                   1000378414, 992204555, 980151802, 980151802, 1025758987};

    // 0x1039bd1d8
    bool GraphNode::m_disableNDCLodTest;

    // 0x1039bd1d9
    bool GraphNode::m_disableNDCProjectionTestSkipping;

    // 0x1039bd1e0
    int64_t GraphNode::s_pool;

    // 0x1001c0a60, the same machine code as GraphNode::GetChildren() const
    uint8_t* GraphNode::GetChildren() {
        return m_pChildren;
    }

    // 0x1001cd990: GraphNode::GetAABB() has the same machine code as PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1001d07d0: GraphNode::GetTranslation() has the same machine code as SceneViewData::GetViewFrustum() const

    // 0x1007aeda0
    GraphNode::GraphNode(int arg1) {
        uint64_t in_register_00000001;
        uint64_t local_28;

        local_28._4_4_ = (uint32_t)((uint64_t)in_register_00000001 >> 24);
        new (this) math::Matrix44T<float>();
        new (&field_64) math::AABB();
        new (&field_96) math::AABB();
        new (&field_128) math::OBB();
        new (&m_translation) math::Vector3T();
        new (&field_220) math::QuaternionT<float>();
        new (&field_236) math::Vector3T();
        field_248 = 0;
        new (field_256) math::ColourHSL(1.0, 1.0, 1.0);
        *(uint64_t*)m_pParent = 0;
        field_280 = 0.0;
        new (&field_284) math::Matrix33T<float>();
        new (&field_320) math::Matrix33T<float>();
        new (m_pChildren) eastl::fixed_vector<GraphNode*, 8ul>();
        m_entity = nullptr;
        m_pChildren->reserve((long)arg1);
        local_28 = (((uint64_t)local_28._4_4_ << 32) | (uint32_t)4294967295);
        field_472.fill(local_28);
        local_28 = local_28 & 72057594037927935;
        field_512.fill(*((IntersectionType*)((long)&local_28 + 7)));
        field_248 = (0 < arg1) << 5 | 199;
    }

    // 0x1007aef80
    GraphNode::~GraphNode() {
        Destruct();
        uint8_t* this_00 = m_pChildren;
        if (this_00->has_overflowed() != '\0') {
            if (this_00->capacity() != 8) {
                this_00->clear();
            }
        }
        field_248 = 0;
        ((SimplePool<PointLightSM>*)GetPool())->DeAllocate(this);
        this_00->~fixed_vector();
    }

    // 0x1007af000
    void GraphNode::Destruct() {
        GraphNode* this_00;

        auto puVar2 = m_pChildren->HeapBeginPtr();
        auto puVar3 = m_pChildren->end();
        while (true) {
            if (puVar2 == puVar3) {
                return;
            }
            this_00 = (GraphNode*)*puVar2;
            if (IsAttached(this_00) == '\0')
                break;
            Detach(this_00);
            puVar2 = puVar2 + 1;
        }
        LogAssert("child->IsAttached()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/scenegraph/"
                  "GraphNode.cpp",
                  90, nullptr);
    }

    // 0x1007af0c0
    void GraphNode::Detach() {
        if (*(GraphNode**)m_pParent != nullptr) {
            RemoveChild(*(GraphNode**)m_pParent, this);
        }
        MarkTreeInvalid(this, 'G');
    }

    // 0x1007af100
    void GraphNode::SetAABB(const math::AABB& aabb) {
        if (aabb.IsValid() == '\0') {
            LogAssert("aaBB.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      97, nullptr);
        }
        field_96 = aabb;
        field_248 = field_248 | 9;
        MarkTreeInvalid(this, '\x01');
    }

    // 0x1007af160
    void GraphNode::RemoveAABB() {
        field_248 = field_248 & 247;
    }

    // 0x1007af170
    uint8_t* GraphNode::GetWorldAABB() {
        if ((field_248 & 1) != 0) {
            CalculateBounds();
        }
        return &field_64;
    }

    // 0x1007af1a0
    void GraphNode::CalculateBounds() {
        Matrix44T<float>* pMVar1;

        if ((field_248 & 8) != 0) {
            field_64 = field_96;
            pMVar1 = GetWorldTransformationMatrix();
            field_64.Transform(*pMVar1);
            field_96.GetOBB(field_128);
            pMVar1 = GetWorldTransformationMatrix();
            field_128.Transform(*pMVar1);
        }
        field_248 = field_248 & 254;
    }

    // 0x1007af220
    uint8_t* GraphNode::GetWorldOBB() {
        if ((field_248 & 1) != 0) {
            CalculateBounds();
        }
        return &field_128;
    }

    // 0x1007af250
    void GraphNode::SetEntity(GraphEntity* graphEntity) {
        m_entity = graphEntity;
    }

    // 0x1007af260
    void GraphNode::Reset() {
        uint8_t* this_00 = m_pChildren;
        auto puVar1 = this_00->HeapBeginPtr();
        auto puVar2 = this_00->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            Reset((GraphNode*)*puVar1);
        }
        this_00->clear();
        SetParent(nullptr);
    }

    // 0x1007af2c0
    void GraphNode::SetParent(GraphNode* graphNode) {
        if (*(GraphNode**)m_pParent == this) {
            LogAssert("m_parent != this",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      260, nullptr);
        }
        *(GraphNode**)m_pParent = graphNode;
        MarkTreeInvalid(this, 'G');
    }

    // 0x1007af310
    GraphNode* GraphNode::GetRootParent(GraphNode* graphNode) {
        int iVar1 = 1000;
        do {
            if (*(GraphNode**)graphNode->m_pParent == nullptr) {
                return graphNode;
            }
            iVar1 = iVar1 - 1;
            graphNode = *(GraphNode**)graphNode->m_pParent;
        } while (iVar1 != 0);
        return nullptr;
    }

    // 0x1007af340
    unsigned long GraphNode::FindNode(GraphNode* graphNode1, GraphNode* graphNode2) {
        GraphNode* graphNode1_00;

        uint8_t* this_00 = graphNode1->m_pChildren;
        auto plVar2 = this_00->HeapBeginPtr();
        auto plVar3 = this_00->end();
        bool bVar4 = plVar2 == plVar3;
        if ((!bVar4) && (graphNode1_00 = (GraphNode*)*plVar2, graphNode1_00 != graphNode2)) {
            while (true) {
                plVar2 = plVar2 + 1;
                if (FindNode(graphNode1_00, graphNode2) != '\0')
                    break;
                bVar4 = plVar2 == plVar3;
                if ((bVar4) || (graphNode1_00 = (GraphNode*)*plVar2, graphNode1_00 == graphNode2))
                    break;
            }
        }
        return ~bVar4 & 4294967041;
    }

    // 0x1007af3d0
    unsigned long GraphNode::ValidateAddition(GraphNode* graphNode) {
        Logger* this_00;
        int arg4;
        char* str2;
        uint64_t unaff_R14;
        unsigned long uVar2;

        auto graphNode1 = GetRootParent(graphNode);
        if (FindNode(graphNode1, graphNode) == '\0') {
            uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if ((field_248 & 32) != 0)
                goto LAB_1007af459;
            this_00 = logger::default_logger();
            str2 = "Tried to add a child node when we can\'t have children!";
            arg4 = 186;
        } else {
            this_00 = logger::default_logger();
            str2 = "Tried to add a child node that already exists on the tree";
            arg4 = 181;
        }
        uVar2 = 0;
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                     "scenegraph/GraphNode.cpp",
                     arg4, str2);
    LAB_1007af459:
        return uVar2 & 4294967295;
    }

    // 0x1007af470
    uint32_t GraphNode::ValidateRemoval(GraphNode* graphNode) {
        uint32_t uVar1 = FindNode((GraphNode*)GetRootParent(graphNode), graphNode);
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      197, "Tried to remove a child node that doesn\'t exist on the tree");
        }
        return uVar1;
    }

    // 0x1007af4d0
    void GraphNode::AddChild(GraphNode* graphNode) {
        if (ValidateAddition(graphNode) != '\0') {
            SetParent(graphNode, this);
            m_pChildren->push_back(graphNode);
            field_248 = field_248 | 16;
            MarkTreeInvalid(this, 'G');
        }
    }

    // 0x1007af530
    void GraphNode::RemoveChild(GraphNode* graphNode) {
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        Logger* this_01;

        uint8_t* this_00 = m_pChildren;
        GraphNode* local_28 = graphNode;
        arg1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        arg2 = (function<bool_(int, int, int, int)>**)this_00->end();
        GraphNode** arg1_00 = (GraphNode**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(arg1, arg2,
                                                                                                             local_28);
        auto ppGVar2 = this_00->end();
        if (arg1_00 == ppGVar2) {
            this_01 = logger::default_logger();
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "scenegraph/GraphNode.cpp",
                         236, "Tried to remove %p from %p, but it does not exist in the child list", local_28, this);
        } else {
            this_00->erase_unsorted(arg1_00);
            local_28->field_248 = local_28->field_248 | 71;
        }
        if (this_00->empty()) {
            field_248 = field_248 & 239;
        }
        SetParent(local_28, nullptr);
    }

    // 0x1007af640
    void GraphNode::VisibilityTest(unsigned int arg1, const math::Frustum& frustum1, int arg3, int arg4,
                                   const math::AABB* aabb, const math::Frustum* frustum2) {
        uint8_t bVar1;
        bool cVar2;
        int* piVar3;
        AABB* aabb_00;
        OBB* obb;
        Matrix44T<float>* matrix44;
        uint64_t* puVar4;
        uint64_t* puVar5;
        float* pfVar6;
        uint32_t in_register_00000014;
        uint32_t in_register_0000003c;
        float fVar8;
        OpenGLView* in_stack_00000008;

        GraphNode* this_00 = (GraphNode*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        OpenGLView* openGLView = (OpenGLView*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        if (((((this_00->field_248 & 16) != 0) || (cVar2 = IsVisible(this_00), cVar2)) &&
             ((arg4 == (int)aabb || (piVar3 = (int*)this_00->field_472[(long)(int)aabb], *piVar3 == (int)frustum1)))) &&
            (((aabb_00 = (AABB*)GetWorldAABB(this_00),
               (this_00->field_248 & 8) == 0 || (cVar2 = openGLView->TestIntersection(*aabb_00), cVar2)) ||
              ((frustum2 != nullptr && (cVar2 = frustum2->TestIntersection(*aabb_00), cVar2)))))) {
            bVar1 = this_00->field_248;
            cVar2 = IsVisible(this_00);
            if (((bVar1 & 8) == 0) || ((bVar1 & 48) == 48)) {
                if (cVar2) {
                    piVar3 = &this_00->field_472[(long)arg4];
                    *piVar3 = (int)frustum1;
                }
                puVar4 = (uint64_t*)this_00->m_pChildren->HeapBeginPtr();
                puVar5 = (uint64_t*)this_00->m_pChildren->end();
                for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                    VisibilityTest((unsigned int)*puVar4, (Frustum*)((unsigned long)frustum1 & 4294967295), arg3, arg4,
                                   (AABB*)((unsigned long)aabb & 4294967295), frustum2);
                }
            } else if (cVar2) {
                obb = (OBB*)GetWorldOBB(this_00);
                cVar2 = openGLView->TestIntersection(*obb);
                if (cVar2) {
                    if ((m_disableNDCProjectionTestSkipping == '\0') && (-1 < (char)this_00->field_248)) {
                        fVar8 = 3.4028235e+38;
                    } else {
                        if (in_stack_00000008 != nullptr) {
                            openGLView = in_stack_00000008;
                        }
                        matrix44 = (Matrix44T<float>*)openGLView->GetCursorMutex();
                        fVar8 = (float)math::NDCProjectGetNDCProjectionValue(*obb, *matrix44);
                    }
                    if ((m_disableNDCLodTest != '\0') ||
                        (pfVar6 = (float*)m_ndcLodThresholdsSq[(long)arg4], *pfVar6 <= fVar8)) {
                        piVar3 = &this_00->field_472[(long)arg4];
                        *piVar3 = (int)frustum1;
                    }
                }
            }
        }
    }

    // 0x1007af890
    void GraphNode::VisibilityTest(
        eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs, unsigned int arg2,
        const math::Frustum& frustum1, int arg4, int arg5,
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                           math::AABB const&, math::OBB const&)> const& callback,
        const math::AABB* aabb, const math::Frustum* frustum2) {
        unsigned long uVar1;
        int arg5_00;
        bool cVar2;
        unsigned int* puVar3;
        OBB* obb;
        Matrix44T<float>* pMVar4;
        AABB* pAVar5;
        AABB* pAVar6;
        float* pfVar7;
        OpenGLView* this_00;
        uint32_t uVar8;
        Frustum local_278;
        GraphEntity* local_1d8;
        int local_1cc;
        AABB* local_1c0;
        GraphEntityTransformData local_1a8;
        pair<GraphEntity*, GraphEntityTransformData> local_f8[192];

        vector<std::pair<GraphEntity*, GraphEntityTransformData>>* local_1c8 = pairs;
        uint64_t local_1b8 = (OpenGLView*)frustum1;
        unsigned int local_1ac = arg2;
        if (((((field_248 & 16) != 0) || (cVar2 = IsVisible(), cVar2)) &&
             ((arg4 == arg5 || (puVar3 = (unsigned int*)field_472[(long)arg5], *puVar3 == local_1ac)))) &&
            (((local_1c0 = (AABB*)GetWorldAABB(),
               (field_248 & 8) == 0 || (cVar2 = local_1b8->TestIntersection(*local_1c0), cVar2)) ||
              ((aabb != nullptr && (cVar2 = aabb->TestIntersection(*local_1c0), cVar2)))))) {
            local_1cc = arg5;
            if (((field_248 & 8) == 0) || ((field_248 & 48) == 48)) {
                puVar3 = &field_472[(long)arg4];
                *puVar3 = local_1ac;
                cVar2 = IsVisible();
                if ((cVar2) && (local_278.field_0 = GetLinkObjCount(), local_278.field_0 != 0)) {
                    pMVar4 = GetWorldTransformationMatrix();
                    local_1a8 = GraphEntityTransformData(pMVar4);
                    local_f8->pair<GraphEntity*&, GraphEntityTransformData, false>(local_278, local_1a8);
                    local_1c8->push_back(*local_f8);
                }
                pAVar5 = (AABB*)m_pChildren->HeapBeginPtr();
                pAVar6 = (AABB*)m_pChildren->end();
                arg5_00 = local_1cc;
                if (pAVar5 != pAVar6) {
                    local_1c0 = pAVar6;
                    do {
                        VisibilityTest(*(GraphNode**)pAVar5, local_1c8, local_1ac, (Frustum*)local_1b8, arg4, arg5_00,
                                       callback, aabb, frustum2);
                        pAVar5 = (AABB*)&pAVar5->field_8;
                    } while (pAVar5 != local_1c0);
                }
            } else {
                cVar2 = IsVisible();
                if (cVar2) {
                    obb = (OBB*)GetWorldOBB();
                    local_278 = math::Frustum();
                    cVar2 = std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&,
                                               math::Frustum const&, int, math::AABB const&, math::OBB const&)>::
                    operator()(
                        (function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
                                       int, math::AABB const&, math::OBB const&)>*)callback,
                        (array<math::IntersectionType, _10ul>*)&field_512, &local_278, (Frustum*)local_1b8, arg4,
                        local_1c0, obb);
                    if (cVar2) {
                        if ((m_disableNDCProjectionTestSkipping == '\0') && (-1 < (char)field_248)) {
                            uVar8 = 2139095039;
                        } else {
                            this_00 = local_1b8;
                            if (frustum2 != nullptr) {
                                this_00 = (OpenGLView*)frustum2;
                            }
                            pMVar4 = (Matrix44T<float>*)this_00->GetCursorMutex();
                            uVar8 = math::NDCProjectGetNDCProjectionValue(*obb, *pMVar4);
                        }
                        if (m_disableNDCLodTest == '\0') {
                            uVar1 = (unsigned long)local_1b8 >> 32;
                            local_1b8 = (OpenGLView*)(((uint64_t)((int)uVar1) << 32) | (uint32_t)uVar8);
                            pfVar7 = &m_ndcLodThresholdsSq[(long)arg4];
                            if ((float)local_1b8 < *pfVar7)
                                goto LAB_1007afbfa;
                        }
                        puVar3 = &field_472[(long)arg4];
                        *puVar3 = local_1ac;
                        local_1d8 = (GraphEntity*)GetLinkObjCount();
                        if (local_1d8 != nullptr) {
                            pMVar4 = GetWorldTransformationMatrix();
                            local_1a8 = GraphEntityTransformData(pMVar4, local_278);
                            local_f8->pair<GraphEntity*&, GraphEntityTransformData, false>(local_1d8, local_1a8);
                            local_1c8->push_back(*local_f8);
                        }
                    }
                }
            }
        }
    LAB_1007afbfa:
    }

    // 0x1007afcf0
    void GraphNode::VisibilityTrue(unsigned int arg1, int arg2, int arg3) {
        unsigned int* puVar1;
        uint64_t* puVar2;
        uint64_t* puVar3;

        if ((arg2 == arg3) || (puVar1 = (unsigned int*)field_472[(long)arg3], *puVar1 == arg1)) {
            puVar1 = &field_472[(long)arg2];
            *puVar1 = arg1;
            puVar2 = (uint64_t*)m_pChildren->HeapBeginPtr();
            puVar3 = (uint64_t*)m_pChildren->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                VisibilityTrue((GraphNode*)*puVar2, arg1, arg2, arg3);
            }
        }
    }

    // 0x1007afd90
    void GraphNode::VisibilityFilter(unsigned int arg1, int arg2, int arg3,
                                     std::function<bool(GraphNode const*)> const& callback) {
        unsigned int* puVar1;

        if ((arg2 != arg3) && (puVar1 = (unsigned int*)field_472[(long)arg3], *puVar1 != arg1)) {
            return;
        }
        if (std::function<bool(GraphNode const*)>::operator()((function<bool(GraphNode const*)>*)callback, this) !=
            '\0') {
            puVar1 = &field_472[(long)arg2];
            *puVar1 = arg1;
        }
        auto puVar4 = m_pChildren->HeapBeginPtr();
        auto puVar3 = m_pChildren->end();
        for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
            VisibilityFilter((GraphNode*)*puVar4, arg1, arg2, arg3, callback);
        }
    }

    // 0x1007afe60
    void GraphNode::VisibilityTestAABB(unsigned int arg1, const math::AABB& aabb, int arg3, int arg4) {
        unsigned int* puVar1;
        bool cVar2;

        if ((arg3 != arg4) && (puVar1 = (unsigned int*)field_472[(long)arg4], *puVar1 != arg1)) {
            return;
        }
        auto aabb_00 = GetWorldAABB();
        if (((field_248 & 8) != 0) && (cVar2 = aabb.TestIntersection(*aabb_00), !cVar2)) {
            return;
        }
        puVar1 = &field_472[(long)arg3];
        *puVar1 = arg1;
        auto puVar4 = m_pChildren->HeapBeginPtr();
        auto puVar3 = m_pChildren->end();
        for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
            VisibilityTestAABB((GraphNode*)*puVar4, arg1, aabb, arg3, arg4);
        }
    }

    // 0x1007aff20
    unsigned long GraphNode::TestIntersection(const math::Vector3T<float>& vector31,
                                              const math::Vector3T<float>& vector32, int arg3, int arg4, int arg5,
                                              const math::AABB** arg6) {
        bool cVar1;
        int* piVar2;
        AABB* aABB;
        uint32_t in_register_00000014;
        unsigned long unaff_R12;
        uint64_t uVar5;
        uint64_t* in_stack_00000008;

        if ((arg5 != -1) && (piVar2 = (int*)(*((vector31 + 472)))[(long)arg5], *piVar2 != arg4)) {
            unaff_R12 = 0;
            goto LAB_1007b0098;
        }
        if ((*(long**)(vector31 + 464) != nullptr) &&
            (cVar1 = (**(void (**)(...))(**(long**)(vector31 + 464) + 16))(), cVar1)) {
            cVar1 = (**(void (**)(...))(**(long**)(vector31 + 464) + 32))();
            uVar5 = (uint64_t)(unaff_R12 >> 8);
            if (!cVar1) {
                aABB = (AABB*)GetWorldAABB((GraphNode*)vector31);
                if ((((uint8_t)vector31[248] & 8) != 0) &&
                    (cVar1 = aABB->TestIntersection(
                         vector32, *((Vector3T<float>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3))),
                     cVar1)) {
                    unaff_R12 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
                    if (in_stack_00000008 != nullptr) {
                        *in_stack_00000008 = aABB;
                    }
                    goto LAB_1007b0098;
                }
            } else {
                cVar1 = (**(void (**)(...))(**(long**)(vector31 + 464) + 40))(
                    *(long**)(vector31 + 464), vector32,
                    (Vector3T<float>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3),
                    (unsigned long)arg6 & 4294967295);
                unaff_R12 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
                if (cVar1)
                    goto LAB_1007b0098;
            }
        }
        uint64_t* puVar3 = (uint64_t*)((vector31 + 360))->HeapBeginPtr();
        uint64_t* puVar4 = (uint64_t*)((vector31 + 360))->end();
        bool bVar6 = puVar3 == puVar4;
        if (!bVar6) {
            cVar1 = TestIntersection((Vector3T<float>*)*puVar3, vector32, arg3, arg4, arg5,
                                     (AABB**)((unsigned long)arg6 & 4294967295));
            while (!cVar1) {
                puVar3 = puVar3 + 1;
                bVar6 = puVar3 == puVar4;
                if (bVar6)
                    break;
                cVar1 = TestIntersection((Vector3T<float>*)*puVar3, vector32, arg3, arg4, arg5,
                                         (AABB**)((unsigned long)arg6 & 4294967295));
            }
        }
        unaff_R12 = (((uint64_t)((int64_t)(unaff_R12 >> 8)) << 8) | (uint8_t)bVar6) ^ 1;
    LAB_1007b0098:
        return unaff_R12 & 4294967295;
    }

    // 0x1007b00b0
    unsigned long GraphNode::TestIntersection(const math::AABB& aabb) {
        bool cVar1;
        AABB* this_00;
        unsigned long unaff_R12;

        if (((m_entity != nullptr) && (cVar1 = m_entity->OccludesView(), cVar1)) &&
            (this_00 = (AABB*)GetWorldAABB(), (field_248 & 8) != 0)) {
            cVar1 = this_00->TestIntersection(aabb);
            unaff_R12 = (((uint64_t)((int64_t)(unaff_R12 >> 8)) << 8) | (uint8_t)1);
            if (cVar1)
                goto LAB_1007b0160;
        }
        auto puVar2 = m_pChildren->HeapBeginPtr();
        auto puVar3 = m_pChildren->end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            cVar1 = TestIntersection((GraphNode*)*puVar2, aabb);
            while (!cVar1) {
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
                if (bVar4)
                    break;
                cVar1 = TestIntersection((GraphNode*)*puVar2, aabb);
            }
        }
        unaff_R12 = (((uint64_t)((int64_t)(unaff_R12 >> 8)) << 8) | (uint8_t)bVar4) ^ 1;
    LAB_1007b0160:
        return unaff_R12 & 4294967295;
    }

    // 0x1007b0170
    auto GraphNode::GetWorldTransformationMatrixAligned() {
        auto result;
        Matrix33T<float> local_58;

        if ((*(uint8_t*)(&result + 31) & 4) != 0) {
            if ((*(uint8_t*)(&result + 31) & 64) != 0) {
                &result[35].field_4.SetToDiagonal(*(float*)(&result + 32), *(float*) && result[32].field_4,
                                                  *(float*)(&result + 33));
                *(&result + 40) = math::Matrix33T<float>::Set(&result[27].field_4);
                *(uint8_t*)(&result + 31) = *(uint8_t*)(&result + 31) & 191;
            }
            local_58*& result[35].field_4;
            result.Set(&local_58, (&result + 26));
            if (&result[34] != (ReturnValue)0) {
                GetWorldTransformationMatrixAligned(&result[34]);
                local_58* result;
                result = local_58;
            }
            *(uint8_t*)(&result + 31) = *(uint8_t*)(&result + 31) & 251;
        }
        return result;
    }

    // 0x1007b0270
    void GraphNode::CalculateCentreZ(const math::Matrix44T<float>& matrix44) {
        float* pfVar3;
        Vector4T<float>* pVVar4;
        float fVar5;
        uint64_t uVar6;
        float in_XMM1_Da;
        float local_20;
        float local_1c;

        if ((field_248 & 8) == 0) {
            pfVar3 = (float*)GetWorldTranslation();
            local_1c = *pfVar3;
            fVar5 = pfVar3[1];
            local_20 = pfVar3[2];
            pVVar4 = &matrix44[0];
            pfVar3 = (float*)(*pVVar4)[2];
            local_1c = local_1c * *pfVar3;
            pVVar4 = &matrix44[1];
            pfVar3 = (float*)(*pVVar4)[2];
        } else {
            uVar6 = ((AABB*)GetWorldAABB())->GetCentrePos();
            fVar5 = (float)((unsigned long)uVar6 >> 32);
            pVVar4 = &matrix44[0];
            pfVar3 = (float*)(*pVVar4)[2];
            local_1c = *pfVar3 * (float)uVar6;
            pVVar4 = &matrix44[1];
            pfVar3 = (float*)(*pVVar4)[2];
            local_20 = in_XMM1_Da;
        }
        float fVar1 = *pfVar3;
        pVVar4 = &matrix44[2];
        pfVar3 = (float*)(*pVVar4)[2];
        float fVar2 = *pfVar3;
        pVVar4 = &matrix44[3];
        pfVar3 = (float*)(*pVVar4)[2];
        field_280 = local_20 * fVar2 + fVar5 * fVar1 + local_1c + *pfVar3;
    }

    // 0x1007b03c0
    void GraphNode::UnionAABBWithChildren(bool arg1) {
        GraphNode* this_00;
        uint64_t* puVar2;
        uint64_t* puVar3;
        AABB* aabb;
        Vector3T<float>* vector3;
        AABB local_68;
        AABB* local_40;
        GraphNode* local_38;

        if ((field_248 & 16) != 0) {
            local_38 = this;
            puVar2 = (uint64_t*)m_pChildren->HeapBeginPtr();
            puVar3 = (uint64_t*)m_pChildren->end();
            if (puVar2 != puVar3) {
                local_40 = (AABB*)&local_38->field_96;
                do {
                    this_00 = (GraphNode*)*puVar2;
                    if (arg1) {
                        UnionAABBWithChildren(this_00, true);
                    }
                    if ((this_00->field_248 & 8) != 0) {
                        aabb = (AABB*)this_00->GetCursorMutex();
                        local_68 = math::AABB(*aabb);
                        vector3 = (Vector3T<float>*)GetTranslation(this_00);
                        local_68.Translate(*vector3);
                        if (local_68.IsValid() == '\0') {
                            LogAssert("childAABB.IsValid()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/scenegraph/GraphNode.cpp",
                                      642, nullptr);
                        }
                        local_40->Union(local_68);
                    }
                    puVar2 = puVar2 + 1;
                } while (puVar2 != puVar3);
            }
            MarkTreeInvalid(local_38, local_38, 'G');
        }
    }

    // 0x1007b04d0
    float GraphNode::GetEntityLoadPercentage() const {

        return local_10 = 0.0;
        GetEntityLoadRecursive(local_10, 0.0);
        if (local_10 == 0.0) {
            local_10 = 100.0;
        } else {
            local_10 = (0.0 * 100.0) / local_10;
        }
        return local_10;
    }

    // 0x1007b0530
    void GraphNode::GetEntityLoadRecursive(float& arg1, float& arg2) const {
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;

        auto puVar1 = m_pChildren->HeapBeginPtr();
        auto puVar2 = m_pChildren->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            GetEntityLoadRecursive((GraphNode*)*puVar1, arg1, arg2);
        }
        if ((m_entity != nullptr) && (m_entity->GetLoadImportance(), 0.0 < extraout_XMM0_Da)) {
            arg1 = arg1 + extraout_XMM0_Da;
            m_entity->GetLoadProgress();
            arg2 = extraout_XMM0_Da_00 * extraout_XMM0_Da + arg2;
        }
    }

    // 0x1007b05f0
    void GraphNode::InitPool() {
        if (s_pool != nullptr) {
            LogAssert("s_pool == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      693, "Pool already allocated");
        }
        SimplePool<GraphNode>* simplePool = (SimplePool<GraphNode>*)operator new(208);
        new (simplePool) SimplePool<GraphNode>(15000, 64, '\x01');
        s_pool = simplePool;
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/scenegraph/"
                  "GraphNode.cpp",
                  697, "Allocated GraphNode Pool of size: %i, at: %p", 15000, s_pool);
    }

    // 0x1007b06c0
    void GraphNode::DeletePool() {
        if (s_pool->empty() == '\0') {
            LogAssert("s_pool->empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      702, nullptr);
        }
        safe_delete<SimplePool<GraphNode>>((SimplePool<GraphNode>**)&s_pool);
    }

    // 0x1007b0750
    void GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup& containerGroup) {
        float in_XMM2_Da;
        shared_ptr<tweak::Container> local_30;

        eastl::string local_58("Visibility");
        (containerGroup._vptr[7].Clear)(&local_30, containerGroup, &local_58);
        auto pCVar1 = local_30.operator->();
        pCVar1->AddCheckBox("Disable NDC Threshold Test", m_disableNDCLodTest);
        pCVar1 = (Container*)local_30.operator->();
        pCVar1->AddCheckBox("Disable NDC Threshold Test Skipping", m_disableNDCProjectionTestSkipping);
        auto pcVar2 = local_30.operator->();
        __7* p_Var3 = &m_ndcLodThresholds[0];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 10.0, 0.0001, in_XMM2_Da, (float*)"Base Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[1];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Subrender Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[2];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 0 Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[3];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 1 Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[4];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 2 Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[5];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 3 Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[6];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Point Light Shadows Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[7];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Reflection Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[8];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 10.0, 0.001, in_XMM2_Da, (float*)"Minimap Lod", p_Var3);
        pcVar2 = (char*)local_30.operator->();
        p_Var3 = &m_ndcLodThresholds[9];
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(*(tweak::ContainerGroup&))::__7&>(
            pcVar2, 10.0, 0.001, in_XMM2_Da, (float*)"Light Probe Lod", p_Var3);
    }

    // 0x1007c4060
    void GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::$_7::operator()() const {
        ReturnValue local_30;
        uint64_t uStack_28;
        uint64_t local_20;
        uint64_t uStack_18;
        uint64_t local_10;

        CalculateNDCLodThresholdSquares(&local_30, (array<float, _10ul>*)&m_ndcLodThresholds);
        _DAT_100f4382c = local_10;
        _DAT_100f4381c = local_20;
        reinterpret_cast<const uint64_t*>(&m_ndcLodThresholdsSq)[3] = uStack_18;
        m_ndcLodThresholdsSq = local_30;
        reinterpret_cast<const uint64_t*>(&m_ndcLodThresholdsSq)[1] = uStack_28;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007b0720
    void safe_delete<SimplePool<graphics::GraphNode>>(SimplePool<graphics::GraphNode>*& arg1) {
        SimplePool<graphics::GraphNode>* simplePool = arg1;
        if (simplePool != nullptr) {
            simplePool->~SimplePool();
            operator delete(simplePool);
        }
        arg1 = nullptr;
    }

} // namespace jag
