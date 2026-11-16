// projects/osclient/options/WindowMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game::option {
    // 0x1002699e0: WindowMode::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x1005fa390
    bool WindowMode::IsAvailable(OptionClient optionClient) const {
        return optionClient == 0;
    }

    // 0x1005fa5d0: WindowMode::~WindowMode() has the same machine code as Option<jag::WindowMode>::~Option()

} // namespace jag::game::option

namespace jag::oldscape::option {
    // 0x1000485b0
    void OptionEnumValueSerialiser<ScaledUIQuality>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        ScaledUIQuality local_10;

        FromString<eastl::fixed_string<char, 64>, int>(str, (int*)&local_10, 10);
        bool local_9 = IsValidEnumValue<ChatTimestampMode>((type*)(unsigned long)local_10);
        ScaledUIQuality local_14 = local_10;
        std::make_tuple<bool const&, ScaledUIQuality>(local_9, local_14);
    }

    // 0x1000487f0
    auto OptionEnumValueSerialiser<ScaledUIQuality>::ValueToString(ScaledUIQuality scaledUIQuality) {
        auto result;
        ToText<256, true>(&result, scaledUIQuality, 10);
        return result;
    }

} // namespace jag::oldscape::option
