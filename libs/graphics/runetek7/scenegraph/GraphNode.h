// libs/graphics/runetek7/scenegraph/GraphNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class GraphNode {
    public:
        uint8_t* GetChildren() const;
        uint8_t* GetChildren();
        GraphNode* Create<>();
        void SetTranslation(const math::Vector3T<float>& vector3);
        Matrix44T<float>* GetWorldTransformationMatrix();
        uint8_t* GetAABB();
        uint32_t GetVisibleFrame(unsigned int arg1) const;
        GraphEntity* GetEntity();
        float* GetTranslation();
        void SetYRotation(float arg1);
        ReturnValue GetParent() const;
        void MarkTreeInvalid(GraphNode* graphNode, unsigned char arg2);
        void GetPool();
        float GetTranslationY() const;
        QuaternionT<float>* GetRotation() const;
        bool IsAttached() const;
        GraphNode* Create<int>(int&& arg1);
        void Translate(const math::Vector3T<float>& vector3);
        uint8_t* GetWorldTranslation();
        void SetRotation(const math::QuaternionT<float>& quaternion);
        void SetScale(const math::Vector3T<float>& vector3);
        void SetNDCProjectionTestEnabled(bool arg1);
        void SetTranslationY(float arg1);
        void OnRecursive<game::World::DestroyRenderingResources()::$_0>(
            game::World::DestroyRenderingResources()::$_0&& arg1);
        void OnRecursive<game::World::MainLogic(unsigned int)::$_3>(game::World::MainLogic(unsigned int)::$_3&& arg1);
        void OnRecursive<game::World::DestroyRenderingResources()::$_0&>(
            game::World::DestroyRenderingResources()::$_0& arg1);
        void OnRecursive<game::World::MainLogic(unsigned int)::$_3&>(game::World::MainLogic(unsigned int)::$_3& arg1);
        bool HasAABB() const;
        void SetTranslationComponents(float arg1, float arg2, float arg3);
        GraphNode(int arg1);
        ~GraphNode();
        void Destruct();
        void Detach();
        void SetAABB(const math::AABB& aabb);
        void RemoveAABB();
        uint8_t* GetWorldAABB();
        void CalculateBounds();
        uint8_t* GetWorldOBB();
        void SetEntity(GraphEntity* graphEntity);
        void Reset();
        void SetParent(GraphNode* graphNode);
        GraphNode* GetRootParent(GraphNode* graphNode);
        unsigned long FindNode(GraphNode* graphNode1, GraphNode* graphNode2);
        unsigned long ValidateAddition(GraphNode* graphNode);
        uint32_t ValidateRemoval(GraphNode* graphNode);
        void AddChild(GraphNode* graphNode);
        void RemoveChild(GraphNode* graphNode);
        void VisibilityTest(unsigned int arg1, const math::Frustum& frustum1, int arg3, int arg4,
                            const math::AABB* aabb, const math::Frustum* frustum2);
        bool IsVisible() const;
        void VisibilityTest(
            eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs, unsigned int arg2,
            const math::Frustum& frustum1, int arg4, int arg5,
            std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                               math::AABB const&, math::OBB const&)> const& callback,
            const math::AABB* aabb, const math::Frustum* frustum2);
        void VisibilityTrue(unsigned int arg1, int arg2, int arg3);
        void VisibilityFilter(unsigned int arg1, int arg2, int arg3,
                              std::function<bool(GraphNode const*)> const& callback);
        void VisibilityTestAABB(unsigned int arg1, const math::AABB& aabb, int arg3, int arg4);
        unsigned long TestIntersection(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                       int arg3, int arg4, int arg5, const math::AABB** arg6);
        unsigned long TestIntersection(const math::AABB& aabb);
        auto GetWorldTransformationMatrixAligned();
        void CalculateCentreZ(const math::Matrix44T<float>& matrix44);
        void UnionAABBWithChildren(bool arg1);
        float GetEntityLoadPercentage() const;
        void GetEntityLoadRecursive(float& arg1, float& arg2) const;
        void InitPool();
        void DeletePool();
        void RegisterVisibilityMenu(tweak::ContainerGroup& containerGroup);
        static int32_t m_ndcLodThresholds
            [10]; // = { 0, 985963430, 1022739087, 1025758986, 1027101164, 1032805417, 1028443341, 1022739087, 1022739087, 1045220557 }
        static int32_t m_ndcLodThresholdsSq
            [10]; // = { 0, 907476661, 980151802, 986822423, 990164445, 1000378414, 992204555, 980151802, 980151802, 1025758987 }
        static bool m_disableNDCLodTest;
        static bool m_disableNDCProjectionTestSkipping;
        static int64_t s_pool;

    private:
        uint8_t _unknown_0[208];
        float m_translation;
        float m_translationY;
        float field_216;
        uint8_t _unknown_220[28];
        uint8_t field_248;
        uint8_t _unknown_249[7];
        ColourHSL field_256;
        ReturnValue m_pParent;
        float field_280;
        uint8_t _unknown_284[76];
        uint8_t m_pChildren[8];
        uint8_t _unknown_368[96];
        GraphEntity* m_entity;
        uint8_t _unknown_472[48];
    };

    class GraphNodeDelete {
    public:
        void operator()(GraphNode* graphNode) const;

        uint8_t _unknown_0[1];
    };

    // 0x1001c0a60
    uint8_t* GraphNode::GetChildren() const {
        return m_pChildren;
    }

    // 0x1001cc8a0
    GraphNode* GraphNode::Create<>() {
        return ((SimplePool<GraphNode>*)GetPool())->Create<>();
    }

    // 0x1001ccab0
    void GraphNode::SetTranslation(const math::Vector3T<float>& vector3) {
        m_translation.SetXYZ(vector3);
        MarkTreeInvalid(this, '\a');
    }

    // 0x1001cd620
    Matrix44T<float>* GraphNode::GetWorldTransformationMatrix() {
        auto pRVar1 = GetWorldTransformationMatrixAligned((ReturnValue*)this);
        return (Matrix44T<float>*)pRVar1;
    }

    // 0x1001cecf0
    uint32_t GraphNode::GetVisibleFrame(unsigned int arg1) const {
        uint32_t* puVar1 = &field_472[(unsigned long)arg1];
        return *puVar1;
    }

    // 0x1001ced10
    GraphEntity* GraphNode::GetEntity() {
        return m_linkObjCount;
    }

    // 0x1001d1250
    void GraphNode::SetYRotation(float arg1) {
        field_220.FromAxisAngle(*PTR_UP_100ee66d0, arg1);
        MarkTreeInvalid(this, 'E');
    }

    // 0x1001d12e0
    ReturnValue GraphNode::GetParent() const {
        return *(uint64_t*)m_pParent;
    }

    // 0x1001df130
    void GraphNode::MarkTreeInvalid(GraphNode* graphNode, unsigned char arg2) {
        graphNode->field_248 = graphNode->field_248 | arg2;
        auto puVar1 = graphNode->m_pChildren->HeapBeginPtr();
        auto puVar2 = graphNode->m_pChildren->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            MarkTreeInvalid(*puVar1, arg2);
        }
    }

    // 0x1001edd30
    void GraphNode::GetPool() {
        return s_pool;
    }

    // 0x1003edd20
    float GraphNode::GetTranslationY() const {
        return m_translationY;
    }

    // 0x1003f5b60
    QuaternionT<float>* GraphNode::GetRotation() const {
        return (QuaternionT<float>*)&field_220;
    }

    // 0x10040df40
    bool GraphNode::IsAttached() const {
        return *(long*)m_pParent != 0;
    }

    // 0x100414350
    GraphNode* GraphNode::Create<int>(int&& arg1) {
        return ((SimplePool<GraphNode>*)GetPool())->Create<int>(arg1);
    }

    // 0x100414680
    void GraphNode::Translate(const math::Vector3T<float>& vector3) {
        m_translation += vector3;
        MarkTreeInvalid(this, '\a');
    }

    // 0x10042a2e0
    uint8_t* GraphNode::GetWorldTranslation() {
        Vector3T<float>* pVVar1;
        uint64_t local_28[2];

        if ((field_248 & 2) != 0) {
            if (*(GraphNode**)m_pParent == nullptr) {
                pVVar1 = (Vector3T<float>*)&m_translation;
            } else {
                pVVar1 = (Vector3T<float>*)GetWorldTranslation(*(GraphNode**)m_pParent);
                local_28[0] = m_translation + *pVVar1;
                pVVar1 = (Vector3T<float>*)local_28;
            }
            field_236.SetXYZ(*pVVar1);
            field_248 = field_248 & 249 | 4;
        }
        return &field_236;
    }

    // 0x10042d4c0
    void GraphNode::SetRotation(const math::QuaternionT<float>& quaternion) {
        field_220 = quaternion;
        MarkTreeInvalid(this, 'E');
    }

    // 0x10042d4f0
    void GraphNode::SetScale(const math::Vector3T<float>& vector3) {
        field_256->SetXYZ(vector3);
        MarkTreeInvalid(this, 'E');
    }

    // 0x100432400
    void GraphNode::SetNDCProjectionTestEnabled(bool arg1) {
        field_248 = arg1 << 7 | field_248 & 127;
    }

    // 0x100432580
    void GraphNode::SetTranslationY(float arg1) {
        m_translationY = arg1;
        MarkTreeInvalid(this, '\a');
    }

    // 0x10043d410
    void GraphNode::OnRecursive<game::World::DestroyRenderingResources()::$_0>(
        game::World::DestroyRenderingResources()::$_0&& arg1) {
        GraphEntity* in_RDX;

        if (m_entity != nullptr) {
            game::World::DestroyRenderingResources()::$_0::operator()((__0*)m_entity, (GraphNode*)arg1, in_RDX);
        }
        auto puVar1 = m_pChildren->HeapBeginPtr();
        auto puVar2 = m_pChildren->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::DestroyRenderingResources()::__0&>((GraphNode*)*puVar1, arg1);
        }
    }

    // 0x10043ea80
    void GraphNode::OnRecursive<game::World::MainLogic(unsigned int)::$_3>(
        game::World::MainLogic(unsigned int)::$_3&& arg1) {
        if (m_entity != nullptr) {
            unsigned int->MainLogic()::$_3::operator()((__3*)arg1, this, m_entity);
        }
        auto puVar1 = m_pChildren->HeapBeginPtr();
        auto puVar2 = m_pChildren->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::MainLogic(unsigned int)::__3&>((GraphNode*)*puVar1, arg1);
        }
    }

    // 0x10044fcd0
    void GraphNode::OnRecursive<game::World::DestroyRenderingResources()::$_0&>(
        game::World::DestroyRenderingResources()::$_0& arg1) {
        GraphEntity* in_RDX;

        if (m_entity != nullptr) {
            game::World::DestroyRenderingResources()::$_0::operator()((__0*)m_entity, (GraphNode*)arg1, in_RDX);
        }
        auto puVar1 = m_pChildren->HeapBeginPtr();
        auto puVar2 = m_pChildren->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::DestroyRenderingResources()::__0&>((GraphNode*)*puVar1, arg1);
        }
    }

    // 0x100452ac0
    void GraphNode::OnRecursive<game::World::MainLogic(unsigned int)::$_3&>(
        game::World::MainLogic(unsigned int)::$_3& arg1) {
        if (m_entity != nullptr) {
            unsigned int->MainLogic()::$_3::operator()((__3*)arg1, this, m_entity);
        }
        auto puVar1 = m_pChildren->HeapBeginPtr();
        auto puVar2 = m_pChildren->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::MainLogic(unsigned int)::__3&>((GraphNode*)*puVar1, arg1);
        }
    }

    // 0x1004926a0
    bool GraphNode::HasAABB() const {
        return field_248 & 8;
    }

    // 0x10061f300
    void GraphNode::SetTranslationComponents(float arg1, float arg2, float arg3) {
        m_translation = arg1;
        m_translationY = arg2;
        field_216 = arg3;
        MarkTreeInvalid(this, '\a');
    }

    // 0x1007af850
    bool GraphNode::IsVisible() const {
        if (m_entity == nullptr) {
            return 0;
        }
        return m_entity->IsVisibleEntity();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001c0ac0
    void OSRenderCore_RenderThread_RSeven::ProcessLightUpdates(
        const RenderState::LightSubmissionRSeven* lightSubmissionRSeven1,
        const RenderState::LightSubmissionRSeven* lightSubmissionRSeven2) {
        ((Scene*)field_16.operator->())->ProcessLightUpdates(lightSubmissionRSeven1, lightSubmissionRSeven2);
    }

    // 0x1001c0b40
    void OSRenderCore_RenderThread_RSeven::ProcessOverlayUpdates(RenderState::OverlayRSeven* overlayRSeven1,
                                                                 RenderState::OverlayRSeven* overlayRSeven2) {
        ((Scene*)field_16.operator->())->ProcessOverlayUpdates(overlayRSeven1, overlayRSeven2);
    }

} // namespace jag::oldscape
