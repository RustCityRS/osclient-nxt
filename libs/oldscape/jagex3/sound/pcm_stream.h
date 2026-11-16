// libs/oldscape/jagex3/sound/pcm_stream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class PCMPlayerMainThread {
    public:
        // virtual methods in vtable order
        virtual ~PCMPlayerMainThread();
        PCMPlayerMainThread();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class PCMStream {
    public:
        // virtual methods in vtable order
        virtual ~PCMStream();
        PCMStream();
        void MaybeMix(Array<int, eastl::allocator>&, int, int);
        Priority();
        void RemoveFromMixer();

        // data members, from how the methods use this: 64 bytes
        undefined* field_0; // offset 0, vtable pointer
        shared_ptr field_8; // offset 8
        long field_24;      // offset 24
        char _unknown_32[16];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[11];
    };

    // 0x10013d6d0, 112 bytes, base-object constructor, inline, placed by class name and debug map
    // PCMStream::PCMStream()
    void PCMStream::PCMStream() {
        _func_decltype_nullptr* in_RSI;

        new (this) Linkable<PCMStream>();
        field_0 = PTR_vtable_100ee8970 + 16;
        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = 0;
        field_52 = 1;
        new (&field_56, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10013d740, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MixerMainThread::MixerMainThread()
    void MixerMainThread::MixerMainThread() {
        field_0 = PTR_vtable_100ee8950 + 16;
    }

    // 0x10013d7a0, 64 bytes, base-object destructor, inline, placed by class name
    // PCMStream::~PCMStream()
    void PCMStream::~PCMStream() {
        field_0 = PTR_vtable_100ee8970 + 16;
        (&field_56)->~shared_ptr();
        (&field_32)->~shared_ptr();
        ~Linkable();
    }

    // 0x10029f950, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // PCMPlayerMainThread::PCMPlayerMainThread()
    void PCMPlayerMainThread::PCMPlayerMainThread() {
        field_0 = PTR_vtable_100ee8968 + 16;
    }

    // 0x1002a0430, 16 bytes, inline, placed by class name
    // PCMStream::Priority()
    undefined8 PCMStream::Priority() {
        return 255;
    }

} // namespace jag::oldscape::sound
