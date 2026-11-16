// libs/hal/audio/AudioSend.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioSend.h"

namespace jag::hal::audio {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AudioSend::GetDestinationBuss() const;

    // 0x1001e0d50: the linker folded this into AudioAPI::~AudioAPI(), which has identical code
    AudioSend::~AudioSend();

    // 0x1001e0d60: the linker folded this into AudioAPI::~AudioAPI(), which has identical code
    AudioSend::~AudioSend();

    // 0x10037b8d0: the linker folded this into eastl::Internal::optional_storage<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short, eastl::allocator> >, false>::optional_storage(), which has identical code
    AudioSend::Resume();

    // 0x100b8fe70, 336 bytes, placed by class name and debug map
    // AudioSend::Mix(AudioBuffer*, bool)
    uint AudioSend::Mix(AudioBuffer* param_1, bool param_2) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        AudioBuss* pAVar4;
        shared_ptr* psVar5;
        shared_ptr<AudioBufferHandler>* this_00;
        AudioBufferHandler* this_01;
        float fVar6;
        shared_ptr local_48;
        float local_34;

        uVar3 = 0;
        if (field_40 == '\0') {
            bVar1 = operator_cast_to_bool();
            if (bVar1) {
                bVar1 = field_16->operator_cast_to_bool();
                if (bVar1) {
                    pAVar4 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)this);
                    local_34 = (float)pAVar4->GetTotalGainOfChain();
                    fVar6 = (float)field_32->GetGain();
                    local_34 = fVar6 * local_34;
                    (field_32, param_2)->NotifyDebugRegistration();
                    cVar2 = field_32->IsEncoded();
                    pAVar4 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)field_16);
                    if (cVar2 == '\0') {
                        psVar5 = (shared_ptr*)field_32->GetLogStreams();
                        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(psVar5);
                        fVar6 = (float)field_32->GetMainRenderTargetScaleFactor();
                        uVar3 = pAVar4->MixFromBufferWithResample(&local_48, param_2, local_34, fVar6);
                        local_48.~shared_ptr();
                        this_00 = (shared_ptr<AudioBufferHandler>*)field_32->GetLogStreams();
                        this_01 = (AudioBufferHandler*)shared_ptr<AudioBufferHandler>::operator->(this_00);
                        this_01->ConsumedSamples(uVar3);
                    } else {
                        uVar3 = pAVar4->MixFromBuffer(param_1, param_2, local_34);
                        param_1->ConsumedSamples(uVar3, true);
                    }
                }
            }
        }
        return uVar3;
    }

    // 0x100b90030, 16 bytes, placed by class name
    // AudioSend::Free()
    void AudioSend::Free() {
        field_40 = 0;
        shared_ptr<AudioBuss>::reset();
    }

} // namespace jag::hal::audio
