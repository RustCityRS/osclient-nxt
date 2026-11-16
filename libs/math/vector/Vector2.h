// libs/math/vector/Vector2.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float>, <int>
    class Vector2T {
    public:
        pair<int, unsigned int>* operator=(Vector2T<int> const&);
        Vector2T<int>(Vector2T<int> const&);
        Vector2T<int>* y() const;
        Vector2T<int>* Set(int, int);
        Vector2T(int);
        Vector2T<float>* operator/=(Vector2T<float> const&);
        Vector2T(float);
        void LengthSq() const;
        Vector2T<float>* operator=(Vector2T<float> const&);
        Vector2T(PacketT<Array<unsigned char, eastl::allocator>>&, bool);
        Vector2T<int>* operator+=(Vector2T<int> const&);
        Vector2T<float>* operator*=(Vector2T<float> const&);
        Vector2T<float>* operator*=(Matrix22T<float> const&);
        Vector2T<float>* operator+=(Vector2T<float> const&);
        Vector2T<float>* operator-=(Vector2T<float> const&);
        Vector2T<float>* Normalize();
        Vector2T<float>* Set(float, float);
        Vector2T<float>* SetToZero();
        Vector2T<float>* SetToOne();
        float InvLength() const;
        Vector2T<float>* operator*=(float);
        void Length() const;
        Vector2T<float>* operator/=(float);
        Vector2T<float>* operator[](unsigned int) const;
        Vector2T<float>* operator[](unsigned int);
        static Point<float> /* 16 bytes */ ZERO; // = Point<float>(0.0, 0.0)
        static Point<float> /* 16 bytes */ ONE;  // = Point<float>(1.0, 1.0)
    };

    // 0x100f38ce0, 16 bytes, __data; set at startup by ___cxx_global_var_init.174
    Point<float> Vector2T<float>::ZERO = Point<float>(0.0, 0.0);

    // 0x100f3c150, 16 bytes, __data; set at startup by ___cxx_global_var_init.173
    Point<float> Vector2T<float>::ONE = Point<float>(1.0, 1.0);

    // 0x100102d20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Vector2T<int>(Vector2T<int> const&): jumps straight to the base-object constructor

    // 0x100102d30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<int>::Vector3T(int, int, int): jumps straight to the base-object constructor

    // 0x1001f4b10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.173
    void ___cxx_global_var_init_173() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1001f4b50, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.174
    void ___cxx_global_var_init_174() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004c6430, 32 bytes, inline, placed by class header (inline)
    // Vector2T<float>::operator=(Vector2T<float> const&)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&) */

    Vector2T<float>* Vector2T<float>::operator=(Vector2T* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        return this;
    }

    // 0x1007dbe00, 48 bytes, inline, placed by class header (inline)
    // Vector2T<float>::operator*=(Vector2T<float> const&)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&) */

    Vector2T<float>* Vector2T<float>::operator*=(Vector2T* param_1) {
        *(float*)this = *(float*)this * *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) * *(float*)(param_1 + 4);
        return this;
    }

    // 0x100bb37f0, 48 bytes, inline, placed by class header (inline)
    // Vector2T<float>::operator/=(float)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Vector2T<float>* Vector2T<float>::operator/=(float param_1) {
        *(float*)this = *(float*)this * (1.0 / param_1);
        *(float*)(this + 4) = (1.0 / param_1) * *(float*)(this + 4);
        return this;
    }

} // namespace jag::math

namespace jag::render {
    // 0x100102d30: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    GLMinMagFilter::GLMinMagFilter(unsigned int, unsigned int, unsigned int);

    // 0x100102d30: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    GLVertexElementFormat::GLVertexElementFormat(unsigned int, int, unsigned int);

} // namespace jag::render

namespace jag::game {
    // 0x100102d30: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    WaterNormalParamsTarget::WaterNormalParamsTarget(WaterNormalParamsEncoding, WaterNormalParamGroup, int);

} // namespace jag::game

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100102d30: the linker folded this into jag::math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    LocationData::LocationData(int, int, int);

} // namespace jag::oldscape::rs2lib::worldmap
