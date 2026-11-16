// libs/oldscape/jagex3/dash3d/ModelRSeven.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelRSevenCommon {
    public:
        bool IsDynamic() const;
        void AddOperation<FixNormalsOperation>();
        OperationBuffer* GetOperationBuffer() const;
        void AddOperation<CombineOperation, eastl::vector<OperationBuffer>>(
            eastl::vector<OperationBuffer>&& operationBuffers);
        void AddOperation<CombineOperation, OperationBuffer const&>(const OperationBuffer& operationBuffer);
        void HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5);
        void
        AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(jag::math::Vector3T<int>&& vector3,
                                                                                    int& arg2, int& arg3, bool&& arg4);
        ModelRSevenCommon(const ModelRSevenCommon& modelRSevenCommon);
        void AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int>>(int& arg1, int& arg2,
                                                                                jag::math::Vector3T<int>&& vector3);
        ~ModelRSevenCommon();
        void Rotate90();
        void RotateYAxis(int arg1);
        void Rotate180();
        void Rotate270();
        void AddOperation<TransformOperation, jag::math::Matrix44T<float>>(jag::math::Matrix44T<float>&& matrix44);
        void RotateXAxis(int arg1);
        void Translate(int arg1, int arg2, int arg3);
        void AddOperation<RecolourOperation, unsigned short, unsigned short>(unsigned short&& arg1,
                                                                             unsigned short&& arg2);
        void AddOperation<RetextureOperation, unsigned short, unsigned short>(unsigned short&& arg1,
                                                                              unsigned short&& arg2);
        void AddOperation<MirrorOperation>();
        void Resize(int arg1, int arg2, int arg3);
        void ResizePrecise(int arg1, int arg2, int arg3, int arg4);
        void AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(
            const shared_ptr<AnimFrameSet>& animFrameSet, int& arg2);
        void AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(
            shared_ptr<MayaPoseStateRSeven>&& mayaPoseStateRSeven);
        void AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&, Array<int> const&, bool&>(
            const shared_ptr<AnimFrameSet>& animFrameSet, int& arg2, const Array<int>& arg3, bool& arg4);
        void AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(signed char& arg1,
                                                                                                   signed char& arg2,
                                                                                                   signed char& arg3,
                                                                                                   unsigned char& arg4);
        ModelRSevenCommon(shared_ptr<jag::graphics::Model>&& model, bool arg2);
        void
        AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model>>(shared_ptr<jag::graphics::Model>&& model);

    private:
        uint8_t _unknown_0[16];
        ShareLightBuffer field_16;
        uint8_t _unknown_65[7];
        bool m_dynamic;
    };

    class ModelRSevenLit {
    public:
        // virtual methods in vtable order
        virtual ~ModelRSevenLit();
        virtual ModelRSevenLit* GetTempModel(int arg1);
        virtual bool IsForRSeven() const;
        virtual bool IsClientLocAnim() const;
        virtual void CalcBoundingCylinder();
        virtual int GetRadiusCylinder();
        virtual ModelRSevenLit* CopyForAnim(bool arg1, int arg2);
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
        virtual ModelRSevenLit* HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void PrepareForAppend(shared_ptr<ModelLit>& modelLit, const ModelAppendList& modelAppendList);
        virtual void AppendModel(const ModelLit* modelLit);
        bool IsUnlit() const;
        bool IsLit() const;
        ModelRSevenLit* Copy() const;
        ModelRSevenLit(LightCall lightCall, const ModelRSevenUnlit& modelRSevenUnlit);
        ModelRSevenLit(LightCall lightCall, const ModelRSevenUnlit& modelRSevenUnlit, int arg3, int arg4, int arg5,
                       int arg6, int arg7);
        ModelRSevenLit(const ModelRSevenLit& modelRSevenLit);

    private:
        int field_8;
        uint8_t _unknown_12[4];
        ModelLit field_16;
        uint8_t _unknown_17[7];
        ModelRSevenCommon field_24;
        uint8_t _unknown_97[3];
        int m_radiusCylinder;
        uint8_t _unknown_104[4];
    };

    class ModelRSevenUnlit : public ModelUnlitImpl // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModelRSevenUnlit();
        virtual DelayedStream* GetTempModel(int arg1);
        virtual bool IsClientLocAnim() const;
        virtual bool IsForRSeven() const;
        virtual void CalculateNormals();
        virtual ModelRSevenUnlit* Light(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void PrepareForShareLight(short arg1, short arg2);
        virtual auto CopyForShareLight();
        virtual ModelRSevenUnlit* HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void Rotate90();
        virtual void Rotate180();
        virtual void Rotate270();
        virtual void RotateYAxis(int arg1);
        virtual void RotateXAxis(int arg1);
        virtual void Translate(int arg1, int arg2, int arg3);
        virtual void Recolour(short arg1, short arg2);
        virtual void Retexture(short arg1, short arg2);
        virtual void Mirror();
        virtual void Resize(int arg1, int arg2, int arg3);
        virtual void ResizePrecise(int arg1, int arg2, int arg3, int arg4);
        bool IsLit() const;
        bool IsUnlit() const;
        ModelRSevenUnlit* Load(jagex3::Js5& js5, int arg2, int arg3, bool arg4);
        void BakedVertexLighting();
        auto Combine(const eastl::vector<shared_ptr<ModelUnlit>>& modelUnlits);
        auto Copy(const ModelUnlit& modelUnlit);
        ModelRSevenUnlit* Copy() const;
        void ShareLight(ModelRSevenUnlit& modelRSevenUnlit1, ModelRSevenUnlit& modelRSevenUnlit2, int arg3, int arg4,
                        int arg5, bool arg6);
        ModelRSevenUnlit(shared_ptr<jag::graphics::Model>&& model, bool arg2);
        ModelRSevenUnlit(const ModelRSevenUnlit& modelRSevenUnlit);

    private:
        long field_8;
        short field_16;
        short field_18;
        uint8_t _unknown_20[20];
        ShareLightBuffer field_40;
        uint8_t _unknown_89[8];
    };

    // 0x1002f0710
    bool ModelRSevenCommon::IsDynamic() const {
        return field_72;
    }

    // 0x100350e90
    void ModelRSevenCommon::AddOperation<FixNormalsOperation>() {
        ReturnValue local_38;
        shared_ptr<RSevenDebugPresetProvider> local_28;

        field_16->Flush(*this);
        make_shared<FixNormalsOperation>(&local_38);
        local_28.shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
        AddOperation(local_28);
    }

    // 0x1003511f0
    OperationBuffer* ModelRSevenCommon::GetOperationBuffer() const {
        field_16->Flush(*this);
        return (OperationBuffer*)this;
    }

    // 0x100351250
    void ModelRSevenCommon::AddOperation<CombineOperation, eastl::vector<OperationBuffer>>(
        eastl::vector<OperationBuffer>&& operationBuffers) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        field_16->Flush(*this);
        make_shared<CombineOperation, eastl::vector<OperationBuffer>>(&local_40, operationBuffers);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_30);
    }

    // 0x100351490
    void
    ModelRSevenCommon::AddOperation<CombineOperation, OperationBuffer const&>(const OperationBuffer& operationBuffer) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        field_16->Flush(*this);
        make_shared<CombineOperation, OperationBuffer const&>(&local_40, operationBuffer);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_30);
    }

    // 0x1003518a0
    void ModelRSevenLit::HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5) {
        field_24->HillSkew(arg1, arg2, arg3, arg4, arg5);
    }

    // 0x1003518b0
    void ModelRSevenCommon::AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(
        jag::math::Vector3T<int>&& vector3, int& arg2, int& arg3, bool&& arg4) {
        shared_ptr<RSevenDebugPresetProvider> local_50;
        ReturnValue local_40;

        field_16->Flush(*this);
        make_shared<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(&local_40, vector3, arg2, arg3,
                                                                                   arg4);
        local_50.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_50);
    }

    // 0x1003519d0
    ModelRSevenCommon::ModelRSevenCommon(const ModelRSevenCommon& modelRSevenCommon)
        : OperationBuffer(modelRSevenCommon), field_16(modelRSevenCommon.field_16),
          m_dynamic(modelRSevenCommon.m_dynamic) {}

    // 0x100351ac0
    void ModelRSevenCommon::AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int>>(
        int& arg1, int& arg2, jag::math::Vector3T<int>&& vector3) {
        ReturnValue local_50;
        shared_ptr<RSevenDebugPresetProvider> local_40;

        field_16->Flush(*this);
        make_shared<LightOperation, int&, int&, jag::math::Vector3T<int>>(&local_50, arg1, arg2, vector3);
        local_40.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
        AddOperation(local_40);
    }

    // 0x100351b60
    ModelRSevenCommon::~ModelRSevenCommon() {
        field_16->~ShareLightBuffer();
    }

    // 0x100370d70
    void ModelRSevenUnlit::Rotate90() {
        field_24->Rotate90();
    }

    // 0x100370d80
    void ModelRSevenUnlit::Rotate180() {
        field_24->Rotate180();
    }

    // 0x100370d90
    void ModelRSevenUnlit::Rotate270() {
        field_24->Rotate270();
    }

    // 0x100370da0
    void ModelRSevenUnlit::RotateYAxis(int arg1) {
        field_24.RotateYAxis(arg1);
    }

    // 0x100370db0
    void ModelRSevenUnlit::RotateXAxis(int arg1) {
        field_24->RotateXAxis(arg1);
    }

    // 0x100370dc0
    void ModelRSevenUnlit::Translate(int arg1, int arg2, int arg3) {
        field_24->Translate(arg1, arg2, arg3);
    }

    // 0x100370dd0
    void ModelRSevenUnlit::Resize(int arg1, int arg2, int arg3) {
        field_24->Resize(arg1, arg2, arg3);
    }

    // 0x100370de0
    void ModelRSevenUnlit::ResizePrecise(int arg1, int arg2, int arg3, int arg4) {
        field_24.ResizePrecise(arg1, arg2, arg3, arg4);
    }

    // 0x100370df0
    ModelRSevenLit* ModelRSevenLit::GetTempModel(int arg1) {
        uint32_t in_register_00000034;
        ReturnValue local_28;

        make_shared<ModelRSevenLit, ModelRSevenLit&>(
            &local_28, (ModelRSevenLit*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

} // namespace jag::oldscape::dash3d
