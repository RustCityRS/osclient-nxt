// libs/graphics/runetek5/AnimFrameset.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimFrameset {
    public:
        bool IsLoaded() const;
        void GetLastLoadAttempt() const;
        uint8_t* GetFrames() const;
        AnimFrameset(unsigned int arg1, Js5ResourceProvider& js5ResourceProvider,
                     const Js5ArchiveSettings& js5ArchiveSettings1, const Js5ArchiveSettings& js5ArchiveSettings2);
        unsigned long Load();
        ~AnimFrameset();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullAnimFrameset; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint64_t field_0;
        uint8_t m_loaded;
        uint8_t _unknown_9[31];
        unsigned int field_40;
        uint8_t _unknown_44[4];
        Js5ResourceProvider* field_48;
        Js5ArchiveSettings* field_56;
        Js5ArchiveSettings* field_64;
        uint32_t field_72;
        uint8_t _unknown_76[52];
        uint8_t field_128;
    };

    // 0x100995ea0
    AnimFrameset::~AnimFrameset() {
        field_104.~Array();
        field_80.~vector();
        field_16.~Array();
    }

} // namespace jag::graphics
