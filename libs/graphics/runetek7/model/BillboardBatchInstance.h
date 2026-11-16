// libs/graphics/runetek7/model/BillboardBatchInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardBatchInstance {
    public:
        // virtual methods in vtable order
        virtual ~BillboardBatchInstance();
        virtual GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual void RenderDebug(RenderPassType, DrawableElement&) const;
        virtual void Transform(math::Matrix44T<float> const&);
        virtual void Translate(math::Vector3T<float> const&);
        virtual void Rotate(math::QuaternionT<float> const&, bool);
        virtual void Rotate90(Rotation90, bool);
        GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);
        GetModel() const;
        GetVertexAnimation() const;
        GetMaterial();
        GetMaterial() const;
        GetApproxMaterialInfoList() const;
        void IsTransformed() const;
        void SetTransformed(bool);
        void ClearAnimationState();
        void GetBillboardBatch();
        void GetBillboardBatch() const;
        void Reserve(BillboardBatchCombineHelper const&);
        void Append(BillboardBatchInstance const&, bool);
        BillboardBatchInstance(Model const&, unsigned short);
        BillboardBatchInstance(BillboardBatchInstance&&, Model const&);
        BillboardBatchInstance(BillboardBatchInstance const&, Model const&, bool);
        void SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&);
        void UpdateAnimation(ThreadPool&, unsigned int, math::Matrix44T<float> const&);
        void EndUpdateAnimation();
        void LoadMeshFromModelRawRT7(PacketView&);
        void SetInitialSource(int, unsigned char, int, int);
        void ChangeSourceExternalID(int, int);
        void ChangeSourceExternalIDs(int);
        GetFirstMaterialIDFromSource() const;
        ulong GetFirstSequenceIDFromSource() const;
        void BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul, true, eastl::allocator>&) const;
        void SetInitialMaterial(Material const&);
        void BakeHSLColors();
        void
        BakeTextureMeta(eastl::fixed_map<int, ModelTextureMeta, 64ul, true, eastl::less<int>, eastl::allocator> const&);
        void SortSections();
        int IsCombinableWith(BillboardBatchInstance const&, bool, bool, bool, TextureAtlas&);
        void Assign(BillboardBatchInstance const&);
        void DestroyRenderingResources();
        void Scale(math::Vector3T<float> const&);
        void HillChange(graphics::HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        LocationHelpers::LocationHillChangeData const&);
        void Rematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&);
        void RematerialSingle(unsigned short, unsigned short);
        void AmbientAdjust(unsigned short);
        void TintAdjust(signed char, signed char, signed char, unsigned char);
        void UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float);
        void CreateRenderingResources();
        void GatherDrawableElements(
            DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*);
        void GetAABB() const;
        void InitRenderPassEffects();
        static /* 5 bytes */ m_showWorldAABB;

        // data members, from how the methods use this: 1552 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        undefined** field_16;    // offset 16
        Model* field_24;         // offset 24
        shared_ptr field_32;     // offset 32
        RenderMaterial field_48; // offset 48
        char _unknown_592[64];
        GeometryBatchInstance field_656; // offset 656
    };

    // 0x100817f10, 32 bytes, inline, placed by class name and debug map
    // BillboardBatchInstance::IsTransformed() const
    void BillboardBatchInstance::IsTransformed() {
        MainLoopFrameTimer* this_00;

        this_00 = (MainLoopFrameTimer*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        MainLoopFrameTimer::GetFastUpdateLoopEnabled(this_00);
    }

    // 0x100818070, 48 bytes, inline, placed by class name and debug map
    // BillboardBatchInstance::SetTransformed(bool)
    void BillboardBatchInstance::SetTransformed(bool param_1) {
        RenderMaterial* this_00;

        this_00 = (RenderMaterial*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->SetAlphaTestThreshold(param_1);
    }

    // 0x1008188f0, 32 bytes, inline, placed by class name and debug map
    // BillboardBatchInstance::ClearAnimationState()
    void BillboardBatchInstance::ClearAnimationState() {
        field_656->ClearAnimationStateProvider();
    }

    // 0x100865a00, 16 bytes, inline, placed by class name
    // BillboardBatchInstance::GetBillboardBatch()
    /* BillboardBatchInstance::GetBillboardBatch() const */

    void BillboardBatchInstance::GetBillboardBatch() {
        shared_ptr<BillboardBatch>::operator*((shared_ptr<BillboardBatch>*)field_32);
    }

    // 0x100868b20, 32 bytes, inline, placed by class name
    // BillboardBatchInstance::GetAABB() const
    void BillboardBatchInstance::GetAABB() {
        Layout* this_00;
        type* in_RSI;

        this_00 = (Layout*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
    }

} // namespace jag::graphics
