// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "LayeredAnimationStateMachineDescriptor.h"

namespace jag::graphics {
    // 0x10095ea60, 576 bytes, base-object constructor, placed by __FILE__ string
    // LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(Json::Value const&)
    void LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(Value* param_1) {
        char cVar1;
        Value* pVVar2;
        char* pcVar3;
        undefined8 uVar4;
        string local_70[24];
        Value local_58[40];

        pVVar2 = (Value*)Json::Value::operator[](param_1, "StateMachine");
        new (this) AnimationStateMachineDescriptor(pVVar2);
        field_104 = 0;
        new (&field_112) eastl::string();
        cVar1 = Json::Value::isMember(param_1, "BlendType");
        if (cVar1 != '\0') {
            pVVar2 = (Value*)Json::Value::operator[](param_1, "BlendType");
            Json::Value::Value(local_58, "Override");
            cVar1 = Json::Value::operator==(pVVar2, local_58);
            Json::Value::~Value(local_58);
            if (cVar1 == '\0') {
                Json::Value::Value(local_58, "Additive");
                cVar1 = Json::Value::operator==(pVVar2, local_58);
                Json::Value::~Value(local_58);
                if (cVar1 == '\0') {
                    Json::Value::Value(local_58, "Lerp");
                    cVar1 = Json::Value::operator==(pVVar2, local_58);
                    Json::Value::~Value(local_58);
                    if (cVar1 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.cpp",
                                        51, "Unknown blend type");
                    }
                    field_104 = 1;
                } else {
                    field_104 = 2;
                }
            } else {
                field_104 = 0;
            }
        }
        cVar1 = Json::Value::isMember(param_1, "BlendVar");
        if (cVar1 != '\0') {
            pVVar2 = (Value*)Json::Value::operator[](param_1, "BlendVar");
            pcVar3 = (char*)Json::Value::asCString(pVVar2);
            (&field_112, pcVar3)->assign();
        }
        pVVar2 = (Value*)Json::Value::operator[](param_1, "TransitionInTime");
        pcVar3 = (char*)Json::Value::asCString(pVVar2);
        std::string::string<decltype(nullptr)>((string*)local_58, pcVar3);
        pVVar2 = (Value*)Json::Value::operator[](param_1, "TransitionOutTime");
        pcVar3 = (char*)Json::Value::asCString(pVVar2);
        std::string::string<decltype(nullptr)>(local_70, pcVar3);
        uVar4 = readTime((string*)local_58);
        field_144 = uVar4;
        uVar4 = readTime(local_70);
        m_transitionOutTime = uVar4;
        std::string::~string(local_70);
        local_58->~string();
    }

    // 0x10095ecb0, 16 bytes, complete-object constructor, placed by neighbouring functions
    // LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(Json::Value const&): jumps straight to the base-object constructor

    // 0x10095ecc0, 224 bytes, base-object constructor, placed by class name
    // LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(Json::Value const&)
    void LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(Value* param_1) {
        char cVar1;
        Value* pVVar2;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        undefined8 local_48;
        undefined1 local_40;
        undefined8 local_38;
        undefined1 local_30;

        new (this) AnimationStateMachineProvider(param_1);
        field_0 = &PTR__LayeredAnimationStateMachineDescriptor_100f1b3b8;
        new (&field_8) eastl::vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>();
        pVVar2 = (Value*)Json::Value::operator[](param_1, "Layers");
        local_48 = Json::Value::begin(pVVar2);
        local_40 = extraout_DL;
        local_38 = Json::Value::end(pVVar2);
        local_30 = extraout_DL_00;
        while (true) {
            cVar1 = Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_48, (ValueIteratorBase*)&local_38);
            if (cVar1 == '\0')
                break;
            pVVar2 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_48);
            eastl::vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>::emplace_back<
                Json::Value_const&>((vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>*)&field_8,
                                    pVVar2);
            Json::ValueConstIterator::operator++((ValueConstIterator*)&local_48);
        }
    }

    // 0x10095ee30, 16 bytes, complete-object constructor, placed by class name
    // LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(Json::Value const&): jumps straight to the base-object constructor

    // 0x10095ee40, 192 bytes, base-object constructor, placed by neighbouring functions
    // LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(PacketT* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_40[32];

        new (this) AnimationStateMachineDescriptor(param_1);
        field_104 = 0;
        new (&field_112) eastl::string();
        uVar2 = param_1->g4();
        field_104 = uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_40, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_112, (basic_string*)local_40);
        uVar1 = param_1->g8();
        field_144 = uVar1;
        uVar1 = param_1->g8();
        m_transitionOutTime = uVar1;
        local_40->~basic_string();
    }

    // 0x10095ef00, 16 bytes, complete-object constructor, placed by neighbouring functions
    // LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10095ef10, 144 bytes, base-object constructor, placed by class name
    // LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(PacketT* param_1) {
        undefined1* this_00;
        uint uVar1;

        new (this) AnimationStateMachineProvider(param_1);
        field_0 = &PTR__LayeredAnimationStateMachineDescriptor_100f1b3b8;
        this_00 = &field_8;
        new (this_00) eastl::vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>();
        uVar1 = param_1->g4();
        this_00->reserve((ulong)uVar1);
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            eastl::vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>::emplace_back<
                PacketT<Array<unsigned char, eastl::allocator>>&>(
                (vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>*)this_00, param_1);
        }
    }

    // 0x10095f050, 16 bytes, complete-object constructor, placed by class name
    // LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10095f060, 592 bytes, placed by class name
    // LayeredAnimationStateMachineDescriptor::CreateStateSystem(VariableList&, shared_ptr<AnimationResourceManager> const&)
    LayeredAnimationStateMachineDescriptor*
    LayeredAnimationStateMachineDescriptor::CreateStateSystem(VariableList* param_1, shared_ptr* param_2) {
        LayeredAnimationStateMachineDescriptor* pLVar1;
        char cVar2;
        int iVar3;
        ulong uVar4;
        LayeredAnimationStateMachineBlendType* pLVar5;
        Js5ResourceProvider* this_00;
        Js5ResourceProvider* pJVar6;
        VariableList* pVVar7;
        char* pcVar8;
        shared_ptr* in_RCX;
        long* this_01;
        AnimationStateMachine local_3a8;
        vector<AnimationStateMachine, eastl::allocator> local_90[32];
        vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator> local_70[32];
        ulonglong local_50;
        ulonglong local_48;
        LayeredAnimationStateMachineDescriptor* local_40;
        uint local_34;

        eastl::vector<AnimationStateMachine, eastl::allocator>::vector(local_90);
        eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::vector(local_70);
        this_01 = &param_1->field_8;
        local_40 = this;
        uVar4 = this_01->size();
        eastl::vector<AnimationStateMachine, eastl::allocator>::reserve(local_90, uVar4);
        pLVar5 = (LayeredAnimationStateMachineBlendType*)this_01->size();
        eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::reserve(local_70, (ulong)pLVar5);
        this_00 = (Js5ResourceProvider*)this_01->HeapBeginPtr();
        pJVar6 = (Js5ResourceProvider*)this_01->end();
        if (this_00 != pJVar6) {
            do {
                pVVar7 = (VariableList*)this_00->SSOBeginPtr(pLVar5);
                local_3a8.CreateStateMachine(pVVar7, param_2);
                eastl::vector<AnimationStateMachine, eastl::allocator>::emplace_back<AnimationStateMachine>(local_90,
                                                                                                            &local_3a8);
                local_3a8.~AnimationStateMachine();
                iVar3 = this_00->GetMaxMapZ();
                local_34 = (uint)(iVar3 != 0);
                local_3a8.field_0 = (undefined**)0;
                this_00->GetPixelBuffer();
                cVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar2 == '\0') {
                    this_00->GetPixelBuffer();
                    pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    cVar2 = param_2->HasFloatVariable(pcVar8);
                    if (cVar2 == '\0') {
                        this_00->GetPixelBuffer();
                        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        param_2->AddFloatVariable(pcVar8, 0.0, 1.0, 0.0);
                    }
                    this_00->GetPixelBuffer();
                    pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_3a8.field_0 = (undefined**)param_2->GetFloatVariable(pcVar8);
                }
                local_50 = this_00->GetMemoryCache();
                local_48 = this_00->GetTransitionOutTime();
                pLVar5 = (LayeredAnimationStateMachineBlendType*)&local_34;
                eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::emplace_back<
                    LayeredAnimationStateMachineBlendType&, float*&, unsigned long long, unsigned long long>(
                    local_70, pLVar5, (float**)&local_3a8, &local_50, &local_48);
                this_00 = (Js5ResourceProvider*)&this_00->field_160;
            } while (this_00 != pJVar6);
        }
        make_shared<LayeredAnimationStateMachine, eastl::vector<AnimationStateMachine, eastl::allocator>,
                    eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>,
                    shared_ptr<AnimationResourceManager> const&>((jag*)&local_3a8, (vector*)local_90, (vector*)local_70,
                                                                 in_RCX);
        pLVar1 = local_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_40, (shared_ptr*)&local_3a8);
        local_3a8.~shared_ptr();
        eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::~vector(local_70);
        eastl::vector<AnimationStateMachine, eastl::allocator>::~vector(local_90);
        return pLVar1;
    }

    // 0x10095f640, 384 bytes, placed by class name
    // LayeredAnimationStateMachineDescriptor::ToString() const
    LayeredAnimationStateMachineDescriptor* LayeredAnimationStateMachineDescriptor::ToString() {
        Layout* this_00;
        vector* pvVar2;
        type* ptVar3;
        vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>* this_01;
        long in_RSI;
        type* ptVar4;
        eastl local_a0[32];
        eastl local_80[32];
        eastl local_60[32];
        vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>* local_40;

        new (this) eastl::string();
        this_01 = (vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>*)(in_RSI + 8);
        if (eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>::size(this_01) != 0) {
            ptVar4 = (type*)0;
            local_40 = this_01;
            do {
                ptVar3 = ptVar4;
                this_00 =
                    (Layout*)eastl::vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>::operator[](
                        (vector<LayeredAnimationStateMachineLayerDescriptor, eastl::allocator>*)this_01, (ulong)ptVar4);
                pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar3);
                eastl::to_string(local_a0, (ulong)ptVar4);
                eastl::operator+(local_60, (value_type*)"Layer ", (basic_string*)local_a0);
                eastl::operator+(local_80, (basic_string*)local_60, (value_type*)":\n");
                eastl::string::operator+=((eastl::string*)(LayeredAnimationStateMachineDescriptor*)this,
                                          (basic_string*)local_80);
                local_80->~basic_string();
                local_60->~basic_string();
                local_a0->~basic_string();
                (**(code**)(*(long*)pvVar2 + 24))(local_80, pvVar2);
                this = (LayeredAnimationStateMachineDescriptor*)this;
                eastl::string::operator+=((eastl::string*)(LayeredAnimationStateMachineDescriptor*)this,
                                          (basic_string*)local_80);
                this_01 = local_40;
                local_80->~basic_string();
                eastl::string::operator+=((eastl::string*)this, '\n');
                ptVar4 = ptVar4 + 1;
                ptVar3 = (type*)eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>::size(this_01);
            } while (ptVar4 < ptVar3);
        }
        return this;
    }

} // namespace jag::graphics
