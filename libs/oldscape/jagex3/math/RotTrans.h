// libs/oldscape/jagex3/math/RotTrans.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::math {
    class RotTrans {
    public:
        RotTrans(PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        void Deserialise(PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        RotTrans();
        RotTrans(RotTrans const&);
        ~RotTrans();
        void Set(RotTrans const&);
        int GetLightweightPacketSize();
        uint GetLightweightMask();
        void Serialise(PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        void SerialiseLightweight(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void DeserialiseLightweight(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Idenity();
        void Inverse();
        RotTrans* Inverse(RotTrans const&);
        void Multiply(RotTrans const&);
        RotTrans* Multiply(RotTrans const&, RotTrans const&);
        void Prerotate(jag::math::QuaternionT<float>&);
        void Rotate(jag::math::QuaternionT<float>&);
        void Translate(jag::math::Vector3T<float>);
        void Translate(float, float, float);
        void Multiply(float);
        void Add(RotTrans const&);
        void Normalize();
        void Interpolate(RotTrans&, float);
        RotTrans* ToString();
        ToAffineTransform3();
        bool IsIdentity() const;

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[24];
    };

    // 0x1002c7e80, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RotTrans::~RotTrans(): jumps straight to the base-object destructor

    // 0x1002dabc0, 48 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RotTrans::~RotTrans()
    /* dash3d::ResolvedModel::~ResolvedModel() */

    void dash3d::ResolvedModel::~ResolvedModel() {
        (&m_animationState)->~shared_ptr();
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

} // namespace jag::oldscape::math

namespace jag::oldscape::dash3d {
    // 0x1002dabc0: the linker folded this into math::RotTrans::~RotTrans(), which has identical code
    ResolvedModel::~ResolvedModel();

} // namespace jag::oldscape::dash3d
