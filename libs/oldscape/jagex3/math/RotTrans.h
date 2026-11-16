// libs/oldscape/jagex3/math/RotTrans.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::math {
    class RotTrans {
    public:
        RotTrans(PacketJ<Array<unsigned char>>& packetJ, bool arg2);
        void Deserialise(PacketJ<Array<unsigned char>>& packetJ, bool arg2);
        RotTrans();
        RotTrans(const RotTrans& rotTrans);
        ~RotTrans();
        void Set(const RotTrans& rotTrans);
        int GetLightweightPacketSize();
        unsigned int GetLightweightMask();
        void Serialise(PacketJ<Array<unsigned char>>& packetJ, bool arg2);
        void SerialiseLightweight(PacketJ<Array<unsigned char>>& packetJ);
        void DeserialiseLightweight(PacketJ<Array<unsigned char>>& packetJ);
        void Idenity();
        void Inverse();
        auto Inverse(const RotTrans& rotTrans);
        void Multiply(const RotTrans& rotTrans);
        auto Multiply(const RotTrans& rotTrans1, const RotTrans& rotTrans2);
        void Prerotate(jag::math::QuaternionT<float>& quaternion);
        void Rotate(jag::math::QuaternionT<float>& quaternion);
        void Translate(jag::math::Vector3T<float> vector3);
        void Translate(float arg1, float arg2, float arg3);
        void Multiply(float arg1);
        void Add(const RotTrans& rotTrans);
        void Normalize();
        void Interpolate(RotTrans& rotTrans, float arg2);
        auto ToString();
        uint64_t ToAffineTransform3();
        bool IsIdentity() const;

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[24];
    };

    // 0x1002dabc0
    RotTrans::~RotTrans() {
        m_animationState->~shared_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::oldscape::math

namespace jag::oldscape::dash3d {
    // 0x1002dabc0: ResolvedModel::~ResolvedModel() has the same machine code as math::RotTrans::~RotTrans()

} // namespace jag::oldscape::dash3d
