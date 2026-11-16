// libs/graphics/runetek7/model/GeometryBatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class GeometryBatchVertex {
    public:
        void SetNormal(math::Vector3T<float> const&);
        void GetNormal() const;
        void SetTangent(math::Vector3T<float> const&);
        void GetTangent() const;
        GeometryBatchVertex();
        GeometryBatchVertex* operator=(GeometryBatchVertex&&);
        GeometryBatchVertex* operator=(GeometryBatchVertex const&);

        // data members, from how the methods use this: 100 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[3];
        undefined1 field_7; // offset 7
        Callstack field_8;  // offset 8
        char _unknown_24[76];
    };

    class GeometryBatchVertexPos {
    public:
        GetPosition() const;
        GeometryBatchVertexPos* operator=(GeometryBatchVertexPos&&);
        GeometryBatchVertexPos* operator=(GeometryBatchVertexPos const&);
        GeometryBatchVertexPos();

        // data members, from how the methods use this: 20 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    class GeometryBatchVertexPosLP {
    public:
        GeometryBatchVertexPosLP();
        void GetPosition() const;
        void SetPosition(math::Vector3T<float> const&);
        GeometryBatchVertexPosLP* operator=(GeometryBatchVertexPosLP const&);

        // data members, from how the methods use this: 14 bytes
        undefined2 field_0; // offset 0
        undefined2 field_2; // offset 2
        undefined2 field_4; // offset 4
        undefined2 field_6; // offset 6
        char _unknown_8[6];
    };

    // 0x1007fb920, 16 bytes, inline, placed by debug map only (low confidence)
    // GeometryBatchVertexPosLP::GetPosition() const
    void GeometryBatchVertexPosLP::GetPosition() {
        Vector3T* in_RSI;

        math::Vector3FromVector3T<short>((math*)this, in_RSI);
    }

    // 0x100808050, 80 bytes, inline, placed by class name
    // GeometryBatchVertex::SetNormal(math::Vector3T<float> const&)
    void GeometryBatchVertex::SetNormal(Vector3T* param_1) {
        undefined4 uVar1;
        undefined1 local_28[16];
        undefined2 local_18;
        undefined1 local_16;

        local_28._0_8_ = math::operator*(param_1, 127.0);
        uVar1 = math::Vector3TFromVector3<signed char>((math*)local_28, param_1);
        local_18 = (undefined2)uVar1;
        local_16 = (undefined1)((uint)uVar1 >> 16);
        math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)&field_4, (Vector3T*)&local_18);
    }

    // 0x100808f30, 48 bytes, inline, placed by class header (inline)
    // GeometryBatchVertexPosLP::SetPosition(math::Vector3T<float> const&)
    void GeometryBatchVertexPosLP::SetPosition(Vector3T* param_1) {
        undefined8 in_RAX;
        undefined8 uVar1;
        undefined6 local_18;
        undefined2 uStack_12;

        uStack_12 = (undefined2)((ulong)in_RAX >> 48);
        uVar1 = math::Vector3TFromVector3<short>((math*)param_1, param_1);
        local_18 = (undefined6)uVar1;
        math::Vector3T<short>::operator=((Vector3T<short>*)this, (Vector3T*)&local_18);
    }

    // 0x10080b030, 64 bytes, inline, placed by class name
    // GeometryBatchVertex::GetNormal() const
    void GeometryBatchVertex::GetNormal() {
        Vector3T* in_RSI;
        undefined8 local_18[2];

        local_18[0] = math::Vector3FromVector3T<signed char>((math*)&field_4, in_RSI);
        math::operator/((Vector3T*)local_18, 127.0);
    }

    // 0x10080b070, 80 bytes, inline, placed by class name
    // GeometryBatchVertex::SetTangent(math::Vector3T<float> const&)
    void GeometryBatchVertex::SetTangent(Vector3T* param_1) {
        undefined4 uVar1;
        undefined1 local_28[16];
        undefined2 local_18;
        undefined1 local_16;

        local_28._0_8_ = math::operator*(param_1, 127.0);
        uVar1 = math::Vector3TFromVector3<signed char>((math*)local_28, param_1);
        local_18 = (undefined2)uVar1;
        local_16 = (undefined1)((uint)uVar1 >> 16);
        math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)field_8, (Vector3T*)&local_18);
    }

    // 0x10080b0c0, 80 bytes, inline, placed by class name
    // GeometryBatchVertex::GetTangent() const
    void GeometryBatchVertex::GetTangent() {
        undefined4 uVar1;
        Vector3T* in_RSI;
        undefined8 local_20[2];
        undefined2 local_10;
        undefined1 local_e;

        uVar1 = field_8->GetXYZ();
        local_10 = (undefined2)uVar1;
        local_e = (undefined1)((uint)uVar1 >> 16);
        local_20[0] = math::Vector3FromVector3T<signed char>((math*)&local_10, in_RSI);
        math::operator/((Vector3T*)local_20, 127.0);
    }

    // 0x100832620, 16 bytes, complete-object constructor, inline, placed by class name
    // GeometryBatchVertex::GeometryBatchVertex(): jumps straight to the base-object constructor

    // 0x100832630, 48 bytes, base-object constructor, inline, placed by class name
    // GeometryBatchVertex::GeometryBatchVertex()
    void GeometryBatchVertex::GeometryBatchVertex() {
        new (&field_4) math::Vector3T<unsigned char>();
        new (field_8) callstack::Callstack();
    }

    // 0x1008333a0, 80 bytes, inline, placed by class name
    // GeometryBatchVertex::operator=(GeometryBatchVertex&&)
    /* GeometryBatchVertex::TEMPNAMEPLACEHOLDERVALUE(GeometryBatchVertex
   const&) */

    GeometryBatchVertex* GeometryBatchVertex::operator=(GeometryBatchVertex* param_1) {
        field_0 = param_1->field_0;
        math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)&field_4, (Vector3T*)&param_1->field_4);
        field_7 = param_1->field_7;
        math::Vector4T<signed char>::operator=((Vector4T<signed char>*)field_8, (Vector4T*)param_1->field_8);
        *(undefined8*)(field_8 + 4) = *(undefined8*)(param_1->field_8 + 4);
        *(undefined4*)(field_8 + 12) = *(undefined4*)(param_1->field_8 + 12);
        return this;
    }

    // 0x1008333a0: the linker folded this into GeometryBatchVertex::operator=(GeometryBatchVertex&&), which has identical code
    GeometryBatchVertex::operator=(GeometryBatchVertex const&);

} // namespace jag::graphics

namespace jag::math {
    // 0x1007fb930, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<unsigned char>::operator[](unsigned int) const
    Vector4T<unsigned char>* Vector4T<unsigned char>::operator[](uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      192, (char*)0);
        }
        return this + param_1;
    }

    // 0x1007fba10, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3FromVector3T<short>(Vector3T<short> const&)
    undefined8 Vector3FromVector3T<short>(Vector3T* param_1) {
        vector* pvVar1;
        short* psVar2;
        undefined8 uVar3;
        ColourHSL local_28;
        float local_18;
        float local_14;

        pvVar1 = SSOBeginPtr(param_1);
        local_18 = (float)(int)*(short*)pvVar1;
        psVar2 = (short*)z();
        local_14 = (float)(int)*psVar2;
        psVar2 = (short*)y();
        new (&local_28) ColourHSL(local_18, local_14, (float)(int)*psVar2);
        uVar3._0_4_ = local_28.field_0;
        uVar3._4_4_ = local_28.field_4;
        return uVar3;
    }

    // 0x1007fbc10, 352 bytes, inline, placed by debug map only (low confidence)
    // bool LineLineIntersection<float>(float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&)
    bool LineLineIntersection<float>(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5,
                                     float* param_6, float* param_7, float* param_8) {
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        iVar2 = LineWindingType<float>(param_1, param_2, param_3, param_4, param_5, param_6);
        iVar3 = LineWindingType<float>(param_1, param_2, param_3, param_4, param_7, param_8);
        iVar4 = LineWindingType<float>(param_5, param_6, param_7, param_8, param_1, param_2);
        iVar5 = LineWindingType<float>(param_5, param_6, param_7, param_8, param_3, param_4);
        bVar1 = true;
        if ((iVar2 == iVar3) || (iVar4 == iVar5)) {
            if ((iVar2 == 0) &&
                (bVar1 = PointOnLineSegment<float>(param_1, param_2, param_5, param_6, param_3, param_4), bVar1)) {
                return true;
            }
            if ((iVar3 == 0) &&
                (bVar1 = PointOnLineSegment<float>(param_1, param_2, param_7, param_8, param_3, param_4), bVar1)) {
                return true;
            }
            if ((iVar4 == 0) &&
                (bVar1 = PointOnLineSegment<float>(param_5, param_6, param_1, param_2, param_7, param_8), bVar1)) {
                return true;
            }
            if ((iVar5 == 0) &&
                (bVar1 = PointOnLineSegment<float>(param_5, param_6, param_3, param_4, param_7, param_8), bVar1)) {
                return true;
            }
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1007fbd70, 80 bytes, inline, placed by debug map only (low confidence)
    // int LineWindingType<float>(float const&, float const&, float const&, float const&, float const&, float const&)
    int LineWindingType<float>(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5,
                               float* param_6) {
        int iVar1;
        float fVar2;

        fVar2 = (*param_4 - *param_6) * (*param_3 - *param_1) + (*param_5 - *param_3) * (*param_4 - *param_2);
        iVar1 = 0;
        if (fVar2 != 0.0) {
            iVar1 = 2 - (uint)(0.0 < fVar2);
        }
        return iVar1;
    }

    // 0x1007fbdc0, 160 bytes, inline, placed by debug map only (low confidence)
    // bool PointOnLineSegment<float>(float const&, float const&, float const&, float const&, float const&, float const&)
    bool PointOnLineSegment<float>(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5,
                                   float* param_6) {
        float fVar1;
        float fVar2;
        float* pfVar3;

        fVar1 = *param_3;
        pfVar3 = std::max<float>(param_1, param_5);
        if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
            fVar2 = *param_4;
            pfVar3 = std::max<float>(param_2, param_6);
            if (((fVar2 < *pfVar3 || fVar2 == *pfVar3) &&
                 (pfVar3 = std::min<float>(param_1, param_5), *pfVar3 <= fVar1)) &&
                (pfVar3 = std::min<float>(param_2, param_6), *pfVar3 <= fVar2)) {
                return true;
            }
        }
        return false;
    }

} // namespace jag::math

namespace jag {
    // 0x1007fbf50, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketDeleter<graphics::EffectStateSaveRestore>::operator()(graphics::EffectStateSaveRestore*) const
    /* BucketDeleter<graphics::EffectStateSaveRestore>::TEMPNAMEPLACEHOLDERVALUE(graphics::EffectStateSaveRestore*)
   const */

    void BucketDeleter<graphics::EffectStateSaveRestore>::operator()(EffectStateSaveRestore* param_1) {
        param_1->~EffectStateSaveRestore();
        BucketManager::DeAllocate(param_1, 4944);
    }

} // namespace jag
