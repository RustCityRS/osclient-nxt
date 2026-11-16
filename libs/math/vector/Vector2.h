// libs/math/vector/Vector2.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float>, <int>
    class Vector2T {
    public:
        pair<int, unsigned int>* operator=(const Vector2T<int>& vector2);
        Vector2T<int>(const Vector2T<int>& vector2);
        Vector2T<int>* y() const;
        auto Set(int arg1, int arg2);
        Vector2T(int arg1);
        Vector2T<float>* operator/=(const Vector2T<float>& vector2);
        Vector2T(float arg1);
        void LengthSq() const;
        Vector2T<float>* operator=(const Vector2T<float>& vector2);
        Vector2T(PacketT<Array<unsigned char>>& arg1, bool arg2);
        Vector2T<int>* operator+=(const Vector2T<int>& vector2);
        Vector2T<float>* operator*=(const Vector2T<float>& vector2);
        Vector2T<float>* operator*=(const Matrix22T<float>& matrix22);
        Vector2T<float>* operator+=(const Vector2T<float>& vector2);
        Vector2T<float>* operator-=(const Vector2T<float>& vector2);
        auto Normalize();
        Vector2T<float>* Set(float arg1, float arg2);
        auto SetToZero();
        auto SetToOne();
        float InvLength() const;
        Vector2T<float>* operator*=(float arg1);
        void Length() const;
        Vector2T<float>* operator/=(float arg1);
        Vector2T<float>* operator[](unsigned int arg1) const;
        Vector2T<float>* operator[](unsigned int arg1);
        static Point<float> ZERO; // = Point<float>(0.0, 0.0)
        static Point<float> ONE;  // = Point<float>(1.0, 1.0)
    };

    // 0x100f38ce0, set at startup by ___cxx_global_var_init.174
    Point<float> Vector2T<float>::ZERO = Point<float>(0.0, 0.0);

    // 0x100f3c150, set at startup by ___cxx_global_var_init.173
    Point<float> Vector2T<float>::ONE = Point<float>(1.0, 1.0);

    // 0x1004c6430
    Vector2T<float>* Vector2T<float>::operator=(const Vector2T<float>& vector2) {
        *(uint32_t*)this = *(uint32_t*)vector2;
        *(uint32_t*)(this + 4) = *(uint32_t*)(vector2 + 4);
        return this;
    }

    // 0x1007dbe00
    Vector2T<float>* Vector2T<float>::operator*=(const Vector2T<float>& vector2) {
        *(float*)this = *(float*)this * *(float*)vector2;
        *(float*)(this + 4) = *(float*)(this + 4) * *(float*)(vector2 + 4);
        return this;
    }

    // 0x100bb37f0
    Vector2T<float>* Vector2T<float>::operator/=(float arg1) {
        *(float*)this = *(float*)this * (1.0 / arg1);
        *(float*)(this + 4) = (1.0 / arg1) * *(float*)(this + 4);
        return this;
    }

} // namespace jag::math

namespace jag::render {
    // 0x100102d30: GLMinMagFilter::GLMinMagFilter(unsigned int, unsigned int, unsigned int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

    // 0x100102d30: GLVertexElementFormat::GLVertexElementFormat(unsigned int, int, unsigned int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

} // namespace jag::render

namespace jag::game {
    // 0x100102d30: WaterNormalParamsTarget::WaterNormalParamsTarget(WaterNormalParamsEncoding, WaterNormalParamGroup, int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

} // namespace jag::game

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100102d30: LocationData::LocationData(int, int, int) has the same machine code as jag::math::Vector3T<int>::Vector3T(int, int, int)

} // namespace jag::oldscape::rs2lib::worldmap
