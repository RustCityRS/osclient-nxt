// libs/graphics/runetek7/animation/asm/BlendSpace2DDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendSpace2DDescriptor.h"

namespace jag::graphics {
    // 0x1000641f0: the linker folded this into SunlightOptions::GetSunElevation() const, which has identical code
    BlendSpace2DDescriptor::LocationInfo::GetPositionY() const;

    // 0x1001c4510: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const, which has identical code
    BlendSpace2DDescriptor::LocationInfo::GetPositionX() const;

    // 0x1002699a0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const, which has identical code
    BlendSpace2DDescriptor::GetNodeType() const;

    // 0x10095b700: the linker folded this into BlendSpace1DDescriptor::LocationInfo::GetBlendTree() const, which has identical code
    BlendSpace2DDescriptor::LocationInfo::GetBlendTree() const;

    // 0x10095c810, 128 bytes, base-object constructor, placed by class name and debug map
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo(PacketT<Array<unsigned char, eastl::allocator> >&)
    void BlendSpace2DDescriptor::LocationInfo::LocationInfo(PacketT* param_1) {
        float fVar1;
        BlendTreeNodeDescriptor local_20;

        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this);
        fVar1 = (float)param_1->gFloat();
        field_8 = fVar1;
        fVar1 = (float)param_1->gFloat();
        field_12 = fVar1;
        local_20.FromPacket(param_1);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
            (unique_ptr*)&local_20);
        local_20.~unique_ptr();
    }

    // 0x10095c890, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10095c8a0, 416 bytes, base-object constructor, placed by class name and debug map
    // BlendSpace2DDescriptor::BlendSpace2DDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void BlendSpace2DDescriptor::BlendSpace2DDescriptor(PacketT* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        uint uVar1;
        ulong uVar2;
        uint local_58[8];
        eastl::string* local_38;

        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__BlendSpace2DDescriptor_100f1b348;
        new (&field_8) eastl::string();
        local_38 = (eastl::string*)&field_40;
        eastl::string::basic_string(local_38);
        this_00 = &field_72;
        new (this_00) eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>();
        this_01 = &field_104;
        new (this_01) eastl::vector<int, eastl::allocator>();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_58);
        local_58->~basic_string();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58, SUB81(param_1, 0));
        eastl::string::operator=(local_38, (basic_string*)local_58);
        local_58->~basic_string();
        uVar1 = param_1->g4();
        uVar2 = (ulong)uVar1;
        this_00->clear();
        this_00->reserve(uVar2);
        if (uVar1 != 0) {
            do {
                eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>::emplace_back<
                    PacketT<Array<unsigned char, eastl::allocator>>&>(
                    (vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>*)this_00, param_1);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        uVar1 = param_1->g4();
        uVar2 = (ulong)uVar1;
        this_01->reserve(uVar2);
        if (uVar1 != 0) {
            do {
                local_58[0] = param_1->g4();
                eastl::vector<int, eastl::allocator>::emplace_back<unsigned int>(
                    (vector<int, eastl::allocator>*)this_01, local_58);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }

    // 0x10095cb70, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendSpace2DDescriptor::BlendSpace2DDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10095cb80, 736 bytes, placed by class name and debug map
    // BlendSpace2DDescriptor::Create(AnimationStateResourceList&, VariableList&)
    BlendSpace2DDescriptor* BlendSpace2DDescriptor::Create(AnimationStateResourceList* param_1, VariableList* param_2) {
        undefined1* this_00;
        AnimationStateResourceList* pAVar1;
        BlendSpace2DDescriptor* pBVar2;
        char cVar3;
        ulong uVar4;
        EntityHighlightGlobalState* this_01;
        EntityHighlightGlobalState* pEVar5;
        long* plVar6;
        float* pfVar7;
        char* pcVar8;
        VariableList* in_RCX;
        undefined4 uVar9;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>> local_a8[32];
        vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>> local_88[24];
        undefined8 local_70;
        AnimationStateResourceList* local_68;
        BlendSpace2DDescriptor* local_60;
        VariableList* local_58;
        float* local_50;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float* local_38;

        local_60 = this;
        local_58 = in_RCX;
        std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>::vector();
        this_00 = &param_1[2].field_6;
        local_68 = param_1;
        uVar4 = this_00->size();
        std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>::reserve(local_88,
                                                                                                           uVar4);
        local_48 = 3.4028235e+38;
        local_44 = 1.1754944e-38;
        local_40 = 3.4028235e+38;
        local_3c = 1.1754944e-38;
        this_01 = (EntityHighlightGlobalState*)this_00->HeapBeginPtr();
        pEVar5 = (EntityHighlightGlobalState*)this_00->end();
        if (this_01 != pEVar5) {
            do {
                plVar6 = (long*)this_01->GetBlendTree();
                (**(code**)(*plVar6 + 24))(local_a8, plVar6, param_2, local_58);
                local_38._0_4_ = this_01->GetBrightpassThreshold();
                pfVar7 = std::min<float>(&local_48, (float*)&local_38);
                local_48 = *pfVar7;
                local_38._0_4_ = this_01->GetBrightpassThreshold();
                pfVar7 = std::max<float>(&local_44, (float*)&local_38);
                local_44 = *pfVar7;
                local_38._0_4_ = this_01->GetOutlineRadiusAdjustment();
                pfVar7 = std::min<float>(&local_40, (float*)&local_38);
                local_40 = *pfVar7;
                local_38._0_4_ = this_01->GetOutlineRadiusAdjustment();
                pfVar7 = std::max<float>(&local_3c, (float*)&local_38);
                local_3c = *pfVar7;
                local_38._0_4_ = this_01->GetBrightpassThreshold();
                uVar9 = this_01->GetOutlineRadiusAdjustment();
                local_50 = (float*)CONCAT44(local_50._4_4_, uVar9);
                std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>::emplace_back<
                    std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>, float, float>(
                    (unique_ptr*)local_88, (float*)local_a8, (float*)&local_38);
                std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::~unique_ptr(local_a8);
                this_01 = (EntityHighlightGlobalState*)&this_01->field_16;
            } while (this_01 != pEVar5);
        }
        pAVar1 = local_68;
        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        cVar3 = local_58->HasVariable(pcVar8);
        if (cVar3 == '\0') {
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_58->AddFloatVariable(pcVar8, local_48, local_44, local_48);
        }
        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        cVar3 = local_58->HasVariable(pcVar8);
        if (cVar3 == '\0') {
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_58->AddFloatVariable(pcVar8, local_40, local_3c, local_40);
        }
        new (local_a8) eastl::vector<int, eastl::allocator>((vector*)&pAVar1[3].field_5);
        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_50 = (float*)local_58->GetFloatVariable(pcVar8);
        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_70 = local_58->GetFloatVariable(pcVar8);
        std::make_unique<BlendSpace2D, float*, float*,
                         std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>,
                         eastl::vector<int, eastl::allocator>>(&local_38, &local_50, (vector*)&local_70,
                                                               (vector*)local_88);
        pBVar2 = local_60;
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::unique_ptr<
            BlendSpace2D, std::default_delete<BlendSpace2D>, void, void>(
            (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)local_60, (unique_ptr*)&local_38);
        local_38.~unique_ptr();
        local_a8->~vector();
        std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>::~vector(local_88);
        return pBVar2;
    }

    // 0x10095d010, 1392 bytes, placed by class name and debug map
    // BlendSpace2DDescriptor::ToString(unsigned int) const
    BlendSpace2DDescriptor* BlendSpace2DDescriptor::ToString(uint param_1) {
        long lVar1;
        BlendSpace2DDescriptor* pBVar2;
        EntityHighlightGlobalState* this_00;
        long* plVar3;
        int* piVar4;
        int* piVar5;
        uint in_EDX;
        undefined4 in_register_00000034;
        Layout* this_01;
        float fVar6;
        eastl local_130[32];
        eastl local_110[32];
        eastl local_f0[32];
        debug_helpers local_d0[32];
        debug_helpers local_b0[32];
        debug_helpers local_90[32];
        EntityHighlightGlobalState* local_70;
        long local_68;
        ulong local_60;
        eastl local_58[32];

        local_d0->GetTabbedSpaces(in_EDX);
        local_b0->GetTabbedSpaces(in_EDX + 1);
        local_90->GetTabbedSpaces(in_EDX + 2);
        new (this) eastl::string();
        eastl::operator+(local_58, (basic_string*)local_d0, (value_type*)"BlendSpace1D\n");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_58);
        local_58->~basic_string();
        eastl::operator+(local_58, (basic_string*)local_d0, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_58);
        local_58->~basic_string();
        eastl::operator+(local_58, (basic_string*)local_b0, (value_type*)"Blend space locators\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_58);
        local_58->~basic_string();
        eastl::operator+(local_58, (basic_string*)local_b0, (value_type*)"{\n");
        local_60 = (ulong)in_EDX;
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_58);
        local_58->~basic_string();
        this_01 = (Layout*)(CONCAT44(in_register_00000034, param_1) + 72);
        local_68 = CONCAT44(in_register_00000034, param_1);
        this_00 = (EntityHighlightGlobalState*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        local_70 = (EntityHighlightGlobalState*)this_01->end();
        if (this_00 != local_70) {
            local_60 = (ulong)((int)local_60 + 3);
            do {
                eastl::operator+(local_130, (basic_string*)local_90, (value_type*)"Loc X: ");
                fVar6 = (float)this_00->GetBrightpassThreshold();
                eastl::to_string(local_110, fVar6);
                eastl::operator+(local_f0, (basic_string*)local_130, (basic_string*)local_110);
                eastl::operator+(local_58, (basic_string*)local_f0, (value_type*)&DAT_100e3824c);
                eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
                local_58->~basic_string();
                local_f0->~basic_string();
                local_110->~basic_string();
                local_130->~basic_string();
                eastl::operator+(local_130, (basic_string*)local_90, (value_type*)"Loc Y: ");
                fVar6 = (float)this_00->GetOutlineRadiusAdjustment();
                eastl::to_string(local_110, fVar6);
                eastl::operator+(local_f0, (basic_string*)local_130, (basic_string*)local_110);
                eastl::operator+(local_58, (basic_string*)local_f0, (value_type*)&DAT_100e3824c);
                eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
                local_58->~basic_string();
                local_f0->~basic_string();
                local_110->~basic_string();
                local_130->~basic_string();
                eastl::operator+(local_58, (basic_string*)local_90, (value_type*)"{\n");
                eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
                local_58->~basic_string();
                plVar3 = (long*)this_00->GetBlendTree();
                (**(code**)(*plVar3 + 32))(local_58, plVar3, local_60);
                eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
                local_58->~basic_string();
                eastl::operator+(local_58, (basic_string*)local_90, (value_type*)"}\n");
                eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
                local_58->~basic_string();
                this_00 = (EntityHighlightGlobalState*)&this_00->field_16;
            } while (this_00 != local_70);
        }
        eastl::operator+(local_58, (basic_string*)local_b0, (value_type*)"}\n");
        pBVar2 = (BlendSpace2DDescriptor*)this;
        eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
        lVar1 = local_68;
        local_58->~basic_string();
        eastl::operator+(local_58, (basic_string*)local_b0, (value_type*)"Triangle indices: ");
        eastl::string::operator+=((eastl::string*)pBVar2, (basic_string*)local_58);
        local_58->~basic_string();
        piVar4 = (int*)((lVar1 + 104))->HeapBeginPtr();
        piVar5 = (int*)((lVar1 + 104))->end();
        if (piVar4 != piVar5) {
            do {
                eastl::to_string(local_f0, *piVar4);
                eastl::operator+(local_58, (basic_string*)local_f0, (value_type*)&DAT_100e35840);
                eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, (basic_string*)local_58);
                local_58->~basic_string();
                local_f0->~basic_string();
                piVar4 = piVar4 + 1;
            } while (piVar4 != piVar5);
        }
        pBVar2 = (BlendSpace2DDescriptor*)this;
        eastl::string::operator+=((eastl::string*)(BlendSpace2DDescriptor*)this, "\n");
        eastl::operator+(local_58, (basic_string*)local_d0, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)pBVar2, (basic_string*)local_58);
        local_58->~basic_string();
        local_90->~basic_string();
        local_b0->~basic_string();
        local_d0->~basic_string();
        return pBVar2;
    }

    // 0x1009641d0: the linker folded this into BlendSpace1DDescriptor::LocationInfo::~LocationInfo(), which has identical code
    BlendSpace2DDescriptor::LocationInfo::~LocationInfo();

    // 0x1009641e0: the linker folded this into BlendSpace1DDescriptor::LocationInfo::~LocationInfo(), which has identical code
    BlendSpace2DDescriptor::LocationInfo::~LocationInfo();

} // namespace jag::graphics
