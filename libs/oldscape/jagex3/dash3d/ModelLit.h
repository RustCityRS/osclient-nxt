// libs/oldscape/jagex3/dash3d/ModelLit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelLit {
    public:
        class AABB;
        // virtual methods in vtable order
        virtual ~ModelLit();
        ModelLit();
        ModelLit(const ModelLit& modelLit);
        static int32_t m_useAABBMouseCheck[4]; // = { 1, 0, 0, 0 }

    private:
        uint64_t field_8;
        uint8_t field_16;
    };

    class ModelLitImpl : public ModelRSevenLit // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModelLitImpl();
        virtual ModelLitImpl* GetTempModel(int arg1);
        virtual bool IsLit() const;
        virtual bool IsForRSeven() const;
        virtual void CalcBoundingCylinder();
        virtual int GetRadiusCylinder();
        virtual auto CopyForAnim(bool arg1, int arg2);
        virtual void Animate(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2);
        virtual void Animate(const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                             int arg2);
        virtual void SplitAnimate(const shared_ptr<AnimFrameSet>& animFrameSet1, int arg2,
                                  const shared_ptr<AnimFrameSet>& animFrameSet2, int arg4, int* arg5);
        virtual void
        MaskAnimate(const shared_ptr<AnimBase>& animBase,
                    const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet, int arg3,
                    Array<bool> arg4, bool arg5, bool arg6);
        virtual void MaskAnimate(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2, const Array<int>& arg3,
                                 bool arg4);
        virtual void Rotate90();
        virtual void Rotate180();
        virtual void Rotate270();
        virtual void RotateXAxis(int arg1);
        virtual void Translate(int arg1, int arg2, int arg3);
        virtual void Resize(int arg1, int arg2, int arg3);
        virtual void Tint(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        virtual ModelLitImpl* HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void PrepareForAppend(shared_ptr<ModelLit>& modelLit, const ModelAppendList& modelAppendList);
        virtual void AppendModel(const ModelLit* modelLit);
        virtual void GetMousePickingAabb(int arg1);
        bool IsClientLocAnim() const;
        bool IsUnlit() const;
        void PrepareThisForAppend(const ModelAppendList& modelAppendList);
        shared_ptr<ModelLitImpl> Create<>();
        void AllocateFaceBuffersForModel(const ModelLitImpl& modelLitImpl);
        void ResetBoundingCalculations();
        void CopyForAnim(bool arg1, ModelLitImpl& modelLitImpl, Array<signed char>& arg3);
        void AllocModelId();
        void CalcAABB(int arg1);
        void CalcBoundingSphere();
        int GetRadiusSphere();
        void Animate2(int arg1, const eastl::vector<int>& arg2, int arg3, int arg4, int arg5);
        void Pose(Skeleton& skeleton, int arg2);
        void AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet& oldscapeAnimKeyFrameSet,
                                          int arg2);
        void PoseSmooth(Skeleton& skeleton, int arg2);
        void DiscardAnimLabels();
        void TransformPoint(int arg1, const jag::math::Matrix44T<float>& matrix44);
        void PoseRigid(Skeleton& skeleton, int arg2);
        ModelLitImpl();
        static shared_ptr<ModelLitImpl> m_tempModel;
        static Array<signed char> m_tempFTran; // = Array<signed char>()
        static shared_ptr<ModelLitImpl> m_tempModel2;
        static Array<signed char> m_tempFTran2; // = Array<signed char>()
        static jag::math::Matrix44T<float> m_sumMatrix;
        static jag::math::Matrix44T<float> m_weightMatrix;
        static jag::math::Matrix44T<float> m_skinMatrix;
        static int32_t m_nextModelId;
        static int32_t m_oX;
        static int32_t m_oY;
        static int32_t m_oZ;

    private:
        uint8_t _unknown_108[140];
        shared_ptr field_248;
        shared_ptr field_264;
        shared_ptr field_280;
        shared_ptr field_296;
        ModelLit field_312;
        uint8_t _unknown_313[3];
        int field_316;
        uint8_t _unknown_320[168];
        unsigned int field_488;
        uint8_t field_492;
        uint8_t _unknown_493[3];
        uint32_t field_496;
        uint8_t field_500;
        uint8_t _unknown_501[3];
        uint32_t field_504;
        int field_508;
        int m_radiusCylinder;
        int field_516;
        int field_520;
        uint8_t _unknown_524[220];
        schar field_744;
        schar field_745;
        schar field_746;
        unsigned char field_747;
        short field_748;
        uint8_t _unknown_750[10];
    };

    // 0x10034c1c0
    shared_ptr<ModelLitImpl> ModelLitImpl::Create<>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        ModelLitImpl* this_00;
        shared_ptr<RSevenDebugPresetProvider>* in_RDI;
        int local_40[4];
        ModelLitImpl* local_30[2];

        auto arg1 = aligned_alloc(800, 8);
        if (arg1 == nullptr) {
            new (in_RDI) shared_ptr();
        } else {
            this_00 = (ModelLitImpl*)((long)arg1 + 32);
            ___bzero(this_00, 768);
            ModelLitImpl(this_00);
            local_40[0] = 1;
            local_30[0] = this_00;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<ModelLitImpl>, int, ModelLitImpl*&>(arg1, local_40, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (local_40) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
            (&local_30[0]->field_752)->operator=(local_40);
            in_RDI->shared_ptr<FileRSevenDebugPresetProvider, void>(*local_40);
        }
    }

    // 0x10034db60
    void ModelLitImpl::AllocModelId() {
        m_nextModelId = m_nextModelId + 8;
    }

    // 0x1003519a0
    ModelLit::ModelLit() : ModelSource(), field_16(0) {}

    // 0x100370e70
    void ModelLitImpl::GetMousePickingAabb(int arg1) {
        field_528[arg1];
    }

    // 0x100373010
    ModelLit::ModelLit(const ModelLit& modelLit) : ModelSource(modelLit), field_16(modelLit.field_16) {}

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    class HillSkewBuildInput {
    public:
        HillSkewBuildInput();
        ~HillSkewBuildInput();

        uint8_t _unknown_0[104];
    };

} // namespace jag::oldscape
