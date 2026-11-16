// libs/game/runetek5/clientoptions/options/ClientOptions_GroundDecor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class GroundDecor : public CutsceneSubtitles // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GroundDecor();
        GroundDecor(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes, the first 193 are CutsceneSubtitles
    };

} // namespace jag::game::option
