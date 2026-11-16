// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "LayeredAnimationStateMachineDescriptor.h"

namespace jag::graphics {
    // 0x10095ea60
    LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(const Json::Value& value) {
        char* pcVar3;
        string local_70;
        Value local_58;

        Value* pVVar2 = &value["StateMachine"];
        new (this) AnimationStateMachineDescriptor(*pVVar2);
        m_blendType = 0;
        new (&field_112) eastl::string();
        bool cVar1 = value.isMember("BlendType");
        if (cVar1) {
            pVVar2 = &value["BlendType"];
            local_58 = Json::Value("Override");
            cVar1 = *pVVar2 == local_58;
            if (!cVar1) {
                local_58 = Json::Value("Additive");
                cVar1 = *pVVar2 == local_58;
                if (!cVar1) {
                    local_58 = Json::Value("Lerp");
                    cVar1 = *pVVar2 == local_58;
                    if (!cVar1) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.cpp",
                                        51, "Unknown blend type");
                    }
                    m_blendType = 1;
                } else {
                    m_blendType = 2;
                }
            } else {
                m_blendType = 0;
            }
        }
        cVar1 = value.isMember("BlendVar");
        if (cVar1) {
            pVVar2 = &value["BlendVar"];
            pcVar3 = pVVar2->asCString();
            (&field_112)->assign(pcVar3);
        }
        pVVar2 = &value["TransitionInTime"];
        pcVar3 = pVVar2->asCString();
        std::string::string<decltype(nullptr)>(&local_58, pcVar3);
        pVVar2 = &value["TransitionOutTime"];
        pcVar3 = pVVar2->asCString();
        std::string::string<decltype(nullptr)>(&local_70, pcVar3);
        uint64_t uVar4 = readTime(&local_58);
        m_pTransitionInTime = uVar4;
        uVar4 = readTime(&local_70);
        m_transitionOutTime = uVar4;
        std::string::~string(&local_70);
        std::string::~string(&local_58);
    }

    // 0x10095ecc0
    LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(const Json::Value& value)
        : AnimationStateMachineProvider() {
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;

        Value* pVVar2 = &value["Layers"];
        uint64_t local_48 = pVVar2->begin();
        uint8_t local_40 = extraout_DL;
        uint64_t local_38 = pVVar2->end();
        uint8_t local_30 = extraout_DL_00;
        while (true) {
            if (local_48 != local_38 == '\0')
                break;
            pVVar2 = (Value*)*local_48;
            field_8.emplace_back<Json::Value const&>(*pVVar2);
            ++local_48;
        }
    }

    // 0x10095ee40
    LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(
        PacketT<Array<unsigned char>>& arg1)
        : AnimationStateMachineDescriptor(arg1), m_blendType(0) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_40;

        m_blendType = arg1.g4();
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_40, (uint8_t)arg1);
        field_112 = &local_40;
        uint64_t uVar1 = arg1.g8();
        m_pTransitionInTime = uVar1;
        uVar1 = arg1.g8();
        m_transitionOutTime = uVar1;
    }

    // 0x10095ef10
    LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(PacketT<Array<unsigned char>>& arg1)
        : AnimationStateMachineProvider() {
        uint8_t* this_00 = &field_8;
        new (this_00) eastl::vector<LayeredAnimationStateMachineLayerDescriptor>();
        unsigned int uVar1 = arg1.g4();
        this_00->reserve((unsigned long)uVar1);
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            this_00->emplace_back<PacketT<Array<unsigned char>>&>(arg1);
        }
    }

    // 0x10095f060
    LayeredAnimationStateMachineDescriptor* LayeredAnimationStateMachineDescriptor::CreateStateSystem(
        VariableList& variableList, const shared_ptr<AnimationResourceManager>& animationResourceManager) {
        int iVar3;
        VariableList* variableList_00;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* this_01;
        char* pcVar6;
        shared_ptr<AnimationResourceManager>* in_RCX;
        AnimationStateMachine local_3a8;
        vector<LayeredAnimationStateMachine::LayerBlendInfo> local_70[32];
        unsigned long long local_50;
        unsigned long long local_48;
        LayeredAnimationStateMachineBlendType local_34;

        vector<AnimationStateMachine> local_90;
        new (local_70) eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo>();
        long* this_02 = &variableList.field_8;
        LayeredAnimationStateMachineDescriptor* local_40 = this;
        unsigned long uVar4 = this_02->size();
        local_90.reserve(uVar4);
        uVar4 = this_02->size();
        local_70->reserve(uVar4);
        auto this_00 = this_02->HeapBeginPtr();
        auto pJVar5 = this_02->end();
        if (this_00 != pJVar5) {
            do {
                variableList_00 = (VariableList*)this_00->SSOBeginPtr();
                local_3a8.CreateStateMachine(*variableList_00, animationResourceManager);
                local_90.emplace_back<AnimationStateMachine>(local_3a8);
                iVar3 = this_00->GetMaxMapZ();
                local_34 = (LayeredAnimationStateMachineBlendType)(iVar3 != 0);
                local_3a8._vptr = nullptr;
                this_01 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                              this_00->GetPixelBuffer();
                if (!(this_01->empty())) {
                    this_00->GetPixelBuffer();
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    if (!(animationResourceManager.HasFloatVariable(pcVar6))) {
                        this_00->GetPixelBuffer();
                        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        animationResourceManager.AddFloatVariable(pcVar6, 0.0, 1.0, 0.0);
                    }
                    this_00->GetPixelBuffer();
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_3a8._vptr = (AnimationStateMachine_vtbl*)animationResourceManager.GetFloatVariable(pcVar6);
                }
                local_50 = this_00->GetMemoryCache();
                local_48 = this_00->GetTransitionOutTime();
                local_70->emplace_back<LayeredAnimationStateMachineBlendType&, float*&, unsigned long long,
                                       unsigned long long>(local_34, local_3a8, local_50, local_48);
                this_00 = (Js5ResourceProvider*)&this_00->field_160;
            } while (this_00 != pJVar5);
        }
        make_shared<LayeredAnimationStateMachine, eastl::vector<AnimationStateMachine>,
                    eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo>,
                    shared_ptr<AnimationResourceManager> const&>(
            (ReturnValue*)&local_3a8, &local_90, (vector<LayeredAnimationStateMachine::LayerBlendInfo>*)local_70,
            in_RCX);
        LayeredAnimationStateMachineDescriptor* pLVar1 = local_40;
        local_40->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_3a8);
        return pLVar1;
    }

    // 0x10095f640
    auto LayeredAnimationStateMachineDescriptor::ToString() const {
        Layout* this_00;
        long* plVar2;
        unsigned long uVar3;
        unsigned long arg1;
        ReturnValue local_a0;
        eastl::string local_80;
        value_type local_60;
        vector<eastl::pair<int, Js5NetQueueRequest>>* local_40;
        ReturnValue* local_38;

        auto result;
        vector<eastl::pair<int, Js5NetQueueRequest>>* this_01 = (vector<eastl::pair<int, Js5NetQueueRequest>>*)&field_8;
        if (this_01->size() != 0) {
            arg1 = 0;
            local_40 = this_01;
            local_38 = &result;
            do {
                this_00 = (Layout*)(*this_01)[arg1];
                plVar2 = (long*)this_00->SSOBeginPtr();
                local_a0 = eastl::to_string(arg1);
                local_60 + (*((eastl::string*)"Layer "));
                local_80 + local_60;
                *local_38 += &local_80;
                (**(void (**)(...))(*plVar2 + 24))(&local_80, plVar2);
                &result = local_38;
                *local_38 += &local_80;
                this_01 = local_40;
                result += '\n';
                arg1 = arg1 + 1;
                uVar3 = this_01->size();
            } while (arg1 < uVar3);
        }
        return result;
    }

} // namespace jag::graphics
