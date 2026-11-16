// projects/osclient/options/WindowMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game::option {
    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    WindowMode::GetDefault();

    // 0x1005fa150, 16 bytes, complete-object destructor, inline, placed by class name
    // WindowMode::~WindowMode(): jumps straight to the base-object destructor

    // 0x1005fa160, 32 bytes, deleting destructor, inline, placed by class name
    // WindowMode::~WindowMode()
    void WindowMode::~WindowMode() {
        ~WindowMode(this);
        operator_delete(this);
    }

    // 0x1005fa390, 16 bytes, inline, placed by class name
    // WindowMode::IsAvailable(OptionClient) const
    /* HapticFeedback::IsAvailable(OptionClient) const */

    bool HapticFeedback::IsAvailable(undefined8 param_1, int param_2) {
        return param_2 == 0;
    }

    // 0x1005fa5d0: the linker folded this into Option<jag::WindowMode>::~Option(), which has identical code
    WindowMode::~WindowMode();

} // namespace jag::game::option

namespace jag::oldscape::option {
    // 0x1000485b0, 64 bytes, inline, placed by debug map only (low confidence)
    // OptionEnumValueSerialiser<ScaledUIQuality>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionEnumValueSerialiser<ScaledUIQuality>::StringToValue(fixed_string* param_1) {
        int local_14;
        int local_10;
        bool local_9;

        FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>(param_1, &local_10, 10);
        local_9 = IsValidEnumValue<ChatTimestampMode>(local_10);
        local_14 = local_10;
        std::make_tuple<bool const&, ScaledUIQuality>(&local_9, (ScaledUIQuality*)&local_14);
    }

    // 0x1000487f0, 64 bytes, inline, placed by debug map only (low confidence)
    // OptionEnumValueSerialiser<ScaledUIQuality>::ValueToString(ScaledUIQuality)
    OptionEnumValueSerialiser<ScaledUIQuality>* OptionEnumValueSerialiser<ScaledUIQuality>::ValueToString(int param_2) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, param_2, 10);
        return this;
    }

} // namespace jag::oldscape::option
