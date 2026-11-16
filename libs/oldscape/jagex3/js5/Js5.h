// libs/oldscape/jagex3/js5/Js5.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5 {
    public:
        class DecompressedHelper;
        class FileState;
        class GroupState;
        // virtual methods in vtable order
        virtual ~Js5();
        uint64_t RequestDownload(const char* str1, const char* str2);
        void GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, const char* str);
        bool GetDoesFileExist(const char* str1, const char* str2) const;
        bool RequestGroupDownload(const char* str);
        uint64_t GetGroupLoadPercentage(const char* str) const;
        void UpdateCacheHint(const char* str);
        unsigned int GetIndexCrc() const;
        uint8_t* GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, const char* str1, const char* str2,
                         std::array<int, 4ul>* arg4);
        void DiscardAllFiles();
        unsigned long RequestDownload(int arg1, int arg2);
        void PeekFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2, int arg3);
        void GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2, int arg3,
                     std::array<int, 4ul>* arg4);
        void GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2);
        uint32_t GetFileIdLimit(int arg1) const;
        bool GetGroupIsValid(int arg1) const;
        bool GetIndexIsReady() const;
        uint32_t GetIndexVersion() const;
        void GetGroupIdLimit() const;
        uint32_t GetGroupHash(int arg1) const;
        void CheckAndLookupGroupId(const GroupState*& arg1, Js5GroupId js5GroupId) const;
        uint8_t* CheckAndLookupGroupId(GroupState*& arg1, Js5GroupId js5GroupId);
        uint8_t* GetIndexIsLoaded() const;
        bool IsOptional() const;
        void DiscardAllGroups();
        void DiscardFiles(int arg1);
        void RequestDownload(const char* str);
        unsigned long RequestDownload(int arg1);
        void PeekFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2);
        DecompressedHelper GetUncompressedPacket(PacketJ<Array<unsigned char>>& packetJ1,
                                                 PacketJ<Array<unsigned char>>& packetJ2);
        GroupState* UnpackGroupData(GroupState& groupState, const std::array<int, 4ul>* arg2);
        uint32_t GetGroupId(const char* str) const;
        uint32_t GetFileId(int arg1, const char* str) const;
        uint8_t* GetGroupList(eastl::vector<int>& arg1) const;
        uint8_t* GetFileList(eastl::vector<int>& arg1, int arg2) const;
        void FetchFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2, bool arg3);
        uint8_t* FetchFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, Js5GroupId js5GroupId,
                           Js5FileId js5FileId, std::array<int, 4ul>* arg4, bool arg5);
        uint8_t* CheckAndLookupGroupIdAndFileId(GroupState*& arg1, FileState*& arg2, Js5GroupId js5GroupId,
                                                Js5FileId js5FileId);
        uint64_t GetIndexPercentage() const;
        int GetGroupCount() const;
        void GetGroupCountInCache() const;
        uint32_t GetGroupCrcInIndex(int arg1) const;
        int GetGroupVersionInIndex(int arg1) const;
        void UpdateCacheHint(int arg1);
        uint8_t* RequestGroupDownload(int arg1);
        uint8_t* RequestFullDownload();
        uint64_t GetGroupLoadPercentage(int arg1) const;
        unsigned long GetDataPercent() const;
        void UrgentFetch(int arg1);
        void LoadEmpty();
        Js5(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4, bool arg5);

    private:
        Js5Loader* field_8;
        Js5ArchiveId field_16;
        uint8_t _unknown_20[4];
        uint32_t field_24;
        uint8_t _unknown_28[28];
        unsigned int field_56;
        uint8_t _unknown_60[36];
        bool field_96;
        bool field_97;
        bool m_optional;
    };

    class Js5::DecompressedHelper {
    public:
        ~DecompressedHelper();
        DecompressedHelper(PacketJ<Array<unsigned char>>& packetJ, unsigned long arg2, bool arg3);

    private:
        PacketJ<Array<unsigned char>>* field_0;
        unsigned long field_8;
        bool field_16;
    };

    class Js5::FileState {
    public:
        ~FileState();
        FileState();
        bool IsInvalid() const;
        FileState(FileState&& fileState);

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[8];
    };

    class Js5::GroupState {
    public:
        bool IsInvalid() const;
        bool IsValid() const;
        GroupState(GroupState&& groupState);
        ~GroupState();
        GroupState();

    private:
        uint8_t _unknown_0[4];
        int field_4;
        uint8_t _unknown_8[1];
        uint64_t field_9;
        uint64_t field_17;
        uint8_t _unknown_25[55];
    };

    // 0x1000da9f0
    uint64_t Js5::RequestDownload(const char* str1, const char* str2) {
        int arg2;

        int arg1 = GetGroupId(str1);
        if ((arg1 < 0) || (arg2 = GetFileId(arg1, str2), arg2 < 0)) {
            return 0;
        }
        return RequestDownload(arg1, arg2);
    }

    // 0x1000daa40
    void Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, const char* str) {
        char* str2;

        if (GetGroupId("") < 0) {
            str2 = "";
        } else {
            str2 = str;
            str = "";
        }
        GetFile(packetJ, str, str2, nullptr);
    }

    // 0x1000dab30
    bool Js5::GetDoesFileExist(const char* str1, const char* str2) const {
        bool bVar2;

        int iVar1 = GetGroupId(str1);
        if (iVar1 < 0) {
            bVar2 = false;
        } else {
            iVar1 = GetFileId(iVar1, str2);
            bVar2 = -1 < iVar1;
        }
        return bVar2;
    }

    // 0x1000dac00
    bool Js5::RequestGroupDownload(const char* str) {
        bool bVar2;

        int arg1 = GetGroupId(str);
        if (arg1 < 0) {
            bVar2 = false;
        } else {
            bVar2 = (uint8_t*)RequestGroupDownload(arg1) == DataStatus::READY;
        }
        return bVar2;
    }

    // 0x1000dac40
    uint64_t Js5::GetGroupLoadPercentage(const char* str) const {
        uint64_t uVar1;

        int arg1 = GetGroupId(str);
        if (arg1 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = GetGroupLoadPercentage(arg1);
        }
        return uVar1;
    }

    // 0x1000e67e0
    void Js5::UpdateCacheHint(const char* str) {
        int arg1 = GetGroupId(str);
        if (-1 < arg1) {
            UpdateCacheHint(arg1);
        }
    }

    // 0x1001117e0
    unsigned int Js5::GetIndexCrc() const {
        return m_completedGold;
    }

    // 0x10011f620
    uint8_t* Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, const char* str1, const char* str2,
                          std::array<int, 4ul>* arg4) {
        int arg3;

        int arg1 = GetGroupId(str1);
        if ((arg1 < 0) || (arg3 = GetFileId(arg1, str2), arg3 < 0)) {
            return DataStatus::MISSING;
        }
        return (uint8_t*)GetFile(packetJ, arg1, arg3, arg4);
    }

    // 0x10012ae60
    void Js5::DiscardAllFiles() {
        unsigned int uVar3;
        GroupState* this_00;
        FileState* this_01;
        unsigned long arg1;
        unsigned long arg1_00;

        unsigned int uVar2 = field_32.end();
        if (uVar2 != 0) {
            arg1_00 = 0;
            do {
                this_00 = &field_32[arg1_00];
                if (!(this_00->IsInvalid())) {
                    uVar3 = this_00->field_48.end();
                    if (uVar3 != 0) {
                        arg1 = 0;
                        do {
                            this_01 = &this_00->field_48[arg1];
                            if (!(this_01->IsInvalid())) {
                                this_01->field_16.reset();
                            }
                            arg1 = arg1 + 1;
                        } while (uVar3 != arg1);
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != uVar2);
        }
    }

    // 0x10012af90
    bool Js5::FileState::IsInvalid() const {
        return field_8 == -1;
    }

    // 0x10012b100
    unsigned long Js5::RequestDownload(int arg1, int arg2) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        bool bVar2 = (uint8_t*)PeekFile(local_38, arg1, arg2) == DataStatus::READY;
        return bVar2 & 4294967295;
    }

    // 0x10012b170
    void Js5::PeekFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2, int arg3) {
        FetchFile(packetJ, arg2, arg3, nullptr, true);
    }

    // 0x100181090
    void Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2, int arg3,
                      std::array<int, 4ul>* arg4) {
        FetchFile(packetJ, arg2, arg3, arg4, false);
    }

    // 0x1001817e0
    void Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2) {
        FetchFile(packetJ, arg2, false);
    }

    // 0x100182680
    uint32_t Js5::GetFileIdLimit(int arg1) const {
        GroupState* this_00;

        int iVar2 = field_32.end();
        uint32_t uVar3 = 4294967295;
        if (arg1 < iVar2) {
            this_00 = &field_32[(long)arg1];
            if (this_00->IsInvalid() == '\0') {
                uVar3 = this_00->field_48.end();
            }
        }
        return uVar3;
    }

    // 0x1001828d0
    bool Js5::GetGroupIsValid(int arg1) const {
        GroupState* local_18;

        uint8_t* puVar1 = DataStatus::READY;
        auto puVar2 = CheckAndLookupGroupId(local_18, arg1);
        return puVar1 == puVar2;
    }

    // 0x10018abb0
    bool Js5::GetIndexIsReady() const {
        return (uint8_t*)GetIndexIsLoaded() == DataStatus::READY;
    }

    // 0x10018b300
    uint32_t Js5::GetIndexVersion() const {
        return *(uint32_t*)(this + 28);
    }

    // 0x10018b530
    void Js5::GetGroupIdLimit() const {
        field_32.end();
    }

    // 0x10018b680
    uint32_t Js5::GetGroupHash(int arg1) const {
        GroupState* local_10;

        auto puVar2 = CheckAndLookupGroupId(local_10, arg1);
        uint32_t uVar1 = 0;
        if (puVar2 == DataStatus::READY) {
            uVar1 = *(uint32_t*)&local_10->field_8;
        }
        return uVar1;
    }

    // 0x100197cc0
    bool Js5::GroupState::IsInvalid() const {
        return field_4 == -1;
    }

    // 0x100197cd0
    void Js5::CheckAndLookupGroupId(const Js5::GroupState*& arg1, Js5GroupId js5GroupId) const {
        CheckAndLookupGroupId(arg1, js5GroupId);
    }

    // 0x100197ce0
    uint8_t* Js5::CheckAndLookupGroupId(Js5::GroupState*& arg1, Js5GroupId js5GroupId) {
        GroupState* this_00;

        unsigned long uVar2 = field_32.end();
        uint8_t** ppuVar3 = &DataStatus::MISSING;
        if ((unsigned long)(long)(int)js5GroupId < uVar2) {
            this_00 = &field_32[(long)(int)js5GroupId];
            if (this_00->IsInvalid() == '\0') {
                arg1 = this_00;
                ppuVar3 = &DataStatus::READY;
            }
        }
        return *ppuVar3;
    }

    // 0x1001a0620
    uint8_t* Js5::GetIndexIsLoaded() const {
        uint8_t** ppuVar3;

        if (field_32.end() == 0) {
            if (field_24 == 0) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1001a063e;
            }
            if (IsOptional() == '\0') {
                ppuVar3 = &DataStatus::MISSING;
                goto LAB_1001a063e;
            }
        }
        ppuVar3 = &DataStatus::READY;
    LAB_1001a063e:
        return *ppuVar3;
    }

    // 0x1001a0670
    bool Js5::IsOptional() const {
        return m_optional;
    }

    // 0x1001f5c50
    void Js5::DiscardAllGroups() {
        GroupState* this_00;
        unsigned long arg1;

        unsigned int uVar2 = field_32.end();
        if (uVar2 != 0) {
            arg1 = 0;
            do {
                this_00 = &field_32[arg1];
                if (this_00->IsInvalid() == '\0') {
                    this_00->field_32.reset();
                }
                arg1 = arg1 + 1;
            } while (uVar2 != arg1);
        }
    }

    // 0x100200bc0
    void Js5::DiscardFiles(int arg1) {
        uint32_t in_EAX;
        unsigned int uVar3;
        uint32_t in_register_00000004;
        FileState* this_00;
        unsigned long arg1_00;

        GroupState* local_28 = (GroupState*)(((uint64_t)in_register_00000004 << 32) | (uint32_t)in_EAX);
        if ((uint8_t*)CheckAndLookupGroupId(local_28, arg1) == DataStatus::READY) {
            uVar3 = local_28->field_48.end();
            if (uVar3 != 0) {
                arg1_00 = 0;
                do {
                    this_00 = &local_28->field_48[arg1_00];
                    if (this_00->IsInvalid() == '\0') {
                        this_00->field_16.reset();
                    }
                    arg1_00 = arg1_00 + 1;
                } while (uVar3 != arg1_00);
            }
        }
    }

    // 0x10029cea0
    void Js5::RequestDownload(const char* str) {
        char* str2;

        if (GetGroupId("") < 0) {
            str2 = "";
        } else {
            str2 = str;
            str = "";
        }
        RequestDownload(str, str2);
    }

    // 0x10029d0a0
    unsigned long Js5::RequestDownload(int arg1) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        bool bVar2 = (uint8_t*)PeekFile(local_30, arg1) == DataStatus::READY;
        return bVar2 & 4294967295;
    }

    // 0x1002a7e20
    void Js5::PeekFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2) {
        FetchFile(packetJ, arg2, true);
    }

    // 0x1002b6c60
    uint8_t* Js5::CheckAndLookupGroupIdAndFileId(Js5::GroupState*& arg1, Js5::FileState*& arg2, Js5GroupId js5GroupId,
                                                 Js5FileId js5FileId) {
        unsigned long uVar3;
        FileState* this_00;
        uint8_t** ppuVar4;

        auto puVar2 = CheckAndLookupGroupId(arg1, js5GroupId);
        if (puVar2 == DataStatus::READY) {
            uVar3 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&(arg1)->field_48)->end();
            ppuVar4 = &DataStatus::MISSING;
            if ((unsigned long)(long)(int)js5FileId < uVar3) {
                this_00 = (FileState*)(*((Array<Js5::FileState>*)&(arg1)->field_48))[(long)(int)js5FileId];
                if (this_00->IsInvalid() == '\0') {
                    arg2 = this_00;
                    ppuVar4 = &DataStatus::READY;
                }
            }
            puVar2 = *ppuVar4;
        }
        return puVar2;
    }

    // 0x1002b6d80
    bool Js5::GroupState::IsValid() const {
        return field_4 != -1;
    }

    // 0x1002baf30
    void Js5::LoadEmpty() {
        field_24 = 4294967295;
    }

    // 0x1002d9fd0
    Js5::DecompressedHelper::DecompressedHelper(PacketJ<Array<unsigned char>>& packetJ, unsigned long arg2, bool arg3)
        : field_0(packetJ), field_8(arg2), field_16(arg3) {}

    // 0x1002deb60
    Js5::GroupState::~GroupState() {
        field_72.~vector_map();
        field_48.~Array();
        field_32.~shared_ptr();
    }

    // 0x1002dec70
    Js5::GroupState::GroupState() {
        new (&field_32) shared_ptr();
        new (&field_48) Array<Js5::FileState>();
        new (&field_72) eastl::vector_map<unsigned int, unsigned int>();
    }

    // 0x1002ded10
    Js5::GroupState::GroupState(Js5::GroupState&& groupState) {
        uint32_t uVar3 = *(uint32_t*)&groupState.field_0;
        int iVar4 = groupState.field_4;
        uint64_t uVar1 = *(uint64_t*)&groupState.field_8;
        uint64_t uVar2 = groupState.field_17;
        field_9 = groupState.field_9;
        field_17 = uVar2;
        *(uint32_t*)&field_0 = uVar3;
        field_4 = iVar4;
        *(uint64_t*)&field_8 = uVar1;
        field_32.shared_ptr<FileRSevenDebugPresetProvider, void>(groupState.field_32);
        new (&field_48) Array<Js5::FileState>(groupState.field_48);
        new (&field_72) eastl::vector_map<unsigned int, unsigned int>(groupState.field_72);
    }

    // 0x1002df420
    Js5::FileState::FileState(Js5::FileState&& fileState) {
        uint32_t uVar2 = *(uint32_t*)&fileState.field_4;
        long lVar1 = fileState.field_8;
        field_0 = *(uint32_t*)&fileState.field_0;
        *(uint32_t*)&field_4 = uVar2;
        field_8 = lVar1;
        field_16.shared_ptr<FileRSevenDebugPresetProvider, void>(fileState.field_16);
    }

    // 0x1002e0ce0
    Js5::Js5(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4, bool arg5)
        : field_8(js5Loader), field_16(js5ArchiveId), field_24(0), field_96(arg3), field_97(arg4), m_optional(arg5) {}

    // 0x1002e0e10
    Js5::~Js5() {
        field_32.~Array();
    }

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1000dab70
    shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char>>>::type
    make_shared<oldscape::PacketJ<Array<unsigned char>>>() {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char> _> _>* ref_counter_shared;
        int local_2c;
        PacketJ<Array<unsigned char> _>* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char>>>::type result;
        } else {
            local_28[0] = placement_new<oldscape::PacketJ<Array<unsigned char>>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared = placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>, int,
                                               oldscape::PacketJ<Array<unsigned char>>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
