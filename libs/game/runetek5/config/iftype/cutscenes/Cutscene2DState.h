// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    // 0x100523950
    void Cutscene2DPlaybackState::GetPlaybackTimeSec() const {
        if (HasAlphaParticles() == '\0') {
            GetAlpha();
        } else {
            GetBrightpassThreshold();
        }
    }

    // 0x100523980
    bool Cutscene2DPlaybackState::IsPaused() const {
        bool cVar1 = HasAlphaEarlyParticles(this);
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = HasAlphaLateParticles(this);
        }
        return uVar2;
    }

    // 0x1005239b0
    void Cutscene2DPlaybackState::WasDisplayedRecently() const {
        test(2);
    }

    // 0x1005239c0
    void Cutscene2DPlaybackState::Advance(float arg1) {
        if (HasAlphaParticles() == '\0') {
            m_elapsedTimeSec = arg1 + m_elapsedTimeSec;
        }
    }

    // 0x100523df0
    void Cutscene2DPlaybackState::SetDisplayedRecently(bool arg1) {
        *this = eastl::bitset<3ul, unsigned char>::set(2, arg1);
    }

    // 0x100524540
    void Cutscene2DPlaybackState::Reset() {
        reset();
        m_elapsedTimeSec = 0.0;
        m_pauseTimeSec = 0.0;
    }

    // 0x1005247f0
    void Cutscene2DPlaybackState::SetPausedByUser(bool arg1) {
        if (HasAlphaParticles() == '\0') {
            m_pauseTimeSec = m_elapsedTimeSec;
        }
        *this = eastl::bitset<3ul, unsigned char>::set(0, arg1);
    }

    // 0x1005248e0
    void Cutscene2DPlaybackState::IsPausedByUser() const {
        test(0);
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x100523980: ModularParticleSystemTemplate::HasAlphaParticles() const has the same machine code as game::Cutscene2DPlaybackState::IsPaused() const

    // 0x1005239b0: ModularParticleSystemTemplate::HasDistortionParticles() const has the same machine code as game::Cutscene2DPlaybackState::WasDisplayedRecently() const

    // 0x1005248e0: ModularParticleSystemTemplate::HasAlphaEarlyParticles() const has the same machine code as game::Cutscene2DPlaybackState::IsPausedByUser() const

} // namespace jag::graphics
