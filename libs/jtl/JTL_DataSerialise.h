// libs/jtl/JTL_DataSerialise.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10089e060, 80 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL> >, 121ul>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, eastl::bitset<121ul, unsigned long long> const&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, eastl::bitset<121ul, unsigned long long> const&) */

    DataSerialise* operator<<(DataSerialise* param_1, bitset* param_2) {
        long lVar1;

        lVar1 = 0;
        do {
            operator<<(param_1, (ulonglong*)(param_2 + lVar1));
            lVar1 = lVar1 + 8;
        } while (lVar1 == 8);
        return param_1;
    }

    // 0x10089e0b0, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned char>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned char const&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned char const&) */

    DataSerialise* operator<<(DataSerialise* param_1, uchar* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned char>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

    // 0x10089e200, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator<< <PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned long long>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned long long const&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned long long const&) */

    DataSerialise* operator<<(DataSerialise* param_1, ulonglong* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned long long>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

    // 0x10089e3a0, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator>><PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned short>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned short&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned short&) */

    DataSerialise* operator>>(DataSerialise* param_1, ushort* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned short>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

    // 0x10089e3c0, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator>><PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned int>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned int&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned int&) */

    DataSerialise* operator>>(DataSerialise* param_1, uint* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned int>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

    // 0x10089e3e0, 80 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator>><PacketT<Array<unsigned char, BucketAllocatorEASTL> >, 121ul>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, eastl::bitset<121ul, unsigned long long>&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, eastl::bitset<121ul, unsigned long long>&) */

    DataSerialise* operator>>(DataSerialise* param_1, bitset* param_2) {
        long lVar1;

        lVar1 = 0;
        do {
            operator>>(param_1, (ulonglong*)(param_2 + lVar1));
            lVar1 = lVar1 + 8;
        } while (lVar1 == 8);
        return param_1;
    }

    // 0x10089e430, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator>><PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned char>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned char&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned char&) */

    DataSerialise* operator>>(DataSerialise* param_1, uchar* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned char>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

    // 0x10089e520, 32 bytes, inline, placed by debug map only (low confidence)
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >& operator>><PacketT<Array<unsigned char, BucketAllocatorEASTL> >, unsigned long long>(DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&, unsigned long long&)
    /* DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >&
   TEMPNAMEPLACEHOLDERVALUE(DataSerialise<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >&, unsigned long long&) */

    DataSerialise* operator>>(DataSerialise* param_1, ulonglong* param_2) {
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned long long>(
            (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, param_2);
        return param_1;
    }

} // namespace jag
