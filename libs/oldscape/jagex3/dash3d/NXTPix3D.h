// libs/oldscape/jagex3/dash3d/NXTPix3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class NXTPix3D : public SoftwarePix3D // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~NXTPix3D();
        virtual void SetRenderZoom(int arg1, int arg2);
        virtual void SetRenderClipping(int arg1, int arg2, int arg3, int arg4);
        virtual void ResetOrigin();
        virtual void CalculateRenderDepth(int arg1);
        virtual void PrepareRender();
        virtual void GouraudTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     int arg9);
        virtual void FlatTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        virtual void TextureTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                                     int arg16, int arg17, int arg18, int arg19);
        virtual void TextureTriangleAffine(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                           int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14,
                                           int arg15, int arg16, int arg17, int arg18, int arg19);
        virtual void RenderCore_RenderTriangle(short arg1, short arg2, short arg3, short arg4, short arg5, short arg6,
                                               short arg7, short arg8, short arg9, short arg10, short arg11,
                                               short arg12, short arg13, short arg14, short arg15, short arg16,
                                               short arg17, short arg18, short arg19, short arg20, short arg21,
                                               short arg22, short arg23, short arg24);
        void TextureTriangleOpenGL(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                   int arg9, int arg10, int arg11, int arg12, float arg13, float arg14, float arg15,
                                   float arg16, float arg17, float arg18, int arg19);
        NXTPix3D(NXTRenderable& nxtRenderable);
        unsigned long long GetHeapSize();
        void SetMaxViewport(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void SetRenderOrigin(int arg1, int arg2);
        void GouraudTriangleOpenGL(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                   int arg9, int arg10, int arg11, int arg12, int arg13);
        void TextureTriangleAffineOpenGL(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                         int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                                         int arg16, int arg17, int arg18, int arg19, int arg20, int arg21, int arg22);
        static int64_t m_needUploadTextureData; // = 1
        static int64_t m_needColTabUpdate;

    private:
        int field_144;
        int field_148;
        uint8_t _unknown_152[8];
        ServerConnectionWorkItem field_160;
        uint8_t _unknown_176[8];
    };

    // 0x1003711c0
    ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::IterPlusMe(
        const ModelAppendList& modelAppendList, ModelLitImpl& modelLitImpl)
        : ModelAppendList() {
        *(uint8_t***)this = &PTR_Count_100efc6f8;
        *(ModelAppendList**)(this + 8) = modelAppendList;
        *(ModelLitImpl**)(this + 16) = modelLitImpl;
    }

    // 0x100371200
    long ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::Count() const {
        return (**(void (**)(...)) * *(uint64_t**)(this + 8))() + 1;
    }

    // 0x100371220
    uint64_t
    ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&,
                                   ModelAppendList const&)::IterPlusMe::GetBaseModel(unsigned long arg1) const {
        if (arg1 == 0) {
            return *(uint64_t*)(this + 16);
        }
        return (**(void (**)(...))(**(long**)(this + 8) + 8))(*(long**)(this + 8), arg1 - 1);
    }

    // 0x100371240
    void ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&,
                                        ModelAppendList const&)::IterPlusMe::GetTempModel(unsigned long arg1) {
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/ModelLit.cpp",
            84, "Cannot modify constant instant.");
    }

    // 0x100371610
    ShareLightBuffer::ShareLightBuffer(const ShareLightBuffer& shareLightBuffer)
        : shared_ptr(shareLightBuffer), field_16(shareLightBuffer.field_16), m_prepared(shareLightBuffer.m_prepared) {}

    // 0x1003718b0
    ShareLightRequest::ShareLightRequest(const ShareLightRequest& shareLightRequest) : shared_ptr(shareLightRequest) {
        uint64_t uVar1 = *(uint64_t*)&shareLightRequest.field_16;
        field_21 = shareLightRequest.field_21;
        *(uint64_t*)&field_16 = uVar1;
    }

    // 0x1003718f0
    ShareLightBuffer::~ShareLightBuffer() {
        field_16.~vector();
    }

    // 0x1003733f0
    NXTPix3D::~NXTPix3D() {}

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x100371280
    HillSkewBuildInput::HillSkewBuildInput() {
        new (&field_4) jag::math::Vector3T();
        new (&field_48) std::function<jag::math::Vector3T<int>(int)>();
        new (&field_96) std::function<void(int, int)>();
    }

    // 0x100371330
    HillSkewBuildInput::~HillSkewBuildInput() {
        field_96.~function();
        field_48.~function();
    }

    // 0x100371d70
    int PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::gSmart() {
        short sVar1 = gSmart1or2s();
        return (int)sVar1;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100371d80
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart1or2s() {
        short sVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 16384;
        } else {
            sVar2 = g1(this) - 64;
        }
        return (int)sVar2;
    }

} // namespace jag
