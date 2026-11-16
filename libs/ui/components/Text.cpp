// libs/ui/components/Text.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Text.h"

namespace jag::ui {
    // 0x1001ced10: Text::GetLinkObjCount() const has the same machine code as graphics::GraphNode::GetEntity()

    // 0x1002699e0: Text::GetType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x10040f420: Text::SetLinkObjType(int) has the same machine code as game::Location::SetAttachedWallWidth(int)

    // 0x100431860: Text::GetLinkObjType() const has the same machine code as game::Location::GetAttachedWallWidth() const

    // 0x1006aca10
    void Text::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        Text* pTVar4;
        basic_string<char, BucketAllocatorEASTL>* str;
        StringView local_1a0;

        if (*(long*)(componentDependencies + 8) == 0) {
            LogAssert("dependencies.m_fontManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Text.cpp",
                      11, nullptr);
        }
        if (*(long*)componentDependencies == 0) {
            LogAssert("dependencies.m_fontHelpers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Text.cpp",
                      12, nullptr);
        }
        FontManager* this_00 = *(FontManager**)(componentDependencies + 8);
        NXTPixToolkit* local_190 = (NXTPixToolkit*)field_392;
        int iVar3 = local_190->GetEndPosition();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_160;
        auto this_03 = this_00->GetFont(iVar3, local_160);
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_03);
        if (!cVar1) {
        LAB_1006acc42:
            return;
        }
        cVar1 = GetAlpha();
        NXTPixToolkit* this_02 = local_190;
        if (!cVar1)
            goto LAB_1006acc42;
        uint8_t bVar2 = local_190->GetTextMaxLines();
        unsigned int local_16c = (unsigned int)bVar2;
        TextProperties local_1d8(*this_03);
        unsigned int arg2_00 = GetRGBA();
        this_02->PopulateTextProperties(local_1d8, arg2_00, field_100);
        local_160 = eastl::fixed_string<char, 256>();
        StringView local_188;
        cVar1 = GetLinkObjText();
        if (!cVar1) {
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                **(long**)(componentDependencies + 48) + 72))();
            pTVar4 = (Text*)this_04->end();
            if (this == pTVar4) {
                local_188.field_0 = *(unsigned long*)(componentDependencies + 72);
                local_188.field_8 = *(Particle**)(componentDependencies + 80);
                goto LAB_1006acbdc;
            }
            str = (basic_string<char, BucketAllocatorEASTL>*)this_02->GetScreen();
            local_1a0.StringView<eastl::fixed_string<char, 40>>(*str);
        } else {
            local_1a0.StringView<eastl::fixed_string<char, 40>>(local_160);
        }
        local_188 = local_1a0;
    LAB_1006acbdc:
        FontHelpers* this_01 = *(FontHelpers**)componentDependencies;
        StringView local_1b0(local_188);
        iVar3 = GetStreamCountLastMix();
        int arg5 = GetMinMapX();
        this_01->DrawStringMultiline(&local_1b0, arg2, arg3, iVar3, arg5, &local_16c, local_1d8);
    }

    // 0x1006accb0
    void Text::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t* this_00 = field_392;
        this_00->DecodeTextData(arg1, arg2);
        field_96 = this_00->AlreadyWritten();
        field_100 = this_00->GetTextAlpha();
        this_00->SetGroupIDLimit(16777215);
        this_00->SetTextAlpha(255);
    }

    // 0x1006acd20
    void Text::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        uint8_t* this_00 = field_392;
        this_00->LoadStyleSheetTextData(0, styleSheet);
        field_96 = this_00->AlreadyWritten();
        field_100 = this_00->GetTextAlpha();
        this_00->SetGroupIDLimit(16777215);
        this_00->SetTextAlpha(255);
    }

} // namespace jag::ui
