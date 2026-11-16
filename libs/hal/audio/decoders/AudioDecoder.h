// libs/hal/audio/decoders/AudioDecoder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::hal::audio::decoders {
    class AudioDecoder {
    public:
        // virtual methods in vtable order
        virtual ~AudioDecoder();
        AudioDecoder();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AudioDecoder::~AudioDecoder();

    // 0x100b90f30, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // AudioDecoder::AudioDecoder()
    void AudioDecoder::AudioDecoder() {
        field_0 = PTR_vtable_100ee7dc0 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AudioDecoder::~AudioDecoder();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AudioDecoder::~AudioDecoder();

} // namespace jag::hal::audio::decoders

namespace jag {
    // 0x100b90fe0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<VorbisWorker>::type make_shared<VorbisWorker>()
    jag* make_shared<VorbisWorker>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        VorbisWorker* local_28[2];

        pvVar1 = (void*)aligned_alloc(912, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<VorbisWorker>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<VorbisWorker>, int, VorbisWorker*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::hal::audio::decoders::vorbis {
    // 0x100b913a0, 16 bytes, inline, placed by debug map only (low confidence)
    // VorbisDecoderPacket::PacketT(unsigned long)
    void VorbisDecoderPacket::PacketT(ulong param_1) {
        PacketT(this, param_1);
    }

} // namespace jag::hal::audio::decoders::vorbis
