// libs/game/runetek5/clientoptions/options/ClientOptions_GameRenderScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class GameRenderScale : public InterfaceScale // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GameRenderScale();
        virtual GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, unsigned int);
        GameRenderScale(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes, the first 193 are InterfaceScale
    };

    // 0x100600200, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GameRenderScale::~GameRenderScale()
    /* InterfaceScale::~InterfaceScale() */

    void InterfaceScale::~InterfaceScale() {
        ~GameRenderScale();
        operator_delete(this);
    }

} // namespace jag::game::option
