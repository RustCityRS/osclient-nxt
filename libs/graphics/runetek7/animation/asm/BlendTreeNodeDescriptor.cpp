// libs/graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendTreeNodeDescriptor.h"

namespace jag::graphics {
    // 0x100009e70: BlendTreeNodeDescriptor::~BlendTreeNodeDescriptor() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100954ec0: BlendTreeNodeDescriptor::BlendTreeNodeDescriptor(BlendTreeNodeDescriptor const&) has the same machine code as BlendTreeNodeDescriptor::BlendTreeNodeDescriptor()

    // 0x100955340
    unique_ptr<BlendTreeNodeDescriptor>* BlendTreeNodeDescriptor::FromJSON(const Json::Value& value) {
        Value* pVVar4;
        uint64_t uVar5;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        uint8_t extraout_DL_01;
        uint8_t extraout_DL_02;
        uint8_t extraout_DL_03;
        uint8_t extraout_DL_04;
        unique_ptr<BlendTreeNodeDescriptor>* puVar6;
        uint32_t uVar7;
        ReturnValue local_e8;
        uint8_t local_e0;
        BlendTreeNodeDescriptor local_c8;
        uint8_t local_c0;
        uint64_t local_a8;
        uint8_t local_a0;
        BlendTreeNodeDescriptor local_98;
        ReturnValue local_78;
        ReturnValue local_50;
        uint8_t local_48;
        float local_38;
        float local_34;

        Value* pVVar2 = &value["NodeType"];
        auto pcVar3 = pVVar2->asCString();
        eastl::string local_108(pcVar3);
        bool cVar1 = local_108 == "Animation";
        if (!cVar1) {
            cVar1 = local_108 == "TwoNode";
            if (!cVar1) {
                cVar1 = local_108 == "BlendSpace1D";
                if (!cVar1) {
                    cVar1 = local_108 == "BlendSpace2D";
                    if (!cVar1) {
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                        125, "Unknown blend tree node type: %s", uVar5);
                    }
                    pVVar2 = &value["Type"];
                    local_78 = Json::Value("float");
                    cVar1 = *pVVar2 == local_78;
                    if (!cVar1) {
                        pVVar2 = &value["Type"];
                        pcVar3 = pVVar2->asCString();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                        120, "Unknown data type for node %s", pcVar3);
                    }
                    pVVar2 = &value["VariableX"];
                    pcVar3 = pVVar2->asCString();
                    local_78 = eastl::string(pcVar3);
                    pVVar2 = &value["VariableY"];
                    pcVar3 = pVVar2->asCString();
                    local_98 = eastl::string(pcVar3);
                    pVVar2 = &value["Nodes"];
                    local_c8 = eastl::vector<BlendSpace2DDescriptor::LocationInfo>();
                    local_e8 = (ReturnValue)pVVar2->begin();
                    local_e0 = extraout_DL_01;
                    local_50 = (ReturnValue)pVVar2->end();
                    local_48 = extraout_DL_02;
                    while (true) {
                        cVar1 = local_e8 != local_50;
                        if (!cVar1)
                            break;
                        pVVar2 = (Value*)*local_e8;
                        pVVar4 = (Value*)(*pVVar2)["PositionX"];
                        local_34 = (float)pVVar4->asFloat();
                        pVVar4 = (Value*)(*pVVar2)["PositionY"];
                        local_38 = (float)pVVar4->asFloat();
                        pVVar2 = (Value*)(*pVVar2)["BlendTree"];
                        FromJSON((BlendTreeNodeDescriptor*)&local_a8, pVVar2);
                        local_c8.emplace_back<std::unique_ptr<BlendTreeNodeDescriptor>, float&, float&>(
                            local_a8, local_34, local_38);
                        ++local_e8;
                    }
                    pVVar2 = &value["TriangleIndices"];
                    new (&local_e8) eastl::vector<int>();
                    local_50 = (ReturnValue)pVVar2->begin();
                    local_48 = extraout_DL_03;
                    local_a8 = pVVar2->end();
                    local_a0 = extraout_DL_04;
                    while (true) {
                        cVar1 = local_50 != local_a8;
                        if (!cVar1)
                            break;
                        pVVar2 = (Value*)*local_50;
                        local_34 = (float)pVVar2->asInt();
                        local_e8.push_back(local_34);
                        ++local_50;
                    }
                    local_50 =
                        std::make_unique<BlendSpace2DDescriptor, eastl::vector<BlendSpace2DDescriptor::LocationInfo>,
                                         eastl::string&, eastl::string&>(local_c8, local_78, local_98);
                    puVar6 = (unique_ptr<BlendTreeNodeDescriptor>*)this;
                    std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                        BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>, void, void>(
                        (unique_ptr<BlendTreeNodeDescriptor>*)this,
                        (unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor> _>*)&local_50);
                } else {
                    pVVar2 = &value["Type"];
                    local_78 = Json::Value("float");
                    cVar1 = *pVVar2 == local_78;
                    if (!cVar1) {
                        pVVar2 = &value["Type"];
                        pcVar3 = pVVar2->asCString();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                        81, "Unknown data type for node %s", pcVar3);
                    }
                    pVVar2 = &value["Min"];
                    uVar7 = pVVar2->asFloat();
                    local_a8 = (((uint64_t)local_a8._4_4_ << 32) | (uint32_t)uVar7);
                    pVVar2 = &value["Max"];
                    local_34 = (float)pVVar2->asFloat();
                    pVVar2 = &value["Variable"];
                    pcVar3 = pVVar2->asCString();
                    local_78 = eastl::string(pcVar3);
                    pVVar2 = &value["Nodes"];
                    local_98 = eastl::vector<BlendSpace1DDescriptor::LocationInfo>();
                    local_c8._vptr = (BlendTreeNodeDescriptor_vtbl*)pVVar2->begin();
                    local_c0 = extraout_DL;
                    local_e8 = (ReturnValue)pVVar2->end();
                    local_e0 = extraout_DL_00;
                    while (true) {
                        cVar1 = local_c8 != local_e8;
                        if (!cVar1)
                            break;
                        pVVar2 = (Value*)*local_c8;
                        pVVar4 = (Value*)(*pVVar2)["Position"];
                        local_38 = (float)pVVar4->asFloat();
                        pVVar2 = (Value*)(*pVVar2)["BlendTree"];
                        FromJSON((BlendTreeNodeDescriptor*)&local_50, pVVar2);
                        local_98.emplace_back<std::unique_ptr<BlendTreeNodeDescriptor>, float&>(local_50, local_38);
                        ++local_c8;
                    }
                    local_c8 =
                        std::make_unique<BlendSpace1DDescriptor, eastl::vector<BlendSpace1DDescriptor::LocationInfo>,
                                         eastl::string&, float&, float&>(local_98, local_78, local_a8, local_34);
                    puVar6 = (unique_ptr<BlendTreeNodeDescriptor>*)this;
                    std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                        BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>, void, void>(
                        (unique_ptr<BlendTreeNodeDescriptor>*)this,
                        (unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor> _>*)&local_c8);
                }
            } else {
                pVVar2 = &value["Type"];
                local_78 = Json::Value("float");
                cVar1 = *pVVar2 == local_78;
                if (!cVar1) {
                    pVVar2 = &value["Type"];
                    pcVar3 = pVVar2->asCString();
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/BlendTreeNodeDescriptor.cpp",
                                    51, "Unknown data type for node %s", pcVar3);
                }
                pVVar2 = &value["Min"];
                local_50._0_4_ = pVVar2->asFloat();
                pVVar2 = &value["Max"];
                uVar7 = pVVar2->asFloat();
                local_a8 = (((uint64_t)local_a8._4_4_ << 32) | (uint32_t)uVar7);
                pVVar2 = &value["Variable"];
                pcVar3 = pVVar2->asCString();
                local_78 = eastl::string(pcVar3);
                pVVar2 = &value["LeftNode"];
                FromJSON(&local_98, pVVar2);
                pVVar2 = &value["RightNode"];
                FromJSON(&local_c8, pVVar2);
                local_e8 = std::make_unique<TwoNodeBlendDescriptor<float>, std::unique_ptr<BlendTreeNodeDescriptor>,
                                            std::unique_ptr<BlendTreeNodeDescriptor>, float&, float&, eastl::string&>(
                    local_98, local_c8, local_50, local_a8, local_78);
                puVar6 = (unique_ptr<BlendTreeNodeDescriptor>*)this;
                std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                    TwoNodeBlendDescriptor<float>, std::default_delete<TwoNodeBlendDescriptor<float>>, void, void>(
                    (unique_ptr<BlendTreeNodeDescriptor>*)this,
                    (unique_ptr<TwoNodeBlendDescriptor<float>,
                                std::default_delete<TwoNodeBlendDescriptor<float> _> _>*)&local_e8);
            }
        } else {
            local_78 = std::make_unique<AnimationNodeDescriptor, Json::Value const&>(value);
            puVar6 = (unique_ptr<BlendTreeNodeDescriptor>*)this;
            std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor>, void, void>(
                (unique_ptr<BlendTreeNodeDescriptor>*)this);
        }
        return puVar6;
    }

    // 0x100955e80
    auto BlendTreeNodeDescriptor::FromPacket(PacketT<Array<unsigned char>>& arg1) {
        auto result;
        ReturnValue local_28;

        switch (arg1.g4()) {
        case 0:
            local_28 = std::make_unique<AnimationNodeDescriptor, PacketT<Array<unsigned char>>&>(arg1);
            std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor>, void, void>(
                &result,
                (unique_ptr<AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor> _>*)&local_28);
            break;
        case 1:
            local_28 = std::make_unique<TwoNodeBlendDescriptor<float>, PacketT<Array<unsigned char>>&>(arg1);
            std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                TwoNodeBlendDescriptor<float>, std::default_delete<TwoNodeBlendDescriptor<float>>, void, void>(
                &result, (unique_ptr<TwoNodeBlendDescriptor<float>,
                                     std::default_delete<TwoNodeBlendDescriptor<float> _> _>*)&local_28);
            break;
        case 2:
            local_28 = std::make_unique<BlendSpace1DDescriptor, PacketT<Array<unsigned char>>&>(arg1);
            std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>, void, void>(
                &result, (unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor> _>*)&local_28);
            break;
        case 3:
            local_28 = std::make_unique<BlendSpace2DDescriptor, PacketT<Array<unsigned char>>&>(arg1);
            std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
                BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>, void, void>(
                &result, (unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor> _>*)&local_28);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/asm/BlendTreeNodeDescriptor.cpp",
                            155, "Unknown blend tree node type");
        }
        return result;
    }

} // namespace jag::graphics
