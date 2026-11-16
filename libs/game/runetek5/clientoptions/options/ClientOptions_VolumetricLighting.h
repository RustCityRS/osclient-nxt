// libs/game/runetek5/clientoptions/options/ClientOptions_VolumetricLighting.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x1005fb050, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumOptionToggle Clamp<game::option::EnumOptionToggle>(game::option::EnumOptionToggle const&, game::option::EnumOptionToggle const&, game::option::EnumOptionToggle const&)
    undefined4 Clamp<game::option::EnumOptionToggle>(EnumOptionToggle* param_1, EnumOptionToggle* param_2,
                                                     EnumOptionToggle* param_3) {
        EnumOptionToggle* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumOptionToggle>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumOptionToggle>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x1005fbea0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumTextureMode Clamp<game::option::EnumTextureMode>(game::option::EnumTextureMode const&, game::option::EnumTextureMode const&, game::option::EnumTextureMode const&)
    undefined4 Clamp<game::option::EnumTextureMode>(EnumTextureMode* param_1, EnumTextureMode* param_2,
                                                    EnumTextureMode* param_3) {
        EnumTextureMode* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumTextureMode>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumTextureMode>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x1005fc790, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumVolumetricLighting Clamp<game::option::EnumVolumetricLighting>(game::option::EnumVolumetricLighting const&, game::option::EnumVolumetricLighting const&, game::option::EnumVolumetricLighting const&)
    undefined4 Clamp<game::option::EnumVolumetricLighting>(EnumVolumetricLighting* param_1,
                                                           EnumVolumetricLighting* param_2,
                                                           EnumVolumetricLighting* param_3) {
        EnumVolumetricLighting* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumVolumetricLighting>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumVolumetricLighting>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x1005fcbf0, 48 bytes, inline, placed by debug map only (low confidence)
    // WindowMode Clamp<WindowMode>(WindowMode const&, WindowMode const&, WindowMode const&)
    undefined4 Clamp<WindowMode>(WindowMode* param_1, WindowMode* param_2, WindowMode* param_3) {
        WindowMode* pWVar1;
        undefined4* puVar2;

        pWVar1 = std::max<WindowMode>(param_2, param_1);
        puVar2 = (undefined4*)std::min<WindowMode>(param_3, pWVar1);
        return *puVar2;
    }

} // namespace jag::math

namespace jag::game::option {
    class VolumetricLighting {
    public:
        // virtual methods in vtable order
        virtual ~VolumetricLighting();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumVolumetricLighting);
        VolumetricLighting(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x1005f9ee0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // VolumetricLighting::~VolumetricLighting(): jumps straight to the base-object destructor

    // 0x1005f9ef0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // VolumetricLighting::~VolumetricLighting()
    void VolumetricLighting::~VolumetricLighting() {
        ~VolumetricLighting(this);
        operator_delete(this);
    }

} // namespace jag::game::option

namespace jag {
    // 0x1005fc1a0, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumTextureMode>()
    jag* GetEnumValueNames<game::option::EnumTextureMode>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9ce0);
        return this;
    }

    // 0x1005fca90, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumVolumetricLighting>()
    jag* GetEnumValueNames<game::option::EnumVolumetricLighting>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cf8);
        return this;
    }

    // 0x1005fcef0, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<WindowMode>()
    jag* GetEnumValueNames<WindowMode>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cc0);
        return this;
    }

} // namespace jag
