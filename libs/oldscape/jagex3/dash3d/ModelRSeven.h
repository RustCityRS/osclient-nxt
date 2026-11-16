// libs/oldscape/jagex3/dash3d/ModelRSeven.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelRSevenCommon {
    public:
        bool IsDynamic() const;
        void AddOperation<FixNormalsOperation>();
        ModelRSevenCommon* GetOperationBuffer() const;
        void AddOperation<CombineOperation, eastl::vector<OperationBuffer, eastl::allocator>>(
            eastl::vector<OperationBuffer, eastl::allocator>&&);
        void AddOperation<CombineOperation, OperationBuffer const&>(OperationBuffer const&);
        void HillSkew(int, int, int, int, int);
        void AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(jag::math::Vector3T<int>&&,
                                                                                         int&, int&, bool&&);
        ModelRSevenCommon(ModelRSevenCommon const&);
        void AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int>>(int&, int&, jag::math::Vector3T<int>&&);
        ~ModelRSevenCommon();
        void Rotate90();
        void RotateYAxis(int);
        void Rotate180();
        void Rotate270();
        void AddOperation<TransformOperation, jag::math::Matrix44T<float>>(jag::math::Matrix44T<float>&&);
        void RotateXAxis(int);
        void Translate(int, int, int);
        void AddOperation<RecolourOperation, unsigned short, unsigned short>(unsigned short&&, unsigned short&&);
        void AddOperation<RetextureOperation, unsigned short, unsigned short>(unsigned short&&, unsigned short&&);
        void AddOperation<MirrorOperation>();
        void Resize(int, int, int);
        void ResizePrecise(int, int, int, int);
        void AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(shared_ptr<AnimFrameSet> const&,
                                                                                       int&);
        void AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(shared_ptr<MayaPoseStateRSeven>&&);
        void AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&,
                          Array<int, eastl::allocator> const&, bool&>(shared_ptr<AnimFrameSet> const&, int&,
                                                                      Array<int, eastl::allocator> const&, bool&);
        void AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(signed char&,
                                                                                                   signed char&,
                                                                                                   signed char&,
                                                                                                   unsigned char&);
        ModelRSevenCommon(shared_ptr<jag::graphics::Model>&&, bool);
        void AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model>>(shared_ptr<jag::graphics::Model>&&);

        // data members, from how the methods use this: 73 bytes
        char _unknown_0[16];
        ShareLightBuffer field_16; // offset 16
        char _unknown_65[7];
        bool m_dynamic; // offset 72
    };

    class ModelRSevenLit {
    public:
        // virtual methods in vtable order
        virtual ~ModelRSevenLit();
        virtual ModelRSevenLit* GetTempModel(int);
        virtual IsForRSeven() const;
        virtual IsClientLocAnim() const;
        virtual void CalcBoundingCylinder();
        virtual int GetRadiusCylinder();
        virtual CopyForAnim(bool, int);
        virtual void Animate(shared_ptr<AnimFrameSet> const&, int);
        virtual void Animate(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int);
        virtual void SplitAnimate(shared_ptr<AnimFrameSet> const&, int, shared_ptr<AnimFrameSet> const&, int, int*);
        virtual void MaskAnimate(shared_ptr<AnimBase> const&,
                                 shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int,
                                 Array<bool, eastl::allocator>, bool, bool);
        virtual void MaskAnimate(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool);
        virtual void Rotate90();
        virtual void Rotate180();
        virtual void Rotate270();
        virtual void RotateXAxis(int);
        virtual void Translate(int, int, int);
        virtual void Resize(int, int, int);
        virtual void Tint(signed char, signed char, signed char, unsigned char);
        virtual HillSkewCopy(int, int, int, int, int);
        virtual void HillSkew(int, int, int, int, int);
        virtual void PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&);
        virtual void AppendModel(ModelLit const*);
        IsUnlit() const;
        IsLit() const;
        Copy() const;
        ModelRSevenLit(LightCall, ModelRSevenUnlit const&);
        ModelRSevenLit(LightCall, ModelRSevenUnlit const&, int, int, int, int, int);
        ModelRSevenLit(ModelRSevenLit const&);

        // data members, from how the methods use this: 108 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        char _unknown_12[4];
        ModelLit field_16; // offset 16
        char _unknown_17[7];
        ModelRSevenCommon field_24; // offset 24
        char _unknown_97[3];
        int m_radiusCylinder; // offset 100
        char _unknown_104[4];
    };

    class ModelRSevenUnlit : public ModelUnlitImpl // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModelRSevenUnlit();
        virtual GetTempModel(int);
        virtual IsClientLocAnim() const;
        virtual IsForRSeven() const;
        virtual CalculateNormals();
        virtual Light(int, int, int, int, int);
        virtual void PrepareForShareLight(short, short);
        virtual CopyForShareLight();
        virtual HillSkewCopy(int, int, int, int, int);
        virtual void Rotate90();
        virtual void Rotate180();
        virtual void Rotate270();
        virtual void RotateYAxis(int);
        virtual void RotateXAxis(int);
        virtual void Translate(int, int, int);
        virtual void Recolour(short, short);
        virtual void Retexture(short, short);
        virtual void Mirror();
        virtual void Resize(int, int, int);
        virtual void ResizePrecise(int, int, int, int);
        IsLit() const;
        IsUnlit() const;
        ModelRSevenUnlit* Load(jagex3::Js5&, int, int, bool);
        void BakedVertexLighting();
        ModelRSevenUnlit* Combine(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&);
        ModelRSevenUnlit* Copy(ModelUnlit const&);
        Copy() const;
        void ShareLight(ModelRSevenUnlit&, ModelRSevenUnlit&, int, int, int, bool);
        ModelRSevenUnlit(shared_ptr<jag::graphics::Model>&&, bool);
        ModelRSevenUnlit(ModelRSevenUnlit const&);

        // data members, from how the methods use this: 89 bytes
        undefined** field_0; // offset 0, vtable pointer
        long field_8;        // offset 8
        short field_16;      // offset 16
        short field_18;      // offset 18
        char _unknown_20[20];
        ShareLightBuffer field_40; // offset 40
    };

    // 0x1002f0710, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ModelRSevenCommon::IsDynamic() const
    /* game::ChangeLocationRequest::OverrideTransform() const */

    undefined1 game::ChangeLocationRequest::OverrideTransform() {
        return field_72;
    }

    // 0x100350e90, 128 bytes, inline, placed by class header (inline)
    // void ModelRSevenCommon::AddOperation<FixNormalsOperation>()
    void ModelRSevenCommon::AddOperation<FixNormalsOperation>() {
        shared_ptr local_38;
        shared_ptr local_28;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<FixNormalsOperation>((jag*)&local_38);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_28, &local_38);
        AddOperation(&local_28);
        local_28.~shared_ptr();
        local_38.~shared_ptr();
    }

    // 0x1003511f0, 32 bytes, inline, placed by class header (inline)
    // ModelRSevenCommon::GetOperationBuffer() const
    ModelRSevenCommon* ModelRSevenCommon::GetOperationBuffer() {
        (field_16, (OperationBuffer*)this)->Flush();
        return this;
    }

    // 0x100351250, 144 bytes, inline, placed by class header (inline)
    // void ModelRSevenCommon::AddOperation<CombineOperation, eastl::vector<OperationBuffer, eastl::allocator> >(eastl::vector<OperationBuffer, eastl::allocator>&&)
    void ModelRSevenCommon::AddOperation<CombineOperation, eastl::vector<OperationBuffer, eastl::allocator>>(
        vector* param_1) {
        shared_ptr local_40;
        shared_ptr local_30;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<CombineOperation, eastl::vector<OperationBuffer, eastl::allocator>>((jag*)&local_40, param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddOperation(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100351490, 144 bytes, inline, placed by class header (inline)
    // void ModelRSevenCommon::AddOperation<CombineOperation, OperationBuffer const&>(OperationBuffer const&)
    void ModelRSevenCommon::AddOperation<CombineOperation, OperationBuffer_const&>(OperationBuffer* param_1) {
        shared_ptr local_40;
        shared_ptr local_30;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<CombineOperation, OperationBuffer_const&>((jag*)&local_40, param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddOperation(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1003518a0, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenLit::HillSkew(int, int, int, int, int)
    void ModelRSevenLit::HillSkew(int param_1, int param_2, int param_3, int param_4, int param_5) {
        (field_24, param_1, param_2, param_3, param_4, param_5)->HillSkew();
    }

    // 0x1003518b0, 160 bytes, inline, placed by class header (inline)
    // void ModelRSevenCommon::AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(jag::math::Vector3T<int>&&, int&, int&, bool&&)
    void ModelRSevenCommon::AddOperation<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>(
        Vector3T* param_1, int* param_2, int* param_3, bool* param_4) {
        shared_ptr local_50;
        shared_ptr local_40;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<HillSkewOperation, jag::math::Vector3T<int>, int&, int&, bool>((jag*)&local_40, param_1, param_2,
                                                                                   param_3, param_4);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_50, &local_40);
        AddOperation(&local_50);
        local_50.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1003519d0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ModelRSevenCommon::ModelRSevenCommon(ModelRSevenCommon const&)
    void ModelRSevenCommon::ModelRSevenCommon(ModelRSevenCommon* param_1) {
        new (this) OperationBuffer(param_1);
        new (field_16, (ShareLightBuffer*)param_1->field_16) ShareLightBuffer();
        m_dynamic = param_1->m_dynamic;
    }

    // 0x100351ac0, 160 bytes, inline, placed by class header (inline)
    // void ModelRSevenCommon::AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int> >(int&, int&, jag::math::Vector3T<int>&&)
    void ModelRSevenCommon::AddOperation<LightOperation, int&, int&, jag::math::Vector3T<int>>(int* param_1,
                                                                                               int* param_2,
                                                                                               Vector3T* param_3) {
        shared_ptr local_50;
        shared_ptr local_40;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<LightOperation, int&, int&, jag::math::Vector3T<int>>((jag*)&local_50, param_1, param_2, param_3);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_40, &local_50);
        AddOperation(&local_40);
        local_40.~shared_ptr();
        local_50.~shared_ptr();
    }

    // 0x100351b60, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ModelRSevenCommon::~ModelRSevenCommon()
    void ModelRSevenCommon::~ModelRSevenCommon() {
        field_16->~ShareLightBuffer();
        ~LRUHashCacheWrapper();
    }

    // 0x100370d10, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ModelRSevenUnlit::~ModelRSevenUnlit(): jumps straight to the base-object destructor

    // 0x100370d20, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ModelRSevenUnlit::~ModelRSevenUnlit()
    /* ModelRSevenLit::~ModelRSevenLit() */

    void ModelRSevenLit::~ModelRSevenLit() {
        ~ModelRSevenLit(this);
        operator_delete(this);
    }

    // 0x100370d70, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::Rotate90()
    /* ModelRSevenLit::Rotate90() */

    void ModelRSevenLit::Rotate90() {
        field_24->Rotate90();
    }

    // 0x100370d80, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::Rotate180()
    /* ModelRSevenLit::Rotate180() */

    void ModelRSevenLit::Rotate180() {
        field_24->Rotate180();
    }

    // 0x100370d90, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::Rotate270()
    /* ModelRSevenLit::Rotate270() */

    void ModelRSevenLit::Rotate270() {
        field_24->Rotate270();
    }

    // 0x100370da0, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::RotateYAxis(int)
    void ModelRSevenUnlit::RotateYAxis(int param_1) {
        (&field_24, param_1)->RotateYAxis();
    }

    // 0x100370db0, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::RotateXAxis(int)
    /* ModelRSevenLit::RotateXAxis(int) */

    void ModelRSevenLit::RotateXAxis(int param_1) {
        (field_24, param_1)->RotateXAxis();
    }

    // 0x100370dc0, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::Translate(int, int, int)
    /* ModelRSevenLit::Translate(int, int, int) */

    void ModelRSevenLit::Translate(int param_1, int param_2, int param_3) {
        (field_24, param_1, param_2, param_3)->Translate();
    }

    // 0x100370dd0, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::Resize(int, int, int)
    /* ModelRSevenLit::Resize(int, int, int) */

    void ModelRSevenLit::Resize(int param_1, int param_2, int param_3) {
        (field_24, param_1, param_2, param_3)->Resize();
    }

    // 0x100370de0, 16 bytes, inline, placed by class header (inline)
    // ModelRSevenUnlit::ResizePrecise(int, int, int, int)
    void ModelRSevenUnlit::ResizePrecise(int param_1, int param_2, int param_3, int param_4) {
        (&field_24, param_1, param_2, param_3, param_4)->ResizePrecise();
    }

    // 0x100370df0, 80 bytes, inline, placed by class header (inline)
    // ModelRSevenLit::GetTempModel(int)
    ModelRSevenLit* ModelRSevenLit::GetTempModel(int param_1) {
        undefined4 in_register_00000034;
        shared_ptr local_28;

        make_shared<ModelRSevenLit, ModelRSevenLit&>((jag*)&local_28,
                                                     (ModelRSevenLit*)CONCAT44(in_register_00000034, param_1));
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

} // namespace jag::oldscape::dash3d
