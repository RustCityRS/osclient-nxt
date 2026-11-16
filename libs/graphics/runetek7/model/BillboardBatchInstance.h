// libs/graphics/runetek7/model/BillboardBatchInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardBatchInstance {
    public:
        // virtual methods in vtable order
        virtual ~BillboardBatchInstance();
        virtual void GatherDrawableElements(DrawableQueue& arg1, RT7Core& arg2, const SceneViewData& arg3,
                                            const EffectManager& arg4);
        virtual void RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const;
        virtual void Transform(const math::Matrix44T<float>& matrix44);
        virtual void Translate(const math::Vector3T<float>& vector3);
        virtual void Rotate(const math::QuaternionT<float>& quaternion, bool arg2);
        virtual void Rotate90(Rotation90 rotation90, bool arg2);
        void GetTransformedTriangle(unsigned int arg1, math::Vector4T<float> (&arg2)[3]);
        void GetModel() const;
        GeometryBatchInstance GetVertexAnimation() const;
        RenderMaterial GetMaterial();
        RenderMaterial GetMaterial() const;
        uint8_t* GetApproxMaterialInfoList() const;
        void IsTransformed() const;
        void SetTransformed(bool arg1);
        void ClearAnimationState();
        void GetBillboardBatch();
        void GetBillboardBatch() const;
        void Reserve(const BillboardBatchCombineHelper& billboardBatchCombineHelper);
        void Append(const BillboardBatchInstance& billboardBatchInstance, bool arg2);
        BillboardBatchInstance(const Model& model, unsigned short arg2);
        BillboardBatchInstance(BillboardBatchInstance&& billboardBatchInstance, const Model& model);
        BillboardBatchInstance(const BillboardBatchInstance& billboardBatchInstance, const Model& model, bool arg3);
        void SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider);
        void UpdateAnimation(ThreadPool& threadPool, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        void EndUpdateAnimation();
        void LoadMeshFromModelRawRT7(PacketView& packetView);
        void SetInitialSource(int arg1, unsigned char arg2, int arg3, int arg4);
        void ChangeSourceExternalID(int arg1, int arg2);
        void ChangeSourceExternalIDs(int arg1);
        uint32_t GetFirstMaterialIDFromSource() const;
        unsigned long GetFirstSequenceIDFromSource() const;
        void BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul>& arg1) const;
        void SetInitialMaterial(const Material& material);
        void BakeHSLColors();
        void BakeTextureMeta(const eastl::fixed_map<int, ModelTextureMeta, 64ul>& fixed_map);
        void SortSections();
        bool IsCombinableWith(const BillboardBatchInstance& billboardBatchInstance, bool arg2, bool arg3, bool arg4,
                              TextureAtlas& textureAtlas);
        void Assign(const BillboardBatchInstance& billboardBatchInstance);
        void DestroyRenderingResources();
        void Scale(const math::Vector3T<float>& vector3);
        void HillChange(graphics::HillChange arg1, int arg2, const Array<Array<int>>& arg3,
                        const Array<Array<int>>& arg4, const LocationHelpers::LocationHillChangeData& arg5);
        void Rematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void RematerialSingle(unsigned short arg1, unsigned short arg2);
        void AmbientAdjust(unsigned short arg1);
        void TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        void UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6);
        void CreateRenderingResources();
        void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core, const SceneViewData& sceneViewData,
                                    const EffectManager& effectManager,
                                    const eastl::vector_map<int, FaceGroupRenderMasks>* arg5);
        void GetAABB() const;
        void InitRenderPassEffects();
        static bool m_showWorldAABB;

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        uint8_t** field_16;
        Model* field_24;
        shared_ptr field_32;
        RenderMaterial m_material;
        uint8_t _unknown_592[64];
        GeometryBatchInstance m_vertexAnimation;
    };

    // 0x100817f10
    void BillboardBatchInstance::IsTransformed() const {
        ((MainLoopFrameTimer*)(*field_32).operator->())->GetFastUpdateLoopEnabled();
    }

    // 0x100818070
    void BillboardBatchInstance::SetTransformed(bool arg1) {
        ((RenderMaterial*)(*field_32).operator->())->SetAlphaTestThreshold(arg1);
    }

    // 0x1008188f0
    void BillboardBatchInstance::ClearAnimationState() {
        m_vertexAnimation->ClearAnimationStateProvider();
    }

    // 0x100865a00
    void BillboardBatchInstance::GetBillboardBatch() {
        **field_32;
    }

    // 0x100868b20
    void BillboardBatchInstance::GetAABB() const {
        ((Layout*)(*field_32).operator->())->SSOBeginPtr();
    }

} // namespace jag::graphics
