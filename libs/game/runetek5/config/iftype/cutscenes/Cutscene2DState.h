// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    // 0x100523950, 48 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::GetPlaybackTimeSec() const
    void Cutscene2DPlaybackState::GetPlaybackTimeSec() {
        char cVar1;

        cVar1 = HasAlphaParticles();
        if (cVar1 == '\0') {
            GetAlpha();
        } else {
            GetBrightpassThreshold();
        }
    }

    // 0x100523980, 48 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2DPlaybackState::IsPaused() const
    /* graphics::ModularParticleSystemTemplate::HasAlphaParticles() const */

    undefined4 graphics::ModularParticleSystemTemplate::HasAlphaParticles() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = HasAlphaEarlyParticles(this);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = HasAlphaLateParticles(this);
        }
        return uVar2;
    }

    // 0x1005239b0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2DPlaybackState::WasDisplayedRecently() const
    /* graphics::ModularParticleSystemTemplate::HasDistortionParticles() const */

    void graphics::ModularParticleSystemTemplate::HasDistortionParticles() {
        test(2);
    }

    // 0x1005239c0, 48 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::Advance(float)
    void Cutscene2DPlaybackState::Advance(float param_1) {
        char cVar1;

        cVar1 = HasAlphaParticles();
        if (cVar1 == '\0') {
            field_4 = param_1 + field_4;
        }
    }

    // 0x100523df0, 32 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::SetDisplayedRecently(bool)
    void Cutscene2DPlaybackState::SetDisplayedRecently(bool param_1) {
        set(2, param_1);
    }

    // 0x100524540, 32 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::Reset()
    void Cutscene2DPlaybackState::Reset() {
        reset();
        field_4 = 0.0;
        field_8 = 0.0;
    }

    // 0x1005247f0, 64 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::SetPausedByUser(bool)
    void Cutscene2DPlaybackState::SetPausedByUser(bool param_1) {
        char cVar1;

        cVar1 = HasAlphaParticles();
        if (cVar1 == '\0') {
            field_8 = field_4;
        }
        set(0, param_1);
    }

    // 0x1005248e0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2DPlaybackState::IsPausedByUser() const
    /* graphics::ModularParticleSystemTemplate::HasAlphaEarlyParticles() const */

    void graphics::ModularParticleSystemTemplate::HasAlphaEarlyParticles() {
        test(0);
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x100523980: the linker folded this into game::Cutscene2DPlaybackState::IsPaused() const, which has identical code
    ModularParticleSystemTemplate::HasAlphaParticles() const;

    // 0x1005239b0: the linker folded this into game::Cutscene2DPlaybackState::WasDisplayedRecently() const, which has identical code
    ModularParticleSystemTemplate::HasDistortionParticles() const;

    // 0x1005248e0: the linker folded this into game::Cutscene2DPlaybackState::IsPausedByUser() const, which has identical code
    ModularParticleSystemTemplate::HasAlphaEarlyParticles() const;

} // namespace jag::graphics
