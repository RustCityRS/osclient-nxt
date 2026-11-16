// libs/graphics/runetek7/model/GeometryBatchCombineHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x100372f70, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelRSevenLit* placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit&>(void*, oldscape::dash3d::ModelRSevenLit&)
    /* oldscape::dash3d::ModelRSevenLit* placement_new<oldscape::dash3d::ModelRSevenLit,
   oldscape::dash3d::ModelRSevenLit const&>(void*, oldscape::dash3d::ModelRSevenLit
   const&) */

    ModelRSevenLit* jag::placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit_const&>(
        void* param_1, ModelRSevenLit* param_2) {
        oldscape::dash3d::ModelRSevenLit::ModelRSevenLit(param_1, param_2);
        return param_1;
    }

    // 0x100372f90, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenLit>* placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int, oldscape::dash3d::ModelRSevenLit*&>(void*, int&&, oldscape::dash3d::ModelRSevenLit*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int, oldscape::dash3d::ModelRSevenLit*&>(
        void* param_1, int* param_2, ModelRSevenLit** param_3) {
        ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100373060, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelRSevenLit*): jumps straight to the base-object constructor

    // 0x100373070, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelRSevenLit*)
    void ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::ref_counter_shared(ulong param_1,
                                                                                  ModelRSevenLit* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7738 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModelRSevenLit**)(this + 24) = param_2;
    }

    // 0x1003730b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::DeleteData()
    /* ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::DeleteData() */

    void ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ModelRSevenLit();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 104;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100374110, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelLitImpl>* placement_new<ref_counter_shared<oldscape::dash3d::ModelLitImpl>, int, oldscape::dash3d::ModelLitImpl*&>(void*, int&&, oldscape::dash3d::ModelLitImpl*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::ModelLitImpl>, int, oldscape::dash3d::ModelLitImpl*&>(
        void* param_1, int* param_2, ModelLitImpl** param_3) {
        ref_counter_shared<oldscape::dash3d::ModelLitImpl>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1003747b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelLitImpl>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelLitImpl*): jumps straight to the base-object constructor

    // 0x1003747c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelLitImpl>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelLitImpl*)
    void ref_counter_shared<oldscape::dash3d::ModelLitImpl>::ref_counter_shared(ulong param_1, ModelLitImpl* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7728 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModelLitImpl**)(this + 24) = param_2;
    }

    // 0x100374800, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelLitImpl>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::ModelLitImpl>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ModelLitImpl();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 768;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100374c40, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::OperationBuffer::OperationImpl* placement_new<oldscape::dash3d::OperationBuffer::OperationImpl>(void*)
    OperationImpl* placement_new<oldscape::dash3d::OperationBuffer::OperationImpl>(void* param_1) {
        oldscape::dash3d::OperationBuffer::OperationImpl::OperationImpl(param_1);
        return param_1;
    }

    // 0x100374c60, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>* placement_new<ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>, int, oldscape::dash3d::OperationBuffer::OperationImpl*&>(void*, int&&, oldscape::dash3d::OperationBuffer::OperationImpl*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>, int,
                       oldscape::dash3d::OperationBuffer::OperationImpl*&>(void* param_1, int* param_2,
                                                                           OperationImpl** param_3) {
        ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100374ee0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::ref_counter_shared(unsigned long, oldscape::dash3d::OperationBuffer::OperationImpl*): jumps straight to the base-object constructor

    // 0x100374ef0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::ref_counter_shared(unsigned long, oldscape::dash3d::OperationBuffer::OperationImpl*)
    void
    ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::ref_counter_shared(ulong param_1,
                                                                                             OperationImpl* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7748 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OperationImpl**)(this + 24) = param_2;
    }

    // 0x100374f30, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~OperationImpl();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 224;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100375650, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(void*, int&, int&&, int&, int&, int&, int&, int&, bool&, decltype(nullptr)&&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&,
                                      decltype(nullptr), int&>(void* param_1, int* param_2, int* param_3, int* param_4,
                                                               int* param_5, int* param_6, int* param_7, int* param_8,
                                                               bool* param_9, _func_decltype_nullptr** param_10,
                                                               int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100375710, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(void*, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr)&&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&,
                                      decltype(nullptr), int&>(void* param_1, int* param_2, int* param_3, int* param_4,
                                                               int* param_5, int* param_6, int* param_7, int* param_8,
                                                               bool* param_9, _func_decltype_nullptr** param_10,
                                                               int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x1003757d0, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(void*, int&, int&&, int&&, int&, int&, int&, int&, bool&, decltype(nullptr)&&, int&)
    ClientLocAnim*
    jag::placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        bool* param_9, _func_decltype_nullptr** param_10, int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100375890, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(void*, int&, int&&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr)&&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&,
                                      decltype(nullptr), int&>(void* param_1, int* param_2, int* param_3, int* param_4,
                                                               int* param_5, int* param_6, int* param_7, int* param_8,
                                                               bool* param_9, _func_decltype_nullptr** param_10,
                                                               int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100375950, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(void*, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr)&&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&,
                                      decltype(nullptr), int&>(void* param_1, int* param_2, int* param_3, int* param_4,
                                                               int* param_5, int* param_6, int* param_7, int* param_8,
                                                               bool* param_9, _func_decltype_nullptr** param_10,
                                                               int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100375a10, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr), int&>(void*, int&, int&&, int&&, int&, int&, int&, int const&, bool&, decltype(nullptr)&&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&,
                                      decltype(nullptr), int&>(void* param_1, int* param_2, int* param_3, int* param_4,
                                                               int* param_5, int* param_6, int* param_7, int* param_8,
                                                               bool* param_9, _func_decltype_nullptr** param_10,
                                                               int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100375b50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Bit::Bit(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x100375b70, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Bit::Bit(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::Bit(PacketT* param_1) {
        *(PacketT**)this = param_1;
        *(int*)(this + 8) = *(int*)(param_1 + 24) << 3;
    }

    // 0x100376730, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Skeleton* placement_new<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int&>(void*, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int&)
    Skeleton*
    jag::placement_new<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int&>(
        void* param_1, PacketJ* param_2, int* param_3) {
        oldscape::dash3d::Skeleton::Skeleton(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100376750, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Skeleton>* placement_new<ref_counter_shared<oldscape::dash3d::Skeleton>, int, oldscape::dash3d::Skeleton*&>(void*, int&&, oldscape::dash3d::Skeleton*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::Skeleton>, int, oldscape::dash3d::Skeleton*&>(
        void* param_1, int* param_2, Skeleton** param_3) {
        ref_counter_shared<oldscape::dash3d::Skeleton>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100376770, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Skeleton>::ref_counter_shared(unsigned long, oldscape::dash3d::Skeleton*): jumps straight to the base-object constructor

    // 0x100376780, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Skeleton>::ref_counter_shared(unsigned long, oldscape::dash3d::Skeleton*)
    void ref_counter_shared<oldscape::dash3d::Skeleton>::ref_counter_shared(ulong param_1, Skeleton* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Skeleton**)(this + 24) = param_2;
    }

    // 0x1003767c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Skeleton>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::Skeleton>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Skeleton();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x100372f40, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ModelRSevenUnlit::~ModelRSevenUnlit()
    /* ModelRSevenLit::~ModelRSevenLit() */

    void ModelRSevenLit::~ModelRSevenLit() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_24->~ModelRSevenCommon();
        eastl::destruct<highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x100372f40: the linker folded this into ModelRSevenUnlit::~ModelRSevenUnlit(), which has identical code
    ModelRSevenLit::~ModelRSevenLit();

    // 0x100372fb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenLit::ModelRSevenLit(ModelRSevenLit const&): jumps straight to the base-object constructor

    // 0x100372fc0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenLit::ModelRSevenLit(ModelRSevenLit const&)
    void ModelRSevenLit::ModelRSevenLit(ModelRSevenLit* param_1) {
        new (this) ModelLit(param_1);
        new (field_24, (ModelRSevenCommon*)param_1->field_24) ModelRSevenCommon();
        field_0 = &PTR__ModelRSevenLit_100efbce8;
        m_radiusCylinder = param_1->m_radiusCylinder;
    }

    // 0x100373160, 304 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ModelLitImpl::~ModelLitImpl()
    void ModelLitImpl::~ModelLitImpl() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        (&field_752)->~weak_ptr();
        (&field_528)->~fixed_hash_map();
        field_472->~shared_ptr();
        field_456->~shared_ptr();
        field_440->~shared_ptr();
        field_424->~shared_ptr();
        field_408->~shared_ptr();
        field_392->~shared_ptr();
        (&field_368)->~Array();
        (&field_344)->~Array();
        (&field_320)->~Array();
        field_296->~shared_ptr();
        field_280->~shared_ptr();
        field_264->~shared_ptr();
        field_248->~shared_ptr();
        (&field_224)->~Array();
        (&field_200)->~Array();
        (&field_176)->~Array();
        (&field_152)->~Array();
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_24)->~Array();
        eastl::destruct<highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x100373290, 352 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ModelUnlitImpl::~ModelUnlitImpl()
    void ModelUnlitImpl::~ModelUnlitImpl() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        (&field_560)->~shared_ptr();
        (&field_544)->~shared_ptr();
        (&field_528)->~shared_ptr();
        (&field_512)->~shared_ptr();
        field_496->~shared_ptr();
        field_480->~shared_ptr();
        field_464->~shared_ptr();
        field_448->~shared_ptr();
        field_432->~shared_ptr();
        field_416->~shared_ptr();
        (&field_392)->~Array();
        (&field_368)->~Array();
        (&field_344)->~Array();
        (&field_320)->~Array();
        (&field_288)->~SharedArray();
        field_272->~shared_ptr();
        field_256->~shared_ptr();
        (&field_240)->~shared_ptr();
        (&field_224)->~shared_ptr();
        field_208->~shared_ptr();
        (&field_192)->~shared_ptr();
        field_176->~shared_ptr();
        (&field_152)->~Array();
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_24)->~Array();
        eastl::destruct<highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x100374100, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelLitImpl::ModelLitImpl(): jumps straight to the base-object constructor

    // 0x100374170, 1040 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelLitImpl::ModelLitImpl()
    void ModelLitImpl::ModelLitImpl() {
        _func_decltype_nullptr* in_RSI;
        hash* phVar2;
        hash local_48[8];
        equal_to local_40[16];

        new (this) ModelLit();
        field_0 = &PTR__ModelLitImpl_100efc5c0;
        field_20 = 0;
        new (&field_24) Array<int, eastl::allocator>();
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        field_96 = 0;
        new (&field_104) Array<int, eastl::allocator>();
        new (&field_128) Array<int, eastl::allocator>();
        new (&field_152) Array<int, eastl::allocator>();
        new (&field_176) Array<int, eastl::allocator>();
        new (&field_200) Array<int, eastl::allocator>();
        new (&field_224) Array<int, eastl::allocator>();
        new (field_248, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_264, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_280, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_296, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_312[0] = 0;
        field_316 = 0;
        new (&field_320) Array<int, eastl::allocator>();
        new (&field_344) Array<int, eastl::allocator>();
        new (&field_368) Array<int, eastl::allocator>();
        new (field_392, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_408, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_424, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_440, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_456, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_472, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_488 = AllocModelId();
        field_492 = 1;
        field_496 = 4294967295;
        field_500 = 0;
        field_504 = 0;
        field_508 = 0;
        m_radiusCylinder = 0;
        field_516 = 0;
        field_520 = 0;
        phVar2 = local_48;
        new (&field_528, phVar2, local_40) eastl::fixed_hash_map<int, ModelLit::AABB, 1ul, 2ul, true, eastl::hash<int>,
                                                                 eastl::equal_to<int>, false, eastl::allocator>();
        field_747 = 0;
        field_748 = 0;
        new (&field_752, (_func_decltype_nullptr*)phVar2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100374c80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OperationBuffer::OperationImpl::OperationImpl(): jumps straight to the base-object constructor

    // 0x100374c90, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OperationBuffer::OperationImpl::OperationImpl()
    void OperationBuffer::OperationImpl::OperationImpl() {
        new (this) eastl::vector<shared_ptr<Operation>, eastl::allocator>();
        new (&field_32) eastl::vector<OperationRecordEntry, eastl::allocator>();
        new (field_64) ResolvedModel();
        new (field_176) jag::math::AABB();
        *(undefined2*)(field_176 + 32) = 0;
    }

    // 0x100374f80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // OperationBuffer::OperationImpl::~OperationImpl(): jumps straight to the base-object destructor

    // 0x100374f90, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // OperationBuffer::OperationImpl::~OperationImpl()
    void OperationBuffer::OperationImpl::~OperationImpl() {
        field_64->~ResolvedModel();
        (&field_32)->~vector();
        ~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    class GeometryBatchCombineHelper {
    public:
        GetVertexCount() const;
        GetIndexCount() const;
        ~GeometryBatchCombineHelper();
        GeometryBatchCombineHelper(GeometryBatchInstance*, int, bool);
        void Reset(GeometryBatchInstance*, int, bool);
        bool IsCombinableWith(GeometryBatchInstance const&) const;
        void Combine(GeometryBatchInstance const&);
        void FinishCombine();
        GeometryBatchCombineHelper(GeometryBatchCombineHelper&&);

        // data members, from how the methods use this: 48 bytes
        GeometryBatchInstance* field_0;  // offset 0
        bool field_8;                    // offset 8
        undefined3 field_9;              // offset 9
        int field_12;                    // offset 12
        int field_16;                    // offset 16
        uint field_20;                   // offset 20
        uint field_24;                   // offset 24
        undefined4 field_28;             // offset 28
        GeometryBatchInstance* field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100372c00, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GeometryBatchCombineHelper::~GeometryBatchCombineHelper(): jumps straight to the base-object destructor

    // 0x100372c10, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // GeometryBatchCombineHelper::~GeometryBatchCombineHelper()
    void GeometryBatchCombineHelper::~GeometryBatchCombineHelper() {
        (&field_40)->~vector();
    }

    // 0x10084a010, 16 bytes, complete-object constructor, inline, placed by class name
    // GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchCombineHelper&&): jumps straight to the base-object constructor

    // 0x10084a020, 48 bytes, base-object constructor, inline, placed by class name
    // GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchCombineHelper&&)
    void GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchCombineHelper* param_1) {
        GeometryBatchInstance* pGVar1;
        uint uVar2;
        uint uVar3;
        undefined4 uVar4;
        bool bVar5;
        undefined3 uVar6;
        int iVar7;

        field_32 = param_1->field_32;
        pGVar1 = param_1->field_0;
        bVar5 = param_1->field_8;
        uVar6 = param_1->field_9;
        iVar7 = param_1->field_12;
        uVar2 = param_1->field_20;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_28;
        field_16 = param_1->field_16;
        field_20 = uVar2;
        field_24 = uVar3;
        field_28 = uVar4;
        field_0 = pGVar1;
        field_8 = bVar5;
        field_9 = uVar6;
        field_12 = iVar7;
        new (&field_40, (vector*)&param_1->field_40)
            eastl::vector<GeometryBatchInstance_const*, BucketAllocatorEASTL>();
    }

} // namespace jag::graphics

namespace {
    class MatchPatternStackFrame {
    public:
        MatchPatternStackFrame(char const*, char const*);
    };

    // 0x100375e10, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // MatchPatternStackFrame::MatchPatternStackFrame(char const*, char const*): jumps straight to the base-object constructor

    // 0x100375ee0, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // MatchPatternStackFrame::MatchPatternStackFrame(char const*, char const*)
    void MatchPatternStackFrame::MatchPatternStackFrame(char* param_1, char* param_2) {
        *(char**)this = param_1;
        *(char**)(this + 8) = param_2;
    }

} // namespace

namespace jag::math {
    // 0x100373570, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(Vector3T<float>&&, Vector3T<float>&&, Vector3T<float>&&, Vector3T<float>&&): jumps straight to the base-object constructor

    // 0x100373580, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(Vector3T<float>&&, Vector3T<float>&&, Vector3T<float>&&, Vector3T<float>&&)
    void Matrix43T<float>::Matrix43T(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        SetXYZ(param_1);
        ((this + 12))->SetXYZ(param_2);
        ((this + 24))->SetXYZ(param_3);
        ((this + 36))->SetXYZ(param_4);
    }

} // namespace jag::math
