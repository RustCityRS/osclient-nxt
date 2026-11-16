// libs/oldscape/jagex3/dash3d/AnimBase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class AnimBase {
    public:
        GetNumT() const;
        AnimBase(int, PacketJ<Array<unsigned char, eastl::allocator>>&);
        GetSkeleton() const;
        ~AnimBase();

        // data members, from how the methods use this: 152 bytes
        int field_0;  // offset 0
        uint field_4; // offset 4
        char _unknown_8[144];
    };

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    AnimBase::GetNumT() const;

    // 0x100349640, 784 bytes, base-object constructor, placed by class name
    // AnimBase::AnimBase(int, PacketJ<Array<unsigned char, eastl::allocator> >&)
    void AnimBase::AnimBase(int param_1, PacketJ* param_2) {
        byte bVar2;
        ushort uVar3;
        uint uVar4;
        int iVar5;
        undefined4 uVar6;
        uint* puVar7;
        ulong uVar8;
        vector<unsigned int, eastl::allocator>* pvVar9;
        vector<int, eastl::allocator>* this_00;
        undefined4* puVar10;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_01;
        ulong uVar11;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var12;
        shared_ptr local_78;
        shared_ptr<Skeleton>* local_60;
        uint local_54;
        vector<int, eastl::allocator>* local_50;
        vector<int, eastl::allocator>* local_48;
        vector<int, eastl::allocator>* local_40;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_38;

        p_Var12 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        field_0 = 0;
        field_4 = 0;
        local_48 = (vector<int, eastl::allocator>*)&field_8;
        eastl::vector<int, eastl::allocator>::vector(local_48);
        local_38 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)&field_40;
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::vector(local_38);
        local_60 = (shared_ptr<Skeleton>*)&field_72;
        new (local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var12);
        local_50 = (vector<int, eastl::allocator>*)&field_88;
        eastl::vector<int, eastl::allocator>::vector(local_50);
        local_40 = (vector<int, eastl::allocator>*)&field_120;
        eastl::vector<int, eastl::allocator>::vector(local_40);
        field_0 = param_1;
        bVar2 = param_2->g1();
        field_4 = (uint)bVar2;
        eastl::vector<int, eastl::allocator>::resize((ulong)local_48);
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::resize(local_38, (long)(int)field_4);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_50);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_40);
        if (0 < (int)field_4) {
            uVar11 = 0;
            do {
                uVar4 = param_2->g1();
                puVar7 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_48, uVar11);
                *puVar7 = uVar4 & 255;
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)field_4);
        }
        if (0 < (int)field_4) {
            uVar11 = 0;
            do {
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_38, uVar11);
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                uVar8 =
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_38, uVar11);
                param_2->g1();
                eastl::vector<int, eastl::allocator>::resize(uVar8);
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)field_4);
        }
        if (0 < (int)field_4) {
            uVar11 = 0;
            do {
                uVar8 = 0;
                while (true) {
                    pvVar9 = (vector<unsigned int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_38,
                                                                                                          uVar11);
                    iVar5 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar9);
                    if ((long)iVar5 <= (long)uVar8)
                        break;
                    uVar4 = param_2->g1();
                    this_00 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_38,
                                                                                                          uVar11);
                    puVar7 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_00, uVar8);
                    *puVar7 = uVar4 & 255;
                    puVar7 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        local_50, (ulong)((uint)uVar11 & 16777215) * 256 + uVar8);
                    *puVar7 = uVar4 & 255;
                    uVar8 = uVar8 + 1;
                }
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)((AnimBase*)this)->field_4);
        }
        if (0 < (int)((AnimBase*)this)->field_4) {
            uVar11 = 0;
            do {
                pvVar9 = (vector<unsigned int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_38, uVar11);
                uVar6 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar9);
                puVar10 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_40, uVar11);
                *puVar10 = uVar6;
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)((AnimBase*)this)->field_4);
        }
        uVar11 = param_2->size();
        this_01 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)param_2->GetDataArrayPtr();
        uVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (uVar11 < uVar8) {
            uVar3 = param_2->g2();
            local_54 = (uint)uVar3;
            if (uVar3 != 0) {
                make_shared<Skeleton, PacketJ<Array<unsigned char, eastl::allocator>>&, int&>((jag*)&local_78, param_2,
                                                                                              (int*)&local_54);
                shared_ptr<Skeleton>::operator=(local_60, &local_78);
                local_78.~shared_ptr();
            }
        }
    }

    // 0x100349b00, 16 bytes, complete-object constructor, placed by class name
    // AnimBase::AnimBase(int, PacketJ<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10034edf0, 32 bytes, inline, placed by class name
    // AnimBase::GetSkeleton() const
    AnimBase* AnimBase::GetSkeleton() {
        long in_RSI;

        new (this) shared_ptr<Decor>((shared_ptr*)(in_RSI + 72));
        return this;
    }

    // 0x1003773f0, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimBase::~AnimBase(): jumps straight to the base-object destructor

    // 0x100377400, 64 bytes, base-object destructor, inline, placed by class name
    // AnimBase::~AnimBase()
    void AnimBase::~AnimBase() {
        (&field_120)->~vector();
        (&field_88)->~vector();
        (&field_72)->~shared_ptr();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003499f0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Skeleton>::type make_shared<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int&>(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int&)
    jag* jag::make_shared<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int&>(
        PacketJ* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Skeleton* local_38[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&,
                              int&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Skeleton>, int, oldscape::dash3d::Skeleton*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
