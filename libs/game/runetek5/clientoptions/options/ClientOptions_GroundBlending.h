// libs/game/runetek5/clientoptions/options/ClientOptions_GroundBlending.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class GroundBlending {
    public:
        // virtual methods in vtable order
        virtual ~GroundBlending();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        virtual IsSafeToSet();
        GroundBlending(graphics::RT7Core&, Settings&, char const*, Textures*);

        // data members, from how the methods use this: 264 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[216];
        Textures* field_256; // offset 256
    };

    // 0x100600220, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // GroundBlending::~GroundBlending()
    void GroundBlending::~GroundBlending() {
        ~GroundBlending(this);
        operator_delete(this);
    }

    // 0x100600240, 64 bytes, inline, placed by class name and debug map
    // GroundBlending::IsSafeToSet()
    undefined8 GroundBlending::IsSafeToSet() {
        bool bVar2;
        undefined7 extraout_var;
        undefined8 uVar3;

        if (IsSafeToSet() == '\0') {
            uVar3 = 0;
        } else {
            bVar2 = (&field_208)->operator_cast_to_bool();
            uVar3 = CONCAT71(extraout_var, 1);
            if (bVar2) {
                uVar3 = std::function<bool()>::operator()((function<bool()>*)&field_208);
            }
        }
        return uVar3;
    }

    // 0x1006091c0, 16 bytes, complete-object destructor, inline, placed by class name
    // GroundBlending::~GroundBlending(): jumps straight to the base-object destructor

    // 0x1006114b0, 64 bytes, base-object destructor, inline, placed by class name
    // GroundBlending::~GroundBlending()
    void GroundBlending::~GroundBlending() {
        field_0 = &PTR__GroundBlending_100f0a0f8;
        std::function<bool()>::~function((function<bool()>*)&field_208);
        ~Option();
    }

} // namespace jag::game::option
