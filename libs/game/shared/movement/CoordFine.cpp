// libs/game/shared/movement/CoordFine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "CoordFine.h"

namespace jag::game {
    // 0x1001a1d80: the linker folded this into CoordFine::operator=(CoordFine&&), which has identical code
    CoordFine::operator=(CoordFine const&);

    // 0x1006e5890, 144 bytes, base-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(int, float, float, float)
    void CoordFine::CoordFine(int param_1, float param_2, float param_3, float param_4) {
        float* pfVar1;
        float* pfVar2;

        field_0 = 4294967295;
        pfVar2 = &field_4;
        new (pfVar2) math::Vector3T<int>();
        field_0 = param_1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 0);
        *pfVar1 = param_2;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 1);
        *pfVar1 = param_3;
        pfVar2 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar2, 2);
        *pfVar2 = param_4;
    }

    // 0x1006e5920, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(int, float, float, float): jumps straight to the base-object constructor

    // 0x1006e5930, 128 bytes, base-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(int, float, float)
    void CoordFine::CoordFine(int param_1, float param_2, float param_3) {
        float* pfVar1;
        undefined4* puVar2;
        float* pfVar3;

        field_0 = 4294967295;
        pfVar3 = &field_4;
        new (pfVar3) math::Vector3T<int>();
        field_0 = param_1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar3, 0);
        *pfVar1 = param_2;
        puVar2 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar3, 1);
        *puVar2 = 0;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar3, 2);
        *pfVar3 = param_3;
    }

    // 0x1006e59b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(int, float, float): jumps straight to the base-object constructor

    // 0x1006e59c0, 64 bytes, base-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(int, math::Vector3T<float> const&)
    void CoordFine::CoordFine(int param_1, Vector3T* param_2) {
        field_0 = 4294967295;
        new (&field_4) math::Vector3T<int>();
        field_0 = param_1;
        (&field_4, param_2)->SetXYZ();
    }

    // 0x1006e5a00, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(int, math::Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1006e5a10, 208 bytes, base-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(CoordGrid const&, bool)
    void CoordFine::CoordFine(CoordGrid* param_1, bool param_2) {
        uint uVar1;
        vector* pvVar2;
        float* pfVar3;
        float* pfVar4;
        undefined3 in_register_00000011;

        field_0 = 4294967295;
        pfVar4 = &field_4;
        new (pfVar4) math::Vector3T<int>();
        field_0 = param_1->field_0;
        uVar1 = param_1->field_4;
        pvVar2 = pfVar4->SSOBeginPtr(param_1);
        *(float*)pvVar2 = (float)uVar1 * 128.0;
        uVar1 = param_1->field_8;
        pfVar3 = (float*)pfVar4->second();
        *pfVar3 = (float)uVar1 * 128.0;
        if (CONCAT31(in_register_00000011, param_2) != 0) {
            pvVar2 = pfVar4->SSOBeginPtr(param_1);
            *(float*)pvVar2 = *(float*)pvVar2 + 64.0;
            pfVar4 = (float*)pfVar4->second();
            *pfVar4 = *pfVar4 + 64.0;
        }
    }

    // 0x1006e5ae0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(CoordGrid const&, bool): jumps straight to the base-object constructor

    // 0x1006e5af0, 192 bytes, base-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(PacketT<Array<unsigned char, eastl::allocator> >&)
    void CoordFine::CoordFine(PacketT* param_1) {
        byte bVar1;
        int iVar2;
        float* pfVar3;
        float* pfVar4;

        field_0 = 4294967295;
        pfVar4 = &field_4;
        new (pfVar4) math::Vector3T<int>();
        bVar1 = param_1->g1();
        field_0 = (uint)bVar1;
        iVar2 = param_1->g4s();
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 0);
        *pfVar3 = (float)iVar2;
        iVar2 = param_1->g4s();
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 1);
        *pfVar3 = (float)iVar2;
        iVar2 = param_1->g4s();
        pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 2);
        *pfVar4 = (float)iVar2;
    }

    // 0x1006e5bb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1006e5bc0, 192 bytes, base-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void CoordFine::CoordFine(PacketT* param_1) {
        byte bVar1;
        int iVar2;
        float* pfVar3;
        float* pfVar4;

        field_0 = 4294967295;
        pfVar4 = &field_4;
        new (pfVar4) math::Vector3T<int>();
        bVar1 = param_1->g1();
        field_0 = (uint)bVar1;
        iVar2 = param_1->g4s();
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 0);
        *pfVar3 = (float)iVar2;
        iVar2 = param_1->g4s();
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 1);
        *pfVar3 = (float)iVar2;
        iVar2 = param_1->g4s();
        pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)pfVar4, 2);
        *pfVar4 = (float)iVar2;
    }

    // 0x1006e5c80, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordFine::CoordFine(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x1006e5c90, 112 bytes, placed by class name and debug map
    // CoordFine::Serialise(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void CoordFine::Serialise(PacketT* param_1) {
        float* pfVar1;
        float* this_00;

        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_0);
        this_00 = &field_4;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<float>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *pfVar1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<float>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *pfVar1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<float>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *pfVar1);
    }

    // 0x1006e5d10, 112 bytes, placed by class name and debug map
    // CoordFine::Serialise(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void CoordFine::Serialise(PacketT* param_1) {
        float* pfVar1;
        float* this_00;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1);
        this_00 = &field_4;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<float>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *pfVar1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<float>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *pfVar1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<float>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *pfVar1);
    }

    // 0x1006e5d90, 80 bytes, placed by class name and debug map
    // CoordFine::operator<(CoordFine const&) const
    /* CoordFine::TEMPNAMEPLACEHOLDERVALUE(CoordFine const&) const */

    bool CoordFine::operator<(CoordFine* param_1) {
        bool bVar1;

        bVar1 = true;
        if ((int)param_1->field_0 <= (int)field_0) {
            if ((int)field_0 <= (int)param_1->field_0) {
                if (field_4 < param_1->field_4) {
                    return true;
                }
                if (field_4 <= param_1->field_4) {
                    if (field_8 < param_1->field_8) {
                        return true;
                    }
                    if (field_8 <= param_1->field_8) {
                        return field_12 < param_1->field_12;
                    }
                }
            }
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1006e5de0, 1152 bytes, placed by class name and debug map
    // CoordFine::FromString(StringView)
    ulong CoordFine::FromString(StringView param_1) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        ulong uVar4;
        fixed_string<char, 4096, true, eastl::allocator>* this_00;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        ShuffledPacketFactory* this_01;
        StringView SVar5;
        StringView SVar6;
        StringView local_1d0;
        StringView local_1c0;
        CoordGrid local_1b0;
        StringView local_1a0;
        StringView local_190;
        fixed_string local_178[56];
        CoordFine local_140[13];
        long local_38;

        this_01 = (ShuffledPacketFactory*)param_1.field_0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_1a0) StringView(this_01);
        new (&local_190) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (&local_1d0) StringView("(");
        SVar5.field_8 = extraout_RDX;
        SVar5.field_0 = (ulong)&local_1d0;
        lVar2 = this_01->find(SVar5);
        if (lVar2 != -1) {
            if (lVar2 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("translationOffset > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordFine.cpp",
                          119, (char*)0);
            }
            pcVar3 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this_01, lVar2 + 1U);
            if (*pcVar3 != '+') {
                /* WARNING: Subroutine does not return */
                LogAssert("data[translationOffset + 1] == \'+\'",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordFine.cpp",
                          120, (char*)0);
            }
            local_140->substr((ulong)&local_1a0, 0);
            StringView::operator=(&local_1a0, (StringView*)local_140);
            ShuffledPacketFactory::p2_alt2(this_01);
            local_140->substr((ulong)this_01, lVar2 + 1U);
            StringView::operator=(&local_190, (StringView*)local_140);
        }
        new (&local_1b0) game::CoordGrid();
        new (&local_1c0) StringView(&local_1a0);
        SVar6.field_8 = extraout_RDX_00;
        SVar6.field_0 = (ulong)&local_1c0;
        cVar1 = local_1b0.FromString(SVar6);
        if (cVar1 == '\0') {
            uVar4 = 0;
        } else {
            CoordFine(local_140, &local_1b0, false);
            operator=((CoordFine*)this, local_140);
            cVar1 = local_190.empty();
            uVar4 = CONCAT71(param_1.field_0._1_7_, 1);
            if (cVar1 == '\0') {
                new (local_140) eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true,
                                                    eastl::allocator>();
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true,
                                             eastl::allocator>,
                         StringView>((fixed_vector*)local_140, &local_190, ",", -1);
                lVar2 = local_140->size();
                if (lVar2 == 3) {
                    uVar4 = eastl::vector<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                          eastl::fixed_vector_allocator<56ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<56ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)local_140,
                        0);
                    eastl::vector<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<56ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<56ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)local_140,
                        0);
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::fixed_string<char, 16, true, eastl::allocator>::substr((ulong)local_178, uVar4);
                    this_00 = (fixed_string<char, 4096, true, eastl::allocator>*)
                        eastl::vector<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                      eastl::fixed_vector_allocator<56ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                           eastl::fixed_vector_allocator<56ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_140,
                                   0);
                    eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(this_00, local_178);
                    /* WARNING: Subroutine does not return */
                    local_178->~fixed_string();
                }
                /* WARNING: Subroutine does not return */
                LogAssert("translationStrs.size() == 3",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordFine.cpp",
                          141, (char*)0);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::game
