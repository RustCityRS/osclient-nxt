// libs/math/primitives/Capsule2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.math

namespace jag::math {
    class Capsule2D {
    public:
        int GetRadius() const;
        Capsule2D(const Point<int>& point1, const Point<int>& point2, int arg3);
        Capsule2D();
        uint32_t PointInside(int arg1, int arg2, int arg3) const;
        void GetBoundingBox(Rect<int>& rect) const;
        uint64_t FillFromAABB(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442, int arg3, int arg4,
                              const AABB& aabb);

    private:
        unsigned int field_0;
        unsigned int field_4;
        uint8_t _unknown_8[8];
        int m_radius;
        uint8_t field_20;
        uint8_t _unknown_21[3];
    };

    // 0x100066b70: Capsule2D::GetRadius() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x100c68c90
    Capsule2D::Capsule2D(const Point<int>& point1, const Point<int>& point2, int arg3)
        : Point(point1), field_8(point2), m_radius(arg3), field_20(0) {}

    // 0x100c68cf0
    Capsule2D::Capsule2D() : Vector2T(), m_radius(0), field_20(0) {}

    // 0x100c68d30
    uint32_t Capsule2D::PointInside(int arg1, int arg2, int arg3) const {
        float fVar7;

        int iVar6 = m_radius;
        uint8_t* this_00 = &field_8;
        int iVar1 = this_00->GetX();
        int iVar2 = GetX();
        iVar1 = iVar1 - iVar2;
        iVar2 = this_00->GetZ();
        int iVar3 = GetZ();
        iVar2 = iVar2 - iVar3;
        iVar3 = GetX();
        int iVar4 = GetZ();
        float fVar8 = (float)(iVar2 * arg2 + iVar1 * arg1) - (float)(iVar4 * iVar2 + iVar3 * iVar1);
        if (fVar8 <= 0.0) {
            iVar1 = GetX();
            iVar1 = iVar1 - arg1;
        } else {
            fVar7 = (float)(iVar2 * iVar2 + iVar1 * iVar1);
            if (fVar8 <= fVar7) {
                fVar8 = fVar8 / fVar7;
                iVar3 = GetX();
                iVar1 = (int)(((float)iVar1 * fVar8 - (float)arg1) + (float)iVar3);
                iVar3 = GetZ();
                iVar2 = (int)(((float)iVar2 * fVar8 - (float)arg2) + (float)iVar3);
                goto LAB_100c68e93;
            }
            iVar1 = this_00->GetX();
            iVar1 = iVar1 - arg1;
            this = (Capsule2D*)this_00;
        }
        iVar2 = GetZ();
        iVar2 = iVar2 - arg2;
    LAB_100c68e93:
        unsigned int uVar5 = iVar2 * iVar2 + iVar1 * iVar1;
        iVar6 = iVar6 + arg3;
        return uVar5 < (unsigned int)(iVar6 * iVar6);
    }

    // 0x100c68ec0
    void Capsule2D::GetBoundingBox(Rect<int>& rect) const {
        int iVar1;
        int iVar2;
        int* piVar3;
        Capsule2D* this_00;
        Capsule2D* this_01;

        if (field_20 == '\0') {
            new (rect) oldscape::dash3d::GridRect(0, 0, 0, 0);
        } else {
            this_01 = (Capsule2D*)&field_8;
            iVar1 = this_01->GetX();
            iVar2 = GetX();
            if (iVar1 < iVar2) {
                iVar2 = this_01->GetX();
                iVar1 = m_radius;
                piVar3 = (int*)rect.SSOBeginPtr();
                *piVar3 = iVar2 - iVar1;
                this_00 = this;
            } else {
                iVar2 = GetX();
                iVar1 = m_radius;
                piVar3 = (int*)rect.SSOBeginPtr();
                *piVar3 = iVar2 - iVar1;
                this_00 = this_01;
            }
            iVar1 = this_00->GetX();
            rect.SetRight(iVar1 + m_radius);
            iVar1 = this_01->GetZ();
            iVar2 = GetZ();
            if (iVar1 < iVar2) {
                iVar2 = this_01->GetZ();
                iVar1 = m_radius;
                piVar3 = (int*)rect.y();
                *piVar3 = iVar2 - iVar1;
                this_01 = this;
            } else {
                iVar2 = GetZ();
                iVar1 = m_radius;
                piVar3 = (int*)rect.y();
                *piVar3 = iVar2 - iVar1;
            }
            iVar1 = this_01->GetZ();
            rect.SetBottom(iVar1 + m_radius);
        }
    }

    // 0x100c68ff0
    uint64_t Capsule2D::FillFromAABB(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442, int arg3,
                                     int arg4, const AABB& aabb) {
        Layout* this_00;
        float fVar1;
        int* piVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar5;
        uint64_t local_88[2];
        float local_68;
        float local_64;
        float local_58;
        float local_54;
        float local_48;
        float local_3c;

        field_20 = 0;
        float local_44 = (float)arg3;
        float local_40 = (float)arg4;
        local_88[0] = aabb.GetCentrePos();
        auto pfVar2 = local_88->SSOBeginPtr();
        float local_38 = *pfVar2;
        auto pVVar3 = aabb.SSOBeginPtr();
        pfVar2 = (float*)pVVar3->y();
        float local_34 = *pfVar2;
        pfVar2 = (float*)local_88->second();
        new (&local_68) ImVec4(local_38, local_34, *pfVar2, 1.0);
        pfVar2 = (float*)local_88->SSOBeginPtr();
        local_38 = *pfVar2;
        pVVar3 = (Vector2T<int>*)aabb.GetScreen();
        pfVar2 = (float*)pVVar3->y();
        local_34 = *pfVar2;
        pfVar2 = (float*)local_88->second();
        new (&local_58) ImVec4(local_38, local_34, *pfVar2, 1.0);
        local_34 = (float)aabb.GetWidth();
        local_38 = (float)aabb.GetLength();
        local_68 *= matrix442;
        local_58 *= matrix442;
        pfVar2 = (float*)local_68.qw();
        if ((0.0 < *pfVar2 || *pfVar2 == 0.0) && (pfVar2 = (float*)local_58.qw(), 0.0 < *pfVar2 || *pfVar2 == 0.0)) {
            pfVar2 = (float*)local_68.qw();
            local_3c = *pfVar2;
            pfVar2 = (float*)local_58.qw();
            local_48 = *pfVar2;
            pfVar2 = (float*)local_68.qw();
            local_68 /= *pfVar2;
            pfVar2 = (float*)local_58.qw();
            local_58 /= *pfVar2;
            pfVar2 = (float*)local_68.second();
            if (-1.0 < *pfVar2 || *pfVar2 == -1.0) {
                pfVar2 = (float*)local_58.second();
                if (-1.0 < *pfVar2 || *pfVar2 == -1.0) {
                    local_38 = local_38 * 0.5;
                    if (local_38 <= local_34 * 0.5) {
                        local_38 = local_34 * 0.5;
                    }
                    pfVar2 = (float*)local_68.second();
                    local_34 = *pfVar2;
                    pfVar2 = (float*)local_58.second();
                    pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)&local_58;
                    if (*pfVar2 <= local_34 && local_34 != *pfVar2) {
                        pcVar5 =
                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)&local_68;
                    }
                    if ((NAN(local_34) || NAN(*pfVar2)) || (*pfVar2 > local_34 || local_34 == *pfVar2)) {
                        local_3c = local_48;
                    }
                    pfVar2 = (float*)pcVar5->SSOBeginPtr();
                    local_34 = *pfVar2 * local_3c;
                    pfVar2 = (float*)matrix441.SSOBeginPtr();
                    local_34 = *pfVar2 * local_38 + local_34;
                    this_00 = (Layout*)(matrix441 + 48);
                    pfVar2 = (float*)this_00->SSOBeginPtr();
                    local_34 = local_34 + *pfVar2;
                    pfVar2 = (float*)pcVar5->qw();
                    local_3c = local_3c * *pfVar2;
                    pfVar2 = (float*)matrix441.qw();
                    local_38 = local_38 * *pfVar2 + local_3c;
                    pfVar2 = (float*)this_00->qw();
                    local_38 = local_38 + *pfVar2;
                    pfVar2 = (float*)local_68.SSOBeginPtr();
                    local_44 = (float)(int)local_44;
                    local_68 = (*pfVar2 * 0.5 + 0.5) * local_44;
                    pfVar2 = (float*)local_68.y();
                    local_40 = (float)(int)local_40;
                    local_64 = (*pfVar2 * 0.5 + 0.5) * local_40;
                    pfVar2 = (float*)local_58.SSOBeginPtr();
                    local_58 = (*pfVar2 * 0.5 + 0.5) * local_44;
                    pfVar2 = (float*)local_58.y();
                    local_54 = (*pfVar2 * 0.5 + 0.5) * local_40;
                    pfVar2 = (float*)local_68.second();
                    local_40 = *pfVar2;
                    pfVar2 = (float*)local_58.second();
                    pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)&local_58;
                    if (*pfVar2 <= local_40 && local_40 != *pfVar2) {
                        pcVar5 =
                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)&local_68;
                    }
                    local_34 = ((local_34 * 0.5) / local_38 + 0.5) * local_44;
                    pfVar2 = (float*)pcVar5->SSOBeginPtr();
                    local_34 = local_34 - *pfVar2;
                    pfVar2 = (float*)local_68.SSOBeginPtr();
                    fVar1 = *pfVar2;
                    piVar4 = (int*)SSOBeginPtr();
                    *piVar4 = (int)fVar1;
                    pfVar2 = (float*)local_68.y();
                    fVar1 = *pfVar2;
                    piVar4 = (int*)this->y();
                    *piVar4 = (int)fVar1;
                    pfVar2 = (float*)local_58.SSOBeginPtr();
                    fVar1 = *pfVar2;
                    piVar4 = (int*)field_8.SSOBeginPtr();
                    *piVar4 = (int)fVar1;
                    pfVar2 = (float*)local_58.y();
                    fVar1 = *pfVar2;
                    piVar4 = (int*)field_8.y();
                    *piVar4 = (int)fVar1;
                    m_radius = (int)local_34;
                    field_20 = 1;
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100c69440
    Vector4T<float>* Vector4T<float>::operator/=(float arg1) {
        float fVar1 = 1.0 / arg1;
        *(float*)this = *(float*)this * fVar1;
        *(float*)(this + 4) = *(float*)(this + 4) * fVar1;
        *(float*)(this + 8) = *(float*)(this + 8) * fVar1;
        *(float*)(this + 12) = fVar1 * *(float*)(this + 12);
        return this;
    }

} // namespace jag::math
