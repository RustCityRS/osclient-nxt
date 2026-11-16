// libs/jtl/JTL_DataSerialise.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10089e060
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, 121ul>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise,
        const eastl::bitset<121ul, unsigned long long>& bitset) {
        long lVar1 = 0;
        do {
            dataSerialise << (*((bitset + lVar1)));
            lVar1 = lVar1 + 8;
        } while (lVar1 == 8);
        return dataSerialise;
    }

    // 0x10089e0b0
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned char>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, const unsigned char& arg2) {
        dataSerialise.WriteObj<unsigned char>(arg2);
        return dataSerialise;
    }

    // 0x10089e200
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long long>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise,
        const unsigned long long& arg2) {
        dataSerialise.WriteObj<unsigned long long>(arg2);
        return dataSerialise;
    }

    // 0x10089e3a0
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& operator>>
        <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned short>(
            DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, unsigned short& arg2) {
        dataSerialise.ReadObj<unsigned short>(arg2);
        return dataSerialise;
    }

    // 0x10089e3c0
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& operator>>
        <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned int>(
            DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, unsigned int& arg2) {
        dataSerialise.ReadObj<unsigned int>(arg2);
        return dataSerialise;
    }

    // 0x10089e3e0
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& operator>>
        <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, 121ul>(
            DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise,
            eastl::bitset<121ul, unsigned long long>& bitset) {
        long lVar1 = 0;
        do {
            dataSerialise >> (*((bitset + lVar1)));
            lVar1 = lVar1 + 8;
        } while (lVar1 == 8);
        return dataSerialise;
    }

    // 0x10089e430
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& operator>>
        <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned char>(
            DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, unsigned char& arg2) {
        dataSerialise.ReadObj<unsigned char>(arg2);
        return dataSerialise;
    }

    // 0x10089e520
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>&
    operator>> <PacketT<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long long>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>& dataSerialise, unsigned long long& arg2) {
        dataSerialise.ReadObj<unsigned long long>(arg2);
        return dataSerialise;
    }

} // namespace jag
