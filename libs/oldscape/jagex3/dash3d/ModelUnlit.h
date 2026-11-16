// libs/oldscape/jagex3/dash3d/ModelUnlit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelUnlit {
    public:
        // virtual methods in vtable order
        virtual ~ModelUnlit();
        void PrepareForShareLight(short, short);
        ModelUnlit* Load(jagex3::Js5&, int, int, bool);
        ModelUnlit* Combine(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&);
        ModelUnlit* Copy(ModelUnlit const&, bool, bool, bool, bool);
        void ShareLight(ModelUnlit&, ModelUnlit&, int, int, int, bool);
        ModelUnlit();
        int GetColour(int, int);
        int GetTexLight(int);
        LightWithPrepared(int, int, int);
        ModelUnlit(ModelUnlit const&);

        // data members, from how the methods use this: 26 bytes
        undefined* field_0; // offset 0, vtable pointer
        undefined8 field_8; // offset 8
        short field_16;     // offset 16
        short field_18;     // offset 18
        char _unknown_20[6];
    };

    class ModelUnlitImpl {
    public:
        // virtual methods in vtable order
        virtual ~ModelUnlitImpl();
        virtual GetTempModel(int);
        virtual IsForRSeven() const;
        virtual IsUnlit() const;
        virtual void CalculateNormals();
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
        IsClientLocAnim() const;
        IsLit() const;
        ModelUnlitImpl* Load(jagex3::Js5&, int, int);
        void ShareLight(ModelUnlitImpl&, ModelUnlitImpl&, int, int, int, bool);
        void Init();
        ModelUnlitImpl(unsigned char*, unsigned long, int);
        void LoadOb3(unsigned char*, unsigned long);
        void LoadOb2(unsigned char*, unsigned long);
        void LoadOb3Engine200(unsigned char*, unsigned long);
        void LoadOb2Engine200(unsigned char*, unsigned long);
        ModelUnlitImpl(int, int, int);
        ModelUnlitImpl(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&);
        void AddPoint(ModelUnlitImpl&, int);
        ModelUnlitImpl(ModelUnlit const&, bool, bool, bool, bool);
        void HillSkew(int, int, int, int, int);
        void CalcBoundingCube();
        void GeometryChanged();
        ulong AddPoint(int, int, int);
        int AddAxisTemplate(short, short, short);
        void AddFace(int, int, int, signed char, signed char, short, short);
        void PrepareAnim();
        void Animate(AnimFrameSet const&, int);
        void Animate2(int, eastl::vector<int, eastl::allocator>, int, int, int);
        void SplitAnimate(AnimFrameSet const&, int, AnimFrameSet const&, int, int*);
        void DiscardAnimLabels();
        int ResizeToSphere(int);
        void CalculateTextureSet();
        void CalculateTexturesForFaces(shared_ptr<Array<short, eastl::allocator>>&, Array<short, eastl::allocator>*);
        void CalculateBoundingCuboid();
        ModelUnlitImpl();
        static /* 1 bytes */ m_debug;                                    // = 1
        static eastl::fixed_vector<int, 10000ul, true, eastl::allocator> /* 40040 bytes */
            m_shareMap; // = fixed_vector<int,10000ul,true,eastl::allocator>()
        static eastl::fixed_vector<int, 10000ul, true, eastl::allocator> /* 40040 bytes */
            m_shareMap2; // = fixed_vector<int,10000ul,true,eastl::allocator>()
        static /* 4 bytes */ m_shareTic;
        static /* 4 bytes */ m_oX;
        static /* 4 bytes */ m_oY;
        static /* 4 bytes */ m_oZ;

        // data members, from how the methods use this: 604 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        int field_12;        // offset 12
        short field_16;      // offset 16
        short field_18;      // offset 18
        uint field_20;       // offset 20
        char _unknown_24[72];
        int field_96; // offset 96
        char _unknown_100[76];
        shared_ptr field_176; // offset 176
        char _unknown_192[16];
        shared_ptr field_208; // offset 208
        char _unknown_224[32];
        shared_ptr field_256; // offset 256
        shared_ptr field_272; // offset 272
        char _unknown_288[24];
        undefined1 field_312; // offset 312
        char _unknown_313[3];
        int field_316; // offset 316
        char _unknown_320[96];
        shared_ptr field_416; // offset 416
        shared_ptr field_432; // offset 432
        shared_ptr field_448; // offset 448
        shared_ptr field_464; // offset 464
        shared_ptr field_480; // offset 480
        shared_ptr field_496; // offset 496
        char _unknown_512[64];
        undefined1 field_576; // offset 576
        char _unknown_577[3];
        int field_580; // offset 580
        int field_584; // offset 584
        int field_588; // offset 588
        int field_592; // offset 592
        int field_596; // offset 596
        char _unknown_600[4];
    };

    // 0x100351e20, 16 bytes, inline, placed by class name and debug map
    // ModelUnlit::PrepareForShareLight(short, short)
    void ModelUnlit::PrepareForShareLight(short param_1, short param_2) {
        field_16 = param_1;
        field_18 = param_2;
    }

    // 0x100351f60, 144 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<TransformOperation, jag::math::Matrix44T<float> >(jag::math::Matrix44T<float>&&)
    void ModelRSevenCommon::AddOperation<TransformOperation, jag::math::Matrix44T<float>>(Matrix44T* param_1) {
        shared_ptr local_40;
        shared_ptr local_30;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<TransformOperation, jag::math::Matrix44T<float>>((jag*)&local_40, param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddOperation(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1003521a0, 144 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<RecolourOperation, unsigned short, unsigned short>(unsigned short&&, unsigned short&&)
    void ModelRSevenCommon::AddOperation<RecolourOperation, unsigned short, unsigned short>(ushort* param_1,
                                                                                            ushort* param_2) {
        shared_ptr local_48;
        shared_ptr local_38;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<RecolourOperation, unsigned short, unsigned short>((jag*)&local_48, param_1, param_2);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_48);
        AddOperation(&local_38);
        local_38.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x100352260, 144 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<RetextureOperation, unsigned short, unsigned short>(unsigned short&&, unsigned short&&)
    void ModelRSevenCommon::AddOperation<RetextureOperation, unsigned short, unsigned short>(ushort* param_1,
                                                                                             ushort* param_2) {
        shared_ptr local_48;
        shared_ptr local_38;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<RetextureOperation, unsigned short, unsigned short>((jag*)&local_48, param_1, param_2);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_48);
        AddOperation(&local_38);
        local_38.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x100352300, 128 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<MirrorOperation>()
    void ModelRSevenCommon::AddOperation<MirrorOperation>() {
        shared_ptr local_38;
        shared_ptr local_28;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<MirrorOperation>((jag*)&local_38);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_28, &local_38);
        AddOperation(&local_28);
        local_28.~shared_ptr();
        local_38.~shared_ptr();
    }

    // 0x100354050, 48 bytes, base-object constructor, inline, placed by class name
    // ModelUnlit::ModelUnlit()
    void ModelUnlit::ModelUnlit() {
        new (this) ModelSource();
        field_0 = PTR_vtable_100ee8978 + 16;
        field_16 = 0;
        field_18 = 0;
    }

    // 0x100370d40, 48 bytes, inline, placed by class name
    // ModelUnlit::LightWithPrepared(int, int, int)
    undefined8 ModelUnlit::LightWithPrepared(int param_1, int param_2, int param_3) {
        undefined4 in_ECX;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        undefined4 in_R8D;

        (**(code**)(*(long*)CONCAT44(in_register_00000034, param_2) + 72))(
            param_1, param_2, (int)*(short*)(CONCAT44(in_register_00000034, param_2) + 16),
            (int)*(short*)(CONCAT44(in_register_00000034, param_2) + 18), param_3, in_ECX, in_R8D);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100370ea0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ModelUnlitImpl::~ModelUnlitImpl(): jumps straight to the base-object destructor

    // 0x100370eb0, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // ModelUnlitImpl::~ModelUnlitImpl()
    void ModelUnlitImpl::~ModelUnlitImpl() {
        ~ModelUnlitImpl(this);
        operator_delete(this);
    }

    // 0x100370ed0, 32 bytes, inline, placed by class header (inline)
    // ModelUnlitImpl::PrepareForShareLight(short, short)
    void ModelUnlitImpl::PrepareForShareLight(short param_1, short param_2) {
        PrepareForShareLight(param_1, param_2);
        CalculateNormals(this);
    }

    // 0x10037a480, 48 bytes, base-object constructor, inline, placed by class name
    // ModelUnlit::ModelUnlit(ModelUnlit const&)
    void ModelUnlit::ModelUnlit(ModelUnlit* param_1) {
        short sVar1;

        new (this) ModelSource(param_1);
        field_0 = PTR_vtable_100ee8978 + 16;
        sVar1 = param_1->field_18;
        field_16 = param_1->field_16;
        field_18 = sVar1;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x100352050, 176 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationX<float>(float)
    math* Matrix33RotationX<float>(float param_1) {
        ColourHSL local_78;
        ColourHSL local_68;
        ColourHSL local_58;
        undefined8 local_48;
        float local_2c;

        local_48._0_4_ = param_1;
        local_2c = (float)::cos(param_1);
        local_48 = ::sin((float)local_48);
        new (&local_78) ColourHSL(1.0, 0.0, 0.0);
        new (&local_68) ColourHSL(0.0, local_2c, (float)local_48);
        new (&local_58) ColourHSL(0.0, -(float)local_48, local_2c);
        new (this) Matrix33T<float>((Vector3T*)&local_78, (Vector3T*)&local_68, (Vector3T*)&local_58);
        return this;
    }

} // namespace jag::math
