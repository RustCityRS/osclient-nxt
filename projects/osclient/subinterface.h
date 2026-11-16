// projects/osclient/subinterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1001170c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::VarContainerSparse>::type make_shared<game::VarContainerSparse>()
    jag* make_shared<game::VarContainerSparse>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        VarContainerSparse* local_28[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::VarContainerSparse>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::VarContainerSparse>, int, game::VarContainerSparse*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100117430, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientObj>::type make_shared<oldscape::ClientObj>()
    jag* make_shared<oldscape::ClientObj>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ClientObj* local_28[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::ClientObj>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientObj>, int, oldscape::ClientObj*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100117580, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket3::g3s()
    void ShuffledPacket3::g3s() {
        g3s_alt2();
    }

    // 0x100117590, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket2::g3s()
    void ShuffledPacket2::g3s() {
        g3s_alt1();
    }

    // 0x1001175a0, 240 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientProj>::type make_shared<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(int&, int&, int&, int&, int&&, int&&, int&&, int&, int&, int&, int&, int&)
    jag* make_shared<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10, int* param_11, int* param_12) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientProj* local_40[2];

        pvVar1 = (void*)aligned_alloc(224, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&,
                              int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6,
                                    param_7, param_8, param_9, param_10, param_11, param_12);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientProj>, int, oldscape::ClientProj*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100119b30, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientNpc>::type make_shared<oldscape::ClientNpc, int&>(int&)
    jag* make_shared<oldscape::ClientNpc, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ClientNpc* local_30[2];

        pvVar1 = (void*)aligned_alloc(1120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::ClientNpc, int&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientNpc>, int, oldscape::ClientNpc*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10011a760, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gSmart2or4s()
    uint PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart2or4s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ushort uVar1;
        uint uVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            uVar2 = g4(this);
            uVar2 = uVar2 & 2147483647;
        } else {
            uVar1 = g2(this);
            uVar2 = 4294967295;
            if (uVar1 != 32767) {
                uVar2 = (uint)uVar1;
            }
        }
        return uVar2;
    }

    // 0x10011a7f0, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gSmart1Or2Minus1()
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart1Or2Minus1(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        short sVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 32767;
        } else {
            sVar2 = g1(this) - 1;
        }
        return (int)sVar2;
    }

} // namespace jag

namespace jag::oldscape {
    class SubInterface {
    public:
        SubInterface();
    };

    // 0x100114a30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SubInterface::SubInterface(): jumps straight to the base-object constructor

    // 0x1001303d0, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SubInterface::SubInterface()
    /* game::EnvironmentOverrideParam<game::ColourGradingEnvironmentOverrides::ColourRemap>::EnvironmentOverrideParam()
    */

    void
    game::EnvironmentOverrideParam<game::ColourGradingEnvironmentOverrides::ColourRemap>::EnvironmentOverrideParam() {
        this[8] = (EnvironmentOverrideParam<game::ColourGradingEnvironmentOverrides::ColourRemap>)0;
    }

} // namespace jag::oldscape
