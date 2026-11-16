// libs/oldscape/jagex3/sound/NXTPCMPlayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTPCMPlayer.h"

namespace jag::oldscape::sound {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NXTPCMPlayer::SubclassInit();

    // 0x100293830, 208 bytes, base-object constructor, placed by class name and debug map
    // NXTPCMPlayer::NXTPCMPlayer()
    void NXTPCMPlayer::NXTPCMPlayer() {
        new (this) PCMPlayer();
        field_0 = &PTR__NXTPCMPlayer_100ef9ba8;
        new (field_184, 256, 2, 22050, (AudioFormat*)hal::audio::AudioFormat::FLOAT, false) hal::audio::AudioBuffer();
        new ((field_184 + 216), 256, 1, 22050, (AudioFormat*)hal::audio::AudioFormat::FLOAT, false)
            hal::audio::AudioBuffer();
        field_616 = 0;
        (field_184, 256)->WroteSamples();
        ((field_184 + 216), 256)->WroteSamples();
    }

    // 0x100293a90, 16 bytes, complete-object constructor, placed by class name
    // NXTPCMPlayer::NXTPCMPlayer(): jumps straight to the base-object constructor

    // 0x100293aa0, 32 bytes, placed by class name
    // NXTPCMPlayer::Open(int)
    void NXTPCMPlayer::Open(int param_1) {
        OSRenderCore_AnyThread* this_00;

        this_00 = (OSRenderCore_AnyThread*)OSRenderCore_AnyThread::Instance();
        this_00->InitAudio();
    }

    // 0x100293ac0, 32 bytes, placed by class name
    // NXTPCMPlayer::Close()
    void NXTPCMPlayer::Close() {
        OSRenderCore_AnyThread* this_00;

        this_00 = (OSRenderCore_AnyThread*)OSRenderCore_AnyThread::Instance();
        this_00->DestroyAudio();
    }

    // 0x100293ae0, 32 bytes, placed by class name
    // NXTPCMPlayer::AlreadyWritten()
    void NXTPCMPlayer::AlreadyWritten() {
        OSRenderCore_AudioThread* this_00;

        this_00 = (OSRenderCore_AudioThread*)OSRenderCore_AudioThread::Instance();
        this_00->GetNumberSamplesInAudioBuffer();
    }

    // 0x100293b00, 16 bytes, placed by class name
    // NXTPCMPlayer::DiscardBufferInner()
    void NXTPCMPlayer::DiscardBufferInner() {}

    // 0x100293b10, 160 bytes, placed by class name
    // NXTPCMPlayer::Service()
    void NXTPCMPlayer::Service() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        OSRenderCore_AnyThread* pOVar5;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "NXTPCMPlayer.cpp",
                          50, (char*)0);
            }
        }
        iVar3 = Service_Locked(this);
        if (iVar3 == 2) {
            pOVar5 = (OSRenderCore_AnyThread*)OSRenderCore_AnyThread::Instance();
            pOVar5->InitAudio();
        } else if (iVar3 == 1) {
            pOVar5 = (OSRenderCore_AnyThread*)OSRenderCore_AnyThread::Instance();
            pOVar5->DestroyAudio();
        }
    }

    // 0x100293c10, 720 bytes, placed by class name
    // NXTPCMPlayer::Service_Locked()
    undefined8 NXTPCMPlayer::Service_Locked() {
        undefined1* this_00;
        AudioBuffer* this_01;
        bool bVar1;
        int iVar2;
        undefined8* puVar3;
        AudioAPI* this_02;
        shared_ptr* this_03;
        TcpConnectionMessageBase* pTVar4;
        OSRenderCore_AudioThread* pOVar5;
        WrapArray<float>* pWVar6;
        WrapArray<float>* this_04;
        int* piVar7;
        undefined4* puVar8;
        AudioBuffer* pAVar9;
        type* ptVar10;
        ulong uVar11;
        undefined8 uVar12;
        ulong uVar13;
        undefined4 uVar14;
        scoped_lock<std::mutex> local_50[8];
        AudioBuffer* local_48;
        AudioBuffer* local_40;
        int local_34;

        ptVar10 = (type*)&hal::audio::AudioRenderer::m_audioMutex;
        std::scoped_lock<std::mutex>::scoped_lock(local_50, (mutex*)&hal::audio::AudioRenderer::m_audioMutex);
        puVar3 = (undefined8*)OSRenderCore_AnyThread::Instance();
        this_02 = (AudioAPI*)(**(code**)*puVar3)(puVar3);
        iVar2 = field_616 + 1;
        field_616 = iVar2;
        if (iVar2 == 100) {
            field_616 = 0;
            this_02->VerifyDefaultAudioDevice();
        }
        this_03 = (shared_ptr*)this_02->SSOBeginPtr(ptVar10);
        bVar1 = operator!=(this_03, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pTVar4 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)this_03);
            iVar2 = pTVar4->GetEndPosition();
            uVar12 = 1;
            if (iVar2 == 2)
                goto LAB_100293e9b;
        }
        bVar1 = operator==(this_03, (_func_decltype_nullptr*)0);
        uVar12 = 2;
        if (!bVar1) {
            pTVar4 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)this_03);
            iVar2 = pTVar4->GetEndPosition();
            uVar12 = 0;
            if ((iVar2 == 1) && (field_12 == 0)) {
                pOVar5 = (OSRenderCore_AudioThread*)OSRenderCore_AudioThread::Instance();
                local_34 = pOVar5->GetAudioBufferSampleSize();
                local_48 = (AudioBuffer*)field_184;
                local_40 = (AudioBuffer*)(field_184 + 216);
                this_00 = &field_16;
                while (iVar2 = (*(code*)field_0[9])(this), iVar2 < local_34) {
                    pAVar9 = local_48;
                    if (PCMPlayer::m_stereo == '\0') {
                        pAVar9 = local_40;
                    }
                    Generate(this_00, 256);
                    this_01 = local_48;
                    if (PCMPlayer::m_stereo == '\0') {
                        pWVar6 = (WrapArray<float>*)local_40->GetData(0);
                        uVar11 = 0;
                        do {
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar11);
                            iVar2 = *piVar7;
                            puVar8 = (undefined4*)WrapArray<float>::operator[](pWVar6, uVar11);
                            uVar14 = Pcm24ToFloat(iVar2);
                            *puVar8 = uVar14;
                            uVar11 = uVar11 + 1;
                        } while (uVar11 != 256);
                    } else {
                        pWVar6 = (WrapArray<float>*)local_48->GetData(0);
                        this_04 = (WrapArray<float>*)this_01->GetData(1);
                        uVar11 = 1;
                        uVar13 = 0;
                        do {
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar11 - 1);
                            iVar2 = *piVar7;
                            puVar8 = (undefined4*)WrapArray<float>::operator[](pWVar6, uVar13);
                            uVar14 = Pcm24ToFloat(iVar2);
                            *puVar8 = uVar14;
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar11);
                            iVar2 = *piVar7;
                            puVar8 = (undefined4*)WrapArray<float>::operator[](this_04, uVar13);
                            uVar14 = Pcm24ToFloat(iVar2);
                            *puVar8 = uVar14;
                            uVar13 = uVar13 + 1;
                            uVar11 = uVar11 + 2;
                        } while (uVar13 != 256);
                    }
                    iVar2 = (*(code*)pAVar9->field_0[2])(pAVar9, 0);
                    if (iVar2 != 256) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("audioBuffer.GetNumberSamplesCanBeRead(0) == BUF_SIZE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/sound/NXTPCMPlayer.cpp",
                                  149, (char*)0);
                    }
                    pOVar5 = (OSRenderCore_AudioThread*)OSRenderCore_AudioThread::Instance();
                    pOVar5->WriteAudioSamples(pAVar9);
                }
                uVar12 = 0;
            }
        }
    LAB_100293e9b:
        std::scoped_lock<std::mutex>::~scoped_lock(local_50);
        return uVar12;
    }

} // namespace jag::oldscape::sound
