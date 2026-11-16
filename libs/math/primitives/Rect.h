// libs/math/primitives/Rect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 3 instantiations, e.g. <float>, <int>, <unsigned int>
    class Rect {
    public:
        void SetX(int arg1);
        void SetY(int arg1);
        void Clip(const Rect<int>& rect1, Rect<int>& rect2) const;
        void Shrink(int arg1, int arg2);
        unsigned int MinY() const;
        void Translate(int arg1, int arg2);
        void Translate(const Vector2T<float>& vector2);
        int MaxX() const;
        bool IsInside(int arg1, int arg2) const;
        auto Intersection(Rect<int> rect) const;
        bool Intersects(const Rect<int>& rect) const;
        void Scale(float arg1);
        int MaxY() const;
        Rect(const Rect<int>& rect);
        void SetRight(float arg1);
        unsigned long Excludes(const Rect<int>& rect) const;
        Rect<float> ToType<float>() const;
        void Union(const Rect<int>& rect);
        void SetMinMax(int arg1, int arg2, int arg3, int arg4);
        void Union(int arg1, int arg2);
        bool IsInside<float>(const Vector2T<float>& vector2) const;
        auto FlipHorizontally() const;
        void SetY(float arg1);
        void SetX(float arg1);
        float CentreX() const;
        float CentreY() const;
        bool Contains(const Rect<int>& rect) const;
        bool IsInside<float>(const Point<float>& point) const;
        Rect<int> ToType<int>() const;
        float Right() const;
        float Bottom() const;
        void Grow(int arg1);
        void Grow(float arg1);
        void Grow(float arg1, float arg2);
        void Grow(int arg1, int arg2);
        void SetUV(float arg1, float arg2, float arg3, float arg4);
        bool IsInside<int>(const Point<int>& point) const;
        Rect(const Rect<float>& rect);
        void SetBottom(float arg1);
        void Translate(float arg1, float arg2);
        uint8_t operator!=(const Rect<unsigned int>& rect) const;
        Rect<unsigned int>* operator=(const Rect<int>& rect);
        bool Valid() const;
        uint32_t operator==(const Rect<unsigned int>& rect) const;
        void SetRight(int arg1);
        void SetBottom(int arg1);
        static oldscape::dash3d::GridRect ZERO; // = GridRect(0, 0, 0, 0)
        static ImVec4 ZERO;                     // = ImVec4(0.0, 0.0, 0.0, 0.0)
    };

    // 0x100f3e8f0, set at startup by ___cxx_global_var_init.151
    oldscape::dash3d::GridRect Rect<int>::ZERO = GridRect(0, 0, 0, 0);

    // 0x100f442e8, set at startup by ___cxx_global_var_init.227
    ImVec4 Rect<float>::ZERO = ImVec4(0.0, 0.0, 0.0, 0.0);

    // 0x10000c2f0
    void Rect<int>::SetX(int arg1) {
        *(int*)this = arg1;
    }

    // 0x10000c300
    void Rect<int>::SetY(int arg1) {
        m_z = arg1;
    }

    // 0x10000c310
    void Rect<int>::Clip(const Rect<int>& rect1, Rect<int>& rect2) const {
        Rect<int>* this_00;

        int arg1 = *(int*)rect1;
        if (*(int*)rect1 < *(int*)this) {
            arg1 = *(int*)this;
        }
        int arg2 = *(int*)(rect1 + 4);
        if (*(int*)(rect1 + 4) < *(int*)(this + 4)) {
            arg2 = *(int*)(this + 4);
        }
        int iVar1 = Right(this);
        int iVar2 = Right(rect1);
        if (iVar1 < iVar2) {
            this_00 = this;
        } else {
            this_00 = rect1;
        }
        iVar1 = Right(this_00);
        iVar2 = MaxZ(this);
        if (MaxZ(rect1) <= iVar2) {
            this = rect1;
        }
        iVar2 = MaxZ(this);
        iVar1 = iVar1 - arg1;
        iVar2 = iVar2 - arg2;
        if (iVar1 < 0) {
            iVar1 = 0;
        }
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        new (rect2) oldscape::dash3d::GridRect(arg1, arg2, iVar1, iVar2);
    }

    // 0x1000600c0
    void Rect<int>::Shrink(int arg1, int arg2) {
        *(int*)this = *(int*)this + arg1;
        *(int*)(this + 4) = *(int*)(this + 4) + arg2;
        *(int*)(this + 8) = *(int*)(this + 8) + arg1 * -2;
        *(int*)(this + 12) = *(int*)(this + 12) + arg1 * -2;
    }

    // 0x100073980
    unsigned int Rect<int>::MinY() const {
        return m_z;
    }

    // 0x1000dc790
    void Rect<int>::Translate(int arg1, int arg2) {
        *(int*)this = *(int*)this + arg1;
        *(int*)(this + 4) = *(int*)(this + 4) + arg2;
    }

    // 0x100102cb0
    void Rect<int>::Translate(const Vector2T<float>& vector2) {
        auto pfVar1 = vector2.SSOBeginPtr();
        *(int*)this = *(int*)this + (int)*pfVar1;
        pfVar1 = (float*)vector2.y();
        *(int*)(this + 4) = *(int*)(this + 4) + (int)*pfVar1;
    }

    // 0x10011f320
    int Rect<int>::MaxX() const {
        return *(int*)(this + 8) + *(int*)this;
    }

    // 0x100120680
    bool Rect<int>::IsInside(int arg1, int arg2) const {
        int iVar1 = GetX();
        if (((arg1 < iVar1) || (iVar1 = Right(this), iVar1 < arg1)) || (iVar1 = GetZ(), arg2 < iVar1)) {
            return false;
        }
        iVar1 = MaxZ(this);
        return arg2 <= iVar1;
    }

    // 0x10012cfd0
    void Rect<int>::Scale(float arg1) {
        *(int*)this = (int)((float)*(int*)this * arg1);
        *(int*)(this + 4) = (int)((float)*(int*)(this + 4) * arg1);
        *(int*)(this + 8) = (int)((float)*(int*)(this + 8) * arg1);
        *(int*)(this + 12) = (int)((float)*(int*)(this + 12) * arg1);
    }

    // 0x1001cb990
    int Rect<int>::MaxY() const {
        return *(int*)(this + 12) + *(int*)(this + 4);
    }

    // 0x1003a80d0
    Rect<int>::Rect(const Rect<int>& rect) {
        *(uint32_t*)this = *(uint32_t*)rect;
        *(uint32_t*)(this + 4) = *(uint32_t*)(rect + 4);
        *(uint32_t*)(this + 8) = *(uint32_t*)(rect + 8);
        *(uint32_t*)(this + 12) = *(uint32_t*)(rect + 12);
    }

    // 0x1003bcf80
    void Rect<float>::SetRight(float arg1) {
        *(float*)(this + 8) = arg1 - *(float*)this;
    }

    // 0x1003cf1c0
    unsigned long Rect<int>::Excludes(const Rect<int>& rect) const {
        uint64_t unaff_R15;

        int iVar1 = rect.GetX();
        int iVar2 = Right(this);
        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        unsigned long uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        if (iVar1 < iVar2) {
            iVar1 = rect.GetZ();
            iVar2 = MaxZ(this);
            if (iVar1 < iVar2) {
                iVar1 = Right(rect);
                iVar2 = GetX();
                if (iVar2 < iVar1) {
                    iVar1 = MaxZ(rect);
                    iVar2 = GetZ();
                    uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(iVar1 <= iVar2));
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x10047cd70
    Rect<float> Rect<int>::ToType<float>() const {
        int* in_RSI;

        new (this) ImVec4((float)*in_RSI, (float)in_RSI[1], (float)in_RSI[2], (float)in_RSI[3]);
        return this;
    }

    // 0x10047e840
    void Rect<int>::Union(const Rect<int>& rect) {
        int iVar1 = *(int*)rect;
        int iVar2 = *(int*)this - iVar1;
        if (iVar2 != 0 && iVar1 <= *(int*)this) {
            *(int*)(this + 8) = *(int*)(this + 8) + iVar2;
            *(int*)this = iVar1;
        }
        iVar1 = *(int*)(rect + 4);
        iVar2 = *(int*)(this + 4) - iVar1;
        if (iVar2 != 0 && iVar1 <= *(int*)(this + 4)) {
            *(int*)(this + 12) = *(int*)(this + 12) + iVar2;
            *(int*)(this + 4) = iVar1;
        }
        iVar1 = Right(rect);
        iVar2 = Right(this);
        if (iVar2 < iVar1) {
            iVar1 = Right(rect);
            iVar2 = Right(this);
            *(int*)(this + 8) = *(int*)(this + 8) + (iVar1 - iVar2);
        }
        iVar1 = MaxZ(rect);
        iVar2 = MaxZ(this);
        if (iVar2 < iVar1) {
            iVar1 = MaxZ(rect);
            iVar2 = MaxZ(this);
            *(int*)(this + 12) = *(int*)(this + 12) + (iVar1 - iVar2);
        }
    }

    // 0x1004acd90
    void Rect<int>::SetMinMax(int arg1, int arg2, int arg3, int arg4) {
        *(int*)this = arg1;
        *(int*)(this + 4) = arg3;
        *(int*)(this + 8) = arg2 - arg1;
        *(int*)(this + 12) = arg4 - arg3;
    }

    // 0x1004adb20
    void Rect<int>::Union(int arg1, int arg2) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        SetMinMax(&local_38, arg1, arg2, arg1, arg2);
        Union(this, &local_38);
    }

    // 0x10053bd70
    void Rect<unsigned int>::Scale(float arg1) {
        *(int*)this = (int)(long)((float)*(unsigned int*)this * arg1);
        *(int*)(this + 4) = (int)(long)((float)*(unsigned int*)(this + 4) * arg1);
        *(int*)(this + 8) = (int)(long)((float)*(unsigned int*)(this + 8) * arg1);
        *(int*)(this + 12) = (int)(long)((float)*(unsigned int*)(this + 12) * arg1);
    }

    // 0x10068a030
    bool Rect<float>::IsInside<float>(const Vector2T<float>& vector2) const {
        float fVar1 = *(float*)vector2;
        float fVar2 = (float)GetOverbright();
        if (((fVar2 <= fVar1) && (fVar1 = *(float*)vector2, fVar2 = (float)MaxU(this), fVar1 <= fVar2)) &&
            (fVar1 = *(float*)(vector2 + 4), fVar2 = (float)GetAlpha(), fVar2 <= fVar1)) {
            fVar1 = *(float*)(vector2 + 4);
            fVar2 = (float)MaxV(this);
            return fVar1 <= fVar2;
        }
        return false;
    }

    // 0x10068cb30
    auto Rect<float>::FlipHorizontally() const {
        auto result;
        float fVar1 = *(float*)(this + 8);
        result = *(float*)this + fVar1;
        *(uint32_t*)&result.field_4 = *(uint32_t*)(this + 4);
        *(float*)(&result + 1) = -fVar1;
        *(uint32_t*) && result[1].field_4 = *(uint32_t*)(this + 12);
        return result;
    }

    // 0x100699e20
    void Rect<float>::SetY(float arg1) {
        *(float*)(this + 4) = arg1;
    }

    // 0x1006a67a0
    void Rect<float>::SetX(float arg1) {
        *(float*)this = arg1;
    }

    // 0x1006a67b0
    float Rect<float>::CentreX() const {
        return *(float*)(this + 8) * 0.5 + *(float*)this;
    }

    // 0x1006a67d0
    float Rect<float>::CentreY() const {
        return *(float*)(this + 12) * 0.5 + *(float*)(this + 4);
    }

    // 0x1006ac940
    bool Rect<int>::Contains(const Rect<int>& rect) const {
        int iVar1 = rect.GetX();
        int iVar2 = GetX();
        if (iVar2 <= iVar1) {
            iVar1 = rect.GetZ();
            iVar2 = GetZ();
            if (iVar2 <= iVar1) {
                iVar1 = Right(rect);
                iVar2 = Right(this);
                if (iVar1 <= iVar2) {
                    iVar1 = MaxZ(rect);
                    iVar2 = MaxZ(this);
                    return iVar1 <= iVar2;
                }
            }
        }
        return false;
    }

    // 0x1007de050
    bool Rect<float>::IsInside<float>(const Point<float>& point) const {
        float fVar1 = (float)point.GetOverbright();
        float fVar2 = (float)GetOverbright();
        if (fVar2 <= fVar1) {
            fVar1 = (float)point.GetOverbright();
            fVar2 = (float)MaxU(this);
            if (fVar1 <= fVar2) {
                fVar1 = (float)point.GetAlpha();
                fVar2 = (float)GetAlpha();
                if (fVar2 <= fVar1) {
                    fVar1 = (float)point.GetAlpha();
                    fVar2 = (float)MaxV(this);
                    return fVar1 <= fVar2;
                }
            }
        }
        return false;
    }

    // 0x1007de4f0
    Rect<int> Rect<float>::ToType<int>() const {
        return Rect<int>((int)*(float*)this, (int)*(float*)(this + 4), (int)*(float*)(this + 8),
                         (int)*(float*)(this + 12));
    }

    // 0x1007fbbf0
    float Rect<float>::Right() const {
        return *(float*)(this + 8) + *(float*)this;
    }

    // 0x1007fbc00
    float Rect<float>::Bottom() const {
        return *(float*)(this + 12) + *(float*)(this + 4);
    }

    // 0x100861480
    void Rect<int>::Grow(int arg1) {
        Grow(this, arg1, arg1);
    }

    // 0x10087e2b0
    void Rect<float>::Scale(float arg1) {
        *(float*)this = *(float*)this * arg1;
        *(float*)(this + 4) = *(float*)(this + 4) * arg1;
        *(float*)(this + 8) = *(float*)(this + 8) * arg1;
        *(float*)(this + 12) = arg1 * *(float*)(this + 12);
    }

    // 0x10087e2f0
    void Rect<float>::Grow(float arg1) {
        Grow(this, arg1, arg1);
    }

    // 0x10087e410
    void Rect<float>::Grow(float arg1, float arg2) {
        *(float*)this = *(float*)this - arg1;
        *(float*)(this + 4) = *(float*)(this + 4) - arg2;
        *(float*)(this + 8) = *(float*)(this + 8) + arg1 + arg1;
        *(float*)(this + 12) = arg1 + arg1 + *(float*)(this + 12);
    }

    // 0x10087e670
    void Rect<int>::Grow(int arg1, int arg2) {
        *(int*)this = *(int*)this - arg1;
        *(int*)(this + 4) = *(int*)(this + 4) - arg2;
        *(int*)(this + 8) = *(int*)(this + 8) + arg1 * 2;
        *(int*)(this + 12) = *(int*)(this + 12) + arg1 * 2;
    }

    // 0x1008dfdf0
    void Rect<float>::SetUV(float arg1, float arg2, float arg3, float arg4) {
        *(float*)this = arg1;
        *(float*)(this + 8) = arg2 - arg1;
        *(float*)(this + 4) = arg3;
        *(float*)(this + 12) = arg4 - arg3;
    }

    // 0x1008f1b50
    bool Rect<int>::IsInside<int>(const Point<int>& point) const {
        int iVar1 = point.GetX();
        int iVar2 = GetX();
        if (iVar2 <= iVar1) {
            iVar1 = point.GetX();
            iVar2 = Right(this);
            if (iVar1 <= iVar2) {
                iVar1 = point.GetZ();
                iVar2 = GetZ();
                if (iVar2 <= iVar1) {
                    iVar1 = point.GetZ();
                    iVar2 = MaxZ(this);
                    return iVar1 <= iVar2;
                }
            }
        }
        return false;
    }

    // 0x100905c80
    Rect<float>::Rect(const Rect<float>& rect) {
        field_0 = *(uint32_t*)rect;
        field_4 = *(uint32_t*)(rect + 4);
        field_8 = *(uint32_t*)(rect + 8);
        field_12 = *(uint32_t*)(rect + 12);
    }

    // 0x100905c80: Float4::Float4(Vector4T<float> const&) has the same machine code as Rect<float>::Rect(Rect<float> const&)

    // 0x1009cb7c0
    void Rect<float>::SetBottom(float arg1) {
        *(float*)(this + 12) = arg1 - *(float*)(this + 4);
    }

    // 0x1009cb7d0
    void Rect<float>::Translate(float arg1, float arg2) {
        *(float*)this = arg1 + *(float*)this;
        *(float*)(this + 4) = arg2 + *(float*)(this + 4);
    }

    // 0x100bdf3f0
    uint8_t Rect<unsigned int>::operator!=(const Rect<unsigned int>& rect) const {
        return *this == rect ^ 1;
    }

    // 0x100c1d320
    Rect<unsigned int>* Rect<int>::operator=(const Rect<int>& rect) {
        *(uint32_t*)this = *(uint32_t*)rect;
        *(uint32_t*)(this + 4) = *(uint32_t*)(rect + 4);
        *(uint32_t*)(this + 8) = *(uint32_t*)(rect + 8);
        *(uint32_t*)(this + 12) = *(uint32_t*)(rect + 12);
        return this;
    }

    // 0x100c28720
    bool Rect<unsigned int>::Valid() const {
        if (*(int*)(this + 8) == 0) {
            return false;
        }
        return *(int*)(this + 12) != 0;
    }

    // 0x100c28740
    uint32_t Rect<unsigned int>::operator==(const Rect<unsigned int>& rect) const {
        if (((field_0 == *(int*)rect) && (field_4 == *(int*)(rect + 4))) && (field_8 == *(int*)(rect + 8))) {
            return field_12 == *(int*)(rect + 12);
        }
        return 0;
    }

    // 0x100c68fd0
    void Rect<int>::SetRight(int arg1) {
        *(int*)(this + 8) = arg1 - *(int*)this;
    }

    // 0x100c68fe0
    void Rect<int>::SetBottom(int arg1) {
        *(int*)(this + 12) = arg1 - *(int*)(this + 4);
    }

} // namespace jag::math

namespace jag {
    // 0x10000c2f0: Error::SetCode(int) has the same machine code as math::Rect<int>::SetX(int)

    // 0x10000c2f0: Error::Error(int) has the same machine code as math::Rect<int>::SetX(int)

    // 0x100073980: ZoneBuiltArea::GetBuildMode() const has the same machine code as math::Rect<int>::MinY() const

    // 0x100073980: Steam::GetAppID() const has the same machine code as math::Rect<int>::MinY() const

} // namespace jag

namespace jag::game {
    // 0x100073980: EnvFogSettings::GetFogRGBA() const has the same machine code as math::Rect<int>::MinY() const

    // 0x100073980: EnvToneMapSettings::GetToneMapOperator() const has the same machine code as math::Rect<int>::MinY() const

    // 0x100073980: EnvReflectionSettings::GetEnvironmentMaterialID() const has the same machine code as math::Rect<int>::MinY() const

} // namespace jag::game

namespace jag::graphics {
    // 0x10000c2f0: SortKeyLessThan::SortKeyLessThan(RenderPassType) has the same machine code as math::Rect<int>::SetX(int)

    // 0x10000c2f0: RenderPassBitSet::SetBits(unsigned int) has the same machine code as math::Rect<int>::SetX(int)

} // namespace jag::graphics

namespace jag::oldscape::graphics {
    // 0x10000c2f0: XPlot_NormalAlpha::XPlot_NormalAlpha(int) has the same machine code as jag::math::Rect<int>::SetX(int)

} // namespace jag::oldscape::graphics

namespace jag::oldscape {
    // 0x100073980: ClientEntityID::GetSlotID() const has the same machine code as jag::math::Rect<int>::MinY() const

} // namespace jag::oldscape

namespace jag::render {
    // 0x100c28740: StencilOpDesc::operator==(StencilOpDesc const&) const has the same machine code as math::Rect<unsigned int>::operator==(math::Rect<unsigned int> const&) const

} // namespace jag::render
