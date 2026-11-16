// libs/game/runetek5/clientoptions/options/ClientOptions_Diagnostics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class Diagnostics : public FlickeringEffects // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Diagnostics();
        virtual GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        void UpdateDiagnosticsVisibility();
        Diagnostics(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 216 bytes, the first 193 are FlickeringEffects
        char _unknown_193[7];
        shared_ptr field_200; // offset 200
    };

    // 0x100608ad0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Diagnostics::Diagnostics(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609130, 16 bytes, complete-object destructor, inline, placed by class name
    // Diagnostics::~Diagnostics(): jumps straight to the base-object destructor

    // 0x100610630, 128 bytes, base-object constructor, inline, placed by class name
    // Diagnostics::Diagnostics(graphics::RT7Core&, Settings&, char const*)
    void Diagnostics::Diagnostics(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee84f0 + 16;
        new (field_200, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1006106b0, 32 bytes, deleting destructor, inline, placed by class name
    // Diagnostics::~Diagnostics()
    void Diagnostics::~Diagnostics() {
        ~Diagnostics(this);
        operator_delete(this);
    }

    // 0x1006106d0, 16 bytes, inline, placed by class name
    // Diagnostics::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void Diagnostics::ApplySettingImpl() {
        UpdateDiagnosticsVisibility(this);
    }

    // 0x100610e80, 64 bytes, base-object destructor, inline, placed by class name
    // Diagnostics::~Diagnostics()
    void Diagnostics::~Diagnostics() {
        field_0 = PTR_vtable_100ee84f0 + 16;
        field_200->~shared_ptr();
        ~Option();
    }

} // namespace jag::game::option
