// libs/math/primitives/AABB.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "AABB.h"

namespace jag::math {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AABB::GetMinimum();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AABB::GetMinimum() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    float AABB::GetMaximum();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    float AABB::GetMaximum() const;

    // 0x1001cd630: the linker folded this into AABB::AABB(Vector3T<float>&&, Vector3T<float>&&), which has identical code
    AABB::AABB(Vector3T<float> const&, Vector3T<float> const&);

    // 0x1001df1a0: the linker folded this into AABB::AABB(Vector3T<float>&&, Vector3T<float>&&), which has identical code
    AABB::AABB(Vector3T<float> const&, Vector3T<float> const&);

    // 0x10036a690: the linker folded this into AABB::operator=(AABB const&), which has identical code
    AABB::operator=(AABB&&);

    // 0x100c636e0, 144 bytes, placed by class name and debug map
    // AABB::Reset()
    void AABB::Reset() {
        float* this_00;
        undefined4* puVar1;

        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        *puVar1 = 2139095039;
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        *puVar1 = 2139095039;
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        *puVar1 = 2139095039;
        this_00 = &m_maximum;
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        *puVar1 = 4286578687;
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        *puVar1 = 4286578687;
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        *puVar1 = 4286578687;
        DirtyDerivedState(this);
    }

    // 0x100c63930, 224 bytes, placed by class name and debug map
    // AABB::AddPoint(Vector3T<float> const&)
    void AABB::AddPoint(Vector3T* param_1) {
        float fVar1;
        undefined4 uVar2;
        float* pfVar3;
        undefined4* puVar4;
        uint uVar5;

        uVar5 = 0;
        do {
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar5);
            fVar1 = *pfVar3;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, uVar5);
            if (fVar1 < *pfVar3) {
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar5);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, uVar5);
                *puVar4 = uVar2;
            }
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar5);
            fVar1 = *pfVar3;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&m_maximum, uVar5);
            if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar5);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)&m_maximum, uVar5);
                *puVar4 = uVar2;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 != 3);
        DirtyDerivedState(this);
    }

    // 0x100c66830, 48 bytes, base-object constructor, placed by class name
    // AABB::AABB(OBB const&)
    void AABB::AABB(OBB* param_1) {
        new (this) Vector3T<int>();
        new (&m_maximum) Vector3T<int>();
        Set(this, param_1);
    }

    // 0x100c66860, 448 bytes, placed by class name
    // AABB::Set(OBB const&)
    void AABB::Set(OBB* param_1) {
        undefined8* puVar1;
        Layout* this_00;
        vector* pvVar2;
        vector* pvVar3;
        QuaternionT<float>* this_01;
        Vector3T* pVVar4;
        float* pfVar5;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_02;
        OBB* pOVar6;
        undefined8 local_b8;
        undefined4 local_b0;
        undefined8 local_a8[2];
        undefined8 local_98[2];
        undefined8 local_88[2];
        undefined8 local_78[2];
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];
        undefined8 local_38[2];

        pOVar6 = param_1;
        puVar1 = (undefined8*)param_1->GetScreen();
        local_b8 = *puVar1;
        local_b0 = *(undefined4*)(puVar1 + 1);
        this_00 = (Layout*)param_1->GetDefaultValue();
        pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pOVar6);
        pvVar3 = local_b8.SSOBeginPtr(pOVar6);
        local_88[0] = math::operator*((Vector3T*)pvVar2, *(float*)pvVar3);
        local_98[0] = Vector3Abs<float>((Vector3T*)local_88);
        this_01 = (QuaternionT<float>*)param_1->GetDefaultValue();
        pVVar4 = (Vector3T*)QuaternionT<float>::qw(this_01);
        pfVar5 = (float*)local_b8.y();
        local_68[0] = math::operator*(pVVar4, *pfVar5);
        local_78[0] = Vector3Abs<float>((Vector3T*)local_68);
        local_a8[0] = math::operator+((Vector3T*)local_98, (Vector3T*)local_78);
        this_02 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                param_1->GetDefaultValue();
        pVVar4 = (Vector3T*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_02);
        pfVar5 = (float*)local_b8.second();
        local_48[0] = math::operator*(pVVar4, *pfVar5);
        local_58[0] = Vector3Abs<float>((Vector3T*)local_48);
        local_38[0] = math::operator+((Vector3T*)local_a8, (Vector3T*)local_58);
        pVVar4 = (Vector3T*)local_38;
        local_b8.SetXYZ(pVVar4);
        pvVar2 = param_1->SSOBeginPtr(pVVar4);
        local_38[0] = math::operator-((Vector3T*)pvVar2, (Vector3T*)&local_b8);
        pVVar4 = (Vector3T*)local_38;
        SetXYZ(pVVar4);
        pvVar2 = param_1->SSOBeginPtr(pVVar4);
        local_38[0] = math::operator+((Vector3T*)pvVar2, (Vector3T*)&local_b8);
        (&m_maximum, (Vector3T*)local_38)->SetXYZ();
        DirtyDerivedState(this);
    }

    // 0x100c66a20, 16 bytes, complete-object constructor, placed by class name
    // AABB::AABB(OBB const&): jumps straight to the base-object constructor

    // 0x100c66a30, 256 bytes, base-object constructor, placed by class name
    // AABB::AABB(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AABB::AABB(PacketT* param_1) {
        float* this_00;
        undefined4* puVar1;
        undefined4 uVar2;

        new (this) Vector3T<int>();
        this_00 = &m_maximum;
        new (this_00) Vector3T<int>();
        field_28 = -1.0;
        uVar2 = param_1->gFloat();
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        *puVar1 = uVar2;
        uVar2 = param_1->gFloat();
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        *puVar1 = uVar2;
        uVar2 = param_1->gFloat();
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        *puVar1 = uVar2;
        uVar2 = param_1->gFloat();
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        *puVar1 = uVar2;
        uVar2 = param_1->gFloat();
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        *puVar1 = uVar2;
        uVar2 = param_1->gFloat();
        puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        *puVar1 = uVar2;
    }

    // 0x100c66b30, 16 bytes, complete-object constructor, placed by class name
    // AABB::AABB(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100c66b40, 176 bytes, placed by class name
    // AABB::Serialise(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void AABB::Serialise(PacketT* param_1) {
        float* pfVar1;
        float* this_00;

        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        param_1->pFloat(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        param_1->pFloat(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        param_1->pFloat(*pfVar1);
        this_00 = &m_maximum;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        param_1->pFloat(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        param_1->pFloat(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        param_1->pFloat(*pfVar1);
    }

    // 0x100c66c50, 80 bytes, placed by class name
    // AABB::Set(AABB const&)
    void AABB::Set(AABB* param_1) {
        vector* pvVar1;
        Vector3T* pVVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        Set(pvVar1);
        pVVar2 = (Vector3T*)param_1->GetScreen();
        (&m_maximum, pVVar2)->Set();
        DirtyDerivedState(this);
    }

    // 0x100c66d20, 48 bytes, placed by class name
    // AABB::Set(Vector3T<float> const&, Vector3T<float> const&)
    void AABB::Set(Vector3T* param_1, Vector3T* param_2) {
        SetXYZ(param_1);
        (&m_maximum, param_2)->SetXYZ();
        DirtyDerivedState(this);
    }

    // 0x100c66d50, 96 bytes, placed by class name
    // AABB::Translate(Vector3T<float> const&)
    void AABB::Translate(Vector3T* param_1) {
        if (IsValid(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      120, (char*)0);
        }
        Vector3T<float>::operator+=((Vector3T<float>*)this, param_1);
        Vector3T<float>::operator+=((Vector3T<float>*)&m_maximum, param_1);
        DirtyDerivedState(this);
    }

    // 0x100c66e10, 48 bytes, placed by class name
    // AABB::Scale(Vector3T<float> const&)
    void AABB::Scale(Vector3T* param_1) {
        Vector3T<float>::operator*=((Vector3T<float>*)this, param_1);
        Vector3T<float>::operator*=((Vector3T<float>*)&m_maximum, param_1);
        DirtyDerivedState(this);
    }

    // 0x100c66e80, 544 bytes, placed by class name
    // AABB::Transform(Matrix44T<float> const&)
    void AABB::Transform(Matrix44T* param_1) {
        float fVar1;
        Vector3T<float>* this_01;
        Vector4T<float>* pVVar2;
        undefined4* puVar3;
        float* pfVar4;
        float* pfVar5;
        uint uVar6;
        uint uVar7;
        float fVar8;
        undefined8 local_70;
        float local_68;
        undefined8 local_60;
        float local_58;
        Vector3T<float>* local_48;
        float local_38;
        float local_34;

        local_68 = field_8;
        local_70._0_4_ = field_0;
        local_70._4_4_ = field_4;
        pfVar5 = &m_maximum;
        local_58 = field_24;
        local_60._0_4_ = m_maximum;
        local_60._4_4_ = field_20;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        uVar6 = 0;
        puVar3 = (undefined4*)Vector4T<float>::operator[](pVVar2, 0);
        local_34 = (float)*puVar3;
        puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar5, 0);
        *puVar3 = local_34;
        puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        *puVar3 = local_34;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        puVar3 = (undefined4*)Vector4T<float>::operator[](pVVar2, 1);
        local_34 = (float)*puVar3;
        puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar5, 1);
        *puVar3 = local_34;
        puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        *puVar3 = local_34;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        pfVar4 = (float*)Vector4T<float>::operator[](pVVar2, 2);
        local_34 = *pfVar4;
        local_48 = (Vector3T<float>*)pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar5, 2);
        *pfVar5 = local_34;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        this_01 = local_48;
        *pfVar5 = local_34;
        do {
            uVar7 = 0;
            do {
                pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar7);
                pfVar5 = (float*)Vector4T<float>::operator[](pVVar2, uVar6);
                local_34 = *pfVar5;
                pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, uVar7);
                local_38 = *pfVar5 * local_34;
                pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_60, uVar7);
                local_34 = local_34 * *pfVar5;
                pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)(AABB*)this, uVar6);
                fVar8 = local_34;
                fVar1 = local_38;
                if (local_34 <= local_38) {
                    fVar8 = local_38;
                    fVar1 = local_34;
                }
                *pfVar5 = fVar1 + *pfVar5;
                local_34 = fVar8;
                pfVar5 = (float*)Vector3T<float>::operator[](this_01, uVar6);
                *pfVar5 = local_34 + *pfVar5;
                uVar7 = uVar7 + 1;
            } while (uVar7 != 3);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 3);
        DirtyDerivedState((AABB*)this);
    }

    // 0x100c67130, 160 bytes, placed by class name
    // AABB::GetOBB(OBB&) const
    void AABB::GetOBB(OBB* param_1) {
        Matrix33T<float> local_78[40];
        undefined8 local_50[2];
        undefined8 local_40;
        undefined4 local_38;
        undefined8 local_30;
        undefined4 local_28;

        local_50[0] = GetCentrePos(this);
        Matrix33T<float>::Matrix33T(local_78, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
        local_30 = GetDimensions(this);
        local_28 = 0;
        local_40 = math::operator*((Vector3T*)&local_30, 0.5);
        local_38 = 0;
        param_1->Set(local_50, local_78, (Vector3T*)&local_40);
    }

    // 0x100c67270, 64 bytes, placed by class name
    // AABB::GetMinimumEnclosingSphere(Sphere&) const
    void AABB::GetMinimumEnclosingSphere(Sphere* param_1) {
        float fVar1;
        undefined8 local_28[2];

        local_28[0] = GetCentrePos(this);
        fVar1 = (float)GetMaximumRadius(this);
        param_1->Set(local_28, fVar1);
    }

    // 0x100c672b0, 96 bytes, placed by class name
    // AABB::GetMaximumRadius() const
    float AABB::GetMaximumRadius() {
        undefined8 local_20[2];

        if (field_28 == -1.0) {
            local_20[0] = math::operator-((Vector3T*)&m_maximum, (Vector3T*)this);
            field_28 = (float)local_20->Length() * 0.5;
        }
        return field_28;
    }

    // 0x100c67310, 64 bytes, placed by class name
    // AABB::GetMaximumContainedSphere(Sphere&) const
    void AABB::GetMaximumContainedSphere(Sphere* param_1) {
        float fVar1;
        undefined8 local_28[2];

        local_28[0] = GetCentrePos(this);
        fVar1 = (float)GetMinimumRadius(this);
        param_1->Set(local_28, fVar1);
    }

    // 0x100c673a0, 128 bytes, placed by class name
    // AABB::GetTransform() const
    AABB* AABB::GetTransform() {
        AABB* in_RSI;
        float fVar1;
        float fVar2;
        undefined1 local_60[40];
        undefined8 local_38;
        float local_30;
        float local_28;
        float local_24;

        local_28 = (float)GetWidth(in_RSI);
        local_24 = (float)GetHeight(in_RSI);
        fVar1 = (float)GetLength(in_RSI);
        fVar2 = local_24;
        Matrix33Scaling<float>((math*)local_60, local_28, local_24, fVar1);
        local_38 = GetCentrePos(in_RSI);
        local_30 = fVar2;
        new (this) Matrix44T<float>(local_60, (Vector3T*)&local_38);
        return this;
    }

    // 0x100c67450, 240 bytes, placed by class name
    // AABB::AddAABB(AABB const&)
    void AABB::AddAABB(AABB* param_1) {
        float fVar1;
        undefined4 uVar2;
        float* pfVar3;
        undefined4* puVar4;
        uint uVar5;

        uVar5 = 0;
        do {
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar5);
            fVar1 = *pfVar3;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, uVar5);
            if (fVar1 < *pfVar3) {
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar5);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)this, uVar5);
                *puVar4 = uVar2;
            }
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&param_1->m_maximum, uVar5);
            fVar1 = *pfVar3;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&m_maximum, uVar5);
            if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)&param_1->m_maximum, uVar5);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)&m_maximum, uVar5);
                *puVar4 = uVar2;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 != 3);
        DirtyDerivedState(this);
    }

    // 0x100c67540, 112 bytes, placed by class name
    // AABB::Union(AABB const&)
    void AABB::Union(AABB* param_1) {
        vector* pvVar2;
        Vector3T* pVVar3;

        if (IsValid(param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("other.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      248, (char*)0);
        }
        pvVar2 = param_1->SSOBeginPtr(param_1);
        AddPoint(this, (Vector3T*)pvVar2);
        pVVar3 = (Vector3T*)param_1->GetScreen();
        AddPoint(this, pVVar3);
    }

    // 0x100c675b0, 112 bytes, placed by class name
    // AABB::Union(AABB const&, AABB const&)
    AABB* AABB::Union(AABB* param_1, AABB* param_2) {
        char cVar1;

        cVar1 = IsValid(param_1);
        if (cVar1 != '\0') {
            cVar1 = IsValid(param_2);
            if (cVar1 != '\0') {
                AABB(this, param_1);
                Union(this, param_2);
                return this;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("a.IsValid() && b.IsValid()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp", 255,
                  (char*)0);
    }

    // 0x100c67630, 208 bytes, placed by class name
    // AABB::Intersection(AABB const&)
    void AABB::Intersection(AABB* param_1) {
        char cVar1;
        vector* pvVar2;
        Vector3T* pVVar3;
        undefined8 local_30[2];

        cVar1 = IsValid(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      263, (char*)0);
        }
        cVar1 = IsValid(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("other.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      264, (char*)0);
        }
        pvVar2 = param_1->SSOBeginPtr(param_1);
        local_30[0] = Vector3Max<float>((Vector3T*)this, (Vector3T*)pvVar2);
        SetXYZ(local_30);
        pVVar3 = (Vector3T*)param_1->GetScreen();
        local_30[0] = Vector3Min<float>((Vector3T*)&m_maximum, pVVar3);
        (&m_maximum, (Vector3T*)local_30)->SetXYZ();
        DirtyDerivedState(this);
    }

    // 0x100c67800, 96 bytes, placed by class name
    // AABB::SloppyCompare(AABB const&, float) const
    undefined8 AABB::SloppyCompare(AABB* param_1, float param_2) {
        vector* pvVar2;
        Vector3T* pVVar3;
        undefined8 uVar4;

        pvVar2 = param_1->SSOBeginPtr(param_1);
        if (SloppyCompare(pvVar2, param_2) == '\0') {
            uVar4 = 0;
        } else {
            pVVar3 = (Vector3T*)param_1->GetScreen();
            uVar4 = (&m_maximum, pVVar3, param_2)->SloppyCompare();
        }
        return uVar4;
    }

    // 0x100c678d0, 384 bytes, placed by class name
    // AABB::GetCornerPos(BoxCorner) const
    undefined8 AABB::GetCornerPos(type* param_2) {
        vector* pvVar1;
        float* pfVar2;
        AABB* pAVar3;
        undefined8 uVar5;
        undefined8 uVar4;
        ColourHSL local_30;
        float local_20;
        float local_1c;

        if (7 < (int)param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("boxCorner < BOX_CORNER_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/AABB.cpp",
                      289, (char*)0);
        }
        pAVar3 = this;
        switch ((ulong)param_2 & 4294967295) {
        case 0:
            pvVar1 = SSOBeginPtr(param_2);
            local_20 = *(float*)pvVar1;
            this = (AABB*)&m_maximum;
            break;
        case 1:
            this = (AABB*)&m_maximum;
            pvVar1 = SSOBeginPtr(param_2);
            local_20 = *(float*)pvVar1;
            break;
        case 3:
            pAVar3 = (AABB*)&m_maximum;
        LAB_100c6797a:
            pvVar1 = pAVar3->SSOBeginPtr(param_2);
            local_20 = *(float*)pvVar1;
        LAB_100c67988:
            pAVar3 = this;
            break;
        case 4:
            pvVar1 = SSOBeginPtr(param_2);
            local_20 = *(float*)pvVar1;
            this = (AABB*)&m_maximum;
            goto LAB_100c67988;
        case 5:
            pAVar3 = (AABB*)&m_maximum;
        case 2:
            this = pAVar3;
            goto LAB_100c6797a;
        case 6:
            pvVar1 = SSOBeginPtr(param_2);
            local_20 = *(float*)pvVar1;
            pfVar2 = (float*)y();
            local_1c = *pfVar2;
            pAVar3 = (AABB*)&m_maximum;
            goto LAB_100c6799c;
        case 7:
            pAVar3 = (AABB*)&m_maximum;
            pvVar1 = pAVar3->SSOBeginPtr(param_2);
            local_20 = *(float*)pvVar1;
            pfVar2 = (float*)y();
            local_1c = *pfVar2;
            goto LAB_100c6799c;
        default:
            new (&local_30) Vector3T<int>();
            uVar5._0_4_ = local_30.field_0;
            uVar5._4_4_ = local_30.field_4;
            return uVar5;
        }
        pfVar2 = (float*)y();
        local_1c = *pfVar2;
    LAB_100c6799c:
        pfVar2 = (float*)pAVar3->second();
        new (&local_30) ColourHSL(local_20, local_1c, *pfVar2);
        uVar4._0_4_ = local_30.field_0;
        uVar4._4_4_ = local_30.field_4;
        return uVar4;
    }

    // 0x100c67a50, 320 bytes, placed by class name
    // AABB::IsInside(Vector3T<float> const&) const
    bool AABB::IsInside(Vector3T* param_1) {
        float fVar1;
        float* pfVar2;
        float* pfVar3;

        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar1 = *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        if (*pfVar2 <= fVar1) {
            pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
            fVar1 = *pfVar2;
            pfVar2 = &m_maximum;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 0);
            if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
                fVar1 = *pfVar3;
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
                if (*pfVar3 <= fVar1) {
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 1);
                    if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
                        if (*pfVar3 <= fVar1) {
                            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
                            fVar1 = *pfVar3;
                            pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 2);
                            return fVar1 < *pfVar2 || fVar1 == *pfVar2;
                        }
                    }
                }
            }
        }
        return false;
    }

    // 0x100c67b90, 352 bytes, placed by class name
    // AABB::IsInside(AABB const&) const
    undefined8 AABB::IsInside(AABB* param_1) {
        float fVar1;
        vector* this_00;
        Vector3T<float>* this_01;
        float* pfVar2;
        float* pfVar3;

        this_00 = param_1->SSOBeginPtr(param_1);
        this_01 = (Vector3T<float>*)param_1->GetScreen();
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar1 = *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        if (*pfVar2 <= fVar1) {
            pfVar2 = &m_maximum;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 0);
            fVar1 = *pfVar3;
            pfVar3 = (float*)Vector3T<float>::operator[](this_01, 0);
            if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
                fVar1 = *pfVar3;
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
                if (*pfVar3 <= fVar1) {
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 1);
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)Vector3T<float>::operator[](this_01, 1);
                    if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
                        if (*pfVar3 <= fVar1) {
                            pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 2);
                            fVar1 = *pfVar2;
                            pfVar2 = (float*)Vector3T<float>::operator[](this_01, 2);
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

    // 0x100c67cf0, 576 bytes, placed by class name
    // AABB::TestIntersection(Sphere const&) const
    bool AABB::TestIntersection(Sphere* param_1) {
        float fVar1;
        float fVar2;
        vector* this_00;
        vector* pvVar3;
        Layout* pLVar4;
        float* pfVar5;
        Vector2T<int>* pVVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar7;
        Sphere* pSVar8;
        float extraout_XMM0_Da;
        float fVar9;
        float local_28;
        float local_24;

        pSVar8 = param_1;
        this_00 = param_1->SSOBeginPtr(param_1);
        pvVar3 = this_00->SSOBeginPtr(pSVar8);
        fVar9 = *(float*)pvVar3;
        pvVar3 = SSOBeginPtr(pSVar8);
        pvVar3 = pvVar3->SSOBeginPtr(pSVar8);
        fVar1 = *(float*)pvVar3;
        pvVar3 = this_00->SSOBeginPtr(pSVar8);
        fVar2 = *(float*)pvVar3;
        if (fVar1 <= fVar9) {
            pLVar4 = (Layout*)GetScreen();
            pvVar3 = eastl::string::Layout::SSOBeginPtr(pLVar4, (type*)pSVar8);
            local_24 = 0.0;
            if (*(float*)pvVar3 <= fVar2 && fVar2 != *(float*)pvVar3) {
                pvVar3 = this_00->SSOBeginPtr(pSVar8);
                local_24 = *(float*)pvVar3;
                pLVar4 = (Layout*)GetScreen();
                goto LAB_100c67d91;
            }
        } else {
            pLVar4 = (Layout*)SSOBeginPtr(pSVar8);
            local_24 = fVar2;
        LAB_100c67d91:
            pvVar3 = eastl::string::Layout::SSOBeginPtr(pLVar4, (type*)pSVar8);
            local_24 = (local_24 - *(float*)pvVar3) * (local_24 - *(float*)pvVar3);
        }
        pfVar5 = (float*)this_00->y();
        fVar9 = *pfVar5;
        pvVar3 = SSOBeginPtr(pSVar8);
        pfVar5 = (float*)pvVar3->y();
        fVar1 = *pfVar5;
        pfVar5 = (float*)this_00->y();
        fVar2 = *pfVar5;
        if (fVar1 <= fVar9) {
            pVVar6 = (Vector2T<int>*)GetScreen();
            pfVar5 = (float*)pVVar6->y();
            if (*pfVar5 <= fVar2 && fVar2 != *pfVar5) {
                pfVar5 = (float*)this_00->y();
                fVar9 = *pfVar5;
                pVVar6 = (Vector2T<int>*)GetScreen();
                pfVar5 = (float*)pVVar6->y();
                fVar9 = (fVar9 - *pfVar5) * (fVar9 - *pfVar5);
                goto LAB_100c67e58;
            }
        } else {
            pvVar3 = SSOBeginPtr(pSVar8);
            pfVar5 = (float*)pvVar3->y();
            fVar9 = (fVar2 - *pfVar5) * (fVar2 - *pfVar5);
        LAB_100c67e58:
            local_24 = local_24 + fVar9;
        }
        pfVar5 = (float*)this_00->second();
        fVar9 = *pfVar5;
        pvVar3 = SSOBeginPtr(pSVar8);
        pfVar5 = (float*)pvVar3->second();
        fVar1 = *pfVar5;
        pfVar5 = (float*)this_00->second();
        local_28 = *pfVar5;
        if (fVar1 <= fVar9) {
            pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)GetScreen();
            pfVar5 = (float*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar7);
            if (local_28 < *pfVar5 || local_28 == *pfVar5)
                goto LAB_100c67f0c;
            pfVar5 = (float*)this_00->second();
            local_28 = *pfVar5;
            pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)GetScreen();
        } else {
            pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)SSOBeginPtr(pSVar8);
        }
        pfVar5 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar7);
        local_24 = local_24 + (local_28 - *pfVar5) * (local_28 - *pfVar5);
    LAB_100c67f0c:
        param_1->GetRadiusSq();
        return local_24 <= extraout_XMM0_Da;
    }

    // 0x100c67f40, 1328 bytes, placed by class name
    // AABB::TestIntersection(Vector3T<float> const&, Vector3T<float> const&) const
    ulong AABB::TestIntersection(Vector3T* param_1, Vector3T* param_2) {
        float* pfVar1;
        ulong uVar2;
        float fVar3;
        float fVar4;
        undefined8 local_b8[2];
        undefined8 local_a8[2];
        undefined8 local_98[2];
        undefined8 local_88;
        float local_80;
        ColourHSL local_78;
        undefined8 local_68[2];
        undefined8 local_58;
        float local_50;
        undefined8 local_48;
        float local_3c;
        float local_38;
        float local_34;

        local_b8[0] = GetCentrePos(this);
        local_a8[0] = math::operator-((Vector3T*)local_b8, param_1);
        local_98[0] = math::operator-((Vector3T*)local_b8, param_2);
        local_48 = math::operator+((Vector3T*)local_a8, (Vector3T*)local_98);
        local_68[0] = math::operator/((Vector3T*)&local_48, 2.0);
        local_48 = math::operator-((Vector3T*)local_a8, (Vector3T*)local_68);
        uVar2 = 0;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 0);
        local_34 = (float)::abs(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 1);
        local_38 = (float)::abs(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 2);
        fVar3 = (float)::abs(*pfVar1);
        fVar4 = local_38;
        new (&local_78) ColourHSL(local_34, local_38, fVar3);
        local_88 = math::operator-((Vector3T*)&m_maximum, (Vector3T*)this);
        local_80 = fVar4;
        local_58 = math::operator/((Vector3T*)&local_88, 2.0);
        local_50 = fVar4;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 0);
        local_34 = (float)::abs(*pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 0);
        local_38 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 0);
        if (local_34 <= local_38 + *pfVar1) {
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 1);
            local_34 = (float)::abs(*pfVar1);
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 1);
            local_38 = *pfVar1;
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 1);
            if (local_34 <= local_38 + *pfVar1) {
                pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 2);
                local_34 = (float)::abs(*pfVar1);
                pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 2);
                local_38 = *pfVar1;
                pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 2);
                if (local_34 <= local_38 + *pfVar1) {
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 1);
                    local_34 = *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 2);
                    local_34 = local_34 * *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 2);
                    local_38 = *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 1);
                    local_38 = (float)::abs(local_34 - local_38 * *pfVar1);
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 1);
                    local_34 = *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 2);
                    local_34 = local_34 * *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 2);
                    local_3c = *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 1);
                    if (local_38 <= local_3c * *pfVar1 + local_34) {
                        uVar2 = 0;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 0);
                        local_34 = *pfVar1;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 2);
                        local_34 = local_34 * *pfVar1;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 2);
                        local_38 = *pfVar1;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 0);
                        local_38 = (float)::abs(local_34 - local_38 * *pfVar1);
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 0);
                        local_34 = *pfVar1;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 2);
                        local_34 = local_34 * *pfVar1;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 2);
                        local_3c = *pfVar1;
                        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 0);
                        if (local_38 <= local_3c * *pfVar1 + local_34) {
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 0);
                            local_34 = *pfVar1;
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 1);
                            local_34 = local_34 * *pfVar1;
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_68, 1);
                            local_38 = *pfVar1;
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_48, 0);
                            local_38 = (float)::abs(local_34 - local_38 * *pfVar1);
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 0);
                            local_34 = *pfVar1;
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 1);
                            local_34 = local_34 * *pfVar1;
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_58, 1);
                            local_3c = *pfVar1;
                            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 0);
                            uVar2 = CONCAT71((int7)((ulong)&local_58 >> 8), local_38 <= local_3c * *pfVar1 + local_34);
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

    // 0x100c68470, 352 bytes, placed by class name
    // AABB::TestIntersection(AABB const&) const
    undefined8 AABB::TestIntersection(AABB* param_1) {
        float fVar1;
        vector* this_00;
        Vector3T<float>* this_01;
        float* pfVar2;
        float* pfVar3;

        this_00 = param_1->SSOBeginPtr(param_1);
        this_01 = (Vector3T<float>*)param_1->GetScreen();
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar1 = *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](this_01, 0);
        if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
            pfVar2 = &m_maximum;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 0);
            fVar1 = *pfVar3;
            pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
            if (*pfVar3 <= fVar1) {
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
                fVar1 = *pfVar3;
                pfVar3 = (float*)Vector3T<float>::operator[](this_01, 1);
                if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 1);
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
                    if (*pfVar3 <= fVar1) {
                        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)Vector3T<float>::operator[](this_01, 2);
                        if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                            pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 2);
                            fVar1 = *pfVar2;
                            pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
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

    // 0x100c685d0, 336 bytes, placed by class name
    // AABB::GetClosestPoint(Vector3T<float> const&) const
    undefined8 AABB::GetClosestPoint(Vector3T* param_1) {
        float* pfVar1;
        AABB* pAVar2;
        undefined8 uVar3;
        float fVar4;
        undefined1 local_38[16];
        float local_28;
        float local_24;

        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        local_28 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        if (*pfVar1 <= local_28) {
            pAVar2 = (AABB*)&m_maximum;
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pAVar2, 0);
            if (*pfVar1 <= local_28 && local_28 != *pfVar1)
                goto LAB_100c6862a;
        } else {
            pAVar2 = this;
        LAB_100c6862a:
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pAVar2, 0);
            local_28 = *pfVar1;
        }
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        local_24 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        if (*pfVar1 <= local_24) {
            pAVar2 = (AABB*)&m_maximum;
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pAVar2, 1);
            if (*pfVar1 <= local_24 && local_24 != *pfVar1)
                goto LAB_100c6868a;
        } else {
            pAVar2 = this;
        LAB_100c6868a:
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pAVar2, 1);
            local_24 = *pfVar1;
        }
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        local_38._12_4_ = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        if (*pfVar1 <= (float)local_38._12_4_) {
            this = (AABB*)&m_maximum;
            pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
            fVar4 = (float)local_38._12_4_;
            if ((float)local_38._12_4_ < *pfVar1 || (float)local_38._12_4_ == *pfVar1)
                goto LAB_100c686f6;
        }
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        fVar4 = *pfVar1;
    LAB_100c686f6:
        new (local_38) ColourHSL(local_28, local_24, fVar4);
        uVar3._0_4_ = (float)local_38._0_4_;
        uVar3._4_4_ = (float)local_38._4_4_;
        return uVar3;
    }

    // 0x100c68720, 464 bytes, placed by class name
    // AABB::GetFurthestPoint(Vector3T<float> const&) const
    undefined8 AABB::GetFurthestPoint(Vector3T* param_1) {
        float* pfVar1;
        AABB* pAVar2;
        AABB* this_00;
        float fVar3;
        undefined8 uVar4;
        ColourHSL local_40;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        local_2c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        local_2c = (float)::abs(local_2c - *pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        local_24 = *pfVar1;
        this_00 = (AABB*)&m_maximum;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        fVar3 = (float)::abs(local_24 - *pfVar1);
        if (local_2c <= fVar3) {
            pAVar2 = this_00;
        } else {
            pAVar2 = this;
        }
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pAVar2, 0);
        local_2c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        local_24 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        local_24 = (float)::abs(local_24 - *pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        local_28 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        fVar3 = (float)::abs(local_28 - *pfVar1);
        if (local_24 <= fVar3) {
            pAVar2 = this_00;
        } else {
            pAVar2 = this;
        }
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pAVar2, 1);
        local_24 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        local_28 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        local_28 = (float)::abs(local_28 - *pfVar1);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        local_30 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        fVar3 = (float)::abs(local_30 - *pfVar1);
        if (fVar3 < local_28) {
            this_00 = this;
        }
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        new (&local_40) ColourHSL(local_2c, local_24, *pfVar1);
        uVar4._0_4_ = local_40.field_0;
        uVar4._4_4_ = local_40.field_4;
        return uVar4;
    }

    // 0x100c688f0, 96 bytes, placed by class name
    // AABB::GetDistanceToPoint(Vector3T<float> const&) const
    undefined8 AABB::GetDistanceToPoint(Vector3T* param_1) {
        char cVar1;
        undefined8 uVar2;
        undefined8 local_38[2];
        undefined8 local_28[2];

        cVar1 = IsInside(this, param_1);
        uVar2 = 0;
        if (cVar1 == '\0') {
            local_38[0] = GetClosestPoint(this, param_1);
            local_28[0] = math::operator-(param_1, (Vector3T*)local_38);
            uVar2 = local_28->Length();
        }
        return uVar2;
    }

    // 0x100c68950, 96 bytes, placed by class name
    // AABB::GetDistanceToPointSquared(Vector3T<float> const&) const
    undefined8 AABB::GetDistanceToPointSquared(Vector3T* param_1) {
        char cVar1;
        undefined8 uVar2;
        undefined8 local_38[2];
        undefined8 local_28[2];

        cVar1 = IsInside(this, param_1);
        uVar2 = 0;
        if (cVar1 == '\0') {
            local_38[0] = GetClosestPoint(this, param_1);
            local_28[0] = math::operator-(param_1, (Vector3T*)local_38);
            uVar2 = local_28->LengthSq();
        }
        return uVar2;
    }

    // 0x100c689b0, 112 bytes, placed by class name
    // AABB::GetDistanceToPointXZ(Vector3T<float> const&) const
    undefined8 AABB::GetDistanceToPointXZ(Vector3T* param_1) {
        undefined4* puVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_38[2];
        undefined8 local_28[2];

        cVar2 = IsInside(this, param_1);
        uVar3 = 0;
        if (cVar2 == '\0') {
            local_38[0] = GetClosestPoint(this, param_1);
            local_28[0] = math::operator-(param_1, (Vector3T*)local_38);
            puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)local_28, 1);
            *puVar1 = 0;
            uVar3 = local_28->Length();
        }
        return uVar3;
    }

    // 0x100c68a20, 112 bytes, placed by class name
    // AABB::GetDistanceToPointXZSquared(Vector3T<float> const&) const
    undefined8 AABB::GetDistanceToPointXZSquared(Vector3T* param_1) {
        undefined4* puVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_38[2];
        undefined8 local_28[2];

        cVar2 = IsInside(this, param_1);
        uVar3 = 0;
        if (cVar2 == '\0') {
            local_38[0] = GetClosestPoint(this, param_1);
            local_28[0] = math::operator-(param_1, (Vector3T*)local_38);
            puVar1 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)local_28, 1);
            *puVar1 = 0;
            uVar3 = local_28->LengthSq();
        }
        return uVar3;
    }

    // 0x100c68a90, 512 bytes, placed by class name
    // AABB::GetDistanceAABBXZSquared(AABB const&) const
    uint AABB::GetDistanceAABBXZSquared(AABB* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;
        float* pfVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        pfVar4 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar6 = *pfVar4;
        pfVar4 = &param_1->m_maximum;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 0);
        fVar7 = *pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&m_maximum, 0);
        fVar8 = *pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 0);
        fVar1 = *pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar2 = *pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar3 = *pfVar5;
        fVar6 = (float)::abs(fVar6 - fVar7);
        fVar7 = (float)::abs(fVar8 - fVar1);
        fVar8 = (float)::abs(fVar2 - fVar3);
        fVar7 = (float)eastl::min<float>(fVar7, fVar8);
        fVar6 = (float)eastl::min<float>(fVar6, fVar7);
        fVar9 = (float)((uint)(fVar6 * fVar6) & -(uint)(0.0 < fVar6));
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        fVar6 = *pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 2);
        fVar7 = *pfVar5;
        pfVar5 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&m_maximum, 2);
        fVar8 = *pfVar5;
        pfVar4 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 2);
        fVar1 = *pfVar4;
        pfVar4 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        fVar2 = *pfVar4;
        pfVar4 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar3 = *pfVar4;
        fVar6 = (float)::abs(fVar6 - fVar7);
        fVar7 = (float)::abs(fVar8 - fVar1);
        fVar8 = (float)::abs(fVar2 - fVar3);
        fVar7 = (float)eastl::min<float>(fVar7, fVar8);
        fVar6 = (float)eastl::min<float>(fVar6, fVar7);
        return (uint)(fVar6 * fVar6 + fVar9) & -(uint)(0.0 < fVar6) | ~-(uint)(0.0 < fVar6) & (uint)fVar9;
    }

} // namespace jag::math

namespace jag::oldscape::dash3d {
    // 0x100189b80: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    ModelLit::AABB::AABB();

    // 0x10019b570: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    ModelLit::AABB::AABB();

} // namespace jag::oldscape::dash3d
