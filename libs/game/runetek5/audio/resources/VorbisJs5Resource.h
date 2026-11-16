// libs/game/runetek5/audio/resources/VorbisJs5Resource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class VorbisJs5Resource {
    public:
        // virtual methods in vtable order
        virtual ~VorbisJs5Resource();
        virtual void SetData(void* arg1, int arg2, const hal::audio::AudioFormat* audioFormat);
        virtual void Update(float arg1);
        virtual bool IsReady() const;
        virtual bool HasFailed() const;
        virtual uint8_t* GetResource() const;
        virtual unsigned int GetResourceByteLength() const;
        virtual AudioFormat* GetFormat() const;
        virtual void Size() const;
        virtual unsigned int GetID() const;
        VorbisJs5Resource(hal::audio::AudioAPI* audioAPI);
        bool IsUsablePrematurely() const;
        void DecodeCallback(PacketT<Array<unsigned char>>& arg1);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[7];
        AudioAPI* field_16;
        int field_24;
        uint8_t _unknown_28[20];
        AudioFormat* m_pFormat;
        void* field_56;
        unsigned int m_iD;
        int field_68;
        unsigned int field_72;
        uint8_t _unknown_76[4];
        AudioDecoder* field_80;
        uint8_t _unknown_88[4];
        int field_92;
        int field_96;
        uint8_t _unknown_100[20];
        uint8_t field_120;
    };

    // 0x1006699b0
    bool VorbisJs5Resource::HasFailed() const {
        return field_24 & 4294967294 == 2;
    }

    // 0x1006699d0
    void VorbisJs5Resource::Size() const {
        GetResourceByteLength();
    }

    // 0x1006708f0
    void VorbisJs5Resource::Update(float)::$_5::operator()(PacketT<Array<unsigned char>>& arg1) const {
        DecodeCallback(field_0, arg1);
    }

} // namespace jag

namespace jag::game {
    // 0x10066a090
    AnimatedModelPair::AnimatedModelPair() : shared_ptr() {
        new (&field_16) shared_ptr();
    }

} // namespace jag::game
