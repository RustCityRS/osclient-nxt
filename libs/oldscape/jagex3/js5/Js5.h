// libs/oldscape/jagex3/js5/Js5.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5 {
    public:
        class DecompressedHelper;
        class FileState;
        class GroupState;
        // virtual methods in vtable order
        virtual ~Js5();
        RequestDownload(char const*, char const*);
        void GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, char const*);
        bool GetDoesFileExist(char const*, char const*) const;
        bool RequestGroupDownload(char const*);
        GetGroupLoadPercentage(char const*) const;
        void UpdateCacheHint(char const*);
        GetIndexCrc() const;
        GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, char const*, char const*,
                std::array<int, 4ul>*);
        void DiscardAllFiles();
        ulong RequestDownload(int, int);
        void PeekFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, int, int);
        void GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, int, int, std::array<int, 4ul>*);
        void GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, int);
        GetFileIdLimit(int) const;
        bool GetGroupIsValid(int) const;
        bool GetIndexIsReady() const;
        GetIndexVersion() const;
        GetGroupIdLimit() const;
        GetGroupHash(int) const;
        void CheckAndLookupGroupId(GroupState const*&, Js5GroupId) const;
        CheckAndLookupGroupId(GroupState*&, Js5GroupId);
        GetIndexIsLoaded() const;
        IsOptional() const;
        void DiscardAllGroups();
        void DiscardFiles(int);
        void RequestDownload(char const*);
        ulong RequestDownload(int);
        void PeekFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, int);
        Js5* GetUncompressedPacket(PacketJ<Array<unsigned char, eastl::allocator>>&,
                                   PacketJ<Array<unsigned char, eastl::allocator>>&);
        GroupState* UnpackGroupData(GroupState&, std::array<int, 4ul> const*);
        GetGroupId(char const*) const;
        GetFileId(int, char const*) const;
        GetGroupList(eastl::vector<int, BucketAllocatorEASTL>&) const;
        GetFileList(eastl::vector<int, BucketAllocatorEASTL>&, int) const;
        void FetchFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, int, bool);
        FetchFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, Js5GroupId, Js5FileId,
                  std::array<int, 4ul>*, bool);
        CheckAndLookupGroupIdAndFileId(GroupState*&, FileState*&, Js5GroupId, Js5FileId);
        GetIndexPercentage() const;
        int GetGroupCount() const;
        void GetGroupCountInCache() const;
        GetGroupCrcInIndex(int) const;
        GetGroupVersionInIndex(int) const;
        void UpdateCacheHint(int);
        RequestGroupDownload(int);
        RequestFullDownload();
        GetGroupLoadPercentage(int) const;
        ulong GetDataPercent() const;
        void UrgentFetch(int);
        void LoadEmpty();
        Js5(Js5Loader&, Js5ArchiveId, bool, bool, bool);

        // data members, from how the methods use this: 99 bytes
        undefined* field_0; // offset 0, vtable pointer
        long* field_8;      // offset 8
        uint field_16;      // offset 16
        char _unknown_20[4];
        undefined4 field_24; // offset 24
        char _unknown_28[68];
        undefined1 field_96;   // offset 96
        undefined1 field_97;   // offset 97
        undefined1 m_optional; // offset 98
    };

    class Js5::DecompressedHelper {
    public:
        ~DecompressedHelper();
        DecompressedHelper(PacketJ<Array<unsigned char, eastl::allocator>>&, unsigned long, bool);

        // data members, from how the methods use this: 17 bytes
        PacketJ* field_0; // offset 0
        ulong field_8;    // offset 8
        bool field_16;    // offset 16
    };

    class Js5::FileState {
    public:
        ~FileState();
        FileState();
        bool IsInvalid() const;
        FileState(FileState&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[8];
    };

    class Js5::GroupState {
    public:
        bool IsInvalid() const;
        IsValid() const;
        GroupState(GroupState&&);
        ~GroupState();
        GroupState();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[4];
        int field_4; // offset 4
        char _unknown_8[1];
        undefined8 field_9;  // offset 9
        undefined8 field_17; // offset 17
        char _unknown_25[55];
    };

    // 0x1000da9f0, 80 bytes, inline, placed by class name and debug map
    // Js5::RequestDownload(char const*, char const*)
    undefined8 Js5::RequestDownload(char* param_1, char* param_2) {
        int iVar1;
        int iVar2;

        iVar1 = GetGroupId(this, param_1);
        if ((iVar1 < 0) || (iVar2 = GetFileId(this, iVar1, param_2), iVar2 < 0)) {
            return 0;
        }
        return RequestDownload((int)this, iVar1);
    }

    // 0x1000daa40, 96 bytes, inline, placed by class name and debug map
    // Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, char const*)
    void Js5::GetFile(shared_ptr* param_1, char* param_2) {
        char* pcVar2;

        if (GetGroupId(this, "") < 0) {
            pcVar2 = "";
        } else {
            pcVar2 = param_2;
            param_2 = "";
        }
        GetFile((shared_ptr*)this, (char*)param_1, param_2, (array*)pcVar2);
    }

    // 0x1000dab30, 64 bytes, inline, placed by class name and debug map
    // Js5::GetDoesFileExist(char const*, char const*) const
    bool Js5::GetDoesFileExist(char* param_1, char* param_2) {
        int iVar1;
        bool bVar2;

        iVar1 = GetGroupId(this, param_1);
        if (iVar1 < 0) {
            bVar2 = false;
        } else {
            iVar1 = GetFileId(this, iVar1, param_2);
            bVar2 = -1 < iVar1;
        }
        return bVar2;
    }

    // 0x1000dac00, 64 bytes, inline, placed by class name and debug map
    // Js5::RequestGroupDownload(char const*)
    bool Js5::RequestGroupDownload(char* param_1) {
        int iVar1;
        bool bVar3;

        iVar1 = GetGroupId(this, param_1);
        if (iVar1 < 0) {
            bVar3 = false;
        } else {
            bVar3 = (undefined*)RequestGroupDownload(this, iVar1) == DataStatus::READY;
        }
        return bVar3;
    }

    // 0x1000dac40, 48 bytes, inline, placed by class name and debug map
    // Js5::GetGroupLoadPercentage(char const*) const
    undefined8 Js5::GetGroupLoadPercentage(char* param_1) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = GetGroupId(this, param_1);
        if (iVar1 < 0) {
            uVar2 = 0;
        } else {
            uVar2 = GetGroupLoadPercentage(this, iVar1);
        }
        return uVar2;
    }

    // 0x1000e67e0, 48 bytes, inline, placed by class name
    // Js5::UpdateCacheHint(char const*)
    void Js5::UpdateCacheHint(char* param_1) {
        int iVar1;

        iVar1 = GetGroupId(this, param_1);
        if (-1 < iVar1) {
            UpdateCacheHint(this, iVar1);
        }
    }

    // 0x1001117e0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5::GetIndexCrc() const
    /* rs2lib::StockPlayerOffer::GetCompletedGold() const */

    undefined4 rs2lib::StockPlayerOffer::GetCompletedGold() {
        return m_completedGold;
    }

    // 0x10011f620, 112 bytes, inline, placed by class name
    // Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, char const*, char const*, std::array<int, 4ul>*)
    /* Js5::GetFile(shared_ptr<PacketJ<Array<unsigned
   char, eastl::allocator> > >&, char const*, char const*, std::array<int, 4ul>*) */

    undefined* Js5::GetFile(shared_ptr* param_1, char* param_2, char* param_3, array* param_4) {
        int iVar1;
        uint uVar2;

        iVar1 = GetGroupId((Js5*)param_1, param_3);
        if ((iVar1 < 0) || (uVar2 = GetFileId((Js5*)param_1, iVar1, (char*)param_4), (int)uVar2 < 0)) {
            return DataStatus::MISSING;
        }
        return (undefined*)GetFile(param_1, (int)param_2, iVar1, (array*)(ulong)uVar2);
    }

    // 0x10012ae60, 176 bytes, inline, placed by class name
    // Js5::DiscardAllFiles()
    void Js5::DiscardAllFiles() {
        char cVar1;
        uint uVar2;
        uint uVar3;
        GroupState* this_00;
        FileState* this_01;
        ulong uVar4;
        ulong uVar5;

        uVar2 = (&field_32)->end();
        if (uVar2 != 0) {
            uVar5 = 0;
            do {
                this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                    (Array<Js5::GroupState, eastl::allocator>*)&field_32, uVar5);
                cVar1 = this_00->IsInvalid();
                if (cVar1 == '\0') {
                    uVar3 = (&this_00->field_48)->end();
                    if (uVar3 != 0) {
                        uVar4 = 0;
                        do {
                            this_01 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                                (Array<Js5::FileState, eastl::allocator>*)&this_00->field_48, uVar4);
                            cVar1 = this_01->IsInvalid();
                            if (cVar1 == '\0') {
                                shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::reset();
                            }
                            uVar4 = uVar4 + 1;
                        } while (uVar3 != uVar4);
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != uVar2);
        }
    }

    // 0x10012af90, 16 bytes, inline, placed by class name
    // Js5::FileState::IsInvalid() const
    bool Js5::FileState::IsInvalid() {
        return field_8 == -1;
    }

    // 0x10012b100, 112 bytes, inline, placed by class name
    // Js5::RequestDownload(int, int)
    ulong Js5::RequestDownload(int param_1, int param_2) {
        undefined* puVar1;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        bool bVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38[16];

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
            local_38, (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2));
        puVar1 = (undefined*)PeekFile((shared_ptr*)CONCAT44(in_register_0000003c, param_1), (int)local_38, param_2);
        bVar2 = puVar1 == DataStatus::READY;
        local_38->~shared_ptr();
        return CONCAT71((int7)(CONCAT44(in_register_0000003c, param_1) >> 8), bVar2) & 4294967295;
    }

    // 0x10012b170, 32 bytes, inline, placed by class name
    // Js5::PeekFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, int, int)
    void Js5::PeekFile(shared_ptr* param_1, int param_2, int param_3) {
        FetchFile();
    }

    // 0x100181090, 16 bytes, inline, placed by class name
    // Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, int, int, std::array<int, 4ul>*)
    /* Js5::GetFile(shared_ptr<PacketJ<Array<unsigned
   char, eastl::allocator> > >&, int, int, std::array<int, 4ul>*) */

    void Js5::GetFile(shared_ptr* param_1, int param_2, int param_3, array* param_4) {
        FetchFile();
    }

    // 0x1001817e0, 16 bytes, inline, placed by class name
    // Js5::GetFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, int)
    void Js5::GetFile(shared_ptr* param_1, int param_2) {
        FetchFile(this, param_1, param_2, false);
    }

    // 0x100182680, 96 bytes, inline, placed by class name
    // Js5::GetFileIdLimit(int) const
    undefined4 Js5::GetFileIdLimit(int param_1) {
        int iVar2;
        undefined4 uVar3;
        GroupState* this_00;

        iVar2 = (&field_32)->end();
        uVar3 = 4294967295;
        if (param_1 < iVar2) {
            this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                (Array<Js5::GroupState, eastl::allocator>*)&field_32, (long)param_1);
            if (this_00->IsInvalid() == '\0') {
                uVar3 = (&this_00->field_48)->end();
            }
        }
        return uVar3;
    }

    // 0x1001828d0, 48 bytes, inline, placed by class name
    // Js5::GetGroupIsValid(int) const
    bool Js5::GetGroupIsValid(int param_1) {
        undefined* puVar1;
        undefined* puVar2;
        undefined1 local_18[8];

        puVar1 = DataStatus::READY;
        puVar2 = (undefined*)CheckAndLookupGroupId(this, local_18, param_1);
        return puVar1 == puVar2;
    }

    // 0x10018abb0, 32 bytes, inline, placed by class name
    // Js5::GetIndexIsReady() const
    bool Js5::GetIndexIsReady() {
        return (undefined*)GetIndexIsLoaded(this) == DataStatus::READY;
    }

    // 0x10018b300, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5::GetIndexVersion() const
    /* FastPool<audio::SoundInstance, int>::capacity() const */

    undefined4 FastPool<audio::SoundInstance, int>::capacity(FastPool<audio::SoundInstance, int>* this) {
        return *(undefined4*)(this + 28);
    }

    // 0x10018b530, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5::GetGroupIdLimit() const
    /* jag::graphics::Animation::GetRT5FrameCount() const */

    void jag::graphics::Animation::GetRT5FrameCount() {
        (&field_32)->end();
    }

    // 0x10018b680, 64 bytes, inline, placed by class name
    // Js5::GetGroupHash(int) const
    undefined4 Js5::GetGroupHash(int param_1) {
        undefined4 uVar1;
        undefined* puVar2;
        long local_10;

        puVar2 = (undefined*)CheckAndLookupGroupId(this, &local_10, param_1);
        uVar1 = 0;
        if (puVar2 == DataStatus::READY) {
            uVar1 = *(undefined4*)(local_10 + 8);
        }
        return uVar1;
    }

    // 0x100197cc0, 16 bytes, inline, placed by class name
    // Js5::GroupState::IsInvalid() const
    bool Js5::GroupState::IsInvalid() {
        return field_4 == -1;
    }

    // 0x100197cd0, 16 bytes, inline, placed by class name
    // Js5::CheckAndLookupGroupId(Js5::GroupState const*&, Js5GroupId) const
    void Js5::CheckAndLookupGroupId() {
        CheckAndLookupGroupId();
    }

    // 0x100197ce0, 96 bytes, inline, placed by class name
    // Js5::CheckAndLookupGroupId(Js5::GroupState*&, Js5GroupId)
    undefined* Js5::CheckAndLookupGroupId(undefined8* param_1, int param_3) {
        ulong uVar2;
        GroupState* this_00;
        undefined** ppuVar3;

        uVar2 = (&field_32)->end();
        ppuVar3 = &DataStatus::MISSING;
        if ((ulong)(long)param_3 < uVar2) {
            this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                (Array<Js5::GroupState, eastl::allocator>*)&field_32, (long)param_3);
            if (this_00->IsInvalid() == '\0') {
                *param_1 = this_00;
                ppuVar3 = &DataStatus::READY;
            }
        }
        return *ppuVar3;
    }

    // 0x1001a0620, 80 bytes, inline, placed by class name
    // Js5::GetIndexIsLoaded() const
    undefined* Js5::GetIndexIsLoaded() {
        long lVar2;
        undefined** ppuVar3;

        lVar2 = (&field_32)->end();
        if (lVar2 == 0) {
            if (field_24 == 0) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1001a063e;
            }
            if (IsOptional(this) == '\0') {
                ppuVar3 = &DataStatus::MISSING;
                goto LAB_1001a063e;
            }
        }
        ppuVar3 = &DataStatus::READY;
    LAB_1001a063e:
        return *ppuVar3;
    }

    // 0x1001a0670, 16 bytes, inline, placed by class name
    // Js5::IsOptional() const
    undefined1 Js5::IsOptional() {
        return m_optional;
    }

    // 0x1001f5c50, 112 bytes, inline, placed by class name
    // Js5::DiscardAllGroups()
    void Js5::DiscardAllGroups() {
        GroupState* this_00;
        uint uVar2;
        ulong uVar3;

        uVar2 = (&field_32)->end();
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                    (Array<Js5::GroupState, eastl::allocator>*)&field_32, uVar3);
                if (this_00->IsInvalid() == '\0') {
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::reset();
                }
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
    }

    // 0x100200bc0, 144 bytes, inline, placed by class name
    // Js5::DiscardFiles(int)
    void Js5::DiscardFiles(int param_1) {
        FileState* this_00;
        undefined4 in_EAX;
        uint uVar3;
        undefined4 in_register_00000004;
        ulong uVar4;
        long local_28;

        local_28 = CONCAT44(in_register_00000004, in_EAX);
        if ((undefined*)CheckAndLookupGroupId(this, &local_28, param_1) == DataStatus::READY) {
            uVar3 = ((local_28 + 48))->end();
            if (uVar3 != 0) {
                uVar4 = 0;
                do {
                    this_00 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                        (Array<Js5::FileState, eastl::allocator>*)(local_28 + 48), uVar4);
                    if (this_00->IsInvalid() == '\0') {
                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::reset();
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar3 != uVar4);
            }
        }
    }

    // 0x10029cea0, 80 bytes, inline, placed by class name
    // Js5::RequestDownload(char const*)
    void Js5::RequestDownload(char* param_1) {
        char* pcVar2;

        if (GetGroupId(this, "") < 0) {
            pcVar2 = "";
        } else {
            pcVar2 = param_1;
            param_1 = "";
        }
        RequestDownload(this, param_1, pcVar2);
    }

    // 0x10029d0a0, 112 bytes, inline, placed by class name
    // Js5::RequestDownload(int)
    ulong Js5::RequestDownload(int param_1) {
        undefined4 in_register_00000034;
        bool bVar2;
        shared_ptr local_30;

        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        bVar2 = (undefined*)PeekFile(this, &local_30, param_1) == DataStatus::READY;
        local_30.~shared_ptr();
        return CONCAT71((int7)((ulong)this >> 8), bVar2) & 4294967295;
    }

    // 0x1002a7e20, 16 bytes, inline, placed by class name
    // Js5::PeekFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, int)
    void Js5::PeekFile(shared_ptr* param_1, int param_2) {
        FetchFile(this, param_1, param_2, true);
    }

    // 0x1002b5cd0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5::DecompressedHelper::DecompressedHelper(PacketJ<Array<unsigned char, eastl::allocator> >&, unsigned long, bool): jumps straight to the base-object constructor

    // 0x1002b6c60, 128 bytes, inline, placed by class name
    // Js5::CheckAndLookupGroupIdAndFileId(Js5::GroupState*&, Js5::FileState*&, Js5GroupId, Js5FileId)
    undefined* Js5::CheckAndLookupGroupIdAndFileId(long* param_1, undefined8* param_2, undefined4 param_4,
                                                   int param_5) {
        undefined* puVar2;
        ulong uVar3;
        FileState* this_00;
        undefined** ppuVar4;

        puVar2 = (undefined*)CheckAndLookupGroupId(this, param_1, param_4);
        if (puVar2 == DataStatus::READY) {
            uVar3 = ((*param_1 + 48))->end();
            ppuVar4 = &DataStatus::MISSING;
            if ((ulong)(long)param_5 < uVar3) {
                this_00 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                    (Array<Js5::FileState, eastl::allocator>*)(*param_1 + 48), (long)param_5);
                if (this_00->IsInvalid() == '\0') {
                    *param_2 = this_00;
                    ppuVar4 = &DataStatus::READY;
                }
            }
            puVar2 = *ppuVar4;
        }
        return puVar2;
    }

    // 0x1002b6d80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5::GroupState::IsValid() const
    /* ui::StyleSheet::HasParent() const */

    bool ui::StyleSheet::HasParent() {
        return field_4 != -1;
    }

    // 0x1002baf30, 16 bytes, inline, placed by class name
    // Js5::LoadEmpty()
    void Js5::LoadEmpty() {
        field_24 = 4294967295;
    }

    // 0x1002d9fd0, 16 bytes, base-object constructor, inline, placed by class name
    // Js5::DecompressedHelper::DecompressedHelper(PacketJ<Array<unsigned char, eastl::allocator> >&, unsigned long, bool)
    void Js5::DecompressedHelper::DecompressedHelper(PacketJ* param_1, ulong param_2, bool param_3) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
    }

    // 0x1002deb00, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5::GroupState::GroupState(Js5::GroupState&&): jumps straight to the base-object constructor

    // 0x1002deb50, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5::GroupState::~GroupState(): jumps straight to the base-object destructor

    // 0x1002deb60, 48 bytes, base-object destructor, inline, placed by class name
    // Js5::GroupState::~GroupState()
    void Js5::GroupState::~GroupState() {
        (&field_72)->~vector_map();
        (&field_48)->~Array();
        (&field_32)->~shared_ptr();
    }

    // 0x1002dec60, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5::GroupState::GroupState(): jumps straight to the base-object constructor

    // 0x1002dec70, 96 bytes, base-object constructor, inline, placed by class name
    // Js5::GroupState::GroupState()
    void Js5::GroupState::GroupState() {
        _func_decltype_nullptr* in_RSI;

        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48) Array<Js5::FileState, eastl::allocator>();
        new (&field_72) eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>();
    }

    // 0x1002ded10, 128 bytes, base-object constructor, inline, placed by class name
    // Js5::GroupState::GroupState(Js5::GroupState&&)
    void Js5::GroupState::GroupState(GroupState* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined4 uVar3;
        int iVar4;

        uVar3 = *(undefined4*)&param_1->field_0;
        iVar4 = param_1->field_4;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = param_1->field_17;
        field_9 = param_1->field_9;
        field_17 = uVar2;
        *(undefined4*)&field_0 = uVar3;
        field_4 = iVar4;
        *(undefined8*)&field_8 = uVar1;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_32, (shared_ptr*)&param_1->field_32);
        new (&field_48, (Array*)&param_1->field_48) Array<Js5::FileState, eastl::allocator>();
        new (&field_72, (vector_map*)&param_1->field_72)
            eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>();
    }

    // 0x1002df410, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5::FileState::FileState(Js5::FileState&&): jumps straight to the base-object constructor

    // 0x1002df420, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5::FileState::FileState(Js5::FileState&&)
    /* ui::List::EntryIconData::EntryIconData(ui::List::EntryIconData&&) */

    void ui::List::EntryIconData::EntryIconData(EntryIconData* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;

        uVar2 = *(undefined4*)&param_1->field_4;
        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        *(undefined4*)&field_4 = uVar2;
        field_8 = uVar1;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
    }

    // 0x1002e0ce0, 128 bytes, base-object constructor, inline, placed by class name
    // Js5::Js5(Js5Loader&, Js5ArchiveId, bool, bool, bool)
    void Js5::Js5(long* param_1, uint param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6) {
        field_0 = PTR_vtable_100ee8a08 + 16;
        field_8 = param_1;
        field_16 = param_3;
        field_24 = 0;
        new (&field_32) Array<Js5::GroupState, eastl::allocator>();
        new (&field_56) eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>();
        field_96 = param_4;
        field_97 = param_5;
        m_optional = param_6;
    }

    // 0x1002e0db0, 32 bytes, deleting destructor, inline, placed by class name
    // Js5::~Js5()
    void Js5::~Js5() {
        ~Js5(this);
        operator_delete(this);
    }

    // 0x1002e0e10, 64 bytes, base-object destructor, inline, placed by class name
    // Js5::~Js5()
    void Js5::~Js5() {
        field_0 = PTR_vtable_100ee8a08 + 16;
        (&field_56)->~vector_map();
        (&field_32)->~Array();
    }

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1000dab70, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >::type make_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> >>()
    jag* make_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        PacketJ* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>, int,
                              oldscape::PacketJ<Array<unsigned char, eastl::allocator>>*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
