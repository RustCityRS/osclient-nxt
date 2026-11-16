// libs/oldscape/jagex3/dash3d/NXTPix3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class NXTPix3D : public SoftwarePix3D // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~NXTPix3D();
        virtual void SetRenderZoom(int, int);
        virtual void SetRenderClipping(int, int, int, int);
        virtual void ResetOrigin();
        virtual void CalculateRenderDepth(int);
        virtual void PrepareRender();
        virtual void GouraudTriangle(int, int, int, int, int, int, int, int, int);
        virtual void FlatTriangle(int, int, int, int, int, int, int);
        virtual void TextureTriangle(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
                                     int, int, int);
        virtual void TextureTriangleAffine(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
                                           int, int, int, int);
        virtual void RenderCore_RenderTriangle(short, short, short, short, short, short, short, short, short, short,
                                               short, short, short, short, short, short, short, short, short, short,
                                               short, short, short, short);
        void TextureTriangleOpenGL(int, int, int, int, int, int, int, int, int, int, int, int, float, float, float,
                                   float, float, float, int);
        NXTPix3D(NXTRenderable&);
        ulonglong GetHeapSize();
        void SetMaxViewport(int, int, int, int, int, int);
        void SetRenderOrigin(int, int);
        void GouraudTriangleOpenGL(int, int, int, int, int, int, int, int, int, int, int, int, int);
        void TextureTriangleAffineOpenGL(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
                                         int, int, int, int, int, int);
        static /* 8 bytes */ m_needUploadTextureData; // = 1
        static /* 8 bytes */ m_needColTabUpdate;

        // data members, from how the methods use this: 196 bytes, the first 144 are SoftwarePix3D
        char _unknown_144[16];
        ServerConnectionWorkItem field_160; // offset 160
        GridRect field_176;                 // offset 176
    };

    // 0x100370ef0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // NXTPix3D::~NXTPix3D(): jumps straight to the base-object destructor

    // 0x100370f00, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // NXTPix3D::~NXTPix3D()
    void NXTPix3D::~NXTPix3D() {
        ~NXTPix3D(this);
        operator_delete(this);
    }

    // 0x1003711c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::IterPlusMe(ModelAppendList const&, ModelLitImpl&)
void ModelLitImpl::PrepareForAppend(shared_ptr<dash3d::
     ModelLit>&,ModelAppendList_const&)::IterPlusMe::IterPlusMe(oldscape
     ::dash3d::ModelAppendList_const&,ModelLitImpl__
               (ModelAppendList *param_1,undefined *param_2,undefined *param_3)
{
        ModelAppendList::ModelAppendList(param_1);
        param_1->field_0 = (undefined*)&PTR_Count_100efc6f8;
        param_1[1].field_0 = param_2;
        param_1[2].field_0 = param_3;
}

// 0x100371200, 32 bytes, inline, placed by debug map only (low confidence)
// ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::Count() const
/* Count() const */

long ModelLitImpl::
PrepareForAppend(shared_ptr<ModelLit>&,ModelAppendList_const&)
::IterPlusMe::Count()
{
        return (**(code**)**(undefined8**)(this + 8))() + 1;
}

// 0x100371220, 32 bytes, inline, placed by debug map only (low confidence)
// ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::GetBaseModel(unsigned long) const
/* GetBaseModel(unsigned long) const */

undefined8 ModelLitImpl::
PrepareForAppend(shared_ptr<ModelLit>&,ModelAppendList_const&)
::IterPlusMe::GetBaseModel(ulong param_1)
{
        if (param_1 == 0) {
            return *(undefined8*)(this + 16);
        }
        return (**(code**)(**(long**)(this + 8) + 8))(*(long**)(this + 8), param_1 - 1);
}

// 0x100371240, 64 bytes, inline, placed by debug map only (low confidence)
// ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::GetTempModel(unsigned long)
/* GetTempModel(unsigned long) */

void ModelLitImpl::
     PrepareForAppend(shared_ptr<ModelLit>&,ModelAppendList_const&)
     ::IterPlusMe::GetTempModel(ulong param_1)
{
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/ModelLit.cpp",
            84, "Cannot modify constant instant.");
}

// 0x100371600, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
// ShareLightBuffer::ShareLightBuffer(ShareLightBuffer const&): jumps straight to the base-object constructor

// 0x100371610, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// ShareLightBuffer::ShareLightBuffer(ShareLightBuffer const&)
void ShareLightBuffer::ShareLightBuffer
          (ShareLightBuffer *param_1)
{
        new (this) shared_ptr<Decor>(param_1);
        new (&field_16, (vector*)&param_1->field_16) eastl::vector<ShareLightRequest, eastl::allocator>();
        m_prepared = param_1->m_prepared;
}

// 0x1003718a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
// ShareLightRequest::ShareLightRequest(ShareLightRequest const&): jumps straight to the base-object constructor

// 0x1003718b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// ShareLightRequest::ShareLightRequest(ShareLightRequest const&)
void ShareLightRequest::ShareLightRequest
          (ShareLightRequest *param_1)
{
        undefined8 uVar1;

        new (this) shared_ptr<Decor>(param_1);
        uVar1 = *(undefined8*)&param_1->field_16;
        field_21 = param_1->field_21;
        *(undefined8*)&field_16 = uVar1;
}

// 0x1003718e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
// ShareLightBuffer::~ShareLightBuffer(): jumps straight to the base-object destructor

// 0x1003718f0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
// ShareLightBuffer::~ShareLightBuffer()
void ShareLightBuffer::~ShareLightBuffer()
{
        (&field_16)->~vector();
        ~shared_ptr();
}

// 0x1003733f0, 16 bytes, base-object destructor, inline, placed by class name
// NXTPix3D::~NXTPix3D()
void NXTPix3D::~NXTPix3D()
{
        ~Pix3D();
}

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x100371280, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // HillSkewBuildInput::HillSkewBuildInput()
    void HillSkewBuildInput::HillSkewBuildInput() {
        new (&field_4) jag::math::Vector3T<int>();
        std::function<jag::math::Vector3T<int>(int)>::function((function<jag::math::Vector3T<int>(int)>*)&field_48);
        std::function<void(int, int)>::function((function<void(int, int)>*)&field_96);
    }

    // 0x100371330, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // HillSkewBuildInput::~HillSkewBuildInput()
    void HillSkewBuildInput::~HillSkewBuildInput() {
        std::function<void(int, int)>::~function((function<void(int, int)>*)&field_96);
        std::function<jag::math::Vector3T<int>(int)>::~function((function<jag::math::Vector3T<int>(int)>*)&field_48);
    }

    // 0x100371d70, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::gSmart()
    int PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::gSmart(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        short sVar1;

        sVar1 = gSmart1or2s();
        return (int)sVar1;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100371d80, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gSmart1or2s()
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart1or2s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        short sVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 16384;
        } else {
            sVar2 = g1(this) - 64;
        }
        return (int)sVar2;
    }

} // namespace jag
