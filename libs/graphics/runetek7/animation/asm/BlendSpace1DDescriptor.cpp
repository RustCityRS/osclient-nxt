// libs/graphics/runetek7/animation/asm/BlendSpace1DDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendSpace1DDescriptor.h"

namespace jag::graphics {
    // 0x1001c4510: BlendSpace1DDescriptor::LocationInfo::GetPosition() const has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const

    // 0x1002699e0: BlendSpace1DDescriptor::GetNodeType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x10095b230
    BlendSpace1DDescriptor::LocationInfo::LocationInfo(PacketT<Array<unsigned char>>& arg1) {
        unique_ptr<true, void>();
        m_position = (float)arg1.gFloat();
        auto local_20 = BlendTreeNodeDescriptor::FromPacket(arg1);
        *this = local_20;
    }

    // 0x10095b2b0
    BlendSpace1DDescriptor::BlendSpace1DDescriptor(PacketT<Array<unsigned char>>& arg1) : BlendTreeNodeDescriptor() {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_58;

        uint8_t* this_00 = &field_16;
        new (this_00) eastl::string();
        uint8_t* this_01 = &field_48;
        uint8_t* local_38 = this_00;
        new (this_01) eastl::vector<BlendSpace1DDescriptor::LocationInfo>();
        float fVar2 = (float)arg1.gFloat();
        field_8 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_12 = fVar2;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, (uint8_t)arg1);
        *this_00 = &local_58;
        unsigned int uVar1 = arg1.g4();
        unsigned long arg1_00 = (unsigned long)uVar1;
        this_01->clear();
        this_01->reserve(arg1_00);
        if (uVar1 != 0) {
            do {
                this_01->emplace_back<PacketT<Array<unsigned char>>&>(arg1);
                arg1_00 = arg1_00 - 1;
            } while (arg1_00 != 0);
        }
    }

    // 0x10095b4e0
    BlendSpace1DDescriptor* BlendSpace1DDescriptor::Create(AnimationStateResourceList& animationStateResourceList,
                                                           VariableList& variableList) {
        long* plVar4;
        VariableList* in_RCX;
        uint32_t uVar6;
        ReturnValue local_48;
        float* local_40;

        vector<BlendSpace1D::BlendSpaceEntry> local_68;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                    BucketAllocatorEASTL>*)((long)&animationStateResourceList[1].field_8 + 7);
        AnimationStateResourceList* local_38 = animationStateResourceList;
        local_68.reserve(this_00->size());
        auto this_01 = this_00->HeapBeginPtr();
        auto pLVar3 = this_00->end();
        if (this_01 != pLVar3) {
            do {
                plVar4 = this_01->GetBlendTree();
                (**(void (**)(...))(*plVar4 + 24))(&local_48, plVar4, variableList);
                uVar6 = this_01->GetBrightpassThreshold();
                local_40 = (float*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar6);
                std::vector<BlendSpace1D::BlendSpaceEntry>::emplace_back<std::unique_ptr<BlendTreeNode>, float>(
                    &local_68, (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> _>*)&local_48,
                    (float*)&local_40);
                this_01 = (LocationInfo*)&this_01->field_16;
            } while (this_01 != pLVar3);
        }
        char* pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (in_RCX->HasVariable(pcVar5) == '\0') {
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            in_RCX->AddFloatVariable(pcVar5, *(float*)&local_38->field_8, *(float*)((long)&local_38->field_8 + 4),
                                     *(float*)&local_38->field_8);
        }
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_40 = in_RCX->GetFloatVariable(pcVar5);
        local_48 = std::make_unique<BlendSpace1D, float&, float&, float*, std::vector<BlendSpace1D::BlendSpaceEntry>>(
            local_38->field_8, *((float*)((long)&local_38->field_8 + 4)), local_40, local_68);
        unique_ptr<BlendSpace1D, std::default_delete<BlendSpace1D>, void, void>(local_48);
        return this;
    }

    // 0x10095ba30
    auto BlendSpace1DDescriptor::ToString(unsigned int arg1) const {
        long* plVar1;
        eastl::string local_b8;
        eastl::string local_98;
        eastl::string local_78;
        eastl::string local_50;

        auto local_120 = debug_helpers::GetTabbedSpaces(arg1);
        auto local_e0 = debug_helpers::GetTabbedSpaces(arg1 + 1);
        auto local_100 = debug_helpers::GetTabbedSpaces(arg1 + 2);
        auto result;
        local_50 + local_120;
        result = &local_50;
        local_50 + local_120;
        result += &local_50;
        local_78 + local_e0;
        eastl::to_string(field_8);
        local_b8 + local_78;
        local_50 + local_b8;
        result += &local_50;
        local_78 + local_e0;
        eastl::to_string(field_12);
        local_b8 + local_78;
        local_50 + local_b8;
        result += &local_50;
        local_50 + local_e0;
        result += &local_50;
        local_50 + local_e0;
        unsigned long local_58 = (unsigned long)arg1;
        result += &local_50;
        auto this_00 = field_48.HeapBeginPtr();
        auto local_c0 = field_48.end();
        if (this_00 != local_c0) {
            local_58 = (unsigned long)((int)local_58 + 3);
            do {
                local_78 + local_100;
                eastl::to_string((float)this_00->GetBrightpassThreshold());
                local_b8 + local_78;
                local_50 + local_b8;
                result += &local_50;
                local_50 + local_100;
                result += &local_50;
                plVar1 = this_00->GetBlendTree();
                (**(void (**)(...))(*plVar1 + 32))(&local_50, plVar1, local_58);
                result += &local_50;
                local_50 + local_100;
                result += &local_50;
                this_00 = (LocationInfo*)&this_00->field_16;
            } while (this_00 != local_c0);
        }
        local_50 + local_e0;
        result += &local_50;
        local_50 + local_120;
        result += &local_50;
        return result;
    }

} // namespace jag::graphics
