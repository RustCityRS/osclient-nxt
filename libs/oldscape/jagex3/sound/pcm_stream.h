// libs/oldscape/jagex3/sound/pcm_stream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class PCMPlayerMainThread {
    public:
        // virtual methods in vtable order
        virtual ~PCMPlayerMainThread();
        PCMPlayerMainThread();
    };

    class PCMStream {
    public:
        // virtual methods in vtable order
        virtual ~PCMStream();
        PCMStream();
        void MaybeMix(Array<int>& arg1, int arg2, int arg3);
        void Priority();
        void RemoveFromMixer();

    private:
        uint8_t _unknown_8[16];
        long field_24;
        uint8_t _unknown_32[16];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[11];
    };

    // 0x10013d6d0
    PCMStream::PCMStream() : Linkable<PCMStream>() {
        new (&field_32) shared_ptr();
        field_48 = 0;
        field_52 = 1;
        new (&field_56) shared_ptr();
    }

    // 0x10013d740
    MixerMainThread::MixerMainThread() {
        field_0 = PTR_vtable_100ee8950 + 16;
    }

    // 0x10013d7a0
    PCMStream::~PCMStream() {
        field_56.~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x10029f950
    PCMPlayerMainThread::PCMPlayerMainThread() {}

    // 0x1002a0430
    void PCMStream::Priority() {
        return 255;
    }

} // namespace jag::oldscape::sound
