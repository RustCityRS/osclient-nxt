// libs/core/utils/DataSerialise.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <PacketT<Array<unsigned char, BucketAllocatorEASTL> > >
    class DataSerialise {
    public:
        DataSerialise(PacketT<Array<unsigned char, BucketAllocatorEASTL>>*, bool);
        unsigned long WriteObj<unsigned short>(unsigned short const&);
        ulong Write(void const*, unsigned long);
        unsigned long WriteObj<unsigned int>(unsigned int const&);
        unsigned long WriteObj<unsigned long long>(unsigned long long const&);
        unsigned long WriteObj<unsigned char>(unsigned char const&);
        unsigned long ReadObj<unsigned short>(unsigned short&);
        ulong Read(void*, unsigned long);
        unsigned long ReadObj<unsigned int>(unsigned int&);
        unsigned long ReadObj<unsigned long long>(unsigned long long&);
        unsigned long ReadObj<unsigned char>(unsigned char&);
    };

    // 0x100892590, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::DataSerialise(PacketT<Array<unsigned char, BucketAllocatorEASTL> >*, bool): jumps straight to the base-object constructor

    // 0x10089dfe0, 64 bytes, base-object constructor, inline, placed by class name
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::DataSerialise(PacketT<Array<unsigned char, BucketAllocatorEASTL> >*, bool)
    void DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::DataSerialise(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, PacketT* param_1, bool param_2) {
        *this = (DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>)param_2;
        *(PacketT**)(this + 8) = param_1;
        if (param_1 == (PacketT*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_stream != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/utils/DataSerialise.h", 27,
                "Stream can\'t be null!");
        }
    }

    // 0x10089e0d0, 96 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::WriteObj<unsigned short>(unsigned short const&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned short>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, ushort* param_1) {
        char cVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            uStack_28 = CONCAT26(*param_1, (undefined6)uStack_28);
            param_1 = (ushort*)((long)&uStack_28 + 6);
            DoByteReorder<EndianSwap, unsigned short>(param_1);
        }
        return Write(this, param_1, 2);
    }

    // 0x10089e130, 48 bytes, inline, placed by class name
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::Write(void const*, unsigned long)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::Write(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, void* param_1, ulong param_2) {
        (*(PacketT<Array<unsigned char, BucketAllocatorEASTL>>**)(this + 8))->pArrayBuffer(param_1, 0, param_2);
        return param_2;
    }

    // 0x10089e1a0, 96 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::WriteObj<unsigned int>(unsigned int const&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned int>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, uint* param_1) {
        char cVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            uStack_28 = CONCAT44(*param_1, (undefined4)uStack_28);
            param_1 = (uint*)((long)&uStack_28 + 4);
            DoByteReorder<EndianSwap, int>((int*)param_1);
        }
        return Write(this, param_1, 4);
    }

    // 0x10089e220, 96 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::WriteObj<unsigned long long>(unsigned long long const&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned long long>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, ulonglong* param_1) {
        char cVar1;
        char cVar2;
        ulonglong in_RAX;
        ulonglong local_28;

        local_28 = in_RAX;
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            local_28 = *param_1;
            param_1 = &local_28;
            DoByteReorder<EndianSwap, long long>((longlong*)param_1);
        }
        return Write(this, param_1, 8);
    }

    // 0x10089e280, 96 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::WriteObj<unsigned char>(unsigned char const&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::WriteObj<unsigned char>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, uchar* param_1) {
        char cVar2;
        char cVar3;
        undefined4 in_EAX;
        undefined4 in_register_00000004;
        NpcUID* extraout_RDX;
        NpcUID* pNVar4;
        undefined8 uStack_28;

        uStack_28 = CONCAT44(in_register_00000004, in_EAX);
        pNVar4 = (NpcUID*)param_1;
        cVar2 = IsBigEndian();
        cVar3 = ShowSkybox();
        if (cVar2 != cVar3) {
            uStack_28 = CONCAT17(*param_1, (undefined7)uStack_28);
            param_1 = (uchar*)((long)&uStack_28 + 7);
            eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)param_1, pNVar4, extraout_RDX);
        }
        return Write(this, param_1, 1);
    }

    // 0x10089e450, 80 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::ReadObj<unsigned short>(unsigned short&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned short>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, ushort* param_1) {
        char cVar1;
        char cVar2;
        ulong uVar3;

        uVar3 = Read(this, param_1, 2);
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            DoByteReorder<EndianSwap, unsigned short>(param_1);
        }
        return uVar3;
    }

    // 0x10089e4a0, 48 bytes, inline, placed by class name
    // DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::Read(void*, unsigned long)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::Read(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, void* param_1, ulong param_2) {
        (*(PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>**)(this + 8))
            ->gArrayBuffer(param_1, 0, param_2);
        return param_2;
    }

    // 0x10089e4d0, 80 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::ReadObj<unsigned int>(unsigned int&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned int>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, uint* param_1) {
        char cVar1;
        char cVar2;
        ulong uVar3;

        uVar3 = Read(this, param_1, 4);
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            DoByteReorder<EndianSwap, int>((int*)param_1);
        }
        return uVar3;
    }

    // 0x10089e540, 80 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::ReadObj<unsigned long long>(unsigned long long&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned long long>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, ulonglong* param_1) {
        char cVar1;
        char cVar2;
        ulong uVar3;

        uVar3 = Read(this, param_1, 8);
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            DoByteReorder<EndianSwap, long long>((longlong*)param_1);
        }
        return uVar3;
    }

    // 0x10089e590, 80 bytes, inline, placed by class name
    // unsigned long DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::ReadObj<unsigned char>(unsigned char&)
    ulong DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::ReadObj<unsigned char>(
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, uchar* param_1) {
        char cVar1;
        char cVar2;
        ulong uVar3;
        NpcUID* extraout_RDX;

        uVar3 = Read(this, param_1, 1);
        cVar1 = IsBigEndian();
        cVar2 = ShowSkybox();
        if (cVar1 != cVar2) {
            eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)param_1, (NpcUID*)param_1, extraout_RDX);
        }
        return uVar3;
    }

} // namespace jag
