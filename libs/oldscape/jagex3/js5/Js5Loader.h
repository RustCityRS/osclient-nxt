// libs/oldscape/jagex3/js5/Js5Loader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        virtual uint8_t* GetOrQueueGroupData(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId,
                                             const Js5RequestParameters& js5RequestParameters);
        virtual void __pure_slot_6() = 0;
        virtual void UpdateCacheHint(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId);
        void GetJs5(Js5ArchiveId js5ArchiveId) const;
        uint8_t* QueueGroupKey(const Js5RequestKey& js5RequestKey, const Js5RequestParameters& js5RequestParameters);
        void PrefetchFile(Js5ArchiveId js5ArchiveId);
        bool HasUrgentInProgress();
        Js5Loader();

    private:
        uint8_t _unknown_8[24];
        Js5RequestKey field_32;
    };

    class Js5Loader::Js5ForLoader {
    public:
        // virtual methods in vtable order
        virtual ~Js5ForLoader();
        unsigned long LoadIndex(PacketJ<Array<unsigned char>>&& packetJ);
        void SetGroupData(Js5GroupId js5GroupId, shared_ptr<PacketJ<Array<unsigned char>>>&& packetJ);
        void Js5(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4, bool arg5);

    private:
        Js5Loader* field_8;
        Js5ArchiveId field_16;
        uint32_t field_20;
        unsigned int field_24;
        uint32_t field_28;
        uint8_t _unknown_32[64];
        bool field_96;
        bool field_97;
        bool field_98;
    };

    // 0x10018ab50
    void Js5Loader::GetJs5(Js5ArchiveId js5ArchiveId) const {
        field_8[(unsigned long)js5ArchiveId];
    }

    // 0x1002bc7a0
    Js5Loader::Js5Loader() {

        new (&field_8) Array<shared_ptr<Js5>>();
        new (field_32) eastl::list_map<Js5RequestKey, Js5RequestParameters>(local_20);
    }

    // 0x1002bc830
    Js5Loader::~Js5Loader() {
        field_32->~list_map();
        field_8.~Array();
    }

    // 0x1002e0c50
    void Js5Loader::Js5ForLoader::Js5(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4,
                                      bool arg5) {
        new (this) jagex3::Js5(js5Loader, js5ArchiveId, arg3, arg4, arg5);
        this->_vptr = (Js5ForLoader_vtbl*)(PTR_vtable_100ee8a10 + 16);
    }

    // 0x1002e0ca0
    Js5Loader::Js5ForLoader::~Js5ForLoader() {
        ~Js5(this);
    }

} // namespace jag::oldscape::jagex3
