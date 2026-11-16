// libs/graphics/runetek7/particles/Particle.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class Particle {
    public:
        GetPosition() const;
        GetViewDst() const;
        GetSize() const;
        GetRGBA() const;
        GetRotation2D() const;
        Particle* operator=(Particle&&);
        Particle(ParticleEmitter const&, float, float, float, float, float, float, unsigned int, bool, bool);
        static /* 8 bytes */ m_enableFrameInterpolation; // = 1
        static /* 1 bytes */ m_showParticles;            // = 1
        static /* 1 bytes */ m_showOverdraw;             // = 0
        static /* 1 bytes */ m_showWorldAABB;            // = 0

        // data members, from how the methods use this: 100 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[12];
        float field_28;      // offset 28
        float field_32;      // offset 32
        float field_36;      // offset 36
        float field_40;      // offset 40
        float field_44;      // offset 44
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        float field_64;      // offset 64
        LocData field_68;    // offset 68
    };

    class ParticleModuleUpdateParams {
    public:
        ParticleModuleUpdateParams();

        // data members, from how the methods use this: 52 bytes
        char _unknown_0[52];
    };

    class ParticleModuleUpdateState {
    public:
        ParticleModuleUpdateState();
    };

    class ParticleRGBA {
    public:
        ParticleRGBA(float, float, float, float);
    };

    template <typename...> // 1 instantiations, e.g. <math::Vector2T<float> >
    class ParticleVertexData {
    public:
        ParticleVertexData();
        ParticleVertexData<math::Vector2T<float>>* operator=(ParticleVertexData<math::Vector2T<float>> const&);
    };

    template <
        typename...> // 5 instantiations, e.g. <ParticleData::MaterialSlotRotationData>, <ParticleData::PositionTimeData>, <ParticleData::UVAnimationData>
    class ParticleVertexDataProxy {
    public:
        class SplatOp;
        ParticleVertexDataProxy<>();
        ParticleVertexDataProxy<ParticleData::PositionTimeData>*
        operator=(ParticleVertexDataProxy<ParticleData::PositionTimeData> const&);
        ParticleVertexDataProxy<math::Vector3T<float>>* operator+=(math::Vector3T<float> const&);
        ParticleVertexDataProxy<math::Vector3T<float>>* operator=(math::Vector3T<float>&&);
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*
        operator=(math::ColourStorage8888<math::ABGR8StorageLayout>&&);
        ParticleVertexDataProxy(ParticleData::PositionTimeData&&);
        ParticleVertexDataProxy<ParticleData::PositionTimeData>* operator=(ParticleData::PositionTimeData&&);
        ParticleVertexDataProxy(math::Vector3T<float>&&);
        ParticleVertexDataProxy(math::ColourStorage8888<math::ABGR8StorageLayout>&&);
        ParticleVertexDataProxy(ParticleData::MaterialSlotRotationData&&);
        ParticleVertexDataProxy(ParticleData::UVAnimationData&&);
        ParticleVertexDataProxy<math::Vector3T<float> const&, float&>(math::Vector3T<float> const&, float&);
    };

    template <typename...> // 1 instantiations, e.g.
    class ParticleVertexDataProxy::SplatOp {
    public:
        ~SplatOp();
    };

    // 0x1007d0da0, 64 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<>()
    void ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<>() {
        undefined1 local_28[12];
        undefined4 local_1c;

        new (local_28) math::Vector3T<int>();
        local_1c = 0;
        ParticleVertexDataProxy(this, (PositionTimeData*)local_28);
    }

    // 0x1007d0de0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexData<math::Vector2T<float> >::ParticleVertexData(): jumps straight to the base-object constructor

    // 0x1007d0df0, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::Vector3T<float> >::ParticleVertexDataProxy<>()
    void ParticleVertexDataProxy<math::Vector3T<float>>::ParticleVertexDataProxy<>() {
        Vector3T<int> local_28[16];

        math::Vector3T<int>::Vector3T(local_28);
        ParticleVertexDataProxy(this, (Vector3T*)local_28);
    }

    // 0x1007d0e20, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> >::ParticleVertexDataProxy<>()
    void ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>::ParticleVertexDataProxy<>() {
        undefined1 local_20[8];

        new (local_20) callstack::Callstack();
        ParticleVertexDataProxy(this, (ColourStorage8888*)local_20);
    }

    // 0x1007d0e50, 32 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy<>()
    void ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy<>() {
        undefined4 local_10[2];

        local_10[0] = 0;
        ParticleVertexDataProxy(this, (MaterialSlotRotationData*)local_10);
    }

    // 0x1007d0e70, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy<>()
    void ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy<>() {
        ulong in_RAX;
        undefined8 local_18;

        local_18 = in_RAX & 18446744073709486080;
        new (((long)&local_18 + 2)) eastl::bitset<4ul, unsigned char>();
        local_18._3_1_ = 0;
        ParticleVertexDataProxy(this, (UVAnimationData*)&local_18);
    }

    // 0x1007d0f20, 80 bytes, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(ParticleVertexDataProxy<ParticleData::PositionTimeData> const&)
    /* ParticleVertexDataProxy<ParticleData::PositionTimeData>::TEMPNAMEPLACEHOLDERVALUE(ParticleVertexDataProxy<ParticleData::PositionTimeData>&&)
    */

    ParticleVertexDataProxy<ParticleData::PositionTimeData>*
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(ParticleVertexDataProxy* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            math::PlaneT<float>::operator=((PlaneT<float>*)(this + lVar1), (PlaneT*)(param_1 + lVar1));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        return this;
    }

    // 0x1007d0fb0, 80 bytes, inline, placed by debug map only (low confidence)
    // ParticleVertexData<math::Vector2T<float> >::operator=(ParticleVertexData<math::Vector2T<float> > const&)
    /* ParticleVertexData<math::Vector2T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(ParticleVertexData<math::Vector2T<float> >&&) */

    ParticleVertexData<math::Vector2T<float>>*
    ParticleVertexData<math::Vector2T<float>>::operator=(ParticleVertexData* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            math::Vector2T<float>::operator=((Vector2T<float>*)(this + lVar1), (Vector2T*)(param_1 + lVar1));
            lVar1 = lVar1 + 8;
        } while (lVar1 != 32);
        return this;
    }

    // 0x1007d16c0, 16 bytes, inline, placed by debug map only (low confidence)
    // ParticleData::GetCount() const
    void ParticleData::GetCount() {
        (&field_120)->size();
    }

    // 0x1007dba90, 32 bytes, inline, placed by class header (inline)
    // ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> >::operator=(math::ColourStorage8888<math::ABGR8StorageLayout>&&)
    /* ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::TEMPNAMEPLACEHOLDERVALUE(ParticleData::MaterialSlotRotationData&&)
    */

    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*
    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::operator=(MaterialSlotRotationData* param_1) {
        undefined4 uVar1;

        uVar1 = *(undefined4*)param_1;
        *(undefined4*)(this + 12) = uVar1;
        *(undefined4*)(this + 8) = uVar1;
        *(undefined4*)(this + 4) = uVar1;
        *(undefined4*)this = uVar1;
        return this;
    }

    // 0x1007eb510, 80 bytes, inline, placed by class name
    // Particle::operator=(Particle&&)
    /* Particle::TEMPNAMEPLACEHOLDERVALUE(Particle&&) */

    Particle* Particle::operator=(Particle* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        SetXYZ(param_1);
        field_12 = param_1->field_12;
        (&field_16, (Vector3T*)&param_1->field_16)->SetXYZ();
        fVar5 = param_1->field_32;
        fVar6 = param_1->field_36;
        fVar7 = param_1->field_40;
        uVar1 = *(undefined8*)&param_1->field_44;
        uVar2 = *(undefined8*)((long)&param_1->field_48 + 4);
        uVar3 = *(undefined8*)((long)&param_1->field_56 + 3);
        uVar4 = *(undefined8*)((long)&param_1->field_64 + 3);
        field_28 = param_1->field_28;
        field_32 = fVar5;
        field_36 = fVar6;
        field_40 = fVar7;
        *(undefined8*)&field_44 = uVar1;
        *(undefined8*)((long)&field_48 + 4) = uVar2;
        *(undefined8*)((long)&field_56 + 3) = uVar3;
        *(undefined8*)((long)&field_64 + 3) = uVar4;
        return this;
    }

    // 0x1007fab00, 64 bytes, base-object destructor, inline, placed by class header (inline)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::SplatOp::~SplatOp()
    void ParticleVertexDataProxy<ParticleData::PositionTimeData>::SplatOp::~SplatOp() {
        PlaneT* pPVar1;

        pPVar1 = (PlaneT*)math::PlaneT<float>::operator=((PlaneT<float>*)(*(PlaneT**)this + 16), *(PlaneT**)this);
        pPVar1 = (PlaneT*)math::PlaneT<float>::operator=((PlaneT<float>*)(*(long*)this + 32), pPVar1);
        math::PlaneT<float>::operator=((PlaneT<float>*)(*(long*)this + 48), pPVar1);
    }

    // 0x1007fb3a0, 32 bytes, base-object destructor, inline, placed by class header (inline)
    // ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::SplatOp::~SplatOp()
    /* ParticleVertexDataProxy<ParticleData::UVAnimationData>::SplatOp::~SplatOp()
    */

    void ParticleVertexDataProxy<ParticleData::UVAnimationData>::SplatOp::~SplatOp() {
        undefined4 uVar1;

        uVar1 = **(undefined4**)this;
        (*(undefined4**)this)[1] = uVar1;
        *(undefined4*)(*(long*)this + 8) = uVar1;
        *(undefined4*)(*(long*)this + 12) = uVar1;
    }

    // 0x1007fb500, 64 bytes, base-object destructor, inline, placed by class header (inline)
    // ParticleVertexDataProxy<math::Vector3T<float> >::SplatOp::~SplatOp()
    void ParticleVertexDataProxy<math::Vector3T<float>>::SplatOp::~SplatOp() {
        Vector3T* pVVar1;

        pVVar1 = (Vector3T*)((*(Vector3T**)this + 12))->SetXYZ(*(Vector3T**)this);
        pVVar1 = (Vector3T*)((*(long*)this + 24))->SetXYZ(pVVar1);
        ((*(long*)this + 36))->SetXYZ(pVVar1);
    }

    // 0x100829240, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ParticleModuleUpdateParams::ParticleModuleUpdateParams(): jumps straight to the base-object constructor

} // namespace jag::graphics

namespace jag::graphics::helpers {
    class ParticleDataRefProxy {
    public:
        ParticleDataRefProxy(unsigned long, ParticleData*);
        ParticleDataRefProxy* operator=(ParticleDataValueProxy const&);
        ParticleDataRefProxy* operator=(ParticleDataRefProxy&&);
        operator ParticleDataValueProxy() const;

        // data members, from how the methods use this: 16 bytes
        ulong field_0;         // offset 0
        ParticleData* field_8; // offset 8
    };

    class ParticleDataValueProxy {
    public:
        ParticleDataValueProxy(unsigned long, ParticleData*);
        bool operator>(ParticleDataValueProxy const&) const;

        // data members, from how the methods use this: 212 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        char _unknown_20[144];
        undefined8 field_164; // offset 164
        undefined8 field_172; // offset 172
        undefined8 field_180; // offset 180
        undefined8 field_188; // offset 188
        undefined8 field_196; // offset 196
        undefined8 field_204; // offset 204
    };

    class ParticleSOAIterator {
    public:
        operator++();
        ParticleSOAIterator(unsigned long, ParticleData*);
        operator!=(ParticleSOAIterator const&) const;
        long operator-(ParticleSOAIterator const&) const;
        operator+(unsigned long) const;
        ParticleDataRefProxy operator*() const;
        operator-(unsigned long) const;
        reverse_iterator<char*>* operator--();
        ulong operator>=(ParticleSOAIterator const&) const;
        operator<(ParticleSOAIterator const&) const;

        // data members, from how the methods use this: 16 bytes
        ulong field_0;         // offset 0
        ParticleData* field_8; // offset 8
    };

    // 0x1007d1110, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ParticleDataValueProxy::ParticleDataValueProxy(unsigned long, ParticleData*): jumps straight to the base-object constructor

    // 0x1007d1120, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // ParticleDataRefProxy::ParticleDataRefProxy(unsigned long, ParticleData*)
    void ParticleDataRefProxy::ParticleDataRefProxy(ulong param_1, ParticleData* param_2) {
        field_0 = param_1;
        field_8 = param_2;
    }

    // 0x1007d1130, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ParticleDataRefProxy::ParticleDataRefProxy(unsigned long, ParticleData*): jumps straight to the base-object constructor

    // 0x1007d1140, 384 bytes, placed by debug map only (low confidence)
    // ParticleDataRefProxy::operator=(ParticleDataValueProxy const&)
    /* ParticleDataRefProxy::TEMPNAMEPLACEHOLDERVALUE(ParticleDataValueProxy
   const&) */

    ParticleDataRefProxy* ParticleDataRefProxy::operator=(ParticleDataValueProxy* param_1) {
        undefined4 uVar1;
        undefined8 uVar2;
        undefined4* puVar3;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_00;
        ParticleVertexDataProxy<ParticleData::PositionTimeData>* this_01;
        ParticleVertexData<math::Vector2T<float>>* this_02;
        undefined8* puVar4;

        uVar1 = param_1->field_0;
        puVar3 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)field_8, field_0);
        *puVar3 = uVar1;
        uVar1 = param_1->field_4;
        puVar3 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_24, field_0);
        *puVar3 = uVar1;
        uVar1 = param_1->field_8;
        puVar3 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_48, field_0);
        *puVar3 = uVar1;
        this_00 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&field_8->field_168,
                field_0);
        ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_00,
                                                                  (ParticleVertexDataProxy*)&param_1->field_116);
        uVar1 = param_1->field_12;
        puVar3 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_72, field_0);
        *puVar3 = uVar1;
        uVar1 = param_1->field_16;
        puVar3 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_96, field_0);
        *puVar3 = uVar1;
        this_01 = (ParticleVertexDataProxy<ParticleData::PositionTimeData>*)eastl::
            vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_8
                    ->field_120,
                field_0);
        ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(
            this_01, (ParticleVertexDataProxy*)&param_1->field_20);
        this_02 = (ParticleVertexData<math::Vector2T<float>>*)
            eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&field_8->field_144,
                field_0);
        ParticleVertexData<math::Vector2T<float>>::operator=(this_02, (ParticleVertexData*)&param_1->field_84);
        puVar4 = (undefined8*)eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                                            SafeBucketAllocatorEASTL>::
        operator[]((vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                           SafeBucketAllocatorEASTL>*)&field_8->field_192,
                   field_0);
        uVar2 = param_1->field_172;
        *puVar4 = param_1->field_164;
        puVar4[1] = uVar2;
        puVar4 = (undefined8*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>, SafeBucketAllocatorEASTL>::
            operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                               SafeBucketAllocatorEASTL>*)&field_8->field_216,
                       field_0);
        uVar2 = param_1->field_188;
        *puVar4 = param_1->field_180;
        puVar4[1] = uVar2;
        puVar4 = (undefined8*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>*)&field_8
                    ->field_240,
                field_0);
        uVar2 = param_1->field_204;
        *puVar4 = param_1->field_196;
        puVar4[1] = uVar2;
        return this;
    }

    // 0x1007d12c0, 576 bytes, placed by debug map only (low confidence)
    // ParticleDataRefProxy::operator=(ParticleDataRefProxy&&)
    /* ParticleDataRefProxy::TEMPNAMEPLACEHOLDERVALUE(ParticleDataRefProxy&&)
    */

    ParticleDataRefProxy* ParticleDataRefProxy::operator=(ParticleDataRefProxy* param_1) {
        float* pfVar1;
        float* pfVar2;
        ParticleVertexDataProxy* pPVar3;
        ParticleVertexDataProxy* pPVar4;
        ParticleVertexData* pPVar5;
        ParticleVertexData* pPVar6;

        pfVar1 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)field_8, field_0);
        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)field_8, param_1->field_0);
        std::swap<float>(pfVar1, pfVar2);
        pfVar1 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_24, field_0);
        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_24, param_1->field_0);
        std::swap<float>(pfVar1, pfVar2);
        pfVar1 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_48, field_0);
        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_48, param_1->field_0);
        std::swap<float>(pfVar1, pfVar2);
        pPVar3 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&field_8->field_168,
                field_0);
        pPVar4 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&field_8->field_168,
                param_1->field_0);
        std::swap<ParticleVertexDataProxy<math::Vector3T<float>>>(pPVar3, pPVar4);
        pfVar1 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_72, field_0);
        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_72, param_1->field_0);
        std::swap<float>(pfVar1, pfVar2);
        pfVar1 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_96, field_0);
        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_8->field_96, param_1->field_0);
        std::swap<float>(pfVar1, pfVar2);
        pPVar3 = (ParticleVertexDataProxy*)eastl::
            vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_8
                    ->field_120,
                field_0);
        pPVar4 = (ParticleVertexDataProxy*)eastl::
            vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_8
                    ->field_120,
                param_1->field_0);
        std::swap<ParticleVertexDataProxy<ParticleData::PositionTimeData>>(pPVar3, pPVar4);
        pPVar5 = (ParticleVertexData*)
            eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&field_8->field_144,
                field_0);
        pPVar6 = (ParticleVertexData*)
            eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&field_8->field_144,
                param_1->field_0);
        std::swap<ParticleVertexData<math::Vector2T<float>>>(pPVar5, pPVar6);
        pPVar3 = (ParticleVertexDataProxy*)eastl::vector<
            ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>, SafeBucketAllocatorEASTL>::
        operator[]((vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                           SafeBucketAllocatorEASTL>*)&field_8->field_192,
                   field_0);
        pPVar4 = (ParticleVertexDataProxy*)eastl::vector<
            ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>, SafeBucketAllocatorEASTL>::
        operator[]((vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                           SafeBucketAllocatorEASTL>*)&field_8->field_192,
                   param_1->field_0);
        std::swap<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>>(pPVar3, pPVar4);
        pPVar3 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>, SafeBucketAllocatorEASTL>::
            operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                               SafeBucketAllocatorEASTL>*)&field_8->field_216,
                       field_0);
        pPVar4 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>, SafeBucketAllocatorEASTL>::
            operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                               SafeBucketAllocatorEASTL>*)&field_8->field_216,
                       param_1->field_0);
        std::swap<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>>(pPVar3, pPVar4);
        pPVar3 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>*)&field_8
                    ->field_240,
                field_0);
        pPVar4 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>*)&field_8
                    ->field_240,
                param_1->field_0);
        std::swap<ParticleVertexDataProxy<ParticleData::UVAnimationData>>(pPVar3, pPVar4);
        return this;
    }

    // 0x1007d1650, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // ParticleSOAIterator::ParticleSOAIterator(unsigned long, ParticleData*)
    void ParticleSOAIterator::ParticleSOAIterator(ulong param_1, ParticleData* param_2) {
        field_0 = param_1;
        field_8 = param_2;
    }

    // 0x1007d1660, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ParticleSOAIterator::ParticleSOAIterator(unsigned long, ParticleData*): jumps straight to the base-object constructor

    // 0x1007d1670, 80 bytes, placed by debug map only (low confidence)
    // SortParticleData(ParticleData&)
    void SortParticleData(ParticleData* param_1) {
        ulong uVar1;
        ParticleSOAIterator local_30;
        ParticleSOAIterator local_20;

        new (&local_30) ParticleSOAIterator(0, param_1);
        uVar1 = param_1->GetCount();
        new (&local_20) ParticleSOAIterator(uVar1, param_1);
        eastl::sort<ParticleSOAIterator, SortParticleData(ParticleData&)::__5>(local_30.field_0, local_30.field_8,
                                                                               local_20.field_0, local_20.field_8);
    }

} // namespace jag::graphics::helpers
