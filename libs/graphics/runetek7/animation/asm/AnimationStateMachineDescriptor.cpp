// libs/graphics/runetek7/animation/asm/AnimationStateMachineDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateMachineDescriptor.h"

namespace jag::graphics {
    // 0x1009587f0, 1296 bytes, base-object constructor, placed by class name and debug map
    // AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(Json::Value const&)
    void AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(Value* param_1) {
        char cVar1;
        bool bVar2;
        Value* pVVar3;
        Value* pVVar4;
        char* pcVar5;
        undefined8 uVar6;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        undefined1 extraout_DL_01;
        undefined1 extraout_DL_02;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        undefined1 auVar7[16];
        eastl::string local_158[32];
        basic_string<char, BucketAllocatorEASTL> local_138[24];
        allocator local_120[8];
        string local_118[24];
        undefined8 local_100;
        undefined1 local_f8;
        undefined8 local_f0;
        undefined1 local_e8;
        undefined8 local_e0;
        undefined1 local_d8;
        eastl local_c0[32];
        ulonglong local_a0;
        vector<AnimationStateDescriptor, eastl::allocator>* local_98;
        vector<AnimationStateTransitionDescriptor, eastl::allocator>* local_90;
        eastl::string* local_88;
        undefined4 local_74;
        AnimationStateMachineDescriptor* local_70;
        undefined8 local_68;
        undefined1 local_60;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) AnimationStateMachineProvider(param_1);
        field_0 = &PTR__AnimationStateMachineDescriptor_100f1b238;
        local_88 = (eastl::string*)&field_8;
        eastl::string::basic_string(local_88);
        local_98 = (vector<AnimationStateDescriptor, eastl::allocator>*)&field_40;
        eastl::vector<AnimationStateDescriptor, eastl::allocator>::vector(local_98);
        local_90 = (vector<AnimationStateTransitionDescriptor, eastl::allocator>*)&field_72;
        eastl::vector<AnimationStateTransitionDescriptor, eastl::allocator>::vector(local_90);
        pVVar3 = (Value*)Json::Value::operator[](param_1, "States");
        local_68 = Json::Value::begin(pVVar3);
        local_70 = this;
        local_60 = extraout_DL;
        local_e0 = Json::Value::end(pVVar3);
        local_d8 = extraout_DL_00;
        while (true) {
            cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_68, (ValueIteratorBase*)&local_e0);
            if (cVar1 == '\0')
                break;
            pVVar3 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_68);
            eastl::vector<AnimationStateDescriptor, eastl::allocator>::emplace_back<Json::Value_const&>(local_98,
                                                                                                        pVVar3);
            Json::ValueConstIterator::operator++((ValueConstIterator*)&local_68);
        }
        pVVar3 = (Value*)Json::Value::operator[](param_1, "Transitions");
        local_100 = Json::Value::begin(pVVar3);
        local_f8 = extraout_DL_01;
        local_f0 = Json::Value::end(pVVar3);
        local_e8 = extraout_DL_02;
        do {
            cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_100, (ValueIteratorBase*)&local_f0);
            if (cVar1 == '\0') {
                pVVar3 = (Value*)Json::Value::operator[](param_1, "StartState");
                pcVar5 = (char*)Json::Value::asCString(pVVar3);
                eastl::string::assign(local_88, pcVar5);
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
            pVVar3 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_100);
            pVVar4 = (Value*)Json::Value::operator[](pVVar3, "From");
            pcVar5 = (char*)Json::Value::asCString(pVVar4);
            new (&local_68) eastl::allocator("EASTL basic_string");
            new (&local_e0) eastl::string(pcVar5, (allocator*)&local_68);
            pVVar4 = (Value*)Json::Value::operator[](pVVar3, "To");
            pcVar5 = (char*)Json::Value::asCString(pVVar4);
            new (&local_68) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_158, pcVar5, (allocator*)&local_68);
            pVVar4 = (Value*)Json::Value::operator[](pVVar3, "Time");
            pcVar5 = (char*)Json::Value::asCString(pVVar4);
            std::string::string<decltype(nullptr)>(local_118, pcVar5);
            local_a0 = readTime(local_118);
            pVVar4 = (Value*)Json::Value::operator[](pVVar3, "Condition");
            std::function<bool()>::function((function<bool()>*)&local_68);
            pVVar4 = (Value*)Json::Value::operator[](pVVar4, "Variable");
            auVar7 = Json::Value::asCString(pVVar4);
            eastl::destruct<oldscape::highlight::NpcUID*>(local_c0, (NpcUID*)"EASTL basic_string", auVar7._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_138, auVar7._0_8_);
            local_74 = 1;
            cVar1 = Json::Value::isMember(pVVar3, "BlendFunc");
            if (cVar1 != '\0') {
                pVVar3 = (Value*)Json::Value::operator[](pVVar3, "BlendFunc");
                pcVar5 = (char*)Json::Value::asCString(pVVar3);
                eastl::allocator::allocator(local_120, "EASTL basic_string");
                new (local_c0) eastl::string(pcVar5, local_120);
                bVar2 = eastl::operator==(local_c0, (basic_string*)"Linear", extraout_RDX);
                if (bVar2) {
                    local_74 = 0;
                } else {
                    bVar2 = eastl::operator==(local_c0, (basic_string*)"SmoothStep", extraout_RDX_00);
                    if (bVar2) {
                        local_74 = 1;
                    } else {
                        bVar2 = eastl::operator==(local_c0, (basic_string*)"SmootherStep", extraout_RDX_01);
                        if (!bVar2) {
                            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/animation/asm/AnimationStateMachineDescriptor.cpp",
                                            106, "Unknown transition blend function %s", uVar6);
                        }
                        local_74 = 2;
                    }
                }
                local_c0->~basic_string();
            }
            eastl::vector<AnimationStateTransitionDescriptor, eastl::allocator>::emplace_back<
                eastl::string&, eastl::string&, std::function<bool()>&, unsigned long long&,
                AnimationStateTransitionDescriptor::TransitionBlendFunc&>(
                local_90, (basic_string*)&local_e0, (basic_string*)local_158, (function*)&local_68, &local_a0,
                (TransitionBlendFunc*)&local_74);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_138);
            std::function<bool()>::~function((function<bool()>*)&local_68);
            std::string::~string(local_118);
            eastl::string::~basic_string(local_158);
            local_e0.~basic_string();
            Json::ValueConstIterator::operator++((ValueConstIterator*)&local_100);
        } while (true);
    }

    // 0x100958f30, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(Json::Value const&): jumps straight to the base-object constructor

    // 0x100958f40, 352 bytes, base-object constructor, placed by class name
    // AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(PacketT* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        uint uVar1;
        ulong uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_60[32];
        AnimationStateMachineDescriptor* local_40;
        undefined1* local_38;

        new (this) AnimationStateMachineProvider(param_1);
        field_0 = &PTR__AnimationStateMachineDescriptor_100f1b238;
        this_00 = &field_8;
        local_40 = this;
        new (this_00) eastl::string();
        this_01 = &field_40;
        local_38 = this_00;
        new (this_01) eastl::vector<AnimationStateDescriptor, eastl::allocator>();
        this_02 = &field_72;
        new (this_02) eastl::vector<AnimationStateTransitionDescriptor, eastl::allocator>();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_60, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)this_00, (basic_string*)local_60);
        local_60->~basic_string();
        uVar1 = param_1->g4();
        uVar2 = (ulong)uVar1;
        this_01->clear();
        this_01->reserve(uVar2);
        while (uVar1 != 0) {
            eastl::vector<AnimationStateDescriptor, eastl::allocator>::emplace_back<
                PacketT<Array<unsigned char, eastl::allocator>>&>(
                (vector<AnimationStateDescriptor, eastl::allocator>*)this_01, param_1);
            uVar1 = (int)uVar2 - 1;
            uVar2 = (ulong)uVar1;
        }
        uVar1 = param_1->g4();
        this_02->clear();
        this_02->reserve((ulong)uVar1);
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            eastl::vector<AnimationStateTransitionDescriptor, eastl::allocator>::emplace_back<
                PacketT<Array<unsigned char, eastl::allocator>>&>(
                (vector<AnimationStateTransitionDescriptor, eastl::allocator>*)this_02, param_1);
        }
    }

    // 0x100959260, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100959270, 144 bytes, placed by class name
    // AnimationStateMachineDescriptor::CreateStateSystem(VariableList&, shared_ptr<AnimationResourceManager> const&)
    AnimationStateMachineDescriptor* AnimationStateMachineDescriptor::CreateStateSystem(VariableList* param_1,
                                                                                        shared_ptr* param_2) {
        AnimationStateMachine local_340;
        shared_ptr local_28;

        CreateStateMachine((AnimationStateMachineDescriptor*)&local_340, param_1, param_2);
        make_shared<AnimationStateMachine, AnimationStateMachine>((jag*)&local_28, &local_340);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        local_340.~AnimationStateMachine();
        return this;
    }

    // 0x1009593a0, 976 bytes, placed by class name
    // AnimationStateMachineDescriptor::CreateStateMachine(VariableList&, shared_ptr<AnimationResourceManager> const&)
    AnimationStateMachine* AnimationStateMachineDescriptor::CreateStateMachine(VariableList* param_1,
                                                                               shared_ptr* param_2) {
        undefined1* this_00;
        undefined4 uVar1;
        Layout* this_01;
        AnimationStateMachine* pAVar2;
        ulong uVar3;
        AnimationStateDescriptor* pAVar4;
        long lVar5;
        VariableList* this_02;
        vector* pvVar6;
        long lVar7;
        int* piVar8;
        type* ptVar9;
        EnumType* this_03;
        EnumType* pEVar10;
        undefined8 uVar11;
        basic_string* pbVar12;
        undefined4* puVar13;
        uint* puVar14;
        shared_ptr* in_RCX;
        type* ptVar15;
        vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>
            local_108[32];
        vector<AnimationStateMachine::TransitionInfo, eastl::allocator> local_e8[32];
        vector_map<eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                   eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>
            local_c8[40];
        Layout* local_a0;
        AnimationStateMachine* local_98;
        VariableList* local_90;
        shared_ptr* local_88;
        shared_ptr* local_80;
        undefined1 local_78[16];
        undefined1 local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_80 = param_2;
        eastl::vector_map<eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                          eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>::vector_map(local_c8);
        eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                      eastl::allocator>::vector(local_108);
        eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator>::vector(local_e8);
        this_00 = &param_1->field_40;
        uVar3 = this_00->size();
        local_c8->reserve(uVar3);
        uVar3 = this_00->size();
        eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                      eastl::allocator>::reserve(local_108, uVar3);
        local_a0 = (Layout*)&param_1->field_72;
        pAVar4 = (AnimationStateDescriptor*)local_a0->size();
        eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator>::reserve(local_e8, (ulong)pAVar4);
        local_98 = (AnimationStateMachine*)this;
        local_90 = param_1;
        local_88 = in_RCX;
        lVar5 = this_00->size();
        if (lVar5 != 0) {
            ptVar15 = (type*)0;
            do {
                ptVar9 = ptVar15;
                this_02 = (VariableList*)eastl::vector<AnimationStateDescriptor, eastl::allocator>::operator[](
                    (vector<AnimationStateDescriptor, eastl::allocator>*)this_00, (ulong)ptVar15);
                pvVar6 = this_02->SSOBeginPtr(ptVar9);
                lVar5 = local_c8->find(pvVar6);
                lVar7 = local_c8->end();
                if (lVar5 != lVar7) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("namesMap.find(stateDesc.GetName()) == namesMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachineDescriptor.cpp",
                              168, "Cannot create a state machine with two states having the same name");
                }
                pvVar6 = this_02->SSOBeginPtr(pvVar6);
                piVar8 = (int*)eastl::vector_map<eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                                                 eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>::
                operator[](local_c8, (basic_string*)pvVar6);
                *piVar8 = (int)ptVar15;
                local_78->Create(this_02);
                pAVar4 = (AnimationStateDescriptor*)local_78;
                eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                              eastl::allocator>::push_back(local_108, (unique_ptr*)local_78);
                local_78->~unique_ptr();
                ptVar15 = (type*)(ulong)((int)ptVar15 + 1);
                ptVar9 = (type*)this_00->size();
            } while (ptVar15 < ptVar9);
        }
        this_01 = local_a0;
        this_03 = (EnumType*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_a0);
        pEVar10 = (EnumType*)this_01->end();
        if (this_03 != pEVar10) {
            do {
                pvVar6 = this_03->SSOBeginPtr(pAVar4);
                lVar5 = local_c8->find(pvVar6);
                lVar7 = local_c8->end();
                if (lVar5 == lVar7) {
                    this_03->SSOBeginPtr(pvVar6);
                    uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    /* WARNING: Subroutine does not return */
                    LogAssert("namesMap.find(transitionDesc.GetFrom()) != namesMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachineDescriptor.cpp",
                              180, "Failed to find state: %s", uVar11);
                }
                pbVar12 = (basic_string*)this_03->GetDefaultValue();
                lVar5 = local_c8->find(pbVar12);
                lVar7 = local_c8->end();
                if (lVar5 == lVar7) {
                    this_03->GetDefaultValue();
                    uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    /* WARNING: Subroutine does not return */
                    LogAssert("namesMap.find(transitionDesc.GetTo()) != namesMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachineDescriptor.cpp",
                              181, "Failed to find state: %s", uVar11);
                }
                pvVar6 = this_03->SSOBeginPtr(pbVar12);
                puVar13 =
                    (undefined4*)eastl::vector_map<eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                                                   eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>::
                    operator[](local_c8, (basic_string*)pvVar6);
                uVar1 = *puVar13;
                pbVar12 = (basic_string*)this_03->GetDefaultValue();
                puVar13 = (undefined4*)eastl::vector_map<
                    eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                    eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>::operator[](local_c8, pbVar12);
                local_78._4_4_ = *puVar13;
                local_78._0_4_ = uVar1;
                local_78._8_8_ = this_03->GetOutputType();
                local_68->GetCanTransitionFunc(this_03);
                pAVar4 = (AnimationStateDescriptor*)local_78;
                eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator>::emplace_back<
                    AnimationStateMachine::TransitionInfo>(local_e8, (TransitionInfo*)local_78);
                local_78->~TransitionInfo();
                this_03 = (EnumType*)&this_03->field_176;
            } while (this_03 != pEVar10);
        }
        puVar14 = (uint*)eastl::vector_map<eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                                           eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>::
        operator[](local_c8, (basic_string*)&local_90->field_8);
        pAVar2 = local_98;
        AnimationStateMachine::AnimationStateMachine(local_98, (vector*)local_108, (vector*)local_e8, *puVar14,
                                                     local_88);
        eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator>::~vector(local_e8);
        eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                      eastl::allocator>::~vector(local_108);
        eastl::vector_map<eastl::string, int, eastl::less<eastl::string>, eastl::allocator,
                          eastl::vector<eastl::pair<eastl::string, int>, eastl::allocator>>::~vector_map(local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pAVar2;
    }

    // 0x100959bf0, 1056 bytes, placed by class name
    // AnimationStateMachineDescriptor::ToString() const
    AnimationStateMachineDescriptor* AnimationStateMachineDescriptor::ToString() {
        vector<AnimationResource, eastl::allocator>* this_00;
        vector<DebugFrustum<DebugDataBasic>, eastl::allocator>* this_01;
        ulong uVar1;
        long lVar2;
        long lVar3;
        long in_RSI;
        eastl local_f8[32];
        eastl local_d8[32];
        vector<DebugFrustum<DebugDataBasic>, eastl::allocator>* local_b8;
        debug_helpers local_b0[32];
        eastl local_90[32];
        eastl local_70[32];
        eastl local_50[32];

        new (this) eastl::string();
        this_00 = (vector<AnimationResource, eastl::allocator>*)(in_RSI + 40);
        uVar1 = eastl::vector<AnimationResource, eastl::allocator>::size(this_00);
        eastl::to_string(local_f8, uVar1);
        local_b8 = (vector<DebugFrustum<DebugDataBasic>, eastl::allocator>*)(in_RSI + 72);
        uVar1 = eastl::vector<DebugFrustum<DebugDataBasic>, eastl::allocator>::size(local_b8);
        eastl::to_string(local_d8, uVar1);
        local_b0->GetTabbedSpaces(1);
        assign("AnimationStateMachine\n{\n");
        eastl::operator+(local_70, (basic_string*)local_b0, (value_type*)"States (");
        eastl::operator+(local_90, (basic_string*)local_70, (basic_string*)local_f8);
        eastl::operator+(local_50, (basic_string*)local_90, (value_type*)")\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_90->~basic_string();
        local_70->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_b0, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        lVar2 = this_00->HeapBeginPtr();
        lVar3 = this_00->end();
        if (lVar2 != lVar3) {
            do {
                local_50->ToString((uint)lVar2);
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                lVar2 = lVar2 + 304;
            } while (lVar2 != lVar3);
        }
        eastl::operator+(local_50, (basic_string*)local_b0, (value_type*)"}\n\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_70, (basic_string*)local_b0, (value_type*)"Transitions (");
        eastl::operator+(local_90, (basic_string*)local_70, (basic_string*)local_d8);
        eastl::operator+(local_50, (basic_string*)local_90, (value_type*)")\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_90->~basic_string();
        local_70->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_b0, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        this_01 = local_b8;
        lVar2 = local_b8->HeapBeginPtr();
        lVar3 = this_01->end();
        if (lVar2 != lVar3) {
            do {
                local_50->ToString((uint)lVar2);
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                lVar2 = lVar2 + 176;
            } while (lVar2 != lVar3);
        }
        eastl::operator+(local_50, (basic_string*)local_b0, (value_type*)"}\n\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_70, (basic_string*)local_b0, (value_type*)"Starting State: ");
        eastl::operator+(local_90, (basic_string*)local_70, (basic_string*)(in_RSI + 8));
        eastl::operator+(local_50, (basic_string*)local_90, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_90->~basic_string();
        local_70->~basic_string();
        eastl::string::operator+=((eastl::string*)this, "}\n");
        local_b0->~basic_string();
        local_d8->~basic_string();
        local_f8->~basic_string();
        return this;
    }

} // namespace jag::graphics

// 0x1009583f0, 288 bytes, placed by debug map only (low confidence)
// readTime(std::string const&)
/* readTime(std::string const&) */

ulonglong readTime(string* param_1) {
    ulonglong uVar1;
    bool bVar3;
    char* pcVar4;
    long local_148[35];
    basic_string<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>> local_30[24];
    ulonglong local_18;

    pcVar4 = (char*)std::string::c_str(param_1);
    std::basic_string<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
        local_30, pcVar4);
    std::basic_stringstream<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>>::basic_stringstream(
        (basic_string*)local_148, (uint)local_30);
    std::basic_string<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>>::~basic_string(local_30);
    std::basic_string<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>>::basic_string();
    std::istream::operator>>((istream*)local_148, &local_18);
    if ((((istream*)local_148 + *(long*)(local_148[0] + -24)))->eof() == '\0') {
        std::operator>>((istream*)local_148, (basic_string*)local_30);
    }
    bVar3 = std::operator==((basic_string*)local_30, "ms");
    if (bVar3) {
        local_18 = local_18 * 1000000;
    } else {
        bVar3 = std::operator==((basic_string*)local_30, "s");
        if (bVar3) {
            local_18 = local_18 * 1000000000;
        }
    }
    uVar1 = local_18;
    std::basic_string<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>>::~basic_string(local_30);
    local_148->~basic_stringstream();
    return uVar1;
}
