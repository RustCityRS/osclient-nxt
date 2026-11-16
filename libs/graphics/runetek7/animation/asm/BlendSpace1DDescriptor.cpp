// libs/graphics/runetek7/animation/asm/BlendSpace1DDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendSpace1DDescriptor.h"

namespace jag::graphics {
    // 0x1001c4510: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const, which has identical code
    float BlendSpace1DDescriptor::LocationInfo::GetPosition() const;

    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    BlendSpace1DDescriptor::GetNodeType() const;

    // 0x10095b230, 112 bytes, base-object constructor, placed by class name and debug map
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo(PacketT<Array<unsigned char, eastl::allocator> >&)
    void BlendSpace1DDescriptor::LocationInfo::LocationInfo(PacketT* param_1) {
        float fVar1;
        BlendTreeNodeDescriptor local_20;

        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this);
        fVar1 = (float)param_1->gFloat();
        m_position = fVar1;
        local_20.FromPacket(param_1);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
            (unique_ptr*)&local_20);
        local_20.~unique_ptr();
    }

    // 0x10095b2a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10095b2b0, 288 bytes, base-object constructor, placed by class name and debug map
    // BlendSpace1DDescriptor::BlendSpace1DDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void BlendSpace1DDescriptor::BlendSpace1DDescriptor(PacketT* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        uint uVar1;
        ulong uVar2;
        float fVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_58[32];
        undefined1* local_38;

        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__BlendSpace1DDescriptor_100f1b2b8;
        this_00 = &field_16;
        new (this_00) eastl::string();
        this_01 = &field_48;
        local_38 = this_00;
        new (this_01) eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>();
        fVar3 = (float)param_1->gFloat();
        field_8 = fVar3;
        fVar3 = (float)param_1->gFloat();
        field_12 = fVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)this_00, (basic_string*)local_58);
        local_58->~basic_string();
        uVar1 = param_1->g4();
        uVar2 = (ulong)uVar1;
        this_01->clear();
        this_01->reserve(uVar2);
        if (uVar1 != 0) {
            do {
                eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>::emplace_back<
                    PacketT<Array<unsigned char, eastl::allocator>>&>(
                    (vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>*)this_01, param_1);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }

    // 0x10095b4d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendSpace1DDescriptor::BlendSpace1DDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10095b4e0, 400 bytes, placed by class name and debug map
    // BlendSpace1DDescriptor::Create(AnimationStateResourceList&, VariableList&)
    BlendSpace1DDescriptor* BlendSpace1DDescriptor::Create(AnimationStateResourceList* param_1, VariableList* param_2) {
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        BlendSpace1DDescriptor* pBVar1;
        char cVar2;
        ulong uVar3;
        LocationInfo* this_01;
        LocationInfo* pLVar4;
        long* plVar5;
        char* pcVar6;
        VariableList* in_RCX;
        undefined4 uVar7;
        vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>> local_68[24];
        BlendSpace1DDescriptor* local_50;
        unique_ptr local_48[8];
        undefined8 local_40;
        AnimationStateResourceList* local_38;

        local_50 = this;
        std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::vector();
        this_00 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)((long)&param_1[1].field_8 + 7);
        local_38 = param_1;
        uVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::reserve(local_68,
                                                                                                           uVar3);
        this_01 = (LocationInfo*)this_00->HeapBeginPtr();
        pLVar4 = (LocationInfo*)this_00->end();
        if (this_01 != pLVar4) {
            do {
                plVar5 = (long*)this_01->GetBlendTree();
                (**(code**)(*plVar5 + 24))(local_48, plVar5, param_2);
                uVar7 = this_01->GetBrightpassThreshold();
                local_40 = CONCAT44(local_40._4_4_, uVar7);
                std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::emplace_back<
                    std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>, float>(local_68, local_48,
                                                                                               (float*)&local_40);
                local_48->~unique_ptr();
                this_01 = (LocationInfo*)&this_01->field_16;
            } while (this_01 != pLVar4);
        }
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        cVar2 = in_RCX->HasVariable(pcVar6);
        if (cVar2 == '\0') {
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            in_RCX->AddFloatVariable(pcVar6, *(float*)&local_38->field_8, *(float*)((long)&local_38->field_8 + 4),
                                     *(float*)&local_38->field_8);
        }
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_40 = in_RCX->GetFloatVariable(pcVar6);
        std::make_unique<BlendSpace1D, float&, float&, float*,
                         std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>>(
            (float*)local_48, (float*)&local_38->field_8, (float**)((long)&local_38->field_8 + 4), (vector*)&local_40);
        pBVar1 = local_50;
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::unique_ptr<
            BlendSpace1D, std::default_delete<BlendSpace1D>, void, void>(
            (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)local_50, local_48);
        local_48->~unique_ptr();
        std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::~vector(local_68);
        return pBVar1;
    }

    // 0x10095ba30, 1344 bytes, placed by class name
    // BlendSpace1DDescriptor::ToString(unsigned int) const
    BlendSpace1DDescriptor* BlendSpace1DDescriptor::ToString(uint param_1) {
        LocationInfo* this_00;
        long* plVar1;
        uint in_EDX;
        undefined4 in_register_00000034;
        long lVar2;
        float fVar3;
        debug_helpers local_120[32];
        debug_helpers local_100[32];
        debug_helpers local_e0[32];
        LocationInfo* local_c0;
        eastl local_b8[32];
        eastl local_98[32];
        eastl local_78[32];
        ulong local_58;
        eastl local_50[32];

        lVar2 = CONCAT44(in_register_00000034, param_1);
        local_120->GetTabbedSpaces(in_EDX);
        local_e0->GetTabbedSpaces(in_EDX + 1);
        local_100->GetTabbedSpaces(in_EDX + 2);
        new (this) eastl::string();
        eastl::operator+(local_50, (basic_string*)local_120, (value_type*)"BlendSpace1D\n");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_120, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_78, (basic_string*)local_e0, (value_type*)"Min: ");
        eastl::to_string(local_98, *(float*)(lVar2 + 8));
        eastl::operator+(local_b8, (basic_string*)local_78, (basic_string*)local_98);
        eastl::operator+(local_50, (basic_string*)local_b8, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_b8->~basic_string();
        local_98->~basic_string();
        local_78->~basic_string();
        eastl::operator+(local_78, (basic_string*)local_e0, (value_type*)"Max: ");
        eastl::to_string(local_98, *(float*)(lVar2 + 12));
        eastl::operator+(local_b8, (basic_string*)local_78, (basic_string*)local_98);
        eastl::operator+(local_50, (basic_string*)local_b8, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_b8->~basic_string();
        local_98->~basic_string();
        local_78->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_e0, (value_type*)"Blend space locators\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_e0, (value_type*)"{\n");
        local_58 = (ulong)in_EDX;
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        this_00 = (LocationInfo*)((lVar2 + 48))->HeapBeginPtr();
        local_c0 = (LocationInfo*)((lVar2 + 48))->end();
        if (this_00 != local_c0) {
            local_58 = (ulong)((int)local_58 + 3);
            do {
                eastl::operator+(local_78, (basic_string*)local_100, (value_type*)"Loc: ");
                fVar3 = (float)this_00->GetBrightpassThreshold();
                eastl::to_string(local_98, fVar3);
                eastl::operator+(local_b8, (basic_string*)local_78, (basic_string*)local_98);
                eastl::operator+(local_50, (basic_string*)local_b8, (value_type*)&DAT_100e3824c);
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                local_b8->~basic_string();
                local_98->~basic_string();
                local_78->~basic_string();
                eastl::operator+(local_50, (basic_string*)local_100, (value_type*)"{\n");
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                plVar1 = (long*)this_00->GetBlendTree();
                (**(code**)(*plVar1 + 32))(local_50, plVar1, local_58);
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                eastl::operator+(local_50, (basic_string*)local_100, (value_type*)"}\n");
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                this_00 = (LocationInfo*)&this_00->field_16;
            } while (this_00 != local_c0);
        }
        eastl::operator+(local_50, (basic_string*)local_e0, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_120, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_100->~basic_string();
        local_e0->~basic_string();
        local_120->~basic_string();
        return this;
    }

} // namespace jag::graphics
