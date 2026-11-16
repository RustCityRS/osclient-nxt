// projects/osclient/OldscapeVarTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class OldscapeVarTypeList {
    public:
        // virtual methods in vtable order
        virtual ~OldscapeVarTypeList();
        OldscapeVarTypeList(const ModeGame* modeGame, const game::Js5ConfigGroup* js5ConfigGroup,
                            const Language* language, Js5ResourceProvider& js5ResourceProvider, jagex3::Js5* js5);
        auto List(int arg1);
        void DecodeVarValue(std::pair<unsigned int, game::VarValue>& arg1, core::SuperPacket& superPacket);

    private:
        uint8_t _unknown_8[104];
        Js5* field_112;
        uint32_t field_120;
        uint8_t _unknown_124[4];
    };

    // 0x10013f080
    OldscapeVarTypeList::OldscapeVarTypeList(const ModeGame* modeGame, const game::Js5ConfigGroup* js5ConfigGroup,
                                             const Language* language, Js5ResourceProvider& js5ResourceProvider,
                                             jagex3::Js5* js5) {

        Js5ArchiveSettings local_78(2, (Priority*)Priority::HIGH, 1, false, (EncodeType*)EncodeType::NONE, false, 1,
                                    nullptr);
        new (this) game::BaseTemplateConfigTypeList<OldscapeVarType>(3, modeGame, language, js5ResourceProvider,
                                                                     local_78, js5ConfigGroup, 64);
        field_112 = js5;
        field_120 = js5ConfigGroup->GetX();
    }

} // namespace jag::oldscape::configdecoder
