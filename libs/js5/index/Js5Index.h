// libs/js5/index/Js5Index.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5Index {
    public:
        void GetIndexWhirlpool() const;
        unsigned int GetIndexCRC() const;
        unsigned int GetIndexVersion() const;
        long GetTotalPackedGroupSize() const;
        Js5Index();
        ~Js5Index();
        uint8_t* GetGroupList() const;
        unsigned int GetGroupCount() const;
        unsigned int GetMaximumGroupID() const;
        DataStatus const* GetGroupID<char[17]>(unsigned int& arg1, char const (&arg2)[17]);
        DataStatus const* GetGroupID<eastl::string>(unsigned int& arg1, const eastl::string& str);
        bool IsFileListContiguous(unsigned int arg1) const;
        void Init(unsigned int arg1, const Array<unsigned char>& arg2, PacketT<Array<unsigned char>>& arg3);
        unsigned int GetFileCount(unsigned int arg1) const;
        Js5Index* operator=(const Js5Index& js5Index);
        Js5Index* operator=(Js5Index&& js5Index);
        unsigned long DoesFileExist(unsigned int arg1, unsigned int arg2) const;
        bool DoesGroupExist(unsigned int arg1) const;
        bool IsValid() const;
        unsigned int GetGroupCRC(unsigned int arg1) const;
        unsigned int GetGroupVersion(unsigned int arg1) const;
        uint64_t GetFirstFileID(unsigned int arg1, unsigned int& arg2) const;
        Js5Index* CreateDummyIndex(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        Js5Index(unsigned int arg1, const Array<unsigned char>& arg2, PacketT<Array<unsigned char>>& arg3);
        Js5Index(unsigned int arg1, unsigned int arg2, const Array<unsigned char>& arg3,
                 const Array<unsigned char>& arg4, unsigned int arg5, PacketT<Array<unsigned char>>& arg6);
        bool HasGroupWhirlpools() const;
        void GetGroupWhirlpool(unsigned int arg1) const;
        unsigned int GetFileIndex(unsigned int arg1, unsigned int arg2) const;
        void LoadIndex(PacketT<Array<unsigned char>>& arg1, bool arg2);
        void InitHashes();
        uint8_t* GetGroupIDFromHash(unsigned int& arg1, int arg2);
        void GetFileList(eastl::vector<unsigned int>& arg1, unsigned int arg2) const;
        int GetMaximumFileID(unsigned int arg1) const;
        Js5Index(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        static int64_t HASH_MAIN; // = stringtools::hash32("main")

    private:
        unsigned int m_indexCRC;
        uint8_t _unknown_4[28];
        unsigned int m_indexVersion;
        uint8_t field_36;
        uint8_t field_37[3];
        unsigned int m_groupCount;
        uint8_t _unknown_44[52];
        int field_96;
        uint8_t _unknown_100[36];
        unsigned int field_136;
        unsigned int m_maximumGroupID;
        long m_pTotalPackedGroupSize;
        uint8_t _unknown_152[104];
    };

    // 0x10018b1a0
    Js5Index::Js5Index()
        : m_indexCRC(0), m_indexVersion(0), field_36(0), m_groupCount(0), field_136(4294967295), m_maximumGroupID(0),
          m_pTotalPackedGroupSize(0) {}

    // 0x10018ba10
    Js5Index::~Js5Index() {
        field_248.~Array();
        field_224.~Array();
        field_200.~Array();
        field_176.~Array();
        field_152.~Array();
        field_72.~Array();
        field_48.~Array();
        field_8.~Array();
    }

    // 0x1004adaa0
    DataStatus const* Js5Index::GetGroupID<char[17]>(unsigned int& arg1, char const (&arg2)[17]) {
        int arg2_00 = stringtools::hash32(arg2);
        return (DataStatus*)GetGroupIDFromHash(arg1, arg2_00);
    }

    // 0x1005f8ff0
    DataStatus const* Js5Index::GetGroupID<eastl::string>(unsigned int& arg1, const eastl::string& str) {
        unsigned int arg2 = stringtools::hash32<eastl::fixed_string<char, 256>>(str);
        return (DataStatus*)GetGroupIDFromHash(arg1, arg2);
    }

    // 0x100978e80
    bool Js5Index::IsFileListContiguous(unsigned int arg1) const {
        uint64_t uVar2;

        bool cVar1 = DoesGroupExist(arg1);
        if (!cVar1) {
            uVar2 = 0;
        } else {
            cVar1 = field_248.empty();
            uVar2 = 1;
            if (!cVar1) {
                uVar2 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                             field_248[(unsigned long)arg1])
                            ->empty();
            }
        }
        return uVar2;
    }

    // 0x1009e0830
    unsigned int Js5Index::GetFileCount(unsigned int arg1) const {
        unsigned int uVar1;
        unsigned long uVar2;
        unsigned short* puVar3;

        if (field_36 == '\0') {
            uVar2 = field_224.end();
            uVar1 = 0;
            if (arg1 < uVar2) {
                puVar3 = &field_224[(unsigned long)arg1];
                uVar1 = (unsigned int)*puVar3;
            }
        } else {
            uVar1 = m_groupCount;
        }
        return uVar1;
    }

    // 0x1009e3950
    Js5Index* Js5Index::operator=(const Js5Index& js5Index) {
        m_indexCRC = js5Index.m_indexCRC;
        field_8 = js5Index.field_8;
        uint8_t uVar2 = js5Index.field_36;
        uint32_t uVar3 = js5Index.field_37;
        m_indexVersion = js5Index.m_indexVersion;
        field_36 = uVar2;
        field_37 = uVar3;
        m_groupCount = js5Index.m_groupCount;
        field_48 = js5Index.field_48;
        field_72 = js5Index.field_72;
        field_96 = js5Index.field_96;
        unsigned int uVar4 = js5Index.m_maximumGroupID;
        long lVar1 = js5Index.m_pTotalPackedGroupSize;
        field_136 = js5Index.field_136;
        m_maximumGroupID = uVar4;
        m_pTotalPackedGroupSize = lVar1;
        field_152 = js5Index.field_152;
        field_176 = js5Index.field_176;
        field_200 = js5Index.field_200;
        field_224 = js5Index.field_224;
        field_248 = js5Index.field_248;
        return this;
    }

    // 0x1009e3fb0
    Js5Index* Js5Index::operator=(Js5Index&& js5Index) {
        m_indexCRC = js5Index.m_indexCRC;
        field_8 = js5Index.field_8;
        uint8_t uVar2 = js5Index.field_36;
        uint32_t uVar3 = js5Index.field_37;
        m_indexVersion = js5Index.m_indexVersion;
        field_36 = uVar2;
        field_37 = uVar3;
        m_groupCount = js5Index.m_groupCount;
        field_48 = js5Index.field_48;
        field_72 = js5Index.field_72;
        field_96 = js5Index.field_96;
        unsigned int uVar4 = js5Index.m_maximumGroupID;
        long lVar1 = js5Index.m_pTotalPackedGroupSize;
        field_136 = js5Index.field_136;
        m_maximumGroupID = uVar4;
        m_pTotalPackedGroupSize = lVar1;
        field_152 = js5Index.field_152;
        field_176 = js5Index.field_176;
        field_200 = js5Index.field_200;
        field_224 = js5Index.field_224;
        field_248 = js5Index.field_248;
        return this;
    }

    // 0x1009e5020
    bool Js5Index::DoesGroupExist(unsigned int arg1) const {
        int* piVar2;

        if (arg1 <= m_maximumGroupID) {
            if (field_200.empty() == '\0') {
                piVar2 = &field_200[(unsigned long)arg1];
                return *piVar2 != -1;
            }
        }
        return false;
    }

    // 0x1009e5130
    bool Js5Index::IsValid() const {
        if (field_36 == '\0') {
            return field_200.empty() ^ 1;
        }
        return 1;
    }

    // 0x1009e5150
    unsigned int Js5Index::GetGroupCRC(unsigned int arg1) const {
        unsigned int uVar1;
        unsigned long uVar2;
        unsigned int* puVar3;

        if (field_36 == '\0') {
            uVar2 = field_152.end();
            uVar1 = 4294967295;
            if (arg1 < uVar2) {
                puVar3 = &field_152[(unsigned long)arg1];
                uVar1 = *puVar3;
            }
        } else {
            uVar1 = m_indexCRC;
        }
        return uVar1;
    }

    // 0x1009e51a0
    unsigned int Js5Index::GetGroupVersion(unsigned int arg1) const {
        unsigned int uVar1;
        unsigned long uVar2;
        unsigned int* puVar3;

        if (field_36 == '\0') {
            uVar2 = field_200.end();
            uVar1 = 4294967295;
            if (arg1 < uVar2) {
                puVar3 = &field_200[(unsigned long)arg1];
                uVar1 = *puVar3;
            }
        } else {
            uVar1 = m_indexVersion;
        }
        return uVar1;
    }

    // 0x1009e5ae0
    Js5Index* Js5Index::CreateDummyIndex(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        Js5Index(arg1, arg2, arg3);
        return this;
    }

    // 0x1009e6cf0
    bool Js5Index::HasGroupWhirlpools() const {
        return field_176.empty() ^ 1;
    }

    // 0x1009e6d10
    void Js5Index::GetGroupWhirlpool(unsigned int arg1) const {
        field_176[(unsigned long)arg1];
    }

    // 0x1009f09c0
    int Js5Index::GetMaximumFileID(unsigned int arg1) const {
        bool cVar1;
        long lVar3;
        unsigned short* puVar4;
        uint8_t* this_02;

        unsigned long uVar2 = field_224.end();
        int iVar5 = 0;
        if ((unsigned long)arg1 < uVar2) {
            this_02 = &field_248;
            cVar1 = this_02->empty();
            iVar5 = 0;
            if (!cVar1) {
                cVar1 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_02)[(
                             unsigned long)arg1])
                            ->empty();
                if (!cVar1) {
                    lVar3 =
                        (((vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)(*this_02)[(
                              unsigned long)arg1])
                             ->rbegin())
                            .operator->();
                    iVar5 = *(unsigned short*)(lVar3 + 4) + 1;
                }
            }
            puVar4 = &field_224[(unsigned long)arg1];
            iVar5 = (unsigned int)*puVar4 + iVar5;
        }
        return iVar5;
    }

    // 0x1009f7c30
    Js5Index::Js5Index(unsigned int arg1, unsigned int arg2, unsigned int arg3)
        : m_indexCRC(arg2), m_indexVersion(arg3), field_36(0), m_groupCount(arg1), field_136(4294967295),
          m_maximumGroupID(0), m_pTotalPackedGroupSize(0), field_36(1) {}

} // namespace jag
