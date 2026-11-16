// libs/math/primitives/Capsule2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.math

namespace jag::math {
    class Capsule2D {
    public:
        int GetRadius() const;
        Capsule2D(Point<int> const&, Point<int> const&, int);
        Capsule2D();
        PointInside(int, int, int) const;
        void GetBoundingBox(Rect<int>&) const;
        FillFromAABB(Matrix44T<float> const&, Matrix44T<float> const&, int, int, AABB const&);

        // data members, from how the methods use this: 24 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        char _unknown_8[8];
        int m_radius;        // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[3];
    };

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int Capsule2D::GetRadius() const;

    // 0x100c68c90, 64 bytes, base-object constructor, placed by class name
    // Capsule2D::Capsule2D(Point<int> const&, Point<int> const&, int)
    void Capsule2D::Capsule2D(Point* param_1, Point* param_2, int param_3) {
        new (this) Point<int>(param_1);
        new (&field_8, param_2) Point<int>();
        m_radius = param_3;
        field_20 = 0;
    }

    // 0x100c68ce0, 16 bytes, complete-object constructor, placed by class name
    // Capsule2D::Capsule2D(Point<int> const&, Point<int> const&, int): jumps straight to the base-object constructor

    // 0x100c68cf0, 48 bytes, base-object constructor, placed by class name
    // Capsule2D::Capsule2D()
    void Capsule2D::Capsule2D() {
        new (this) Vector2T<int>();
        new (&field_8) Vector2T<int>();
        m_radius = 0;
        field_20 = 0;
    }

    // 0x100c68d20, 16 bytes, complete-object constructor, placed by class name
    // Capsule2D::Capsule2D(): jumps straight to the base-object constructor

    // 0x100c68d30, 400 bytes, placed by class name
    // Capsule2D::PointInside(int, int, int) const
    undefined4 Capsule2D::PointInside(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        float fVar7;
        float fVar8;

        iVar6 = m_radius;
        this_00 = &field_8;
        iVar1 = this_00->GetX();
        iVar2 = GetX();
        iVar1 = iVar1 - iVar2;
        iVar2 = this_00->GetZ();
        iVar3 = GetZ();
        iVar2 = iVar2 - iVar3;
        iVar3 = GetX();
        iVar4 = GetZ();
        fVar8 = (float)(iVar2 * param_2 + iVar1 * param_1) - (float)(iVar4 * iVar2 + iVar3 * iVar1);
        if (fVar8 <= 0.0) {
            iVar1 = GetX();
            iVar1 = iVar1 - param_1;
        } else {
            fVar7 = (float)(iVar2 * iVar2 + iVar1 * iVar1);
            if (fVar8 <= fVar7) {
                fVar8 = fVar8 / fVar7;
                iVar3 = GetX();
                iVar1 = (int)(((float)iVar1 * fVar8 - (float)param_1) + (float)iVar3);
                iVar3 = GetZ();
                iVar2 = (int)(((float)iVar2 * fVar8 - (float)param_2) + (float)iVar3);
                goto LAB_100c68e93;
            }
            iVar1 = this_00->GetX();
            iVar1 = iVar1 - param_1;
            this = (Capsule2D*)this_00;
        }
        iVar2 = GetZ();
        iVar2 = iVar2 - param_2;
    LAB_100c68e93:
        uVar5 = iVar2 * iVar2 + iVar1 * iVar1;
        iVar6 = iVar6 + param_3;
        return CONCAT31((int3)(uVar5 >> 8), uVar5 < (uint)(iVar6 * iVar6));
    }

    // 0x100c68ec0, 272 bytes, placed by class name
    // Capsule2D::GetBoundingBox(Rect<int>&) const
    void Capsule2D::GetBoundingBox(Rect* param_1) {
        int iVar1;
        int iVar2;
        vector* pvVar3;
        int* piVar4;
        Capsule2D* this_00;
        Capsule2D* this_01;

        if (field_20 == '\0') {
            new (param_1) oldscape::dash3d::GridRect(0, 0, 0, 0);
        } else {
            this_01 = (Capsule2D*)&field_8;
            iVar1 = this_01->GetX();
            iVar2 = GetX();
            if (iVar1 < iVar2) {
                iVar2 = this_01->GetX();
                iVar1 = m_radius;
                pvVar3 = param_1->SSOBeginPtr(param_1);
                *(int*)pvVar3 = iVar2 - iVar1;
                this_00 = this;
            } else {
                iVar2 = GetX();
                iVar1 = m_radius;
                pvVar3 = param_1->SSOBeginPtr(param_1);
                *(int*)pvVar3 = iVar2 - iVar1;
                this_00 = this_01;
            }
            iVar1 = this_00->GetX();
            param_1->SetRight(iVar1 + m_radius);
            iVar1 = this_01->GetZ();
            iVar2 = GetZ();
            if (iVar1 < iVar2) {
                iVar2 = this_01->GetZ();
                iVar1 = m_radius;
                piVar4 = (int*)param_1->y();
                *piVar4 = iVar2 - iVar1;
                this_01 = this;
            } else {
                iVar2 = GetZ();
                iVar1 = m_radius;
                piVar4 = (int*)param_1->y();
                *piVar4 = iVar2 - iVar1;
            }
            iVar1 = this_01->GetZ();
            param_1->SetBottom(iVar1 + m_radius);
        }
    }

    // 0x100c68ff0, 1104 bytes, placed by class name
    // Capsule2D::FillFromAABB(Matrix44T<float> const&, Matrix44T<float> const&, int, int, AABB const&)
    undefined8 Capsule2D::FillFromAABB(Matrix44T* param_1, Matrix44T* param_2, int param_3, int param_4,
                                       AABB* param_5) {
        undefined1* this_00;
        float fVar1;
        Capsule2D* this_01;
        Matrix44T* this_02;
        vector* pvVar2;
        float* pfVar3;
        Vector2T<int>* this_03;
        int* piVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar5;
        undefined8 local_88[2];
        Capsule2D* local_78;
        Matrix44T* local_70;
        float local_68;
        float local_64;
        float local_58;
        float local_54;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        field_20 = 0;
        local_78 = this;
        local_70 = param_1;
        local_44 = (float)param_3;
        local_40 = (float)param_4;
        local_88[0] = param_5->GetCentrePos();
        pvVar2 = local_88->SSOBeginPtr(param_1);
        local_38 = *(float*)pvVar2;
        pvVar2 = param_5->SSOBeginPtr(param_1);
        pfVar3 = (float*)pvVar2->y();
        local_34 = *pfVar3;
        pfVar3 = (float*)local_88->second();
        new (&local_68) ImVec4(local_38, local_34, *pfVar3, 1.0);
        pvVar2 = local_88->SSOBeginPtr(param_1);
        local_38 = *(float*)pvVar2;
        this_03 = (Vector2T<int>*)param_5->GetScreen();
        pfVar3 = (float*)this_03->y();
        local_34 = *pfVar3;
        pfVar3 = (float*)local_88->second();
        new (&local_58) ImVec4(local_38, local_34, *pfVar3, 1.0);
        local_34 = (float)param_5->GetWidth();
        local_38 = (float)param_5->GetLength();
        Vector4T<float>::operator*=((Vector4T<float>*)&local_68, param_2);
        Vector4T<float>::operator*=((Vector4T<float>*)&local_58, param_2);
        pfVar3 = (float*)local_68.qw();
        if ((0.0 < *pfVar3 || *pfVar3 == 0.0) && (pfVar3 = (float*)local_58.qw(), 0.0 < *pfVar3 || *pfVar3 == 0.0)) {
            pfVar3 = (float*)local_68.qw();
            local_3c = *pfVar3;
            pfVar3 = (float*)local_58.qw();
            local_48 = *pfVar3;
            pfVar3 = (float*)local_68.qw();
            Vector4T<float>::operator/=((Vector4T<float>*)&local_68, *pfVar3);
            pfVar3 = (float*)local_58.qw();
            Vector4T<float>::operator/=((Vector4T<float>*)&local_58, *pfVar3);
            pfVar3 = (float*)local_68.second();
            if (-1.0 < *pfVar3 || *pfVar3 == -1.0) {
                pfVar3 = (float*)local_58.second();
                if (-1.0 < *pfVar3 || *pfVar3 == -1.0) {
                    local_38 = local_38 * 0.5;
                    if (local_38 <= local_34 * 0.5) {
                        local_38 = local_34 * 0.5;
                    }
                    pfVar3 = (float*)local_68.second();
                    local_34 = *pfVar3;
                    pfVar3 = (float*)local_58.second();
                    pcVar5 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)&local_58;
                    if (*pfVar3 <= local_34 && local_34 != *pfVar3) {
                        pcVar5 = (compressed_pair_imp<
                                  std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator, 0>*)&local_68;
                    }
                    if ((NAN(local_34) || NAN(*pfVar3)) || (*pfVar3 > local_34 || local_34 == *pfVar3)) {
                        local_3c = local_48;
                    }
                    pvVar2 = pcVar5->SSOBeginPtr(param_2);
                    this_02 = local_70;
                    local_34 = *(float*)pvVar2 * local_3c;
                    pvVar2 = local_70->SSOBeginPtr(param_2);
                    local_34 = *(float*)pvVar2 * local_38 + local_34;
                    this_00 = &this_02->field_48;
                    pvVar2 = this_00->SSOBeginPtr(param_2);
                    local_34 = local_34 + *(float*)pvVar2;
                    pfVar3 = (float*)pcVar5->qw();
                    local_3c = local_3c * *pfVar3;
                    pfVar3 = (float*)this_02->qw();
                    local_38 = local_38 * *pfVar3 + local_3c;
                    pfVar3 = (float*)this_00->qw();
                    local_38 = local_38 + *pfVar3;
                    pvVar2 = local_68.SSOBeginPtr(param_2);
                    local_44 = (float)(int)local_44;
                    local_68 = (*(float*)pvVar2 * 0.5 + 0.5) * local_44;
                    pfVar3 = (float*)local_68.y();
                    local_40 = (float)(int)local_40;
                    local_64 = (*pfVar3 * 0.5 + 0.5) * local_40;
                    pvVar2 = local_58.SSOBeginPtr(param_2);
                    local_58 = (*(float*)pvVar2 * 0.5 + 0.5) * local_44;
                    pfVar3 = (float*)local_58.y();
                    local_54 = (*pfVar3 * 0.5 + 0.5) * local_40;
                    pfVar3 = (float*)local_68.second();
                    local_40 = *pfVar3;
                    pfVar3 = (float*)local_58.second();
                    pcVar5 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)&local_58;
                    if (*pfVar3 <= local_40 && local_40 != *pfVar3) {
                        pcVar5 = (compressed_pair_imp<
                                  std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator, 0>*)&local_68;
                    }
                    local_34 = ((local_34 * 0.5) / local_38 + 0.5) * local_44;
                    pvVar2 = pcVar5->SSOBeginPtr(param_2);
                    local_34 = local_34 - *(float*)pvVar2;
                    pvVar2 = local_68.SSOBeginPtr(param_2);
                    this_01 = local_78;
                    fVar1 = *(float*)pvVar2;
                    pvVar2 = local_78->SSOBeginPtr(param_2);
                    *(int*)pvVar2 = (int)fVar1;
                    pfVar3 = (float*)local_68.y();
                    fVar1 = *pfVar3;
                    piVar4 = (int*)this_01->y();
                    *piVar4 = (int)fVar1;
                    pvVar2 = local_58.SSOBeginPtr(param_2);
                    fVar1 = *(float*)pvVar2;
                    pvVar2 = (&this_01->field_8, (type*)param_2)->SSOBeginPtr();
                    *(int*)pvVar2 = (int)fVar1;
                    pfVar3 = (float*)local_58.y();
                    fVar1 = *pfVar3;
                    piVar4 = (int*)(&this_01->field_8)->y();
                    *piVar4 = (int)fVar1;
                    this_01->m_radius = (int)local_34;
                    this_01->field_20 = 1;
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100c69440, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float>::operator/=(float)
    /* Vector4T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Vector4T<float>* Vector4T<float>::operator/=(float param_1) {
        float fVar1;

        fVar1 = 1.0 / param_1;
        *(float*)this = *(float*)this * fVar1;
        *(float*)(this + 4) = *(float*)(this + 4) * fVar1;
        *(float*)(this + 8) = *(float*)(this + 8) * fVar1;
        *(float*)(this + 12) = fVar1 * *(float*)(this + 12);
        return this;
    }

} // namespace jag::math
