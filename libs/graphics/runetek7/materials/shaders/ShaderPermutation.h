// libs/graphics/runetek7/materials/shaders/ShaderPermutation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ShaderPermutation {
    public:
        ShaderPermutation();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    // 0x10089df00, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderPermutation::ShaderPermutation(): jumps straight to the base-object constructor

    // 0x10089dfd0, 16 bytes, base-object constructor, inline, placed by class name
    // ShaderPermutation::ShaderPermutation()
    void ShaderPermutation::ShaderPermutation() {
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008925a0, 80 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL> > >(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, graphics::ShaderPermutation const&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, graphics::ShaderPermutation const&) */

    DataSerialise* operator<<(DataSerialise* param_1, ShaderPermutation* param_2) {
        DataSerialise* pDVar1;

        pDVar1 = operator<<(param_1, (uchar*)param_2);
        pDVar1 = operator<<(pDVar1, (bitset*)&param_2->field_8);
        pDVar1 = operator<<(pDVar1, (uint*)&param_2[1].field_8);
        operator<<(pDVar1, (ushort*)&param_2[1].field_12);
        return param_1;
    }

    // 0x100892660, 80 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator>><PacketT<Array<unsigned char, BucketAllocatorEASTL> > >(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, graphics::ShaderPermutation&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, graphics::ShaderPermutation&) */

    DataSerialise* operator>>(DataSerialise* param_1, ShaderPermutation* param_2) {
        DataSerialise* pDVar1;

        pDVar1 = operator>>(param_1, (uchar*)param_2);
        pDVar1 = operator>>(pDVar1, (bitset*)&param_2->field_8);
        pDVar1 = operator>>(pDVar1, (uint*)&param_2[1].field_8);
        operator>>(pDVar1, (ushort*)&param_2[1].field_12);
        return param_1;
    }

} // namespace jag
