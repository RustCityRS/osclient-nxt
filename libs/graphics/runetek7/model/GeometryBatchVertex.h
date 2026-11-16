// libs/graphics/runetek7/model/GeometryBatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class GeometryBatchVertex {
    public:
        void SetNormal(const math::Vector3T<float>& vector3);
        void GetNormal() const;
        void SetTangent(const math::Vector3T<float>& vector3);
        void GetTangent() const;
        GeometryBatchVertex();
        GeometryBatchVertex* operator=(GeometryBatchVertex&& geometryBatchVertex);
        GeometryBatchVertex* operator=(const GeometryBatchVertex& geometryBatchVertex);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[3];
        uint8_t field_7;
        Callstack field_8;
        uint8_t _unknown_24[4];
    };

    class GeometryBatchVertexPos {
    public:
        void GetPosition() const;
        GeometryBatchVertexPos* operator=(GeometryBatchVertexPos&& labelData);
        GeometryBatchVertexPos* operator=(const GeometryBatchVertexPos& labelData);
        GeometryBatchVertexPos();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    class GeometryBatchVertexPosLP {
    public:
        GeometryBatchVertexPosLP();
        void GetPosition() const;
        void SetPosition(const math::Vector3T<float>& vector3);
        GeometryBatchVertexPosLP* operator=(const GeometryBatchVertexPosLP& geometryBatchVertexPosLP);

    private:
        uint16_t field_0;
        uint16_t field_2;
        uint16_t field_4;
        uint16_t field_6;
        uint8_t _unknown_8[6];
    };

    // 0x1007fb920
    void GeometryBatchVertexPosLP::GetPosition() const {
        math::Vector3FromVector3T<short>(*this);
    }

    // 0x100808050
    void GeometryBatchVertex::SetNormal(const math::Vector3T<float>& vector3) {
        uint64_t local_28[2];

        local_28[0] = *127.0 vector3;
        uint32_t uVar1 = math::Vector3TFromVector3<signed char>(*local_28);
        uint16_t local_18 = (uint16_t)uVar1;
        uint8_t local_16 = (uint8_t)((unsigned int)uVar1 >> 16);
        field_4 = local_18;
    }

    // 0x100808f30
    void GeometryBatchVertexPosLP::SetPosition(const math::Vector3T<float>& vector3) {
        uint64_t in_RAX;

        uint16_t uStack_12 = (uint16_t)((unsigned long)in_RAX >> 48);
        uint64_t uVar1 = math::Vector3TFromVector3<short>(vector3);
        uint64_t local_18 = (uint64_t)uVar1;
        *this = local_18;
    }

    // 0x10080b030
    void GeometryBatchVertex::GetNormal() const {
        uint64_t local_18[2];

        local_18[0] = math::Vector3FromVector3T<signed char>(field_4);
        *local_18 / *127.0;
    }

    // 0x10080b070
    void GeometryBatchVertex::SetTangent(const math::Vector3T<float>& vector3) {
        uint64_t local_28[2];

        local_28[0] = *127.0 vector3;
        uint32_t uVar1 = math::Vector3TFromVector3<signed char>(*local_28);
        uint16_t local_18 = (uint16_t)uVar1;
        uint8_t local_16 = (uint8_t)((unsigned int)uVar1 >> 16);
        *field_8 = local_18;
    }

    // 0x10080b0c0
    void GeometryBatchVertex::GetTangent() const {
        uint64_t local_20[2];

        uint32_t uVar1 = field_8->GetXYZ();
        uint16_t local_10 = (uint16_t)uVar1;
        uint8_t local_e = (uint8_t)((unsigned int)uVar1 >> 16);
        local_20[0] = math::Vector3FromVector3T<signed char>(local_10);
        *local_20 / *127.0;
    }

    // 0x100832630
    GeometryBatchVertex::GeometryBatchVertex() {
        new (&field_4) math::Vector3T();
        new (field_8) callstack::Callstack();
    }

    // 0x1008333a0
    GeometryBatchVertex* GeometryBatchVertex::operator=(GeometryBatchVertex&& geometryBatchVertex) {
        field_0 = geometryBatchVertex.field_0;
        field_4 = geometryBatchVertex.field_4;
        field_7 = geometryBatchVertex.field_7;
        *field_8 = geometryBatchVertex.field_8;
        *(uint64_t*)(field_8 + 4) = *(uint64_t*)(geometryBatchVertex.field_8 + 4);
        *(uint32_t*)(field_8 + 12) = *(uint32_t*)(geometryBatchVertex.field_8 + 12);
        return this;
    }

    // 0x1008333a0: GeometryBatchVertex::operator=(GeometryBatchVertex const&) has the same machine code as GeometryBatchVertex::operator=(GeometryBatchVertex&&)

} // namespace jag::graphics

namespace jag::math {
    // 0x1007fb930
    Vector4T<unsigned char>* Vector4T<unsigned char>::operator[](unsigned int arg1) const {
        if (3 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      192, nullptr);
        }
        return this + arg1;
    }

    // 0x1007fba10
    Vector3T<float> Vector3FromVector3T<short>(const Vector3T<short>& vector3) {
        uint64_t uVar2;

        auto psVar1 = vector3.SSOBeginPtr();
        float local_18 = (float)(int)*psVar1;
        psVar1 = (short*)vector3.z();
        float local_14 = (float)(int)*psVar1;
        psVar1 = (short*)vector3.y();
        ColourHSL local_28(local_18, local_14, (float)(int)*psVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

    // 0x1007fbc10
    bool LineLineIntersection<float>(const float& arg1, const float& arg2, const float& arg3, const float& arg4,
                                     const float& arg5, const float& arg6, const float& arg7, const float& arg8) {
        int iVar2 = LineWindingType<float>(arg1, arg2, arg3, arg4, arg5, arg6);
        int iVar3 = LineWindingType<float>(arg1, arg2, arg3, arg4, arg7, arg8);
        int iVar4 = LineWindingType<float>(arg5, arg6, arg7, arg8, arg1, arg2);
        int iVar5 = LineWindingType<float>(arg5, arg6, arg7, arg8, arg3, arg4);
        bool bVar1 = true;
        if ((iVar2 == iVar3) || (iVar4 == iVar5)) {
            if ((iVar2 == 0) && (bVar1 = PointOnLineSegment<float>(arg1, arg2, arg5, arg6, arg3, arg4), bVar1)) {
                return true;
            }
            if ((iVar3 == 0) && (bVar1 = PointOnLineSegment<float>(arg1, arg2, arg7, arg8, arg3, arg4), bVar1)) {
                return true;
            }
            if ((iVar4 == 0) && (bVar1 = PointOnLineSegment<float>(arg5, arg6, arg1, arg2, arg7, arg8), bVar1)) {
                return true;
            }
            if ((iVar5 == 0) && (bVar1 = PointOnLineSegment<float>(arg5, arg6, arg3, arg4, arg7, arg8), bVar1)) {
                return true;
            }
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1007fbd70
    int LineWindingType<float>(const float& arg1, const float& arg2, const float& arg3, const float& arg4,
                               const float& arg5, const float& arg6) {
        float fVar2 = (arg4 - arg6) * (arg3 - arg1) + (arg5 - arg3) * (arg4 - arg2);
        int iVar1 = 0;
        if (fVar2 != 0.0) {
            iVar1 = 2 - (unsigned int)(0.0 < fVar2);
        }
        return iVar1;
    }

    // 0x1007fbdc0
    bool PointOnLineSegment<float>(const float& arg1, const float& arg2, const float& arg3, const float& arg4,
                                   const float& arg5, const float& arg6) {
        auto pfVar3 = std::max<float>(arg1, arg5);
        if ((float)arg3 < *pfVar3 || (float)arg3 == *pfVar3) {
            pfVar3 = std::max<float>(arg2, arg6);
            if ((((float)arg4 < *pfVar3 || (float)arg4 == *pfVar3) &&
                 (pfVar3 = std::min<float>(arg1, arg5), *pfVar3 <= (float)arg3)) &&
                (pfVar3 = std::min<float>(arg2, arg6), *pfVar3 <= (float)arg4)) {
                return true;
            }
        }
        return false;
    }

} // namespace jag::math

namespace jag {
    // 0x1007fbf50
    void BucketDeleter<graphics::EffectStateSaveRestore>::operator()(
        graphics::EffectStateSaveRestore* effectStateSaveRestore) const {
        unsigned long arg2;

        effectStateSaveRestore->~EffectStateSaveRestore();
        effectStateSaveRestore->DeAllocate(4944, arg2);
    }

} // namespace jag
