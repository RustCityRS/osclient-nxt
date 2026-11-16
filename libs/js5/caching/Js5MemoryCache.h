// libs/js5/caching/Js5MemoryCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.js5

namespace jag {
    class Js5MemoryCache {
    public:
        uint GetCacheSize() const;
        int GetCacheUsageBytes() const;
        Js5MemoryCache(unsigned int, unsigned int);
        CheckFile(unsigned int, unsigned int, unsigned int, Js5Index const&);
        bool GetFile(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, unsigned int, unsigned int,
                     unsigned int, Js5Index const&, bool);
        bool GetGroup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, unsigned int, unsigned int,
                      Js5Index const&, bool);
        void ProvideGroup(unsigned int, unsigned int, unsigned int, unsigned int,
                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&);
        void Service();
        void DeleteCache();
        void DeleteGroup(unsigned int, unsigned int);
        uint GetKey(unsigned int, unsigned int) const;
        shared_ptr* GetFileInternal(unsigned int, unsigned int, Js5Index const&);
        FileLookup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, unsigned int, unsigned int,
                   unsigned int, Js5Index const&, bool);
        GroupLookup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, unsigned int, unsigned int,
                    Js5Index const&, bool);
        ~Js5MemoryCache();

        // data members, from how the methods use this: 327960 bytes
        uint m_cacheSize;       // offset 0
        uint field_4;           // offset 4
        CoordMapSquare field_8; // offset 8
        char _unknown_20[327940];
    };

    class Js5MemoryCacheWrapper {
    public:
        ~Js5MemoryCacheWrapper();
        Js5MemoryCacheWrapper(unsigned int, unsigned int,
                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ Null;

        // data members, from how the methods use this: 16 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        char _unknown_8[8];
    };

    // 0x103bc2168, 16 bytes, __common; set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Js5MemoryCacheWrapper::Null;

    // 0x1008a6c90, 32 bytes, inline, placed by class name and debug map
    // Js5MemoryCache::GetCacheUsageBytes() const
    int Js5MemoryCache::GetCacheUsageBytes() {
        uint uVar1;
        int iVar2;

        uVar1 = m_cacheSize;
        iVar2 = field_8->GetZ();
        return uVar1 - iVar2;
    }

    // 0x1009e55b0, 48 bytes, inline, placed by class name
    // Js5MemoryCache::GetFile(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, unsigned int, unsigned int, unsigned int, Js5Index const&, bool)
    bool Js5MemoryCache::GetFile(shared_ptr* param_1, uint param_2, uint param_3, uint param_4, Js5Index* param_5,
                                 bool param_6) {
        return (undefined*)FileLookup(this, param_1, param_2, param_3, param_4, param_5, param_6) == DataStatus::READY;
    }

    // 0x1009e5890, 32 bytes, inline, placed by class name
    // Js5MemoryCache::GetGroup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, unsigned int, unsigned int, Js5Index const&, bool)
    bool Js5MemoryCache::GetGroup(shared_ptr* param_1, uint param_2, uint param_3, Js5Index* param_4, bool param_5) {
        return (undefined*)GroupLookup(this, param_1, param_2, param_3, param_4, param_5) == DataStatus::READY;
    }

    // 0x1009e83f0, 32 bytes, inline, placed by class name
    // Js5MemoryCache::Service()
    void Js5MemoryCache::Service() {
        (field_8, (ulong)field_4)->Clean();
    }

    // 0x1009e85f0, 16 bytes, inline, placed by class name
    // Js5MemoryCache::DeleteCache()
    void Js5MemoryCache::DeleteCache() {
        field_8->Reset();
    }

    // 0x1009e8b60, 48 bytes, inline, placed by class name
    // Js5MemoryCache::DeleteGroup(unsigned int, unsigned int)
    void Js5MemoryCache::DeleteGroup(uint param_1, uint param_2) {
        GetKey(this, param_1, param_2);
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Remove((ulonglong*)field_8);
    }

    // 0x1009ef530, 16 bytes, inline, placed by class name
    // Js5MemoryCache::GetKey(unsigned int, unsigned int) const
    uint Js5MemoryCache::GetKey(uint param_1, uint param_2) {
        return param_2 << 8 | param_1;
    }

    // 0x100a009d0, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5MemoryCache::~Js5MemoryCache(): jumps straight to the base-object destructor

    // 0x100a009e0, 16 bytes, base-object destructor, inline, placed by class name
    // Js5MemoryCache::~Js5MemoryCache()
    void Js5MemoryCache::~Js5MemoryCache() {
        field_8->~LRUHashCache();
    }

    // 0x100a06350, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Js5MemoryCacheWrapper::Js5MemoryCacheWrapper(unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&): jumps straight to the base-object constructor

    // 0x100a06360, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // Js5MemoryCacheWrapper::Js5MemoryCacheWrapper(unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&)
    void Js5MemoryCacheWrapper::Js5MemoryCacheWrapper(uint param_1, uint param_2, shared_ptr* param_3) {
        field_0 = param_1;
        field_4 = param_2;
        new (&field_8, param_3) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x100a0b8a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Js5MemoryCacheWrapper::Null) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5170, &Js5MemoryCacheWrapper::Null, 4294967296);
    }

} // namespace jag
