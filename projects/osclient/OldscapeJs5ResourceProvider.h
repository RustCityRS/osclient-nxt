// projects/osclient/OldscapeJs5ResourceProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::js5 {
    class OldscapeJs5ResourceProvider {
    public:
        // virtual methods in vtable order
        virtual ~OldscapeJs5ResourceProvider();
        virtual void IndexReady(Js5ArchiveSettings const&);
        virtual void GetIndex(Js5Index**, Js5ArchiveSettings const&);
        virtual GetIndex(Js5Index const**, Js5ArchiveSettings const&);
        virtual void GetMasterIndex(Js5MasterIndex const**) const;
        virtual void FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool);
        virtual void GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&);
        virtual void EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&);
        OldscapeJs5ResourceProvider(SystemSettings*, jagex3::Js5Loader&);

        // data members, from how the methods use this: 66368 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[16];
        undefined8 field_40; // offset 40
        char _unknown_48[32];
        Js5ArchiveSetSettings* field_80; // offset 80
        char _unknown_88[16];
        BigInteger* field_104; // offset 104
        BigInteger* field_112; // offset 112
        undefined1 field_120;  // offset 120
        char _unknown_121[7];
        Array<eastl::string, eastl::allocator>* field_128; // offset 128
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>*
            field_136;             // offset 136
        Js5MemoryCache* field_144; // offset 144
        Js5DiskCache* field_152;   // offset 152
        char _unknown_160[11184];
        undefined1 field_11344; // offset 11344
        char _unknown_11345[3];
        undefined8 field_11348; // offset 11348
        undefined8 field_11356; // offset 11356
        undefined1 field_11364; // offset 11364
        char _unknown_11365[11];
        undefined1 field_11376; // offset 11376
        bool field_11377;       // offset 11377
        char _unknown_11378[54958];
        bool field_66336; // offset 66336
        char _unknown_66337[7];
        SystemSettings* field_66344; // offset 66344
        Js5Loader* field_66352;      // offset 66352
        char _unknown_66360[8];
    };

    // 0x100196060, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // OldscapeJs5ResourceProvider::~OldscapeJs5ResourceProvider(): jumps straight to the base-object destructor

    // 0x100196070, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // OldscapeJs5ResourceProvider::~OldscapeJs5ResourceProvider()
    void OldscapeJs5ResourceProvider::~OldscapeJs5ResourceProvider() {
        ~OldscapeJs5ResourceProvider(this);
        operator_delete(this);
    }

    // 0x1001a3d10, 48 bytes, base-object destructor, inline, placed by class name
    // OldscapeJs5ResourceProvider::~OldscapeJs5ResourceProvider()
    void OldscapeJs5ResourceProvider::~OldscapeJs5ResourceProvider() {
        field_0 = &PTR__OldscapeJs5ResourceProvider_100ef5cb8;
        (&field_66360)->~Array();
        ~Js5ResourceProvider();
    }

} // namespace jag::oldscape::js5
