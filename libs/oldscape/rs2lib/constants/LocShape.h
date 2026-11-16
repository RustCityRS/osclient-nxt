// libs/oldscape/rs2lib/constants/LocShape.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1001138b0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool, shared_ptr<oldscape::dash3d::ModelSource>&, int&>(int&, int&&, int&&, int&, int&, int&, int&, bool&&, shared_ptr<oldscape::dash3d::ModelSource>&, int&)
    jag* jag::make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                          shared_ptr<oldscape::dash3d::ModelSource>&, int&>(int* param_1, int* param_2, int* param_3,
                                                                            int* param_4, int* param_5, int* param_6,
                                                                            int* param_7, bool* param_8,
                                                                            shared_ptr* param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1001139d0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool, shared_ptr<oldscape::dash3d::ModelSource>&, int&>(int&, int&&, int&, int&, int&, int&, int&, bool&&, shared_ptr<oldscape::dash3d::ModelSource>&, int&)
    jag* jag::make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                          shared_ptr<oldscape::dash3d::ModelSource>&, int&>(int* param_1, int* param_2, int* param_3,
                                                                            int* param_4, int* param_5, int* param_6,
                                                                            int* param_7, bool* param_8,
                                                                            shared_ptr* param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                        shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100113ab0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool, shared_ptr<oldscape::dash3d::ModelSource>&, int&>(int&&, int&&, int&, int&, int&, int&, int&, bool&&, shared_ptr<oldscape::dash3d::ModelSource>&, int&)
    jag* jag::make_shared<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                          shared_ptr<oldscape::dash3d::ModelSource>&, int&>(int* param_1, int* param_2, int* param_3,
                                                                            int* param_4, int* param_5, int* param_6,
                                                                            int* param_7, bool* param_8,
                                                                            shared_ptr* param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                        shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100113b90, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket3::g4()
    void ShuffledPacket3::g4() {
        g4_alt2();
    }

    // 0x100113ba0, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket2::g2s()
    int ShuffledPacket2::g2s() {
        short sVar1;

        sVar1 = g2s_alt1();
        return (int)sVar1;
    }

    // 0x100113c30, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::MapSpotAnim>::type make_shared<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(int&, int&, int&, int&, int&&, int&, int&)
    jag* make_shared<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(int* param_1, int* param_2,
                                                                                     int* param_3, int* param_4,
                                                                                     int* param_5, int* param_6,
                                                                                     int* param_7) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MapSpotAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::MapSpotAnim>, int, oldscape::MapSpotAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100113db0, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g3s()
    uint PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g3s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        uint uVar1;
        byte bVar2;
        ulong uVar3;
        byte* pbVar4;
        uint uVar5;

        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar3);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        uVar5 = (uint)*pbVar4 << 8 | (uint)bVar2 << 16;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        uVar1 = uVar5 + *pbVar4;
        uVar5 = (*pbVar4 - 16777216) + uVar5;
        if (uVar1 < 8388608) {
            uVar5 = uVar1;
        }
        return uVar5;
    }

    // 0x100113e20, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientProj>::type make_shared<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(int&, int&, int&, int&, int&&, int&&, int&&, int&, int&, int&, int&)
    jag* make_shared<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10, int* param_11) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientProj* local_40[2];

        pvVar1 = (void*)aligned_alloc(224, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                    param_9, param_10, param_11);
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

} // namespace jag

namespace jag::oldscape::constants {
    class LocShape {
    public:
        ToLayer(LocShapeID);
        bool IsWallShape(int);
        bool IsWallDecorShape(int);
        bool IsRoofShape(int);
        bool IsRoofEdgeShape(int);
        bool IsCentrePieceShape(int);
        bool IsGroundDecorShape(int);
        ToLayer(int);
        static /* 56 bytes */ m_shapes; // initialised in its definition
    };

    // 0x1001138a0, 16 bytes, inline, placed by class name and debug map
    // LocShape::ToLayer(LocShapeID)
    undefined1 LocShape::ToLayer(int param_1) {
        return ToLayer(param_1);
    }

} // namespace jag::oldscape::constants
