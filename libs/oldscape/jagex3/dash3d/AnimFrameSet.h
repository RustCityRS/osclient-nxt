// libs/oldscape/jagex3/dash3d/AnimFrameSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x100377310, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::AnimBase* placement_new<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(void*, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    AnimBase*
    jag::placement_new<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, int* param_2, PacketJ* param_3) {
        oldscape::dash3d::AnimBase::AnimBase(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x100377330, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimBase>* placement_new<ref_counter_shared<oldscape::dash3d::AnimBase>, int, oldscape::dash3d::AnimBase*&>(void*, int&&, oldscape::dash3d::AnimBase*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::AnimBase>, int, oldscape::dash3d::AnimBase*&>(
        void* param_1, int* param_2, AnimBase** param_3) {
        ref_counter_shared<oldscape::dash3d::AnimBase>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100377350, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimBase>::ref_counter_shared(unsigned long, oldscape::dash3d::AnimBase*): jumps straight to the base-object constructor

    // 0x100377360, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimBase>::ref_counter_shared(unsigned long, oldscape::dash3d::AnimBase*)
    void ref_counter_shared<oldscape::dash3d::AnimBase>::ref_counter_shared(ulong param_1, AnimBase* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AnimBase**)(this + 24) = param_2;
    }

    // 0x1003773a0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimBase>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::AnimBase>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~AnimBase();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 152;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003774d0, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<signed char, eastl::allocator>* placement_new<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>(void*, Array<signed char, eastl::allocator>&)
    Array*
    jag::placement_new<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>(void* param_1,
                                                                                                    Array* param_2) {
        Array<signed char, eastl::allocator>::Array(param_1, param_2);
        return param_1;
    }

    // 0x1003774f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<signed char, eastl::allocator> >* placement_new<ref_counter_shared<Array<signed char, eastl::allocator> >, int, Array<signed char, eastl::allocator>*&>(void*, int&&, Array<signed char, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<Array<signed char, eastl::allocator>>, int,
                                           Array<signed char, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                   Array** param_3) {
        ref_counter_shared<Array<signed char, eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100377510, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<signed char, eastl::allocator> >::ref_counter_shared(unsigned long, Array<signed char, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100377520, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<signed char, eastl::allocator> >::ref_counter_shared(unsigned long, Array<signed char, eastl::allocator>*)
    void ref_counter_shared<Array<signed char, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<signed char, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7408 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x100377560, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<signed char, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<signed char, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<signed char, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100378e30, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<signed char, eastl::allocator>* placement_new<Array<signed char, eastl::allocator>, unsigned long>(void*, unsigned long&&)
    Array* placement_new<Array<signed char, eastl::allocator>, unsigned long>(void* param_1, ulong* param_2) {
        Array<signed char, eastl::allocator>::Array(param_1, *param_2);
        return param_1;
    }

    // 0x100379960, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<signed char, eastl::allocator>* placement_new<Array<signed char, eastl::allocator>, unsigned long&, signed char&>(void*, unsigned long&, signed char&)
    /* Array<signed char, eastl::allocator>* placement_new<Array<signed char,
   eastl::allocator>, unsigned long&, signed char>(void*, unsigned long&, signed char&&) */

    Array* placement_new<Array<signed char, eastl::allocator>, unsigned long&, signed char>(void* param_1,
                                                                                            ulong* param_2,
                                                                                            signed* param_3) {
        Array<signed char, eastl::allocator>::Array(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x100379a50, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<short, eastl::allocator>* placement_new<Array<short, eastl::allocator>, unsigned long&, short>(void*, unsigned long&, short&&)
    Array* placement_new<Array<short, eastl::allocator>, unsigned long&, short>(void* param_1, ulong* param_2,
                                                                                short* param_3) {
        Array<short, eastl::allocator>::Array(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x100379a70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<short, eastl::allocator> >* placement_new<ref_counter_shared<Array<short, eastl::allocator> >, int, Array<short, eastl::allocator>*&>(void*, int&&, Array<short, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<short, eastl::allocator>>, int, Array<short, eastl::allocator>*&>(
        void* param_1, int* param_2, Array** param_3) {
        ref_counter_shared<Array<short, eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100379b90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<short, eastl::allocator> >::ref_counter_shared(unsigned long, Array<short, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100379ba0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<short, eastl::allocator> >::ref_counter_shared(unsigned long, Array<short, eastl::allocator>*)
    void ref_counter_shared<Array<short, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<short, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7428 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x100379be0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<short, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<short, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<short, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100379d00, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::Model* placement_new<graphics::Model>(void*)
    Model* placement_new<graphics::Model>(void* param_1) {
        graphics::Model::Model(param_1);
        return param_1;
    }

    // 0x100379d20, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelRSevenUnlit* placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model> >(void*, shared_ptr<graphics::Model>&&)
    ModelRSevenUnlit*
    placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>>(void* param_1, shared_ptr* param_2) {
        oldscape::dash3d::ModelRSevenUnlit::ModelRSevenUnlit(param_1, param_2, false);
        return param_1;
    }

    // 0x100379d40, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>* placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int, oldscape::dash3d::ModelRSevenUnlit*&>(void*, int&&, oldscape::dash3d::ModelRSevenUnlit*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                                           oldscape::dash3d::ModelRSevenUnlit*&>(void* param_1, int* param_2,
                                                                                 ModelRSevenUnlit** param_3) {
        ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100379fd0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::SetModelOperation>::type make_shared<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model> >(shared_ptr<graphics::Model>&&)
    jag* make_shared<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model>>(shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        SetModelOperation* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model>>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::SetModelOperation>, int,
                                   oldscape::dash3d::SetModelOperation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037a070, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::SetModelOperation* placement_new<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model> >(void*, shared_ptr<graphics::Model>&&)
    SetModelOperation*
    placement_new<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model>>(void* param_1,
                                                                                    shared_ptr* param_2) {
        oldscape::dash3d::SetModelOperation::SetModelOperation(param_1, param_2);
        return param_1;
    }

    // 0x10037a090, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::SetModelOperation>* placement_new<ref_counter_shared<oldscape::dash3d::SetModelOperation>, int, oldscape::dash3d::SetModelOperation*&>(void*, int&&, oldscape::dash3d::SetModelOperation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::SetModelOperation>, int,
                                           oldscape::dash3d::SetModelOperation*&>(void* param_1, int* param_2,
                                                                                  SetModelOperation** param_3) {
        ref_counter_shared<oldscape::dash3d::SetModelOperation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037a170, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::SetModelOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::SetModelOperation*): jumps straight to the base-object constructor

    // 0x10037a180, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::SetModelOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::SetModelOperation*)
    void ref_counter_shared<oldscape::dash3d::SetModelOperation>::ref_counter_shared(ulong param_1,
                                                                                     SetModelOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7778 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetModelOperation**)(this + 24) = param_2;
    }

    // 0x10037a1c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::SetModelOperation>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::SetModelOperation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~SetModelOperation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037a240, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelRSevenUnlit*): jumps straight to the base-object constructor

    // 0x10037a250, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelRSevenUnlit*)
    void ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::ref_counter_shared(ulong param_1,
                                                                                    ModelRSevenUnlit* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7768 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModelRSevenUnlit**)(this + 24) = param_2;
    }

    // 0x10037a290, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::FixNormalsOperation>::type make_shared<oldscape::dash3d::FixNormalsOperation>()
    jag* make_shared<oldscape::dash3d::FixNormalsOperation>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        FixNormalsOperation* local_28[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::FixNormalsOperation>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>, int,
                                   oldscape::dash3d::FixNormalsOperation*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10037a320, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::FixNormalsOperation* placement_new<oldscape::dash3d::FixNormalsOperation>(void*)
    FixNormalsOperation* placement_new<oldscape::dash3d::FixNormalsOperation>(void* param_1) {
        oldscape::dash3d::FixNormalsOperation::FixNormalsOperation(param_1);
        return param_1;
    }

    // 0x10037a340, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>, int, oldscape::dash3d::FixNormalsOperation*&>(void*, int&&, oldscape::dash3d::FixNormalsOperation*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>, int,
                       oldscape::dash3d::FixNormalsOperation*&>(void* param_1, int* param_2,
                                                                FixNormalsOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037a3c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::FixNormalsOperation*): jumps straight to the base-object constructor

    // 0x10037a3d0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::FixNormalsOperation*)
    void ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>::ref_counter_shared_trivial(
        ulong param_1, FixNormalsOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d40 + 16;
    }

    // 0x10037a400, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelRSevenUnlit* placement_new<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit&>(void*, oldscape::dash3d::ModelRSevenUnlit&)
    /* oldscape::dash3d::ModelRSevenUnlit*
   placement_new<oldscape::dash3d::ModelRSevenUnlit,
   oldscape::dash3d::ModelRSevenUnlit const&>(void*, oldscape::dash3d::ModelRSevenUnlit
   const&) */

    ModelRSevenUnlit* jag::placement_new<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit_const&>(
        void* param_1, ModelRSevenUnlit* param_2) {
        oldscape::dash3d::ModelRSevenUnlit::ModelRSevenUnlit(param_1, param_2);
        return param_1;
    }

    // 0x10037a530, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::CombineOperation>::type make_shared<oldscape::dash3d::CombineOperation, eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator> >(eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator>&&)
    jag* jag::make_shared<oldscape::dash3d::CombineOperation,
                          eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator>>(vector* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        CombineOperation* local_30[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::CombineOperation,
                                        eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator>>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int,
                                   oldscape::dash3d::CombineOperation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037a5d0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::CombineOperation* placement_new<oldscape::dash3d::CombineOperation, eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator> >(void*, eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator>&&)
    CombineOperation*
    jag::placement_new<oldscape::dash3d::CombineOperation,
                       eastl::vector<oldscape::dash3d::OperationBuffer, eastl::allocator>>(void* param_1,
                                                                                           vector* param_2) {
        oldscape::dash3d::CombineOperation::CombineOperation(param_1, param_2);
        return param_1;
    }

    // 0x10037a5f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::CombineOperation>* placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int, oldscape::dash3d::CombineOperation*&>(void*, int&&, oldscape::dash3d::CombineOperation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int,
                                           oldscape::dash3d::CombineOperation*&>(void* param_1, int* param_2,
                                                                                 CombineOperation** param_3) {
        ref_counter_shared<oldscape::dash3d::CombineOperation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037a690, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator> >::type make_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>()
    jag* jag::make_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        vector* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>(
                    (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<
                                  eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>,
                              int,
                              eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10037a770, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>* placement_new<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>(void*)
    vector* jag::placement_new<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>(
        void* param_1) {
        eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>::vector(param_1);
        return param_1;
    }

    // 0x10037a790, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator> >* placement_new<ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator> >, int, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*&>(void*, int&&, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>, int,
        eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*&>(void* param_1,
                                                                                                int* param_2,
                                                                                                vector** param_3) {
        ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange,
                                         eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037a820, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10037a830, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*)
    void jag::ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>::
        ref_counter_shared(ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange,
                                                            eastl::allocator>>* this,
                           ulong param_1, vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(vector**)(this + 24) = param_2;
    }

    // 0x10037a870, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator> >::DeleteData()
    void jag::ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>::
        DeleteData(ref_counter_shared<
                   eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037a910, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::CombineOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::CombineOperation*): jumps straight to the base-object constructor

    // 0x10037a920, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::CombineOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::CombineOperation*)
    void ref_counter_shared<oldscape::dash3d::CombineOperation>::ref_counter_shared(ulong param_1,
                                                                                    CombineOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7760 + 16;
        *(ulong*)(this + 16) = param_1;
        *(CombineOperation**)(this + 24) = param_2;
    }

    // 0x10037a960, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::CombineOperation>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::CombineOperation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~CombineOperation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037a9f0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::CombineOperation>::type make_shared<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer const&>(oldscape::dash3d::OperationBuffer const&)
    jag* jag::make_shared<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer_const&>(
        OperationBuffer* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        CombineOperation* local_30[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer_const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int,
                                   oldscape::dash3d::CombineOperation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037aa90, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::CombineOperation* placement_new<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer const&>(void*, oldscape::dash3d::OperationBuffer const&)
    CombineOperation* jag::placement_new<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer_const&>(
        void* param_1, OperationBuffer* param_2) {
        oldscape::dash3d::CombineOperation::CombineOperation(param_1, param_2);
        return param_1;
    }

    // 0x10037ab40, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::HillSkewOperation>::type make_shared<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(math::Vector3T<int>&&, int&, int&, bool&&)
    jag* make_shared<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(Vector3T* param_1,
                                                                                                 int* param_2,
                                                                                                 int* param_3,
                                                                                                 bool* param_4) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        HillSkewOperation* local_40[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(
                (void*)((long)pvVar1 + 16), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>, int,
                                   oldscape::dash3d::HillSkewOperation*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10037ac00, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::HillSkewOperation* placement_new<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(void*, math::Vector3T<int>&&, int&, int&, bool&&)
    HillSkewOperation* placement_new<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(
        void* param_1, Vector3T* param_2, int* param_3, int* param_4, bool* param_5) {
        oldscape::dash3d::HillSkewOperation::HillSkewOperation(
            param_1, *(undefined8*)param_2, *(undefined4*)(param_2 + 8), *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x10037ac40, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>, int, oldscape::dash3d::HillSkewOperation*&>(void*, int&&, oldscape::dash3d::HillSkewOperation*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>, int,
                                                   oldscape::dash3d::HillSkewOperation*&>(void* param_1, int* param_2,
                                                                                          HillSkewOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037acd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::HillSkewOperation*): jumps straight to the base-object constructor

    // 0x10037ace0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::HillSkewOperation*)
    void ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>::ref_counter_shared_trivial(
        ulong param_1, HillSkewOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d28 + 16;
    }

    // 0x10037ad10, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::LightOperation>::type make_shared<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int> >(int&, int&, math::Vector3T<int>&&)
    jag* make_shared<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int>>(int* param_1, int* param_2,
                                                                                        Vector3T* param_3) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        LightOperation* local_40[2];

        pvVar1 = (void*)aligned_alloc(48, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int>>(
                (void*)((long)pvVar1 + 16), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightOperation>, int,
                                   oldscape::dash3d::LightOperation*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10037adc0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::LightOperation* placement_new<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int> >(void*, int&, int&, math::Vector3T<int>&&)
    LightOperation*
    placement_new<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int>>(void* param_1, int* param_2,
                                                                                     int* param_3, Vector3T* param_4) {
        oldscape::dash3d::LightOperation::LightOperation(param_1, *param_2, *param_3, *(undefined8*)param_4,
                                                         *(undefined4*)(param_4 + 8));
        return param_1;
    }

    // 0x10037adf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::LightOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightOperation>, int, oldscape::dash3d::LightOperation*&>(void*, int&&, oldscape::dash3d::LightOperation*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightOperation>, int,
                                                   oldscape::dash3d::LightOperation*&>(void* param_1, int* param_2,
                                                                                       LightOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::LightOperation>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037aea0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::LightOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::LightOperation*): jumps straight to the base-object constructor

    // 0x10037aeb0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::LightOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::LightOperation*)
    void
    ref_counter_shared_trivial<oldscape::dash3d::LightOperation>::ref_counter_shared_trivial(ulong param_1,
                                                                                             LightOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d18 + 16;
    }

    // 0x10037aee0, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelRSevenLit* placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall, oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(void*, oldscape::dash3d::ModelRSevenLit::LightCall&&, oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&)
    ModelRSevenLit* jag::placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                                       oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
        void* param_1, LightCall* param_2, ModelRSevenUnlit* param_3, int* param_4, int* param_5, int* param_6,
        int* param_7, int* param_8) {
        oldscape::dash3d::ModelRSevenLit::ModelRSevenLit();
        return param_1;
    }

    // 0x10037af20, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelRSevenLit* placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall, oldscape::dash3d::ModelRSevenUnlit&>(void*, oldscape::dash3d::ModelRSevenLit::LightCall&&, oldscape::dash3d::ModelRSevenUnlit&)
    ModelRSevenLit* jag::placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                                       oldscape::dash3d::ModelRSevenUnlit&>(void* param_1, LightCall* param_2,
                                                                            ModelRSevenUnlit* param_3) {
        oldscape::dash3d::ModelRSevenLit::ModelRSevenLit();
        return param_1;
    }

    // 0x10037af60, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::TransformOperation>::type make_shared<oldscape::dash3d::TransformOperation, math::Matrix44T<float> >(math::Matrix44T<float>&&)
    jag* make_shared<oldscape::dash3d::TransformOperation, math::Matrix44T<float>>(Matrix44T* param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_34;
        TransformOperation* local_30[2];

        pvVar1 = (void*)aligned_alloc(96, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::TransformOperation, math::Matrix44T<float>>(
                (void*)((long)pvVar1 + 16), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>, int,
                                   oldscape::dash3d::TransformOperation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037b000, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::TransformOperation* placement_new<oldscape::dash3d::TransformOperation, math::Matrix44T<float> >(void*, math::Matrix44T<float>&&)
    TransformOperation*
    placement_new<oldscape::dash3d::TransformOperation, math::Matrix44T<float>>(void* param_1, Matrix44T* param_2) {
        oldscape::dash3d::TransformOperation::TransformOperation(param_1, *param_2);
        return param_1;
    }

    // 0x10037b040, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>, int, oldscape::dash3d::TransformOperation*&>(void*, int&&, oldscape::dash3d::TransformOperation*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>, int,
                       oldscape::dash3d::TransformOperation*&>(void* param_1, int* param_2,
                                                               TransformOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037b0f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TransformOperation*): jumps straight to the base-object constructor

    // 0x10037b100, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TransformOperation*)
    void ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>::ref_counter_shared_trivial(
        ulong param_1, TransformOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d38 + 16;
    }

    // 0x10037b130, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::RecolourOperation>::type make_shared<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(unsigned short&&, unsigned short&&)
    jag* make_shared<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(ushort* param_1,
                                                                                          ushort* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        RecolourOperation* local_38[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::RecolourOperation>, int,
                                   oldscape::dash3d::RecolourOperation*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10037b1e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::RecolourOperation* placement_new<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(void*, unsigned short&&, unsigned short&&)
    RecolourOperation*
    placement_new<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(void* param_1, ushort* param_2,
                                                                                       ushort* param_3) {
        oldscape::dash3d::RecolourOperation::RecolourOperation(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10037b200, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::RecolourOperation>* placement_new<ref_counter_shared<oldscape::dash3d::RecolourOperation>, int, oldscape::dash3d::RecolourOperation*&>(void*, int&&, oldscape::dash3d::RecolourOperation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::RecolourOperation>, int,
                                           oldscape::dash3d::RecolourOperation*&>(void* param_1, int* param_2,
                                                                                  RecolourOperation** param_3) {
        ref_counter_shared<oldscape::dash3d::RecolourOperation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037b2f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::RecolourOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::RecolourOperation*): jumps straight to the base-object constructor

    // 0x10037b300, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::RecolourOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::RecolourOperation*)
    void ref_counter_shared<oldscape::dash3d::RecolourOperation>::ref_counter_shared(ulong param_1,
                                                                                     RecolourOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7770 + 16;
        *(ulong*)(this + 16) = param_1;
        *(RecolourOperation**)(this + 24) = param_2;
    }

    // 0x10037b340, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::RecolourOperation>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::RecolourOperation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~RecolourOperation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037b410, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::RetextureOperation>::type make_shared<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(unsigned short&&, unsigned short&&)
    jag* make_shared<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(ushort* param_1,
                                                                                           ushort* param_2) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_3c;
        RetextureOperation* local_38[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(
                (void*)((long)pvVar1 + 16), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>, int,
                                   oldscape::dash3d::RetextureOperation*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10037b4c0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::RetextureOperation* placement_new<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(void*, unsigned short&&, unsigned short&&)
    RetextureOperation*
    placement_new<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(void* param_1, ushort* param_2,
                                                                                        ushort* param_3) {
        oldscape::dash3d::RetextureOperation::RetextureOperation(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10037b4e0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>, int, oldscape::dash3d::RetextureOperation*&>(void*, int&&, oldscape::dash3d::RetextureOperation*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>, int,
                       oldscape::dash3d::RetextureOperation*&>(void* param_1, int* param_2,
                                                               RetextureOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037b550, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::RetextureOperation*): jumps straight to the base-object constructor

    // 0x10037b560, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::RetextureOperation*)
    void ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>::ref_counter_shared_trivial(
        ulong param_1, RetextureOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d30 + 16;
    }

    // 0x10037b590, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::MirrorOperation>::type make_shared<oldscape::dash3d::MirrorOperation>()
    jag* make_shared<oldscape::dash3d::MirrorOperation>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        MirrorOperation* local_28[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::MirrorOperation>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>, int,
                                   oldscape::dash3d::MirrorOperation*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10037b620, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::MirrorOperation* placement_new<oldscape::dash3d::MirrorOperation>(void*)
    MirrorOperation* placement_new<oldscape::dash3d::MirrorOperation>(void* param_1) {
        oldscape::dash3d::MirrorOperation::MirrorOperation(param_1);
        return param_1;
    }

    // 0x10037b640, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>, int, oldscape::dash3d::MirrorOperation*&>(void*, int&&, oldscape::dash3d::MirrorOperation*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>, int,
                                                   oldscape::dash3d::MirrorOperation*&>(void* param_1, int* param_2,
                                                                                        MirrorOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037b6a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::MirrorOperation*): jumps straight to the base-object constructor

    // 0x10037b6b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::MirrorOperation*)
    void ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>::ref_counter_shared_trivial(
        ulong param_1, MirrorOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d20 + 16;
    }

    // 0x10037b6e0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::DashAnimateOperation>::type make_shared<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&>(shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&)
    jag*
    jag::make_shared<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&>(
        shared_ptr* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DashAnimateOperation* local_38[2];

        pvVar1 = (void*)aligned_alloc(144, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                              int&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int,
                                   oldscape::dash3d::DashAnimateOperation*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10037b790, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::DashAnimateOperation* placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&>(void*, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&)
    DashAnimateOperation*
    jag::placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&>(
        void* param_1, shared_ptr* param_2, int* param_3) {
        oldscape::dash3d::DashAnimateOperation::DashAnimateOperation(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x10037b7b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashAnimateOperation>* placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int, oldscape::dash3d::DashAnimateOperation*&>(void*, int&&, oldscape::dash3d::DashAnimateOperation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int,
                                           oldscape::dash3d::DashAnimateOperation*&>(void* param_1, int* param_2,
                                                                                     DashAnimateOperation** param_3) {
        ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::ref_counter_shared(param_1, (long)*param_2,
                                                                                       *param_3);
        return param_1;
    }

    // 0x10037b940, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::DashAnimateOperation*): jumps straight to the base-object constructor

    // 0x10037b950, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::DashAnimateOperation*)
    void ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::ref_counter_shared(ulong param_1,
                                                                                        DashAnimateOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7798 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DashAnimateOperation**)(this + 24) = param_2;
    }

    // 0x10037b990, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~DashAnimateOperation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 112;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037ba30, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::MayaPoseStateRSeven* placement_new<oldscape::dash3d::MayaPoseStateRSeven, shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(void*, shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&)
    MayaPoseStateRSeven*
    jag::placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                       shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
        void* param_1, shared_ptr* param_2, int* param_3) {
        oldscape::dash3d::MayaPoseStateRSeven::MayaPoseStateRSeven(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x10037ba50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>* placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int, oldscape::dash3d::MayaPoseStateRSeven*&>(void*, int&&, oldscape::dash3d::MayaPoseStateRSeven*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int,
                                           oldscape::dash3d::MayaPoseStateRSeven*&>(void* param_1, int* param_2,
                                                                                    MayaPoseStateRSeven** param_3) {
        ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x10037be30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::MayaPoseStateRSeven*): jumps straight to the base-object constructor

    // 0x10037be40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::MayaPoseStateRSeven*)
    void ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::ref_counter_shared(ulong param_1,
                                                                                       MayaPoseStateRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7788 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MayaPoseStateRSeven**)(this + 24) = param_2;
    }

    // 0x10037be80, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MayaPoseStateRSeven();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 112;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037bf30, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::AnimateOperation>::type make_shared<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven> >(shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>&&)
    jag* jag::make_shared<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>>(
        shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        AnimateOperation* local_30[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::AnimateOperation>, int,
                                   oldscape::dash3d::AnimateOperation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037bfd0, 80 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::AnimateOperation* placement_new<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven> >(void*, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>&&)
    AnimateOperation*
    jag::placement_new<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>>(
        void* param_1, shared_ptr* param_2) {
        shared_ptr local_28;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_28, param_2);
        oldscape::dash3d::AnimateOperation::AnimateOperation(param_1, &local_28);
        local_28.~shared_ptr();
        return param_1;
    }

    // 0x10037c020, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimateOperation>* placement_new<ref_counter_shared<oldscape::dash3d::AnimateOperation>, int, oldscape::dash3d::AnimateOperation*&>(void*, int&&, oldscape::dash3d::AnimateOperation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::AnimateOperation>, int,
                                           oldscape::dash3d::AnimateOperation*&>(void* param_1, int* param_2,
                                                                                 AnimateOperation** param_3) {
        ref_counter_shared<oldscape::dash3d::AnimateOperation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037c0e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimateOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::AnimateOperation*): jumps straight to the base-object constructor

    // 0x10037c0f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimateOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::AnimateOperation*)
    void ref_counter_shared<oldscape::dash3d::AnimateOperation>::ref_counter_shared(ulong param_1,
                                                                                    AnimateOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7758 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AnimateOperation**)(this + 24) = param_2;
    }

    // 0x10037c130, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimateOperation>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::AnimateOperation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~AnimateOperation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037c1c0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::MayaPoseStateRSeven* placement_new<oldscape::dash3d::MayaPoseStateRSeven, shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&, Array<bool, eastl::allocator>&, bool&>(void*, shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&, Array<bool, eastl::allocator>&, bool&)
    MayaPoseStateRSeven* jag::placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                                            shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&,
                                            int&, Array<bool, eastl::allocator>&, bool&>(void* param_1,
                                                                                         shared_ptr* param_2,
                                                                                         int* param_3, Array* param_4,
                                                                                         bool* param_5) {
        oldscape::dash3d::MayaPoseStateRSeven::MayaPoseStateRSeven(param_1, param_2, *param_3, param_4, *param_5);
        return param_1;
    }

    // 0x10037c2e0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<bool, eastl::allocator> >::type make_shared<Array<bool, eastl::allocator>, Array<bool, eastl::allocator> const&>(Array<bool, eastl::allocator> const&)
    jag* make_shared<Array<bool, eastl::allocator>, Array<bool, eastl::allocator> const&>(Array* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<bool, eastl::allocator>, Array<bool, eastl::allocator> const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<Array<bool, eastl::allocator>>, int, Array<bool, eastl::allocator>*&>(
                    pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037c380, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<bool, eastl::allocator>* placement_new<Array<bool, eastl::allocator>, Array<bool, eastl::allocator> const&>(void*, Array<bool, eastl::allocator> const&)
    Array* jag::placement_new<Array<bool, eastl::allocator>, Array<bool, eastl::allocator> const&>(void* param_1,
                                                                                                   Array* param_2) {
        Array<bool, eastl::allocator>::Array(param_1, param_2);
        return param_1;
    }

    // 0x10037c3a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<bool, eastl::allocator> >* placement_new<ref_counter_shared<Array<bool, eastl::allocator> >, int, Array<bool, eastl::allocator>*&>(void*, int&&, Array<bool, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<bool, eastl::allocator>>, int, Array<bool, eastl::allocator>*&>(
        void* param_1, int* param_2, Array** param_3) {
        ref_counter_shared<Array<bool, eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037c3c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<bool, eastl::allocator> >::ref_counter_shared(unsigned long, Array<bool, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10037c3d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<bool, eastl::allocator> >::ref_counter_shared(unsigned long, Array<bool, eastl::allocator>*)
    void ref_counter_shared<Array<bool, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<bool, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7410 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x10037c410, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<bool, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<bool, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<bool, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037c460, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::DashAnimateOperation>::type make_shared<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&, bool&>(shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&, bool&)
    jag* jag::make_shared<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                          int&, Array<int, eastl::allocator> const&, bool&>(shared_ptr* param_1, int* param_2,
                                                                            Array* param_3, bool* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        DashAnimateOperation* local_40[2];

        pvVar1 = (void*)aligned_alloc(144, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                              int&, Array<int, eastl::allocator> const&, bool&>((void*)((long)pvVar1 + 32), param_1,
                                                                                param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int,
                                   oldscape::dash3d::DashAnimateOperation*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10037c520, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::DashAnimateOperation* placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&, bool&>(void*, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&, bool&)
    DashAnimateOperation*
    jag::placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&,
                       Array<int, eastl::allocator> const&, bool&>(void* param_1, shared_ptr* param_2, int* param_3,
                                                                   Array* param_4, bool* param_5) {
        oldscape::dash3d::DashAnimateOperation::DashAnimateOperation(param_1, param_2, *param_3, param_4, *param_5);
        return param_1;
    }

    // 0x10037c5e0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<int, eastl::allocator> >::type make_shared<Array<int, eastl::allocator>, Array<int, eastl::allocator> const&>(Array<int, eastl::allocator> const&)
    jag* make_shared<Array<int, eastl::allocator>, Array<int, eastl::allocator> const&>(Array* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<int, eastl::allocator>, Array<int, eastl::allocator> const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<Array<int, eastl::allocator>>, int, Array<int, eastl::allocator>*&>(
                    pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10037c680, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<int, eastl::allocator>* placement_new<Array<int, eastl::allocator>, Array<int, eastl::allocator> const&>(void*, Array<int, eastl::allocator> const&)
    Array* placement_new<Array<int, eastl::allocator>, Array<int, eastl::allocator> const&>(void* param_1,
                                                                                            Array* param_2) {
        Array<int, eastl::allocator>::Array(param_1, param_2);
        return param_1;
    }

    // 0x10037c6a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<int, eastl::allocator> >* placement_new<ref_counter_shared<Array<int, eastl::allocator> >, int, Array<int, eastl::allocator>*&>(void*, int&&, Array<int, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<int, eastl::allocator>>, int, Array<int, eastl::allocator>*&>(
        void* param_1, int* param_2, Array** param_3) {
        ref_counter_shared<Array<int, eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037c6c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<int, eastl::allocator> >::ref_counter_shared(unsigned long, Array<int, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10037c6d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<int, eastl::allocator> >::ref_counter_shared(unsigned long, Array<int, eastl::allocator>*)
    void ref_counter_shared<Array<int, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<int, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7420 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x10037c710, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<int, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<int, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<int, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037c760, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::TintOperation>::type make_shared<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&, unsigned char&>(signed char&, signed char&, signed char&, unsigned char&)
    jag* jag::make_shared<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
        signed* param_1, signed* param_2, signed* param_3, uchar* param_4) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        TintOperation* local_40[2];

        pvVar1 = (void*)aligned_alloc(48, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&,
                                        unsigned char&>((void*)((long)pvVar1 + 16), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::TintOperation>, int,
                                   oldscape::dash3d::TintOperation*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10037c820, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::TintOperation* placement_new<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&, unsigned char&>(void*, signed char&, signed char&, signed char&, unsigned char&)
    TintOperation*
    jag::placement_new<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
        void* param_1, signed* param_2, signed* param_3, signed* param_4, uchar* param_5) {
        oldscape::dash3d::TintOperation::TintOperation(param_1, (int)(char)*param_2, (int)(char)*param_3,
                                                       (int)(char)*param_4, *param_5);
        return param_1;
    }

    // 0x10037c850, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TintOperation>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::TintOperation>, int, oldscape::dash3d::TintOperation*&>(void*, int&&, oldscape::dash3d::TintOperation*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::TintOperation>, int,
                                                   oldscape::dash3d::TintOperation*&>(void* param_1, int* param_2,
                                                                                      TintOperation** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::TintOperation>::ref_counter_shared_trivial(param_1, (long)*param_2,
                                                                                                *param_3);
        return param_1;
    }

    // 0x10037c870, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TintOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TintOperation*): jumps straight to the base-object constructor

    // 0x10037c880, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::TintOperation>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TintOperation*)
    void
    ref_counter_shared_trivial<oldscape::dash3d::TintOperation>::ref_counter_shared_trivial(ulong param_1,
                                                                                            TintOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d10 + 16;
    }

    // 0x10037c8b0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelUnlitImpl* placement_new<oldscape::dash3d::ModelUnlitImpl, eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(void*, eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&)
    ModelUnlitImpl*
    jag::placement_new<oldscape::dash3d::ModelUnlitImpl,
                       eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(
        void* param_1, vector* param_2) {
        oldscape::dash3d::ModelUnlitImpl::ModelUnlitImpl(param_1, param_2);
        return param_1;
    }

    // 0x10037c8d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>* placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int, oldscape::dash3d::ModelUnlitImpl*&>(void*, int&&, oldscape::dash3d::ModelUnlitImpl*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int, oldscape::dash3d::ModelUnlitImpl*&>(
        void* param_1, int* param_2, ModelUnlitImpl** param_3) {
        ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037c8f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelUnlitImpl*): jumps straight to the base-object constructor

    // 0x10037c900, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::ref_counter_shared(unsigned long, oldscape::dash3d::ModelUnlitImpl*)
    void ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::ref_counter_shared(ulong param_1,
                                                                                  ModelUnlitImpl* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7740 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModelUnlitImpl**)(this + 24) = param_2;
    }

    // 0x10037c940, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ModelUnlitImpl();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 600;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037c990, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelUnlitImpl* placement_new<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&, bool&, bool&>(void*, oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&, bool&, bool&)
    ModelUnlitImpl* jag::placement_new<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl_const&, bool&,
                                       bool&, bool&, bool&>(void* param_1, ModelUnlitImpl* param_2, bool* param_3,
                                                            bool* param_4, bool* param_5, bool* param_6) {
        oldscape::dash3d::ModelUnlitImpl::ModelUnlitImpl(param_1, (ModelUnlit*)param_2, *param_3, *param_4, *param_5,
                                                         *param_6);
        return param_1;
    }

    // 0x10037cd10, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelUnlitImpl* placement_new<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(void*, unsigned char*&, unsigned long&&, int&&)
    ModelUnlitImpl*
    placement_new<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(void* param_1, uchar** param_2,
                                                                                         ulong* param_3, int* param_4) {
        oldscape::dash3d::ModelUnlitImpl::ModelUnlitImpl(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x10037cd30, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<int, eastl::allocator>* placement_new<Array<int, eastl::allocator>, int&>(void*, int&)
    Array* placement_new<Array<int, eastl::allocator>, int&>(void* param_1, int* param_2) {
        Array<int, eastl::allocator>::Array(param_1, (long)*param_2);
        return param_1;
    }

    // 0x10037cd50, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<signed char, eastl::allocator>* placement_new<Array<signed char, eastl::allocator>, int&>(void*, int&)
    Array* placement_new<Array<signed char, eastl::allocator>, int&>(void* param_1, int* param_2) {
        Array<signed char, eastl::allocator>::Array(param_1, (long)*param_2);
        return param_1;
    }

    // 0x10037cd70, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<short, eastl::allocator>* placement_new<Array<short, eastl::allocator>, int&>(void*, int&)
    Array* placement_new<Array<short, eastl::allocator>, int&>(void* param_1, int* param_2) {
        Array<short, eastl::allocator>::Array(param_1, (long)*param_2);
        return param_1;
    }

    // 0x10037cde0, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<Array<int, eastl::allocator>, eastl::allocator>* placement_new<Array<Array<int, eastl::allocator>, eastl::allocator>, int&>(void*, int&)
    /* Array<Array<int, eastl::allocator>, eastl::allocator>*
   placement_new<Array<Array<int, eastl::allocator>, eastl::allocator>, int>(void*,
   int&&) */

    Array* placement_new<Array<Array<int, eastl::allocator>, eastl::allocator>, int>(void* param_1, int* param_2) {
        Array<Array<int, eastl::allocator>, eastl::allocator>::Array(param_1, (long)*param_2);
        return param_1;
    }

    // 0x10037ce00, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator> >* placement_new<ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator> >, int, Array<Array<int, eastl::allocator>, eastl::allocator>*&>(void*, int&&, Array<Array<int, eastl::allocator>, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>, int,
                       Array<Array<int, eastl::allocator>, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                Array** param_3) {
        ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037ce70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, Array<Array<int, eastl::allocator>, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10037ce80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, Array<Array<int, eastl::allocator>, eastl::allocator>*)
    void ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>* this, ulong param_1,
        Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x10037cec0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037cf10, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::LightSource* placement_new<oldscape::dash3d::LightSource>(void*)
    LightSource* placement_new<oldscape::dash3d::LightSource>(void* param_1) {
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined4*)((long)param_1 + 16) = 0;
        game::EntityHighlightGlobalState::RadialHighlightState::RadialHighlightState(param_1);
        return param_1;
    }

    // 0x10037cf40, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::LightSource>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightSource>, int, oldscape::dash3d::LightSource*&>(void*, int&&, oldscape::dash3d::LightSource*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightSource>, int, oldscape::dash3d::LightSource*&>(
        void* param_1, int* param_2, LightSource** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::LightSource>::ref_counter_shared_trivial(param_1, (long)*param_2,
                                                                                              *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class AnimFrameSet {
    public:
        class EffectivelyPrivateConstructor;
        AnimFrameSet* Load(jagex3::Js5&, jagex3::Js5&, int, bool);
        uint TryLoad(jagex3::Js5&, jagex3::Js5&, bool);
        AnimFrameSet(EffectivelyPrivateConstructor);
        void ResizePrecise(int, int, int);
        GetAnimateTransparencies(int);
        void GetNumFrames();
        ~AnimFrameSet();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8;       // offset 8
        AnimFrame* field_16; // offset 16
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    class AnimFrameSet::EffectivelyPrivateConstructor {
    public:
        EffectivelyPrivateConstructor(int);
    };

    class AnimateBaseOperation {
    public:
        class SeparatedIndexCount;
        // virtual methods in vtable order
        virtual Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        void LoadTransparencyAffectedLabels(jag::graphics::Model const&, PoseStateRSeven const&) const;
        ResolvedModel* SeparateFacesByLabelTransparency(ResolvedModel const&, ResolvedModel const&,
                                                        OperationRecordEntry const*) const;
        bool CanReusePreviousTransparencyBatching(ResolvedModel const&, OperationRecordEntry const*) const;
        void SeparateBatchByLabelTransparency(
            jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&,
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>&) const;
        void ReplaceModelBatches(
            jag::graphics::Model&,
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>&) const;
        vector_map* InvertLabelMapping(
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&)
            const;
        GeometryBatchInstance* CopyBatchInstanceVertices(jag::graphics::GeometryBatchInstance const&,
                                                         jag::graphics::Model&) const;
        GeometryBatch* SplitBatchIndices(
            jag::graphics::GeometryBatch const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            jag::graphics::GeometryBatch&, jag::graphics::GeometryBatch&) const;
        void UpdateBatchExternalIndexList(jag::graphics::GeometryBatchInstance&,
                                          std::function<unsigned short(unsigned short)>) const;
        void OutputIfNonempty(
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&&,
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>&) const;
        AnimateBaseOperation(Operation::Type);
        ~AnimateBaseOperation();

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[12];
    };

    class AnimateBaseOperation::SeparatedIndexCount {
    public:
        SeparatedIndexCount(unsigned long, unsigned long);

        // data members, from how the methods use this: 4 bytes
        short field_0; // offset 0
        short field_2; // offset 2
    };

    class AnimateOperation {
    public:
        // virtual methods in vtable order
        virtual IsEqual(Operation const&) const;
        virtual GetNextPose(ResolvedModel const&, OperationRecordEntry const*) const;
        AnimateOperation(shared_ptr<PoseStateRSeven> const&);
        ~AnimateOperation();

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[56];
        shared_ptr field_64; // offset 64
    };

    class DashAnimateOperation : public AnimateOperation // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual IsEqual(Operation const&) const;
        virtual DashAnimateOperation* GetNextPose(ResolvedModel const&, OperationRecordEntry const*) const;
        DashAnimateOperation(shared_ptr<AnimFrameSet> const&, int);
        ~DashAnimateOperation();
        DashAnimateOperation(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool);

        // data members, from how the methods use this: 105 bytes, the first 80 are AnimateOperation
        int field_80; // offset 80
        char _unknown_84[20];
        bool field_104; // offset 104
    };

    class FixNormalsOperation : public RetextureOperation // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(Operation const&) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const;
        ulong AnySmallVertexNormal(jag::graphics::GeometryBatch const&, unsigned long) const;
        CalculateFaceNormal(jag::graphics::GeometryBatch const&, unsigned long) const;
        FixNormalsOperation();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    class LightOperation {
    public:
        // virtual methods in vtable order
        virtual ResolvedModel* Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        virtual AABB* ApplyAABB(jag::math::AABB const&) const;
        virtual bool IsEqual(Operation const&) const;
        void MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&,
                      jag::math::Matrix44T<float> const&) const;
        int GetVertexColor(jag::graphics::GeometryBatchVertex const&, int, int, unsigned char) const;
        int LightForVertex(jag::graphics::GeometryBatchVertex const&, jag::math::Matrix44T<float> const&, int) const;
        void AssignVertexColor(jag::graphics::GeometryBatchVertex&,
                               jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout> const&) const;
        uint ColorGammaCorrect(unsigned char) const;
        uint TextureGammaCorrect(jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout> const&) const;
        LightOperation(int, int, jag::math::Vector3T<int>);

        // data members, from how the methods use this: 32 bytes
        undefined** field_0;     // offset 0, vtable pointer
        undefined4 field_8;      // offset 8
        int field_12;            // offset 12
        undefined4 field_16;     // offset 16
        undefined1 field_20[12]; // offset 20
    };

    // 0x100376a80, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AnimFrameSet::~AnimFrameSet(): jumps straight to the base-object destructor

    // 0x100376a90, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // AnimFrameSet::~AnimFrameSet()
    void AnimFrameSet::~AnimFrameSet() {
        ~Array();
    }

    // 0x1003780f0, 112 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::HillSkew(int, int, int, int, int)::$_0::operator()(int) const
    /* ModelLitImpl::HillSkew(int, int, int, int,
   int)::$_0::TEMPNAMEPLACEHOLDERVALUE(int) const */

    undefined1[16] ModelLitImpl::HillSkew(int, int, int, int, int)::$_0::operator()(int param_1) {
        int iVar1;
        int iVar2;
        long lVar3;
        int* piVar4;
        undefined1 auVar6[16];
        LocationData local_38;

        lVar3 = field_0;
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar3 + 24), (ulong)param_1);
        iVar1 = *piVar4;
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar3 + 48), (ulong)param_1);
        iVar2 = *piVar4;
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar3 + 72), (ulong)param_1);
        new (&local_38) rs2lib::worldmap::LocationData(iVar1, iVar2, *piVar4);
        auVar6._12_4_ = 0;
        auVar6._0_4_ = local_38.field_0;
        auVar6._4_4_ = local_38.field_4;
        auVar6._8_4_ = local_38.field_8;
        return auVar6;
    }

    // 0x100378c60, 32 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::HillSkew(int, int, int, int, int)::$_1::operator()(int, int) const
    /* ModelLitImpl::HillSkew(int, int, int, int,
   int)::$_1::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

    void ModelLitImpl::HillSkew(int, int, int, int, int)::$_1::operator()(int param_1, int param_2) {
        int* piVar1;

        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(field_0 + 48),
                                                                (long)param_1);
        *piVar1 = param_2;
    }

    // 0x1003797e0, 288 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet&, int)::$_2::operator()(int, float) const
    /* ModelLitImpl::AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet&,
   int)::$_2::TEMPNAMEPLACEHOLDERVALUE(int, float) const */

    void ModelLitImpl::AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet&,
                                                    int)::$_2 ::operator()(int param_1, float param_2) {
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* this_00;
        long lVar1;
        int iVar2;
        int iVar3;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar4;
        Array<Array<int, eastl::allocator>, eastl::allocator>* this_01;
        long lVar5;
        int* piVar6;
        Array<signed char, eastl::allocator>* pAVar7;
        byte* pbVar8;
        undefined1* puVar9;
        ulong uVar10;
        ulong uVar11;
        shared_ptr<Array<signed char, eastl::allocator>>* this_02;
        int local_40[3];
        float local_34;

        lVar1 = field_0;
        this_00 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar1 + 408);
        local_34 = param_2;
        pvVar4 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                     shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(this_00);
        iVar2 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
        if (param_1 < iVar2) {
            this_01 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(this_00);
            pvVar4 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](this_01, (long)param_1);
            lVar5 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
            if (lVar5 != 0) {
                this_02 = (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar1 + 264);
                local_34 = local_34 * 255.0;
                uVar11 = 0;
                do {
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pvVar4, uVar11);
                    iVar2 = *piVar6;
                    pAVar7 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(this_02);
                    pbVar8 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar7, (long)iVar2);
                    local_40[2] = jag::math::RoundFloatToInt((float)*pbVar8 + local_34);
                    local_40[0] = 0;
                    local_40[1] = 255;
                    iVar3 = jag::math::Clamp<int>(local_40 + 2, local_40, local_40 + 1);
                    local_40[2] = iVar3;
                    pAVar7 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(this_02);
                    puVar9 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar7, (long)iVar2);
                    *puVar9 = (char)iVar3;
                    uVar11 = uVar11 + 1;
                    uVar10 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
                } while (uVar11 < uVar10);
            }
        }
    }

    // 0x100379d60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenUnlit::ModelRSevenUnlit(shared_ptr<jag::graphics::Model>&&, bool): jumps straight to the base-object constructor

    // 0x100379d70, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenUnlit::ModelRSevenUnlit(shared_ptr<jag::graphics::Model>&&, bool)
    void ModelRSevenUnlit::ModelRSevenUnlit(shared_ptr* param_1, bool param_2) {
        new (this) ModelUnlit();
        new (&field_24, param_1, param_2) ModelRSevenCommon();
        field_0 = &PTR__ModelRSevenLit_100efc4e8;
    }

    // 0x100379dc0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenCommon::ModelRSevenCommon(shared_ptr<jag::graphics::Model>&&, bool)
    void ModelRSevenCommon::ModelRSevenCommon(shared_ptr* param_1, bool param_2) {
        new (this) OperationBuffer();
        new (field_16) ShareLightBuffer();
        field_72 = param_2;
        AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model>>(this, param_1);
    }

    // 0x100379e20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OperationBuffer::OperationBuffer(): jumps straight to the base-object constructor

    // 0x100379e30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightBuffer::ShareLightBuffer(): jumps straight to the base-object constructor

    // 0x100379e40, 144 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model> >(shared_ptr<jag::graphics::Model>&&)
    void ModelRSevenCommon::AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model>>(shared_ptr* param_1) {
        shared_ptr local_40;
        shared_ptr local_30;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<SetModelOperation, shared_ptr<jag::graphics::Model>>((jag*)&local_40, param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddOperation(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100379ed0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OperationBuffer::OperationBuffer()
    void OperationBuffer::OperationBuffer() {
        shared_ptr local_28;

        make_shared<OperationBuffer::OperationImpl>((jag*)&local_28);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
    }

    // 0x100379f20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightBuffer::ShareLightBuffer()
    void ShareLightBuffer::ShareLightBuffer() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16) eastl::vector<ShareLightRequest, eastl::allocator>();
        m_prepared = 0;
    }

    // 0x10037a0b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SetModelOperation::SetModelOperation(shared_ptr<jag::graphics::Model>&&): jumps straight to the base-object constructor

    // 0x10037a0c0, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SetModelOperation::SetModelOperation(shared_ptr<jag::graphics::Model>&&)
    void SetModelOperation::SetModelOperation(shared_ptr* param_1) {
        NXTPixToolkit* this_00;
        AABB* this_01;
        Model* this_02;
        undefined1* this_03;

        new (this) Operation(9);
        field_0 = &PTR_Apply_100efc168;
        this_03 = field_16;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this_03, param_1);
        if (!this_03->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_model",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.h",
                      363, "Model may not be null.");
        }
        this_00 =
            (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this_03);
        this_01 = (AABB*)this_00->GetScreen();
        if (this_01->IsValid() == '\0') {
            this_02 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this_03);
            this_02->UpdateAABB();
        }
    }

    // 0x10037a210, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SetModelOperation::~SetModelOperation(): jumps straight to the base-object destructor

    // 0x10037a220, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // SetModelOperation::~SetModelOperation()
    void SetModelOperation::~SetModelOperation() {
        field_0 = &PTR_Apply_100efc168;
        field_16->~shared_ptr();
    }

    // 0x10037a360, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FixNormalsOperation::FixNormalsOperation(): jumps straight to the base-object constructor

    // 0x10037a370, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FixNormalsOperation::FixNormalsOperation()
    void FixNormalsOperation::FixNormalsOperation() {
        new (this) BatchMapBaseOperation(3);
        field_0 = &PTR_Apply_100efc4a0;
    }

    // 0x10037a3a0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BatchMapBaseOperation::BatchMapBaseOperation(Operation::Type)
    void BatchMapBaseOperation::BatchMapBaseOperation() {
        GeometryEditBaseOperation::GeometryEditBaseOperation();
        field_0 = &PTR_Apply_100efc310;
    }

    // 0x10037a420, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenUnlit::ModelRSevenUnlit(ModelRSevenUnlit const&): jumps straight to the base-object constructor

    // 0x10037a430, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelRSevenUnlit::ModelRSevenUnlit(ModelRSevenUnlit const&)
    void ModelRSevenUnlit::ModelRSevenUnlit(ModelRSevenUnlit* param_1) {
        new (this) ModelUnlit(param_1);
        new (&field_24, (ModelRSevenCommon*)&param_1->field_24) ModelRSevenCommon();
        field_0 = &PTR__ModelRSevenLit_100efc4e8;
    }

    // 0x10037a610, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CombineOperation::CombineOperation(eastl::vector<OperationBuffer, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x10037a620, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // CombineOperation::CombineOperation(eastl::vector<OperationBuffer, eastl::allocator>&&)
    void CombineOperation::CombineOperation(vector* param_1) {
        new (this) Operation(1);
        field_0 = &PTR_Apply_100efc1d8;
        new (&field_16, param_1) eastl::vector<OperationBuffer, eastl::allocator>();
        make_shared<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>((jag*)&field_48);
    }

    // 0x10037a9b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // CombineOperation::~CombineOperation(): jumps straight to the base-object destructor

    // 0x10037a9c0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // CombineOperation::~CombineOperation()
    void CombineOperation::~CombineOperation() {
        field_0 = &PTR_Apply_100efc1d8;
        (&field_48)->~shared_ptr();
        (&field_16)->~vector();
    }

    // 0x10037aab0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CombineOperation::CombineOperation(OperationBuffer const&): jumps straight to the base-object constructor

    // 0x10037aac0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // CombineOperation::CombineOperation(OperationBuffer const&)
    void CombineOperation::CombineOperation(OperationBuffer* param_1) {
        new (this) Operation(1);
        field_0 = &PTR_Apply_100efc1d8;
        new (&field_16) eastl::vector<OperationBuffer, eastl::allocator>();
        make_shared<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>((jag*)&field_48);
        (&field_16, param_1)->push_back();
    }

    // 0x10037ac60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // HillSkewOperation::HillSkewOperation(jag::math::Vector3T<int>, int, int, bool): jumps straight to the base-object constructor

    // 0x10037ac70, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // HillSkewOperation::HillSkewOperation(jag::math::Vector3T<int>, int, int, bool)
    void HillSkewOperation::HillSkewOperation(undefined8 param_2, int param_3, undefined4 param_4, undefined4 param_5,
                                              undefined1 param_6) {
        new (this) Operation(4);
        field_0 = &PTR_Apply_100efc430;
        *(undefined8*)&field_12 = param_2;
        field_20 = param_3;
        field_24 = param_4;
        field_28 = param_5;
        field_32 = param_6;
    }

    // 0x10037ae10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LightOperation::LightOperation(int, int, jag::math::Vector3T<int>): jumps straight to the base-object constructor

    // 0x10037ae20, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LightOperation::LightOperation(int, int, jag::math::Vector3T<int>)
    void LightOperation::LightOperation(int param_1, undefined4 param_2, undefined8 param_4, undefined4 param_5) {
        undefined1 auVar1[12];
        LocationData local_40;
        undefined8 local_30;
        undefined4 local_28;

        local_30 = param_4;
        local_28 = param_5;
        new (this) Operation(5);
        field_0 = &PTR_Apply_100efc468;
        field_12 = param_1;
        field_16 = param_2;
        new (&local_40) rs2lib::worldmap::LocationData(1, -1, 1);
        auVar1 = jag::math::operator*((Vector3T*)&local_40, (Vector3T*)&local_30);
        *&field_20 = auVar1;
    }

    // 0x10037b060, 64 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TransformOperation::TransformOperation(jag::math::Matrix44T<float>)
    void TransformOperation::TransformOperation(Matrix44T param_1) {
        TransformOperation(this, param_1);
    }

    // 0x10037b0a0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TransformOperation::TransformOperation(jag::math::Matrix44T<float>)
    void TransformOperation::TransformOperation(Matrix44T param_1) {
        undefined8 in_stack_00000040;

        new (this) Operation(12);
        field_0 = &PTR_Apply_100efc1a0;
        field_16 = param_1._0_4_;
        field_20 = param_1._4_4_;
        field_24 = (float)param_1._8_4_;
        *(undefined4*)&field_28 = param_1._12_4_;
        field_32 = param_1._16_8_;
        field_40 = param_1._24_8_;
        field_48 = param_1._32_8_;
        field_56 = param_1._40_8_;
        field_64 = param_1._48_8_;
        field_72 = in_stack_00000040;
    }

    // 0x10037b220, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RecolourOperation::RecolourOperation(unsigned short, unsigned short): jumps straight to the base-object constructor

    // 0x10037b230, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RecolourOperation::RecolourOperation(unsigned short, unsigned short)
    void RecolourOperation::RecolourOperation(ushort param_1, ushort param_2) {
        new (this) BatchMapBaseOperation(7);
        field_0 = &PTR_Apply_100efc358;
        field_12 = param_1;
        field_14 = param_2;
        new (&field_16) eastl::vector<std::pair<unsigned short, unsigned short>, eastl::allocator>();
    }

    // 0x10037b390, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // RecolourOperation::~RecolourOperation(): jumps straight to the base-object destructor

    // 0x10037b3a0, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // RecolourOperation::~RecolourOperation()
    void RecolourOperation::~RecolourOperation() {
        field_0 = &PTR_Apply_100efc358;
        (&field_16)->~vector();
    }

    // 0x10037b500, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RetextureOperation::RetextureOperation(unsigned short, unsigned short): jumps straight to the base-object constructor

    // 0x10037b510, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RetextureOperation::RetextureOperation(unsigned short, unsigned short)
    void RetextureOperation::RetextureOperation(ushort param_1, ushort param_2) {
        new (this) BatchMapBaseOperation(8);
        field_0 = &PTR_Apply_100efc3a0;
        field_12 = param_1;
        field_14 = param_2;
    }

    // 0x10037b660, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MirrorOperation::MirrorOperation(): jumps straight to the base-object constructor

    // 0x10037b670, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MirrorOperation::MirrorOperation()
    void MirrorOperation::MirrorOperation() {
        new (this) BatchMapBaseOperation(6);
        field_0 = &PTR_Apply_100efc3e8;
    }

    // 0x10037b7d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DashAnimateOperation::DashAnimateOperation(shared_ptr<AnimFrameSet> const&, int): jumps straight to the base-object constructor

    // 0x10037b7e0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DashAnimateOperation::DashAnimateOperation(shared_ptr<AnimFrameSet> const&, int)
    void DashAnimateOperation::DashAnimateOperation(shared_ptr* param_1, int param_2) {
        new (this) AnimateBaseOperation(2);
        field_0 = &PTR_Apply_100efc290;
        new (&field_64, param_1) shared_ptr<Decor>();
        field_80 = param_2;
        new (&field_88, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_104 = false;
    }

    // 0x10037b860, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimateBaseOperation::AnimateBaseOperation(Operation::Type)
    void AnimateBaseOperation::AnimateBaseOperation() {
        Operation::Operation();
        field_0 = &PTR_Apply_100efc210;
        new (&field_16) eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                          eastl::vector<unsigned short, eastl::allocator>>>();
    }

    // 0x10037b890, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // AnimateBaseOperation::~AnimateBaseOperation()
    void AnimateBaseOperation::~AnimateBaseOperation() {
        field_0 = &PTR_Apply_100efc210;
        (&field_16)->~optional();
    }

    // 0x10037b9e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DashAnimateOperation::~DashAnimateOperation(): jumps straight to the base-object destructor

    // 0x10037b9f0, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DashAnimateOperation::~DashAnimateOperation()
    void DashAnimateOperation::~DashAnimateOperation() {
        field_0 = &PTR_Apply_100efc290;
        (&field_88)->~shared_ptr();
        (&field_64)->~shared_ptr();
        ~AnimateBaseOperation();
    }

    // 0x10037ba70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::MayaPoseStateRSeven(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int): jumps straight to the base-object constructor

    // 0x10037ba80, 224 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::MayaPoseStateRSeven(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int)
    void MayaPoseStateRSeven::MayaPoseStateRSeven(shared_ptr* param_1, int param_2) {
        new (this) PoseStateRSeven(3);
        field_0 = &PTR_GetJointTransform_100efaf68;
        new (field_16, param_1) shared_ptr<Decor>();
        field_32 = param_2;
        new (field_40, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_56 = false;
        std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_64);
        new (&field_72) eastl::vector_map<int, float, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, float>, eastl::allocator>>();
        if (!field_16->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_frameSet",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      325, "Frameset may not be null.");
        }
    }

    // 0x10037bed0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::~MayaPoseStateRSeven(): jumps straight to the base-object destructor

    // 0x10037bee0, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::~MayaPoseStateRSeven()
    void MayaPoseStateRSeven::~MayaPoseStateRSeven() {
        field_0 = &PTR_GetJointTransform_100efaf68;
        (&field_72)->~vector_map();
        (&field_64)->~unique_ptr();
        field_40->~shared_ptr();
        field_16->~shared_ptr();
    }

    // 0x10037c040, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimateOperation::AnimateOperation(shared_ptr<PoseStateRSeven> const&): jumps straight to the base-object constructor

    // 0x10037c050, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimateOperation::AnimateOperation(shared_ptr<PoseStateRSeven> const&)
    void AnimateOperation::AnimateOperation(shared_ptr* param_1) {
        new (this) AnimateBaseOperation(0);
        field_0 = &PTR_Apply_100efc250;
        new (field_64, param_1) shared_ptr<Decor>();
        if (!field_64->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pose",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.h",
                      758, "Pose may not be null.");
        }
    }

    // 0x10037c180, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // AnimateOperation::~AnimateOperation(): jumps straight to the base-object destructor

    // 0x10037c190, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // AnimateOperation::~AnimateOperation()
    void AnimateOperation::~AnimateOperation() {
        field_0 = &PTR_Apply_100efc250;
        field_64->~shared_ptr();
        ~AnimateBaseOperation();
    }

    // 0x10037c1e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::MayaPoseStateRSeven(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int, Array<bool, eastl::allocator> const&, bool): jumps straight to the base-object constructor

    // 0x10037c1f0, 240 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::MayaPoseStateRSeven(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int, Array<bool, eastl::allocator> const&, bool)
    void MayaPoseStateRSeven::MayaPoseStateRSeven(shared_ptr* param_1, int param_2, Array* param_3, bool param_4) {
        new (this) PoseStateRSeven(3);
        field_0 = &PTR_GetJointTransform_100efaf68;
        new (field_16, param_1) shared_ptr<Decor>();
        field_32 = param_2;
        make_shared<Array<bool, eastl::allocator>, Array<bool, eastl::allocator> const&>((jag*)field_40, param_3);
        field_56 = param_4;
        std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_64);
        new (&field_72) eastl::vector_map<int, float, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, float>, eastl::allocator>>();
        if (!field_16->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_frameSet",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      339, "Frameset may not be null.");
        }
    }

    // 0x10037c540, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DashAnimateOperation::DashAnimateOperation(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool): jumps straight to the base-object constructor

    // 0x10037c550, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DashAnimateOperation::DashAnimateOperation(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool)
    void DashAnimateOperation::DashAnimateOperation(shared_ptr* param_1, int param_2, Array* param_3, bool param_4) {
        new (this) AnimateBaseOperation(2);
        field_0 = &PTR_Apply_100efc290;
        new (&field_64, param_1) shared_ptr<Decor>();
        field_80 = param_2;
        make_shared<Array<int, eastl::allocator>, Array<int, eastl::allocator> const&>((jag*)&field_88, param_3);
        field_104 = param_4;
    }

} // namespace jag::oldscape::dash3d

// 0x10037af40, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x10037af50, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

namespace jag::math {
    // 0x100379c90, 112 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::SetToDiagonal(float, float, float, float)
    void Matrix44T<float>::SetToDiagonal(float param_1, float param_2, float param_3, float param_4) {
        Matrix44T<float>* in_RDI;

        Set(in_RDI, param_1, 0.0, 0.0, 0.0, 0.0, param_2, 0.0, 0.0, 0.0, 0.0, param_3, 0.0, 0.0, 0.0, 0.0, param_4);
    }

} // namespace jag::math
