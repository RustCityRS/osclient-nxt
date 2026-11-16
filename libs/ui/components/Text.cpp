// libs/ui/components/Text.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Text.h"

namespace jag::ui {
    // 0x1001ced10: the linker folded this into graphics::GraphNode::GetEntity(), which has identical code
    Text::GetLinkObjCount() const;

    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    Text::GetType() const;

    // 0x10040f420: the linker folded this into game::Location::SetAttachedWallWidth(int), which has identical code
    Text::SetLinkObjType(int);

    // 0x100431860: the linker folded this into game::Location::GetAttachedWallWidth() const, which has identical code
    Text::GetLinkObjType() const;

    // 0x1006aca10, 672 bytes, placed by class name and debug map
    // Text::MainDraw(ComponentDependencies const&, int, int, float)
    void Text::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        TextProperties* this_00;
        FontManager* this_01;
        FontHelpers* this_02;
        NXTPixToolkit* this_03;
        char cVar2;
        byte bVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        shared_ptr* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        Text* pTVar7;
        fixed_string* pfVar8;
        StringView SVar9;
        TextProperties* in_stack_fffffffffffffe28;
        undefined1 auStack_1b4[20];
        StringView local_1a0;
        NXTPixToolkit* local_190;
        StringView local_188;
        uint local_16c;
        shared_ptr local_160[18];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*(long*)(param_1 + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dependencies.m_fontManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Text.cpp",
                      11, (char*)0);
        }
        if (*(long*)param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dependencies.m_fontHelpers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Text.cpp",
                      12, (char*)0);
        }
        this_01 = *(FontManager**)(param_1 + 8);
        local_190 = (NXTPixToolkit*)field_392;
        iVar4 = local_190->GetEndPosition();
        new (local_160) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_04 = (shared_ptr*)this_01->GetFont(iVar4, local_160);
        local_160->~shared_ptr();
        if (!shared_ptr::operator_cast_to_bool(this_04)) {
        LAB_1006acc42:
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        cVar2 = GetAlpha();
        this_03 = local_190;
        if (cVar2 == '\0')
            goto LAB_1006acc42;
        bVar3 = local_190->GetTextMaxLines();
        local_16c = (uint)bVar3;
        this_00 = (TextProperties*)(auStack_1b4 + -36);
        graphics::TextProperties::TextProperties(this_00, this_04);
        uVar5 = GetRGBA();
        this_03->PopulateTextProperties(this_00, uVar5, field_100);
        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
        new (&local_188) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        cVar2 = (*(code*)field_0[32])(this, local_160);
        if (cVar2 == '\0') {
            this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(
                code**)(**(long**)(param_1 + 48) + 72))();
            pTVar7 = (Text*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_05);
            if (this == pTVar7) {
                local_188.field_0 = *(ulong*)(param_1 + 72);
                local_188.field_8 = *(uchar**)(param_1 + 80);
                goto LAB_1006acbdc;
            }
            pfVar8 = (fixed_string*)this_03->GetScreen();
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1a0, pfVar8);
        } else {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1a0,
                                                                                          (fixed_string*)local_160);
        }
        StringView::operator=(&local_188, &local_1a0);
    LAB_1006acbdc:
        this_02 = *(FontHelpers**)param_1;
        new ((auStack_1b4 + 4)) StringView(&local_188);
        iVar4 = GetStreamCountLastMix();
        iVar6 = GetMinMapX();
        SVar9.field_8._0_4_ = param_2;
        SVar9.field_0 = (ulong)(auStack_1b4 + 4);
        SVar9.field_8._4_4_ = 0;
        this_02->DrawStringMultiline(SVar9, param_3, iVar4, iVar6, (int)&local_16c, this_00, in_stack_fffffffffffffe28);
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x1006accb0, 80 bytes, placed by class name and debug map
    // Text::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Text::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;

        this_00 = field_392;
        this_00->DecodeTextData(param_1, param_2);
        field_96 = this_00->AlreadyWritten();
        field_100 = this_00->GetTextAlpha();
        this_00->SetGroupIDLimit(16777215);
        this_00->SetTextAlpha(255);
    }

    // 0x1006acd20, 96 bytes, placed by class name and debug map
    // Text::LoadStyleSheetVisuals(StyleSheet const&)
    void Text::LoadStyleSheetVisuals(StyleSheet* param_1) {
        undefined1* this_00;

        this_00 = field_392;
        this_00->LoadStyleSheetTextData(0, param_1);
        field_96 = this_00->AlreadyWritten();
        field_100 = this_00->GetTextAlpha();
        this_00->SetGroupIDLimit(16777215);
        this_00->SetTextAlpha(255);
    }

} // namespace jag::ui
