// libs/graphics/runetek7/animation/asm/AnimationStateMachineDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateMachineDescriptor.h"

namespace jag::graphics {
    // 0x1009587f0
    AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(const Json::Value& value)
        : AnimationStateMachineProvider() {
        bool cVar1;
        Value* pVVar3;
        char* pcVar4;
        uint64_t uVar5;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        uint8_t extraout_DL_01;
        uint8_t extraout_DL_02;
        eastl::string local_158;
        basic_string<char, BucketAllocatorEASTL> local_138;
        string local_118;
        eastl local_c0;
        unsigned long long local_a0;
        uint32_t local_74;

        eastl::string* local_88 = (eastl::string*)&field_8;
        new (local_88) eastl::string();
        vector<AnimationStateDescriptor>* local_98 = (vector<AnimationStateDescriptor>*)&field_40;
        new (local_98) eastl::vector<AnimationStateDescriptor>();
        vector<AnimationStateTransitionDescriptor>* local_90 = (vector<AnimationStateTransitionDescriptor>*)&field_72;
        new (local_90) eastl::vector<AnimationStateTransitionDescriptor>();
        Value* pVVar2 = &value["States"];
        uint64_t local_68 = pVVar2->begin();
        AnimationStateMachineDescriptor* local_70 = this;
        uint8_t local_60 = extraout_DL;
        uint64_t local_e0 = pVVar2->end();
        uint8_t local_d8 = extraout_DL_00;
        while (true) {
            cVar1 = local_68 != local_e0;
            if (!cVar1)
                break;
            pVVar2 = (Value*)*local_68;
            local_98->emplace_back<Json::Value const&>(*pVVar2);
            ++local_68;
        }
        pVVar2 = &value["Transitions"];
        uint64_t local_100 = pVVar2->begin();
        uint8_t local_f8 = extraout_DL_01;
        uint64_t local_f0 = pVVar2->end();
        uint8_t local_e8 = extraout_DL_02;
        do {
            cVar1 = local_100 != local_f0;
            if (!cVar1) {
                pVVar2 = &value["StartState"];
                pcVar4 = pVVar2->asCString();
                eastl::string::assign(local_88, pcVar4);
                return;
            }
            pVVar2 = (Value*)*local_100;
            pVVar3 = (Value*)(*pVVar2)["From"];
            pcVar4 = pVVar3->asCString();
            new (&local_e0) eastl::string(pcVar4);
            pVVar3 = (Value*)(*pVVar2)["To"];
            pcVar4 = pVVar3->asCString();
            local_158 = eastl::string(pcVar4);
            pVVar3 = (Value*)(*pVVar2)["Time"];
            pcVar4 = pVVar3->asCString();
            std::string::string<decltype(nullptr)>(&local_118, pcVar4);
            local_a0 = readTime((basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_118);
            pVVar3 = (Value*)(*pVVar2)["Condition"];
            new (&local_68) std::function<bool()>();
            pVVar3 = (Value*)(*pVVar3)["Variable"];
            pcVar4 = pVVar3->asCString();
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_c0);
            local_138 = eastl::basic_string<char, BucketAllocatorEASTL>(pcVar4, &local_c0);
            local_74 = 1;
            cVar1 = pVVar2->isMember("BlendFunc");
            if (cVar1) {
                pVVar2 = (Value*)(*pVVar2)["BlendFunc"];
                pcVar4 = pVVar2->asCString();
                local_c0 = eastl::string(pcVar4);
                cVar1 = local_c0 == "Linear";
                if (!cVar1) {
                    cVar1 = local_c0 == "SmoothStep";
                    if (!cVar1) {
                        cVar1 = local_c0 == "SmootherStep";
                        if (!cVar1) {
                            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/animation/asm/AnimationStateMachineDescriptor.cpp",
                                            106, "Unknown transition blend function %s", uVar5);
                        }
                        local_74 = 2;
                    } else {
                        local_74 = 1;
                    }
                } else {
                    local_74 = 0;
                }
            }
            local_90->emplace_back<eastl::string&, eastl::string&, std::function<bool()>&, unsigned long long&,
                                   AnimationStateTransitionDescriptor::TransitionBlendFunc&>(
                local_e0, local_158, local_68, local_a0, local_74);
            std::string::~string(&local_118);
            ++local_100;
        } while (true);
    }

    // 0x100958f40
    AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(PacketT<Array<unsigned char>>& arg1)
        : AnimationStateMachineProvider() {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_60;

        uint8_t* this_00 = &field_8;
        AnimationStateMachineDescriptor* local_40 = this;
        new (this_00) eastl::string();
        uint8_t* this_01 = &field_40;
        uint8_t* local_38 = this_00;
        new (this_01) eastl::vector<AnimationStateDescriptor>();
        uint8_t* this_02 = &field_72;
        new (this_02) eastl::vector<AnimationStateTransitionDescriptor>();
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_60, (uint8_t)arg1);
        *this_00 = &local_60;
        unsigned int uVar1 = arg1.g4();
        unsigned long arg1_00 = (unsigned long)uVar1;
        this_01->clear();
        this_01->reserve(arg1_00);
        while (uVar1 != 0) {
            this_01->emplace_back<PacketT<Array<unsigned char>>&>(arg1);
            uVar1 = (int)arg1_00 - 1;
            arg1_00 = (unsigned long)uVar1;
        }
        uVar1 = arg1.g4();
        this_02->clear();
        this_02->reserve((unsigned long)uVar1);
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            this_02->emplace_back<PacketT<Array<unsigned char>>&>(arg1);
        }
    }

    // 0x100959270
    AnimationStateMachineDescriptor* AnimationStateMachineDescriptor::CreateStateSystem(
        VariableList& variableList, const shared_ptr<AnimationResourceManager>& animationResourceManager) {
        AnimationStateMachine local_340;
        ReturnValue local_28;

        CreateStateMachine((AnimationStateMachineDescriptor*)&local_340, variableList, animationResourceManager);
        make_shared<AnimationStateMachine, AnimationStateMachine>(&local_28, &local_340);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x1009593a0
    AnimationStateMachine* AnimationStateMachineDescriptor::CreateStateMachine(
        VariableList& variableList, const shared_ptr<AnimationResourceManager>& animationResourceManager) {
        uint32_t uVar1;
        AnimationStateDescriptor* this_02;
        long lVar5;
        eastl::string* pbVar6;
        int* piVar7;
        unsigned long uVar8;
        uint64_t uVar10;
        uint32_t* puVar11;
        shared_ptr<AnimationResourceManager>* in_RCX;
        uint8_t local_78[64];

        vector_map<eastl::string, int> local_c8;
        vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>> local_108;
        vector<AnimationStateMachine::TransitionInfo> local_e8;
        uint8_t* this_00 = &variableList.field_40;
        unsigned long uVar3 = this_00->size();
        local_c8.reserve(uVar3);
        uVar3 = this_00->size();
        local_108.reserve(uVar3);
        Layout* local_a0 = (Layout*)&variableList.field_72;
        uVar3 = local_a0->size();
        local_e8.reserve(uVar3);
        VariableList* local_90 = variableList;
        shared_ptr<AnimationResourceManager>* local_88 = in_RCX;
        long lVar4 = this_00->size();
        if (lVar4 != 0) {
            uVar3 = 0;
            do {
                this_02 = (AnimationStateDescriptor*)(*this_00)[uVar3];
                this_02->SSOBeginPtr();
                lVar4 = eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>::find(local_c8);
                lVar5 = local_c8.end();
                if (lVar4 != lVar5) {
                    LogAssert("namesMap.find(stateDesc.GetName()) == namesMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachineDescriptor.cpp",
                              168, "Cannot create a state machine with two states having the same name");
                }
                pbVar6 = (eastl::string*)this_02->SSOBeginPtr();
                piVar7 = &local_c8[*pbVar6];
                *piVar7 = (int)uVar3;
                *local_78 = this_02->Create(animationResourceManager);
                local_108.push_back(*local_78);
                uVar3 = (unsigned long)((int)uVar3 + 1);
                uVar8 = this_00->size();
            } while (uVar3 < uVar8);
        }
        Layout* this_01 = local_a0;
        auto this_03 = local_a0->HeapBeginPtr();
        auto pEVar9 = this_01->end();
        if (this_03 != pEVar9) {
            do {
                this_03->SSOBeginPtr();
                lVar4 = eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>::find(local_c8);
                lVar5 = local_c8.end();
                if (lVar4 == lVar5) {
                    this_03->SSOBeginPtr();
                    uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    LogAssert("namesMap.find(transitionDesc.GetFrom()) != namesMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachineDescriptor.cpp",
                              180, "Failed to find state: %s", uVar10);
                }
                this_03->GetDefaultValue();
                lVar4 = eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>::find(local_c8);
                lVar5 = local_c8.end();
                if (lVar4 == lVar5) {
                    this_03->GetDefaultValue();
                    uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    LogAssert("namesMap.find(transitionDesc.GetTo()) != namesMap.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachineDescriptor.cpp",
                              181, "Failed to find state: %s", uVar10);
                }
                pbVar6 = (eastl::string*)this_03->SSOBeginPtr();
                puVar11 = &local_c8[*pbVar6];
                uVar1 = *puVar11;
                pbVar6 = (eastl::string*)this_03->GetDefaultValue();
                puVar11 = &local_c8[*pbVar6];
                local_78._4_4_ = *puVar11;
                local_78._0_4_ = uVar1;
                local_78._8_8_ = this_03->GetOutputType();
                *((local_78 + 16)) = this_03->GetCanTransitionFunc(animationResourceManager);
                local_e8.emplace_back<AnimationStateMachine::TransitionInfo>(*local_78);
                this_03 = (EnumType*)&this_03->field_176;
            } while (this_03 != pEVar9);
        }
        unsigned int* puVar12 = &local_c8[local_90->field_8];
        new (this) AnimationStateMachine(local_108, local_e8, *puVar12, *local_88);
        return (AnimationStateMachine*)this;
    }

    // 0x100959bf0
    auto AnimationStateMachineDescriptor::ToString() const {
        eastl::string local_90;
        eastl::string local_70;
        ReturnValue local_50;

        auto result;
        uint8_t* this_00 = &field_40;
        unsigned long uVar1 = this_00->size();
        auto local_f8 = eastl::to_string(uVar1);
        Layout* local_b8 = (Layout*)&field_72;
        uVar1 = local_b8->size();
        auto local_d8 = eastl::to_string(uVar1);
        auto local_b0 = debug_helpers::GetTabbedSpaces(1);
        result.assign("AnimationStateMachine\n{\n");
        local_70 + local_b0;
        local_90 + local_70;
        local_50 + local_90;
        result += &local_50;
        local_50 + local_b0;
        result += &local_50;
        auto this_02 = this_00->HeapBeginPtr();
        auto pAVar2 = this_00->end();
        if (this_02 != pAVar2) {
            do {
                local_50 = this_02->ToString(2);
                result += &local_50;
                this_02 = this_02 + 1;
            } while (this_02 != pAVar2);
        }
        local_50 + local_b0;
        result += &local_50;
        local_70 + local_b0;
        local_90 + local_70;
        local_50 + local_90;
        result += &local_50;
        local_50 + local_b0;
        result += &local_50;
        Layout* this_01 = local_b8;
        auto this_03 = local_b8->HeapBeginPtr();
        auto pAVar3 = this_01->end();
        if (this_03 != pAVar3) {
            do {
                local_50 = this_03->ToString(2);
                result += &local_50;
                this_03 = this_03 + 1;
            } while (this_03 != pAVar3);
        }
        local_50 + local_b0;
        result += &local_50;
        local_70 + local_b0;
        local_90 + local_70;
        local_50 + local_90;
        result += &local_50;
        result += "}\n";
        return result;
    }

} // namespace jag::graphics

// 0x1009583f0
unsigned long long readTime(const std::string& str) {
    unsigned int arg2;
    long local_148[35];
    unsigned long long local_18;

    auto str_00 = str.c_str();
    local_30.basic_string<decltype(nullptr)>(str_00);
    new (local_148)
        std::basic_stringstream<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>>(&local_30, arg2);
    basic_string<char, std::char_traits<char>, jag::BucketAllocatorSTL<char>> local_30;
    *local_148 >> local_18;
    if ((((istream*)local_148 + *(long*)(local_148[0] - 24)))->eof() == '\0') {
        *local_148 >> local_30;
    }
    if (&local_30 == "ms") {
        local_18 = local_18 * 1000000;
    } else {
        if (&local_30 == "s") {
            local_18 = local_18 * 1000000000;
        }
    }
    unsigned long long uVar1 = local_18;
    return uVar1;
}
