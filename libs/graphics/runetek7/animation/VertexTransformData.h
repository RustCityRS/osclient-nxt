// libs/graphics/runetek7/animation/VertexTransformData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class SafeSimpleAllocatorEASTL {
    public:
        SafeSimpleAllocatorEASTL(SimpleAllocator*, char const*);
        void deallocate(void*, unsigned long);
        ulong allocate(unsigned long);
        ulong allocate(unsigned long, unsigned long, unsigned long);
        ulong allocate(unsigned long, unsigned long, unsigned long, int);

        // data members, from how the methods use this: 8 bytes
        SimpleAllocator* field_0; // offset 0
    };

    // 0x10082e220, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SafeSimpleAllocatorEASTL::SafeSimpleAllocatorEASTL(SimpleAllocator*, char const*)
    void SafeSimpleAllocatorEASTL::SafeSimpleAllocatorEASTL(SimpleAllocator* param_1, char* param_2) {
        field_0 = param_1;
        if (param_1 == (SimpleAllocator*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                231, (char*)0);
        }
    }

    // 0x10082e380, 112 bytes, inline, placed by debug map only (low confidence)
    // SafeSimpleAllocatorEASTL::deallocate(void*, unsigned long)
    void SafeSimpleAllocatorEASTL::deallocate(void* param_1, ulong param_2) {
        ulong uVar1;

        if (field_0 == (SimpleAllocator*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                298, (char*)0);
        }
        uVar1 = field_0->data();
        if (uVar1 < param_2) {
            BucketManager::DeAllocate(param_1, param_2);
        } else {
            field_0->DeAllocate();
        }
    }

    // 0x100831f10, 64 bytes, inline, placed by debug map only (low confidence)
    // void ReorderArrFromLE<unsigned short>(unsigned short*, unsigned long)
    /* void ReorderArrFromLE<short>(short*, unsigned long) */

    void ReorderArrFromLE<short>(short* param_1, ulong param_2) {
        if (IsBigEndian() != '\0') {
            for (; param_2 != 0; param_2 = param_2 - 1) {
                DoByteReorder<EndianSwap, unsigned short>((ushort*)param_1);
                param_1 = param_1 + 1;
            }
        }
    }

    // 0x100832a10, 64 bytes, inline, placed by debug map only (low confidence)
    // void ReorderArrFromBE<unsigned short>(unsigned short*, unsigned long)
    void ReorderArrFromBE<unsigned short>(ushort* param_1, ulong param_2) {
        if (IsLittleEndian() != '\0') {
            for (; param_2 != 0; param_2 = param_2 - 1) {
                DoByteReorder<EndianSwap, unsigned short>(param_1);
                param_1 = param_1 + 1;
            }
        }
    }

    // 0x100832a50, 144 bytes, inline, placed by debug map only (low confidence)
    // unsigned int PacketReaderMixin<PacketView>::gTLE<unsigned int>()
    uint PacketReaderMixin<PacketView>::gTLE<unsigned int>() {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar6;
        uint local_2c;

        lVar4 = end();
        lVar2 = *(long*)(this + 16);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(undefined8*)(this + 16);
            uVar6 = HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(uint*)(lVar4 + lVar2);
        ReorderFromLE<unsigned int>(&local_2c);
        return local_2c;
    }

    // 0x100832ae0, 48 bytes, inline, placed by debug map only (low confidence)
    // void ReorderFromLE<unsigned int>(unsigned int&)
    void ReorderFromLE<unsigned int>(uint* param_1) {
        if (IsBigEndian() != '\0') {
            DoByteReorder<EndianSwap, int>((int*)param_1);
        }
    }

    // 0x100835a00, 112 bytes, inline, placed by debug map only (low confidence)
    // SafeSimpleAllocatorEASTL::allocate(unsigned long)
    ulong SafeSimpleAllocatorEASTL::allocate(ulong param_1) {
        ulong uVar1;
        undefined1 local_30[8];
        ulong local_28;

        if (field_0 == (SimpleAllocator*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                238, (char*)0);
        }
        uVar1 = field_0->data();
        if (uVar1 < param_1) {
            local_28 = BucketManager::Allocate(param_1, 0, 16);
        } else {
            local_30->Allocate();
        }
        return local_28;
    }

    // 0x100835a70, 112 bytes, inline, placed by debug map only (low confidence)
    // SafeSimpleAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long)
    ulong SafeSimpleAllocatorEASTL::allocate(ulong param_1, ulong param_2, ulong param_3) {
        ulong uVar1;
        undefined1 local_30[8];
        ulong local_28;

        if (*(long*)param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                268, (char*)0);
        }
        uVar1 =
            (*(Array<
                 std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                 eastl::allocator>**)param_1)
                ->data();
        if (uVar1 < param_2) {
            local_28 = BucketManager::Allocate(param_2, 4, 16);
        } else {
            local_30->Allocate();
        }
        return local_28;
    }

    // 0x100835bd0, 112 bytes, inline, placed by debug map only (low confidence)
    // SafeSimpleAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long, int)
    ulong SafeSimpleAllocatorEASTL::allocate(ulong param_1, ulong param_2, ulong param_3, int param_4) {
        ulong uVar1;
        undefined1 local_30[8];
        ulong local_28;

        if (*(long*)param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_pLocalAllocator != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/BucketAllocator.h",
                283, (char*)0);
        }
        uVar1 =
            (*(Array<
                 std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                 eastl::allocator>**)param_1)
                ->data();
        if (uVar1 < param_2) {
            local_28 = BucketManager::Allocate(param_2, 4, 16);
        } else {
            local_30->Allocate();
        }
        return local_28;
    }

    // 0x1008367a0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096> >* placement_new<MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096> >, MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData*&, graphics::GeometryBatch*>(void*, MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData*&, graphics::GeometryBatch*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>,
                       MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData*&, graphics::GeometryBatch*>(
        void* param_1, RefCounterAndData** param_2, GeometryBatch** param_3) {
        MakeSharedPoolRefCounter<graphics::GeometryBatch,
                                 MakeSharedPool<graphics::GeometryBatch, 4096>>::MakeSharedPoolRefCounter(param_1,
                                                                                                          *param_2,
                                                                                                          *param_3);
        return param_1;
    }

    // 0x100836820, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096> >::MakeSharedPoolRefCounter(void*, graphics::GeometryBatch*): jumps straight to the base-object constructor

    // 0x100836830, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096> >::MakeSharedPoolRefCounter(void*, graphics::GeometryBatch*)
    void jag::MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>* this,
            void* param_1, GeometryBatch* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bb0 + 16;
        *(void**)(this + 16) = param_1;
        *(GeometryBatch**)(this + 24) = param_2;
    }

    // 0x100836870, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>::DeleteData(
        MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>* this) {
        if (*(GeometryBatch**)(this + 24) != (GeometryBatch*)0) {
            (*(GeometryBatch**)(this + 24))->~GeometryBatch();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1008368a0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::GeometryBatch, MakeSharedPool<graphics::GeometryBatch, 4096>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::GeometryBatch, 4096>::deallocate(pvVar1);
    }

    // 0x100837790, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::GeometryBatch* placement_new<graphics::GeometryBatch, graphics::GeometryBatch&>(void*, graphics::GeometryBatch&)
    GeometryBatch* placement_new<graphics::GeometryBatch, graphics::GeometryBatch&>(void* param_1,
                                                                                    GeometryBatch* param_2) {
        graphics::GeometryBatch::GeometryBatch(param_1, param_2);
        return param_1;
    }

} // namespace jag

namespace jag::graphics {
    class VertexTransformData {
    public:
        GetBoneTransforms();
        GetBoneTransforms() const;
        GetBillboardLabelTransforms();
        GetBillboardLabelTransforms() const;
        GetLabelDeltas();
        GetLabelDeltas() const;
        VertexTransformData(VertexTransformData&&);
        void ClearTransformData();
        void SetMaxSize(unsigned long, unsigned long, unsigned long);
        void Resize(bool, unsigned long);
        VertexTransformData(VertexTransformData const&);
        void SetBoneTransforms(WrapArray<math::Matrix43T<float>> const&);
        void SetLabelDeltas(WrapArray<float> const&);
        void SetBillboardLabelTransforms(WrapArray<float> const&);
        void ClearBoneTransforms();
        void ClearLabelDeltas();
        void ClearBillboardLabelTransforms();
        VertexTransformData();
        ~VertexTransformData();
        void GetBoneTransform(int) const;
        void Destroy();

        // data members, from how the methods use this: 40 bytes
        ulong field_0;  // offset 0
        uchar* field_8; // offset 8
        char _unknown_16[24];
    };

    // 0x10082dbf0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexTransformData::VertexTransformData(VertexTransformData&&): jumps straight to the base-object constructor

    // 0x10082dc00, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // VertexTransformData::VertexTransformData(VertexTransformData&&)
    void VertexTransformData::VertexTransformData(VertexTransformData* param_1) {
        new (this) WrapArray<math::Matrix43T<float>>(param_1);
        new (&field_16, &param_1->field_16) WrapArray<float>();
        new (&field_32, &param_1->field_32) WrapArray<float>();
    }

    // 0x10082eea0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleModuleUpdateParams::ParticleModuleUpdateParams()
    void ParticleModuleUpdateParams::ParticleModuleUpdateParams() {
        new (&field_4) math::Vector3T<int>();
        new (&field_16) math::QuaternionT<float>();
        new (&field_32) math::Vector3T<int>();
        new (&field_44) math::QuaternionT<float>();
    }

    // 0x100831dc0, 48 bytes, inline, placed by debug map only (low confidence)
    // GeometryBatchVertexPosLP::operator=(GeometryBatchVertexPosLP const&)
    /* GeometryBatchVertexPosLP::TEMPNAMEPLACEHOLDERVALUE(GeometryBatchVertexPosLP
   const&) */

    GeometryBatchVertexPosLP* GeometryBatchVertexPosLP::operator=(GeometryBatchVertexPosLP* param_1) {
        math::Vector3T<short>::operator=((Vector3T<short>*)this, (Vector3T*)param_1);
        field_6 = param_1->field_6;
        return this;
    }

    // 0x100833e20, 48 bytes, inline, placed by debug map only (low confidence)
    // GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin&&)
    /* GeometryBatchVertexSkin::TEMPNAMEPLACEHOLDERVALUE(GeometryBatchVertexSkin
   const&) */

    GeometryBatchVertexSkin* GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin* param_1) {
        math::Vector4T<signed char>::operator=((Vector4T<signed char>*)this, (Vector4T*)param_1);
        math::Vector4T<signed char>::operator=((Vector4T<signed char>*)field_4, (Vector4T*)param_1->field_4);
        return this;
    }

    // 0x100833e20: the linker folded this into GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin&&), which has identical code
    GeometryBatchVertexSkin::operator=(GeometryBatchVertexSkin const&);

    // 0x10091ea40, 48 bytes, inline, placed by class name
    // VertexTransformData::ClearTransformData()
    void VertexTransformData::ClearTransformData() {
        ClearBoneTransforms(this);
        ClearLabelDeltas(this);
        ClearBillboardLabelTransforms(this);
    }

    // 0x100987970, 16 bytes, complete-object constructor, inline, placed by class name
    // VertexTransformData::VertexTransformData(): jumps straight to the base-object constructor

    // 0x100987980, 16 bytes, complete-object destructor, inline, placed by class name
    // VertexTransformData::~VertexTransformData(): jumps straight to the base-object destructor

    // 0x100988600, 64 bytes, inline, placed by class name
    // VertexTransformData::GetBoneTransform(int) const
    void VertexTransformData::GetBoneTransform(int param_1) {
        ulong uVar1;

        uVar1 = HeapBeginPtr();
        if ((ulong)(long)param_1 < uVar1) {
            WrapArray<math::Matrix43T<float>>::operator[]((WrapArray<math::Matrix43T<float>>*)this, (long)param_1);
        } else {
            Array<math::Matrix43T<float>, eastl::allocator>::operator[](
                (Array<math::Matrix43T<float>, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_BONES, 0);
        }
    }

    // 0x1009915f0, 48 bytes, base-object constructor, inline, placed by class name
    // VertexTransformData::VertexTransformData()
    void VertexTransformData::VertexTransformData() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100991620, 16 bytes, base-object destructor, inline, placed by class name
    // VertexTransformData::~VertexTransformData()
    void VertexTransformData::~VertexTransformData() {
        Destroy(this);
    }

    // 0x100991630, 80 bytes, inline, placed by class name
    // VertexTransformData::Destroy()
    void VertexTransformData::Destroy() {
        HeapInterface* this_00;
        void* pvVar1;

        this_00 = (HeapInterface*)HeapInterface::Instance();
        pvVar1 = (void*)end();
        this_00->AlignedFree(pvVar1);
        new (this) shared_ptr<oldscape::DBTableIndex>();
        new (&field_16) shared_ptr<oldscape::DBTableIndex>();
        new (&field_32) shared_ptr<oldscape::DBTableIndex>();
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    // 0x10082ef30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Flow::Flow()
    void Flow::Flow() {
        new (this) Module();
        field_0 = &PTR__ScriptOption_100f14e68;
        new (&field_8) eastl::bitset<4ul, unsigned char>();
        new (&field_12) Shape();
        new (&field_80) Shape();
    }

    // 0x10082efa0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Flow::Shape::Shape(): jumps straight to the base-object constructor

    // 0x10082efb0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Flow::Shape::Shape()
    void Flow::Shape::Shape() {
        field_0 = 3;
        field_4 = false;
        new (&field_8) math::Vector3T<int>();
        new (&field_20) math::Matrix33T<float>();
    }

    // 0x10082efe0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Colour::Colour()
    void Colour::Colour() {
        new (this) Module();
        field_0 = &PTR__Colour_100f14f48;
        new (&field_8) ModulePropertyCurve<math::Vector3T<float>>();
        new (&field_112) ModulePropertyCurve<float>();
        new (&field_200) ModulePropertyCurve<math::Vector3T<float>>();
        new (&field_304) ModulePropertyCurve<float>();
    }

    // 0x10082f470, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Gravity::Gravity()
    void Gravity::Gravity() {
        new (this) Module();
        field_0 = &PTR__Gravity_100f14dc0;
        new (&field_8) ModulePropertyCurve<float>();
        new (&field_96) ModulePropertyCurve<float>();
    }

    // 0x10082f4d0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TriggerPlane::TriggerPlane()
    void TriggerPlane::TriggerPlane() {
        new (this) Module();
        field_0 = &PTR__TriggerPlane_100f14df8;
        new (&field_8) ModulePropertyCurve<math::Vector3T<float>>();
        new (&field_112) ModulePropertyCurve<math::Vector3T<float>>();
        field_216 = 0;
        new (&field_224) ModulePropertyCurve<float>();
    }

    // 0x10082f560, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Attractor::Attractor()
    void Attractor::Attractor() {
        new (this) Module();
        field_0 = &PTR__Attractor_100f14e30;
        new (&field_8) ModulePropertyCurve<math::Vector3T<float>>();
        new (&field_112) ModulePropertyCurve<float>();
    }

    // 0x10082f620, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Scale::Scale()
    void Scale::Scale() {
        new (this) Module();
        field_0 = &PTR__Scale_100f14f80;
        new (&field_12) math::Vector2T<int>();
        new (&field_20) math::Vector2T<int>();
        new (&field_32) ModulePropertyCurve<float>();
        new (&field_120) ModulePropertyCurve<float>();
        new (&field_208) ModulePropertyCurve<float>();
        new (&field_296) ModulePropertyCurve<float>();
    }

    // 0x10082f6e0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Noise::Noise()
    void Noise::Noise() {
        new (this) Module();
        *(undefined***)this = &PTR__Noise_100f14f10;
        new (&field_8) ModulePropertyCurve<float>();
        new (&field_96) ModulePropertyCurve<float>();
    }

    // 0x10082f740, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Flipbook::Flipbook()
    void Flipbook::Flipbook() {
        new (this) Module();
        field_0 = &PTR__ScriptOption_100f14fb8;
        field_8 = '\0';
    }

    // 0x10082f770, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Acceleration::Acceleration()
    void Acceleration::Acceleration() {
        new (this) Module();
        field_0 = &PTR__Acceleration_100f14ea0;
        new (&field_16) ModulePropertyCurve<float>();
        new (&field_104) ModulePropertyCurve<float>();
    }

    // 0x10082f7d0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Lighting::Lighting()
    void Lighting::Lighting() {
        new (this) Module();
        field_0 = &PTR__ScriptOption_100f14ff0;
        field_8 = 1;
        field_12 = 255;
        field_13 = 255;
    }

} // namespace jag::graphics::particlemodules

// 0x10082ec60, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// Alignment::Alignment(int)
void Alignment::Alignment(int param_1) {
    *(long*)this = (long)param_1;
}

namespace jag::math {
    // 0x100832b50, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(Vector3T<float> const&)
    void ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;

        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)param_1->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)param_1->second();
        Set(this, fVar1, fVar2, *pfVar4, 1.0);
    }

} // namespace jag::math
