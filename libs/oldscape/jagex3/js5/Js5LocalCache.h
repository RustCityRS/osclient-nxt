// libs/oldscape/jagex3/js5/Js5LocalCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5LocalCache {
    public:
        class BufferedRandomAccessFile;
        class DataFile;
        class IndexFile;
        int Initialize(Filename const&);
        ulong InitializeArchive(Js5ArchiveId);
        EnqueueRequestFromMainThread(Js5RemoteRequestData*);
        void QueueToWorker(Js5RemoteRequestData*);
        BlockingFetchFromMainThread(Js5RemoteRequestData*);
        void InvalidateFromMainThread(Js5RequestKey const&);
        void MainLogic();
        void FlushIndices();
        void ProvideDataFromNetThread(Js5RemoteRequestData*);
        void Run();
        QueueFlushToDisk();
        void EndAndJoin();
        ~Js5LocalCache();
        Js5LocalCache(LockFreeStack<Js5RemoteRequestData>&);

        // data members, from how the methods use this: 9864 bytes
        undefined8 field_0; // offset 0
        Filename field_8;   // offset 8
        char _unknown_24[288];
        IndexFile field_312; // offset 312
        char _unknown_665[8167];
        DataFile field_8832;       // offset 8832
        LockFreeStack* field_9560; // offset 9560
        char _unknown_9568[16];
        Fence field_9584; // offset 9584
        char _unknown_9697[15];
        undefined8 field_9712; // offset 9712
        char _unknown_9720[16];
        undefined4 field_9736; // offset 9736
        char _unknown_9740[28];
        undefined8 field_9768; // offset 9768
        undefined8 field_9776; // offset 9776
        char _unknown_9784[8];
        undefined8 field_9792; // offset 9792
        char _unknown_9800[16];
        undefined4 field_9816; // offset 9816
        char _unknown_9820[28];
        undefined1 field_9848; // offset 9848
        char _unknown_9849[7];
        undefined8 field_9856; // offset 9856
    };

    class Js5LocalCache::BufferedRandomAccessFile {
    public:
        uint Open(Filename const&, int, unsigned int, unsigned int);
        void IsOpen() const;
        ulong Read(unsigned char*, unsigned int, unsigned int);
        Write(unsigned char const*, unsigned int, unsigned int);
        void InvalidateBuffers();
        GetSize();
        void FlushToDisk();
        BufferAll();
        void Close();
        ~BufferedRandomAccessFile();
        BufferedRandomAccessFile();
        BufferedRandomAccessFile(BufferedRandomAccessFile&&);

        // data members, from how the methods use this: 356 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        Filename field_8; // offset 8
        char _unknown_24[288];
        uint field_312; // offset 312
        uint field_316; // offset 316
        char _unknown_320[24];
        uint field_344;       // offset 344
        uint field_348;       // offset 348
        undefined1 field_352; // offset 352
        char _unknown_353[3];
    };

    class Js5LocalCache::DataFile {
    public:
        class BlockHeader;
        int Initialize(Filename const&);
        FetchDataFromMainThread(Js5RemoteRequestData*);
        void InvalidateMainThreadReadBuffers();
        void FlushForWorkerThread();
        void WriteDataForWorkerThread(Js5RemoteRequestData*);
        void FetchDataForWorkerThread(Js5RemoteRequestData*);
        ulong ReadFromFile(BufferedRandomAccessFile&, Js5RemoteRequestData*);
        void WriteToFile(Js5RemoteRequestData*);
        void ReadBlockHeader(BlockHeader&, BufferedRandomAccessFile&, unsigned int);
        void WriteBlockHeader(BlockHeader const&, BufferedRandomAccessFile&, unsigned int);
        ~DataFile();
        DataFile();

        // data members, from how the methods use this: 728 bytes
        char _unknown_0[312];
        uint field_312; // offset 312
        uint field_316; // offset 316
        char _unknown_320[24];
        undefined8 field_344; // offset 344
        undefined1 field_352; // offset 352
        char _unknown_353[7];
        BufferedRandomAccessFile field_360; // offset 360
        char _unknown_716[4];
        uint field_720; // offset 720
        char _unknown_724[4];
    };

    class Js5LocalCache::DataFile::BlockHeader {
    public:
        Matches(BlockHeader const&) const;

        // data members, from how the methods use this: 20 bytes
        int field_0;   // offset 0
        short field_4; // offset 4
        char _unknown_6[6];
        int field_12; // offset 12
        char _unknown_16[4];
    };

    class Js5LocalCache::IndexFile {
    public:
        Initialize(Js5ArchiveId, Filename const&);
        GetEntry(IndexEntry&, Js5GroupId);
        Update(Js5RemoteRequestData*);
        void FlushToDisk();
        void IsOpen() const;
        IndexFile(IndexFile&&);
        ~IndexFile();
        IndexFile();

        // data members, from how the methods use this: 353 bytes
        char _unknown_0[312];
        uint field_312; // offset 312
        uint field_316; // offset 316
        char _unknown_320[24];
        uint field_344;       // offset 344
        uint field_348;       // offset 348
        undefined1 field_352; // offset 352
    };

    // 0x1002b9800, 16 bytes, inline, placed by class name and debug map
    // Js5LocalCache::IndexFile::FlushToDisk()
    void Js5LocalCache::IndexFile::FlushToDisk() {
        FlushToDisk();
    }

    // 0x1002b9830, 16 bytes, inline, placed by class name and debug map
    // Js5LocalCache::IndexFile::IsOpen() const
    void Js5LocalCache::IndexFile::IsOpen() {
        IsOpen();
    }

    // 0x1002dfd20, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalCache::IndexFile::IndexFile(Js5LocalCache::IndexFile&&): jumps straight to the base-object constructor

    // 0x1002dfd70, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5LocalCache::IndexFile::~IndexFile(): jumps straight to the base-object destructor

    // 0x1002dfd80, 16 bytes, base-object destructor, inline, placed by class name
    // Js5LocalCache::IndexFile::~IndexFile()
    void Js5LocalCache::IndexFile::~IndexFile() {
        ~BufferedRandomAccessFile();
    }

    // 0x1002dfd90, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::~BufferedRandomAccessFile(): jumps straight to the base-object destructor

    // 0x1002dfda0, 48 bytes, base-object destructor, inline, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::~BufferedRandomAccessFile()
    void Js5LocalCache::BufferedRandomAccessFile::~BufferedRandomAccessFile() {
        (&field_320)->~Array();
        ~File();
    }

    // 0x1002dfdd0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalCache::IndexFile::IndexFile(): jumps straight to the base-object constructor

    // 0x1002dfde0, 16 bytes, base-object constructor, inline, placed by class name
    // Js5LocalCache::IndexFile::IndexFile()
    void Js5LocalCache::IndexFile::IndexFile() {
        new (this) BufferedRandomAccessFile();
    }

    // 0x1002dfdf0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile(): jumps straight to the base-object constructor

    // 0x1002dfe00, 64 bytes, base-object constructor, inline, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile()
    void Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile() {
        new (this) File();
        new (&field_320) Array<unsigned char, eastl::allocator>();
    }

    // 0x1002dfe70, 16 bytes, base-object constructor, inline, placed by class name
    // Js5LocalCache::IndexFile::IndexFile(Js5LocalCache::IndexFile&&)
    void Js5LocalCache::IndexFile::IndexFile(IndexFile* param_1) {
        new (this) BufferedRandomAccessFile(param_1);
    }

    // 0x1002dfe80, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile(Js5LocalCache::BufferedRandomAccessFile&&): jumps straight to the base-object constructor

    // 0x1002dfe90, 96 bytes, base-object constructor, inline, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile(Js5LocalCache::BufferedRandomAccessFile&&)
    void Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile(BufferedRandomAccessFile* param_1) {
        uint uVar1;

        new (this) File(param_1);
        uVar1 = param_1->field_316;
        field_312 = param_1->field_312;
        field_316 = uVar1;
        new (&field_320, (Array*)&param_1->field_320) Array<unsigned char, eastl::allocator>();
        field_352 = param_1->field_352;
        uVar1 = param_1->field_348;
        field_344 = param_1->field_344;
        field_348 = uVar1;
    }

    // 0x1002e2170, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5LocalCache::~Js5LocalCache(): jumps straight to the base-object destructor

    // 0x1002e2180, 128 bytes, base-object destructor, inline, placed by class name
    // Js5LocalCache::~Js5LocalCache()
    void Js5LocalCache::~Js5LocalCache() {
        (&field_9784)->~QueueRequestItem();
        (&field_9704)->~QueueRequestItem();
        field_9584->~Fence();
        field_8832->~DataFile();
        (&field_696)->~fixed_hash_map();
        (&field_672)->~Array();
        field_312->~IndexFile();
        field_8->~pair();
        ~thread();
    }

    // 0x1002e2200, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5LocalCache::DataFile::~DataFile(): jumps straight to the base-object destructor

    // 0x1002e2230, 48 bytes, base-object destructor, inline, placed by class name
    // Js5LocalCache::DataFile::~DataFile()
    void Js5LocalCache::DataFile::~DataFile() {
        field_360->~BufferedRandomAccessFile();
        ~BufferedRandomAccessFile();
    }

    // 0x1002e2370, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalCache::Js5LocalCache(LockFreeStack<Js5RemoteRequestData>&): jumps straight to the base-object constructor

    // 0x1002e2390, 336 bytes, base-object constructor, inline, placed by class name
    // Js5LocalCache::Js5LocalCache(LockFreeStack<Js5RemoteRequestData>&)
    void Js5LocalCache::Js5LocalCache(LockFreeStack* param_1) {
        hash local_48[8];
        equal_to local_40[16];

        new (this) std::thread();
        new (field_8) Filename();
        new (field_312) IndexFile();
        new (&field_672) Array<Js5LocalCache::IndexFile, eastl::allocator>();
        new (&field_696, local_48, local_40)
            eastl::fixed_hash_set<Js5RequestKey, 200ul, 600ul, true, eastl::hash<Js5RequestKey>,
                                  eastl::equal_to<Js5RequestKey>, false, eastl::allocator>();
        new (field_8832) DataFile();
        field_9560 = param_1;
        new (&field_9568) LockFreeStack<Js5RemoteRequestData>();
        new (&field_9576) LockFreeStack<Js5RemoteRequestData>();
        new (field_9584, false) ThreadSignal();
        new (&field_9704) Js5RemoteRequestData();
        new (&field_9784) Js5RemoteRequestData();
    }

    // 0x1002e2500, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalCache::DataFile::DataFile(): jumps straight to the base-object constructor

    // 0x1002e2770, 64 bytes, base-object constructor, inline, placed by class name
    // Js5LocalCache::DataFile::DataFile()
    void Js5LocalCache::DataFile::DataFile() {
        new (this) BufferedRandomAccessFile();
        new (field_360) BufferedRandomAccessFile();
    }

} // namespace jag::oldscape::jagex3
