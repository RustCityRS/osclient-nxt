// libs/hal/audio/VoiceInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "VoiceInstance.h"

namespace jag::hal::audio {
    // 0x1000641f0: VoiceInstance::GetPriority() const has the same machine code as graphics::SunlightOptions::GetSunElevation() const

    // 0x1000b7910: VoiceInstance::GetAudioBufferHandler() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x1003a2420: VoiceInstance::SetLoopIterations(int) has the same machine code as MenuItem::SetCommandIndex(unsigned int)

    // 0x1003c00c0: VoiceInstance::SetGain(float) has the same machine code as Camera::SetRightClip(float)

    // 0x1003e9e60: VoiceInstance::SetPriority(float) has the same machine code as FacingController::SetTurnSpeedMultiplier(float)

    // 0x10048fce0: VoiceInstance::GetPan() const has the same machine code as game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const

    // 0x100664980: VoiceInstance::SetVirtual(bool) has the same machine code as jag::audio::SoundResource::SetStreamed(bool)

    // 0x1008180a0: VoiceInstance::SetBussID(BussType) has the same machine code as graphics::Model::SetModelRawUniqueID(int)

    // 0x100b8ea40
    void VoiceInstance::Init(AudioRenderer* audioRenderer, int arg2) {
        ReturnValue local_38;
        unsigned int local_24[2];

        field_0 = audioRenderer;
        local_24[1] = 2;
        local_24[0] = arg2;
        long lVar1 = audioRenderer->GetScreen();
        bool local_19 = true;
        make_shared<AudioBuffer, int&, int, unsigned int const&, AudioFormat const*&, bool>(
            &local_38, local_24, local_24 + 1, (unsigned int*)(lVar1 + 4), (AudioFormat**)&AudioFormat::FLOAT,
            &local_19);
        field_240 = local_38;
    }

    // 0x100b8f050
    void VoiceInstance::Suspend() {
        if ((field_48 & 4294967294U) == 2) {
            field_48 = 4;
        }
    }

    // 0x100b8f070
    void VoiceInstance::Update(float arg1) {
        uint8_t* this_00;
        uint8_t uVar2;
        int iVar3;
        int iVar4;
        shared_ptr<AudioBuss>* this_02;
        AudioBuss* this_03;
        long* plVar5;
        AudioBuffer* pAVar6;
        stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul>>* psVar7;
        Layout* pLVar8;
        vector<shared_ptr<AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>* pvVar9;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar10;
        Layout* pLVar11;
        uint64_t uVar12;
        uint64_t extraout_var;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_04;
        unsigned long uVar13;
        AudioBufferHandler* pAVar14;
        Logger* this_05;
        float fVar15;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Da_01;
        float extraout_XMM0_Da_02;
        float extraout_XMM0_Da_03;
        float extraout_XMM0_Da_04;
        float extraout_XMM0_Da_05;
        function<void(PacketT<Array<unsigned char>>&)> local_68[56];
        long local_30;

        if (field_48 == 0)
            goto LAB_100b8f411;
        float arg1_00 = m_gain * m_preSendControls;
        auto this_01 = field_288->SSOBeginPtr();
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (cVar1) {
            this_02 = (shared_ptr<AudioBuss>*)field_288->SSOBeginPtr();
            this_03 = (AudioBuss*)(*this_02).operator->();
            fVar15 = (float)this_03->GetPriority();
            arg1_00 = arg1_00 * fVar15;
        }
        arg1 = (float)SetVerticalFov(arg1_00);
        if (field_48 != 3)
            goto LAB_100b8f411;
        if ((field_40[21] != (Layout)0) && (field_272 == nullptr)) {
            uVar2 = field_0->GetDecoder();
            plVar5 = (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
            field_272 = plVar5;
            if (plVar5 == nullptr) {
                this_05 = logger::default_logger();
                uVar12 = field_40->HeapBeginPtr();
                this_05->Log(
                    true, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp",
                    187, "Could not get a decoder for %s, going to try again next time.", uVar12);
            } else {
                std::function<void(PacketT<Array<unsigned char>>&)>::function<VoiceInstance::Update(float)::__1, void>(
                    local_68, (__1*)this);
                (**(void (**)(...))(*plVar5 + 56))(plVar5);
                iVar3 = field_280;
                if (-1 < (long)iVar3) {
                    pLVar8 = (Layout*)(*field_72).operator->();
                    this_04 =
                        (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)pLVar8->SSOBeginPtr();
                    uVar13 = this_04->size();
                    if ((unsigned long)(long)iVar3 < uVar13) {
                        pLVar8 = (Layout*)(*field_72).operator->();
                        pvVar9 =
                            (vector<shared_ptr<AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>*)
                                pLVar8->SSOBeginPtr();
                        iVar3 = field_280;
                        field_280 = iVar3 + 1;
                        pvVar10 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar9)[(long)iVar3];
                        pAVar6 = (AudioBuffer*)pvVar10->end();
                        if (pAVar6 != nullptr) {
                            pLVar11 = (Layout*)pAVar6->GetDataRaw();
                            field_256 = 0;
                            uVar12 = pLVar11->HeapBeginPtr();
                            *(uint64_t*)&field_264 = uVar12;
                            plVar5 = field_272;
                            uVar12 = (*pLVar11)[0];
                            (**(void (**)(...))(*plVar5 + 16))(plVar5, uVar12, 0, *(uint64_t*)&field_264);
                        }
                    }
                }
            }
        }
        if (arg1_00 < 0.01) {
            NotifyDebugRegistration(true);
        }
        if (field_16 != '\0') {
            plVar5 = (long*)field_240.operator->();
            iVar3 = (**(void (**)(...))(*plVar5 + 16))(plVar5, 0);
            arg1 = extraout_XMM0_Da;
            if (iVar3 == 0) {
                field_48 = 5;
            }
            goto LAB_100b8f411;
        }
        if (field_40[21] == (Layout)0) {
            pAVar14 = (AudioBufferHandler*)field_56.operator->();
            cVar1 = pAVar14->IsFinishedReading();
            arg1 = extraout_XMM0_Da_05;
            if (!cVar1)
                goto LAB_100b8f411;
            pAVar14 = (AudioBufferHandler*)field_56.operator->();
            pAVar14->ResetReadPosition();
        LAB_100b8f409:
            arg1 = (float)UpdateLoopIterations();
        } else {
            pAVar6 = (AudioBuffer*)field_240.operator->();
            cVar1 = pAVar6->CanWriteSample(0, 0);
            arg1 = extraout_XMM0_Da_00;
            if (cVar1) {
                arg1 = (float)WriteToOutputBuffer();
            }
            if (field_272 == nullptr)
                goto LAB_100b8f411;
            iVar3 = field_280;
            this_00 = field_72;
            psVar7 = (stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul>>*)(*this_00)
                         .operator->();
            iVar4 = psVar7->size();
            arg1 = extraout_XMM0_Da_01;
            if (iVar4 <= iVar3) {
                plVar5 = (long*)field_240.operator->();
                iVar3 = (**(void (**)(...))(*plVar5 + 16))(plVar5, 0);
                arg1 = extraout_XMM0_Da_02;
                if ((iVar3 == 0) && (*(unsigned long*)&field_264 <= field_256)) {
                    field_280 = 0;
                    goto LAB_100b8f409;
                }
            }
            if (*(unsigned long*)&field_264 <= field_256) {
                iVar3 = field_280;
                psVar7 = (stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul>>*)(*this_00)
                             .operator->();
                iVar4 = psVar7->size();
                arg1 = extraout_XMM0_Da_03;
                if (iVar3 < iVar4) {
                    iVar3 = field_88.size();
                    arg1 = extraout_XMM0_Da_04;
                    if (iVar3 < 50) {
                        field_256 = 0;
                        pLVar8 = (Layout*)(*this_00).operator->();
                        pvVar9 =
                            (vector<shared_ptr<AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>*)
                                pLVar8->SSOBeginPtr();
                        iVar3 = field_280;
                        field_280 = iVar3 + 1;
                        pvVar10 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar9)[(long)iVar3];
                        pAVar6 = (AudioBuffer*)pvVar10->end();
                        pLVar11 = (Layout*)pAVar6->GetDataRaw();
                        uVar12 = pLVar11->HeapBeginPtr();
                        *(uint64_t*)&field_264 = uVar12;
                        plVar5 = field_272;
                        uVar12 = (*pLVar11)[0];
                        arg1 = (float)(**(void (**)(...))(*plVar5 + 40))(plVar5, uVar12, 0, *(uint64_t*)&field_264);
                    }
                }
            }
        }
    LAB_100b8f411:
    }

    // 0x100b8f4a0
    void VoiceInstance::MixSend() {
        if (field_48 == 3) {
            field_288->Mix((AudioBuffer*)field_240.end(), (bool)m_virtual[0]);
        }
    }

    // 0x100b8f5d0
    void VoiceInstance::Claim() {
        if (field_48 != 0) {
            LogAssert(
                "m_voiceState == VoiceState::FREE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp", 68,
                "VoiceInstance claimed when it already has an owner.");
        }
        m_priority = 0.0;
        field_48 = 1;
    }

    // 0x100b8f620
    void VoiceInstance::SetSend(const shared_ptr<AudioBuss>& audioBuss1, const shared_ptr<AudioBuss>& audioBuss2) {
        field_288->SetMasterBuss(audioBuss1);
        field_288->SetDestinationBuss(audioBuss2);
    }

    // 0x100b90090
    VoiceInstance::VoiceInstance() : field_0(nullptr) {
        m_virtual[0] = 0;
        m_priority = -1.0;
        field_16 = 0;
        m_preSendControls = 1.0;
        m_gain = 1.0;
        m_pan = 0.0;
        m_loopIterations = 0;
        field_36 = 0;
        field_40 = (Layout*)AudioFormat::INVALID;
        field_48 = 0;
        new (&field_56) shared_ptr();
        new (field_72) shared_ptr();
        new (&field_88) eastl::queue<std::unique_ptr<AudioBuffer>,
                                     eastl::deque<std::unique_ptr<AudioBuffer>, eastl::allocator, 32u>>();
        new (&field_176) std::mutex();
        new (&field_240) shared_ptr();
        *(uint64_t*)&field_268 = 0;
        *(uint64_t*)((long)&field_272 + 4) = 0;
        field_256 = 0;
        *(uint64_t*)&field_264 = 0;
        new (field_288) AudioSend(*this);
        m_bussID = 0;
        m_soundType = 12;
    }

    // 0x100b90250
    void VoiceInstance::Free() {
        bool cVar2;
        void* in_RSI;
        scoped_lock<std::mutex> local_60;
        function<void(PacketT<Array<unsigned char>>&)> local_58[48];
        long local_28;

        long* plVar1 = field_272;
        if (plVar1 != nullptr) {
            new (local_58) std::function<void(PacketT<Array<unsigned char>>&)>(in_RSI);
            (**(void (**)(...))(*plVar1 + 56))(plVar1, local_58);
            field_0->FreeDecoder();
            field_272 = nullptr;
        }
        new (local_58) std::scoped_lock(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        if (field_48 < 1) {
            LogAssert(
                "m_voiceState > VoiceState::FREE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp", 87,
                "Attempted to free a VoiceInstance which is already free...");
        }
        field_288->Free();
        if (field_40[21] != (Layout)0) {
            local_60 = std::scoped_lock(field_176);
            while (true) {
                cVar2 = field_88.empty();
                if (cVar2)
                    break;
                eastl::queue<std::unique_ptr<AudioBuffer>,
                             eastl::deque<std::unique_ptr<AudioBuffer>, eastl::allocator, 32u>>::pop();
            }
        }
        SetRate(256);
        field_40 = (Layout*)AudioFormat::INVALID;
        m_priority = -1.0;
        field_56.reset();
        field_72->reset();
        field_36 = 0;
        m_preSendControls = 1.0;
        m_gain = 1.0;
        m_pan = 0.0;
        m_loopIterations = 0;
        field_16 = 0;
        m_virtual[0] = 0;
        auto this_00 = field_240.operator->();
        this_00->Reset(1, false);
        field_48 = 0;
        m_bussID = 0;
        m_soundType = 12;
        field_280 = 0;
    }

    // 0x100b90460
    void VoiceInstance::SetRate(unsigned int arg1) {
        long* plVar2;

        if (IsEncoded() == '\0') {
            plVar2 = (long*)field_56.operator->();
        } else {
            plVar2 = (long*)field_240.operator->();
        }
        (**(void (**)(...))(*plVar2 + 56))(plVar2, arg1);
    }

    // 0x100b90550
    void VoiceInstance::Start() {
        if (field_48 != 4) {
            if (field_48 != 2) {
                return;
            }
            field_36 = m_loopIterations;
        }
        field_48 = 3;
    }

    // 0x100b906b0
    void VoiceInstance::UpdateLoopIterations() {
        unsigned int uVar1 = field_36;
        if (uVar1 == 0) {
            field_48 = 5;
            field_16 = 1;
        } else if (0 < (int)uVar1) {
            field_36 = uVar1 - 1;
        }
    }

    // 0x100b906e0
    void VoiceInstance::WriteToOutputBuffer() {
        uint8_t* this_00;
        unsigned int uVar3;
        AudioBuffer* pAVar4;
        unique_ptr<AudioBuffer>* this_01;
        long* plVar5;
        SampleReadable* sampleReadable;
        unsigned int uVar6;
        unsigned int local_38;

        scoped_lock<std::mutex> local_40(field_176);
        bool cVar1 = field_88.empty();
        if (!cVar1) {
            this_00 = &field_240;
            do {
                pAVar4 = (AudioBuffer*)(*this_00).operator->();
                if (pAVar4->GetNumberSamplesCanBeWritten(0) == 0)
                    break;
                this_01 = (unique_ptr<AudioBuffer>*)
                    eastl::queue<std::unique_ptr<AudioBuffer>,
                                 eastl::deque<std::unique_ptr<AudioBuffer>, eastl::allocator, 32u>>::front();
                pAVar4 = (AudioBuffer*)**this_01;
                cVar1 = IsEncoded();
                if (!cVar1) {
                    LogAssert(
                        "IsEncoded()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                        "VoiceInstance.cpp",
                        256,
                        "Use AudioBufferHandler instead, otherwise you\'re writing decoded samples multiple times.");
                }
                local_38 = 0;
                uVar6 = 0;
                while (true) {
                    plVar5 = (long*)(*this_00).operator->();
                    uVar3 = (**(void (**)(...))(*plVar5 + 24))(plVar5);
                    if (uVar3 <= uVar6)
                        break;
                    cVar1 = pAVar4->HasChannel((unsigned int)pAVar4);
                    sampleReadable = (SampleReadable*)(*this_00).operator->();
                    uVar3 = 0;
                    if (cVar1) {
                        uVar3 = uVar6;
                    }
                    AudioBuffer::WriteSamples(*sampleReadable, (unsigned int)pAVar4, uVar3,
                                              *((unsigned int*)(unsigned long)uVar6), 0, (uint8_t)(&local_38), 1.0,
                                              m_pan);
                    uVar6 = uVar6 + 1;
                }
                ((AudioBuffer*)(*this_00).operator->())->WroteSamples(local_38);
                pAVar4->ConsumedSamples(0, false);
                cVar1 = pAVar4->CanReadSample(0, 0);
                if (!cVar1) {
                    eastl::queue<std::unique_ptr<AudioBuffer>,
                                 eastl::deque<std::unique_ptr<AudioBuffer>, eastl::allocator, 32u>>::pop();
                }
                cVar1 = field_88.empty();
            } while (!cVar1);
        }
    }

    // 0x100b90900
    void
    VoiceInstance::ConfigureVoice(const shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>& fixed_stack,
                                  const AudioFormat* audioFormat) {
        long lVar2;
        Layout* this_02;
        vector<shared_ptr<AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>* this_03;
        shared_ptr<AudioBuffer>* audioBuffer;
        ReturnValue local_48;
        unsigned int local_2c;

        scoped_lock<std::mutex> local_38(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        uint8_t* this_00 = field_72;
        *this_00 = fixed_stack;
        field_40 = (Layout*)audioFormat;
        if ((this_00->operator_cast_to_bool() != '\0') && (field_48 = 2, field_40[21] == (Layout)0)) {
            lVar2 = ((stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul>>*)(*this_00)
                         .operator->())
                        ->size();
            if (lVar2 != 1) {
                LogAssert(
                    "m_data->size() == 1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp",
                    292,
                    "This isn\'t a MotherBuffer! This would be fine if AudioBufferHandler gets upgraded to use more "
                    "than one AudioBuffer.");
            }
            lVar2 = field_0->GetScreen();
            local_2c = *(unsigned int*)(lVar2 + 8);
            this_02 = (Layout*)(*this_00).operator->();
            this_03 = (vector<shared_ptr<AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>*)
                          this_02->SSOBeginPtr();
            audioBuffer = (shared_ptr<AudioBuffer>*)(*this_03)[0];
            make_shared<AudioBufferHandler, unsigned int&, shared_ptr<AudioBuffer>&>(&local_48, &local_2c, audioBuffer);
            field_56 = local_48;
        }
    }

    // 0x100b90b80
    void VoiceInstance::DecodeCallback(PacketT<Array<unsigned char>>& arg1) {
        int iVar2;
        unsigned int uVar3;
        unsigned int arg3;
        AudioBuffer* pAVar5;
        unsigned char* arg1_00;
        uint32_t local_54;
        scoped_lock<std::mutex> local_50;
        unsigned int local_44;
        unique_ptr<AudioBuffer> local_40;
        unsigned int local_34;

        scoped_lock<std::mutex> local_60(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        uint8_t bVar1 = arg1.g1();
        if (bVar1 == 2) {
            uVar3 = arg1.g4();
            field_256 = field_256 + (unsigned long)uVar3;
        } else if (bVar1 == 20) {
            iVar2 = arg1.g4();
            local_34 = arg1.g4();
            bVar1 = arg1.g1();
            local_44 = (unsigned int)bVar1;
            local_54 = arg1.g4();
            while (true) {
                if ((arg1.size() & 3) == 0)
                    break;
                arg1.g1();
            }
            field_256 = field_256 + (long)iVar2;
            local_50[0] = (scoped_lock<std::mutex>)0;
            std::make_unique<AudioBuffer, int&, int&, int&, AudioFormat const*&, bool>(local_40, local_34, local_44,
                                                                                       local_54, local_50);
            pAVar5 = (AudioBuffer*)local_40.operator->();
            arg1_00 = (unsigned char*)arg1.GetDataPtr();
            uVar3 = arg1.size();
            arg3 = arg1.GetTextureAtlas();
            pAVar5->WriteFromInterleavedPacket(arg1_00, uVar3, arg3, local_34, local_44);
            pAVar5 = (AudioBuffer*)local_40.operator->();
            pAVar5->WroteSamples(local_34);
            local_50 = std::scoped_lock(field_176);
            field_88.push(local_40);
        } else {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp",
                    343, "Unknown opcode (%d) from decode callback", (unsigned int)bVar1);
        }
    }

    // 0x100b90e10
    void VoiceInstance::Pause() {

        scoped_lock<std::mutex> local_18(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        if (field_48 == 3) {
            field_288->Pause();
        }
    }

    // 0x100b90e60
    void VoiceInstance::Resume() {

        scoped_lock<std::mutex> local_18(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        if (field_48 == 3) {
            field_288->Resume();
        }
    }

} // namespace jag::hal::audio
