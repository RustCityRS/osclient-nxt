// libs/graphics/runetek7/animation/asm/AnimationStateTransitionDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateTransitionDescriptor.h"

namespace jag::graphics {
    // 0x100009ca0: AnimationStateTransitionDescriptor::GetFrom() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d850: AnimationStateTransitionDescriptor::GetTo() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000590a0: AnimationStateTransitionDescriptor::SimpleFuncDescriptor::~SimpleFuncDescriptor() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

    // 0x10024c430: AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor() has the same machine code as oldscape::configdecoder::ParamTypeHelper::ParamVariant::ParamVariant()

    // 0x1004c8de0: AnimationStateTransitionDescriptor::GetTransitionTimeNS() const has the same machine code as game::VarType::GetDataType() const

    // 0x100959a40
    auto AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList& variableList) const {
        char* pcVar2;
        uint64_t uVar3;
        uint64_t local_38;
        uint32_t local_30;

        if (field_76 == '\0') {
            auto result() > (field_80);
        } else {
            new (&result) std::function<bool()>();
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (variableList.HasVariable(pcVar2) == '\0') {
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssert("variables.HasVariable(m_canTransitionDescriptor.m_variable.c_str())",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationStateTransitionDescriptor.cpp",
                          49, "Variable \"%s\" referenced by transition does not exist in variables list", uVar3);
            }
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_38 = variableList.GetUintVariable(pcVar2);
            if (4 < *(unsigned int*)field_128) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/asm/AnimationStateTransitionDescriptor.cpp",
                                79, "Unknown Op Value: %i");
            }
            local_30 = *(uint32_t*)(field_128 + 40);
            switch (*(unsigned int*)field_128) {
            case 0:
                result = local_38;
                break;
            case 1:
                result = local_38;
                break;
            case 2:
                result = local_38;
                break;
            case 3:
                result = local_38;
                break;
            case 4:
                result = local_38;
            }
        }
        return result;
    }

    // 0x10095a040
    auto AnimationStateTransitionDescriptor::ToString(unsigned int arg1) const {
        eastl::string local_80;
        eastl::string local_60;
        eastl::string local_40;

        eastl::string local_c0;
        int iVar1 = field_72;
        if (iVar1 == 2) {
            eastl::string::assign(&local_c0, "Smoother Step");
        } else if (iVar1 == 1) {
            eastl::string::assign(&local_c0, "Smooth Step");
        } else if (iVar1 == 0) {
            eastl::string::assign(&local_c0, "Linear");
        }
        auto local_e0 = debug_helpers::GetTabbedSpaces(arg1);
        auto local_a0 = debug_helpers::GetTabbedSpaces(arg1 + 1);
        auto result;
        local_40 + local_e0;
        result = &local_40;
        local_40 + local_e0;
        result += &local_40;
        local_60 + local_a0;
        local_80 + local_60;
        local_40 + local_80;
        result += &local_40;
        local_60 + local_a0;
        local_80 + local_60;
        local_40 + local_80;
        result += &local_40;
        local_60 + local_a0;
        auto local_100 = eastl::to_string(m_transitionTimeNS);
        local_80 + local_60;
        local_40 + local_80;
        result += &local_40;
        local_60 + local_a0;
        local_80 + local_60;
        local_40 + local_80;
        result += &local_40;
        local_60 + local_a0;
        local_80 + local_60;
        local_40 + local_80;
        result += &local_40;
        local_40 + local_e0;
        result += &local_40;
        return result;
    }

    // 0x10095a7c0
    AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(PacketT<Array<unsigned char>>& arg1)
        : eastl::string(), field_76(0) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_50;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50, (uint8_t)arg1);
        *this = &local_50;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50, (uint8_t)arg1);
        field_32 = &local_50;
        m_transitionTimeNS = arg1.g8();
        field_72 = arg1.g4();
        field_76 = 1;
        uint32_t uVar3 = arg1.g4();
        *(uint32_t*)field_128 = uVar3;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50, (uint8_t)arg1);
        (*((field_128 + 8))) = &local_50;
        uVar3 = arg1.g4();
        *(uint32_t*)(field_128 + 40) = uVar3;
    }

    // 0x10096e6e0
    uint32_t AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const ::$_4::operator()() const {
        return **(int**)this == *(int*)(this + 8);
    }

    // 0x10096f000
    uint32_t AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const ::$_5::operator()() const {
        return *(unsigned int*)(this + 8) < **(unsigned int**)this;
    }

    // 0x10096f920
    uint32_t AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const ::$_6::operator()() const {
        return *(unsigned int*)(this + 8) <= **(unsigned int**)this;
    }

    // 0x100970240
    uint32_t AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const ::$_7::operator()() const {
        return **(unsigned int**)this < *(unsigned int*)(this + 8);
    }

    // 0x100970b60
    uint32_t AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const ::$_8::operator()() const {
        return **(unsigned int**)this <= *(unsigned int*)(this + 8);
    }

} // namespace jag::graphics
