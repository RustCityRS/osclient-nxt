// libs/audio/SoundInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.audio

#include "SoundInstance.h"

namespace jag::audio {
    // 0x10000b300: the linker folded this into eastl::string::Layout::SetHeapSize(unsigned long), which has identical code
    SoundInstance::SetOwner(void*);

    // 0x1000b7a80: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    SoundInstance::GetLevel() const;

    // 0x1000fa820: the linker folded this into oldscape::graphics::NXTPixScreen::GetClampedZoomValue() const, which has identical code
    SoundInstance::GetSoundSpatialSizeMax() const;

    // 0x1001f7270: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::SetMaxMapZ(int), which has identical code
    SoundInstance::SetLevel(int);

    // 0x1002111e0: the linker folded this into oldscape::rs2lib::worldmap::PackableArea::GetTargetMapSquareX(), which has identical code
    SoundInstance::GetSoundShape() const;

    // 0x1002111f0: the linker folded this into oldscape::rs2lib::worldmap::PackableArea::GetTargetMapSquareZ(), which has identical code
    SoundInstance::GetSoundType() const;

    // 0x10043c600: the linker folded this into game::LightType::GetJitterRadius() const, which has identical code
    SoundInstance::GetSoundSpatialSizeMin() const;

    // 0x100b8a0c0, 224 bytes, base-object constructor, placed by class name and debug map
    // SoundInstance::SoundInstance()
    void SoundInstance::SoundInstance() {
        field_0 = PTR_vtable_100ee8608 + 16;
        field_8 = (void*)0;
        field_16 = 0;
        field_20 = 0;
        new (field_24, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_40 = (VoiceInstance*)0;
        m_loopCount = 0;
        field_52 = 1.0;
        field_56 = 1.0;
        m_preSendGain = 1.0;
        field_64 = 0.0;
        field_68 = 0.0;
        field_72 = 1.0;
        field_76 = 1.0;
        field_80 = 0.0;
        m_soundSpatialSizeMin = 0.0;
        m_soundSpatialSizeMax = 0.0;
        new (&m_position, 0.0, 0.0, 0.0) math::ColourHSL();
        m_level = -1;
        std::function<void(SoundInstance*)>::function((_func_decltype_nullptr*)&field_112);
        field_168 = false;
        m_bussID = 0;
        m_startDelay = 0;
        m_groupID = -1;
        m_soundShape = 4;
        field_180 = 12;
        field_184 = 0;
        m_rate = 256;
    }

    // 0x100b8a1b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SoundInstance::SoundInstance(): jumps straight to the base-object constructor

    // 0x100b8a1c0, 32 bytes, placed by class name and debug map
    // SoundInstance::Claim(shared_ptr<SoundResource> const&)
    void SoundInstance::Claim(shared_ptr* param_1) {
        if (field_20 < 2) {
            field_20 = 2;
            shared_ptr<SoundResource>::operator=((shared_ptr<SoundResource>*)field_24, param_1);
        }
    }

    // 0x100b8a1e0, 32 bytes, placed by class name and debug map
    // SoundInstance::Free()
    void SoundInstance::Free() {
        if ((1 < field_20) && (field_40 != (VoiceInstance*)0)) {
            field_40->Free();
        }
    }

    // 0x100b8a200, 544 bytes, placed by class name and debug map
    // SoundInstance::Update(float, shared_ptr<hal::audio::AudioRenderer> const&)
    void SoundInstance::Update(float param_1, shared_ptr* param_2) {
        bool bVar1;
        char cVar2;
        long* plVar3;
        shared_ptr* this_00;
        AudioRenderer* pAVar4;
        VoiceInstance* this_01;
        AudioFormat* pAVar5;

        if (field_20 == 2) {
            bVar1 = field_24->operator_cast_to_bool();
            if (bVar1) {
                plVar3 = (long*)shared_ptr<SoundResource>::operator->((shared_ptr<SoundResource>*)field_24);
                cVar2 = (**(code**)(*plVar3 + 32))(plVar3);
                if (cVar2 != '\0') {
                    field_20 = 3;
                }
            }
        }
        if (field_20 == 3) {
            bVar1 = shared_ptr::operator_cast_to_bool(param_2);
            if (!bVar1) {
                return;
            }
            if (field_40 == (VoiceInstance*)0) {
                plVar3 = (long*)shared_ptr<SoundResource>::operator->((shared_ptr<SoundResource>*)field_24);
                this_00 = (shared_ptr*)(**(code**)(*plVar3 + 48))(plVar3);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    pAVar4 = (AudioRenderer*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                        (shared_ptr<hal::audio::AudioRenderer>*)param_2);
                    this_01 = (VoiceInstance*)pAVar4->ClaimVoice(m_bussID);
                    field_40 = this_01;
                    if (this_01 == (VoiceInstance*)0) {
                        field_20 = 7;
                    } else {
                        plVar3 = (long*)shared_ptr<SoundResource>::operator->((shared_ptr<SoundResource>*)field_24);
                        pAVar5 = (AudioFormat*)(**(code**)(*plVar3 + 64))(plVar3);
                        this_01->ConfigureVoice(this_00, pAVar5);
                        bVar1 = (&field_112)->operator_cast_to_bool();
                        if (bVar1) {
                            std::function<void(SoundInstance*)>::operator()((function<void(SoundInstance*)>*)&field_112,
                                                                            this);
                        }
                        (field_40, field_76)->SetOrientationZMovement();
                        (field_40, field_52, field_80)->SetPreSendControls();
                        (field_40, m_loopCount)->SetLoopIterations();
                        (field_40, m_bussID)->SetBussID();
                        (field_40, field_180)->SetSoundType();
                        (field_40, m_rate)->SetRate();
                        if (field_184 != '\0') {
                            field_40->Pause();
                        }
                    }
                    if (field_16 != '\0') {
                        Start(this);
                    }
                }
            }
        }
        if (((field_20 & 4294967294) == 4) && (field_40 != (VoiceInstance*)0)) {
            cVar2 = field_40->IsFinished();
            if ((cVar2 == '\0') && (cVar2 = field_40->IsSuspended(), cVar2 == '\0')) {
                bVar1 = (&field_112)->operator_cast_to_bool();
                if (bVar1) {
                    std::function<void(SoundInstance*)>::operator()((function<void(SoundInstance*)>*)&field_112, this);
                }
                (field_40, field_76)->SetOrientationZMovement();
                UpdatePreSendControls(this, param_1);
                if (0.0 < field_52) {
                    return;
                }
                if (field_20 == 5) {
                    Suspend(this, 0.0);
                    return;
                }
                return;
            }
            field_20 = 7;
        }
    }

    // 0x100b8a470, 80 bytes, placed by class name
    // SoundInstance::Start()
    void SoundInstance::Start() {
        if (((m_startDelay < 1) && (field_168 == false)) && ((int)field_20 < 4)) {
            if ((field_20 == 3) && (field_40 != (VoiceInstance*)0)) {
                field_40->Start();
                field_20 = 4;
            }
            field_16 = 1;
        }
    }

    // 0x100b8a4e0, 112 bytes, placed by class name
    // SoundInstance::UpdatePreSendControls(float)
    void SoundInstance::UpdatePreSendControls(float param_1) {
        float fVar1;
        float fVar2;

        fVar2 = m_preSendGain;
        if (fVar2 != field_52) {
            if (field_68 <= 0.0) {
                field_68 = 0.0;
            } else {
                fVar1 = field_68 - param_1;
                field_68 = fVar1;
                fVar2 = ((field_64 - fVar1) * (fVar2 - field_56)) / field_64 + field_56;
            }
            field_52 = fVar2;
        }
        (field_40, field_52, field_80)->SetPreSendControls();
    }

    // 0x100b8a550, 96 bytes, placed by class name
    // SoundInstance::Suspend(float)
    void SoundInstance::Suspend(float param_1) {
        uint uVar1;
        uint uVar2;

        uVar2 = 6;
        if (field_40 != (VoiceInstance*)0) {
            uVar1 = field_20;
            if (uVar1 == 5 && 0.0 < param_1) {
                return;
            }
            if (uVar1 == 1) {
                return;
            }
            if (uVar1 == 7) {
                return;
            }
            if (0.0 < param_1) {
                SetPreSendGain(this, 0.0, param_1);
                uVar2 = 5;
            }
        }
        field_20 = uVar2;
    }

    // 0x100b8a5b0, 32 bytes, placed by class name
    // SoundInstance::StartDelayCount()
    void SoundInstance::StartDelayCount() {
        field_168 = false;
        if (m_startDelay == 0) {
            Start(this);
            return;
        }
    }

    // 0x100b8a5d0, 48 bytes, placed by class name
    // SoundInstance::SetPreSendGain(float, float)
    void SoundInstance::SetPreSendGain(float param_1, float param_2) {
        if (0.0 < param_2) {
            field_56 = field_52;
            field_64 = param_2;
            field_68 = param_2;
            m_preSendGain = param_1;
            return;
        }
        SetPreSendGain(this, param_1);
    }

    // 0x100b8a600, 32 bytes, placed by class name
    // SoundInstance::FadeIn(float, float, float)
    void SoundInstance::FadeIn(float param_1, float param_2, float param_3) {
        field_52 = param_1;
        SetPreSendGain(this, param_2, param_3);
    }

    // 0x100b8a670, 48 bytes, placed by class name
    // SoundInstance::ProcessDelayedStart()
    void SoundInstance::ProcessDelayedStart() {
        int iVar1;

        if (((m_startDelay < 1) || (field_168 != false)) ||
            (iVar1 = m_startDelay + -1, m_startDelay = iVar1, iVar1 != 0)) {
            return;
        }
        Start(this);
    }

    // 0x100b8a6a0, 48 bytes, placed by class name
    // SoundInstance::Pause()
    void SoundInstance::Pause() {
        if (field_40 != (VoiceInstance*)0) {
            field_40->Pause();
        }
        field_184 = 1;
    }

    // 0x100b8a6d0, 48 bytes, placed by class name
    // SoundInstance::Resume()
    void SoundInstance::Resume() {
        if (field_40 != (VoiceInstance*)0) {
            field_40->Resume();
        }
        field_184 = 0;
    }

    // 0x100b8a700, 64 bytes, placed by class name
    // SoundInstance::IsAudibleInBussChain(hal::audio::AudioAPI*) const
    bool SoundInstance::IsAudibleInBussChain(AudioAPI* param_1) {
        float extraout_XMM0_Da;

        hal::audio::AudioAPI::GetMixBussTotalGain(param_1, m_bussID);
        return 0.0 < extraout_XMM0_Da * field_52 * field_76;
    }

} // namespace jag::audio
