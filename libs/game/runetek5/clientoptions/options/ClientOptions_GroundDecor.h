// libs/game/runetek5/clientoptions/options/ClientOptions_GroundDecor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class GroundDecor : public CutsceneSubtitles // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GroundDecor();
        GroundDecor(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
    };

} // namespace jag::game::option
