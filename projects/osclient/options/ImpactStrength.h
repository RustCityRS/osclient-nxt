// projects/osclient/options/ImpactStrength.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::option::transforms {
    template <typename...> // 1 instantiations, e.g. <ScaledUIQuality>
    class EnumToValueTypeTransform {
    public:
        void CanTransformToValueType(int arg1);
    };

    // 0x10004a770
    bool IntegerToValueTypeTransform<bool>::IntegerToValueType(int arg1) {
        return arg1 == 1;
    }

    // 0x10004a780
    void IntegerToValueTypeTransform<bool>::ValueTypeToInteger(bool arg1) {
        return arg1;
    }

    // 0x10004a930
    void EnumToValueTypeTransform<ScaledUIQuality>::CanTransformToValueType(int arg1) {
        IsValidEnumValue<ChatTimestampMode>((type*)this);
    }

} // namespace jag::oldscape::option::transforms

namespace jag::oldscape::option {
    // 0x10004a580
    auto OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::ValueToString(
        hal::Haptics::ImpactStrength impactStrength) {
        auto result;
        ToText<256, true>(&result, impactStrength, 10);
        return result;
    }

    // 0x10004a670
    IScriptOption::IScriptOption(int arg1) : m_id(arg1) {}

} // namespace jag::oldscape::option
