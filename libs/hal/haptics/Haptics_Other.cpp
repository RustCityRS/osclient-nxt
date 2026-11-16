// libs/hal/haptics/Haptics_Other.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.haptics

#include "Haptics.h"

namespace jag::hal {
    // 0x100afbd10
    Haptics::Haptics() : AutoSingleton<Haptics>(), m_enabled(0), field_4(0) {}

    // 0x100afbd90
    Haptics::~Haptics() {}

    // 0x100afbdb0
    void Haptics::Prepare() {}

    // 0x100afbdc0
    void Haptics::Vibrate(Haptics::Preset preset) {}

} // namespace jag::hal
