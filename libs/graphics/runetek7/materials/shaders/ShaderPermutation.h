// libs/graphics/runetek7/materials/shaders/ShaderPermutation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ShaderPermutation {
    public:
        ShaderPermutation();

        uint8_t _unknown_0[16];
    };

    // 0x10089dfd0
    ShaderPermutation::ShaderPermutation() {
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008925a0
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise,
        const graphics::ShaderPermutation& shaderPermutation) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> _> _>* pDVar1 = dataSerialise
                                                                                         << shaderPermutation;
        pDVar1 = *pDVar1 << shaderPermutation.field_8;
        pDVar1 = *pDVar1 << shaderPermutation[1].field_8;
        *pDVar1 << shaderPermutation[1].field_12;
        return dataSerialise;
    }

    // 0x100892660
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& operator>>
        <PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
            DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise,
            graphics::ShaderPermutation& shaderPermutation) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> _> _>* pDVar1 =
            dataSerialise >> shaderPermutation;
        pDVar1 = *pDVar1 >> shaderPermutation.field_8;
        pDVar1 = *pDVar1 >> shaderPermutation[1].field_8;
        *pDVar1 >> shaderPermutation[1].field_12;
        return dataSerialise;
    }

} // namespace jag
