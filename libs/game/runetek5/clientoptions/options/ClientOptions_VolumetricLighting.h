// libs/game/runetek5/clientoptions/options/ClientOptions_VolumetricLighting.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x1005fb050
    game::option::EnumOptionToggle
    Clamp<game::option::EnumOptionToggle>(const game::option::EnumOptionToggle& enumOptionToggle1,
                                          const game::option::EnumOptionToggle& enumOptionToggle2,
                                          const game::option::EnumOptionToggle& enumOptionToggle3) {
        auto pEVar1 = std::max<game::option::EnumOptionToggle>(enumOptionToggle2, enumOptionToggle1);
        pEVar1 = std::min<game::option::EnumOptionToggle>(enumOptionToggle3, *pEVar1);
        return *pEVar1;
    }

    // 0x1005fbea0
    game::option::EnumTextureMode
    Clamp<game::option::EnumTextureMode>(const game::option::EnumTextureMode& enumTextureMode1,
                                         const game::option::EnumTextureMode& enumTextureMode2,
                                         const game::option::EnumTextureMode& enumTextureMode3) {
        auto pEVar1 = std::max<game::option::EnumTextureMode>(enumTextureMode2, enumTextureMode1);
        pEVar1 = std::min<game::option::EnumTextureMode>(enumTextureMode3, *pEVar1);
        return *pEVar1;
    }

    // 0x1005fc790
    game::option::EnumVolumetricLighting
    Clamp<game::option::EnumVolumetricLighting>(const game::option::EnumVolumetricLighting& enumVolumetricLighting1,
                                                const game::option::EnumVolumetricLighting& enumVolumetricLighting2,
                                                const game::option::EnumVolumetricLighting& enumVolumetricLighting3) {
        auto pEVar1 = std::max<game::option::EnumVolumetricLighting>(enumVolumetricLighting2, enumVolumetricLighting1);
        pEVar1 = std::min<game::option::EnumVolumetricLighting>(enumVolumetricLighting3, *pEVar1);
        return *pEVar1;
    }

    // 0x1005fcbf0
    WindowMode Clamp<WindowMode>(const WindowMode& windowMode1, const WindowMode& windowMode2,
                                 const WindowMode& windowMode3) {
        auto pWVar1 = std::max<WindowMode>(windowMode2, windowMode1);
        pWVar1 = std::min<WindowMode>(windowMode3, *pWVar1);
        return *pWVar1;
    }

} // namespace jag::math

namespace jag {
    // 0x1005fc1a0
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumTextureMode>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 3ul>>(*PTR_VALUE_NAMES_100ee9ce0);
        return result;
    }

    // 0x1005fca90
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumVolumetricLighting>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 5ul>>(*PTR_VALUE_NAMES_100ee9cf8);
        return result;
    }

    // 0x1005fcef0
    WrapArray<char const* const> GetEnumValueNames<WindowMode>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 3ul>>(*PTR_VALUE_NAMES_100ee9cc0);
        return result;
    }

} // namespace jag

namespace jag::game::option {
    class VolumetricLighting {
    public:
        // virtual methods in vtable order
        virtual ~VolumetricLighting();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumVolumetricLighting enumVolumetricLighting);
        VolumetricLighting(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

} // namespace jag::game::option
