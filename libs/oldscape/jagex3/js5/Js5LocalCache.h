// libs/oldscape/jagex3/js5/Js5LocalCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5LocalCache {
    public:
        class BufferedRandomAccessFile;
        class DataFile;
        class IndexFile;
        int Initialize(const Filename& filename);
        unsigned long InitializeArchive(Js5ArchiveId js5ArchiveId);
        uint8_t* EnqueueRequestFromMainThread(Js5RemoteRequestData* js5RemoteRequestData);
        void QueueToWorker(Js5RemoteRequestData* js5RemoteRequestData);
        uint8_t* BlockingFetchFromMainThread(Js5RemoteRequestData* js5RemoteRequestData);
        void InvalidateFromMainThread(const Js5RequestKey& js5RequestKey);
        void MainLogic();
        void FlushIndices();
        void ProvideDataFromNetThread(Js5RemoteRequestData* js5RemoteRequestData);
        void Run();
        uint64_t QueueFlushToDisk();
        void EndAndJoin();
        ~Js5LocalCache();
        Js5LocalCache(LockFreeStack<Js5RemoteRequestData>& lockFreeStack);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[304];
        IndexFile field_312;
        uint8_t _unknown_665[8167];
        DataFile field_8832;
        LockFreeStack<Js5RemoteRequestData>* field_9560;
        uint8_t _unknown_9568[16];
        Fence field_9584;
        uint8_t _unknown_9697[15];
        uint64_t field_9712;
        uint8_t _unknown_9720[16];
        uint32_t field_9736;
        uint8_t _unknown_9740[28];
        uint64_t field_9768;
        uint64_t field_9776;
        uint8_t _unknown_9784[8];
        uint64_t field_9792;
        uint8_t _unknown_9800[16];
        uint32_t field_9816;
        uint8_t _unknown_9820[28];
        uint8_t field_9848;
        uint8_t _unknown_9849[7];
        uint64_t field_9856;
    };

    class Js5LocalCache::BufferedRandomAccessFile {
    public:
        unsigned int Open(const Filename& filename, int arg2, unsigned int arg3, unsigned int arg4);
        void IsOpen() const;
        unsigned long Read(unsigned char* arg1, unsigned int arg2, unsigned int arg3);
        uint64_t Write(const unsigned char* arg1, unsigned int arg2, unsigned int arg3);
        void InvalidateBuffers();
        uint64_t GetSize();
        void FlushToDisk();
        uint64_t BufferAll();
        void Close();
        ~BufferedRandomAccessFile();
        BufferedRandomAccessFile();
        BufferedRandomAccessFile(BufferedRandomAccessFile&& bufferedRandomAccessFile);

    private:
        int field_0;
        uint8_t _unknown_4[308];
        unsigned int field_312;
        unsigned int field_316;
        uint8_t _unknown_320[24];
        unsigned int field_344;
        unsigned int field_348;
        uint8_t field_352;
        uint8_t _unknown_353[3];
    };

    class Js5LocalCache::DataFile {
    public:
        class BlockHeader;
        int Initialize(const Filename& filename);
        uint8_t* FetchDataFromMainThread(Js5RemoteRequestData* js5RemoteRequestData);
        void InvalidateMainThreadReadBuffers();
        void FlushForWorkerThread();
        void WriteDataForWorkerThread(Js5RemoteRequestData* js5RemoteRequestData);
        void FetchDataForWorkerThread(Js5RemoteRequestData* js5RemoteRequestData);
        unsigned long ReadFromFile(BufferedRandomAccessFile& bufferedRandomAccessFile,
                                   Js5RemoteRequestData* js5RemoteRequestData);
        void WriteToFile(Js5RemoteRequestData* js5RemoteRequestData);
        void ReadBlockHeader(BlockHeader& blockHeader, BufferedRandomAccessFile& bufferedRandomAccessFile,
                             unsigned int arg3);
        void WriteBlockHeader(const BlockHeader& blockHeader, BufferedRandomAccessFile& bufferedRandomAccessFile,
                              unsigned int arg3);
        ~DataFile();
        DataFile();

    private:
        uint8_t _unknown_0[312];
        unsigned int field_312;
        unsigned int field_316;
        uint8_t _unknown_320[24];
        uint32_t field_344;
        unsigned int field_348;
        uint8_t field_352;
        uint8_t _unknown_353[7];
        BufferedRandomAccessFile field_360;
        uint8_t _unknown_716[4];
        unsigned int field_720;
        uint8_t _unknown_724[4];
    };

    class Js5LocalCache::DataFile::BlockHeader {
    public:
        uint16_t Matches(const BlockHeader& blockHeader) const;

    private:
        int field_0;
        short field_4;
        uint8_t _unknown_6[6];
        int field_12;
        uint8_t _unknown_16[4];
    };

    class Js5LocalCache::IndexFile {
    public:
        uint32_t Initialize(Js5ArchiveId js5ArchiveId, const Filename& filename);
        uint32_t GetEntry(IndexEntry& indexEntry, Js5GroupId js5GroupId);
        uint64_t Update(Js5RemoteRequestData* js5RemoteRequestData);
        void FlushToDisk();
        void IsOpen() const;
        IndexFile(IndexFile&& indexFile);
        ~IndexFile();
        IndexFile();

    private:
        uint8_t _unknown_0[312];
        unsigned int field_312;
        unsigned int field_316;
        uint8_t _unknown_320[24];
        unsigned int field_344;
        unsigned int field_348;
        uint8_t field_352;
    };

    // 0x1002b9800
    void Js5LocalCache::IndexFile::FlushToDisk() {
        FlushToDisk();
    }

    // 0x1002b9830
    void Js5LocalCache::IndexFile::IsOpen() const {
        IsOpen();
    }

    // 0x1002dfd80
    Js5LocalCache::IndexFile::~IndexFile() {}

    // 0x1002dfda0
    Js5LocalCache::BufferedRandomAccessFile::~BufferedRandomAccessFile() {
        field_320.~Array();
    }

    // 0x1002dfde0
    Js5LocalCache::IndexFile::IndexFile() : BufferedRandomAccessFile() {}

    // 0x1002dfe00
    Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile() : File() {}

    // 0x1002dfe70
    Js5LocalCache::IndexFile::IndexFile(Js5LocalCache::IndexFile&& indexFile) : BufferedRandomAccessFile(indexFile) {}

    // 0x1002dfe90
    Js5LocalCache::BufferedRandomAccessFile::BufferedRandomAccessFile(
        Js5LocalCache::BufferedRandomAccessFile&& bufferedRandomAccessFile)
        : File(bufferedRandomAccessFile) {
        unsigned int uVar1 = bufferedRandomAccessFile.field_316;
        field_312 = bufferedRandomAccessFile.field_312;
        field_316 = uVar1;
        new (&field_320) Array<unsigned char>(&bufferedRandomAccessFile.field_320);
        field_352 = bufferedRandomAccessFile.field_352;
        uVar1 = bufferedRandomAccessFile.field_348;
        field_344 = bufferedRandomAccessFile.field_344;
        field_348 = uVar1;
    }

    // 0x1002e2180
    Js5LocalCache::~Js5LocalCache() {
        field_9784.~QueueRequestItem();
        field_9704.~QueueRequestItem();
        field_9584->~Fence();
        field_8832->~DataFile();
        field_696.~fixed_hash_map();
        field_672.~Array();
        field_312->~IndexFile();
        field_8.~pair();
    }

    // 0x1002e2230
    Js5LocalCache::DataFile::~DataFile() {
        field_360->~BufferedRandomAccessFile();
    }

    // 0x1002e2390
    Js5LocalCache::Js5LocalCache(LockFreeStack<Js5RemoteRequestData>& lockFreeStack)
        : std::thread(), field_696(local_48, local_40), field_9560(lockFreeStack), field_9584(false) {
        hash<Js5RequestKey> local_48;
        equal_to<Js5RequestKey> local_40;
    }

    // 0x1002e2770
    Js5LocalCache::DataFile::DataFile() : BufferedRandomAccessFile() {}

} // namespace jag::oldscape::jagex3
