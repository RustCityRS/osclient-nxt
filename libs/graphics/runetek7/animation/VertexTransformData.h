// libs/graphics/runetek7/animation/VertexTransformData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class SafeSimpleAllocatorEASTL {
    public:
        SafeSimpleAllocatorEASTL(SimpleAllocator* simpleAllocator, const char* str);
        void deallocate(void* arg1, unsigned long arg2);
        uint64_t allocate(unsigned long arg1);
        uint64_t allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3);
        uint64_t allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3, int arg4);

    private:
        SimpleAllocator* field_0;
    };

    // 0x10082e220
    SafeSimpleAllocatorEASTL::SafeSimpleAllocatorEASTL(SimpleAllocator* simpleAllocator, const char* str)
        : field_0(simpleAllocator) {
        if (simpleAllocator == nullptr) {
            LogAssert(
                "pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                231, nullptr);
        }
    }

    // 0x10082e380
    void SafeSimpleAllocatorEASTL::deallocate(void* arg1, unsigned long arg2) {
        uint8_t auVar1[16];

        if (field_0 == nullptr) {
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                298, nullptr);
        }
        auVar1 = field_0->data();
        if (auVar1._0_8_ < arg2) {
            arg1->DeAllocate(arg2, auVar1._8_8_);
        } else {
            field_0->DeAllocate(arg1);
        }
    }

    // 0x100831f10
    void ReorderArrFromLE<unsigned short>(unsigned short* arg1, unsigned long arg2) {
        if (IsBigEndian() != '\0') {
            for (; arg2 != 0; arg2 = arg2 - 1) {
                DoByteReorder<EndianSwap, unsigned short>((short*)arg1);
                arg1 = arg1 + 1;
            }
        }
    }

    // 0x100832a10
    void ReorderArrFromBE<unsigned short>(unsigned short* arg1, unsigned long arg2) {
        if (IsLittleEndian() != '\0') {
            for (; arg2 != 0; arg2 = arg2 - 1) {
                DoByteReorder<EndianSwap, unsigned short>((short*)arg1);
                arg1 = arg1 + 1;
            }
        }
    }

    // 0x100832a50
    unsigned int PacketReaderMixin<PacketView>::gTLE<unsigned int>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = end();
        long lVar2 = *(long*)(this + 16);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(uint64_t*)(this + 16);
            uVar6 = HeapBeginPtr();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(unsigned int*)(lVar4 + lVar2);
        ReorderFromLE<unsigned int>(&local_2c);
        return local_2c;
    }

    // 0x100832ae0
    void ReorderFromLE<unsigned int>(unsigned int& arg1) {
        if (IsBigEndian() != '\0') {
            DoByteReorder<EndianSwap, int>(arg1);
        }
    }

    // 0x100835a00
    uint64_t SafeSimpleAllocatorEASTL::allocate(unsigned long arg1) {
        ReturnValue local_30;
        uint64_t local_28;

        if (field_0 == nullptr) {
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                238, nullptr);
        }
        if (field_0->data() < arg1) {
            local_28 = BucketManager::Allocate(arg1, 0, 16);
        } else {
            local_30 = field_0->Allocate();
        }
        return local_28;
    }

    // 0x100835a70
    uint64_t SafeSimpleAllocatorEASTL::allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3) {
        ReturnValue local_30;
        uint64_t local_28;

        if (field_0 == nullptr) {
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                268, nullptr);
        }
        if (field_0->data() < arg1) {
            local_28 = BucketManager::Allocate(arg1, 4, 16);
        } else {
            local_30 = field_0->Allocate();
        }
        return local_28;
    }

    // 0x100835bd0
    uint64_t SafeSimpleAllocatorEASTL::allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3, int arg4) {
        ReturnValue local_30;
        uint64_t local_28;

        if (field_0 == nullptr) {
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                283, nullptr);
        }
        if (field_0->data() < arg1) {
            local_28 = BucketManager::Allocate(arg1, 4, 16);
        } else {
            local_30 = field_0->Allocate();
        }
        return local_28;
    }

    // 0x1008367a0
    MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>*
    placement_new<MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>,
                  MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData*&, graphics::GeometryBatch*>(
        void* arg1, MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData*& arg2,
        graphics::GeometryBatch*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>(
            arg2, arg3);
        return arg1;
    }

    // 0x100836830
    MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::GeometryBatch* geometryBatch)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bb0 + 16;
        *(void**)(this + 16) = arg1;
        *(GeometryBatch**)(this + 24) = geometryBatch;
    }

    // 0x100836870
    void
    MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>::DeleteData() {
        if (*(GeometryBatch**)(this + 24) != nullptr) {
            (*(GeometryBatch**)(this + 24))->~GeometryBatch();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1008368a0
    void
    MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::GeometryBatch, 4096>::deallocate(arg1);
    }

    // 0x100837790
    graphics::GeometryBatch*
    placement_new<graphics::GeometryBatch, graphics::GeometryBatch&>(void* arg1,
                                                                     graphics::GeometryBatch& geometryBatch) {
        new (arg1) graphics::GeometryBatch(geometryBatch);
        return arg1;
    }

} // namespace jag

namespace jag::graphics {
    class VertexTransformData {
    public:
        void GetBoneTransforms();
        void GetBoneTransforms() const;
        Option<float>* GetBillboardLabelTransforms();
        Option<float>* GetBillboardLabelTransforms() const;
        uint8_t* GetLabelDeltas();
        uint8_t* GetLabelDeltas() const;
        VertexTransformData(VertexTransformData&& vertexTransformData);
        void ClearTransformData();
        void SetMaxSize(unsigned long arg1, unsigned long arg2, unsigned long arg3);
        void Resize(bool arg1, unsigned long arg2);
        VertexTransformData(const VertexTransformData& vertexTransformData);
        void SetBoneTransforms(const WrapArray<math::Matrix43T<float>>& wrapArray);
        void SetLabelDeltas(const WrapArray<float>& wrapArray);
        void SetBillboardLabelTransforms(const WrapArray<float>& wrapArray);
        void ClearBoneTransforms();
        void ClearLabelDeltas();
        void ClearBillboardLabelTransforms();
        VertexTransformData();
        ~VertexTransformData();
        Matrix43T<float>* GetBoneTransform(int arg1) const;
        void Destroy();

    private:
        unsigned long field_0;
        Particle* field_8;
        uint8_t _unknown_16[24];
    };

    // 0x10082dc00
    VertexTransformData::VertexTransformData(VertexTransformData&& vertexTransformData)
        : WrapArray(vertexTransformData), field_16(vertexTransformData.field_16),
          field_32(vertexTransformData.field_32) {}

    // 0x10082eea0
    ParticleModuleUpdateParams::ParticleModuleUpdateParams() {
        new (&field_4) math::Vector3T();
        new (&field_16) math::QuaternionT<float>();
        new (&field_32) math::Vector3T();
        new (&field_44) math::QuaternionT<float>();
    }

    // 0x100831dc0
    GeometryBatchVertexPosLP*
    GeometryBatchVertexPosLP::operator=(const GeometryBatchVertexPosLP& geometryBatchVertexPosLP) {
        *this = geometryBatchVertexPosLP;
        field_6 = geometryBatchVertexPosLP.field_6;
        return this;
    }

    // 0x100833e20
    GeometryBatchVertexSkin* GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin&& geometryBatchVertexSkin) {
        *this = geometryBatchVertexSkin;
        *field_4 = geometryBatchVertexSkin.field_4;
        return this;
    }

    // 0x100833e20: GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin const&) has the same machine code as GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin&&)

    // 0x10091ea40
    void VertexTransformData::ClearTransformData() {
        ClearBoneTransforms();
        ClearLabelDeltas();
        ClearBillboardLabelTransforms();
    }

    // 0x100988600
    Matrix43T<float>* VertexTransformData::GetBoneTransform(int arg1) const {
        Matrix43T<float>* pMVar2;

        unsigned long uVar1 = HeapBeginPtr();
        if ((unsigned long)(long)arg1 < uVar1) {
            pMVar2 = (Matrix43T<float>*)(*this)[(long)arg1];
        } else {
            pMVar2 = (Matrix43T<float>*)(*((Array<math::Matrix43T<float>>*)&AnimationManager::IDENTITY_STATE_BONES))[0];
        }
        return pMVar2;
    }

    // 0x1009915f0
    VertexTransformData::VertexTransformData() : shared_ptr() {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
    }

    // 0x100991620
    VertexTransformData::~VertexTransformData() {
        Destroy();
    }

    // 0x100991630
    void VertexTransformData::Destroy() {
        HeapInterface::Instance()->AlignedFree((void*)end());
        new (this) shared_ptr();
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    // 0x10082ef30
    Flow::Flow() : Module() {}

    // 0x10082efb0
    Flow::Shape::Shape() : field_0(3), field_4(false) {}

    // 0x10082efe0
    Colour::Colour() : Module() {}

    // 0x10082f470
    Gravity::Gravity() : Module() {}

    // 0x10082f4d0
    TriggerPlane::TriggerPlane() : Module(), field_216(0) {}

    // 0x10082f560
    Attractor::Attractor() : Module() {}

    // 0x10082f620
    Scale::Scale() : Module() {}

    // 0x10082f6e0
    Noise::Noise() : Module() {
        *(uint8_t***)this = &PTR__Noise_100f14f10;
        new (&field_8) ModulePropertyCurve<float>();
        new (&field_96) ModulePropertyCurve<float>();
    }

    // 0x10082f740
    Flipbook::Flipbook() : Module() {
        field_8 = '\0';
    }

    // 0x10082f770
    Acceleration::Acceleration() : Module() {}

    // 0x10082f7d0
    Lighting::Lighting() : Module(), field_8(1), field_12(255), field_13(255) {}

} // namespace jag::graphics::particlemodules

// 0x10082ec60
Alignment::Alignment(int arg1) {
    *(long*)this = (long)arg1;
}

namespace jag::math {
    // 0x100832b50
    ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(const Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        Set(this, arg1, arg2, *pfVar1, 1.0);
    }

} // namespace jag::math
