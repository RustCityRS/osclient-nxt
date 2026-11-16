// libs/hal/audio/VoiceInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "VoiceInstance.h"

namespace jag::hal::audio {
    // 0x1000641f0: the linker folded this into graphics::SunlightOptions::GetSunElevation() const, which has identical code
    VoiceInstance::GetPriority() const;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    VoiceInstance::GetAudioBufferHandler() const;

    // 0x1003a2420: the linker folded this into MenuItem::SetCommandIndex(unsigned int), which has identical code
    VoiceInstance::SetLoopIterations(int);

    // 0x1003c00c0: the linker folded this into Camera::SetRightClip(float), which has identical code
    VoiceInstance::SetGain(float);

    // 0x1003e9e60: the linker folded this into FacingController::SetTurnSpeedMultiplier(float), which has identical code
    VoiceInstance::SetPriority(float);

    // 0x10048fce0: the linker folded this into game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const, which has identical code
    float VoiceInstance::GetPan() const;

    // 0x100664980: the linker folded this into jag::audio::SoundResource::SetStreamed(bool), which has identical code
    VoiceInstance::SetVirtual(bool);

    // 0x1008180a0: the linker folded this into graphics::Model::SetModelRawUniqueID(int), which has identical code
    VoiceInstance::SetBussID(BussType);

    // 0x100b8ea40, 144 bytes, placed by class name and debug map
    // VoiceInstance::Init(AudioRenderer*, int)
    void VoiceInstance::Init(AudioRenderer* param_1, int param_2) {
        long lVar1;
        shared_ptr local_38;
        int local_24[2];
        bool local_19;

        field_0 = param_1;
        local_24[1] = 2;
        local_24[0] = param_2;
        lVar1 = param_1->GetScreen();
        local_19 = true;
        make_shared<AudioBuffer, int&, int, unsigned int const&, AudioFormat_const*&, bool>(
            (jag*)&local_38, local_24, local_24 + 1, (uint*)(lVar1 + 4), (AudioFormat**)&AudioFormat::FLOAT, &local_19);
        shared_ptr<AudioBuffer>::operator=((shared_ptr<AudioBuffer>*)&field_240, &local_38);
        local_38.~shared_ptr();
    }

    // 0x100b8f050, 32 bytes, placed by class name
    // VoiceInstance::Suspend()
    void VoiceInstance::Suspend() {
        if ((field_48 & 4294967294U) == 2) {
            field_48 = 4;
        }
    }

    // 0x100b8f070, 1072 bytes, placed by class name
    // VoiceInstance::Update(float)
    void VoiceInstance::Update(float param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        shared_ptr* this_01;
        vector* pvVar5;
        AudioBuss* this_02;
        long* plVar6;
        AudioBuffer* pAVar7;
        stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>*
            psVar8;
        Layout* pLVar9;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar10;
        Layout* pLVar11;
        undefined8 uVar12;
        ulong uVar13;
        AudioBufferHandler* pAVar14;
        undefined8 uVar15;
        type* in_RSI;
        type* ptVar16;
        float fVar17;
        float fVar18;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Da_01;
        float extraout_XMM0_Da_02;
        float extraout_XMM0_Da_03;
        float extraout_XMM0_Da_04;
        float extraout_XMM0_Da_05;
        type local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_48 == 0)
            goto LAB_100b8f411;
        fVar17 = m_gain * m_preSendControls;
        this_01 = (shared_ptr*)(field_288, in_RSI)->SSOBeginPtr();
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            pvVar5 = (field_288, in_RSI)->SSOBeginPtr();
            this_02 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)pvVar5);
            fVar18 = (float)this_02->GetPriority();
            fVar17 = fVar17 * fVar18;
        }
        param_1 = (float)SetVerticalFov(fVar17);
        if (field_48 != 3)
            goto LAB_100b8f411;
        if ((field_40[21] != (Layout)0) && (field_272 == (long*)0)) {
            plVar6 = (long*)(*(code*)field_0->field_0[7])();
            field_272 = plVar6;
            if (plVar6 == (long*)0) {
                uVar12 = logger::default_logger();
                uVar15 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(field_40);
                logger::Logger::Log(
                    uVar12, 1, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp",
                    187, "Could not get a decoder for %s, going to try again next time.", uVar15);
            } else {
                ptVar16 = local_68;
                std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::function<
                    VoiceInstance::Update(float)::__1, void>(ptVar16, this);
                (**(code**)(*plVar6 + 56))(plVar6);
                std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::~function(
                    (function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>*)local_68);
                iVar3 = field_280;
                if (-1 < (long)iVar3) {
                    pLVar9 = (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                        (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)field_72);
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar9, ptVar16);
                    uVar13 = pvVar5->size();
                    if ((ulong)(long)iVar3 < uVar13) {
                        pLVar9 =
                            (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                                (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)field_72);
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar9, ptVar16);
                        iVar3 = field_280;
                        field_280 = iVar3 + 1;
                        pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            eastl::vector<shared_ptr<AudioBuffer>,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<AudioBuffer>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    pvVar5,
                                (long)iVar3);
                        pAVar7 =
                            (AudioBuffer*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                pvVar10);
                        if (pAVar7 != (AudioBuffer*)0) {
                            pLVar11 = (Layout*)pAVar7->GetDataRaw();
                            field_256 = 0;
                            uVar12 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                            *(undefined8*)&field_264 = uVar12;
                            plVar6 = field_272;
                            uVar12 = WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)pLVar11, 0);
                            (**(code**)(*plVar6 + 16))(plVar6, uVar12, 0, *(undefined8*)&field_264);
                        }
                    }
                }
            }
        }
        if (fVar17 < 0.01) {
            NotifyDebugRegistration(true);
        }
        if (field_16 != '\0') {
            plVar6 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_240);
            iVar3 = (**(code**)(*plVar6 + 16))(plVar6, 0);
            param_1 = extraout_XMM0_Da;
            if (iVar3 == 0) {
                field_48 = 5;
            }
            goto LAB_100b8f411;
        }
        if (field_40[21] == (Layout)0) {
            pAVar14 = (AudioBufferHandler*)shared_ptr<AudioBufferHandler>::operator->(
                (shared_ptr<AudioBufferHandler>*)&field_56);
            cVar2 = pAVar14->IsFinishedReading();
            param_1 = extraout_XMM0_Da_05;
            if (cVar2 == '\0')
                goto LAB_100b8f411;
            pAVar14 = (AudioBufferHandler*)shared_ptr<AudioBufferHandler>::operator->(
                (shared_ptr<AudioBufferHandler>*)&field_56);
            pAVar14->ResetReadPosition();
        LAB_100b8f409:
            param_1 = (float)UpdateLoopIterations(this);
        } else {
            pAVar7 = (AudioBuffer*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_240);
            ptVar16 = (type*)0;
            cVar2 = pAVar7->CanWriteSample(0, 0);
            param_1 = extraout_XMM0_Da_00;
            if (cVar2 != '\0') {
                param_1 = (float)WriteToOutputBuffer(this);
            }
            if (field_272 == (long*)0)
                goto LAB_100b8f411;
            iVar3 = field_280;
            this_00 = field_72;
            psVar8 = (stack<shared_ptr<AudioBuffer>,
                            eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>*)
                         shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                             (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)this_00);
            iVar4 =
                eastl::stack<shared_ptr<AudioBuffer>,
                             eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>::size(psVar8);
            param_1 = extraout_XMM0_Da_01;
            if (iVar4 <= iVar3) {
                plVar6 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_240);
                ptVar16 = (type*)0;
                iVar3 = (**(code**)(*plVar6 + 16))(plVar6);
                param_1 = extraout_XMM0_Da_02;
                if ((iVar3 == 0) && (*(ulong*)&field_264 <= field_256)) {
                    field_280 = 0;
                    goto LAB_100b8f409;
                }
            }
            if (*(ulong*)&field_264 <= field_256) {
                iVar3 = field_280;
                psVar8 = (stack<shared_ptr<AudioBuffer>,
                                eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>*)
                             shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                                 (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)this_00);
                iVar4 = eastl::stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true,
                                                                                  eastl::allocator>>::size(psVar8);
                param_1 = extraout_XMM0_Da_03;
                if (iVar3 < iVar4) {
                    iVar3 = (&field_88)->size();
                    param_1 = extraout_XMM0_Da_04;
                    if (iVar3 < 50) {
                        field_256 = 0;
                        pLVar9 =
                            (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                                (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)this_00);
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar9, ptVar16);
                        iVar3 = field_280;
                        field_280 = iVar3 + 1;
                        pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            eastl::vector<shared_ptr<AudioBuffer>,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<AudioBuffer>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    pvVar5,
                                (long)iVar3);
                        pAVar7 =
                            (AudioBuffer*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                pvVar10);
                        pLVar11 = (Layout*)pAVar7->GetDataRaw();
                        uVar12 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                        *(undefined8*)&field_264 = uVar12;
                        plVar6 = field_272;
                        uVar12 = WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)pLVar11, 0);
                        param_1 = (float)(**(code**)(*plVar6 + 40))(plVar6, uVar12, 0, *(undefined8*)&field_264);
                    }
                }
            }
        }
    LAB_100b8f411:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail(param_1);
        }
    }

    // 0x100b8f4a0, 64 bytes, placed by class name
    // VoiceInstance::MixSend()
    void VoiceInstance::MixSend() {
        AudioBuffer* pAVar1;

        if (field_48 == 3) {
            pAVar1 = (AudioBuffer*)(&field_240)->end();
            (field_288, pAVar1, (bool)m_virtual[0])->Mix();
        }
    }

    // 0x100b8f5d0, 80 bytes, placed by class name
    // VoiceInstance::Claim()
    void VoiceInstance::Claim() {
        if (field_48 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_voiceState == VoiceState::FREE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp", 68,
                "VoiceInstance claimed when it already has an owner.");
        }
        m_priority = 0.0;
        field_48 = 1;
    }

    // 0x100b8f620, 48 bytes, placed by class name
    // VoiceInstance::SetSend(shared_ptr<AudioBuss> const&, shared_ptr<AudioBuss> const&)
    void VoiceInstance::SetSend(shared_ptr* param_1, shared_ptr* param_2) {
        (field_288, param_1)->SetMasterBuss();
        (field_288, param_2)->SetDestinationBuss();
    }

    // 0x100b90090, 288 bytes, base-object constructor, placed by class name
    // VoiceInstance::VoiceInstance()
    void VoiceInstance::VoiceInstance() {
        field_0 = (AudioRenderer*)0;
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
        new (&field_56, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_72, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_88) eastl::queue<
            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
            eastl::deque<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>, eastl::allocator, 32u>>();
        new (&field_176) std::mutex();
        new (&field_240, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        *(undefined8*)&field_268 = 0;
        *(undefined8*)((long)&field_272 + 4) = 0;
        field_256 = 0;
        *(undefined8*)&field_264 = 0;
        new (field_288, this) AudioSend();
        m_bussID = 0;
        m_soundType = 12;
    }

    // 0x100b901e0, 16 bytes, complete-object constructor, placed by class name
    // VoiceInstance::VoiceInstance(): jumps straight to the base-object constructor

    // 0x100b90250, 496 bytes, placed by class name
    // VoiceInstance::Free()
    void VoiceInstance::Free() {
        long* plVar1;
        char cVar2;
        AudioBuffer* this_00;
        scoped_lock<std::mutex> local_60[8];
        function<void(PacketT<Array<unsigned char, eastl::allocator>>&)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        plVar1 = field_272;
        if (plVar1 != (long*)0) {
            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::function(
                (_func_decltype_nullptr*)local_58);
            (**(code**)(*plVar1 + 56))(plVar1, local_58);
            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::~function(local_58);
            (*(code*)field_0->field_0[8])(field_0, field_272);
            field_272 = (long*)0;
        }
        new (local_58) std::scoped_lock<std::mutex>((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        if (field_48 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_voiceState > VoiceState::FREE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp", 87,
                "Attempted to free a VoiceInstance which is already free...");
        }
        field_288->Free();
        if (field_40[21] != (Layout)0) {
            std::scoped_lock<std::mutex>::scoped_lock(local_60, (mutex*)&field_176);
            while (true) {
                cVar2 = (&field_88)->empty();
                if (cVar2 != '\0')
                    break;
                eastl::queue<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                             eastl::deque<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                                          eastl::allocator, 32u>>::pop();
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_60);
        }
        SetRate(this, 256);
        field_40 = (Layout*)AudioFormat::INVALID;
        m_priority = -1.0;
        shared_ptr<AudioBufferHandler>::reset();
        shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::reset();
        field_36 = 0;
        m_preSendControls = 1.0;
        m_gain = 1.0;
        m_pan = 0.0;
        m_loopIterations = 0;
        field_16 = 0;
        m_virtual[0] = 0;
        this_00 = (AudioBuffer*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_240);
        this_00->Reset(1, false);
        field_48 = 0;
        m_bussID = 0;
        m_soundType = 12;
        field_280 = 0;
        local_58->~scoped_lock();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b90460, 80 bytes, placed by class name
    // VoiceInstance::SetRate(unsigned int)
    void VoiceInstance::SetRate(uint param_1) {
        long* plVar2;

        if (IsEncoded(this) == '\0') {
            plVar2 = (long*)shared_ptr<AudioBufferHandler>::operator->((shared_ptr<AudioBufferHandler>*)&field_56);
        } else {
            plVar2 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_240);
        }
        (**(code**)(*plVar2 + 56))(plVar2, param_1);
    }

    // 0x100b90550, 32 bytes, placed by class name
    // VoiceInstance::Start()
    void VoiceInstance::Start() {
        if (field_48 != 4) {
            if (field_48 != 2) {
                return;
            }
            field_36 = m_loopIterations;
        }
        field_48 = 3;
    }

    // 0x100b906b0, 48 bytes, placed by class name
    // VoiceInstance::UpdateLoopIterations()
    void VoiceInstance::UpdateLoopIterations() {
        int iVar1;

        iVar1 = field_36;
        if (iVar1 == 0) {
            field_48 = 5;
            field_16 = 1;
        } else if (0 < iVar1) {
            field_36 = iVar1 + -1;
        }
    }

    // 0x100b906e0, 448 bytes, placed by class name
    // VoiceInstance::WriteToOutputBuffer()
    void VoiceInstance::WriteToOutputBuffer() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        uint uVar3;
        AudioBuffer* pAVar4;
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>* this_01;
        long* plVar5;
        AudioBuffer* pAVar6;
        uint uVar7;
        scoped_lock<std::mutex> local_40[8];
        uint local_38;
        uint local_34;

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&field_176);
        cVar1 = (&field_88)->empty();
        if (cVar1 == '\0') {
            this_00 = &field_240;
            do {
                pAVar4 = (AudioBuffer*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
                iVar2 = pAVar4->GetNumberSamplesCanBeWritten(0);
                if (iVar2 == 0)
                    break;
                this_01 = (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)
                    eastl::queue<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                                 eastl::deque<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                                              eastl::allocator, 32u>>::front();
                pAVar4 =
                    (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator*(this_01);
                cVar1 = IsEncoded(this);
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "IsEncoded()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                        "VoiceInstance.cpp",
                        256,
                        "Use AudioBufferHandler instead, otherwise you\'re writing decoded samples multiple times.");
                }
                local_38 = 0;
                local_34 = 0;
                uVar7 = 0;
                while (true) {
                    plVar5 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
                    uVar3 = (**(code**)(*plVar5 + 24))(plVar5);
                    if (uVar3 <= uVar7)
                        break;
                    cVar1 = (*(code*)pAVar4->field_0[4])(pAVar4, uVar7);
                    pAVar6 = (AudioBuffer*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
                    uVar3 = 0;
                    if (cVar1 != '\0') {
                        uVar3 = uVar7;
                    }
                    pAVar6->WriteSamples(pAVar4, uVar3, uVar7, &local_34, &local_38, (bool)m_virtual[0], 1.0, m_pan);
                    uVar7 = uVar7 + 1;
                }
                pAVar6 = (AudioBuffer*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
                pAVar6->WroteSamples(local_38);
                pAVar4->ConsumedSamples(local_34, false);
                cVar1 = pAVar4->CanReadSample(0, 0);
                if (cVar1 == '\0') {
                    eastl::queue<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                                 eastl::deque<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                                              eastl::allocator, 32u>>::pop();
                }
                cVar1 = (&field_88)->empty();
            } while (cVar1 == '\0');
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    }

    // 0x100b90900, 304 bytes, placed by class name
    // VoiceInstance::ConfigureVoice(shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true> > const&, AudioFormat const*)
    void VoiceInstance::ConfigureVoice(shared_ptr* param_1, AudioFormat* param_2) {
        undefined1* this_00;
        bool bVar1;
        stack<shared_ptr<AudioBuffer>, eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>*
            this_01;
        long lVar2;
        Layout* this_02;
        vector* this_03;
        shared_ptr* psVar3;
        shared_ptr local_48;
        scoped_lock<std::mutex> local_38[12];
        uint local_2c;

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        this_00 = field_72;
        shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator=(
            (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)this_00, param_1);
        field_40 = (Layout*)param_2;
        bVar1 = this_00->operator_cast_to_bool();
        if ((bVar1) && (field_48 = 2, field_40[21] == (Layout)0)) {
            this_01 = (stack<shared_ptr<AudioBuffer>,
                             eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>*)
                          shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                              (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)this_00);
            lVar2 =
                eastl::stack<shared_ptr<AudioBuffer>,
                             eastl::fixed_vector<shared_ptr<AudioBuffer>, 1ul, true, eastl::allocator>>::size(this_01);
            if (lVar2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_data->size() == 1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp",
                    292,
                    "This isn\'t a MotherBuffer! This would be fine if AudioBufferHandler gets upgraded to use more "
                    "than one AudioBuffer.");
            }
            lVar2 = field_0->GetScreen();
            local_2c = *(uint*)(lVar2 + 8);
            this_02 = (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>::operator->(
                (shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>*)this_00);
            this_03 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)param_1);
            psVar3 =
                (shared_ptr*)eastl::vector<shared_ptr<AudioBuffer>,
                                           eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<AudioBuffer>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_03,
                           0);
            make_shared<AudioBufferHandler, unsigned int&, shared_ptr<AudioBuffer>&>((jag*)&local_48, &local_2c,
                                                                                     psVar3);
            shared_ptr<AudioBufferHandler>::operator=((shared_ptr<AudioBufferHandler>*)&field_56, &local_48);
            local_48.~shared_ptr();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100b90b80, 480 bytes, placed by class name
    // VoiceInstance::DecodeCallback(PacketT<Array<unsigned char, eastl::allocator> >&)
    void VoiceInstance::DecodeCallback(PacketT* param_1) {
        char cVar1;
        byte bVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        ulong uVar6;
        undefined8 uVar7;
        AudioBuffer* pAVar8;
        uchar* puVar9;
        scoped_lock<std::mutex> local_60[12];
        undefined4 local_54;
        scoped_lock<std::mutex> local_50[12];
        uint local_44;
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>> local_40[12];
        uint local_34;

        std::scoped_lock<std::mutex>::scoped_lock(local_60, (mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        cVar1 = param_1->g1();
        if (cVar1 == '\x02') {
            uVar4 = param_1->g4();
            field_256 = field_256 + (ulong)uVar4;
        } else if (cVar1 == '\x14') {
            iVar3 = param_1->g4();
            local_34 = param_1->g4();
            bVar2 = param_1->g1();
            local_44 = (uint)bVar2;
            local_54 = param_1->g4();
            while (true) {
                uVar6 = param_1->size();
                if ((uVar6 & 3) == 0)
                    break;
                param_1->g1();
            }
            field_256 = field_256 + (long)iVar3;
            local_50[0] = (scoped_lock<std::mutex>)0;
            std::make_unique<AudioBuffer, int&, int&, int&, AudioFormat_const*&, bool>(
                (int*)local_40, (int*)&local_34, (int*)&local_44, (AudioFormat**)&local_54, (bool*)local_50);
            pAVar8 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(local_40);
            puVar9 = (uchar*)param_1->GetDataPtr();
            uVar4 = param_1->size();
            uVar5 = param_1->GetTextureAtlas();
            pAVar8->WriteFromInterleavedPacket(puVar9, uVar4, uVar5, local_34, local_44);
            pAVar8 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(local_40);
            pAVar8->WroteSamples(local_34);
            std::scoped_lock<std::mutex>::scoped_lock(local_50, (mutex*)&field_176);
            (&field_88, (unique_ptr*)local_40)->push();
            std::scoped_lock<std::mutex>::~scoped_lock(local_50);
            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::~unique_ptr(local_40);
        } else {
            uVar7 = logger::default_logger();
            logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/VoiceInstance.cpp",
                343, "Unknown opcode (%d) from decode callback", cVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_60);
    }

    // 0x100b90e10, 64 bytes, placed by class name
    // VoiceInstance::Pause()
    void VoiceInstance::Pause() {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        if (field_48 == 3) {
            field_288->Pause();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x100b90e60, 64 bytes, placed by class name
    // VoiceInstance::Resume()
    void VoiceInstance::Resume() {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        if (field_48 == 3) {
            field_288->Resume();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

} // namespace jag::hal::audio
