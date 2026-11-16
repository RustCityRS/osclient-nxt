// libs/core/utils/DataSerialise.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <PacketT<Array<unsigned char>> >
    class DataSerialise {
    public:
        DataSerialise(PacketT<Array<unsigned char>>* arg1, bool arg2);
        unsigned long WriteObj<unsigned short>(const unsigned short& arg1);
        unsigned long Write(const void* arg1, unsigned long arg2);
        unsigned long WriteObj<unsigned int>(const unsigned int& arg1);
        unsigned long WriteObj<unsigned long long>(const unsigned long long& arg1);
        unsigned long WriteObj<unsigned char>(const unsigned char& arg1);
        unsigned long ReadObj<unsigned short>(unsigned short& arg1);
        unsigned long Read(void* arg1, unsigned long arg2);
        unsigned long ReadObj<unsigned int>(unsigned int& arg1);
        unsigned long ReadObj<unsigned long long>(unsigned long long& arg1);
        unsigned long ReadObj<unsigned char>(unsigned char& arg1);
    };

    // 0x10089dfe0
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::DataSerialise(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* arg1, bool arg2) {
        *this = (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>)arg2;
        *(PacketT<Array<unsigned char, BucketAllocatorEASTL> _>**)(this + 8) = arg1;
        if (arg1 == nullptr) {
            LogAssert(
                "m_stream != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/utils/DataSerialise.h", 27,
                "Stream can\'t be null!");
        }
    }

    // 0x10089e0d0
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned short>(
        const unsigned short& arg1) {
        uint64_t in_RAX;

        uint64_t uStack_28 = in_RAX;
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            uStack_28 = (((uint64_t)(arg1) << 48) | (uint64_t)((uint64_t)uStack_28));
            arg1 = (unsigned short*)((long)&uStack_28 + 6);
            DoByteReorder<EndianSwap, unsigned short>((short*)arg1);
        }
        return Write(this, arg1, 2);
    }

    // 0x10089e130
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::Write(const void* arg1,
                                                                                            unsigned long arg2) {
        (*(PacketT<Array<unsigned char, BucketAllocatorEASTL>>**)(this + 8))->pArrayBuffer(arg1, 0, arg2);
        return arg2;
    }

    // 0x10089e1a0
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned int>(
        const unsigned int& arg1) {
        uint64_t in_RAX;

        uint64_t uStack_28 = in_RAX;
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            uStack_28 = (((uint64_t)(arg1) << 32) | (uint32_t)((uint32_t)uStack_28));
            arg1 = (unsigned int*)((long)&uStack_28 + 4);
            DoByteReorder<EndianSwap, int>(arg1);
        }
        return Write(this, arg1, 4);
    }

    // 0x10089e220
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned long long>(
        const unsigned long long& arg1) {
        unsigned long long in_RAX;

        unsigned long long local_28 = in_RAX;
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            local_28 = arg1;
            arg1 = &local_28;
            DoByteReorder<EndianSwap, long long>(arg1);
        }
        return Write(this, arg1, 8);
    }

    // 0x10089e280
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned char>(
        const unsigned char& arg1) {
        uint32_t in_EAX;
        uint32_t in_register_00000004;

        uint64_t uStack_28 = (((uint64_t)in_register_00000004 << 32) | (uint32_t)in_EAX);
        bool cVar2 = IsBigEndian();
        char cVar3 = ShowSkybox();
        if (cVar2 != cVar3) {
            uStack_28 = (((uint64_t)(arg1) << 56) | (uint64_t)((uint64_t)uStack_28));
            arg1 = (unsigned char*)((long)&uStack_28 + 7);
            arg1.destruct<oldscape::highlight::NpcUID*>();
        }
        return Write(this, arg1, 1);
    }

    // 0x10089e450
    unsigned long
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned short>(unsigned short& arg1) {
        unsigned long uVar3 = Read(this, arg1, 2);
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            DoByteReorder<EndianSwap, unsigned short>((short*)arg1);
        }
        return uVar3;
    }

    // 0x10089e4a0
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::Read(void* arg1,
                                                                                           unsigned long arg2) {
        (*(PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>**)(this + 8))
            ->gArrayBuffer(arg1, 0, arg2);
        return arg2;
    }

    // 0x10089e4d0
    unsigned long
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned int>(unsigned int& arg1) {
        unsigned long uVar3 = Read(this, arg1, 4);
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            DoByteReorder<EndianSwap, int>(arg1);
        }
        return uVar3;
    }

    // 0x10089e540
    unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned long long>(
        unsigned long long& arg1) {
        unsigned long uVar3 = Read(this, arg1, 8);
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            DoByteReorder<EndianSwap, long long>(arg1);
        }
        return uVar3;
    }

    // 0x10089e590
    unsigned long
    DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned char>(unsigned char& arg1) {
        unsigned long uVar3 = Read(this, arg1, 1);
        bool cVar1 = IsBigEndian();
        char cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            arg1.destruct<oldscape::highlight::NpcUID*>();
        }
        return uVar3;
    }

} // namespace jag
