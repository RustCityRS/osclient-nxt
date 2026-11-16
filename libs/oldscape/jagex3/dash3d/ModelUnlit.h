// libs/oldscape/jagex3/dash3d/ModelUnlit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelUnlit {
    public:
        // virtual methods in vtable order
        virtual ~ModelUnlit();
        void PrepareForShareLight(short arg1, short arg2);
        ModelUnlit* Load(jagex3::Js5& js5, int arg2, int arg3, bool arg4);
        ModelUnlit* Combine(const eastl::vector<shared_ptr<ModelUnlit>>& modelUnlits);
        auto Copy(const ModelUnlit& modelUnlit, bool arg2, bool arg3, bool arg4, bool arg5);
        void ShareLight(ModelUnlit& modelUnlit1, ModelUnlit& modelUnlit2, int arg3, int arg4, int arg5, bool arg6);
        ModelUnlit();
        int GetColour(int arg1, int arg2);
        int GetTexLight(int arg1);
        auto LightWithPrepared(int arg1, int arg2, int arg3);
        ModelUnlit(const ModelUnlit& modelUnlit);

    private:
        uint64_t field_8;
        short field_16;
        short field_18;
        uint8_t _unknown_20[6];
    };

    class ModelUnlitImpl {
    public:
        // virtual methods in vtable order
        virtual ~ModelUnlitImpl();
        virtual ModelUnlitImpl* GetTempModel(int arg1);
        virtual bool IsForRSeven() const;
        virtual bool IsUnlit() const;
        virtual void CalculateNormals();
        virtual ModelUnlitImpl* Light(int arg1, int arg2, int arg3, int arg4, int arg5);
        virtual void PrepareForShareLight(short arg1, short arg2);
        virtual ModelUnlitImpl* CopyForShareLight();
        virtual ModelUnlitImpl* HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5);
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
        bool IsClientLocAnim() const;
        bool IsLit() const;
        auto Load(jagex3::Js5& js5, int arg2, int arg3);
        void ShareLight(ModelUnlitImpl& modelUnlitImpl1, ModelUnlitImpl& modelUnlitImpl2, int arg3, int arg4, int arg5,
                        bool arg6);
        void Init();
        ModelUnlitImpl(unsigned char* arg1, unsigned long arg2, int arg3);
        void LoadOb3(unsigned char* arg1, unsigned long arg2);
        void LoadOb2(unsigned char* arg1, unsigned long arg2);
        void LoadOb3Engine200(unsigned char* arg1, unsigned long arg2);
        void LoadOb2Engine200(unsigned char* arg1, unsigned long arg2);
        ModelUnlitImpl(int arg1, int arg2, int arg3);
        ModelUnlitImpl(const eastl::vector<shared_ptr<ModelUnlit>>& modelUnlits);
        void AddPoint(ModelUnlitImpl& modelUnlitImpl, int arg2);
        ModelUnlitImpl(const ModelUnlit& modelUnlit, bool arg2, bool arg3, bool arg4, bool arg5);
        void HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5);
        void CalcBoundingCube();
        void GeometryChanged();
        unsigned long AddPoint(int arg1, int arg2, int arg3);
        int AddAxisTemplate(short arg1, short arg2, short arg3);
        void AddFace(int arg1, int arg2, int arg3, signed char arg4, signed char arg5, short arg6, short arg7);
        void PrepareAnim();
        void Animate(const AnimFrameSet& animFrameSet, int arg2);
        void Animate2(int arg1, eastl::vector<int> arg2, int arg3, int arg4, int arg5);
        void SplitAnimate(const AnimFrameSet& animFrameSet1, int arg2, const AnimFrameSet& animFrameSet2, int arg4,
                          int* arg5);
        void DiscardAnimLabels();
        int ResizeToSphere(int arg1);
        void CalculateTextureSet();
        void CalculateTexturesForFaces(shared_ptr<Array<short>>& arg1, Array<short>* arg2);
        void CalculateBoundingCuboid();
        ModelUnlitImpl();
        static bool m_debug;                                  // = 1
        static eastl::fixed_vector<int, 10000ul> m_shareMap;  // = fixed_vector<int, 10000ul>()
        static eastl::fixed_vector<int, 10000ul> m_shareMap2; // = fixed_vector<int, 10000ul>()
        static int32_t m_shareTic;
        static int32_t m_oX;
        static int32_t m_oY;
        static int32_t m_oZ;

    private:
        int field_8;
        int field_12;
        short field_16;
        short field_18;
        unsigned int field_20;
        uint8_t _unknown_24[72];
        int field_96;
        uint8_t _unknown_100[212];
        uint8_t field_312;
        uint8_t _unknown_313[3];
        int field_316;
        uint8_t _unknown_320[256];
        uint8_t field_576;
        uint8_t _unknown_577[3];
        int field_580;
        int field_584;
        int field_588;
        int field_592;
        int field_596;
        uint8_t _unknown_600[4];
    };

    // 0x100351e20
    void ModelUnlit::PrepareForShareLight(short arg1, short arg2) {
        field_16 = arg1;
        field_18 = arg2;
    }

    // 0x100351f60
    void ModelRSevenCommon::AddOperation<TransformOperation, jag::math::Matrix44T<float>>(
        jag::math::Matrix44T<float>&& matrix44) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        field_16->Flush(*this);
        make_shared<TransformOperation, jag::math::Matrix44T<float>>(&local_40, matrix44);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_30);
    }

    // 0x1003521a0
    void ModelRSevenCommon::AddOperation<RecolourOperation, unsigned short, unsigned short>(unsigned short&& arg1,
                                                                                            unsigned short&& arg2) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        field_16->Flush(*this);
        make_shared<RecolourOperation, unsigned short, unsigned short>(&local_48, arg1, arg2);
        local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        AddOperation(local_38);
    }

    // 0x100352260
    void ModelRSevenCommon::AddOperation<RetextureOperation, unsigned short, unsigned short>(unsigned short&& arg1,
                                                                                             unsigned short&& arg2) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        field_16->Flush(*this);
        make_shared<RetextureOperation, unsigned short, unsigned short>(&local_48, arg1, arg2);
        local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        AddOperation(local_38);
    }

    // 0x100352300
    void ModelRSevenCommon::AddOperation<MirrorOperation>() {
        ReturnValue local_38;
        shared_ptr<RSevenDebugPresetProvider> local_28;

        field_16->Flush(*this);
        make_shared<MirrorOperation>(&local_38);
        local_28.shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
        AddOperation(local_28);
    }

    // 0x100354050
    ModelUnlit::ModelUnlit() : ModelSource(), field_16(0), field_18(0) {}

    // 0x100370d40
    auto ModelUnlit::LightWithPrepared(int arg1, int arg2, int arg3) {
        auto result;
        uint64_t in_RAX;

        (*this->_vptr[4]._x7e___2)(&result, this, (unsigned long)(unsigned int)(int)field_16,
                                   (unsigned long)(unsigned int)(int)field_18, (unsigned long)(unsigned int)arg1,
                                   (unsigned long)(unsigned int)arg2,
                                   (((uint64_t)((int)((unsigned long)in_RAX >> 32)) << 32) | (uint32_t)arg3));
    }

    // 0x100370ed0
    void ModelUnlitImpl::PrepareForShareLight(short arg1, short arg2) {
        PrepareForShareLight(arg1, arg2);
        CalculateNormals();
    }

    // 0x10037a480
    ModelUnlit::ModelUnlit(const ModelUnlit& modelUnlit) : ModelSource(modelUnlit) {
        short sVar1 = modelUnlit.field_18;
        field_16 = modelUnlit.field_16;
        field_18 = sVar1;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x100352050
    Matrix33T<float> Matrix33RotationX<float>(float arg1) {
        Matrix33T<float>* in_RDI;
        uint64_t local_48;

        local_48._0_4_ = arg1;
        float local_2c = (float)::cos(arg1);
        local_48 = ::sin((float)local_48);
        ColourHSL local_78(1.0, 0.0, 0.0);
        ColourHSL local_68(0.0, local_2c, (float)local_48);
        ColourHSL local_58(0.0, -(float)local_48, local_2c);
        new (in_RDI) Matrix33T<float>(local_78, local_68, local_58);
    }

} // namespace jag::math
