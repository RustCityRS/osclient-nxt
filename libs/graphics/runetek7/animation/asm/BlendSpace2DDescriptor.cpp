// libs/graphics/runetek7/animation/asm/BlendSpace2DDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendSpace2DDescriptor.h"

namespace jag::graphics {
    // 0x1000641f0: BlendSpace2DDescriptor::LocationInfo::GetPositionY() const has the same machine code as SunlightOptions::GetSunElevation() const

    // 0x1001c4510: BlendSpace2DDescriptor::LocationInfo::GetPositionX() const has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const

    // 0x1002699a0: BlendSpace2DDescriptor::GetNodeType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const

    // 0x10095b700: BlendSpace2DDescriptor::LocationInfo::GetBlendTree() const has the same machine code as BlendSpace1DDescriptor::LocationInfo::GetBlendTree() const

    // 0x10095c810
    BlendSpace2DDescriptor::LocationInfo::LocationInfo(PacketT<Array<unsigned char>>& arg1) {
        unique_ptr<true, void>();
        float fVar1 = (float)arg1.gFloat();
        m_positionX = fVar1;
        fVar1 = (float)arg1.gFloat();
        m_positionY = fVar1;
        auto local_20 = BlendTreeNodeDescriptor::FromPacket(arg1);
        *this = local_20;
    }

    // 0x10095c8a0
    BlendSpace2DDescriptor::BlendSpace2DDescriptor(PacketT<Array<unsigned char>>& arg1) : BlendTreeNodeDescriptor() {
        unsigned int local_58[8];

        eastl::string* local_38 = (eastl::string*)&field_40;
        new (local_38) eastl::string();
        uint8_t* this_00 = &field_72;
        new (this_00) eastl::vector<BlendSpace2DDescriptor::LocationInfo>();
        uint8_t* this_01 = &field_104;
        new (this_01) eastl::vector<int>();
        local_58->gStringCP1252ToUTF8<eastl::string>((uint8_t)arg1);
        field_8 = local_58;
        local_58->gStringCP1252ToUTF8<eastl::string>((uint8_t)arg1);
        *local_38 = local_58;
        unsigned int uVar1 = arg1.g4();
        unsigned long uVar2 = (unsigned long)uVar1;
        this_00->clear();
        this_00->reserve(uVar2);
        if (uVar1 != 0) {
            do {
                this_00->emplace_back<PacketT<Array<unsigned char>>&>(arg1);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        uVar1 = arg1.g4();
        uVar2 = (unsigned long)uVar1;
        this_01->reserve(uVar2);
        if (uVar1 != 0) {
            do {
                local_58[0] = arg1.g4();
                this_01->emplace_back<unsigned int>(*local_58);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }

    // 0x10095cb80
    BlendSpace2DDescriptor* BlendSpace2DDescriptor::Create(AnimationStateResourceList& animationStateResourceList,
                                                           VariableList& variableList) {
        long* plVar5;
        float* pfVar6;
        VariableList* in_RCX;
        uint32_t uVar8;
        float* local_50;
        ReturnValue local_38;

        VariableList* local_58 = in_RCX;
        vector<BlendSpace2D::BlendSpaceEntry> local_88;
        uint8_t* this_00 = &animationStateResourceList[2].field_6;
        AnimationStateResourceList* local_68 = animationStateResourceList;
        local_88.reserve(this_00->size());
        float local_48 = 3.4028235e+38;
        float local_44 = 1.1754944e-38;
        float local_40 = 3.4028235e+38;
        float local_3c = 1.1754944e-38;
        auto this_01 = this_00->HeapBeginPtr();
        auto pEVar4 = this_00->end();
        if (this_01 != pEVar4) {
            do {
                plVar5 = this_01->GetBlendTree();
                (**(void (**)(...))(*plVar5 + 24))(&local_a8, plVar5, variableList, local_58);
                local_38._0_4_ = this_01->GetBrightpassThreshold();
                pfVar6 = std::min<float>(local_48, local_38);
                local_48 = *pfVar6;
                local_38._0_4_ = this_01->GetBrightpassThreshold();
                pfVar6 = std::max<float>(local_44, local_38);
                local_44 = *pfVar6;
                local_38._0_4_ = this_01->GetOutlineRadiusAdjustment();
                pfVar6 = std::min<float>(local_40, local_38);
                local_40 = *pfVar6;
                local_38._0_4_ = this_01->GetOutlineRadiusAdjustment();
                pfVar6 = std::max<float>(local_3c, local_38);
                local_3c = *pfVar6;
                local_38._0_4_ = this_01->GetBrightpassThreshold();
                uVar8 = this_01->GetOutlineRadiusAdjustment();
                local_50 = (float*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar8);
                std::vector<BlendSpace2D::BlendSpaceEntry>::emplace_back<std::unique_ptr<BlendTreeNode>, float, float>(
                    &local_88, &local_a8, (float*)&local_38, (float*)&local_50);
                this_01 = (EntityHighlightGlobalState*)&this_01->m_playerNPCAttackOpPriority;
            } while (this_01 != pEVar4);
        }
        AnimationStateResourceList* pAVar1 = local_68;
        char* pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (!(local_58->HasVariable(pcVar7))) {
            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_58->AddFloatVariable(pcVar7, local_48, local_44, local_48);
        }
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (!(local_58->HasVariable(pcVar7))) {
            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_58->AddFloatVariable(pcVar7, local_40, local_3c, local_40);
        }
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> _> local_a8(pAVar1[3].field_5);
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_50 = local_58->GetFloatVariable(pcVar7);
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto local_70 = local_58->GetFloatVariable(pcVar7);
        local_38 = std::make_unique<BlendSpace2D, float*, float*, std::vector<BlendSpace2D::BlendSpaceEntry>,
                                    eastl::vector<int>>(local_50, local_70, local_88, local_a8);
        unique_ptr<BlendSpace2D, std::default_delete<BlendSpace2D>, void, void>(local_38);
        return this;
    }

    // 0x10095d010
    BlendSpace2DDescriptor* BlendSpace2DDescriptor::ToString(unsigned int arg1) const {
        long* plVar3;
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        float fVar6;
        eastl::string local_130;
        eastl::string local_110;
        ReturnValue local_f0;
        eastl::string local_58;

        auto local_d0 = debug_helpers::GetTabbedSpaces(in_EDX);
        auto local_b0 = debug_helpers::GetTabbedSpaces(in_EDX + 1);
        auto local_90 = debug_helpers::GetTabbedSpaces(in_EDX + 2);
        new (this) eastl::string();
        local_58 + local_d0;
        *this = &local_58;
        local_58 + local_d0;
        *this += &local_58;
        local_58 + local_b0;
        *this += &local_58;
        local_58 + local_b0;
        unsigned long local_60 = (unsigned long)in_EDX;
        *this += &local_58;
        Layout* this_01 = (Layout*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 72);
        long local_68 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto this_00 = this_01->HeapBeginPtr();
        auto local_70 = this_01->end();
        if (this_00 != local_70) {
            local_60 = (unsigned long)((int)local_60 + 3);
            do {
                local_130 + local_90;
                fVar6 = (float)this_00->GetBrightpassThreshold();
                eastl::to_string(fVar6);
                local_f0 + local_130;
                local_58 + local_f0;
                *this += &local_58;
                local_130 + local_90;
                fVar6 = (float)this_00->GetOutlineRadiusAdjustment();
                eastl::to_string(fVar6);
                local_f0 + local_130;
                local_58 + local_f0;
                *this += &local_58;
                local_58 + local_90;
                *this += &local_58;
                plVar3 = this_00->GetBlendTree();
                (**(void (**)(...))(*plVar3 + 32))(&local_58, plVar3, local_60);
                *this += &local_58;
                local_58 + local_90;
                *this += &local_58;
                this_00 = (EntityHighlightGlobalState*)&this_00->m_playerNPCAttackOpPriority;
            } while (this_00 != local_70);
        }
        local_58 + local_b0;
        BlendSpace2DDescriptor* pBVar2 = this;
        *this += &local_58;
        long lVar1 = local_68;
        local_58 + local_b0;
        *pBVar2 += &local_58;
        int* piVar4 = (int*)((lVar1 + 104))->HeapBeginPtr();
        int* piVar5 = (int*)((lVar1 + 104))->end();
        if (piVar4 != piVar5) {
            do {
                local_f0 = eastl::to_string(*piVar4);
                local_58 + local_f0;
                *this += &local_58;
                piVar4 = piVar4 + 1;
            } while (piVar4 != piVar5);
        }
        pBVar2 = this;
        *this += "\n";
        local_58 + local_d0;
        *pBVar2 += &local_58;
        return pBVar2;
    }

    // 0x1009641e0: BlendSpace2DDescriptor::LocationInfo::~LocationInfo() has the same machine code as BlendSpace1DDescriptor::LocationInfo::~LocationInfo()

} // namespace jag::graphics
