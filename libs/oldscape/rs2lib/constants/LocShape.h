// libs/oldscape/rs2lib/constants/LocShape.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1001138b0
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        int& arg1, int&& arg2, int&& arg3, int& arg4, int& arg5, int& arg6, int& arg7, bool&& arg8,
        shared_ptr<oldscape::dash3d::ModelSource>& modelSource, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, (int*)arg8, (bool*)modelSource,
                (shared_ptr<oldscape::dash3d::ModelSource>*)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x1001139d0
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        int& arg1, int&& arg2, int& arg3, int& arg4, int& arg5, int& arg6, int& arg7, bool&& arg8,
        shared_ptr<oldscape::dash3d::ModelSource>& modelSource, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                        shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, (int*)arg8, (bool*)modelSource,
                (shared_ptr<oldscape::dash3d::ModelSource>*)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100113ab0
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        int&& arg1, int&& arg2, int& arg3, int& arg4, int& arg5, int& arg6, int& arg7, bool&& arg8,
        shared_ptr<oldscape::dash3d::ModelSource>& modelSource, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                        shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, (int*)arg8, (bool*)modelSource,
                (shared_ptr<oldscape::dash3d::ModelSource>*)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100113b90
    void ShuffledPacket3::g4() {
        g4_alt2();
    }

    // 0x100113ba0
    int ShuffledPacket2::g2s() {
        short sVar1 = g2s_alt1();
        return (int)sVar1;
    }

    // 0x100113c30
    shared_ptr_if_not_array<oldscape::MapSpotAnim>::type
    make_shared<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(int& arg1, int& arg2, int& arg3,
                                                                                int& arg4, int&& arg5, int& arg6,
                                                                                int& arg7) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000010;
        int local_44;
        MapSpotAnim* local_40[2];

        auto arg1_00 = aligned_alloc(112, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, in_stack_00000010);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::MapSpotAnim>, int, oldscape::MapSpotAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100113db0
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g3s() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 3;
        uint8_t* pbVar3 = (uint8_t*)(*this)[arg1];
        uint8_t bVar2 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        unsigned int uVar4 = (unsigned int)*pbVar3 << 8 | (unsigned int)bVar2 << 16;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        unsigned int uVar1 = uVar4 + *pbVar3;
        uVar4 = (*pbVar3 - 16777216) + uVar4;
        if (uVar1 < 8388608) {
            uVar4 = uVar1;
        }
        return uVar4;
    }

    // 0x100113e20
    shared_ptr_if_not_array<oldscape::ClientProj>::type
    make_shared<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
        int& arg1, int& arg2, int& arg3, int& arg4, int&& arg5, int&& arg6, int&& arg7, int& arg8, int& arg9,
        int& arg10, int& arg11) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000030;
        int local_44;
        ClientProj* local_40[2];

        auto arg1_00 = aligned_alloc(224, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
                    (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
                    in_stack_00000030);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientProj>, int, oldscape::ClientProj*&>(arg1_00, &local_44,
                                                                                                     local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::constants {
    class LocShape {
    public:
        uint8_t ToLayer(LocShapeID locShapeID);
        bool IsWallShape(int arg1);
        bool IsWallDecorShape(int arg1);
        bool IsRoofShape(int arg1);
        bool IsRoofEdgeShape(int arg1);
        bool IsCentrePieceShape(int arg1);
        bool IsGroundDecorShape(int arg1);
        uint8_t ToLayer(int arg1);
        static int32_t m_shapes[14]; // initialised in its definition

        uint8_t _unknown_0[1];
    };

    // 0x1001138a0
    uint8_t LocShape::ToLayer(LocShapeID locShapeID) {
        return ToLayer(locShapeID);
    }

} // namespace jag::oldscape::constants
