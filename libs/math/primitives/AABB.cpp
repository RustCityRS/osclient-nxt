// libs/math/primitives/AABB.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "AABB.h"

namespace jag::math {
    // 0x100009ca0: AABB::GetMinimum() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: AABB::GetMinimum() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000b9950: AABB::GetMaximum() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9950: AABB::GetMaximum() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1001df1a0: AABB::AABB(Vector3T<float> const&, Vector3T<float> const&) has the same machine code as AABB::AABB(Vector3T<float>&&, Vector3T<float>&&)

    // 0x10036a690: AABB::operator=(AABB&&) has the same machine code as AABB::operator=(AABB const&)

    // 0x100c636e0
    void AABB::Reset() {
        uint32_t* puVar1 = (uint32_t*)(*this)[0];
        *puVar1 = 2139095039;
        puVar1 = (uint32_t*)(*this)[1];
        *puVar1 = 2139095039;
        puVar1 = (uint32_t*)(*this)[2];
        *puVar1 = 2139095039;
        float* this_00 = &m_maximum;
        puVar1 = (uint32_t*)(*this_00)[0];
        *puVar1 = 4286578687;
        puVar1 = (uint32_t*)(*this_00)[1];
        *puVar1 = 4286578687;
        puVar1 = (uint32_t*)(*this_00)[2];
        *puVar1 = 4286578687;
        DirtyDerivedState();
    }

    // 0x100c63930
    void AABB::AddPoint(const Vector3T<float>& vector3) {
        float fVar1;
        uint32_t uVar2;
        float* pfVar3;
        uint32_t* puVar4;

        unsigned int arg1 = 0;
        do {
            pfVar3 = &vector3[arg1];
            fVar1 = *pfVar3;
            pfVar3 = (float*)(*this)[arg1];
            if (fVar1 < *pfVar3) {
                puVar4 = &vector3[arg1];
                uVar2 = *puVar4;
                puVar4 = (uint32_t*)(*this)[arg1];
                *puVar4 = uVar2;
            }
            pfVar3 = &vector3[arg1];
            fVar1 = *pfVar3;
            pfVar3 = &m_maximum[arg1];
            if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
                puVar4 = &vector3[arg1];
                uVar2 = *puVar4;
                puVar4 = &m_maximum[arg1];
                *puVar4 = uVar2;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        DirtyDerivedState();
    }

    // 0x100c66830
    AABB::AABB(const OBB& obb) : Vector3T() {
        Set(obb);
    }

    // 0x100c66860
    void AABB::Set(const OBB& obb) {
        uint64_t local_a8[2];
        uint64_t local_98[2];
        uint64_t local_88[2];
        uint64_t local_78[2];
        uint64_t local_68[2];
        uint64_t local_58[2];
        uint64_t local_48[2];
        uint64_t local_38[2];

        auto puVar1 = obb.GetScreen();
        uint64_t local_b8 = *puVar1;
        uint32_t local_b0 = *(uint32_t*)(puVar1 + 1);
        auto this_00 = obb.GetDefaultValue();
        auto pVVar2 = this_00->SSOBeginPtr();
        auto pfVar3 = local_b8.SSOBeginPtr();
        local_88[0] = (*(*pfVar3)) * *pVVar2;
        local_98[0] = Vector3Abs<float>((Vector3T<float>*)local_88);
        auto this_01 = obb.GetDefaultValue();
        pVVar2 = (Vector3T<float>*)this_01->qw();
        pfVar3 = (float*)local_b8.y();
        local_68[0] = (*(*pfVar3)) * *pVVar2;
        local_78[0] = Vector3Abs<float>((Vector3T<float>*)local_68);
        local_a8[0] = *local_98 + *local_78;
        auto this_02 = obb.GetDefaultValue();
        pVVar2 = (Vector3T<float>*)this_02->second();
        pfVar3 = (float*)local_b8.second();
        local_48[0] = (*(*pfVar3)) * *pVVar2;
        local_58[0] = Vector3Abs<float>((Vector3T<float>*)local_48);
        local_38[0] = *local_a8 + *local_58;
        local_b8.SetXYZ(*local_38);
        pVVar2 = (Vector3T<float>*)obb.SSOBeginPtr();
        local_38[0] = *pVVar2 - local_b8;
        SetXYZ(*local_38);
        pVVar2 = (Vector3T<float>*)obb.SSOBeginPtr();
        local_38[0] = *pVVar2 + local_b8;
        m_maximum.SetXYZ(*local_38);
        DirtyDerivedState();
    }

    // 0x100c66a30
    AABB::AABB(PacketT<Array<unsigned char>>& arg1) : Vector3T() {
        float* this_00 = &m_maximum;
        new (this_00) Vector3T();
        field_28 = -1.0;
        uint32_t uVar2 = arg1.gFloat();
        uint32_t* puVar1 = (uint32_t*)(*this)[0];
        *puVar1 = uVar2;
        uVar2 = arg1.gFloat();
        puVar1 = (uint32_t*)(*this)[1];
        *puVar1 = uVar2;
        uVar2 = arg1.gFloat();
        puVar1 = (uint32_t*)(*this)[2];
        *puVar1 = uVar2;
        uVar2 = arg1.gFloat();
        puVar1 = (uint32_t*)(*this_00)[0];
        *puVar1 = uVar2;
        uVar2 = arg1.gFloat();
        puVar1 = (uint32_t*)(*this_00)[1];
        *puVar1 = uVar2;
        uVar2 = arg1.gFloat();
        puVar1 = (uint32_t*)(*this_00)[2];
        *puVar1 = uVar2;
    }

    // 0x100c66b40
    void AABB::Serialise(PacketT<Array<unsigned char>>& arg1) const {
        float* pfVar1 = (float*)(*this)[0];
        arg1.pFloat(*pfVar1);
        pfVar1 = (float*)(*this)[1];
        arg1.pFloat(*pfVar1);
        pfVar1 = (float*)(*this)[2];
        arg1.pFloat(*pfVar1);
        float* this_00 = &m_maximum;
        pfVar1 = (float*)(*this_00)[0];
        arg1.pFloat(*pfVar1);
        pfVar1 = (float*)(*this_00)[1];
        arg1.pFloat(*pfVar1);
        pfVar1 = (float*)(*this_00)[2];
        arg1.pFloat(*pfVar1);
    }

    // 0x100c66c50
    void AABB::Set(const AABB& aabb) {
        auto pVVar1 = aabb.SSOBeginPtr();
        Set(*pVVar1);
        pVVar1 = (Vector3T<float>*)aabb.GetScreen();
        m_maximum.Set(*pVVar1);
        DirtyDerivedState();
    }

    // 0x100c66d20
    void AABB::Set(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        SetXYZ(vector31);
        m_maximum.SetXYZ(vector32);
        DirtyDerivedState();
    }

    // 0x100c66d50
    void AABB::Translate(const Vector3T<float>& vector3) {
        if (IsValid() == '\0') {
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      120, nullptr);
        }
        *this += vector3;
        m_maximum += vector3;
        DirtyDerivedState();
    }

    // 0x100c66e10
    void AABB::Scale(const Vector3T<float>& vector3) {
        *this *= vector3;
        m_maximum *= vector3;
        DirtyDerivedState();
    }

    // 0x100c66e80
    void AABB::Transform(const Matrix44T<float>& matrix44) {
        float fVar1;
        unsigned int arg1_00;
        float fVar6;
        uint64_t local_70;
        uint64_t local_60;
        float local_38;

        float local_68 = field_8;
        local_70._0_4_ = field_0;
        local_70._4_4_ = field_4;
        float* pfVar5 = &m_maximum;
        float local_58 = field_24;
        local_60._0_4_ = m_maximum;
        local_60._4_4_ = field_20;
        Vector4T<float>* pVVar2 = &matrix44[3];
        unsigned int arg1 = 0;
        uint32_t* puVar3 = (uint32_t*)(*pVVar2)[0];
        float local_34 = (float)*puVar3;
        puVar3 = (uint32_t*)(*pfVar5)[0];
        *puVar3 = local_34;
        puVar3 = (uint32_t*)(*this)[0];
        *puVar3 = local_34;
        pVVar2 = &matrix44[3];
        puVar3 = (uint32_t*)(*pVVar2)[1];
        local_34 = (float)*puVar3;
        puVar3 = (uint32_t*)(*pfVar5)[1];
        *puVar3 = local_34;
        puVar3 = (uint32_t*)(*this)[1];
        *puVar3 = local_34;
        pVVar2 = &matrix44[3];
        float* pfVar4 = (float*)(*pVVar2)[2];
        local_34 = *pfVar4;
        Vector3T<float>* local_48 = (Vector3T<float>*)pfVar5;
        pfVar5 = (float*)(*pfVar5)[2];
        *pfVar5 = local_34;
        pfVar5 = (float*)(*this)[2];
        Vector3T<float>* this_01 = local_48;
        *pfVar5 = local_34;
        do {
            arg1_00 = 0;
            do {
                pVVar2 = &matrix44[arg1_00];
                pfVar5 = (float*)(*pVVar2)[arg1];
                local_34 = *pfVar5;
                pfVar5 = &local_70[arg1_00];
                local_38 = *pfVar5 * local_34;
                pfVar5 = &local_60[arg1_00];
                local_34 = local_34 * *pfVar5;
                pfVar5 = (float*)(*this)[arg1];
                fVar6 = local_34;
                fVar1 = local_38;
                if (local_34 <= local_38) {
                    fVar6 = local_38;
                    fVar1 = local_34;
                }
                *pfVar5 = fVar1 + *pfVar5;
                local_34 = fVar6;
                pfVar5 = (float*)(*this_01)[arg1];
                *pfVar5 = local_34 + *pfVar5;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 3);
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        DirtyDerivedState();
    }

    // 0x100c67130
    void AABB::GetOBB(OBB& obb) const {
        uint64_t local_50[2];

        local_50[0] = GetCentrePos();
        Matrix33T<float> local_78(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
        uint64_t local_30 = GetDimensions();
        uint32_t local_28 = 0;
        uint64_t local_40 = *0.5 * local_30;
        uint32_t local_38 = 0;
        obb.Set(*local_50, local_78, local_40);
    }

    // 0x100c67270
    void AABB::GetMinimumEnclosingSphere(Sphere& sphere) const {
        uint64_t local_28[2];

        local_28[0] = GetCentrePos();
        float arg2 = (float)GetMaximumRadius();
        sphere.Set(*local_28, arg2);
    }

    // 0x100c672b0
    float AABB::GetMaximumRadius() const {
        uint64_t local_20[2];

        if (field_28 == -1.0) {
            local_20[0] = m_maximum - *this;
            field_28 = (float)local_20->Length() * 0.5;
        }
        return field_28;
    }

    // 0x100c67310
    void AABB::GetMaximumContainedSphere(Sphere& sphere) const {
        uint64_t local_28[2];

        local_28[0] = GetCentrePos();
        float arg2 = (float)GetMinimumRadius();
        sphere.Set(*local_28, arg2);
    }

    // 0x100c673a0
    auto AABB::GetTransform() const {
        Matrix33T<float> local_60;

        float local_28 = (float)GetWidth();
        float local_24 = (float)GetHeight();
        float arg3 = (float)GetLength();
        float fVar1 = local_24;
        Matrix33Scaling<float>(local_28, local_24, arg3);
        uint64_t local_38 = GetCentrePos();
        float local_30 = fVar1;
        return auto(local_60, local_38);
    }

    // 0x100c67450
    void AABB::AddAABB(const AABB& aabb) {
        float fVar1;
        uint32_t uVar2;
        float* pfVar3;
        uint32_t* puVar4;

        unsigned int arg1 = 0;
        do {
            pfVar3 = &aabb[arg1];
            fVar1 = *pfVar3;
            pfVar3 = (float*)(*this)[arg1];
            if (fVar1 < *pfVar3) {
                puVar4 = &aabb[arg1];
                uVar2 = *puVar4;
                puVar4 = (uint32_t*)(*this)[arg1];
                *puVar4 = uVar2;
            }
            pfVar3 = &aabb.m_maximum[arg1];
            fVar1 = *pfVar3;
            pfVar3 = &m_maximum[arg1];
            if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
                puVar4 = &aabb.m_maximum[arg1];
                uVar2 = *puVar4;
                puVar4 = &m_maximum[arg1];
                *puVar4 = uVar2;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        DirtyDerivedState();
    }

    // 0x100c67540
    void AABB::Union(const AABB& aabb) {
        if (IsValid(aabb) == '\0') {
            LogAssert("other.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      248, nullptr);
        }
        auto pVVar2 = aabb.SSOBeginPtr();
        AddPoint(*pVVar2);
        pVVar2 = (Vector3T<float>*)aabb.GetScreen();
        AddPoint(*pVVar2);
    }

    // 0x100c675b0
    auto AABB::Union(const AABB& aabb1, const AABB& aabb2) {
        auto result;

        if (IsValid(aabb1)) {
            if (IsValid(aabb2)) {
                AABB(&result, aabb1);
                Union(&result, aabb2);
                return result;
            }
        }
        LogAssert("a.IsValid() && b.IsValid()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp", 255,
                  nullptr);
    }

    // 0x100c67630
    void AABB::Intersection(const AABB& aabb) {
        uint64_t local_30[2];

        if (!(IsValid())) {
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      263, nullptr);
        }
        if (!(IsValid(aabb))) {
            LogAssert("other.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      264, nullptr);
        }
        auto pVVar2 = aabb.SSOBeginPtr();
        local_30[0] = Vector3Max<float>((Vector3T<float>*)this, pVVar2);
        SetXYZ(*local_30);
        pVVar2 = (Vector3T<float>*)aabb.GetScreen();
        local_30[0] = Vector3Min<float>((Vector3T<float>*)&m_maximum, pVVar2);
        m_maximum.SetXYZ(*local_30);
        DirtyDerivedState();
    }

    // 0x100c67800
    uint64_t AABB::SloppyCompare(const AABB& aabb, float arg2) const {
        uint64_t uVar3;

        auto pVVar2 = aabb.SSOBeginPtr();
        if (SloppyCompare(*pVVar2, arg2) == '\0') {
            uVar3 = 0;
        } else {
            pVVar2 = (Vector3T<float>*)aabb.GetScreen();
            uVar3 = m_maximum.SloppyCompare(*pVVar2, arg2);
        }
        return uVar3;
    }

    // 0x100c678d0
    uint64_t AABB::GetCornerPos(BoxCorner boxCorner) const {
        float* pfVar1;
        AABB* this_00;
        uint64_t uVar4;
        uint64_t uVar3;
        float local_20;
        float local_1c;

        if (7 < (int)boxCorner) {
            LogAssert("boxCorner < BOX_CORNER_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      289, nullptr);
        }
        AABB* pAVar2 = this;
        switch (boxCorner) {
        case 0:
            pfVar1 = (float*)SSOBeginPtr();
            local_20 = *pfVar1;
            this_00 = (AABB*)&m_maximum;
            break;
        case 1:
            this_00 = (AABB*)&m_maximum;
            pfVar1 = (float*)this_00->SSOBeginPtr();
            local_20 = *pfVar1;
            break;
        case 3:
            pAVar2 = (AABB*)&m_maximum;
        LAB_100c6797a:
            pfVar1 = (float*)pAVar2->SSOBeginPtr();
            local_20 = *pfVar1;
            this_00 = this;
        LAB_100c67988:
            pAVar2 = this_00;
            break;
        case 4:
            pfVar1 = (float*)SSOBeginPtr();
            local_20 = *pfVar1;
            this_00 = (AABB*)&m_maximum;
            goto LAB_100c67988;
        case 5:
            pAVar2 = (AABB*)&m_maximum;
        case 2:
            this = pAVar2;
            goto LAB_100c6797a;
        case 6:
            pfVar1 = (float*)SSOBeginPtr();
            local_20 = *pfVar1;
            pfVar1 = (float*)y();
            local_1c = *pfVar1;
            pAVar2 = (AABB*)&m_maximum;
            goto LAB_100c6799c;
        case 7:
            pAVar2 = (AABB*)&m_maximum;
            pfVar1 = (float*)pAVar2->SSOBeginPtr();
            local_20 = *pfVar1;
            pfVar1 = (float*)y();
            local_1c = *pfVar1;
            goto LAB_100c6799c;
        default:
            local_30 = Vector3T();
            uVar4._0_4_ = local_30.field_0;
            uVar4._4_4_ = local_30.field_4;
            return uVar4;
        }
        pfVar1 = (float*)this_00->y();
        local_1c = *pfVar1;
    LAB_100c6799c:
        pfVar1 = (float*)pAVar2->second();
        ColourHSL local_30(local_20, local_1c, *pfVar1);
        uVar3._0_4_ = local_30.field_0;
        uVar3._4_4_ = local_30.field_4;
        return uVar3;
    }

    // 0x100c67a50
    bool AABB::IsInside(const Vector3T<float>& vector3) const {
        float* pfVar3;

        float* pfVar2 = &vector3[0];
        float fVar1 = *pfVar2;
        pfVar2 = (float*)(*this)[0];
        if (*pfVar2 <= fVar1) {
            pfVar2 = &vector3[0];
            fVar1 = *pfVar2;
            pfVar2 = &m_maximum;
            pfVar3 = (float*)(*pfVar2)[0];
            if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                pfVar3 = &vector3[1];
                fVar1 = *pfVar3;
                pfVar3 = (float*)(*this)[1];
                if (*pfVar3 <= fVar1) {
                    pfVar3 = &vector3[1];
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)(*pfVar2)[1];
                    if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                        pfVar3 = &vector3[2];
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)(*this)[2];
                        if (*pfVar3 <= fVar1) {
                            pfVar3 = &vector3[2];
                            fVar1 = *pfVar3;
                            pfVar2 = (float*)(*pfVar2)[2];
                            return fVar1 < *pfVar2 || fVar1 == *pfVar2;
                        }
                    }
                }
            }
        }
        return false;
    }

    // 0x100c67b90
    bool AABB::IsInside(const AABB& aabb) const {
        float* pfVar3;

        auto this_00 = aabb.SSOBeginPtr();
        auto this_01 = aabb.GetScreen();
        float* pfVar2 = (float*)(*this)[0];
        float fVar1 = *pfVar2;
        pfVar2 = (float*)(*this_00)[0];
        if (*pfVar2 <= fVar1) {
            pfVar2 = &m_maximum;
            pfVar3 = (float*)(*pfVar2)[0];
            fVar1 = *pfVar3;
            pfVar3 = (float*)(*this_01)[0];
            if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                pfVar3 = (float*)(*this)[1];
                fVar1 = *pfVar3;
                pfVar3 = (float*)(*this_00)[1];
                if (*pfVar3 <= fVar1) {
                    pfVar3 = (float*)(*pfVar2)[1];
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)(*this_01)[1];
                    if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                        pfVar3 = (float*)(*this)[2];
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)(*this_00)[2];
                        if (*pfVar3 <= fVar1) {
                            pfVar2 = (float*)(*pfVar2)[2];
                            fVar1 = *pfVar2;
                            pfVar2 = (float*)(*this_01)[2];
                            if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100c67cf0
    bool AABB::TestIntersection(const Sphere& sphere) const {
        float local_24;

        auto this_00 = sphere.SSOBeginPtr();
        auto pfVar6 = this_00->SSOBeginPtr();
        float fVar7 = *pfVar6;
        Layout* pLVar4 = (Layout*)SSOBeginPtr();
        pfVar6 = (float*)pLVar4->SSOBeginPtr();
        float fVar1 = *pfVar6;
        pfVar6 = (float*)this_00->SSOBeginPtr();
        float fVar2 = *pfVar6;
        if (fVar1 <= fVar7) {
            pLVar4 = (Layout*)GetScreen();
            pfVar6 = (float*)pLVar4->SSOBeginPtr();
            local_24 = 0.0;
            if (*pfVar6 <= fVar2 && fVar2 != *pfVar6) {
                pfVar6 = (float*)this_00->SSOBeginPtr();
                local_24 = *pfVar6;
                pLVar4 = (Layout*)GetScreen();
                goto LAB_100c67d91;
            }
        } else {
            pLVar4 = (Layout*)SSOBeginPtr();
            local_24 = fVar2;
        LAB_100c67d91:
            pfVar6 = (float*)pLVar4->SSOBeginPtr();
            local_24 = (local_24 - *pfVar6) * (local_24 - *pfVar6);
        }
        pfVar6 = (float*)this_00->y();
        fVar7 = *pfVar6;
        auto pVVar3 = SSOBeginPtr();
        pfVar6 = (float*)pVVar3->y();
        fVar1 = *pfVar6;
        pfVar6 = (float*)this_00->y();
        fVar2 = *pfVar6;
        if (fVar1 <= fVar7) {
            pVVar3 = (Vector2T<int>*)GetScreen();
            pfVar6 = (float*)pVVar3->y();
            if (*pfVar6 <= fVar2 && fVar2 != *pfVar6) {
                pfVar6 = (float*)this_00->y();
                fVar7 = *pfVar6;
                pVVar3 = (Vector2T<int>*)GetScreen();
                pfVar6 = (float*)pVVar3->y();
                fVar7 = (fVar7 - *pfVar6) * (fVar7 - *pfVar6);
                goto LAB_100c67e58;
            }
        } else {
            pVVar3 = (Vector2T<int>*)SSOBeginPtr();
            pfVar6 = (float*)pVVar3->y();
            fVar7 = (fVar2 - *pfVar6) * (fVar2 - *pfVar6);
        LAB_100c67e58:
            local_24 = local_24 + fVar7;
        }
        pfVar6 = (float*)this_00->second();
        fVar7 = *pfVar6;
        auto pcVar5 = SSOBeginPtr();
        pfVar6 = (float*)pcVar5->second();
        fVar1 = *pfVar6;
        pfVar6 = (float*)this_00->second();
        float local_28 = *pfVar6;
        if (fVar1 <= fVar7) {
            pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)GetScreen();
            pfVar6 = (float*)pcVar5->second();
            if (local_28 < *pfVar6 || local_28 == *pfVar6)
                goto LAB_100c67f0c;
            pfVar6 = (float*)this_00->second();
            local_28 = *pfVar6;
            pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)GetScreen();
        } else {
            pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)SSOBeginPtr();
        }
        pfVar6 = (float*)pcVar5->second();
        local_24 = local_24 + (local_28 - *pfVar6) * (local_28 - *pfVar6);
    LAB_100c67f0c:
        fVar7 = (float)sphere.GetRadiusSq();
        return local_24 <= fVar7;
    }

    // 0x100c67f40
    unsigned long AABB::TestIntersection(const Vector3T<float>& vector31, const Vector3T<float>& vector32) const {
        uint64_t local_b8[2];
        uint64_t local_a8[2];
        uint64_t local_98[2];
        uint64_t local_68[2];
        float local_3c;

        local_b8[0] = GetCentrePos();
        local_a8[0] = *local_b8 - vector31;
        local_98[0] = *local_b8 - vector32;
        uint64_t local_48 = *local_a8 + *local_98;
        local_68[0] = local_48 / *2.0;
        local_48 = *local_a8 - *local_68;
        unsigned long uVar2 = 0;
        float* pfVar1 = &local_48[0];
        float local_34 = (float)::abs(*pfVar1);
        pfVar1 = &local_48[1];
        float local_38 = (float)::abs(*pfVar1);
        pfVar1 = &local_48[2];
        float arg3 = (float)::abs(*pfVar1);
        float fVar3 = local_38;
        ColourHSL local_78(local_34, local_38, arg3);
        uint64_t local_88 = m_maximum - *this;
        float local_80 = fVar3;
        uint64_t local_58 = local_88 / *2.0;
        float local_50 = fVar3;
        pfVar1 = (float*)(*local_68)[0];
        local_34 = (float)::abs(*pfVar1);
        pfVar1 = &local_58[0];
        local_38 = *pfVar1;
        pfVar1 = &local_78[0];
        if (local_34 <= local_38 + *pfVar1) {
            pfVar1 = (float*)(*local_68)[1];
            local_34 = (float)::abs(*pfVar1);
            pfVar1 = &local_58[1];
            local_38 = *pfVar1;
            pfVar1 = &local_78[1];
            if (local_34 <= local_38 + *pfVar1) {
                pfVar1 = (float*)(*local_68)[2];
                local_34 = (float)::abs(*pfVar1);
                pfVar1 = &local_58[2];
                local_38 = *pfVar1;
                pfVar1 = &local_78[2];
                if (local_34 <= local_38 + *pfVar1) {
                    pfVar1 = (float*)(*local_68)[1];
                    local_34 = *pfVar1;
                    pfVar1 = &local_48[2];
                    local_34 = local_34 * *pfVar1;
                    pfVar1 = (float*)(*local_68)[2];
                    local_38 = *pfVar1;
                    pfVar1 = &local_48[1];
                    local_38 = (float)::abs(local_34 - local_38 * *pfVar1);
                    pfVar1 = &local_58[1];
                    local_34 = *pfVar1;
                    pfVar1 = &local_78[2];
                    local_34 = local_34 * *pfVar1;
                    pfVar1 = &local_58[2];
                    local_3c = *pfVar1;
                    pfVar1 = &local_78[1];
                    if (local_38 <= local_3c * *pfVar1 + local_34) {
                        uVar2 = 0;
                        pfVar1 = (float*)(*local_68)[0];
                        local_34 = *pfVar1;
                        pfVar1 = &local_48[2];
                        local_34 = local_34 * *pfVar1;
                        pfVar1 = (float*)(*local_68)[2];
                        local_38 = *pfVar1;
                        pfVar1 = &local_48[0];
                        local_38 = (float)::abs(local_34 - local_38 * *pfVar1);
                        pfVar1 = &local_58[0];
                        local_34 = *pfVar1;
                        pfVar1 = &local_78[2];
                        local_34 = local_34 * *pfVar1;
                        pfVar1 = &local_58[2];
                        local_3c = *pfVar1;
                        pfVar1 = &local_78[0];
                        if (local_38 <= local_3c * *pfVar1 + local_34) {
                            pfVar1 = (float*)(*local_68)[0];
                            local_34 = *pfVar1;
                            pfVar1 = &local_48[1];
                            local_34 = local_34 * *pfVar1;
                            pfVar1 = (float*)(*local_68)[1];
                            local_38 = *pfVar1;
                            pfVar1 = &local_48[0];
                            local_38 = (float)::abs(local_34 - local_38 * *pfVar1);
                            pfVar1 = &local_58[0];
                            local_34 = *pfVar1;
                            pfVar1 = &local_78[1];
                            local_34 = local_34 * *pfVar1;
                            pfVar1 = &local_58[1];
                            local_3c = *pfVar1;
                            pfVar1 = &local_78[0];
                            uVar2 = (((uint64_t)((int64_t)((unsigned long)&local_58 >> 8)) << 8) |
                                     (uint8_t)(local_38 <= local_3c * *pfVar1 + local_34));
                        }
                        goto LAB_100c68281;
                    }
                }
            }
            uVar2 = 0;
        }
    LAB_100c68281:
        return uVar2 & 4294967295;
    }

    // 0x100c68470
    uint64_t AABB::TestIntersection(const AABB& aabb) const {
        float* pfVar3;

        auto this_00 = aabb.SSOBeginPtr();
        auto this_01 = aabb.GetScreen();
        float* pfVar2 = (float*)(*this)[0];
        float fVar1 = *pfVar2;
        pfVar2 = (float*)(*this_01)[0];
        if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
            pfVar2 = &m_maximum;
            pfVar3 = (float*)(*pfVar2)[0];
            fVar1 = *pfVar3;
            pfVar3 = (float*)(*this_00)[0];
            if (*pfVar3 <= fVar1) {
                pfVar3 = (float*)(*this)[1];
                fVar1 = *pfVar3;
                pfVar3 = (float*)(*this_01)[1];
                if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                    pfVar3 = (float*)(*pfVar2)[1];
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)(*this_00)[1];
                    if (*pfVar3 <= fVar1) {
                        pfVar3 = (float*)(*this)[2];
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)(*this_01)[2];
                        if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                            pfVar2 = (float*)(*pfVar2)[2];
                            fVar1 = *pfVar2;
                            pfVar2 = (float*)(*this_00)[2];
                            if (*pfVar2 <= fVar1) {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100c685d0
    uint64_t AABB::GetClosestPoint(const Vector3T<float>& vector3) const {
        AABB* pAVar2;
        uint64_t uVar3;
        float arg3;
        uint8_t local_38[16];

        float* pfVar1 = &vector3[0];
        float local_28 = *pfVar1;
        pfVar1 = (float*)(*this)[0];
        if (*pfVar1 <= local_28) {
            pAVar2 = (AABB*)&m_maximum;
            pfVar1 = (float*)(*pAVar2)[0];
            if (*pfVar1 <= local_28 && local_28 != *pfVar1)
                goto LAB_100c6862a;
        } else {
            pAVar2 = this;
        LAB_100c6862a:
            pfVar1 = (float*)(*pAVar2)[0];
            local_28 = *pfVar1;
        }
        pfVar1 = &vector3[1];
        float local_24 = *pfVar1;
        pfVar1 = (float*)(*this)[1];
        if (*pfVar1 <= local_24) {
            pAVar2 = (AABB*)&m_maximum;
            pfVar1 = (float*)(*pAVar2)[1];
            if (*pfVar1 <= local_24 && local_24 != *pfVar1)
                goto LAB_100c6868a;
        } else {
            pAVar2 = this;
        LAB_100c6868a:
            pfVar1 = (float*)(*pAVar2)[1];
            local_24 = *pfVar1;
        }
        pfVar1 = &vector3[2];
        local_38._12_4_ = *pfVar1;
        pfVar1 = (float*)(*this)[2];
        if (*pfVar1 <= (float)local_38._12_4_) {
            this = (AABB*)&m_maximum;
            pfVar1 = (float*)(*this)[2];
            arg3 = (float)local_38._12_4_;
            if ((float)local_38._12_4_ < *pfVar1 || (float)local_38._12_4_ == *pfVar1)
                goto LAB_100c686f6;
        }
        pfVar1 = (float*)(*this)[2];
        arg3 = *pfVar1;
    LAB_100c686f6:
        new (local_38) ColourHSL(local_28, local_24, arg3);
        uVar3._0_4_ = (float)local_38._0_4_;
        uVar3._4_4_ = (float)local_38._4_4_;
        return uVar3;
    }

    // 0x100c68720
    uint64_t AABB::GetFurthestPoint(const Vector3T<float>& vector3) const {
        AABB* pAVar2;
        uint64_t uVar4;

        float* pfVar1 = &vector3[0];
        float local_2c = *pfVar1;
        pfVar1 = (float*)(*this)[0];
        local_2c = (float)::abs(local_2c - *pfVar1);
        pfVar1 = &vector3[0];
        float local_24 = *pfVar1;
        AABB* this_00 = (AABB*)&m_maximum;
        pfVar1 = (float*)(*this_00)[0];
        float fVar3 = (float)::abs(local_24 - *pfVar1);
        if (local_2c <= fVar3) {
            pAVar2 = this_00;
        } else {
            pAVar2 = this;
        }
        pfVar1 = (float*)(*pAVar2)[0];
        local_2c = *pfVar1;
        pfVar1 = &vector3[1];
        local_24 = *pfVar1;
        pfVar1 = (float*)(*this)[1];
        local_24 = (float)::abs(local_24 - *pfVar1);
        pfVar1 = &vector3[1];
        float local_28 = *pfVar1;
        pfVar1 = (float*)(*this_00)[1];
        fVar3 = (float)::abs(local_28 - *pfVar1);
        if (local_24 <= fVar3) {
            pAVar2 = this_00;
        } else {
            pAVar2 = this;
        }
        pfVar1 = (float*)(*pAVar2)[1];
        local_24 = *pfVar1;
        pfVar1 = &vector3[2];
        local_28 = *pfVar1;
        pfVar1 = (float*)(*this)[2];
        local_28 = (float)::abs(local_28 - *pfVar1);
        pfVar1 = &vector3[2];
        float local_30 = *pfVar1;
        pfVar1 = (float*)(*this_00)[2];
        fVar3 = (float)::abs(local_30 - *pfVar1);
        if (fVar3 < local_28) {
            this_00 = this;
        }
        pfVar1 = (float*)(*this_00)[2];
        ColourHSL local_40(local_2c, local_24, *pfVar1);
        uVar4._0_4_ = local_40.field_0;
        uVar4._4_4_ = local_40.field_4;
        return uVar4;
    }

    // 0x100c688f0
    uint64_t AABB::GetDistanceToPoint(const Vector3T<float>& vector3) const {
        uint64_t local_38[2];
        uint64_t local_28[2];

        bool cVar1 = IsInside(vector3);
        uint64_t uVar2 = 0;
        if (!cVar1) {
            local_38[0] = GetClosestPoint(vector3);
            local_28[0] = vector3 - *local_38;
            uVar2 = local_28->Length();
        }
        return uVar2;
    }

    // 0x100c68950
    uint64_t AABB::GetDistanceToPointSquared(const Vector3T<float>& vector3) const {
        uint64_t local_38[2];
        uint64_t local_28[2];

        bool cVar1 = IsInside(vector3);
        uint64_t uVar2 = 0;
        if (!cVar1) {
            local_38[0] = GetClosestPoint(vector3);
            local_28[0] = vector3 - *local_38;
            uVar2 = local_28->LengthSq();
        }
        return uVar2;
    }

    // 0x100c689b0
    uint64_t AABB::GetDistanceToPointXZ(const Vector3T<float>& vector3) const {
        uint32_t* puVar1;
        uint64_t local_38[2];
        uint64_t local_28[2];

        bool cVar2 = IsInside(vector3);
        uint64_t uVar3 = 0;
        if (!cVar2) {
            local_38[0] = GetClosestPoint(vector3);
            local_28[0] = vector3 - *local_38;
            puVar1 = (uint32_t*)(*local_28)[1];
            *puVar1 = 0;
            uVar3 = local_28->Length();
        }
        return uVar3;
    }

    // 0x100c68a20
    uint64_t AABB::GetDistanceToPointXZSquared(const Vector3T<float>& vector3) const {
        uint32_t* puVar1;
        uint64_t local_38[2];
        uint64_t local_28[2];

        bool cVar2 = IsInside(vector3);
        uint64_t uVar3 = 0;
        if (!cVar2) {
            local_38[0] = GetClosestPoint(vector3);
            local_28[0] = vector3 - *local_38;
            puVar1 = (uint32_t*)(*local_28)[1];
            *puVar1 = 0;
            uVar3 = local_28->LengthSq();
        }
        return uVar3;
    }

    // 0x100c68a90
    unsigned int AABB::GetDistanceAABBXZSquared(const AABB& aabb) const {
        float* pfVar4 = (float*)(*this)[0];
        float fVar6 = *pfVar4;
        pfVar4 = &aabb.m_maximum;
        float* pfVar5 = (float*)(*pfVar4)[0];
        float fVar7 = *pfVar5;
        pfVar5 = &m_maximum[0];
        float fVar8 = *pfVar5;
        pfVar5 = (float*)(*pfVar4)[0];
        float fVar1 = *pfVar5;
        pfVar5 = (float*)(*this)[0];
        float fVar2 = *pfVar5;
        pfVar5 = &aabb[0];
        float fVar3 = *pfVar5;
        fVar6 = (float)::abs(fVar6 - fVar7);
        fVar7 = (float)::abs(fVar8 - fVar1);
        fVar8 = (float)::abs(fVar2 - fVar3);
        fVar7 = (float)eastl::min<float>(fVar7, fVar8);
        fVar6 = (float)eastl::min<float>(fVar6, fVar7);
        float fVar9 = (float)((unsigned int)(fVar6 * fVar6) & -(unsigned int)(0.0 < fVar6));
        pfVar5 = (float*)(*this)[2];
        fVar6 = *pfVar5;
        pfVar5 = (float*)(*pfVar4)[2];
        fVar7 = *pfVar5;
        pfVar5 = &m_maximum[2];
        fVar8 = *pfVar5;
        pfVar4 = (float*)(*pfVar4)[2];
        fVar1 = *pfVar4;
        pfVar4 = (float*)(*this)[2];
        fVar2 = *pfVar4;
        pfVar4 = &aabb[2];
        fVar3 = *pfVar4;
        fVar6 = (float)::abs(fVar6 - fVar7);
        fVar7 = (float)::abs(fVar8 - fVar1);
        fVar8 = (float)::abs(fVar2 - fVar3);
        fVar7 = (float)eastl::min<float>(fVar7, fVar8);
        fVar6 = (float)eastl::min<float>(fVar6, fVar7);
        return (unsigned int)(fVar6 * fVar6 + fVar9) & -(unsigned int)(0.0 < fVar6) |
               ~-(unsigned int)(0.0 < fVar6) & (unsigned int)fVar9;
    }

} // namespace jag::math

namespace jag::oldscape::dash3d {
    // 0x10019b570: ModelLit::AABB::AABB() has the same machine code as hardware::MemoryInfo::MemoryInfo()

} // namespace jag::oldscape::dash3d
