// projects/osclient/OldscapeJs5ResourceProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::js5 {
    class OldscapeJs5ResourceProvider {
    public:
        // virtual methods in vtable order
        virtual ~OldscapeJs5ResourceProvider();
        virtual void IndexReady(const Js5ArchiveSettings& js5ArchiveSettings);
        virtual void GetIndex(Js5Index** arg1, const Js5ArchiveSettings& js5ArchiveSettings);
        virtual uint8_t* GetIndex(const Js5Index** arg1, const Js5ArchiveSettings& js5ArchiveSettings);
        virtual void GetMasterIndex(const Js5MasterIndex** arg1) const;
        virtual void FileReady(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2, unsigned int arg3,
                               const Priority* priority, bool arg5);
        virtual void GroupPreloaded(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2, bool arg3,
                                    bool& arg4);
        virtual void EnsureArchiveLoadedIfAvailableOnDisk(const Js5ArchiveSettings& js5ArchiveSettings);
        OldscapeJs5ResourceProvider(SystemSettings* systemSettings, jagex3::Js5Loader& js5Loader);

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[16];
        uint64_t field_40;
        uint8_t _unknown_48[32];
        Js5ArchiveSetSettings* field_80;
        uint8_t _unknown_88[16];
        BigInteger* field_104;
        BigInteger* field_112;
        uint8_t field_120;
        uint8_t _unknown_121[7];
        Array<eastl::string>* field_128;
        Array<std::unique_ptr<Js5LocalModeLoader>>* field_136;
        Js5MemoryCache* field_144;
        Js5DiskCache* field_152;
        uint8_t _unknown_160[11184];
        uint8_t field_11344;
        uint8_t _unknown_11345[3];
        uint64_t field_11348;
        uint64_t field_11356;
        uint8_t field_11364;
        uint8_t _unknown_11365[11];
        uint8_t field_11376;
        bool field_11377;
        uint8_t _unknown_11378[54958];
        bool field_66336;
        uint8_t _unknown_66337[7];
        SystemSettings* field_66344;
        Js5Loader* field_66352;
        uint8_t _unknown_66360[8];
    };

    // 0x1001a3d10
    OldscapeJs5ResourceProvider::~OldscapeJs5ResourceProvider() {
        field_66360.~Array();
    }

} // namespace jag::oldscape::js5
