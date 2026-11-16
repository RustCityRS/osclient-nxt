// libs/game/runetek5/audio/resources/VorbisJs5Resource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class VorbisJs5Resource {
    public:
        // virtual methods in vtable order
        virtual ~VorbisJs5Resource();
        virtual void SetData(void*, int, hal::audio::AudioFormat const*);
        virtual void Update(float);
        virtual IsReady() const;
        virtual HasFailed() const;
        virtual GetResource() const;
        virtual uint GetResourceByteLength() const;
        virtual AudioFormat* GetFormat() const;
        virtual void Size() const;
        virtual uint GetID() const;
        VorbisJs5Resource(hal::audio::AudioAPI*);
        bool IsUsablePrematurely() const;
        void DecodeCallback(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 121 bytes
        undefined** field_0;   // offset 0, vtable pointer
        SoundResource field_8; // offset 8
        char _unknown_9[7];
        AudioAPI* field_16; // offset 16
        int field_24;       // offset 24
        char _unknown_28[20];
        AudioFormat* m_pFormat; // offset 48
        void* m_pData;          // offset 56
        uint m_iD;              // offset 64
        int field_68;           // offset 68
        uint field_72;          // offset 72
        char _unknown_76[4];
        AudioDecoder* field_80; // offset 80
        char _unknown_88[4];
        int field_92; // offset 92
        int field_96; // offset 96
        char _unknown_100[20];
        undefined1 field_120; // offset 120
    };

    // 0x1006699b0, 32 bytes, inline, placed by class name and debug map
    // VorbisJs5Resource::HasFailed() const
    undefined4 VorbisJs5Resource::HasFailed() {
        uint uVar1;

        uVar1 = field_24 & 4294967294;
        return CONCAT31((int3)(uVar1 >> 8), uVar1 == 2);
    }

    // 0x1006699d0, 16 bytes, inline, placed by class name and debug map
    // VorbisJs5Resource::Size() const
    void VorbisJs5Resource::Size() {
        (*(code*)field_0[7])();
    }

    // 0x1006708f0, 16 bytes, inline, placed by class name
    // VorbisJs5Resource::Update(float)::$_5::operator()(PacketT<Array<unsigned char, eastl::allocator> >&) const
    /* VorbisJs5Resource::Update(float)::$_5::TEMPNAMEPLACEHOLDERVALUE(PacketT<Array<unsigned
   char, eastl::allocator> >&) const */

    void VorbisJs5Resource::Update(float)::$_5::operator()(PacketT* param_1) {
        DecodeCallback(*(VorbisJs5Resource**)this, param_1);
    }

} // namespace jag

namespace jag::game {
    // 0x10066a090, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimatedModelPair::AnimatedModelPair()
    void AnimatedModelPair::AnimatedModelPair() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::game
