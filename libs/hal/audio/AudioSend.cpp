// libs/hal/audio/AudioSend.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioSend.h"

namespace jag::hal::audio {
    // 0x100009ca0: AudioSend::GetDestinationBuss() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1001e0d60: AudioSend::~AudioSend() has the same machine code as AudioAPI::~AudioAPI()

    // 0x10037b8d0: AudioSend::Resume() has the same machine code as eastl::Internal::optional_storage<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short>>, false>::optional_storage()

    // 0x100b8fe70
    unsigned int AudioSend::Mix(AudioBuffer* audioBuffer, bool arg2) {
        bool cVar1;
        AudioBuss* pAVar2;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        shared_ptr<AudioBufferHandler>* this_00;
        float fVar3;
        shared_ptr<oldscape::dash3d::Decor> local_48;
        float local_34;

        unsigned int arg1 = 0;
        if (field_40 == '\0') {
            cVar1 = operator_cast_to_bool();
            if (cVar1) {
                cVar1 = field_16->operator_cast_to_bool();
                if (cVar1) {
                    pAVar2 = (AudioBuss*)(*this).operator->();
                    local_34 = (float)pAVar2->GetTotalGainOfChain();
                    fVar3 = (float)field_32->GetGain();
                    local_34 = fVar3 * local_34;
                    field_32->NotifyDebugRegistration(arg2);
                    cVar1 = field_32->IsEncoded();
                    pAVar2 = (AudioBuss*)(*field_16).operator->();
                    if (!cVar1) {
                        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)field_32->GetLogStreams();
                        local_48 = shared_ptr(groundDecor);
                        fVar3 = (float)field_32->GetMainRenderTargetScaleFactor();
                        arg1 = pAVar2->MixFromBufferWithResample(local_48, arg2, local_34, fVar3);
                        this_00 = (shared_ptr<AudioBufferHandler>*)field_32->GetLogStreams();
                        ((AudioBufferHandler*)(*this_00).operator->())->ConsumedSamples(arg1);
                    } else {
                        arg1 = pAVar2->MixFromBuffer(audioBuffer, arg2, local_34);
                        audioBuffer->ConsumedSamples(arg1, true);
                    }
                }
            }
        }
        return arg1;
    }

    // 0x100b90030
    void AudioSend::Free() {
        field_40 = 0;
        reset();
    }

} // namespace jag::hal::audio
