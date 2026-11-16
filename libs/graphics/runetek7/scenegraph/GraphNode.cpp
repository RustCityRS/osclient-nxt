// libs/graphics/runetek7/scenegraph/GraphNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GraphNode.h"

namespace jag::graphics {
    // 0x100f437e4, 40 bytes, __data
    GraphNode::m_ndcLodThresholds = {0,          985963430,  1022739087, 1025758986, 1027101164,
                                     1032805417, 1028443341, 1022739087, 1022739087, 1045220557};

    // 0x100f4380c, 40 bytes, __data
    GraphNode::m_ndcLodThresholdsSq = {0,          907476661, 980151802, 986822423, 990164445,
                                       1000378414, 992204555, 980151802, 980151802, 1025758987};

    // 0x1039bd1d8, 1 bytes, __common; zero-initialised
    GraphNode::m_disableNDCLodTest;

    // 0x1039bd1d9, 7 bytes, __common; zero-initialised
    GraphNode::m_disableNDCProjectionTestSkipping;

    // 0x1039bd1e0, 8 bytes, __common; zero-initialised
    GraphNode::s_pool;

    // 0x1001c0a60: the linker folded this into GraphNode::GetChildren() const, which has identical code
    GraphNode::GetChildren();

    // 0x1001cd990: the linker folded this into PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    GraphNode::GetAABB();

    // 0x1001d07d0: the linker folded this into SceneViewData::GetViewFrustum() const, which has identical code
    GraphNode::GetTranslation();

    // 0x1007aeda0, 304 bytes, base-object constructor, placed by class name and debug map
    // GraphNode::GraphNode(int)
    void GraphNode::GraphNode(int param_1) {
        undefined7 in_register_00000001;
        undefined8 local_28;

        local_28._4_4_ = (undefined4)((uint7)in_register_00000001 >> 24);
        new (this) math::Matrix44T<float>();
        new (&field_64) math::AABB();
        new (&field_96) math::AABB();
        new (&field_128) math::OBB();
        new (&m_translation) math::Vector3T<int>();
        new (&field_220) math::QuaternionT<float>();
        new (&field_236) math::Vector3T<int>();
        field_248 = 0;
        new (field_256, 1.0, 1.0, 1.0) math::ColourHSL();
        m_pParent = (undefined*)0;
        field_280 = 0.0;
        new (&field_284) math::Matrix33T<float>();
        new (&field_320) math::Matrix33T<float>();
        new (&m_pChildren) eastl::fixed_vector<GraphNode*, 8ul, true, eastl::allocator>();
        m_pEntity = (GraphEntity*)0;
        (&m_pChildren, (long)param_1)->reserve();
        local_28 = CONCAT44(local_28._4_4_, 4294967295);
        (&field_472, (uint*)&local_28)->fill();
        local_28 = local_28 & 72057594037927935;
        (&field_512, (IntersectionType*)((long)&local_28 + 7))->fill();
        field_248 = (0 < param_1) << 5 | 199;
    }

    // 0x1007aef70, 16 bytes, complete-object constructor, placed by class name and debug map
    // GraphNode::GraphNode(int): jumps straight to the base-object constructor

    // 0x1007aef80, 128 bytes, base-object destructor, placed by class name and debug map
    // GraphNode::~GraphNode()
    void GraphNode::~GraphNode() {
        undefined** this_00;
        long lVar1;
        PointLightSM* pPVar2;
        char cVar3;

        Destruct(this);
        this_00 = &m_pChildren;
        cVar3 = this_00->has_overflowed();
        if (cVar3 != '\0') {
            lVar1 = this_00->capacity();
            if (lVar1 != 8) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        }
        field_248 = 0;
        pPVar2 = (PointLightSM*)GetPool();
        SimplePool<PointLightSM>::DeAllocate(pPVar2);
        this_00->~fixed_vector();
    }

    // 0x1007af000, 160 bytes, placed by class name and debug map
    // GraphNode::Destruct()
    void GraphNode::Destruct() {
        GraphNode* this_00;
        undefined8* puVar2;
        undefined8* puVar3;

        puVar2 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar3 = (undefined8*)(&m_pChildren)->end();
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
        /* WARNING: Subroutine does not return */
        LogAssert("child->IsAttached()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/scenegraph/"
                  "GraphNode.cpp",
                  90, (char*)0);
    }

    // 0x1007af0b0, 16 bytes, complete-object destructor, placed by class name and debug map
    // GraphNode::~GraphNode(): jumps straight to the base-object destructor

    // 0x1007af0c0, 64 bytes, placed by class name and debug map
    // GraphNode::Detach()
    void GraphNode::Detach() {
        if ((GraphNode*)m_pParent != (GraphNode*)0) {
            RemoveChild((GraphNode*)m_pParent, this);
        }
        MarkTreeInvalid(this, this, 'G');
    }

    // 0x1007af100, 96 bytes, placed by class name and debug map
    // GraphNode::SetAABB(math::AABB const&)
    void GraphNode::SetAABB(AABB* param_1) {
        if (param_1->IsValid() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("aaBB.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      97, (char*)0);
        }
        math::AABB::operator=((AABB*)&field_96, param_1);
        field_248 = field_248 | 9;
        MarkTreeInvalid(this, this, '\x01');
    }

    // 0x1007af160, 16 bytes, placed by class name and debug map
    // GraphNode::RemoveAABB()
    void GraphNode::RemoveAABB() {
        field_248 = field_248 & 247;
    }

    // 0x1007af170, 48 bytes, placed by class name and debug map
    // GraphNode::GetWorldAABB()
    undefined1* GraphNode::GetWorldAABB() {
        if ((field_248 & 1) != 0) {
            CalculateBounds(this);
        }
        return &field_64;
    }

    // 0x1007af1a0, 128 bytes, placed by class name and debug map
    // GraphNode::CalculateBounds()
    void GraphNode::CalculateBounds() {
        Matrix44T* pMVar1;

        if ((field_248 & 8) != 0) {
            math::AABB::operator=((AABB*)&field_64, (AABB*)&field_96);
            pMVar1 = (Matrix44T*)GetWorldTransformationMatrix(this);
            (&field_64, pMVar1)->Transform();
            (&field_96, (OBB*)&field_128)->GetOBB();
            pMVar1 = (Matrix44T*)GetWorldTransformationMatrix(this);
            (&field_128, pMVar1)->Transform();
        }
        field_248 = field_248 & 254;
    }

    // 0x1007af220, 48 bytes, placed by class name and debug map
    // GraphNode::GetWorldOBB()
    undefined1* GraphNode::GetWorldOBB() {
        if ((field_248 & 1) != 0) {
            CalculateBounds(this);
        }
        return &field_128;
    }

    // 0x1007af250, 16 bytes, placed by class name and debug map
    // GraphNode::SetEntity(GraphEntity*)
    void GraphNode::SetEntity(GraphEntity* param_1) {
        m_pEntity = param_1;
    }

    // 0x1007af260, 96 bytes, placed by class name and debug map
    // GraphNode::Reset()
    void GraphNode::Reset() {
        undefined8* puVar1;
        undefined8* puVar2;

        puVar1 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            Reset((GraphNode*)*puVar1);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        SetParent(this, (GraphNode*)0);
    }

    // 0x1007af2c0, 80 bytes, placed by class name and debug map
    // GraphNode::SetParent(GraphNode*)
    void GraphNode::SetParent(GraphNode* param_1) {
        if ((GraphNode*)m_pParent == this) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_parent != this",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      260, (char*)0);
        }
        m_pParent = (undefined*)param_1;
        MarkTreeInvalid(this, this, 'G');
    }

    // 0x1007af310, 48 bytes, placed by class name and debug map
    // GraphNode::GetRootParent(GraphNode*)
    GraphNode* GraphNode::GetRootParent(GraphNode* param_1) {
        int iVar1;

        iVar1 = 1000;
        do {
            if ((GraphNode*)param_1->m_pParent == (GraphNode*)0) {
                return param_1;
            }
            iVar1 = iVar1 + -1;
            param_1 = (GraphNode*)param_1->m_pParent;
        } while (iVar1 != 0);
        return (GraphNode*)0;
    }

    // 0x1007af340, 144 bytes, placed by class name and debug map
    // GraphNode::FindNode(GraphNode*, GraphNode*)
    ulong GraphNode::FindNode(GraphNode* param_1, GraphNode* param_2) {
        long* plVar2;
        long* plVar3;
        GraphNode* pGVar4;
        undefined** this_00;
        bool bVar5;

        this_00 = &param_1->m_pChildren;
        plVar2 = (long*)this_00->HeapBeginPtr();
        plVar3 = (long*)this_00->end();
        bVar5 = plVar2 == plVar3;
        if ((!bVar5) && (pGVar4 = (GraphNode*)*plVar2, pGVar4 != param_2)) {
            while (true) {
                plVar2 = plVar2 + 1;
                if (FindNode(this, pGVar4, param_2) != '\0')
                    break;
                bVar5 = plVar2 == plVar3;
                if ((bVar5) || (pGVar4 = (GraphNode*)*plVar2, pGVar4 == param_2))
                    break;
            }
        }
        return CONCAT71((int7)((ulong)this_00 >> 8), ~bVar5) & 4294967041;
    }

    // 0x1007af3d0, 160 bytes, placed by class name and debug map
    // GraphNode::ValidateAddition(GraphNode*)
    ulong GraphNode::ValidateAddition(GraphNode* param_1) {
        GraphNode* pGVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        undefined8 unaff_R14;
        ulong uVar6;

        pGVar2 = (GraphNode*)GetRootParent(this, param_1);
        if (FindNode(this, pGVar2, param_1) == '\0') {
            uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if ((field_248 & 32) != 0)
                goto LAB_1007af459;
            uVar3 = logger::default_logger();
            pcVar5 = "Tried to add a child node when we can\'t have children!";
            uVar4 = 186;
        } else {
            uVar3 = logger::default_logger();
            pcVar5 = "Tried to add a child node that already exists on the tree";
            uVar4 = 181;
        }
        uVar6 = 0;
        logger::Logger::Log(uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "scenegraph/GraphNode.cpp",
                            uVar4, pcVar5);
    LAB_1007af459:
        return uVar6 & 4294967295;
    }

    // 0x1007af470, 96 bytes, placed by class name and debug map
    // GraphNode::ValidateRemoval(GraphNode*)
    undefined4 GraphNode::ValidateRemoval(GraphNode* param_1) {
        undefined4 uVar1;
        GraphNode* pGVar2;
        undefined8 uVar3;

        pGVar2 = (GraphNode*)GetRootParent(this, param_1);
        uVar1 = FindNode(this, pGVar2, param_1);
        if ((char)uVar1 == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/scenegraph/GraphNode.cpp",
                                197, "Tried to remove a child node that doesn\'t exist on the tree");
        }
        return uVar1;
    }

    // 0x1007af4d0, 80 bytes, placed by class name and debug map
    // GraphNode::AddChild(GraphNode*)
    void GraphNode::AddChild(GraphNode* param_1) {
        if (ValidateAddition(this, param_1) != '\0') {
            SetParent(param_1, this);
            eastl::fixed_vector<GraphNode*, 8ul, true, eastl::allocator>::push_back((GraphNode**)&m_pChildren);
            field_248 = field_248 | 16;
            MarkTreeInvalid(this, this, 'G');
        }
    }

    // 0x1007af530, 192 bytes, placed by class name and debug map
    // GraphNode::RemoveChild(GraphNode*)
    void GraphNode::RemoveChild(GraphNode* param_1) {
        undefined** this_00;
        char cVar1;
        function** ppfVar2;
        function** ppfVar3;
        GraphNode** ppGVar4;
        GraphNode** ppGVar5;
        undefined8 uVar6;
        GraphNode* local_28;

        this_00 = &m_pChildren;
        local_28 = param_1;
        ppfVar2 = (function**)this_00->HeapBeginPtr();
        ppfVar3 = (function**)this_00->end();
        ppGVar4 = (GraphNode**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar2, ppfVar3, (function**)&local_28);
        ppGVar5 = (GraphNode**)this_00->end();
        if (ppGVar4 == ppGVar5) {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/scenegraph/GraphNode.cpp",
                                236, "Tried to remove %p from %p, but it does not exist in the child list", local_28,
                                this);
        } else {
            this_00->erase_unsorted(ppGVar4);
            local_28->field_248 = local_28->field_248 | 71;
        }
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            field_248 = field_248 & 239;
        }
        SetParent(local_28, (GraphNode*)0);
    }

    // 0x1007af640, 528 bytes, placed by class name and debug map
    // GraphNode::VisibilityTest(unsigned int, math::Frustum const&, int, int, math::AABB const*, math::Frustum const*)
    void GraphNode::VisibilityTest(uint param_1, Frustum* param_2, int param_3, int param_4, AABB* param_5,
                                   Frustum* param_6) {
        byte bVar1;
        char cVar2;
        uint* puVar3;
        AABB* pAVar4;
        OBB* pOVar5;
        Matrix44T* pMVar6;
        undefined8* puVar7;
        undefined8* puVar8;
        float* pfVar9;
        float fVar10;

        if (((((field_248 & 16) != 0) || (cVar2 = IsVisible(this), cVar2 != '\0')) &&
             ((param_3 == param_4 || (puVar3 = (uint*)std::array<unsigned int, 10ul>::operator[](
                                          (array<unsigned int, 10ul>*)&field_472, (long)param_4),
                                      *puVar3 == param_1)))) &&
            (((pAVar4 = (AABB*)GetWorldAABB(this),
               (field_248 & 8) == 0 || (cVar2 = param_2->TestIntersection(pAVar4), cVar2 != '\0')) ||
              ((param_5 != (AABB*)0 && (cVar2 = param_5->TestIntersection(pAVar4), cVar2 != '\0')))))) {
            bVar1 = field_248;
            cVar2 = IsVisible(this);
            if (((bVar1 & 8) == 0) || ((bVar1 & 48) == 48)) {
                if (cVar2 != '\0') {
                    puVar3 = (uint*)std::array<unsigned int, 10ul>::operator[]((array<unsigned int, 10ul>*)&field_472,
                                                                               (long)param_3);
                    *puVar3 = param_1;
                }
                puVar7 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
                puVar8 = (undefined8*)(&m_pChildren)->end();
                for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
                    VisibilityTest((GraphNode*)*puVar7, param_1, param_2, param_3, param_4, param_5, param_6);
                }
            } else if (cVar2 != '\0') {
                pOVar5 = (OBB*)GetWorldOBB(this);
                cVar2 = param_2->TestIntersection(pOVar5);
                if (cVar2 != '\0') {
                    if ((m_disableNDCProjectionTestSkipping == '\0') && (-1 < (char)field_248)) {
                        fVar10 = 3.4028235e+38;
                    } else {
                        if (param_6 != (Frustum*)0) {
                            param_2 = param_6;
                        }
                        pMVar6 = (Matrix44T*)param_2->GetCursorMutex();
                        fVar10 = (float)math::NDCProjectGetNDCProjectionValue(pOVar5, pMVar6);
                    }
                    if ((m_disableNDCLodTest != '\0') ||
                        (pfVar9 = (float*)std::array<float, 10ul>::operator[](
                             (array<float, 10ul>*)&m_ndcLodThresholdsSq, (long)param_3),
                         *pfVar9 <= fVar10)) {
                        puVar3 = (uint*)std::array<unsigned int, 10ul>::operator[](
                            (array<unsigned int, 10ul>*)&field_472, (long)param_3);
                        *puVar3 = param_1;
                    }
                }
            }
        }
    }

    // 0x1007af890, 928 bytes, placed by class name and debug map
    // GraphNode::VisibilityTest(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&, unsigned int, math::Frustum const&, int, int, std::function<bool (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&)> const&, math::AABB const*, math::Frustum const*)
    /* GraphNode::VisibilityTest(eastl::vector<std::pair<GraphEntity*,
   GraphEntityTransformData>, eastl::allocator>&, unsigned int, math::Frustum
   const&, int, int, std::function<bool (std::array<math::IntersectionType, 10ul>&,
   math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB
   const&)> const&, math::AABB const*, math::Frustum const*) */

    void GraphNode::VisibilityTest(vector* param_1, uint param_2, Frustum* param_3, int param_4, int param_5,
                                   function* param_6, AABB* param_7, Frustum* param_8) {
        ulong uVar1;
        char cVar3;
        uint* puVar4;
        OBB* pOVar5;
        Matrix44T* pMVar6;
        OBB* pOVar7;
        float* pfVar8;
        OpenGLView* this_00;
        undefined4 uVar9;
        Frustum local_278;
        GraphEntity* local_1d8;
        OBB* local_1c0;
        undefined8 local_1b8;
        GraphEntityTransformData local_1a8;
        pair<GraphEntity*, GraphEntityTransformData> local_f8[192];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1b8 = (OpenGLView*)param_3;
        if (((((field_248 & 16) != 0) || (cVar3 = IsVisible(this), cVar3 != '\0')) &&
             ((param_4 == param_5 || (puVar4 = (uint*)std::array<unsigned int, 10ul>::operator[](
                                          (array<unsigned int, 10ul>*)&field_472, (long)param_5),
                                      *puVar4 == param_2)))) &&
            (((local_1c0 = (OBB*)GetWorldAABB(this),
               (field_248 & 8) == 0 || (cVar3 = local_1b8->TestIntersection(local_1c0), cVar3 != '\0')) ||
              ((param_7 != (AABB*)0 && (cVar3 = param_7->TestIntersection(local_1c0), cVar3 != '\0')))))) {
            if (((field_248 & 8) == 0) || ((field_248 & 48) == 48)) {
                puVar4 = (uint*)std::array<unsigned int, 10ul>::operator[]((array<unsigned int, 10ul>*)&field_472,
                                                                           (long)param_4);
                *puVar4 = param_2;
                cVar3 = IsVisible(this);
                if ((cVar3 != '\0') && (local_278.field_0 = GetLinkObjCount(), local_278.field_0 != 0)) {
                    pMVar6 = (Matrix44T*)GetWorldTransformationMatrix(this);
                    new (&local_1a8) GraphEntityTransformData(pMVar6);
                    std::pair<GraphEntity*, GraphEntityTransformData>::pair<GraphEntity*&, GraphEntityTransformData,
                                                                            false>(local_f8, (GraphEntity**)&local_278,
                                                                                   &local_1a8);
                    param_1->push_back(local_f8);
                }
                pOVar5 = (OBB*)(&m_pChildren)->HeapBeginPtr();
                pOVar7 = (OBB*)(&m_pChildren)->end();
                if (pOVar5 != pOVar7) {
                    local_1c0 = pOVar7;
                    do {
                        VisibilityTest(*(GraphNode**)pOVar5, param_1, param_2, (Frustum*)local_1b8, param_4, param_5,
                                       param_6, param_7, param_8);
                        pOVar5 = (OBB*)&pOVar5->field_8;
                    } while (pOVar5 != local_1c0);
                }
            } else {
                cVar3 = IsVisible(this);
                if (cVar3 != '\0') {
                    pOVar5 = (OBB*)GetWorldOBB(this);
                    new (&local_278) math::Frustum();
                    cVar3 = std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&,
                                               math::Frustum_const&, int, math::AABB_const&,
                                               math::OBB_const&)>::operator()((array*)param_6, (Frustum*)&field_512,
                                                                              &local_278, (int)local_1b8,
                                                                              (AABB*)(ulong)(uint)param_4, local_1c0);
                    if (cVar3 != '\0') {
                        if ((m_disableNDCProjectionTestSkipping == '\0') && (-1 < (char)field_248)) {
                            uVar9 = 2139095039;
                        } else {
                            this_00 = local_1b8;
                            if (param_8 != (Frustum*)0) {
                                this_00 = (OpenGLView*)param_8;
                            }
                            pMVar6 = (Matrix44T*)this_00->GetCursorMutex();
                            uVar9 = math::NDCProjectGetNDCProjectionValue(pOVar5, pMVar6);
                        }
                        if (m_disableNDCLodTest == '\0') {
                            uVar1 = (ulong)local_1b8 >> 32;
                            local_1b8 = (OpenGLView*)CONCAT44((int)uVar1, uVar9);
                            pfVar8 = (float*)std::array<float, 10ul>::operator[](
                                (array<float, 10ul>*)&m_ndcLodThresholdsSq, (long)param_4);
                            if ((float)local_1b8 < *pfVar8)
                                goto LAB_1007afbfa;
                        }
                        puVar4 = (uint*)std::array<unsigned int, 10ul>::operator[](
                            (array<unsigned int, 10ul>*)&field_472, (long)param_4);
                        *puVar4 = param_2;
                        local_1d8 = (GraphEntity*)GetLinkObjCount();
                        if (local_1d8 != (GraphEntity*)0) {
                            pMVar6 = (Matrix44T*)GetWorldTransformationMatrix(this);
                            new (&local_1a8) GraphEntityTransformData(pMVar6, &local_278);
                            std::pair<GraphEntity*, GraphEntityTransformData>::pair<GraphEntity*&,
                                                                                    GraphEntityTransformData, false>(
                                local_f8, &local_1d8, &local_1a8);
                            param_1->push_back(local_f8);
                        }
                    }
                }
            }
        }
    LAB_1007afbfa:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007afcf0, 160 bytes, placed by class name and debug map
    // GraphNode::VisibilityTrue(unsigned int, int, int)
    void GraphNode::VisibilityTrue(uint param_1, int param_2, int param_3) {
        uint* puVar1;
        undefined8* puVar2;
        undefined8* puVar3;

        if ((param_2 == param_3) || (puVar1 = (uint*)std::array<unsigned int, 10ul>::operator[](
                                         (array<unsigned int, 10ul>*)&field_472, (long)param_3),
                                     *puVar1 == param_1)) {
            puVar1 = (uint*)std::array<unsigned int, 10ul>::operator[]((array<unsigned int, 10ul>*)&field_472,
                                                                       (long)param_2);
            *puVar1 = param_1;
            puVar2 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
            puVar3 = (undefined8*)(&m_pChildren)->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                VisibilityTrue((GraphNode*)*puVar2, param_1, param_2, param_3);
            }
        }
    }

    // 0x1007afd90, 176 bytes, placed by class name and debug map
    // GraphNode::VisibilityFilter(unsigned int, int, int, std::function<bool (GraphNode const*)> const&)
    /* GraphNode::VisibilityFilter(unsigned int, int, int, std::function<bool
   (GraphNode const*)> const&) */

    void GraphNode::VisibilityFilter(uint param_1, int param_2, int param_3, function* param_4) {
        uint* puVar1;
        char cVar2;
        undefined8* puVar3;
        undefined8* puVar4;

        if ((param_2 != param_3) && (puVar1 = (uint*)std::array<unsigned int, 10ul>::operator[](
                                         (array<unsigned int, 10ul>*)&field_472, (long)param_3),
                                     *puVar1 != param_1)) {
            return;
        }
        cVar2 = std::function<bool(GraphNode_const*)>::operator()((function<bool(GraphNode_const*)>*)param_4, this);
        if (cVar2 != '\0') {
            puVar1 = (uint*)std::array<unsigned int, 10ul>::operator[]((array<unsigned int, 10ul>*)&field_472,
                                                                       (long)param_2);
            *puVar1 = param_1;
        }
        puVar4 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar3 = (undefined8*)(&m_pChildren)->end();
        for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
            VisibilityFilter((GraphNode*)*puVar4, param_1, param_2, param_3, param_4);
        }
    }

    // 0x1007afe60, 192 bytes, placed by class name and debug map
    // GraphNode::VisibilityTestAABB(unsigned int, math::AABB const&, int, int)
    void GraphNode::VisibilityTestAABB(uint param_1, AABB* param_2, int param_3, int param_4) {
        uint* puVar1;
        AABB* pAVar2;
        char cVar3;
        undefined8* puVar4;
        undefined8* puVar5;

        if ((param_3 != param_4) && (puVar1 = (uint*)std::array<unsigned int, 10ul>::operator[](
                                         (array<unsigned int, 10ul>*)&field_472, (long)param_4),
                                     *puVar1 != param_1)) {
            return;
        }
        pAVar2 = (AABB*)GetWorldAABB(this);
        if (((field_248 & 8) != 0) && (cVar3 = param_2->TestIntersection(pAVar2), cVar3 == '\0')) {
            return;
        }
        puVar1 =
            (uint*)std::array<unsigned int, 10ul>::operator[]((array<unsigned int, 10ul>*)&field_472, (long)param_3);
        *puVar1 = param_1;
        puVar5 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar4 = (undefined8*)(&m_pChildren)->end();
        for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
            VisibilityTestAABB((GraphNode*)*puVar5, param_1, param_2, param_3, param_4);
        }
    }

    // 0x1007aff20, 400 bytes, placed by class name and debug map
    // GraphNode::TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int, int, int, math::AABB const**)
    ulong GraphNode::TestIntersection(Vector3T* param_1, Vector3T* param_2, int param_3, int param_4, int param_5,
                                      AABB** param_6) {
        char cVar1;
        int* piVar2;
        AABB* this_00;
        undefined8* puVar3;
        undefined8* puVar4;
        ulong unaff_R12;
        undefined7 uVar5;
        bool bVar6;

        if ((param_4 != -1) && (piVar2 = (int*)std::array<unsigned int, 10ul>::operator[](
                                    (array<unsigned int, 10ul>*)&field_472, (long)param_4),
                                *piVar2 != param_3)) {
            unaff_R12 = 0;
            goto LAB_1007b0098;
        }
        if ((m_pEntity != (GraphEntity*)0) && (cVar1 = (**(code**)(m_pEntity->field_0 + 16))(), cVar1 != '\0')) {
            cVar1 = (**(code**)(m_pEntity->field_0 + 32))();
            uVar5 = (undefined7)(unaff_R12 >> 8);
            if (cVar1 == '\0') {
                this_00 = (AABB*)GetWorldAABB(this);
                if (((field_248 & 8) != 0) && (cVar1 = this_00->TestIntersection(param_1, param_2), cVar1 != '\0')) {
                    unaff_R12 = CONCAT71(uVar5, 1);
                    if (param_6 != (AABB**)0) {
                        *param_6 = this_00;
                    }
                    goto LAB_1007b0098;
                }
            } else {
                cVar1 = (**(code**)(m_pEntity->field_0 + 40))(m_pEntity, param_1, param_2, param_5);
                unaff_R12 = CONCAT71(uVar5, 1);
                if (cVar1 != '\0')
                    goto LAB_1007b0098;
            }
        }
        puVar3 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar4 = (undefined8*)(&m_pChildren)->end();
        bVar6 = puVar3 == puVar4;
        if (!bVar6) {
            cVar1 = TestIntersection((GraphNode*)*puVar3, param_1, param_2, param_3, param_4, param_5, param_6);
            while (cVar1 == '\0') {
                puVar3 = puVar3 + 1;
                bVar6 = puVar3 == puVar4;
                if (bVar6)
                    break;
                cVar1 = TestIntersection((GraphNode*)*puVar3, param_1, param_2, param_3, param_4, param_5, param_6);
            }
        }
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8), bVar6) ^ 1;
    LAB_1007b0098:
        return unaff_R12 & 4294967295;
    }

    // 0x1007b00b0, 192 bytes, placed by class name and debug map
    // GraphNode::TestIntersection(math::AABB const&)
    ulong GraphNode::TestIntersection(AABB* param_1) {
        char cVar1;
        AABB* this_00;
        undefined8* puVar2;
        undefined8* puVar3;
        ulong unaff_R12;
        bool bVar4;

        if (((m_pEntity != (GraphEntity*)0) && (cVar1 = (**(code**)(m_pEntity->field_0 + 16))(), cVar1 != '\0')) &&
            (this_00 = (AABB*)GetWorldAABB(this), (field_248 & 8) != 0)) {
            cVar1 = this_00->TestIntersection(param_1);
            unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8), 1);
            if (cVar1 != '\0')
                goto LAB_1007b0160;
        }
        puVar2 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar3 = (undefined8*)(&m_pChildren)->end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            cVar1 = TestIntersection((GraphNode*)*puVar2, param_1);
            while (cVar1 == '\0') {
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
                if (bVar4)
                    break;
                cVar1 = TestIntersection((GraphNode*)*puVar2, param_1);
            }
        }
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8), bVar4) ^ 1;
    LAB_1007b0160:
        return unaff_R12 & 4294967295;
    }

    // 0x1007b0170, 208 bytes, placed by class name and debug map
    // GraphNode::GetWorldTransformationMatrixAligned()
    GraphNode* GraphNode::GetWorldTransformationMatrixAligned() {
        Matrix44T* pMVar1;
        Matrix33T local_58[64];

        if ((field_248 & 4) != 0) {
            if ((field_248 & 64) != 0) {
                math::Matrix33T<float>::SetToDiagonal(*(float*)field_256, *(float*)(field_256 + 4),
                                                      *(float*)(field_256 + 8));
                (&field_320, (QuaternionT*)&field_220)->Set();
                field_248 = field_248 & 191;
            }
            math::operator*(local_58, &field_284);
            Set(local_58, (Vector3T*)&m_translation);
            if ((GraphNode*)m_pParent != (GraphNode*)0) {
                pMVar1 = (Matrix44T*)GetWorldTransformationMatrixAligned((GraphNode*)m_pParent);
                math::operator*((math*)local_58, (Matrix44T*)this, pMVar1);
                math::Matrix44T<float>::operator=((Matrix44T<float>*)this, (Matrix44T*)local_58);
            }
            field_248 = field_248 & 251;
        }
        return this;
    }

    // 0x1007b0270, 336 bytes, placed by class name and debug map
    // GraphNode::CalculateCentreZ(math::Matrix44T<float> const&)
    void GraphNode::CalculateCentreZ(Matrix44T* param_1) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        Vector4T<float>* pVVar4;
        AABB* this_00;
        float fVar5;
        undefined8 uVar6;
        float in_XMM1_Da;
        float local_20;
        float local_1c;

        if ((field_248 & 8) == 0) {
            pfVar3 = (float*)GetWorldTranslation(this);
            local_1c = *pfVar3;
            fVar5 = pfVar3[1];
            local_20 = pfVar3[2];
            pVVar4 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
            pfVar3 = (float*)math::Vector4T<float>::operator[](pVVar4, 2);
            local_1c = local_1c * *pfVar3;
            pVVar4 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
            pfVar3 = (float*)math::Vector4T<float>::operator[](pVVar4, 2);
        } else {
            this_00 = (AABB*)GetWorldAABB(this);
            uVar6 = this_00->GetCentrePos();
            fVar5 = (float)((ulong)uVar6 >> 32);
            pVVar4 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
            pfVar3 = (float*)math::Vector4T<float>::operator[](pVVar4, 2);
            local_1c = *pfVar3 * (float)uVar6;
            pVVar4 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
            pfVar3 = (float*)math::Vector4T<float>::operator[](pVVar4, 2);
            local_20 = in_XMM1_Da;
        }
        fVar1 = *pfVar3;
        pVVar4 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        pfVar3 = (float*)math::Vector4T<float>::operator[](pVVar4, 2);
        fVar2 = *pfVar3;
        pVVar4 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        pfVar3 = (float*)math::Vector4T<float>::operator[](pVVar4, 2);
        field_280 = local_20 * fVar2 + fVar5 * fVar1 + local_1c + *pfVar3;
    }

    // 0x1007b03c0, 272 bytes, placed by class name and debug map
    // GraphNode::UnionAABBWithChildren(bool)
    void GraphNode::UnionAABBWithChildren(bool param_1) {
        GraphNode* this_00;
        undefined8* puVar2;
        undefined8* puVar3;
        AABB* pAVar4;
        Vector3T* pVVar5;
        AABB local_68;
        AABB* local_40;
        GraphNode* local_38;

        if ((field_248 & 16) != 0) {
            local_38 = this;
            puVar2 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
            puVar3 = (undefined8*)(&m_pChildren)->end();
            if (puVar2 != puVar3) {
                local_40 = (AABB*)&local_38->field_96;
                do {
                    this_00 = (GraphNode*)*puVar2;
                    if (param_1) {
                        UnionAABBWithChildren(this_00, true);
                    }
                    if ((this_00->field_248 & 8) != 0) {
                        pAVar4 = (AABB*)this_00->GetCursorMutex();
                        new (&local_68) math::AABB(pAVar4);
                        pVVar5 = (Vector3T*)GetTranslation(this_00);
                        local_68.Translate(pVVar5);
                        if (local_68.IsValid() == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("childAABB.IsValid()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/scenegraph/GraphNode.cpp",
                                      642, (char*)0);
                        }
                        local_40->Union(&local_68);
                    }
                    puVar2 = puVar2 + 1;
                } while (puVar2 != puVar3);
            }
            MarkTreeInvalid(local_38, local_38, 'G');
        }
    }

    // 0x1007b04d0, 96 bytes, placed by class name and debug map
    // GraphNode::GetEntityLoadPercentage() const
    float GraphNode::GetEntityLoadPercentage() {
        float local_10;
        float local_c;

        local_10 = 0.0;
        local_c = 0.0;
        GetEntityLoadRecursive(this, &local_10, &local_c);
        if (local_10 == 0.0) {
            local_10 = 100.0;
        } else {
            local_10 = (local_c * 100.0) / local_10;
        }
        return local_10;
    }

    // 0x1007b0530, 192 bytes, placed by class name and debug map
    // GraphNode::GetEntityLoadRecursive(float&, float&) const
    void GraphNode::GetEntityLoadRecursive(float* param_1, float* param_2) {
        undefined8* puVar1;
        undefined8* puVar2;
        float fVar3;
        float fVar4;

        puVar1 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            GetEntityLoadRecursive((GraphNode*)*puVar1, param_1, param_2);
        }
        if ((m_pEntity != (GraphEntity*)0) && (fVar3 = (float)(**(code**)(m_pEntity->field_0 + 72))(), 0.0 < fVar3)) {
            *param_1 = *param_1 + fVar3;
            fVar4 = (float)(**(code**)(m_pEntity->field_0 + 80))();
            *param_2 = fVar4 * fVar3 + *param_2;
        }
    }

    // 0x1007b05f0, 192 bytes, placed by class name and debug map
    // GraphNode::InitPool()
    void GraphNode::InitPool() {
        SimplePool<GraphNode>* this;
        undefined8 uVar1;

        if (s_pool != (SimplePool<GraphNode>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("s_pool == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      693, "Pool already allocated");
        }
        this = operator_new(208);
        SimplePool<GraphNode>::SimplePool(this, 15000, 64, '\x01');
        s_pool = this;
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "scenegraph/GraphNode.cpp",
                            697, "Allocated GraphNode Pool of size: %i, at: %p", 15000, s_pool);
    }

    // 0x1007b06c0, 64 bytes, placed by class name and debug map
    // GraphNode::DeletePool()
    void GraphNode::DeletePool() {
        if (s_pool->empty() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("s_pool->empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/GraphNode.cpp",
                      702, (char*)0);
        }
        safe_delete<SimplePool<GraphNode>>((SimplePool**)&s_pool);
    }

    // 0x1007b0750, 848 bytes, placed by class name and debug map
    // GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)
    void GraphNode::RegisterVisibilityMenu(ContainerGroup* param_1) {
        Container* pCVar1;
        char* pcVar2;
        __7* p_Var3;
        float in_XMM2_Da;
        eastl::string local_58[32];
        allocator local_38[8];
        shared_ptr<tweak::Container> local_30[16];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "Visibility", local_38);
        (*(code*)param_1->field_0[30])(local_30, param_1, local_58);
        eastl::string::~basic_string(local_58);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_30);
        pCVar1->AddCheckBox("Disable NDC Threshold Test", (bool*)&m_disableNDCLodTest);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_30);
        pCVar1->AddCheckBox("Disable NDC Threshold Test Skipping", (bool*)&m_disableNDCProjectionTestSkipping);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 0);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 10.0, 0.0001, in_XMM2_Da, (float*)"Base Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 1);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Subrender Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 2);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 0 Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 3);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 1 Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 4);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 2 Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 5);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Sunlight Shadow Cascade 3 Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 6);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Point Light Shadows Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 7);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 0.5, 0.0001, in_XMM2_Da, (float*)"Reflection Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 8);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 10.0, 0.001, in_XMM2_Da, (float*)"Minimap Lod", p_Var3);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_30);
        p_Var3 = (__7*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)&m_ndcLodThresholds, 9);
        tweak::Container::AddSlider<float, GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::__7&>(
            pcVar2, 10.0, 0.001, in_XMM2_Da, (float*)"Light Probe Lod", p_Var3);
        local_30->~shared_ptr();
    }

    // 0x1007c4060, 64 bytes, placed by class name
    // GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::$_7::operator()() const
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::$_7::TEMPNAMEPLACEHOLDERVALUE()
   const */

    void GraphNode::RegisterVisibilityMenu(tweak::ContainerGroup&)::$_7::operator()() {
        graphics local_30;

        CalculateNDCLodThresholdSquares(&local_30, (array*)&m_ndcLodThresholds);
        _DAT_100f4382c = local_30.field_32;
        _DAT_100f4381c = local_30.field_16;
        uRam0000000100f43824 = local_30.field_24;
        _m_ndcLodThresholdsSq = local_30.field_0;
        puRam0000000100f43814 = local_30.field_8;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007b0720, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<SimplePool<graphics::GraphNode> >(SimplePool<graphics::GraphNode>*&)
    void safe_delete<SimplePool<graphics::GraphNode>>(SimplePool** param_1) {
        SimplePool<graphics::GraphNode>* this;

        this = (SimplePool<graphics::GraphNode>*)*param_1;
        if (this != (SimplePool<graphics::GraphNode>*)0) {
            ~SimplePool();
            operator_delete(this);
        }
        *param_1 = (SimplePool*)0;
    }

} // namespace jag
