// libs/audio/SoundInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.audio

#include "SoundInstance.h"

namespace jag::audio {
    // 0x10000b300: SoundInstance::SetOwner(void*) has the same machine code as eastl::string::Layout::SetHeapSize(unsigned long)

    // 0x1000b7a80: SoundInstance::GetLevel() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjCount() const

    // 0x1000fa820: SoundInstance::GetSoundSpatialSizeMax() const has the same machine code as oldscape::graphics::NXTPixScreen::GetClampedZoomValue() const

    // 0x1001f7270: SoundInstance::SetLevel(int) has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::SetMaxMapZ(int)

    // 0x1002111e0: SoundInstance::GetSoundShape() const has the same machine code as oldscape::rs2lib::worldmap::PackableArea::GetTargetMapSquareX()

    // 0x1002111f0: SoundInstance::GetSoundType() const has the same machine code as oldscape::rs2lib::worldmap::PackableArea::GetTargetMapSquareZ()

    // 0x10043c600: SoundInstance::GetSoundSpatialSizeMin() const has the same machine code as game::LightType::GetJitterRadius() const

    // 0x100b8a0c0
    SoundInstance::SoundInstance() : field_8(nullptr), field_16(0), field_20(0) {
        void* arg1 = nullptr;
        new (field_24) shared_ptr();
        field_40 = nullptr;
        field_48 = 0;
        field_52 = 1.0;
        field_56 = 1.0;
        field_60 = 1.0;
        field_64 = 0.0;
        field_68 = 0.0;
        field_72 = 1.0;
        field_76 = 1.0;
        field_80 = 0.0;
        m_soundSpatialSizeMin = 0.0;
        m_soundSpatialSizeMax = 0.0;
        new (&m_position) math::ColourHSL(0.0, 0.0, 0.0);
        m_level = -1;
        new (&field_112) std::function<void(SoundInstance*)>(arg1);
        field_168 = false;
        m_bussID = 0;
        m_startDelay = 0;
        m_groupID = -1;
        m_soundShape = 4;
        m_soundType = 12;
        field_184 = 0;
        m_rate = 256;
    }

    // 0x100b8a1c0
    void SoundInstance::Claim(const shared_ptr<SoundResource>& soundResource) {
        if (field_20 < 2) {
            field_20 = 2;
            *field_24 = soundResource;
        }
    }

    // 0x100b8a1e0
    void SoundInstance::Free() {
        if ((1 < field_20) && (field_40 != nullptr)) {
            field_40->Free();
        }
    }

    // 0x100b8a200
    void SoundInstance::Update(float arg1, const shared_ptr<hal::audio::AudioRenderer>& audioRenderer) {
        bool cVar1;
        long* plVar2;
        shared_ptr* this_00;
        AudioRenderer* this_01;
        VoiceInstance* this_02;
        AudioFormat* audioFormat;

        if (field_20 == 2) {
            cVar1 = field_24->operator_cast_to_bool();
            if (cVar1) {
                plVar2 = (long*)(*field_24).operator->();
                cVar1 = (**(void (**)(...))(*plVar2 + 32))(plVar2);
                if (cVar1) {
                    field_20 = 3;
                }
            }
        }
        if (field_20 == 3) {
            cVar1 = audioRenderer.operator_cast_to_bool();
            if (!cVar1) {
                return;
            }
            if (field_40 == nullptr) {
                plVar2 = (long*)(*field_24).operator->();
                this_00 = (shared_ptr*)(**(void (**)(...))(*plVar2 + 48))(plVar2);
                cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (cVar1) {
                    this_01 = (AudioRenderer*)audioRenderer.operator->();
                    this_02 = (VoiceInstance*)this_01->ClaimVoice(m_bussID);
                    field_40 = this_02;
                    if (this_02 == nullptr) {
                        field_20 = 7;
                    } else {
                        plVar2 = (long*)(*field_24).operator->();
                        audioFormat = (AudioFormat*)(**(void (**)(...))(*plVar2 + 64))(plVar2);
                        this_02->ConfigureVoice(*this_00, audioFormat);
                        cVar1 = (&field_112)->operator_cast_to_bool();
                        if (cVar1) {
                            std::function<void(SoundInstance*)>::operator()((function<void(SoundInstance*)>*)&field_112,
                                                                            this);
                        }
                        field_40->SetOrientationZMovement(field_76);
                        field_40->SetPreSendControls(field_52, field_80);
                        field_40->SetLoopIterations(field_48);
                        field_40->SetBussID(m_bussID);
                        field_40->SetSoundType(m_soundType);
                        field_40->SetRate(m_rate);
                        if (field_184 != '\0') {
                            field_40->Pause();
                        }
                    }
                    if (field_16 != '\0') {
                        Start();
                    }
                }
            }
        }
        if (((field_20 & 4294967294) == 4) && (field_40 != nullptr)) {
            cVar1 = field_40->IsFinished();
            if ((!cVar1) && (cVar1 = field_40->IsSuspended(), !cVar1)) {
                cVar1 = (&field_112)->operator_cast_to_bool();
                if (cVar1) {
                    std::function<void(SoundInstance*)>::operator()((function<void(SoundInstance*)>*)&field_112, this);
                }
                field_40->SetOrientationZMovement(field_76);
                UpdatePreSendControls(arg1);
                if (0.0 < field_52) {
                    return;
                }
                if (field_20 == 5) {
                    Suspend(0.0);
                    return;
                }
                return;
            }
            field_20 = 7;
        }
    }

    // 0x100b8a470
    void SoundInstance::Start() {
        if (((m_startDelay < 1) && (field_168 == false)) && ((int)field_20 < 4)) {
            if ((field_20 == 3) && (field_40 != nullptr)) {
                field_40->Start();
                field_20 = 4;
            }
            field_16 = 1;
        }
    }

    // 0x100b8a4e0
    void SoundInstance::UpdatePreSendControls(float arg1) {
        float fVar1;

        float fVar2 = field_60;
        if (fVar2 != field_52) {
            if (field_68 <= 0.0) {
                field_68 = 0.0;
            } else {
                fVar1 = field_68 - arg1;
                field_68 = fVar1;
                fVar2 = ((field_64 - fVar1) * (fVar2 - field_56)) / field_64 + field_56;
            }
            field_52 = fVar2;
        }
        field_40->SetPreSendControls(field_52, field_80);
    }

    // 0x100b8a550
    void SoundInstance::Suspend(float arg1) {
        unsigned int uVar1;

        unsigned int uVar2 = 6;
        if (field_40 != nullptr) {
            uVar1 = field_20;
            if (uVar1 == 5 && 0.0 < arg1) {
                return;
            }
            if (uVar1 == 1) {
                return;
            }
            if (uVar1 == 7) {
                return;
            }
            if (0.0 < arg1) {
                SetPreSendGain(0.0, arg1);
                uVar2 = 5;
            }
        }
        field_20 = uVar2;
    }

    // 0x100b8a5b0
    void SoundInstance::StartDelayCount() {
        field_168 = false;
        if (m_startDelay == 0) {
            Start();
            return;
        }
    }

    // 0x100b8a5d0
    void SoundInstance::SetPreSendGain(float arg1, float arg2) {
        if (0.0 < arg2) {
            field_56 = field_52;
            field_64 = arg2;
            field_68 = arg2;
            field_60 = arg1;
            return;
        }
        SetPreSendGain(arg1);
    }

    // 0x100b8a600
    void SoundInstance::FadeIn(float arg1, float arg2, float arg3) {
        field_52 = arg1;
        SetPreSendGain(arg2, arg3);
    }

    // 0x100b8a670
    void SoundInstance::ProcessDelayedStart() {
        int iVar1;

        if (((m_startDelay < 1) || (field_168 != false)) ||
            (iVar1 = m_startDelay - 1, m_startDelay = iVar1, iVar1 != 0)) {
            return;
        }
        Start();
    }

    // 0x100b8a6a0
    void SoundInstance::Pause() {
        if (field_40 != nullptr) {
            field_40->Pause();
        }
        field_184 = 1;
    }

    // 0x100b8a6d0
    void SoundInstance::Resume() {
        if (field_40 != nullptr) {
            field_40->Resume();
        }
        field_184 = 0;
    }

    // 0x100b8a700
    bool SoundInstance::IsAudibleInBussChain(hal::audio::AudioAPI* audioAPI) const {
        float extraout_XMM0_Da;

        audioAPI->GetMixBussTotalGain(m_bussID);
        return 0.0 < extraout_XMM0_Da * field_52 * field_76;
    }

} // namespace jag::audio
