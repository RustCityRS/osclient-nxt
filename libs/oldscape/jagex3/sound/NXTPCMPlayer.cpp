// libs/oldscape/jagex3/sound/NXTPCMPlayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTPCMPlayer.h"

namespace jag::oldscape::sound {
    // 0x100009e70: NXTPCMPlayer::SubclassInit() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100293830
    NXTPCMPlayer::NXTPCMPlayer()
        : PCMPlayer(), field_184(256, 2, 22050, (AudioFormat*)hal::audio::AudioFormat::FLOAT, false) {
        new ((field_184 + 216))
            hal::audio::AudioBuffer(256, 1, 22050, (AudioFormat*)hal::audio::AudioFormat::FLOAT, false);
        field_616 = 0;
        field_184->WroteSamples(256);
        ((field_184 + 216))->WroteSamples(256);
    }

    // 0x100293aa0
    void NXTPCMPlayer::Open(int arg1) {
        OSRenderCore_AnyThread::Instance()->InitAudio();
    }

    // 0x100293ac0
    void NXTPCMPlayer::Close() {
        OSRenderCore_AnyThread::Instance()->DestroyAudio();
    }

    // 0x100293ae0
    void NXTPCMPlayer::AlreadyWritten() {
        OSRenderCore_AudioThread::Instance();
        OSRenderCore_AudioThread::GetNumberSamplesInAudioBuffer();
    }

    // 0x100293b00
    void NXTPCMPlayer::DiscardBufferInner() {}

    // 0x100293b10
    void NXTPCMPlayer::Service() {
        OSRenderCore_AnyThread* pOVar3;
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "NXTPCMPlayer.cpp",
                          50, nullptr);
            }
        }
        int iVar2 = Service_Locked();
        if (iVar2 == 2) {
            pOVar3 = OSRenderCore_AnyThread::Instance();
            pOVar3->InitAudio();
        } else if (iVar2 == 1) {
            pOVar3 = OSRenderCore_AnyThread::Instance();
            pOVar3->DestroyAudio();
        }
    }

    // 0x100293c10
    uint64_t NXTPCMPlayer::Service_Locked() {
        uint8_t* arg1;
        AudioBuffer* this_00;
        uint8_t uVar2;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        TcpConnectionMessageBase* pTVar5;
        uint64_t extraout_var;
        WrapArray<float>* pWVar6;
        WrapArray<float>* this_03;
        int* piVar7;
        uint32_t* puVar8;
        uint64_t extraout_var_00;
        AudioBuffer* audioBuffer;
        unsigned long uVar9;
        uint64_t uVar10;
        unsigned long arg1_00;
        uint32_t uVar11;
        AudioBuffer* local_48;
        AudioBuffer* local_40;
        int local_34;

        scoped_lock<std::mutex> local_50(*((mutex*)&hal::audio::AudioRenderer::m_audioMutex));
        auto pOVar4 = OSRenderCore_AnyThread::Instance();
        AudioAPI* this_01 = (AudioAPI*)(*(void (*)(...))*pOVar4->field_0)(pOVar4);
        int iVar3 = field_616 + 1;
        field_616 = iVar3;
        if (iVar3 == 100) {
            field_616 = 0;
            this_01->VerifyDefaultAudioDevice();
        }
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)this_01->SSOBeginPtr();
        bool bVar1 = *midiPlayerMainThread != nullptr;
        if (bVar1) {
            pTVar5 = (TcpConnectionMessageBase*)(*midiPlayerMainThread).operator->();
            iVar3 = pTVar5->GetEndPosition();
            uVar10 = 1;
            if (iVar3 == 2)
                goto LAB_100293e9b;
        }
        bVar1 = *midiPlayerMainThread == nullptr;
        uVar10 = 2;
        if (!bVar1) {
            pTVar5 = (TcpConnectionMessageBase*)(*midiPlayerMainThread).operator->();
            iVar3 = pTVar5->GetEndPosition();
            uVar10 = 0;
            if ((iVar3 == 1) && (field_12 == 0)) {
                OSRenderCore_AudioThread::Instance();
                local_34 = OSRenderCore_AudioThread::GetAudioBufferSampleSize();
                local_48 = (AudioBuffer*)field_184;
                local_40 = (AudioBuffer*)(field_184 + 216);
                arg1 = &field_16;
                while (uVar2 = AlreadyWritten(), (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) < local_34) {
                    audioBuffer = local_48;
                    if (PCMPlayer::m_stereo == '\0') {
                        audioBuffer = local_40;
                    }
                    Generate(*arg1, 256);
                    this_00 = local_48;
                    if (PCMPlayer::m_stereo == '\0') {
                        pWVar6 = local_40->GetData(0);
                        uVar9 = 0;
                        do {
                            piVar7 = (int*)(*arg1)[uVar9];
                            iVar3 = *piVar7;
                            puVar8 = (uint32_t*)(*pWVar6)[uVar9];
                            uVar11 = Pcm24ToFloat(iVar3);
                            *puVar8 = uVar11;
                            uVar9 = uVar9 + 1;
                        } while (uVar9 != 256);
                    } else {
                        pWVar6 = local_48->GetData(0);
                        this_03 = this_00->GetData(1);
                        uVar9 = 1;
                        arg1_00 = 0;
                        do {
                            piVar7 = (int*)(*arg1)[uVar9 - 1];
                            iVar3 = *piVar7;
                            puVar8 = (uint32_t*)(*pWVar6)[arg1_00];
                            uVar11 = Pcm24ToFloat(iVar3);
                            *puVar8 = uVar11;
                            piVar7 = (int*)(*arg1)[uVar9];
                            iVar3 = *piVar7;
                            puVar8 = (uint32_t*)(*this_03)[arg1_00];
                            uVar11 = Pcm24ToFloat(iVar3);
                            *puVar8 = uVar11;
                            arg1_00 = arg1_00 + 1;
                            uVar9 = uVar9 + 2;
                        } while (arg1_00 != 256);
                    }
                    uVar2 = audioBuffer->GetNumberSamplesCanBeRead((unsigned int)audioBuffer);
                    if ((int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2) != 256) {
                        LogAssert("audioBuffer.GetNumberSamplesCanBeRead(0) == BUF_SIZE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/sound/NXTPCMPlayer.cpp",
                                  149, nullptr);
                    }
                    ((OSRenderCore_AudioThread*)OSRenderCore_AudioThread::Instance())->WriteAudioSamples(*audioBuffer);
                }
                uVar10 = 0;
            }
        }
    LAB_100293e9b:
        return uVar10;
    }

} // namespace jag::oldscape::sound
