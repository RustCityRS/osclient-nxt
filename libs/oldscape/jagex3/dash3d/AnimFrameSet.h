// libs/oldscape/jagex3/dash3d/AnimFrameSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x100377310
    oldscape::dash3d::AnimBase*
    placement_new<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char>>&>(
        void* arg1, int& arg2, oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        new (arg1) oldscape::dash3d::AnimBase(arg2, packetJ);
        return arg1;
    }

    // 0x100377330
    ref_counter_shared<oldscape::dash3d::AnimBase>*
    placement_new<ref_counter_shared<oldscape::dash3d::AnimBase>, int, oldscape::dash3d::AnimBase*&>(
        void* arg1, int&& arg2, oldscape::dash3d::AnimBase*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::AnimBase>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100377360
    ref_counter_shared<oldscape::dash3d::AnimBase>::ref_counter_shared(unsigned long arg1,
                                                                       oldscape::dash3d::AnimBase* animBase)
        : ref_counter_base() {}

    // 0x1003773a0
    void ref_counter_shared<oldscape::dash3d::AnimBase>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::AnimBase> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((AnimBase*)((long)&(this[3]._vptr)->_dtor + lVar2))->~AnimBase();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::AnimBase> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 152;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1003774d0
    Array<signed char>* placement_new<Array<signed char>, Array<signed char>&>(void* arg1, Array<signed char>& arg2) {
        new (arg1) Array<signed char>(arg2);
        return arg1;
    }

    // 0x1003774f0
    ref_counter_shared<Array<signed char>>*
    placement_new<ref_counter_shared<Array<signed char>>, int, Array<signed char>*&>(void* arg1, int&& arg2,
                                                                                     Array<signed char>*& arg3) {
        new (arg1) ref_counter_shared<Array<signed char>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100377520
    ref_counter_shared<Array<signed char>>::ref_counter_shared(unsigned long arg1, Array<signed char>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7408 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<signed char>**)(this + 24) = arg2;
    }

    // 0x100377560
    void ref_counter_shared<Array<signed char>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<signed char>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100378e30
    Array<signed char>* placement_new<Array<signed char>, unsigned long>(void* arg1, unsigned long&& arg2) {
        new (arg1) Array<signed char>(arg2);
        return arg1;
    }

    // 0x100379960
    Array<signed char>* placement_new<Array<signed char>, unsigned long&, signed char&>(void* arg1, unsigned long& arg2,
                                                                                        signed char& arg3) {
        new (arg1) Array<signed char>(arg2, arg3);
        return arg1;
    }

    // 0x100379a50
    Array<short>* placement_new<Array<short>, unsigned long&, short>(void* arg1, unsigned long& arg2, short&& arg3) {
        new (arg1) Array<short>(arg2, arg3);
        return arg1;
    }

    // 0x100379a70
    ref_counter_shared<Array<short>>*
    placement_new<ref_counter_shared<Array<short>>, int, Array<short>*&>(void* arg1, int&& arg2, Array<short>*& arg3) {
        new (arg1) ref_counter_shared<Array<short>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100379ba0
    ref_counter_shared<Array<short>>::ref_counter_shared(unsigned long arg1, Array<short>* arg2) : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7428 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<short>**)(this + 24) = arg2;
    }

    // 0x100379be0
    void ref_counter_shared<Array<short>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<short>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100379d00
    graphics::Model* placement_new<graphics::Model>(void* arg1) {
        new (arg1) graphics::Model();
        return arg1;
    }

    // 0x100379d20
    oldscape::dash3d::ModelRSevenUnlit* placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>>(
        void* arg1, shared_ptr<graphics::Model>&& model) {
        new (arg1) oldscape::dash3d::ModelRSevenUnlit(model, false);
        return arg1;
    }

    // 0x100379d40
    ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>*
    placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int, oldscape::dash3d::ModelRSevenUnlit*&>(
        void* arg1, int&& arg2, oldscape::dash3d::ModelRSevenUnlit*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100379fd0
    shared_ptr_if_not_array<oldscape::dash3d::SetModelOperation>::type
    make_shared<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model>>(shared_ptr<graphics::Model>&& model) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        SetModelOperation* local_30[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::SetModelOperation>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model>>(
                (void*)((long)arg1 + 32), model);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::SetModelOperation>, int,
                              oldscape::dash3d::SetModelOperation*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037a070
    oldscape::dash3d::SetModelOperation*
    placement_new<oldscape::dash3d::SetModelOperation, shared_ptr<graphics::Model>>(
        void* arg1, shared_ptr<graphics::Model>&& model) {
        new (arg1) oldscape::dash3d::SetModelOperation(model);
        return arg1;
    }

    // 0x10037a090
    ref_counter_shared<oldscape::dash3d::SetModelOperation>*
    placement_new<ref_counter_shared<oldscape::dash3d::SetModelOperation>, int, oldscape::dash3d::SetModelOperation*&>(
        void* arg1, int&& arg2, oldscape::dash3d::SetModelOperation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::SetModelOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037a180
    ref_counter_shared<oldscape::dash3d::SetModelOperation>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::SetModelOperation* setModelOperation)
        : ref_counter_base() {}

    // 0x10037a1c0
    void ref_counter_shared<oldscape::dash3d::SetModelOperation>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::SetModelOperation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((SetModelOperation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~SetModelOperation();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::SetModelOperation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037a250
    ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ModelRSevenUnlit* modelRSevenUnlit)
        : ref_counter_base() {}

    // 0x10037a290
    shared_ptr_if_not_array<oldscape::dash3d::FixNormalsOperation>::type
    make_shared<oldscape::dash3d::FixNormalsOperation>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        FixNormalsOperation* local_28[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::FixNormalsOperation>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::FixNormalsOperation>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>, int,
                              oldscape::dash3d::FixNormalsOperation*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10037a320
    oldscape::dash3d::FixNormalsOperation* placement_new<oldscape::dash3d::FixNormalsOperation>(void* arg1) {
        new (arg1) oldscape::dash3d::FixNormalsOperation();
        return arg1;
    }

    // 0x10037a340
    ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>, int,
                  oldscape::dash3d::FixNormalsOperation*&>(void* arg1, int&& arg2,
                                                           oldscape::dash3d::FixNormalsOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037a3d0
    ref_counter_shared_trivial<oldscape::dash3d::FixNormalsOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::FixNormalsOperation* fixNormalsOperation)
        : ref_counter_base() {}

    // 0x10037a400
    oldscape::dash3d::ModelRSevenUnlit*
    placement_new<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit&>(
        void* arg1, oldscape::dash3d::ModelRSevenUnlit& modelRSevenUnlit) {
        new (arg1) oldscape::dash3d::ModelRSevenUnlit(modelRSevenUnlit);
        return arg1;
    }

    // 0x10037a530
    shared_ptr_if_not_array<oldscape::dash3d::CombineOperation>::type
    make_shared<oldscape::dash3d::CombineOperation, eastl::vector<oldscape::dash3d::OperationBuffer>>(
        eastl::vector<oldscape::dash3d::OperationBuffer>&& operationBuffers) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        CombineOperation* local_30[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::CombineOperation>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::dash3d::CombineOperation, eastl::vector<oldscape::dash3d::OperationBuffer>>(
                    (void*)((long)arg1 + 32), operationBuffers);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int,
                              oldscape::dash3d::CombineOperation*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037a5d0
    oldscape::dash3d::CombineOperation*
    placement_new<oldscape::dash3d::CombineOperation, eastl::vector<oldscape::dash3d::OperationBuffer>>(
        void* arg1, eastl::vector<oldscape::dash3d::OperationBuffer>&& operationBuffers) {
        new (arg1) oldscape::dash3d::CombineOperation(operationBuffers);
        return arg1;
    }

    // 0x10037a5f0
    ref_counter_shared<oldscape::dash3d::CombineOperation>*
    placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int, oldscape::dash3d::CombineOperation*&>(
        void* arg1, int&& arg2, oldscape::dash3d::CombineOperation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::CombineOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037a690
    shared_ptr_if_not_array<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::type
    make_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>() {
        ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange> _>* ref_counter_shared;
        int local_2c;
        vector<oldscape::dash3d::CombineOperation::LabelShiftRange>* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::type result;
        } else {
            local_28[0] = placement_new<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>,
                              int, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>*&>(
                    arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10037a770
    eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>*
    placement_new<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>(void* arg1) {
        new (arg1) eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>();
        return arg1;
    }

    // 0x10037a790
    ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>*
    placement_new<ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>, int,
                  eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>*&>(
        void* arg1, int&& arg2, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>*& arg3) {
        new (arg1)
            ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037a830
    ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::ref_counter_shared(
        unsigned long arg1, eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>* labelShiftRanges)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71f0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(vector<oldscape::dash3d::CombineOperation::LabelShiftRange>**)(this + 24) = labelShiftRanges;
    }

    // 0x10037a870
    void ref_counter_shared<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((vector<oldscape::dash3d::CombineOperation::LabelShiftRange>*)(*(long*)(this + 24) + lVar2))
                        ->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10037a920
    ref_counter_shared<oldscape::dash3d::CombineOperation>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::CombineOperation* combineOperation)
        : ref_counter_base() {}

    // 0x10037a960
    void ref_counter_shared<oldscape::dash3d::CombineOperation>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::CombineOperation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((CombineOperation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~CombineOperation();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::CombineOperation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037a9f0
    shared_ptr_if_not_array<oldscape::dash3d::CombineOperation>::type
    make_shared<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer const&>(
        const oldscape::dash3d::OperationBuffer& operationBuffer) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        CombineOperation* local_30[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::CombineOperation>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer const&>(
                (void*)((long)arg1 + 32), operationBuffer);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::CombineOperation>, int,
                              oldscape::dash3d::CombineOperation*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037aa90
    oldscape::dash3d::CombineOperation*
    placement_new<oldscape::dash3d::CombineOperation, oldscape::dash3d::OperationBuffer const&>(
        void* arg1, const oldscape::dash3d::OperationBuffer& operationBuffer) {
        new (arg1) oldscape::dash3d::CombineOperation(operationBuffer);
        return arg1;
    }

    // 0x10037ab40
    shared_ptr_if_not_array<oldscape::dash3d::HillSkewOperation>::type
    make_shared<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(
        math::Vector3T<int>&& vector3, int& arg2, int& arg3, bool&& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        HillSkewOperation* local_40[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::HillSkewOperation>::type result;
        } else {
            local_40[0] = placement_new<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(
                (void*)((long)arg1 + 16), vector3, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>, int,
                              oldscape::dash3d::HillSkewOperation*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10037ac00
    oldscape::dash3d::HillSkewOperation*
    placement_new<oldscape::dash3d::HillSkewOperation, math::Vector3T<int>, int&, int&, bool>(
        void* arg1, math::Vector3T<int>&& vector3, int& arg3, int& arg4, bool&& arg5) {
        new (arg1)
            oldscape::dash3d::HillSkewOperation(*(Vector3T<int>**)vector3, *(int*)(vector3 + 8), arg3, (uint8_t)(arg4));
        return arg1;
    }

    // 0x10037ac40
    ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>, int,
                  oldscape::dash3d::HillSkewOperation*&>(void* arg1, int&& arg2,
                                                         oldscape::dash3d::HillSkewOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037ace0
    ref_counter_shared_trivial<oldscape::dash3d::HillSkewOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::HillSkewOperation* hillSkewOperation)
        : ref_counter_base() {}

    // 0x10037ad10
    shared_ptr_if_not_array<oldscape::dash3d::LightOperation>::type
    make_shared<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int>>(int& arg1, int& arg2,
                                                                                   math::Vector3T<int>&& vector3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        LightOperation* local_40[2];

        auto arg1_00 = aligned_alloc(48, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::LightOperation>::type result;
        } else {
            local_40[0] = placement_new<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int>>(
                (void*)((long)arg1_00 + 16), arg1, arg2, vector3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightOperation>, int,
                              oldscape::dash3d::LightOperation*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10037adc0
    oldscape::dash3d::LightOperation*
    placement_new<oldscape::dash3d::LightOperation, int&, int&, math::Vector3T<int>>(void* arg1, int& arg2, int& arg3,
                                                                                     math::Vector3T<int>&& vector3) {
        new (arg1) oldscape::dash3d::LightOperation(arg2, arg3, *(Vector3T<int>**)vector3);
        return arg1;
    }

    // 0x10037adf0
    ref_counter_shared_trivial<oldscape::dash3d::LightOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightOperation>, int,
                  oldscape::dash3d::LightOperation*&>(void* arg1, int&& arg2, oldscape::dash3d::LightOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::LightOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037aeb0
    ref_counter_shared_trivial<oldscape::dash3d::LightOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::LightOperation* lightOperation)
        : ref_counter_base() {}

    // 0x10037aee0
    oldscape::dash3d::ModelRSevenLit*
    placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                  oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
        void* arg1, oldscape::dash3d::ModelRSevenLit::LightCall&& lightCall,
        oldscape::dash3d::ModelRSevenUnlit& modelRSevenUnlit, int& arg4, int& arg5, int& arg6, int& arg7, int& arg8) {
        new (arg1) oldscape::dash3d::ModelRSevenLit(arg7, modelRSevenUnlit, arg4, arg5, arg6, arg7, arg8);
        return arg1;
    }

    // 0x10037af20
    oldscape::dash3d::ModelRSevenLit*
    placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                  oldscape::dash3d::ModelRSevenUnlit&>(void* arg1,
                                                       oldscape::dash3d::ModelRSevenLit::LightCall&& lightCall,
                                                       oldscape::dash3d::ModelRSevenUnlit& modelRSevenUnlit) {
        new (arg1) oldscape::dash3d::ModelRSevenLit((LightCall)lightCall, modelRSevenUnlit);
        return arg1;
    }

    // 0x10037af60
    shared_ptr_if_not_array<oldscape::dash3d::TransformOperation>::type
    make_shared<oldscape::dash3d::TransformOperation, math::Matrix44T<float>>(math::Matrix44T<float>&& matrix44) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        TransformOperation* local_30[2];

        auto arg1 = aligned_alloc(96, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::TransformOperation>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::TransformOperation, math::Matrix44T<float>>(
                (void*)((long)arg1 + 16), matrix44);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>, int,
                              oldscape::dash3d::TransformOperation*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037b000
    oldscape::dash3d::TransformOperation*
    placement_new<oldscape::dash3d::TransformOperation, math::Matrix44T<float>>(void* arg1,
                                                                                math::Matrix44T<float>&& matrix44) {
        new (arg1) oldscape::dash3d::TransformOperation(matrix44);
        return arg1;
    }

    // 0x10037b040
    ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>, int,
                  oldscape::dash3d::TransformOperation*&>(void* arg1, int&& arg2,
                                                          oldscape::dash3d::TransformOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037b100
    ref_counter_shared_trivial<oldscape::dash3d::TransformOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::TransformOperation* transformOperation)
        : ref_counter_base() {}

    // 0x10037b130
    shared_ptr_if_not_array<oldscape::dash3d::RecolourOperation>::type
    make_shared<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(unsigned short&& arg1,
                                                                                     unsigned short&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        RecolourOperation* local_38[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::RecolourOperation>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(
                (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::RecolourOperation>, int,
                              oldscape::dash3d::RecolourOperation*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10037b1e0
    oldscape::dash3d::RecolourOperation*
    placement_new<oldscape::dash3d::RecolourOperation, unsigned short, unsigned short>(void* arg1,
                                                                                       unsigned short&& arg2,
                                                                                       unsigned short&& arg3) {
        new (arg1) oldscape::dash3d::RecolourOperation(arg2, arg3);
        return arg1;
    }

    // 0x10037b200
    ref_counter_shared<oldscape::dash3d::RecolourOperation>*
    placement_new<ref_counter_shared<oldscape::dash3d::RecolourOperation>, int, oldscape::dash3d::RecolourOperation*&>(
        void* arg1, int&& arg2, oldscape::dash3d::RecolourOperation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::RecolourOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037b300
    ref_counter_shared<oldscape::dash3d::RecolourOperation>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::RecolourOperation* recolourOperation)
        : ref_counter_base() {}

    // 0x10037b340
    void ref_counter_shared<oldscape::dash3d::RecolourOperation>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::RecolourOperation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((RecolourOperation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~RecolourOperation();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::RecolourOperation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037b410
    shared_ptr_if_not_array<oldscape::dash3d::RetextureOperation>::type
    make_shared<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(unsigned short&& arg1,
                                                                                      unsigned short&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        RetextureOperation* local_38[2];

        auto arg1_00 = aligned_alloc(32, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::RetextureOperation>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(
                (void*)((long)arg1_00 + 16), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>, int,
                              oldscape::dash3d::RetextureOperation*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10037b4c0
    oldscape::dash3d::RetextureOperation*
    placement_new<oldscape::dash3d::RetextureOperation, unsigned short, unsigned short>(void* arg1,
                                                                                        unsigned short&& arg2,
                                                                                        unsigned short&& arg3) {
        new (arg1) oldscape::dash3d::RetextureOperation(arg2, arg3);
        return arg1;
    }

    // 0x10037b4e0
    ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>, int,
                  oldscape::dash3d::RetextureOperation*&>(void* arg1, int&& arg2,
                                                          oldscape::dash3d::RetextureOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037b560
    ref_counter_shared_trivial<oldscape::dash3d::RetextureOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::RetextureOperation* retextureOperation)
        : ref_counter_base() {}

    // 0x10037b590
    shared_ptr_if_not_array<oldscape::dash3d::MirrorOperation>::type make_shared<oldscape::dash3d::MirrorOperation>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MirrorOperation* local_28[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::MirrorOperation>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::MirrorOperation>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>, int,
                              oldscape::dash3d::MirrorOperation*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10037b620
    oldscape::dash3d::MirrorOperation* placement_new<oldscape::dash3d::MirrorOperation>(void* arg1) {
        new (arg1) oldscape::dash3d::MirrorOperation();
        return arg1;
    }

    // 0x10037b640
    ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>, int,
                  oldscape::dash3d::MirrorOperation*&>(void* arg1, int&& arg2,
                                                       oldscape::dash3d::MirrorOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037b6b0
    ref_counter_shared_trivial<oldscape::dash3d::MirrorOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::MirrorOperation* mirrorOperation)
        : ref_counter_base() {}

    // 0x10037b6e0
    shared_ptr_if_not_array<oldscape::dash3d::DashAnimateOperation>::type
    make_shared<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&>(
        const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DashAnimateOperation* local_38[2];

        auto arg1 = aligned_alloc(144, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::DashAnimateOperation>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                              int&>((void*)((long)arg1 + 32), animFrameSet, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int,
                              oldscape::dash3d::DashAnimateOperation*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10037b790
    oldscape::dash3d::DashAnimateOperation*
    placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&>(
        void* arg1, const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, int& arg3) {
        new (arg1) oldscape::dash3d::DashAnimateOperation(animFrameSet, arg3);
        return arg1;
    }

    // 0x10037b7b0
    ref_counter_shared<oldscape::dash3d::DashAnimateOperation>*
    placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int,
                  oldscape::dash3d::DashAnimateOperation*&>(void* arg1, int&& arg2,
                                                            oldscape::dash3d::DashAnimateOperation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::DashAnimateOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037b950
    ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::DashAnimateOperation* dashAnimateOperation)
        : ref_counter_base() {}

    // 0x10037b990
    void ref_counter_shared<oldscape::dash3d::DashAnimateOperation>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::DashAnimateOperation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((DashAnimateOperation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~DashAnimateOperation();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::DashAnimateOperation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 112;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037ba30
    oldscape::dash3d::MayaPoseStateRSeven*
    placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                  shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
        void* arg1, const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
        int& arg3) {
        new (arg1) oldscape::dash3d::MayaPoseStateRSeven(oldscapeAnimKeyFrameSet, arg3);
        return arg1;
    }

    // 0x10037ba50
    ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>*
    placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int,
                  oldscape::dash3d::MayaPoseStateRSeven*&>(void* arg1, int&& arg2,
                                                           oldscape::dash3d::MayaPoseStateRSeven*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037be40
    ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::MayaPoseStateRSeven* mayaPoseStateRSeven)
        : ref_counter_base() {}

    // 0x10037be80
    void ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MayaPoseStateRSeven*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MayaPoseStateRSeven();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 112;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037bf30
    shared_ptr_if_not_array<oldscape::dash3d::AnimateOperation>::type
    make_shared<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>>(
        shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>&& mayaPoseStateRSeven) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        AnimateOperation* local_30[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::AnimateOperation>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>>(
                    (void*)((long)arg1 + 32), mayaPoseStateRSeven);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::AnimateOperation>, int,
                              oldscape::dash3d::AnimateOperation*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037bfd0
    oldscape::dash3d::AnimateOperation*
    placement_new<oldscape::dash3d::AnimateOperation, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>>(
        void* arg1, shared_ptr<oldscape::dash3d::MayaPoseStateRSeven>&& mayaPoseStateRSeven) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mayaPoseStateRSeven);
        new (arg1) oldscape::dash3d::AnimateOperation(local_28);
        return arg1;
    }

    // 0x10037c020
    ref_counter_shared<oldscape::dash3d::AnimateOperation>*
    placement_new<ref_counter_shared<oldscape::dash3d::AnimateOperation>, int, oldscape::dash3d::AnimateOperation*&>(
        void* arg1, int&& arg2, oldscape::dash3d::AnimateOperation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::AnimateOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037c0f0
    ref_counter_shared<oldscape::dash3d::AnimateOperation>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::AnimateOperation* animateOperation)
        : ref_counter_base() {}

    // 0x10037c130
    void ref_counter_shared<oldscape::dash3d::AnimateOperation>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::AnimateOperation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((AnimateOperation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~AnimateOperation();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::AnimateOperation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037c1c0
    oldscape::dash3d::MayaPoseStateRSeven*
    placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                  shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&, Array<bool>&, bool&>(
        void* arg1, const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
        int& arg3, Array<bool>& arg4, bool& arg5) {
        new (arg1) oldscape::dash3d::MayaPoseStateRSeven(oldscapeAnimKeyFrameSet, arg3, arg4, arg5);
        return arg1;
    }

    // 0x10037c2e0
    shared_ptr_if_not_array<Array<bool>>::type make_shared<Array<bool>, Array<bool> const&>(const Array<bool>& arg1) {
        ref_counter_shared<Array<bool> _>* ref_counter_shared;
        int local_34;
        Array<bool>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<bool>>::type result;
        } else {
            local_30[0] = placement_new<Array<bool>, Array<bool> const&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<bool>>, int, Array<bool>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037c380
    Array<bool>* placement_new<Array<bool>, Array<bool> const&>(void* arg1, const Array<bool>& arg2) {
        new (arg1) Array<bool>(arg2);
        return arg1;
    }

    // 0x10037c3a0
    ref_counter_shared<Array<bool>>*
    placement_new<ref_counter_shared<Array<bool>>, int, Array<bool>*&>(void* arg1, int&& arg2, Array<bool>*& arg3) {
        new (arg1) ref_counter_shared<Array<bool>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037c3d0
    ref_counter_shared<Array<bool>>::ref_counter_shared(unsigned long arg1, Array<bool>* arg2) : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7410 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<bool>**)(this + 24) = arg2;
    }

    // 0x10037c410
    void ref_counter_shared<Array<bool>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<bool>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10037c460
    shared_ptr_if_not_array<oldscape::dash3d::DashAnimateOperation>::type
    make_shared<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&,
                Array<int> const&, bool&>(const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, int& arg2,
                                          const Array<int>& arg3, bool& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        DashAnimateOperation* local_40[2];

        auto arg1 = aligned_alloc(144, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::DashAnimateOperation>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                              int&, Array<int> const&, bool&>((void*)((long)arg1 + 32), animFrameSet, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::DashAnimateOperation>, int,
                              oldscape::dash3d::DashAnimateOperation*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10037c520
    oldscape::dash3d::DashAnimateOperation*
    placement_new<oldscape::dash3d::DashAnimateOperation, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int&,
                  Array<int> const&, bool&>(void* arg1, const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet,
                                            int& arg3, const Array<int>& arg4, bool& arg5) {
        new (arg1) oldscape::dash3d::DashAnimateOperation(animFrameSet, arg3, arg4, arg5);
        return arg1;
    }

    // 0x10037c5e0
    shared_ptr_if_not_array<Array<int>>::type make_shared<Array<int>, Array<int> const&>(const Array<int>& arg1) {
        ref_counter_shared<Array<int> _>* ref_counter_shared;
        int local_34;
        Array<int>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<int>>::type result;
        } else {
            local_30[0] = placement_new<Array<int>, Array<int> const&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<int>>, int, Array<int>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10037c680
    Array<int>* placement_new<Array<int>, Array<int> const&>(void* arg1, const Array<int>& arg2) {
        new (arg1) Array<int>(arg2);
        return arg1;
    }

    // 0x10037c6a0
    ref_counter_shared<Array<int>>*
    placement_new<ref_counter_shared<Array<int>>, int, Array<int>*&>(void* arg1, int&& arg2, Array<int>*& arg3) {
        new (arg1) ref_counter_shared<Array<int>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037c6d0
    ref_counter_shared<Array<int>>::ref_counter_shared(unsigned long arg1, Array<int>* arg2) : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7420 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<int>**)(this + 24) = arg2;
    }

    // 0x10037c710
    void ref_counter_shared<Array<int>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<int>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10037c760
    shared_ptr_if_not_array<oldscape::dash3d::TintOperation>::type
    make_shared<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
        signed char& arg1, signed char& arg2, signed char& arg3, unsigned char& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        TintOperation* local_40[2];

        auto arg1_00 = aligned_alloc(48, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::TintOperation>::type result;
        } else {
            local_40[0] = placement_new<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&,
                                        unsigned char&>((void*)((long)arg1_00 + 16), arg1, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::TintOperation>, int,
                              oldscape::dash3d::TintOperation*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10037c820
    oldscape::dash3d::TintOperation*
    placement_new<oldscape::dash3d::TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
        void* arg1, signed char& arg2, signed char& arg3, signed char& arg4, unsigned char& arg5) {
        new (arg1) oldscape::dash3d::TintOperation(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x10037c850
    ref_counter_shared_trivial<oldscape::dash3d::TintOperation>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::TintOperation>, int, oldscape::dash3d::TintOperation*&>(
        void* arg1, int&& arg2, oldscape::dash3d::TintOperation*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::TintOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037c880
    ref_counter_shared_trivial<oldscape::dash3d::TintOperation>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::TintOperation* tintOperation)
        : ref_counter_base() {}

    // 0x10037c8b0
    oldscape::dash3d::ModelUnlitImpl*
    placement_new<oldscape::dash3d::ModelUnlitImpl,
                  eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(
        void* arg1, const eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>& modelUnlits) {
        new (arg1) oldscape::dash3d::ModelUnlitImpl(modelUnlits);
        return arg1;
    }

    // 0x10037c8d0
    ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>*
    placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int, oldscape::dash3d::ModelUnlitImpl*&>(
        void* arg1, int&& arg2, oldscape::dash3d::ModelUnlitImpl*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037c900
    ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ModelUnlitImpl* modelUnlitImpl)
        : ref_counter_base() {}

    // 0x10037c940
    void ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ModelUnlitImpl> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ModelUnlitImpl*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ModelUnlitImpl();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::ModelUnlitImpl> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 600;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10037c990
    oldscape::dash3d::ModelUnlitImpl*
    placement_new<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&, bool&,
                  bool&>(void* arg1, const oldscape::dash3d::ModelUnlitImpl& modelUnlitImpl, bool& arg3, bool& arg4,
                         bool& arg5, bool& arg6) {
        new (arg1) oldscape::dash3d::ModelUnlitImpl(modelUnlitImpl, arg3, arg4, arg5, arg6);
        return arg1;
    }

    // 0x10037cd10
    oldscape::dash3d::ModelUnlitImpl*
    placement_new<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(void* arg1,
                                                                                         unsigned char*& arg2,
                                                                                         unsigned long&& arg3,
                                                                                         int&& arg4) {
        new (arg1) oldscape::dash3d::ModelUnlitImpl(arg2, arg3, arg4);
        return arg1;
    }

    // 0x10037cd30
    Array<int>* placement_new<Array<int>, int&>(void* arg1, int& arg2) {
        new (arg1) Array<int>((long)*arg2);
        return arg1;
    }

    // 0x10037cd50
    Array<signed char>* placement_new<Array<signed char>, int&>(void* arg1, int& arg2) {
        new (arg1) Array<signed char>((long)*arg2);
        return arg1;
    }

    // 0x10037cd70
    Array<short>* placement_new<Array<short>, int&>(void* arg1, int& arg2) {
        new (arg1) Array<short>((long)*arg2);
        return arg1;
    }

    // 0x10037cde0
    Array<Array<int>>* placement_new<Array<Array<int>>, int&>(void* arg1, int& arg2) {
        new (arg1) Array<Array<int>>((long)*arg2);
        return arg1;
    }

    // 0x10037ce00
    ref_counter_shared<Array<Array<int>>>*
    placement_new<ref_counter_shared<Array<Array<int>>>, int, Array<Array<int>>*&>(void* arg1, int&& arg2,
                                                                                   Array<Array<int>>*& arg3) {
        new (arg1) ref_counter_shared<Array<Array<int>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037ce80
    ref_counter_shared<Array<Array<int>>>::ref_counter_shared(unsigned long arg1, Array<Array<int>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee73d0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<Array<int>>**)(this + 24) = arg2;
    }

    // 0x10037cec0
    void ref_counter_shared<Array<Array<int>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<Array<int>>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10037cf10
    oldscape::dash3d::LightSource* placement_new<oldscape::dash3d::LightSource>(void* arg1) {
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint32_t*)((long)arg1 + 16) = 0;
        new (arg1) game::EntityHighlightGlobalState::RadialHighlightState();
        return arg1;
    }

    // 0x10037cf40
    ref_counter_shared_trivial<oldscape::dash3d::LightSource>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightSource>, int, oldscape::dash3d::LightSource*&>(
        void* arg1, int&& arg2, oldscape::dash3d::LightSource*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::LightSource>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class AnimFrameSet {
    public:
        class EffectivelyPrivateConstructor;
        AnimFrameSet* Load(jagex3::Js5& js51, jagex3::Js5& js52, int arg3, bool arg4);
        unsigned int TryLoad(jagex3::Js5& js51, jagex3::Js5& js52, bool arg3);
        AnimFrameSet(EffectivelyPrivateConstructor effectivelyPrivateConstructor);
        void ResizePrecise(int arg1, int arg2, int arg3);
        uint8_t GetAnimateTransparencies(int arg1);
        void GetNumFrames();
        ~AnimFrameSet();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        AnimFrame* field_16;
        int field_24;
        uint8_t _unknown_28[4];
    };

    class AnimFrameSet::EffectivelyPrivateConstructor {
    public:
        EffectivelyPrivateConstructor(int arg1);
        EffectivelyPrivateConstructor(int resultType);
    };

    class AnimateBaseOperation {
    public:
        class SeparatedIndexCount;
        // virtual methods in vtable order
        virtual AnimateBaseOperation* Apply(const ResolvedModel& resolvedModel,
                                            const OperationRecordEntry* operationRecordEntry) const;
        void LoadTransparencyAffectedLabels(const jag::graphics::Model& model,
                                            const PoseStateRSeven& poseStateRSeven) const;
        ResolvedModel SeparateFacesByLabelTransparency(const ResolvedModel& resolvedModel1,
                                                       const ResolvedModel& resolvedModel2,
                                                       const OperationRecordEntry* operationRecordEntry) const;
        bool CanReusePreviousTransparencyBatching(const ResolvedModel& resolvedModel,
                                                  const OperationRecordEntry* operationRecordEntry) const;
        void SeparateBatchByLabelTransparency(
            const jag::graphics::GeometryBatchInstance& geometryBatchInstance, jag::graphics::Model& model,
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
                geometryBatchInstances) const;
        void ReplaceModelBatches(
            jag::graphics::Model& model,
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
                geometryBatchInstances) const;
        auto InvertLabelMapping(const eastl::vector_map<unsigned short, unsigned short>& arg1) const;
        auto CopyBatchInstanceVertices(const jag::graphics::GeometryBatchInstance& geometryBatchInstance,
                                       jag::graphics::Model& model) const;
        auto SplitBatchIndices(const jag::graphics::GeometryBatch& geometryBatch1,
                               const eastl::vector_map<unsigned short, unsigned short>& arg2,
                               jag::graphics::GeometryBatch& geometryBatch2,
                               jag::graphics::GeometryBatch& geometryBatch3) const;
        void UpdateBatchExternalIndexList(jag::graphics::GeometryBatchInstance& geometryBatchInstance,
                                          std::function<unsigned short(unsigned short)> callback) const;
        void OutputIfNonempty(
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&&
                geometryBatchInstance,
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
                geometryBatchInstances) const;
        AnimateBaseOperation(Operation::Type arg1);
        ~AnimateBaseOperation();

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        PositionEntity field_16;
    };

    class AnimateBaseOperation::SeparatedIndexCount {
    public:
        SeparatedIndexCount(unsigned long arg1, unsigned long arg2);

    private:
        short field_0;
        short field_2;
    };

    class AnimateOperation {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(const Operation& operation) const;
        virtual AnimateOperation* GetNextPose(const ResolvedModel& resolvedModel,
                                              const OperationRecordEntry* operationRecordEntry) const;
        AnimateOperation(const shared_ptr<PoseStateRSeven>& poseStateRSeven);
        ~AnimateOperation();

    private:
        uint8_t _unknown_8[56];
        shared_ptr field_64;
    };

    class DashAnimateOperation : public AnimateOperation // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(const Operation& operation) const;
        virtual DashAnimateOperation* GetNextPose(const ResolvedModel& resolvedModel,
                                                  const OperationRecordEntry* operationRecordEntry) const;
        DashAnimateOperation(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2);
        ~DashAnimateOperation();
        DashAnimateOperation(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2, const Array<int>& arg3, bool arg4);

    private:
        int field_80;
        uint8_t _unknown_84[20];
        bool field_104;
    };

    class FixNormalsOperation : public RetextureOperation // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(const Operation& operation) const;
        virtual void
        MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                 MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                     geometryBatchInstance) const;
        unsigned long AnySmallVertexNormal(const jag::graphics::GeometryBatch& geometryBatch, unsigned long arg2) const;
        uint8_t[16] CalculateFaceNormal(const jag::graphics::GeometryBatch& geometryBatch, unsigned long arg2) const;
        FixNormalsOperation();
    };

    class LightOperation {
    public:
        // virtual methods in vtable order
        virtual ResolvedModel* Apply(const ResolvedModel& resolvedModel,
                                     const OperationRecordEntry* operationRecordEntry) const;
        virtual jag::math::AABB ApplyAABB(const jag::math::AABB& aabb) const;
        virtual bool IsEqual(const Operation& operation) const;
        void MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                          geometryBatchInstance,
                      const jag::math::Matrix44T<float>& matrix44) const;
        int GetVertexColor(const jag::graphics::GeometryBatchVertex& geometryBatchVertex, int arg2, int arg3,
                           unsigned char arg4) const;
        int LightForVertex(const jag::graphics::GeometryBatchVertex& geometryBatchVertex,
                           const jag::math::Matrix44T<float>& matrix44, int arg3) const;
        void
        AssignVertexColor(jag::graphics::GeometryBatchVertex& geometryBatchVertex,
                          const jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout>& colourStorage8888) const;
        unsigned int ColorGammaCorrect(unsigned char arg1) const;
        unsigned int
        TextureGammaCorrect(const jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout>& colourStorage8888) const;
        LightOperation(int arg1, int arg2, jag::math::Vector3T<int> vector3);

    private:
        Type field_8;
        int field_12;
        int field_16;
        uint8_t field_20[12];
    };

    // 0x100376a90
    AnimFrameSet::~AnimFrameSet() {}

    // 0x1003780f0
    uint8_t[16] ModelLitImpl::HillSkew(int, int, int, int, int)::$_0::operator()(int arg1) const {
        uint8_t auVar4[16];

        long lVar1 = field_0;
        int* piVar2 = (int*)(*((lVar1 + 24)))[(unsigned long)arg1];
        int arg1_00 = *piVar2;
        unsigned int* puVar3 = (unsigned int*)(*((lVar1 + 48)))[(unsigned long)arg1];
        unsigned int arg2 = *puVar3;
        puVar3 = (unsigned int*)(*((lVar1 + 72)))[(unsigned long)arg1];
        LocationData local_38(arg1_00, arg2, *puVar3);
        auVar4._12_4_ = 0;
        auVar4._0_4_ = local_38.field_0;
        auVar4._4_4_ = local_38.field_4;
        auVar4._8_4_ = local_38.field_8;
        return auVar4;
    }

    // 0x100378c60
    void ModelLitImpl::HillSkew(int, int, int, int, int)::$_1::operator()(int arg1, int arg2) const {
        int* piVar1 = (int*)(*((field_0 + 48)))[(long)arg1];
        *piVar1 = arg2;
    }

    // 0x1003797e0
    void ModelLitImpl::AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet&,
                                                    int)::$_2::operator()(int arg1, float arg2) const {
        int iVar3;
        Array<Array<int>>* this_01;
        int* piVar6;
        Array<signed char>* pAVar7;
        uint8_t* pbVar8;
        uint8_t* puVar9;
        unsigned long uVar10;
        unsigned long arg1_00;
        shared_ptr<Array<signed char>>* this_02;
        int local_40[3];

        long lVar1 = field_0;
        shared_ptr<Array<Array<int>>>* this_00 = (shared_ptr<Array<Array<int>>>*)(lVar1 + 408);
        float local_34 = arg2;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar4 =
            (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*this_00).operator->();
        int iVar2 = pvVar4->end();
        if (arg1 < iVar2) {
            this_01 = (Array<Array<int>>*)**this_00;
            pvVar4 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[(long)arg1];
            if (pvVar4->end() != 0) {
                this_02 = (shared_ptr<Array<signed char>>*)(lVar1 + 264);
                local_34 = local_34 * 255.0;
                arg1_00 = 0;
                do {
                    piVar6 = (int*)(*pvVar4)[arg1_00];
                    iVar2 = *piVar6;
                    pAVar7 = (Array<signed char>*)**this_02;
                    pbVar8 = (uint8_t*)(*pAVar7)[(long)iVar2];
                    local_40[2] = jag::math::RoundFloatToInt((float)*pbVar8 + local_34);
                    local_40[0] = 0;
                    local_40[1] = 255;
                    iVar3 = jag::math::Clamp<int>(*(local_40 + 2), *local_40, *(local_40 + 1));
                    local_40[2] = iVar3;
                    pAVar7 = (Array<signed char>*)**this_02;
                    puVar9 = (uint8_t*)(*pAVar7)[(long)iVar2];
                    *puVar9 = (char)iVar3;
                    arg1_00 = arg1_00 + 1;
                    uVar10 = pvVar4->end();
                } while (arg1_00 < uVar10);
            }
        }
    }

    // 0x100379d70
    ModelRSevenUnlit::ModelRSevenUnlit(shared_ptr<jag::graphics::Model>&& model, bool arg2)
        : ModelUnlit(), field_24(model, arg2) {}

    // 0x100379dc0
    ModelRSevenCommon::ModelRSevenCommon(shared_ptr<jag::graphics::Model>&& model, bool arg2)
        : OperationBuffer(), m_dynamic(arg2) {
        AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model>>(this, model);
    }

    // 0x100379e40
    void ModelRSevenCommon::AddOperation<SetModelOperation, shared_ptr<jag::graphics::Model>>(
        shared_ptr<jag::graphics::Model>&& model) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        field_16->Flush(*this);
        make_shared<SetModelOperation, shared_ptr<jag::graphics::Model>>(&local_40, model);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_30);
    }

    // 0x100379ed0
    OperationBuffer::OperationBuffer() {
        ReturnValue local_28;

        make_shared<OperationBuffer::OperationImpl>(&local_28);
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
    }

    // 0x100379f20
    ShareLightBuffer::ShareLightBuffer() : shared_ptr() {
        new (&field_16) eastl::vector<ShareLightRequest>();
        m_prepared = 0;
    }

    // 0x10037a0c0
    SetModelOperation::SetModelOperation(shared_ptr<jag::graphics::Model>&& model) : Operation(9) {
        uint8_t* this_03 = field_16;
        this_03->shared_ptr<FileRSevenDebugPresetProvider, void>(model);
        if (!(this_03->operator_cast_to_bool())) {
            LogAssert("m_model",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.h",
                      363, "Model may not be null.");
        }
        NXTPixToolkit* this_00 = (NXTPixToolkit*)(*this_03).operator->();
        if (!(((AABB*)this_00->GetScreen())->IsValid())) {
            ((Model*)(*this_03).operator->())->UpdateAABB();
        }
    }

    // 0x10037a220
    SetModelOperation::~SetModelOperation() {
        field_16->~shared_ptr();
    }

    // 0x10037a370
    FixNormalsOperation::FixNormalsOperation() : BatchMapBaseOperation(3) {}

    // 0x10037a3a0
    BatchMapBaseOperation::BatchMapBaseOperation(Operation::Type arg1) : GeometryEditBaseOperation(arg1) {}

    // 0x10037a430
    ModelRSevenUnlit::ModelRSevenUnlit(const ModelRSevenUnlit& modelRSevenUnlit)
        : ModelUnlit(modelRSevenUnlit), field_24(modelRSevenUnlit.field_24) {}

    // 0x10037a620
    CombineOperation::CombineOperation(eastl::vector<OperationBuffer>&& operationBuffers)
        : Operation(1), field_16(operationBuffers) {
        make_shared<eastl::vector<CombineOperation::LabelShiftRange>>((ReturnValue*)&field_48);
    }

    // 0x10037a9c0
    CombineOperation::~CombineOperation() {
        field_48.~shared_ptr();
        field_16.~vector();
    }

    // 0x10037aac0
    CombineOperation::CombineOperation(const OperationBuffer& operationBuffer) : Operation(1) {
        make_shared<eastl::vector<CombineOperation::LabelShiftRange>>((ReturnValue*)&field_48);
        field_16.push_back(operationBuffer);
    }

    // 0x10037ac70
    HillSkewOperation::HillSkewOperation(jag::math::Vector3T<int> vector3, int arg2, int arg3, bool arg4)
        : Operation(4) {
        field_20 = (int)vector3;
        field_24 = arg2;
        field_28 = arg3;
        field_32 = arg4;
    }

    // 0x10037ae20
    LightOperation::LightOperation(int arg1, int arg2, jag::math::Vector3T<int> vector3) {
        uint32_t in_register_0000000c;
        uint8_t auVar1[12];

        uint32_t local_28 = (uint32_t)vector3;
        uint64_t local_30 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg2);
        new (this) Operation(5);
        field_16 = arg1;
        LocationData local_40(1, 4294967295, 1);
        auVar1 = local_40 * local_30;
        *&field_20 = auVar1;
    }

    // 0x10037b0a0
    TransformOperation::TransformOperation(jag::math::Matrix44T<float> matrix44)
        : Operation(12), field_16(in_stack_00000008), field_24(in_stack_00000010), field_32(in_stack_00000018),
          field_40(in_stack_00000020), field_48(in_stack_00000028), field_56(in_stack_00000030),
          field_64(in_stack_00000038), field_72(in_stack_00000040) {
        uint64_t in_stack_00000008;
        uint64_t in_stack_00000010;
        uint64_t in_stack_00000018;
        uint64_t in_stack_00000020;
        uint64_t in_stack_00000028;
        uint64_t in_stack_00000030;
        uint64_t in_stack_00000038;
        uint64_t in_stack_00000040;
    }

    // 0x10037b230
    RecolourOperation::RecolourOperation(unsigned short arg1, unsigned short arg2)
        : BatchMapBaseOperation(7), field_12(arg1), field_14(arg2) {
        new (&field_16) eastl::vector<std::pair<unsigned short, unsigned short>>();
    }

    // 0x10037b3a0
    RecolourOperation::~RecolourOperation() {
        field_16.~vector();
    }

    // 0x10037b510
    RetextureOperation::RetextureOperation(unsigned short arg1, unsigned short arg2)
        : BatchMapBaseOperation(8), field_12(arg1), field_14(arg2) {}

    // 0x10037b670
    MirrorOperation::MirrorOperation() : BatchMapBaseOperation(6) {}

    // 0x10037b7e0
    DashAnimateOperation::DashAnimateOperation(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2)
        : AnimateBaseOperation(2), field_64(animFrameSet), field_80(arg2) {
        new (&field_88) shared_ptr();
        field_104 = false;
    }

    // 0x10037b860
    AnimateBaseOperation::AnimateBaseOperation(Operation::Type arg1) : Operation(arg1) {}

    // 0x10037b890
    AnimateBaseOperation::~AnimateBaseOperation() {
        field_16->~optional();
    }

    // 0x10037b9f0
    DashAnimateOperation::~DashAnimateOperation() {
        field_88.~shared_ptr();
        field_64.~shared_ptr();
    }

    // 0x10037ba80
    MayaPoseStateRSeven::MayaPoseStateRSeven(
        const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet, int arg2)
        : PoseStateRSeven(3), field_16(oldscapeAnimKeyFrameSet), field_32(arg2), field_56(false) {
        field_64.unique_ptr<true, void>();
        new (&field_72) eastl::vector_map<int, float>();
        if (field_16->operator_cast_to_bool() == '\0') {
            LogAssert("m_frameSet",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      325, "Frameset may not be null.");
        }
    }

    // 0x10037bee0
    MayaPoseStateRSeven::~MayaPoseStateRSeven() {
        field_64.~unique_ptr();
        field_40->~shared_ptr();
        field_16->~shared_ptr();
    }

    // 0x10037c050
    AnimateOperation::AnimateOperation(const shared_ptr<PoseStateRSeven>& poseStateRSeven)
        : AnimateBaseOperation(0), field_64(poseStateRSeven) {
        if (field_64->operator_cast_to_bool() == '\0') {
            LogAssert("m_pose",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.h",
                      758, "Pose may not be null.");
        }
    }

    // 0x10037c190
    AnimateOperation::~AnimateOperation() {
        field_64->~shared_ptr();
    }

    // 0x10037c1f0
    MayaPoseStateRSeven::MayaPoseStateRSeven(
        const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet, int arg2,
        const Array<bool>& arg3, bool arg4)
        : PoseStateRSeven(3), field_16(oldscapeAnimKeyFrameSet), field_32(arg2) {
        make_shared<Array<bool>, Array<bool> const&>((ReturnValue*)field_40, arg3);
        field_56 = arg4;
        field_64.unique_ptr<true, void>();
        new (&field_72) eastl::vector_map<int, float>();
        if (field_16->operator_cast_to_bool() == '\0') {
            LogAssert("m_frameSet",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      339, "Frameset may not be null.");
        }
    }

    // 0x10037c550
    DashAnimateOperation::DashAnimateOperation(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2,
                                               const Array<int>& arg3, bool arg4)
        : AnimateBaseOperation(2), field_64(animFrameSet), field_80(arg2) {
        make_shared<Array<int>, Array<int> const&>((ReturnValue*)&field_88, arg3);
        field_104 = arg4;
    }

} // namespace jag::oldscape::dash3d

// 0x10037af40
void cos(float arg1) {
    _cosf();
}

// 0x10037af50
void sin(float arg1) {
    _sinf();
}

namespace jag::math {
    // 0x100379c90
    void Matrix44T<float>::SetToDiagonal(float arg1, float arg2, float arg3, float arg4) {
        Set(this, arg1, 0.0, 0.0, 0.0, 0.0, arg2, 0.0, 0.0, 0.0, 0.0, arg3, 0.0, 0.0, 0.0, 0.0, arg4);
    }

} // namespace jag::math
