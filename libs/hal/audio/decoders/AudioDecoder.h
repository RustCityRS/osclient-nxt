// libs/hal/audio/decoders/AudioDecoder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::hal::audio::decoders {
    class AudioDecoder {
    public:
        // virtual methods in vtable order
        virtual ~AudioDecoder();
        AudioDecoder();
    };

    // 0x100009e70: AudioDecoder::~AudioDecoder() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100b90f30
    AudioDecoder::AudioDecoder() {}

} // namespace jag::hal::audio::decoders

namespace jag {
    // 0x100b90fe0
    shared_ptr_if_not_array<VorbisWorker>::type make_shared<VorbisWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VorbisWorker* local_28[2];

        auto arg1 = aligned_alloc(912, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<VorbisWorker>::type result;
        } else {
            local_28[0] = placement_new<VorbisWorker>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<VorbisWorker>, int, VorbisWorker*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::hal::audio::decoders::vorbis {
    // 0x100b913a0
    void VorbisDecoderPacket::PacketT(unsigned long arg1) {
        PacketT(arg1);
    }

} // namespace jag::hal::audio::decoders::vorbis
