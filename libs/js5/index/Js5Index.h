// libs/js5/index/Js5Index.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5Index {
    public:
        GetIndexWhirlpool() const;
        uint GetIndexCRC() const;
        uint GetIndexVersion() const;
        long GetTotalPackedGroupSize() const;
        Js5Index();
        ~Js5Index();
        GetGroupList() const;
        uint GetGroupCount() const;
        uint GetMaximumGroupID() const;
        DataStatus const* GetGroupID<char[17]>(unsigned int&, char const (&)[17]);
        DataStatus const* GetGroupID<eastl::string>(unsigned int&, eastl::string const&);
        IsFileListContiguous(unsigned int) const;
        void Init(unsigned int, Array<unsigned char, eastl::allocator> const&,
                  PacketT<Array<unsigned char, eastl::allocator>>&);
        uint GetFileCount(unsigned int) const;
        Js5Index* operator=(Js5Index const&);
        Js5Index* operator=(Js5Index&&);
        ulong DoesFileExist(unsigned int, unsigned int) const;
        bool DoesGroupExist(unsigned int) const;
        byte IsValid() const;
        uint GetGroupCRC(unsigned int) const;
        uint GetGroupVersion(unsigned int) const;
        GetFirstFileID(unsigned int, unsigned int&) const;
        Js5Index* CreateDummyIndex(unsigned int, unsigned int, unsigned int);
        Js5Index(unsigned int, Array<unsigned char, eastl::allocator> const&,
                 PacketT<Array<unsigned char, eastl::allocator>>&);
        Js5Index(unsigned int, unsigned int, Array<unsigned char, eastl::allocator> const&,
                 Array<unsigned char, eastl::allocator> const&, unsigned int,
                 PacketT<Array<unsigned char, eastl::allocator>>&);
        byte HasGroupWhirlpools() const;
        void GetGroupWhirlpool(unsigned int) const;
        uint GetFileIndex(unsigned int, unsigned int) const;
        void LoadIndex(PacketT<Array<unsigned char, eastl::allocator>>&, bool);
        void InitHashes();
        GetGroupIDFromHash(unsigned int&, int);
        void GetFileList(eastl::vector<unsigned int, BucketAllocatorEASTL>&, unsigned int) const;
        int GetMaximumFileID(unsigned int) const;
        Js5Index(unsigned int, unsigned int, unsigned int);
        static /* 8 bytes */ HASH_MAIN; // = stringtools::hash32("main")

        // data members, from how the methods use this: 256 bytes
        uint m_indexCRC; // offset 0
        char _unknown_4[28];
        uint m_indexVersion; // offset 32
        undefined1 field_36; // offset 36
        undefined3 field_37; // offset 37
        uint m_groupCount;   // offset 40
        char _unknown_44[92];
        uint field_136;               // offset 136
        uint m_maximumGroupID;        // offset 140
        long m_pTotalPackedGroupSize; // offset 144
        char _unknown_152[104];
    };

    // 0x10018b1a0, 352 bytes, base-object constructor, inline, placed by class name and debug map
    // Js5Index::Js5Index()
    void Js5Index::Js5Index() {
        m_indexCRC = 0;
        new (&field_8) Array<unsigned char, eastl::allocator>();
        m_indexVersion = 0;
        field_36 = 0;
        m_groupCount = 0;
        new (&field_48) Array<unsigned int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>();
        field_136 = 4294967295;
        m_maximumGroupID = 0;
        m_pTotalPackedGroupSize = 0;
        new (&field_152) Array<int, eastl::allocator>();
        new (&field_176) Array<Array<unsigned char, eastl::allocator>, eastl::allocator>();
        new (&field_200) Array<int, eastl::allocator>();
        new (&field_224) Array<unsigned short, eastl::allocator>();
        new (&field_248)
            Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                  eastl::allocator>();
    }

    // 0x10018ba10, 128 bytes, base-object destructor, inline, placed by class name and debug map
    // Js5Index::~Js5Index()
    void Js5Index::~Js5Index() {
        (&field_248)->~Array();
        (&field_224)->~Array();
        (&field_200)->~Array();
        (&field_176)->~Array();
        (&field_152)->~Array();
        (&field_96)->~vector_map();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_8)->~Array();
    }

    // 0x10019c200, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5Index::Js5Index(): jumps straight to the base-object constructor

    // 0x10019c210, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5Index::~Js5Index(): jumps straight to the base-object destructor

    // 0x1004adaa0, 48 bytes, inline, placed by class name
    // DataStatus const* Js5Index::GetGroupID<char [17]>(unsigned int&, char const (&) [17])
    DataStatus* Js5Index::GetGroupID<char[17]>(uint* param_1, char* param_2) {
        int iVar2;

        iVar2 = stringtools::hash32(param_2);
        return (DataStatus*)GetGroupIDFromHash(this, param_1, iVar2);
    }

    // 0x1005f8ff0, 48 bytes, inline, placed by class name
    // DataStatus const* Js5Index::GetGroupID<eastl::string >(unsigned int&, eastl::string const&)
    DataStatus* Js5Index::GetGroupID<eastl::string>(uint* param_1, basic_string* param_2) {
        uint uVar2;

        uVar2 = stringtools::hash32<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)param_2);
        return (DataStatus*)GetGroupIDFromHash(this, param_1, uVar2);
    }

    // 0x100978e80, 80 bytes, inline, placed by class name
    // Js5Index::IsFileListContiguous(unsigned int) const
    undefined8 Js5Index::IsFileListContiguous(uint param_1) {
        char cVar1;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8 uVar2;

        cVar1 = DoesGroupExist(this, param_1);
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            cVar1 = (&field_248)->empty();
            uVar2 = 1;
            if (cVar1 == '\0') {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                          eastl::allocator>::
                    operator[]((Array<eastl::vector_map<
                                          unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                      eastl::allocator>*)&field_248,
                               (ulong)param_1);
                uVar2 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_00);
            }
        }
        return uVar2;
    }

    // 0x1009e0830, 80 bytes, inline, placed by class name
    // Js5Index::GetFileCount(unsigned int) const
    uint Js5Index::GetFileCount(uint param_1) {
        uint uVar1;
        ulong uVar2;
        ushort* puVar3;

        if (field_36 == '\0') {
            uVar2 = (&field_224)->end();
            uVar1 = 0;
            if (param_1 < uVar2) {
                puVar3 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)&field_224, (ulong)param_1);
                uVar1 = (uint)*puVar3;
            }
        } else {
            uVar1 = m_groupCount;
        }
        return uVar1;
    }

    // 0x1009e3950, 208 bytes, inline, placed by class name
    // Js5Index::operator=(Js5Index const&)
    /* Js5Index::TEMPNAMEPLACEHOLDERVALUE(Js5Index const&) */

    Js5Index* Js5Index::operator=(Js5Index* param_1) {
        long lVar1;
        undefined1 uVar2;
        undefined3 uVar3;
        uint uVar4;

        m_indexCRC = param_1->m_indexCRC;
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_8,
                                                          (Array*)&param_1->field_8);
        uVar2 = param_1->field_36;
        uVar3 = param_1->field_37;
        m_indexVersion = param_1->m_indexVersion;
        field_36 = uVar2;
        field_37 = uVar3;
        m_groupCount = param_1->m_groupCount;
        Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_48,
                                                         (Array*)&param_1->field_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_72, (Array*)&param_1->field_72);
        eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>::
        operator=((vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>*)&field_96,
                  (vector_map*)&param_1->field_96);
        uVar4 = param_1->m_maximumGroupID;
        lVar1 = param_1->m_pTotalPackedGroupSize;
        field_136 = param_1->field_136;
        m_maximumGroupID = uVar4;
        m_pTotalPackedGroupSize = lVar1;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_152, (Array*)&param_1->field_152);
        Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)&field_176, (Array*)&param_1->field_176);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_200, (Array*)&param_1->field_200);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_224,
                                                           (Array*)&param_1->field_224);
        Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
              eastl::allocator>::
        operator=((Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                         eastl::allocator>*)&field_248,
                  (Array*)&param_1->field_248);
        return this;
    }

    // 0x1009e3fb0, 208 bytes, inline, placed by class name
    // Js5Index::operator=(Js5Index&&)
    /* Js5Index::TEMPNAMEPLACEHOLDERVALUE(Js5Index&&) */

    Js5Index* Js5Index::operator=(Js5Index* param_1) {
        long lVar1;
        undefined1 uVar2;
        undefined3 uVar3;
        uint uVar4;

        m_indexCRC = param_1->m_indexCRC;
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_8,
                                                          (Array*)&param_1->field_8);
        uVar2 = param_1->field_36;
        uVar3 = param_1->field_37;
        m_indexVersion = param_1->m_indexVersion;
        field_36 = uVar2;
        field_37 = uVar3;
        m_groupCount = param_1->m_groupCount;
        Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_48,
                                                         (Array*)&param_1->field_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_72, (Array*)&param_1->field_72);
        eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>::
        operator=((vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>*)&field_96,
                  (vector_map*)&param_1->field_96);
        uVar4 = param_1->m_maximumGroupID;
        lVar1 = param_1->m_pTotalPackedGroupSize;
        field_136 = param_1->field_136;
        m_maximumGroupID = uVar4;
        m_pTotalPackedGroupSize = lVar1;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_152, (Array*)&param_1->field_152);
        Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)&field_176, (Array*)&param_1->field_176);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_200, (Array*)&param_1->field_200);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_224,
                                                           (Array*)&param_1->field_224);
        Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
              eastl::allocator>::
        operator=((Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                         eastl::allocator>*)&field_248,
                  (Array*)&param_1->field_248);
        return this;
    }

    // 0x1009e5020, 80 bytes, inline, placed by class name
    // Js5Index::DoesGroupExist(unsigned int) const
    bool Js5Index::DoesGroupExist(uint param_1) {
        char cVar1;
        int* piVar2;

        if (param_1 <= m_maximumGroupID) {
            cVar1 = (&field_200)->empty();
            if (cVar1 == '\0') {
                piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_200,
                                                                        (ulong)param_1);
                return *piVar2 != -1;
            }
        }
        return false;
    }

    // 0x1009e5130, 32 bytes, inline, placed by class name
    // Js5Index::IsValid() const
    byte Js5Index::IsValid() {
        byte bVar1;

        if (field_36 == '\0') {
            bVar1 = (&field_200)->empty();
            return bVar1 ^ 1;
        }
        return 1;
    }

    // 0x1009e5150, 80 bytes, inline, placed by class name
    // Js5Index::GetGroupCRC(unsigned int) const
    uint Js5Index::GetGroupCRC(uint param_1) {
        uint uVar1;
        ulong uVar2;
        uint* puVar3;

        if (field_36 == '\0') {
            uVar2 = (&field_152)->end();
            uVar1 = 4294967295;
            if (param_1 < uVar2) {
                puVar3 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_152,
                                                                         (ulong)param_1);
                uVar1 = *puVar3;
            }
        } else {
            uVar1 = m_indexCRC;
        }
        return uVar1;
    }

    // 0x1009e51a0, 80 bytes, inline, placed by class name
    // Js5Index::GetGroupVersion(unsigned int) const
    uint Js5Index::GetGroupVersion(uint param_1) {
        uint uVar1;
        ulong uVar2;
        uint* puVar3;

        if (field_36 == '\0') {
            uVar2 = (&field_200)->end();
            uVar1 = 4294967295;
            if (param_1 < uVar2) {
                puVar3 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_200,
                                                                         (ulong)param_1);
                uVar1 = *puVar3;
            }
        } else {
            uVar1 = m_indexVersion;
        }
        return uVar1;
    }

    // 0x1009e5ae0, 32 bytes, inline, placed by class name
    // Js5Index::CreateDummyIndex(unsigned int, unsigned int, unsigned int)
    Js5Index* Js5Index::CreateDummyIndex(uint param_1, uint param_2, uint param_3) {
        Js5Index(this, param_1, param_2, param_3);
        return this;
    }

    // 0x1009e6cf0, 32 bytes, inline, placed by class name
    // Js5Index::HasGroupWhirlpools() const
    byte Js5Index::HasGroupWhirlpools() {
        byte bVar1;

        bVar1 = (&field_176)->empty();
        return bVar1 ^ 1;
    }

    // 0x1009e6d10, 32 bytes, inline, placed by class name
    // Js5Index::GetGroupWhirlpool(unsigned int) const
    void Js5Index::GetGroupWhirlpool(uint param_1) {
        Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)&field_176, (ulong)param_1);
    }

    // 0x1009f09c0, 176 bytes, inline, placed by class name
    // Js5Index::GetMaximumFileID(unsigned int) const
    int Js5Index::GetMaximumFileID(uint param_1) {
        char cVar1;
        ulong uVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        long lVar3;
        ushort* puVar4;
        undefined1* this_01;
        int iVar5;
        reverse_iterator<eastl::pair<unsigned int, unsigned short> const*> local_30[8];

        uVar2 = (&field_224)->end();
        iVar5 = 0;
        if ((ulong)param_1 < uVar2) {
            this_01 = &field_248;
            cVar1 = this_01->empty();
            iVar5 = 0;
            if (cVar1 == '\0') {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                          eastl::allocator>::
                    operator[]((Array<eastl::vector_map<
                                          unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                      eastl::allocator>*)this_01,
                               (ulong)param_1);
                cVar1 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_00);
                if (cVar1 == '\0') {
                    Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                          eastl::allocator>::
                    operator[]((Array<eastl::vector_map<
                                          unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                      eastl::allocator>*)this_01,
                               (ulong)param_1);
                    eastl::vector<unsigned long,
                                  eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                    lVar3 =
                        eastl::reverse_iterator<eastl::pair<unsigned int, unsigned short> const*>::operator->(local_30);
                    iVar5 = *(ushort*)(lVar3 + 4) + 1;
                }
            }
            puVar4 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                (Array<unsigned short, eastl::allocator>*)&field_224, (ulong)param_1);
            iVar5 = (uint)*puVar4 + iVar5;
        }
        return iVar5;
    }

    // 0x1009f7c20, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5Index::Js5Index(unsigned int, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x1009f7c30, 336 bytes, base-object constructor, inline, placed by class name
    // Js5Index::Js5Index(unsigned int, unsigned int, unsigned int)
    void Js5Index::Js5Index(uint param_1, uint param_2, uint param_3) {
        m_indexCRC = param_2;
        new (&field_8) Array<unsigned char, eastl::allocator>();
        m_indexVersion = param_3;
        field_36 = 0;
        m_groupCount = param_1;
        new (&field_48) Array<unsigned int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>();
        field_136 = 4294967295;
        m_maximumGroupID = 0;
        m_pTotalPackedGroupSize = 0;
        new (&field_152) Array<int, eastl::allocator>();
        new (&field_176) Array<Array<unsigned char, eastl::allocator>, eastl::allocator>();
        new (&field_200) Array<int, eastl::allocator>();
        new (&field_224) Array<unsigned short, eastl::allocator>();
        new (&field_248)
            Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                  eastl::allocator>();
        field_36 = 1;
    }

} // namespace jag
