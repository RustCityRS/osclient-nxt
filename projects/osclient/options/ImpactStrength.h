// projects/osclient/options/ImpactStrength.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::option::transforms {
    template <typename...> // 1 instantiations, e.g. <ScaledUIQuality>
    class EnumToValueTypeTransform {
    public:
        void CanTransformToValueType(int);
    };

    // 0x10004a770, 16 bytes, inline, placed by debug map only (low confidence)
    // IntegerToValueTypeTransform<bool>::IntegerToValueType(int)
    bool IntegerToValueTypeTransform<bool>::IntegerToValueType(int param_1) {
        return param_1 == 1;
    }

    // 0x10004a780, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // IntegerToValueTypeTransform<bool>::ValueTypeToInteger(bool)
    /* IntegerToValueTypeTransform<int>::IntegerToValueType(int) */

    undefined4 IntegerToValueTypeTransform<int>::IntegerToValueType(undefined4 param_1) {
        return param_1;
    }

    // 0x10004a930, 16 bytes, inline, placed by debug map only (low confidence)
    // EnumToValueTypeTransform<ScaledUIQuality>::CanTransformToValueType(int)
    /* EnumToValueTypeTransform<ChatTimestampMode>::CanTransformToValueType(int)
    */

    void EnumToValueTypeTransform<ChatTimestampMode>::CanTransformToValueType(int param_1) {
        IsValidEnumValue<ChatTimestampMode>();
    }

} // namespace jag::oldscape::option::transforms

namespace jag::oldscape::option {
    // 0x10004a580, 64 bytes, inline, placed by debug map only (low confidence)
    // OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::ValueToString(hal::Haptics::ImpactStrength)
    OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>*
    OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::ValueToString(int param_2) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, param_2, 10);
        return this;
    }

    // 0x10004a670, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // IScriptOption::IScriptOption(int)
    void IScriptOption::IScriptOption(int param_1) {
        field_0 = PTR_vtable_100ee8a60 + 16;
        field_8 = param_1;
    }

} // namespace jag::oldscape::option
