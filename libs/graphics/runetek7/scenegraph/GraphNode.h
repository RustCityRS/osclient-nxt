// libs/graphics/runetek7/scenegraph/GraphNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class GraphNode {
    public:
        GetChildren() const;
        GetChildren();
        GraphNode* Create<>();
        void SetTranslation(math::Vector3T<float> const&);
        void GetWorldTransformationMatrix();
        GetAABB();
        GetVisibleFrame(unsigned int) const;
        GetEntity();
        float* GetTranslation();
        void SetYRotation(float);
        GetParent() const;
        void MarkTreeInvalid(GraphNode*, unsigned char);
        GetPool();
        float GetTranslationY() const;
        GetRotation() const;
        bool IsAttached() const;
        GraphNode* Create<int>(int&&);
        void Translate(math::Vector3T<float> const&);
        GetWorldTranslation();
        void SetRotation(math::QuaternionT<float> const&);
        void SetScale(math::Vector3T<float> const&);
        void SetNDCProjectionTestEnabled(bool);
        void SetTranslationY(float);
        void
        OnRecursive<game::World::DestroyRenderingResources()::$_0>(game::World::DestroyRenderingResources()::$_0&&);
        void OnRecursive<game::World::MainLogic(unsigned int)::$_3>(game::World::MainLogic(unsigned int)::$_3&&);
        void
        OnRecursive<game::World::DestroyRenderingResources()::$_0&>(game::World::DestroyRenderingResources()::$_0&);
        void OnRecursive<game::World::MainLogic(unsigned int)::$_3&>(game::World::MainLogic(unsigned int)::$_3&);
        byte HasAABB() const;
        void SetTranslationComponents(float, float, float);
        GraphNode(int);
        ~GraphNode();
        void Destruct();
        void Detach();
        void SetAABB(math::AABB const&);
        void RemoveAABB();
        GetWorldAABB();
        void CalculateBounds();
        GetWorldOBB();
        void SetEntity(GraphEntity*);
        void Reset();
        void SetParent(GraphNode*);
        GraphNode* GetRootParent(GraphNode*);
        ulong FindNode(GraphNode*, GraphNode*);
        ulong ValidateAddition(GraphNode*);
        ValidateRemoval(GraphNode*);
        void AddChild(GraphNode*);
        void RemoveChild(GraphNode*);
        void VisibilityTest(unsigned int, math::Frustum const&, int, int, math::AABB const*, math::Frustum const*);
        IsVisible() const;
        void VisibilityTest(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&,
                            unsigned int, math::Frustum const&, int, int,
                            std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&,
                                               math::Frustum const&, int, math::AABB const&, math::OBB const&)> const&,
                            math::AABB const*, math::Frustum const*);
        void VisibilityTrue(unsigned int, int, int);
        void VisibilityFilter(unsigned int, int, int, std::function<bool(GraphNode const*)> const&);
        void VisibilityTestAABB(unsigned int, math::AABB const&, int, int);
        ulong TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int, int, int,
                               math::AABB const**);
        ulong TestIntersection(math::AABB const&);
        GraphNode* GetWorldTransformationMatrixAligned();
        void CalculateCentreZ(math::Matrix44T<float> const&);
        void UnionAABBWithChildren(bool);
        float GetEntityLoadPercentage() const;
        void GetEntityLoadRecursive(float&, float&) const;
        void InitPool();
        void DeletePool();
        void RegisterVisibilityMenu(tweak::ContainerGroup&);
        static /* 40 bytes */
            m_ndcLodThresholds; // = { 0, 985963430, 1022739087, 1025758986, 1027101164, 1032805417, 1028443341, 1022739087, 1022739087, 1045220557 }
        static /* 40 bytes */
            m_ndcLodThresholdsSq; // = { 0, 907476661, 980151802, 986822423, 990164445, 1000378414, 992204555, 980151802, 980151802, 1025758987 }
        static /* 1 bytes */ m_disableNDCLodTest;
        static /* 7 bytes */ m_disableNDCProjectionTestSkipping;
        static /* 8 bytes */ s_pool;

        // data members, from how the methods use this: 520 bytes
        char _unknown_0[208];
        float m_translation;  // offset 208
        float m_translationY; // offset 212
        float field_216;      // offset 216
        char _unknown_220[28];
        byte field_248; // offset 248
        char _unknown_249[7];
        ColourHSL field_256;  // offset 256
        undefined* m_pParent; // offset 272
        float field_280;      // offset 280
        undefined1 field_284; // offset 284
        char _unknown_285[75];
        undefined* m_pChildren; // offset 360
        char _unknown_368[96];
        GraphEntity* m_pEntity; // offset 464
        char _unknown_472[48];
    };

    class GraphNodeDelete {
    public:
        void operator()(GraphNode*) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1001c0a60, 16 bytes, inline, placed by class name and debug map
    // GraphNode::GetChildren() const
    /* GraphNode::GetChildren() */

    undefined** GraphNode::GetChildren() {
        return &m_pChildren;
    }

    // 0x1001cc8a0, 32 bytes, inline, placed by class name
    // GraphNode* GraphNode::Create<>()
    GraphNode* GraphNode::Create<>() {
        GetPool();
        return SimplePool<GraphNode>::Create<>();
    }

    // 0x1001ccab0, 48 bytes, inline, placed by class name
    // GraphNode::SetTranslation(math::Vector3T<float> const&)
    void GraphNode::SetTranslation(Vector3T* param_1) {
        (&m_translation, param_1)->SetXYZ();
        MarkTreeInvalid(this, this, '\a');
    }

    // 0x1001cd620, 16 bytes, inline, placed by class name
    // GraphNode::GetWorldTransformationMatrix()
    void GraphNode::GetWorldTransformationMatrix() {
        GetWorldTransformationMatrixAligned(this);
    }

    // 0x1001cecf0, 32 bytes, inline, placed by class name
    // GraphNode::GetVisibleFrame(unsigned int) const
    undefined4 GraphNode::GetVisibleFrame(uint param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<unsigned int, 10ul>::operator[]((array<unsigned int, 10ul>*)&field_472,
                                                                         (ulong)param_1);
        return *puVar1;
    }

    // 0x1001ced10, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GraphNode::GetEntity()
    /* ui::Text::GetLinkObjCount() const */

    ulonglong ui::Text::GetLinkObjCount() {
        return m_linkObjCount;
    }

    // 0x1001d1250, 64 bytes, inline, placed by class name
    // GraphNode::SetYRotation(float)
    void GraphNode::SetYRotation(float param_1) {
        (&field_220, (Vector3T*)PTR_UP_100ee66d0, param_1)->FromAxisAngle();
        MarkTreeInvalid(this, this, 'E');
    }

    // 0x1001d12e0, 16 bytes, inline, placed by class name
    // GraphNode::GetParent() const
    undefined* GraphNode::GetParent() {
        return m_pParent;
    }

    // 0x1001df130, 112 bytes, inline, placed by class name
    // GraphNode::MarkTreeInvalid(GraphNode*, unsigned char)
    void GraphNode::MarkTreeInvalid(GraphNode* param_1, uchar param_2) {
        undefined8* puVar1;
        undefined8* puVar2;

        param_1->field_248 = param_1->field_248 | param_2;
        puVar1 = (undefined8*)(&param_1->m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&param_1->m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            MarkTreeInvalid(this, (GraphNode*)*puVar1, param_2);
        }
    }

    // 0x1001edd30, 16 bytes, inline, placed by class name
    // GraphNode::GetPool()
    undefined8 GraphNode::GetPool() {
        return s_pool;
    }

    // 0x1003edd20, 16 bytes, inline, placed by class name
    // GraphNode::GetTranslationY() const
    float GraphNode::GetTranslationY() {
        return m_translationY;
    }

    // 0x1003f5b60, 16 bytes, inline, placed by class name
    // GraphNode::GetRotation() const
    undefined1* GraphNode::GetRotation() {
        return &field_220;
    }

    // 0x10040df40, 32 bytes, inline, placed by class name
    // GraphNode::IsAttached() const
    bool GraphNode::IsAttached() {
        return m_pParent != (undefined*)0;
    }

    // 0x100414350, 32 bytes, inline, placed by class name
    // GraphNode* GraphNode::Create<int>(int&&)
    GraphNode* GraphNode::Create<int>(int* param_1) {
        SimplePool<GraphNode>* this;

        this = (SimplePool<GraphNode>*)GetPool();
        return SimplePool<GraphNode>::Create<int>(this, param_1);
    }

    // 0x100414680, 48 bytes, inline, placed by class name
    // GraphNode::Translate(math::Vector3T<float> const&)
    void GraphNode::Translate(Vector3T* param_1) {
        math::Vector3T<float>::operator+=((Vector3T<float>*)&m_translation, param_1);
        MarkTreeInvalid(this, this, '\a');
    }

    // 0x10042a2e0, 144 bytes, inline, placed by class name
    // GraphNode::GetWorldTranslation()
    undefined1* GraphNode::GetWorldTranslation() {
        Vector3T* pVVar1;
        undefined8 local_28[2];

        if ((field_248 & 2) != 0) {
            if ((GraphNode*)m_pParent == (GraphNode*)0) {
                pVVar1 = (Vector3T*)&m_translation;
            } else {
                pVVar1 = (Vector3T*)GetWorldTranslation((GraphNode*)m_pParent);
                local_28[0] = math::operator+((Vector3T*)&m_translation, pVVar1);
                pVVar1 = (Vector3T*)local_28;
            }
            (&field_236, pVVar1)->SetXYZ();
            field_248 = field_248 & 249 | 4;
        }
        return &field_236;
    }

    // 0x10042d4c0, 48 bytes, inline, placed by class name
    // GraphNode::SetRotation(math::QuaternionT<float> const&)
    void GraphNode::SetRotation(QuaternionT* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&field_220, (Rect*)param_1);
        MarkTreeInvalid(this, this, 'E');
    }

    // 0x10042d4f0, 48 bytes, inline, placed by class name
    // GraphNode::SetScale(math::Vector3T<float> const&)
    void GraphNode::SetScale(Vector3T* param_1) {
        (field_256, param_1)->SetXYZ();
        MarkTreeInvalid(this, this, 'E');
    }

    // 0x100432400, 32 bytes, inline, placed by class name
    // GraphNode::SetNDCProjectionTestEnabled(bool)
    void GraphNode::SetNDCProjectionTestEnabled(bool param_1) {
        field_248 = param_1 << 7 | field_248 & 127;
    }

    // 0x100432580, 32 bytes, inline, placed by class name
    // GraphNode::SetTranslationY(float)
    void GraphNode::SetTranslationY(float param_1) {
        m_translationY = param_1;
        MarkTreeInvalid(this, this, '\a');
    }

    // 0x10043d410, 96 bytes, inline, placed by class name
    // void GraphNode::OnRecursive<game::World::DestroyRenderingResources()::$_0>(game::World::DestroyRenderingResources()::$_0&&)
    void GraphNode::OnRecursive<game::World::DestroyRenderingResources()::__0>(__0* param_1) {
        undefined8* puVar1;
        undefined8* puVar2;

        if ((GraphNode*)m_pEntity != (GraphNode*)0) {
            game::World::DestroyRenderingResources()::$_0::operator()((GraphNode*)m_pEntity, (GraphEntity*)param_1);
        }
        puVar1 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::DestroyRenderingResources()::__0&>((GraphNode*)*puVar1, param_1);
        }
    }

    // 0x10043ea80, 112 bytes, inline, placed by class name
    // void GraphNode::OnRecursive<game::World::MainLogic(unsigned int)::$_3>(game::World::MainLogic(unsigned int)::$_3&&)
    void GraphNode::OnRecursive<game::World::MainLogic(unsigned int)::__3>(__3* param_1) {
        undefined8* puVar1;
        undefined8* puVar2;

        if (m_pEntity != (GraphEntity*)0) {
            unsigned int->MainLogic()::$_3::operator()(param_1, this, m_pEntity);
        }
        puVar1 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::MainLogic(unsigned int)::__3&>((GraphNode*)*puVar1, param_1);
        }
    }

    // 0x10044fcd0, 96 bytes, inline, placed by class name
    // void GraphNode::OnRecursive<game::World::DestroyRenderingResources()::$_0&>(game::World::DestroyRenderingResources()::$_0&)
    void GraphNode::OnRecursive<game::World::DestroyRenderingResources()::__0&>(__0* param_1) {
        undefined8* puVar1;
        undefined8* puVar2;

        if ((GraphNode*)m_pEntity != (GraphNode*)0) {
            game::World::DestroyRenderingResources()::$_0::operator()((GraphNode*)m_pEntity, (GraphEntity*)param_1);
        }
        puVar1 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::DestroyRenderingResources()::__0&>((GraphNode*)*puVar1, param_1);
        }
    }

    // 0x100452ac0, 112 bytes, inline, placed by class name
    // void GraphNode::OnRecursive<game::World::MainLogic(unsigned int)::$_3&>(game::World::MainLogic(unsigned int)::$_3&)
    void GraphNode::OnRecursive<game::World::MainLogic(unsigned int)::__3&>(__3* param_1) {
        undefined8* puVar1;
        undefined8* puVar2;

        if (m_pEntity != (GraphEntity*)0) {
            unsigned int->MainLogic()::$_3::operator()(param_1, this, m_pEntity);
        }
        puVar1 = (undefined8*)(&m_pChildren)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_pChildren)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            OnRecursive<game::World::MainLogic(unsigned int)::__3&>((GraphNode*)*puVar1, param_1);
        }
    }

    // 0x1004926a0, 16 bytes, inline, placed by class name
    // GraphNode::HasAABB() const
    byte GraphNode::HasAABB() {
        return field_248 & 8;
    }

    // 0x10061f300, 48 bytes, inline, placed by class name
    // GraphNode::SetTranslationComponents(float, float, float)
    void GraphNode::SetTranslationComponents(float param_1, float param_2, float param_3) {
        m_translation = param_1;
        m_translationY = param_2;
        field_216 = param_3;
        MarkTreeInvalid(this, this, '\a');
    }

    // 0x1007af850, 32 bytes, inline, placed by class name
    // GraphNode::IsVisible() const
    undefined8 GraphNode::IsVisible() {
        if (m_pEntity == (GraphEntity*)0) {
            return 0;
        }
        return (**(code**)(m_pEntity->field_0 + 24))();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001c0ac0, 48 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::ProcessLightUpdates(RenderState::LightSubmissionRSeven const*, RenderState::LightSubmissionRSeven const*)
    void OSRenderCore_RenderThread_RSeven::ProcessLightUpdates(LightSubmissionRSeven* param_1,
                                                               LightSubmissionRSeven* param_2) {
        Scene* this_00;

        this_00 = (Scene*)std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator->(
            (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
        this_00->ProcessLightUpdates(param_1, param_2);
    }

    // 0x1001c0b40, 48 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::ProcessOverlayUpdates(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*)
    void OSRenderCore_RenderThread_RSeven::ProcessOverlayUpdates(OverlayRSeven* param_1, OverlayRSeven* param_2) {
        Scene* this_00;

        this_00 = (Scene*)std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator->(
            (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
        this_00->ProcessOverlayUpdates(param_1, param_2);
    }

} // namespace jag::oldscape
