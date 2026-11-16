// libs/js5/caching/Js5MemoryCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.js5

namespace jag {
    class Js5MemoryCache {
    public:
        unsigned int GetCacheSize() const;
        int GetCacheUsageBytes() const;
        Js5MemoryCache(unsigned int arg1, unsigned int arg2);
        uint64_t CheckFile(unsigned int arg1, unsigned int arg2, unsigned int arg3, const Js5Index& js5Index);
        bool GetFile(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2, unsigned int arg3,
                     unsigned int arg4, const Js5Index& js5Index, bool arg6);
        bool GetGroup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2, unsigned int arg3,
                      const Js5Index& js5Index, bool arg5);
        void ProvideGroup(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                          const shared_ptr<PacketT<Array<unsigned char>>>& arg5);
        void Service();
        void DeleteCache();
        void DeleteGroup(unsigned int arg1, unsigned int arg2);
        unsigned int GetKey(unsigned int arg1, unsigned int arg2) const;
        shared_ptr* GetFileInternal(unsigned int arg1, unsigned int arg2, const Js5Index& js5Index);
        void FileLookup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2, unsigned int arg3,
                        unsigned int arg4, const Js5Index& js5Index, bool arg6);
        uint8_t* GroupLookup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2, unsigned int arg3,
                             const Js5Index& js5Index, bool arg5);
        ~Js5MemoryCache();

    private:
        unsigned int m_cacheSize;
        unsigned int field_4;
        CoordMapSquare field_8;
        uint8_t _unknown_20[327940];
    };

    class Js5MemoryCacheWrapper {
    public:
        ~Js5MemoryCacheWrapper();
        Js5MemoryCacheWrapper(unsigned int arg1, unsigned int arg2,
                              const shared_ptr<PacketT<Array<unsigned char>>>& arg3);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            Null; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        unsigned int field_0;
        unsigned int field_4;
        uint8_t _unknown_8[8];
    };

    // 0x103bc2168, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Js5MemoryCacheWrapper::Null =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1008a6c90
    int Js5MemoryCache::GetCacheUsageBytes() const {
        unsigned int uVar1 = m_cacheSize;
        int iVar2 = field_8->GetZ();
        return uVar1 - iVar2;
    }

    // 0x1009e55b0
    bool Js5MemoryCache::GetFile(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2, unsigned int arg3,
                                 unsigned int arg4, const Js5Index& js5Index, bool arg6) {
        uint8_t* extraout_RAX;
        uint32_t in_register_00000084;

        FileLookup((shared_ptr<PacketT<Array<unsigned char> _> _>*)this, (unsigned int)arg1, arg2, arg3,
                   (Js5Index*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4), (uint8_t)js5Index);
        return extraout_RAX == DataStatus::READY;
    }

    // 0x1009e5890
    bool Js5MemoryCache::GetGroup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2, unsigned int arg3,
                                  const Js5Index& js5Index, bool arg5) {
        return (uint8_t*)GroupLookup(arg1, arg2, arg3, js5Index, arg5) == DataStatus::READY;
    }

    // 0x1009e83f0
    void Js5MemoryCache::Service() {
        field_8->Clean((unsigned long)field_4);
    }

    // 0x1009e85f0
    void Js5MemoryCache::DeleteCache() {
        field_8->Reset();
    }

    // 0x1009e8b60
    void Js5MemoryCache::DeleteGroup(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar1 = GetKey(arg1, arg2);
        field_8->Remove((unsigned long)uVar1);
    }

    // 0x1009ef530
    unsigned int Js5MemoryCache::GetKey(unsigned int arg1, unsigned int arg2) const {
        return arg2 << 8 | arg1;
    }

    // 0x100a009e0
    Js5MemoryCache::~Js5MemoryCache() {
        field_8->~LRUHashCache();
    }

    // 0x100a06360
    Js5MemoryCacheWrapper::Js5MemoryCacheWrapper(unsigned int arg1, unsigned int arg2,
                                                 const shared_ptr<PacketT<Array<unsigned char>>>& arg3)
        : field_0(arg1), field_4(arg2), field_8(arg3) {}

} // namespace jag
