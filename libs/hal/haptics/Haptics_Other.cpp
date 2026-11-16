// libs/hal/haptics/Haptics_Other.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.haptics

#include "Haptics.h"

namespace jag::hal {
    // 0x100afbd10, 32 bytes, base-object constructor, placed by class name and debug map
    // Haptics::Haptics()
    void Haptics::Haptics() {
        new (this) AutoSingleton<Haptics>();
        m_enabled = 0;
        field_4 = 0;
    }

    // 0x100afbd80, 16 bytes, complete-object constructor, placed by class name and debug map
    // Haptics::Haptics(): jumps straight to the base-object constructor

    // 0x100afbd90, 16 bytes, base-object destructor, placed by class name and debug map
    // Haptics::~Haptics()
    void Haptics::~Haptics() {
        AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
    }

    // 0x100afbda0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Haptics::~Haptics(): jumps straight to the base-object destructor

    // 0x100afbdb0, 16 bytes, placed by class name and debug map
    // Haptics::Prepare()
    void Haptics::Prepare() {}

    // 0x100afbdc0, 16 bytes, placed by class name and debug map
    // Haptics::Vibrate(Haptics::Preset)
    void Haptics::Vibrate() {}

} // namespace jag::hal
