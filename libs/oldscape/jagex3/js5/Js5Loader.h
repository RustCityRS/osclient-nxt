// libs/oldscape/jagex3/js5/Js5Loader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5Loader {
    public:
        class Js5ForLoader;
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual ~Js5Loader();
        virtual void __pure_slot_3() = 0;
        virtual void __pure_slot_4() = 0;
        virtual GetOrQueueGroupData(Js5ArchiveId, Js5GroupId, Js5RequestParameters const&);
        virtual void __pure_slot_6() = 0;
        virtual void UpdateCacheHint(Js5ArchiveId, Js5GroupId);
        void GetJs5(Js5ArchiveId) const;
        QueueGroupKey(Js5RequestKey const&, Js5RequestParameters const&);
        void PrefetchFile(Js5ArchiveId);
        ulong HasUrgentInProgress();
        Js5Loader();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        undefined1 field_32; // offset 32
        char _unknown_33[7];
    };

    class Js5Loader::Js5ForLoader {
    public:
        // virtual methods in vtable order
        virtual ~Js5ForLoader();
        ulong LoadIndex(PacketJ<Array<unsigned char, eastl::allocator>>&&);
        void SetGroupData(Js5GroupId, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&&);
        void Js5(Js5Loader&, Js5ArchiveId, bool, bool, bool);

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[20];
        undefined4 field_20; // offset 20
        uint field_24;       // offset 24
        undefined4 field_28; // offset 28
        char _unknown_32[32];
    };

    // 0x10018ab50, 32 bytes, inline, placed by class name and debug map
    // Js5Loader::GetJs5(Js5ArchiveId) const
    void Js5Loader::GetJs5(uint param_2) {
        Array<shared_ptr<Js5>, eastl::allocator>::operator[]((Array<shared_ptr<Js5>, eastl::allocator>*)&field_8,
                                                             (ulong)param_2);
    }

    // 0x1002bc7a0, 96 bytes, base-object constructor, inline, placed by class name
    // Js5Loader::Js5Loader()
    void Js5Loader::Js5Loader() {
        allocator local_20[8];

        field_0 = &PTR____cxa_pure_virtual_100efa3a8;
        new (&field_8) Array<shared_ptr<Js5>, eastl::allocator>();
        eastl::allocator::allocator(local_20, "EASTL list_map");
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::list_map(
            (allocator*)&field_32);
    }

    // 0x1002bc830, 48 bytes, base-object destructor, inline, placed by class name
    // Js5Loader::~Js5Loader()
    void Js5Loader::~Js5Loader() {
        field_0 = &PTR____cxa_pure_virtual_100efa3a8;
        (&field_32)->~list_map();
        (&field_8)->~Array();
    }

    // 0x1002e0c50, 48 bytes, inline, placed by class name
    // Js5Loader::Js5ForLoader::Js5(Js5Loader&, Js5ArchiveId, bool, bool, bool)
    void Js5Loader::Js5ForLoader::Js5(undefined8* param_1) {
        jagex3::Js5::Js5();
        *param_1 = PTR_vtable_100ee8a10 + 16;
    }

    // 0x1002e0ca0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5Loader::Js5ForLoader::~Js5ForLoader()
    /* Js5::~Js5() */

    void Js5::~Js5() {
        ~Js5(this);
    }

    // 0x1002e0d60, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5Loader::Js5ForLoader::~Js5ForLoader(): jumps straight to the base-object destructor

    // 0x1002e0d70, 32 bytes, deleting destructor, inline, placed by class name
    // Js5Loader::Js5ForLoader::~Js5ForLoader()
    void Js5Loader::Js5ForLoader::~Js5ForLoader() {
        ~Js5Remote();
        operator_delete(this);
    }

} // namespace jag::oldscape::jagex3
