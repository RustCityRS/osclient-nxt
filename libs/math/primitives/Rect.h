// libs/math/primitives/Rect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 3 instantiations, e.g. <float>, <int>, <unsigned int>
    class Rect {
    public:
        SetX(int);
        SetY(int);
        void Clip(Rect<int> const&, Rect<int>&) const;
        void Shrink(int, int);
        MinY() const;
        void Translate(int, int);
        void Translate(Vector2T<float> const&);
        MaxX() const;
        bool IsInside(int, int) const;
        Rect<int>* Intersection(Rect<int>) const;
        bool Intersects(Rect<int> const&) const;
        void Scale(float);
        MaxY() const;
        Rect(Rect<int> const&);
        void SetRight(float);
        ulong Excludes(Rect<int> const&) const;
        Rect<float> ToType<float>() const;
        void Union(Rect<int> const&);
        void SetMinMax(int, int, int, int);
        void Union(int, int);
        bool IsInside<float>(Vector2T<float> const&) const;
        Rect<float>* FlipHorizontally() const;
        void SetY(float);
        void SetX(float);
        float CentreX() const;
        float CentreY() const;
        bool Contains(Rect<int> const&) const;
        bool IsInside<float>(Point<float> const&) const;
        Rect<int> ToType<int>() const;
        Right() const;
        Bottom() const;
        void Grow(int);
        void Grow(float);
        void Grow(float, float);
        void Grow(int, int);
        void SetUV(float, float, float, float);
        bool IsInside<int>(Point<int> const&) const;
        Rect(Rect<float> const&);
        void SetBottom(float);
        void Translate(float, float);
        byte operator!=(Rect<unsigned int> const&) const;
        Rect<unsigned int>* operator=(Rect<int> const&);
        bool Valid() const;
        operator==(Rect<unsigned int> const&) const;
        void SetRight(int);
        void SetBottom(int);
        static oldscape::dash3d::GridRect /* 16 bytes */ ZERO; // = GridRect(0, 0, 0, 0)
        static ImVec4 /* 16 bytes */ ZERO;                     // = ImVec4(0.0, 0.0, 0.0, 0.0)
    };

    // 0x100f3e8f0, 16 bytes, __data; set at startup by ___cxx_global_var_init.151
    oldscape::dash3d::GridRect Rect<int>::ZERO = GridRect(0, 0, 0, 0);

    // 0x100f442e8, 16 bytes, __data; set at startup by ___cxx_global_var_init.227
    ImVec4 Rect<float>::ZERO = ImVec4(0.0, 0.0, 0.0, 0.0);

    // 0x10000c2f0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<int>::SetX(int)
    /* std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(oldscape::FolderSelection::FolderPathRequestStatus)
    */

    void std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(
        undefined4 param_2) {
        *(undefined4*)this = param_2;
    }

    // 0x10000c300, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<int>::SetY(int)
    /* oldscape::minimenu::MinimenuEntry::SetZ(int) */

    void oldscape::minimenu::MinimenuEntry::SetZ(int param_1) {
        m_z = param_1;
    }

    // 0x10000c310, 192 bytes, inline, placed by class name and debug map
    // Rect<int>::Clip(Rect<int> const&, Rect<int>&) const
    void Rect<int>::Clip(Rect* param_1, Rect* param_2) {
        int iVar1;
        int iVar2;
        int iVar4;
        Rect* this_00;
        int iVar5;

        iVar4 = *(int*)param_1;
        if (*(int*)param_1 < *(int*)this) {
            iVar4 = *(int*)this;
        }
        iVar5 = *(int*)(param_1 + 4);
        if (*(int*)(param_1 + 4) < *(int*)(this + 4)) {
            iVar5 = *(int*)(this + 4);
        }
        iVar1 = Right(this);
        iVar2 = Right((Rect<int>*)param_1);
        if (iVar1 < iVar2) {
            this_00 = (Rect*)this;
        } else {
            this_00 = param_1;
        }
        iVar1 = Right((Rect<int>*)this_00);
        iVar2 = MaxZ(this);
        if (MaxZ((Rect<int>*)param_1) <= iVar2) {
            this = (Rect<int>*)param_1;
        }
        iVar2 = MaxZ(this);
        iVar1 = iVar1 - iVar4;
        iVar2 = iVar2 - iVar5;
        if (iVar1 < 0) {
            iVar1 = 0;
        }
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        new (param_2) oldscape::dash3d::GridRect(iVar4, iVar5, iVar1, iVar2);
    }

    // 0x1000600c0, 32 bytes, inline, placed by class name
    // Rect<int>::Shrink(int, int)
    void Rect<int>::Shrink(int param_1, int param_2) {
        *(int*)this = *(int*)this + param_1;
        *(int*)(this + 4) = *(int*)(this + 4) + param_2;
        *(int*)(this + 8) = *(int*)(this + 8) + param_1 * -2;
        *(int*)(this + 12) = *(int*)(this + 12) + param_1 * -2;
    }

    // 0x100073980, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<int>::MinY() const
    /* oldscape::rs2lib::CoordMapSquare::GetZ() const */

    uint oldscape::rs2lib::CoordMapSquare::GetZ() {
        return m_z;
    }

    // 0x1000dc790, 16 bytes, inline, placed by class name
    // Rect<int>::Translate(int, int)
    void Rect<int>::Translate(int param_1, int param_2) {
        *(int*)this = *(int*)this + param_1;
        *(int*)(this + 4) = *(int*)(this + 4) + param_2;
    }

    // 0x100102cb0, 64 bytes, inline, placed by class name
    // Rect<int>::Translate(Vector2T<float> const&)
    void Rect<int>::Translate(Vector2T* param_1) {
        vector* pvVar1;
        float* pfVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(int*)this = *(int*)this + (int)*(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        *(int*)(this + 4) = *(int*)(this + 4) + (int)*pfVar2;
    }

    // 0x10011f320, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<int>::MaxX() const
    /* Rect<int>::Right() const */

    int Rect<int>::Right() {
        return *(int*)(this + 8) + *(int*)this;
    }

    // 0x100120680, 96 bytes, inline, placed by class name
    // Rect<int>::IsInside(int, int) const
    bool Rect<int>::IsInside(int param_1, int param_2) {
        int iVar1;

        iVar1 = GetX();
        if (((param_1 < iVar1) || (iVar1 = Right(this), iVar1 < param_1)) || (iVar1 = GetZ(), param_2 < iVar1)) {
            return false;
        }
        iVar1 = MaxZ(this);
        return param_2 <= iVar1;
    }

    // 0x10012cfd0, 80 bytes, inline, placed by class name
    // Rect<int>::Scale(float)
    void Rect<int>::Scale(float param_1) {
        *(int*)this = (int)((float)*(int*)this * param_1);
        *(int*)(this + 4) = (int)((float)*(int*)(this + 4) * param_1);
        *(int*)(this + 8) = (int)((float)*(int*)(this + 8) * param_1);
        *(int*)(this + 12) = (int)((float)*(int*)(this + 12) * param_1);
    }

    // 0x1001cb990, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<int>::MaxY() const
    /* Rect<int>::MaxZ() const */

    int Rect<int>::MaxZ() {
        return *(int*)(this + 12) + *(int*)(this + 4);
    }

    // 0x10038ff60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4788;
        if (*PTR_ZERO_100ee4788 == '\0') {
            new (PTR_ZERO_100ee6690) oldscape::dash3d::GridRect(0, 0, 0, 0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1cc0, 16 bytes, complete-object constructor, inline, placed by class name
    // Rect<int>::Rect(Rect<int> const&): jumps straight to the base-object constructor

    // 0x1003a80d0, 32 bytes, base-object constructor, inline, placed by class name
    // Rect<int>::Rect(Rect<int> const&)
    /* Rect<unsigned int>::Rect(Rect<unsigned int> const&) */

    void Rect<unsigned int>::Rect(Rect* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined4*)(this + 12) = *(undefined4*)(param_1 + 12);
    }

    // 0x1003bcf80, 16 bytes, inline, placed by class name
    // Rect<float>::SetRight(float)
    void Rect<float>::SetRight(float param_1) {
        *(float*)(this + 8) = param_1 - *(float*)this;
    }

    // 0x1003cf1c0, 128 bytes, inline, placed by class name
    // Rect<int>::Excludes(Rect<int> const&) const
    ulong Rect<int>::Excludes(Rect* param_1) {
        int iVar1;
        int iVar2;
        undefined8 unaff_R15;
        undefined7 uVar4;
        ulong uVar3;

        iVar1 = param_1->GetX();
        iVar2 = Right(this);
        uVar4 = (undefined7)((ulong)unaff_R15 >> 8);
        uVar3 = CONCAT71(uVar4, 1);
        if (iVar1 < iVar2) {
            iVar1 = param_1->GetZ();
            iVar2 = MaxZ(this);
            if (iVar1 < iVar2) {
                iVar1 = Right((Rect<int>*)param_1);
                iVar2 = GetX();
                if (iVar2 < iVar1) {
                    iVar1 = MaxZ((Rect<int>*)param_1);
                    iVar2 = GetZ();
                    uVar3 = CONCAT71(uVar4, iVar1 <= iVar2);
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x10047cd70, 48 bytes, inline, placed by class name
    // Rect<float> Rect<int>::ToType<float>() const
    Rect<int>* Rect<int>::ToType<float>() {
        int* in_RSI;

        new (this) ImVec4((float)*in_RSI, (float)in_RSI[1], (float)in_RSI[2], (float)in_RSI[3]);
        return this;
    }

    // 0x10047e840, 160 bytes, inline, placed by class name
    // Rect<int>::Union(Rect<int> const&)
    void Rect<int>::Union(Rect* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = *(int*)param_1;
        iVar2 = *(int*)this - iVar1;
        if (iVar2 != 0 && iVar1 <= *(int*)this) {
            *(int*)(this + 8) = *(int*)(this + 8) + iVar2;
            *(int*)this = iVar1;
        }
        iVar1 = *(int*)(param_1 + 4);
        iVar2 = *(int*)(this + 4) - iVar1;
        if (iVar2 != 0 && iVar1 <= *(int*)(this + 4)) {
            *(int*)(this + 12) = *(int*)(this + 12) + iVar2;
            *(int*)(this + 4) = iVar1;
        }
        iVar1 = Right((Rect<int>*)param_1);
        iVar2 = Right(this);
        if (iVar2 < iVar1) {
            iVar1 = Right((Rect<int>*)param_1);
            iVar2 = Right(this);
            *(int*)(this + 8) = *(int*)(this + 8) + (iVar1 - iVar2);
        }
        iVar1 = MaxZ((Rect<int>*)param_1);
        iVar2 = MaxZ(this);
        if (iVar2 < iVar1) {
            iVar1 = MaxZ((Rect<int>*)param_1);
            iVar2 = MaxZ(this);
            *(int*)(this + 12) = *(int*)(this + 12) + (iVar1 - iVar2);
        }
    }

    // 0x1004acd90, 32 bytes, inline, placed by class name
    // Rect<int>::SetMinMax(int, int, int, int)
    void Rect<int>::SetMinMax(int param_1, int param_2, int param_3, int param_4) {
        *(int*)this = param_1;
        *(int*)(this + 4) = param_3;
        *(int*)(this + 8) = param_2 - param_1;
        *(int*)(this + 12) = param_4 - param_3;
    }

    // 0x1004adb20, 80 bytes, inline, placed by class name
    // Rect<int>::Union(int, int)
    void Rect<int>::Union(int param_1, int param_2) {
        undefined4 in_register_00000034;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
            local_38, (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        SetMinMax((Rect<int>*)local_38, param_1, param_2, param_1, param_2);
        Union(this, (Rect*)local_38);
    }

    // 0x10053bd70, 96 bytes, inline, placed by class name
    // Rect<unsigned int>::Scale(float)
    void Rect<unsigned int>::Scale(float param_1) {
        *(int*)this = (int)(long)((float)*(uint*)this * param_1);
        *(int*)(this + 4) = (int)(long)((float)*(uint*)(this + 4) * param_1);
        *(int*)(this + 8) = (int)(long)((float)*(uint*)(this + 8) * param_1);
        *(int*)(this + 12) = (int)(long)((float)*(uint*)(this + 12) * param_1);
    }

    // 0x10068a030, 128 bytes, inline, placed by class name
    // bool Rect<float>::IsInside<float>(Vector2T<float> const&) const
    bool Rect<float>::IsInside<float>(Vector2T* param_1) {
        float fVar1;
        float fVar2;

        fVar1 = *(float*)param_1;
        fVar2 = (float)GetOverbright();
        if (((fVar2 <= fVar1) && (fVar1 = *(float*)param_1, fVar2 = (float)MaxU(this), fVar1 <= fVar2)) &&
            (fVar1 = *(float*)(param_1 + 4), fVar2 = (float)GetAlpha(), fVar2 <= fVar1)) {
            fVar1 = *(float*)(param_1 + 4);
            fVar2 = (float)MaxV(this);
            return fVar1 <= fVar2;
        }
        return false;
    }

    // 0x10068cb30, 80 bytes, inline, placed by class name
    // Rect<float>::FlipHorizontally() const
    Rect<float>* Rect<float>::FlipHorizontally() {
        float fVar1;
        float* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        fVar1 = in_RSI[2];
        *(float*)this = *in_RSI + fVar1;
        *(float*)(this + 4) = in_RSI[1];
        *(float*)(this + 8) = -fVar1;
        *(float*)(this + 12) = in_RSI[3];
        return this;
    }

    // 0x100699e20, 16 bytes, inline, placed by class name
    // Rect<float>::SetY(float)
    void Rect<float>::SetY(float param_1) {
        *(float*)(this + 4) = param_1;
    }

    // 0x1006a67a0, 16 bytes, inline, placed by class name
    // Rect<float>::SetX(float)
    void Rect<float>::SetX(float param_1) {
        *(float*)this = param_1;
    }

    // 0x1006a67b0, 32 bytes, inline, placed by class name
    // Rect<float>::CentreX() const
    float Rect<float>::CentreX() {
        return *(float*)(this + 8) * 0.5 + *(float*)this;
    }

    // 0x1006a67d0, 32 bytes, inline, placed by class name
    // Rect<float>::CentreY() const
    float Rect<float>::CentreY() {
        return *(float*)(this + 12) * 0.5 + *(float*)(this + 4);
    }

    // 0x1006ac940, 128 bytes, inline, placed by class name
    // Rect<int>::Contains(Rect<int> const&) const
    bool Rect<int>::Contains(Rect* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetX();
        iVar2 = GetX();
        if (iVar2 <= iVar1) {
            iVar1 = param_1->GetZ();
            iVar2 = GetZ();
            if (iVar2 <= iVar1) {
                iVar1 = Right((Rect<int>*)param_1);
                iVar2 = Right(this);
                if (iVar1 <= iVar2) {
                    iVar1 = MaxZ((Rect<int>*)param_1);
                    iVar2 = MaxZ(this);
                    return iVar1 <= iVar2;
                }
            }
        }
        return false;
    }

    // 0x1007de050, 160 bytes, inline, placed by class name
    // bool Rect<float>::IsInside<float>(Point<float> const&) const
    bool Rect<float>::IsInside<float>(Point* param_1) {
        float fVar1;
        float fVar2;

        fVar1 = (float)param_1->GetOverbright();
        fVar2 = (float)GetOverbright();
        if (fVar2 <= fVar1) {
            fVar1 = (float)param_1->GetOverbright();
            fVar2 = (float)MaxU(this);
            if (fVar1 <= fVar2) {
                fVar1 = (float)param_1->GetAlpha();
                fVar2 = (float)GetAlpha();
                if (fVar2 <= fVar1) {
                    fVar1 = (float)param_1->GetAlpha();
                    fVar2 = (float)MaxV(this);
                    return fVar1 <= fVar2;
                }
            }
        }
        return false;
    }

    // 0x1007de4f0, 48 bytes, inline, placed by class name
    // Rect<int> Rect<float>::ToType<int>() const
    Rect<float>* Rect<float>::ToType<int>() {
        float* in_RSI;

        new (this) oldscape::dash3d::GridRect((int)*in_RSI, (int)in_RSI[1], (int)in_RSI[2], (int)in_RSI[3]);
        return this;
    }

    // 0x1007fbbf0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<float>::Right() const
    /* Rect<float>::MaxU() const */

    float Rect<float>::MaxU() {
        return *(float*)(this + 8) + *(float*)this;
    }

    // 0x1007fbc00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<float>::Bottom() const
    /* Rect<float>::MaxV() const */

    float Rect<float>::MaxV() {
        return *(float*)(this + 12) + *(float*)(this + 4);
    }

    // 0x100861480, 16 bytes, inline, placed by class name
    // Rect<int>::Grow(int)
    void Rect<int>::Grow(int param_1) {
        Grow(this, param_1, param_1);
    }

    // 0x10087e2b0, 64 bytes, inline, placed by class name
    // Rect<float>::Scale(float)
    void Rect<float>::Scale(float param_1) {
        *(float*)this = *(float*)this * param_1;
        *(float*)(this + 4) = *(float*)(this + 4) * param_1;
        *(float*)(this + 8) = *(float*)(this + 8) * param_1;
        *(float*)(this + 12) = param_1 * *(float*)(this + 12);
    }

    // 0x10087e2f0, 16 bytes, inline, placed by class name
    // Rect<float>::Grow(float)
    void Rect<float>::Grow(float param_1) {
        Grow(this, param_1, param_1);
    }

    // 0x10087e410, 64 bytes, inline, placed by class name
    // Rect<float>::Grow(float, float)
    void Rect<float>::Grow(float param_1, float param_2) {
        *(float*)this = *(float*)this - param_1;
        *(float*)(this + 4) = *(float*)(this + 4) - param_2;
        *(float*)(this + 8) = *(float*)(this + 8) + param_1 + param_1;
        *(float*)(this + 12) = param_1 + param_1 + *(float*)(this + 12);
    }

    // 0x10087e670, 32 bytes, inline, placed by class name
    // Rect<int>::Grow(int, int)
    void Rect<int>::Grow(int param_1, int param_2) {
        *(int*)this = *(int*)this - param_1;
        *(int*)(this + 4) = *(int*)(this + 4) - param_2;
        *(int*)(this + 8) = *(int*)(this + 8) + param_1 * 2;
        *(int*)(this + 12) = *(int*)(this + 12) + param_1 * 2;
    }

    // 0x1008dfdf0, 48 bytes, inline, placed by class name
    // Rect<float>::SetUV(float, float, float, float)
    void Rect<float>::SetUV(float param_1, float param_2, float param_3, float param_4) {
        *(float*)this = param_1;
        *(float*)(this + 8) = param_2 - param_1;
        *(float*)(this + 4) = param_3;
        *(float*)(this + 12) = param_4 - param_3;
    }

    // 0x1008f1b50, 128 bytes, inline, placed by class name
    // bool Rect<int>::IsInside<int>(Point<int> const&) const
    bool Rect<int>::IsInside<int>(Point* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetX();
        iVar2 = GetX();
        if (iVar2 <= iVar1) {
            iVar1 = param_1->GetX();
            iVar2 = Right(this);
            if (iVar1 <= iVar2) {
                iVar1 = param_1->GetZ();
                iVar2 = GetZ();
                if (iVar2 <= iVar1) {
                    iVar1 = param_1->GetZ();
                    iVar2 = MaxZ(this);
                    return iVar1 <= iVar2;
                }
            }
        }
        return false;
    }

    // 0x100905c70, 16 bytes, complete-object constructor, inline, placed by class name
    // Rect<float>::Rect(Rect<float> const&): jumps straight to the base-object constructor

    // 0x100905c70: the linker folded this into Rect<float>::Rect(Rect<float> const&), which has identical code
    Float4::Float4(Vector4T<float> const&);

    // 0x100905c80, 48 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Rect<float>::Rect(Rect<float> const&)
    /* Float4::Float4(Vector4T<float> const&) */

    void Float4::Float4(Vector4T* param_1) {
        field_0 = *(undefined4*)param_1;
        field_4 = *(undefined4*)(param_1 + 4);
        field_8 = *(undefined4*)(param_1 + 8);
        field_12 = *(undefined4*)(param_1 + 12);
    }

    // 0x100905c80: the linker folded this into Rect<float>::Rect(Rect<float> const&), which has identical code
    Float4::Float4(Vector4T<float> const&);

    // 0x100917480, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.227
    void ___cxx_global_var_init_227() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4780;
        if (*PTR_ZERO_100ee4780 == '\0') {
            new (PTR_ZERO_100ee6688) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009cb7c0, 16 bytes, inline, placed by class name
    // Rect<float>::SetBottom(float)
    void Rect<float>::SetBottom(float param_1) {
        *(float*)(this + 12) = param_1 - *(float*)(this + 4);
    }

    // 0x1009cb7d0, 32 bytes, inline, placed by class name
    // Rect<float>::Translate(float, float)
    void Rect<float>::Translate(float param_1, float param_2) {
        *(float*)this = param_1 + *(float*)this;
        *(float*)(this + 4) = param_2 + *(float*)(this + 4);
    }

    // 0x100bdf3f0, 16 bytes, inline, placed by class name
    // Rect<unsigned int>::operator!=(Rect<unsigned int> const&) const
    /* Rect<int>::TEMPNAMEPLACEHOLDERVALUE(Rect<int> const&) const */

    byte Rect<int>::operator!=(Rect* param_1) {
        return render::StencilOpDesc::operator==((StencilOpDesc*)this, (StencilOpDesc*)param_1) ^ 1;
    }

    // 0x100c1d320, 32 bytes, inline, placed by class name
    // Rect<int>::operator=(Rect<int> const&)
    /* Rect<unsigned int>::TEMPNAMEPLACEHOLDERVALUE(Rect<unsigned int> const&) */

    Rect<unsigned int>* Rect<unsigned int>::operator=(Rect* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined4*)(this + 12) = *(undefined4*)(param_1 + 12);
        return this;
    }

    // 0x100c28720, 32 bytes, inline, placed by class name
    // Rect<unsigned int>::Valid() const
    bool Rect<unsigned int>::Valid() {
        if (*(int*)(this + 8) == 0) {
            return false;
        }
        return *(int*)(this + 12) != 0;
    }

    // 0x100c28740, 48 bytes, inline, placed by class name
    // Rect<unsigned int>::operator==(Rect<unsigned int> const&) const
    /* render::StencilOpDesc::TEMPNAMEPLACEHOLDERVALUE(render::StencilOpDesc const&) const */

    undefined4 render::StencilOpDesc::operator==(StencilOpDesc* param_1) {
        if (((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) {
            return CONCAT31((int3)((uint)field_12 >> 8), field_12 == param_1->field_12);
        }
        return 0;
    }

    // 0x100c68fd0, 16 bytes, inline, placed by class name
    // Rect<int>::SetRight(int)
    void Rect<int>::SetRight(int param_1) {
        *(int*)(this + 8) = param_1 - *(int*)this;
    }

    // 0x100c68fe0, 16 bytes, inline, placed by class name
    // Rect<int>::SetBottom(int)
    void Rect<int>::SetBottom(int param_1) {
        *(int*)(this + 12) = param_1 - *(int*)(this + 4);
    }

} // namespace jag::math

namespace jag {
    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    Error::SetCode(int);

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    Error::Error(int);

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint ZoneBuiltArea::GetBuildMode() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint Steam::GetAppID() const;

} // namespace jag

namespace jag::game {
    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint EnvFogSettings::GetFogRGBA() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint EnvToneMapSettings::GetToneMapOperator() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    int EnvReflectionSettings::GetEnvironmentMaterialID() const;

} // namespace jag::game

namespace jag::graphics {
    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    SortKeyLessThan::SortKeyLessThan(RenderPassType);

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    RenderPassBitSet::SetBits(unsigned int);

} // namespace jag::graphics

namespace jag::oldscape::graphics {
    // 0x10000c2f0: the linker folded this into jag::math::Rect<int>::SetX(int), which has identical code
    XPlot_NormalAlpha::XPlot_NormalAlpha(int);

} // namespace jag::oldscape::graphics

namespace jag::oldscape {
    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    int ClientEntityID::GetSlotID() const;

} // namespace jag::oldscape

namespace jag::render {
    // 0x100c28740: the linker folded this into math::Rect<unsigned int>::operator==(math::Rect<unsigned int> const&) const, which has identical code
    StencilOpDesc::operator==(StencilOpDesc const&) const;

} // namespace jag::render
