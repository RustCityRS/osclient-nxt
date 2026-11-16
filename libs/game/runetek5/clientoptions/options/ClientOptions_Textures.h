// libs/game/runetek5/clientoptions/options/ClientOptions_Textures.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class Textures {
    public:
        // virtual methods in vtable order
        virtual ~Textures();
        virtual bool DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumTextureMode);
        Textures(graphics::RT7Core&, Settings&, char const*, GroundBlending*);

        // data members, from how the methods use this: 208 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[56];
        GroundBlending* field_200; // offset 200
    };

    // 0x1005f98e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Textures::~Textures(): jumps straight to the base-object destructor

    // 0x1005f98f0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Textures::~Textures()
    void Textures::~Textures() {
        ~Textures(this);
        operator_delete(this);
    }

} // namespace jag::game::option
