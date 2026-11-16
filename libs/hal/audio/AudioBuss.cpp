// libs/hal/audio/AudioBuss.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioBuss.h"

namespace jag::hal::audio {
    // 0x103bc2618, 16 bytes, __common; set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AudioBuss::NullAudioBuss;

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    AudioBuss::GetBussID() const;

    // 0x100b8bc90, 112 bytes, placed by class name and debug map
    // AudioBuss::GetTotalGainOfChain() const
    void AudioBuss::GetTotalGainOfChain() {
        AudioBuss* this_00;
        float fVar2;
        float local_1c;
        float local_18;
        float local_14;

        local_14 = field_36;
        if (field_40->operator_cast_to_bool()) {
            this_00 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)field_40);
            fVar2 = (float)GetTotalGainOfChain(this_00);
        } else {
            fVar2 = 1.0;
        }
        local_14 = fVar2 * local_14;
        local_1c = 0.0;
        local_18 = 1.0;
        math::Clamp<float>(&local_14, &local_1c, &local_18);
    }

    // 0x100b8bdc0, 64 bytes, placed by class name and debug map
    // AudioBuss::IsMixBussInChain(BussType) const
    undefined8 AudioBuss::IsMixBussInChain(int param_2) {
        undefined8 uVar2;

        uVar2 = 1;
        if (field_60 != param_2) {
            if (field_40->operator_cast_to_bool()) {
                uVar2 = shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)field_40);
                uVar2 = IsMixBussInChain((AudioBuss*)uVar2, param_2);
            } else {
                uVar2 = 0;
            }
        }
        return uVar2;
    }

    // 0x100b8d580, 256 bytes, base-object constructor, placed by class name
    // AudioBuss::AudioBuss(BussType, unsigned int, unsigned int, float, unsigned int, bool)
    void AudioBuss::AudioBuss(undefined4 param_1, AudioBuss* this, uint param_3, undefined4 param_4, uint param_5,
                              uint param_6, char param_7) {
        unique_ptr local_48[8];
        uint local_40;
        uint local_3c;
        bool local_31;

        field_0 = &PTR__AudioBuss_100f26850;
        *(undefined**)&field_8 = (&BussTypeStrings)[param_3];
        *(undefined4*)&field_16 = param_4;
        local_40 = param_5;
        local_3c = param_6;
        std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)&field_24);
        field_32 = 0;
        field_36 = 1.0;
        new (field_40, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_priority = param_1;
        field_60 = param_3;
        std::function<float()>::function((_func_decltype_nullptr*)&field_64);
        if (param_7 != '\0') {
            local_31 = true;
            std::make_unique<AudioBuffer, unsigned int&, unsigned int&, unsigned int&, AudioFormat_const*&, bool>(
                (uint*)local_48, &local_3c, &local_40, (AudioFormat**)&field_16, &local_31);
            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator=(
                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)&field_24, local_48);
            local_48->~unique_ptr();
        }
    }

    // 0x100b8d750, 16 bytes, complete-object constructor, placed by class name
    // AudioBuss::AudioBuss(BussType, unsigned int, unsigned int, float, unsigned int, bool): jumps straight to the base-object constructor

    // 0x100b8d760, 64 bytes, base-object destructor, placed by class name
    // AudioBuss::~AudioBuss()
    void AudioBuss::~AudioBuss() {
        field_0 = &PTR__AudioBuss_100f26850;
        std::function<float()>::~function((function<float()>*)&field_64);
        field_40->~shared_ptr();
        (&field_24)->~unique_ptr();
    }

    // 0x100b8d7a0, 16 bytes, complete-object destructor, placed by class name
    // AudioBuss::~AudioBuss(): jumps straight to the base-object destructor

    // 0x100b8d7b0, 32 bytes, deleting destructor, placed by class name
    // AudioBuss::~AudioBuss()
    void AudioBuss::~AudioBuss() {
        ~AudioBuss(this);
        operator_delete(this);
    }

    // 0x100b8d7d0, 64 bytes, placed by class name
    // AudioBuss::ClearSamples()
    void AudioBuss::ClearSamples() {
        AudioBuffer* this_00;

        if ((&field_24)->operator_cast_to_bool()) {
            this_00 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)&field_24);
            this_00->Reset(1, false);
        }
    }

    // 0x100b8d840, 16 bytes, placed by class name
    // AudioBuss::AddRouting(shared_ptr<AudioBuss> const&)
    void AudioBuss::AddRouting(shared_ptr* param_1) {
        shared_ptr<AudioBuss>::operator=((shared_ptr<AudioBuss>*)field_40, param_1);
    }

    // 0x100b8d8a0, 16 bytes, placed by class name
    // AudioBuss::PreMix()
    void AudioBuss::PreMix() {
        field_32 = 0;
    }

    // 0x100b8d8b0, 48 bytes, placed by class name
    // AudioBuss::PostMix()
    void AudioBuss::PostMix() {
        AudioBuffer* this_00;

        this_00 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
            (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)&field_24);
        this_00->WroteSamples(field_32);
    }

    // 0x100b8d8e0, 432 bytes, placed by class name
    // AudioBuss::MixFromBuffer(AudioBuffer*, bool, float)
    uint AudioBuss::MixFromBuffer(AudioBuffer* param_1, bool param_2, float param_3) {
        float fVar1;
        uint uVar2;
        uint uVar3;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        AudioBuffer* pAVar9;
        long* plVar10;
        WrapArray<float>* this_00;
        WrapArray<float>* this_01;
        float* pfVar11;
        undefined7 in_register_00000011;
        undefined1* this_02;
        uint uVar12;

        uVar2 = (*(code*)param_1->field_0[2])(param_1);
        this_02 = &field_24;
        pAVar9 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
            (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
        uVar3 = pAVar9->GetNumberSamplesCanBeWritten(0);
        uVar2 = eastl::min<unsigned int>(uVar2, uVar3);
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            plVar10 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
            if ((**(code**)(*plVar10 + 24))(plVar10) != 0) {
                uVar3 = 0;
                do {
                    this_00 = (WrapArray<float>*)(*(code*)param_1->field_0[8])(param_1, uVar3);
                    uVar5 = (*(code*)param_1->field_0[9])(param_1, uVar3);
                    uVar6 = (*(code*)param_1->field_0[10])(param_1);
                    plVar10 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                        (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                    this_01 = (WrapArray<float>*)(**(code**)(*plVar10 + 64))(plVar10, uVar3);
                    pAVar9 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                        (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                    uVar7 = pAVar9->GetWriteOffsetSamples(uVar3);
                    uVar8 = (*(code*)pAVar9->field_0[10])(pAVar9);
                    if (uVar2 != 0) {
                        uVar12 = uVar2;
                        do {
                            pfVar11 = (float*)WrapArray<float>::operator[](this_00, (ulong)uVar5 % (ulong)uVar6);
                            fVar1 = *pfVar11;
                            pfVar11 = (float*)WrapArray<float>::operator[](this_01, (ulong)uVar7 % (ulong)uVar8);
                            *pfVar11 = fVar1 * param_3 + *pfVar11;
                            uVar7 = uVar7 + 1;
                            uVar5 = uVar5 + 1;
                            uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                    }
                    uVar3 = uVar3 + 1;
                    plVar10 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                        (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                    uVar7 = (**(code**)(*plVar10 + 24))(plVar10);
                } while (uVar3 < uVar7);
            }
        }
        if (field_32 < uVar2) {
            field_32 = uVar2;
        }
        return uVar2;
    }

    // 0x100b8da90, 240 bytes, placed by class name
    // AudioBuss::MixFromBufferWithResample(shared_ptr<SampleReadable> const&, bool, float, float)
    uint AudioBuss::MixFromBufferWithResample(shared_ptr* param_1, bool param_2, float param_3, float param_4) {
        undefined1* this_00;
        char cVar1;
        uint uVar3;
        long* plVar4;
        AudioBuffer* this_01;
        uint uVar5;
        uint local_38;
        uint local_34;

        local_38 = 0;
        local_34 = 0;
        this_00 = &field_24;
        plVar4 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
            (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_00);
        if ((**(code**)(*plVar4 + 24))(plVar4) != 0) {
            uVar5 = 0;
            do {
                plVar4 = (long*)shared_ptr<SampleReadable>::operator->((shared_ptr<SampleReadable>*)param_1);
                cVar1 = (**(code**)(*plVar4 + 32))(plVar4, uVar5);
                uVar3 = 0;
                if (cVar1 != '\0') {
                    uVar3 = uVar5;
                }
                this_01 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                    (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_00);
                this_01->WriteSamples(param_1, uVar3, uVar5, &local_38, &local_34, param_2, param_3, param_4);
                uVar5 = uVar5 + 1;
                plVar4 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                    (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_00);
                uVar3 = (**(code**)(*plVar4 + 24))(plVar4);
            } while (uVar5 < uVar3);
        }
        if (field_32 < local_34) {
            field_32 = local_34;
        }
        return local_38;
    }

    // 0x100b8dc40, 1712 bytes, placed by class name
    // AudioBuss::MixToBuffer(AudioBuffer*)
    void AudioBuss::MixToBuffer(AudioBuffer* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        long* plVar6;
        undefined* puVar7;
        float* pfVar8;
        undefined2* puVar9;
        WrapArray<float>* this_00;
        WrapArray<float>* pWVar10;
        undefined4* puVar11;
        AudioBuffer* this_01;
        uint uVar12;
        WrapArray<short>* pWVar13;
        ulong uVar14;
        uint uVar15;
        undefined1* this_02;
        ulong uVar16;
        float fVar17;
        int local_68[2];
        ulong local_60;
        uint local_54;
        WrapArray<short>* local_50;
        WrapArray<float>* local_48;
        int local_3c;
        WrapArray<float>* local_38;

        if (param_1 != (AudioBuffer*)0) {
            param_1->Reset(30, false);
            this_02 = &field_24;
            plVar6 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
            uVar1 = (**(code**)(*plVar6 + 16))(plVar6);
            uVar2 = param_1->GetNumberSamplesCanBeWritten(0);
            if (uVar1 < uVar2) {
                param_1->Reset(32, false);
                uVar2 = uVar1;
            }
            if (uVar1 != 0) {
                puVar7 = (undefined*)param_1->end();
                if (puVar7 == AudioFormat::PCM16_INTERLEAVED) {
                    local_54 = (*(code*)param_1->field_0[3])(param_1);
                    if (local_54 != 0) {
                        uVar1 = 0;
                        do {
                            iVar3 = param_1->GetWriteOffsetSamples(uVar1);
                            uVar12 = (*(code*)param_1->field_0[10])(param_1);
                            if (uVar12 < iVar3 + uVar2) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("pAudioBuffer->GetWriteOffsetSamples(chn) + consumed <= "
                                          "pAudioBuffer->GetMaximumSamples()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "audio/AudioBuss.cpp",
                                          155, "pAudioBuffer is showing signs of wrapping, despite having been reset.");
                            }
                            plVar6 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                            uVar12 = (**(code**)(*plVar6 + 72))(plVar6, uVar1);
                            plVar6 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                            uVar4 = (**(code**)(*plVar6 + 80))(plVar6);
                            local_48 = (WrapArray<float>*)CONCAT44(local_48._4_4_, uVar4);
                            plVar6 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                            pWVar10 = (WrapArray<float>*)(**(code**)(*plVar6 + 64))(plVar6, uVar1);
                            local_38 = (WrapArray<float>*)CONCAT44(local_38._4_4_, uVar1);
                            local_50 = (WrapArray<short>*)param_1->GetDataShort(uVar1);
                            uVar1 = 0;
                            if ((uint)local_48 < uVar12 + uVar2) {
                                uVar1 = (uVar12 + uVar2) % (uint)local_48;
                            }
                            uVar15 = uVar2 - uVar1;
                            local_48 = pWVar10;
                            if (uVar15 != 0) {
                                uVar16 = (ulong)uVar15;
                                uVar5 = (uint)local_38._0_4_;
                                do {
                                    pfVar8 = (float*)WrapArray<float>::operator[](local_48, (ulong)uVar12);
                                    local_60 = CONCAT44(local_60._4_4_, *pfVar8);
                                    AudioRenderer::RecordDebugValue((int)local_38._0_4_, *pfVar8);
                                    local_3c = (int)((float)local_60 * 32767.0);
                                    local_68[0] = -32768;
                                    local_68[1] = 32767;
                                    iVar3 = math::Clamp<int>(&local_3c, local_68, local_68 + 1);
                                    local_3c = iVar3;
                                    puVar9 = (undefined2*)WrapArray<short>::operator[](local_50, (ulong)uVar5);
                                    *puVar9 = (short)iVar3;
                                    uVar5 = uVar5 + local_54;
                                    uVar12 = uVar12 + 1;
                                    uVar16 = uVar16 - 1;
                                } while (uVar16 != 0);
                            }
                            uVar12 = local_54;
                            if (uVar1 != 0) {
                                uVar15 = uVar15 * local_54 + (int)local_38._0_4_;
                                uVar16 = 0;
                                iVar3 = (int)local_38._0_4_;
                                do {
                                    pfVar8 = (float*)WrapArray<float>::operator[](local_48, uVar16);
                                    local_60 = CONCAT44(local_60._4_4_, *pfVar8);
                                    AudioRenderer::RecordDebugValue(iVar3, *pfVar8);
                                    local_3c = (int)((float)local_60 * 32767.0);
                                    local_68[0] = -32768;
                                    local_68[1] = 32767;
                                    iVar3 = math::Clamp<int>(&local_3c, local_68, local_68 + 1);
                                    local_3c = iVar3;
                                    puVar9 = (undefined2*)WrapArray<short>::operator[](local_50, (ulong)uVar15);
                                    *puVar9 = (short)iVar3;
                                    uVar16 = uVar16 + 1;
                                    uVar15 = uVar15 + uVar12;
                                    iVar3 = (int)local_38._0_4_;
                                } while (uVar1 != uVar16);
                            }
                            uVar1 = (int)local_38._0_4_ + 1;
                        } while (uVar1 != uVar12);
                    }
                } else {
                    puVar7 = (undefined*)param_1->end();
                    if (puVar7 == AudioFormat::FLOAT) {
                        iVar3 = (*(code*)param_1->field_0[3])(param_1);
                        if (iVar3 != 0) {
                            pWVar10 = (WrapArray<float>*)0;
                            do {
                                plVar6 =
                                    (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                        (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                uVar12 = (**(code**)(*plVar6 + 72))(plVar6, pWVar10);
                                plVar6 =
                                    (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                        (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                uVar4 = (**(code**)(*plVar6 + 80))(plVar6);
                                local_38 = (WrapArray<float>*)CONCAT44(local_38._4_4_, uVar4);
                                plVar6 =
                                    (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                        (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                this_00 = (WrapArray<float>*)(**(code**)(*plVar6 + 64))(plVar6, pWVar10);
                                uVar15 = 0;
                                uVar1 = uVar2;
                                if ((uint)local_38._0_4_ < uVar12 + uVar2) {
                                    uVar15 = (uVar12 + uVar2) % (uint)local_38._0_4_;
                                    uVar1 = uVar2 - uVar15;
                                }
                                local_50 = (WrapArray<short>*)CONCAT44(local_50._4_4_, uVar15);
                                local_60 = (ulong)uVar12;
                                local_48 = pWVar10;
                                pWVar10 = (WrapArray<float>*)(*(code*)param_1->field_0[8])(param_1);
                                if (uVar1 != 0) {
                                    iVar3 = (int)(float)local_60;
                                    uVar16 = 0;
                                    do {
                                        puVar11 = (undefined4*)WrapArray<float>::operator[](
                                            this_00, (ulong)(uint)(iVar3 + (int)uVar16));
                                        local_38 = (WrapArray<float>*)CONCAT44(local_38._4_4_, *puVar11);
                                        puVar11 = (undefined4*)WrapArray<float>::operator[](pWVar10, uVar16);
                                        *puVar11 = local_38._0_4_;
                                        uVar16 = uVar16 + 1;
                                    } while (uVar1 != uVar16);
                                }
                                if ((int)local_50 != 0) {
                                    uVar14 = (ulong)local_50 & 4294967295;
                                    uVar16 = 0;
                                    do {
                                        puVar11 = (undefined4*)WrapArray<float>::operator[](this_00, uVar16);
                                        local_38 = (WrapArray<float>*)CONCAT44(local_38._4_4_, *puVar11);
                                        puVar11 = (undefined4*)WrapArray<float>::operator[](
                                            pWVar10, (ulong)(uVar1 + (int)uVar16));
                                        *puVar11 = local_38._0_4_;
                                        uVar16 = uVar16 + 1;
                                    } while (uVar14 != uVar16);
                                }
                                uVar12 = (int)local_48 + 1;
                                pWVar10 = (WrapArray<float>*)(ulong)uVar12;
                                uVar1 = (*(code*)param_1->field_0[3])(param_1);
                            } while (uVar12 < uVar1);
                        }
                    } else {
                        puVar7 = (undefined*)param_1->end();
                        if (puVar7 == AudioFormat::FLOAT_INTERLEAVED) {
                            uVar1 = (*(code*)param_1->field_0[3])(param_1);
                            if (uVar1 != 0) {
                                pWVar13 = (WrapArray<short>*)0;
                                do {
                                    local_50 = pWVar13;
                                    plVar6 =
                                        (long*)
                                            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                    uVar12 = (**(code**)(*plVar6 + 72))(plVar6, pWVar13);
                                    plVar6 =
                                        (long*)
                                            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                    uVar5 = (**(code**)(*plVar6 + 80))(plVar6);
                                    plVar6 =
                                        (long*)
                                            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                    pWVar13 = local_50;
                                    pWVar10 = (WrapArray<float>*)(**(code**)(*plVar6 + 64))(plVar6);
                                    local_54 = 0;
                                    uVar15 = uVar2;
                                    if (uVar5 < uVar12 + uVar2) {
                                        local_54 = (uVar12 + uVar2) % uVar5;
                                        uVar15 = uVar2 - local_54;
                                    }
                                    local_38 = (WrapArray<float>*)(*(code*)param_1->field_0[8])(
                                        param_1, (ulong)pWVar13 & 4294967295);
                                    local_60 = CONCAT44(local_60._4_4_, uVar15);
                                    if (uVar15 != 0) {
                                        uVar16 = (ulong)uVar15;
                                        uVar14 = (ulong)local_50 & 4294967295;
                                        do {
                                            puVar11 = (undefined4*)WrapArray<float>::operator[](pWVar10, (ulong)uVar12);
                                            local_48 = (WrapArray<float>*)CONCAT44(local_48._4_4_, *puVar11);
                                            puVar11 = (undefined4*)WrapArray<float>::operator[](local_38, uVar14);
                                            *puVar11 = (uint)local_48;
                                            uVar14 = (ulong)((int)uVar14 + uVar1);
                                            uVar12 = uVar12 + 1;
                                            uVar16 = uVar16 - 1;
                                        } while (uVar16 != 0);
                                    }
                                    if (local_54 != 0) {
                                        uVar14 = (ulong)local_54;
                                        uVar12 = (int)(float)local_60 * uVar1 + (int)local_50;
                                        uVar16 = 0;
                                        do {
                                            puVar11 = (undefined4*)WrapArray<float>::operator[](pWVar10, uVar16);
                                            local_48 = (WrapArray<float>*)CONCAT44(local_48._4_4_, *puVar11);
                                            puVar11 =
                                                (undefined4*)WrapArray<float>::operator[](local_38, (ulong)uVar12);
                                            *puVar11 = (uint)local_48;
                                            uVar16 = uVar16 + 1;
                                            uVar12 = uVar12 + uVar1;
                                        } while (uVar14 != uVar16);
                                    }
                                    uVar12 = (int)local_50 + 1;
                                    pWVar13 = (WrapArray<short>*)(ulong)uVar12;
                                } while (uVar12 != uVar1);
                            }
                        } else {
                            uVar1 = 0;
                            param_1->Reset(32, false);
                            plVar6 = (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                            iVar3 = (**(code**)(*plVar6 + 24))(plVar6);
                            if (iVar3 != 0) {
                                do {
                                    if (uVar2 != 0) {
                                        uVar12 = 0;
                                        do {
                                            plVar6 =
                                                (long*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::
                                                operator->((
                                                    unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                            fVar17 = (float)(**(code**)(*plVar6 + 48))(plVar6, uVar1, uVar12, 1);
                                            local_38 = (WrapArray<float>*)CONCAT44(local_38._4_4_, fVar17);
                                            AudioRenderer::RecordDebugValue(uVar1, fVar17);
                                            param_1->WriteSample(local_38._0_4_, uVar1, uVar12, true);
                                            uVar12 = uVar12 + 1;
                                        } while (uVar2 != uVar12);
                                    }
                                    uVar1 = uVar1 + 1;
                                    plVar6 =
                                        (long*)
                                            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                                                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
                                    uVar12 = (**(code**)(*plVar6 + 24))(plVar6);
                                } while (uVar1 < uVar12);
                            }
                        }
                    }
                }
            }
            uVar1 = (*(code*)param_1->field_0[10])(param_1);
            param_1->WroteSamples(uVar1);
            this_01 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)this_02);
            this_01->ConsumedSamples(uVar2, true);
        }
    }

    // 0x100b8e570, 48 bytes, placed by class name
    // AudioBuss::Service()
    void AudioBuss::Service() {
        if ((&field_64)->operator_cast_to_bool()) {
            field_36 = (float)std::function<float()>::operator()((function<float()>*)&field_64);
        }
    }

    // 0x100ba3720, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&AudioBuss::NullAudioBuss) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5188, &AudioBuss::NullAudioBuss, 4294967296);
    }

} // namespace jag::hal::audio
