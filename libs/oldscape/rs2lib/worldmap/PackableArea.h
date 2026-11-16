// libs/oldscape/rs2lib/worldmap/PackableArea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class PackableArea {
    public:
        int GetMaxLevels();
        PackableArea();
        PackableArea(int, int, int, int, int, int);
        void UnpackColumn(int, int, PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PackColumn(int, int, PacketJ<Array<unsigned char, eastl::allocator>>&);
        GetGroundColour(int, int);
        void LoadGround(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void LoadLocations(PacketJ<Array<unsigned char, eastl::allocator>>&);
        bool HasGeography();
        void PackAreaGeography(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void ResetAreaGeography();
        void PackCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void UnpackAreaGeography(jagex3::Js5&, ErrorCapture&);
        void GeneratePreview(Array<Array<int, eastl::allocator>, eastl::allocator>, int, int);
        int GetFluId(int, int);
        void SetAreaGeographyPackID(int, int);
        GetColumnSettings(int, int);
        void PackColumnEmpty(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PackColumnSimple(int, int, ColumnData, PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PackColumnComplex(int, int, ColumnData, PacketJ<Array<unsigned char, eastl::allocator>>&);
        void UnpackColumnSimple(int, int, PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void UnpackColumnComplex(int, int, PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        bool IsGroundVisible(int, int, int);
        byte IsLinkBelow(int, int, int);
        byte IsVisibleBelow(int, int, int);
        GetTargetMapSquareX();
        GetTargetMapSquareZ();
        GetBaseLevel();
        ~PackableArea();

        // data members, from how the methods use this: 196 bytes
        char _unknown_0[4];
        int field_4; // offset 4
        char _unknown_8[4];
        int field_12;        // offset 12
        undefined1 field_16; // offset 16
        undefined1 field_17; // offset 17
        char _unknown_18[110];
        int m_areaGeographyPackID; // offset 128
        uint field_132;            // offset 132
        char _unknown_136[24];
        int field_160;        // offset 160
        int field_164;        // offset 164
        int field_168;        // offset 168
        char field_172;       // offset 172
        undefined1 field_173; // offset 173
        char _unknown_174[2];
        int field_176;   // offset 176
        int field_180;   // offset 180
        int m_maxLevels; // offset 184
        int field_188;   // offset 188
        char _unknown_192[4];
    };

    // 0x100159b70: the linker folded this into InputField::GetEnterAction() const, which has identical code
    PackableArea::GetMaxLevels();

    // 0x10020be60, 224 bytes, base-object constructor, placed by class name
    // PackableArea::PackableArea()
    void PackableArea::PackableArea() {
        *(undefined**)this = PTR_vtable_100ee8ad8 + 16;
        new (&field_8) Array<std::array<unsigned short, 4096ul>, eastl::allocator>();
        new (&field_32) Array<std::array<unsigned short, 4096ul>, eastl::allocator>();
        new (&field_56) Array<std::array<unsigned char, 4096ul>, eastl::allocator>();
        new (&field_80) Array<std::array<unsigned char, 4096ul>, eastl::allocator>();
        new (&field_104) Array<std::array<unsigned char, 4096ul>, eastl::allocator>();
        m_areaGeographyPackID = -1;
        field_132 = 4294967295;
        new (&field_136)
            Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>,
                  eastl::allocator>();
        field_172 = '\0';
        field_173 = 0;
    }

    // 0x10020bf80, 352 bytes, base-object constructor, placed by class name
    // PackableArea::PackableArea(int, int, int, int, int, int)
    void PackableArea::PackableArea(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        int* piVar1;
        int local_3c;

        *(undefined**)this = PTR_vtable_100ee8ad8 + 16;
        new (&field_8) Array<std::array<unsigned short, 4096ul>, eastl::allocator>();
        new (&field_32) Array<std::array<unsigned short, 4096ul>, eastl::allocator>();
        new (&field_56) Array<std::array<unsigned char, 4096ul>, eastl::allocator>();
        new (&field_80) Array<std::array<unsigned char, 4096ul>, eastl::allocator>();
        new (&field_104) Array<std::array<unsigned char, 4096ul>, eastl::allocator>();
        m_areaGeographyPackID = -1;
        field_132 = 4294967295;
        new (&field_136)
            Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>,
                  eastl::allocator>();
        field_172 = '\0';
        field_173 = 0;
        field_168 = param_1;
        m_maxLevels = param_2;
        field_160 = param_3;
        field_164 = param_4;
        field_176 = param_5;
        field_180 = param_6;
        field_188 = param_1 + -1 + param_2;
        local_3c = 3;
        piVar1 = std::min<int>(&field_188, &local_3c);
        field_188 = *piVar1;
    }

    // 0x10020c7b0, 80 bytes, placed by class name
    // PackableArea::UnpackColumn(int, int, PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::UnpackColumn(int param_1, int param_2, PacketJ* param_3) {
        byte bVar1;

        bVar1 = param_3->g1();
        if (bVar1 != 0) {
            if ((bVar1 & 1) == 0) {
                UnpackColumnComplex(this, param_1, param_2, param_3, (uint)bVar1);
            } else {
                UnpackColumnSimple(this, param_1, param_2, param_3, (uint)bVar1);
            }
        }
    }

    // 0x10020c8c0, 160 bytes, placed by class name
    // PackableArea::PackColumn(int, int, PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::PackColumn(int param_1, int param_2, PacketJ* param_3) {
        PackableArea* this_00;
        undefined8 in_R8;
        undefined8 in_R9;
        char local_40[4];
        int iStack_3c;
        undefined4 uStack_38;
        undefined4 local_30;

        this_00 = (PackableArea*)local_40;
        GetColumnSettings(this_00, (int)this, param_1);
        if (iStack_3c == 4) {
            PackColumnEmpty(this_00, param_3);
        } else if (local_40[0] == '\0') {
            PackColumnComplex(this, param_1, param_2, param_3, in_R8, in_R9, local_40, uStack_38, local_30);
        } else {
            PackColumnSimple(this, param_1, param_2, param_3, in_R8, in_R9, local_40, uStack_38, local_30);
        }
    }

    // 0x10020cb60, 288 bytes, placed by class name
    // PackableArea::GetGroundColour(int, int)
    undefined4 PackableArea::GetGroundColour(int param_1, int param_2) {
        bool bVar1;
        array<unsigned short, 4096ul>* paVar3;
        ushort* puVar4;
        ulong uVar5;
        ulong uVar6;
        undefined4 local_34;

        local_34 = 4278190080;
        if (field_168 <= field_188) {
            uVar6 = (ulong)(param_1 * 64 + param_2);
            uVar5 = (long)field_168;
            do {
                if (IsGroundVisible(this, param_1, param_2, (int)uVar5) != '\0') {
                    paVar3 = (array<unsigned short, 4096ul>*)
                        Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                            (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&field_32, uVar5);
                    puVar4 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar3, uVar6);
                    if (*puVar4 == 0) {
                        paVar3 = (array<unsigned short, 4096ul>*)
                            Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&field_8, uVar5);
                        puVar4 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar3, uVar6);
                        if (*puVar4 == 0) {
                            bVar1 = true;
                        } else {
                            local_34 = FloorColourUtils::GetFluColour(*puVar4 - 1, -16777216);
                            bVar1 = false;
                        }
                    } else {
                        bVar1 = false;
                        local_34 = FloorColourUtils::GetFloColour(*puVar4 - 1, 0);
                    }
                    if (!bVar1) {
                        return local_34;
                    }
                }
                bVar1 = (long)uVar5 < (long)field_188;
                uVar5 = uVar5 + 1;
            } while (bVar1);
        }
        return 4278190080;
    }

    // 0x10020ee60, 592 bytes, placed by class name
    // PackableArea::LoadGround(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::LoadGround(PacketJ* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        ulong uVar1;
        undefined2 uVar2;
        ushort uVar3;
        long lVar4;
        undefined2* puVar5;
        undefined1* puVar6;
        byte* pbVar7;
        array<unsigned char, 4096ul>* paVar8;
        char* pcVar9;
        array<unsigned short, 4096ul>* paVar10;
        short* psVar11;
        long lVar12;
        uint uVar13;
        uint uVar14;
        ulong uVar15;

        if (field_172 == '\0') {
            this_00 = &field_8;
            this_00->clear();
            this_00->set_max_size(4, 1);
            this_01 = &field_32;
            this_01->clear();
            this_01->set_max_size(4, 1);
            this_02 = &field_56;
            this_02->clear();
            this_02->set_max_size(4, 1);
            this_03 = &field_80;
            this_03->clear();
            this_03->set_max_size(4, 1);
            (&field_104)->clear();
            uVar15 = 0;
            do {
                lVar4 = 0;
                do {
                    lVar12 = 0;
                    do {
                        uVar1 = lVar12 + lVar4 * 64;
                        while (true) {
                            uVar3 = param_1->g2();
                            if (uVar3 == 0)
                                break;
                            if (uVar3 == 1) {
                                param_1->g1();
                                break;
                            }
                            if (uVar3 < 50) {
                                uVar2 = param_1->g2();
                                paVar10 = (array<unsigned short, 4096ul>*)
                                    Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                                        (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)this_01, uVar15);
                                puVar5 = (undefined2*)std::array<unsigned short, 4096ul>::operator[](paVar10, uVar1);
                                *puVar5 = uVar2;
                                uVar13 = uVar3 - 2;
                                uVar14 = uVar3 + 1;
                                if (-1 < (int)uVar13) {
                                    uVar14 = uVar13;
                                }
                                paVar8 = (array<unsigned char, 4096ul>*)
                                    Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                        (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)this_02, uVar15);
                                puVar6 = (undefined1*)std::array<unsigned char, 4096ul>::operator[](paVar8, uVar1);
                                *puVar6 = (char)(uVar14 >> 2);
                                paVar8 = (array<unsigned char, 4096ul>*)
                                    Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                        (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)this_03, uVar15);
                                pbVar7 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar8, uVar1);
                                *pbVar7 = (byte)uVar13 & 3;
                            } else if (uVar3 < 82) {
                                paVar8 = (array<unsigned char, 4096ul>*)
                                    Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                        (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&field_104,
                                        uVar15);
                                pcVar9 = (char*)std::array<unsigned char, 4096ul>::operator[](paVar8, uVar1);
                                *pcVar9 = (char)uVar3 + -49;
                            } else {
                                paVar10 = (array<unsigned short, 4096ul>*)
                                    Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                                        (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)this_00, uVar15);
                                psVar11 = (short*)std::array<unsigned short, 4096ul>::operator[](paVar10, uVar1);
                                *psVar11 = uVar3 - 81;
                            }
                        }
                        lVar12 = lVar12 + 1;
                    } while (lVar12 != 64);
                    lVar4 = lVar4 + 1;
                } while (lVar4 != 64);
                uVar15 = uVar15 + 1;
            } while (uVar15 != 4);
            field_172 = '\x01';
        }
    }

    // 0x10020f270, 1344 bytes, placed by class name
    // PackableArea::LoadLocations(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::LoadLocations(PacketJ* param_1) {
        undefined1* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        byte bVar1;
        bool bVar2;
        int iVar3;
        shared_ptr<configdecoder::LocType>* this_02;
        long lVar4;
        array<unsigned char, 4096ul>* this_03;
        byte* pbVar5;
        vector<LocationData*, eastl::allocator>* this_04;
        LocationData* this_05;
        uint* puVar6;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* paVar7;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_06;
        ulong* puVar8;
        unique_ptr<LocationData, std::default_delete<LocationData>>* this_07;
        undefined8* puVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        uint uVar10;
        int iVar11;
        ulong uVar12;
        vector<eastl::pair<int, int>, eastl::allocator>* this_08;
        uint uVar13;
        ulong uVar14;
        hash_map<int, eastl::vector<LocationData*, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::allocator, false>
            local_e8[56];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_b0;
        long local_a8;
        shared_ptr<configdecoder::LocType>* local_a0;
        Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>,
              eastl::allocator>* local_98;
        LocationData* local_90;
        undefined8 uStack_88;
        int local_6c;
        PacketJ* local_68;
        PackableArea* local_60;
        LocationData* local_58;
        undefined8 uStack_50;
        int local_3c;
        uint local_38;
        uint local_34;

        if (field_173 == '\0') {
            this_00 = &field_136;
            local_68 = param_1;
            this_00->clear();
            local_98 =
                (Array<
                    std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>,
                    eastl::allocator>*)this_00;
            this_00->set_max_size(4, 1);
            new (&local_90) eastl::allocator("EASTL hash_map");
            eastl::hash_map<int, eastl::vector<LocationData*, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::allocator, false>::hash_map(local_e8, (allocator*)&local_90);
            local_b0 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_104;
            local_3c = -1;
            local_60 = this;
            do {
                local_6c = local_68->gSmarts();
                if (local_6c != 0) {
                    local_3c = local_3c + local_6c;
                    local_38 = 0;
                    while (iVar3 = local_68->gSmarts(), iVar3 != 0) {
                        uVar10 = (iVar3 + local_38) - 1;
                        local_38 = uVar10;
                        bVar1 = local_68->g1();
                        if (local_60->field_168 <= (int)uVar10 >> 12) {
                            this_02 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_3c);
                            lVar4 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                            if (*(int*)(lVar4 + 436) != 22) {
                                lVar4 = shared_ptr<configdecoder::LocType>::operator->(this_02);
                                this_01 = local_b0;
                                local_34 = (uint)CONCAT71((int7)((ulong)lVar4 >> 8), *(int*)(lVar4 + 432) != -1);
                                local_a8 = (long)local_60->field_168;
                                uVar12 = local_a8 + 1;
                                local_a0 = this_02;
                                iVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_b0);
                                iVar11 = (int)uVar12;
                                if (iVar11 < iVar3) {
                                    this_03 = (array<unsigned char, 4096ul>*)
                                        Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                            (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)this_01,
                                            uVar12);
                                    pbVar5 = (byte*)std::array<unsigned char, 4096ul>::operator[](
                                        this_03, (ulong)(uVar10 & 4095));
                                    iVar3 = (int)local_a8;
                                    if ((*pbVar5 & 2) != 0) {
                                        iVar3 = iVar11;
                                    }
                                } else {
                                    iVar3 = (int)local_a8;
                                }
                                uVar13 = (uint)(bVar1 >> 2);
                                if ((int)uVar10 >> 12 == iVar3) {
                                    local_34 = local_34 & 255;
                                    if (uVar13 == 9) {
                                        local_34 = 1;
                                    }
                                    if ((uVar13 - 2 & 4294967294) == 0) {
                                        local_34 = 1;
                                    }
                                    if (bVar1 < 4) {
                                        local_34 = 1;
                                    }
                                    if ((bVar1 & 4294967288) == 40) {
                                        lVar4 = shared_ptr<configdecoder::LocType>::operator->(local_a0);
                                        local_34 = local_34 & 255;
                                        if (*(int*)(lVar4 + 436) != -1) {
                                            local_34 = 1;
                                        }
                                    }
                                    if (uVar13 == 22) {
                                        lVar4 = shared_ptr<configdecoder::LocType>::operator->(local_a0);
                                        local_34 = local_34 & 255;
                                        if (*(int*)(lVar4 + 436) != -1) {
                                            local_34 = 1;
                                        }
                                    }
                                }
                                if ((char)local_34 != '\0') {
                                    eastl::hashtable<
                                        int, eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>,
                                        eastl::allocator,
                                        eastl::use_first<
                                            eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::find((int*)&local_58);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    bVar2 = eastl::operator==((eastl*)&local_58, (hashtable_iterator_base*)&local_90,
                                                              extraout_RDX);
                                    if (bVar2) {
                                        new (&local_90) eastl::vector<LocationData*, eastl::allocator>();
                                        this_04 = (vector<LocationData*, eastl::allocator>*)
                                            eastl::hash_map<int, eastl::vector<LocationData*, eastl::allocator>,
                                                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                                            false>::operator[](local_e8, (int*)&local_38);
                                        eastl::vector<LocationData*, eastl::allocator>::operator=(this_04,
                                                                                                  (vector*)&local_90);
                                        local_90.~vector();
                                        eastl::hashtable<
                                            int, eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>,
                                            eastl::allocator,
                                            eastl::use_first<
                                                eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>>,
                                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                            true>::find((int*)&local_90);
                                        local_58 = local_90;
                                        uStack_50 = uStack_88;
                                    }
                                    lVar4 = local_58.HeapBeginPtr();
                                    this_05 = operator_new(12);
                                    LocationData::LocationData(this_05, local_3c, uVar13, bVar1 & 3);
                                    local_90 = this_05;
                                    ((lVar4 + 8))->push_back(&local_90);
                                }
                            }
                        }
                    }
                }
            } while (local_6c != 0);
            new (&local_58) eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(0, 0);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            local_58 = local_90;
            uStack_50 = uStack_88;
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)&local_90, extraout_RDX_00);
            if (bVar2) {
                do {
                    puVar6 = (uint*)local_58.HeapBeginPtr();
                    uVar10 = *puVar6;
                    lVar4 = local_58.HeapBeginPtr();
                    this_08 = (vector<eastl::pair<int, int>, eastl::allocator>*)(lVar4 + 8);
                    uVar12 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_08);
                    new (&local_90)
                        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>(uVar12);
                    uVar14 = (ulong)((int)uVar10 >> 12);
                    paVar7 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                    4096ul>*)
                        Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                         4096ul>,
                              eastl::allocator>::operator[](local_98, uVar14);
                    uVar12 = (ulong)(uVar10 & 4095);
                    this_06 = (SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                        std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                   4096ul>::operator[](paVar7, uVar12);
                    SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>::operator=(
                        this_06, (SharedArray*)&local_90);
                    local_90.~SharedArray();
                    paVar7 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                    4096ul>*)
                        Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                         4096ul>,
                              eastl::allocator>::operator[](local_98, uVar14);
                    puVar8 = (ulong*)
                        std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                   4096ul>::operator[](paVar7, uVar12);
                    lVar4 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_08);
                    if (lVar4 != 0) {
                        uVar12 = 0;
                        do {
                            if (*puVar8 <= uVar12) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar12, *puVar8 - 1);
                            }
                            this_07 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                operator[](
                                    (shared_ptr<
                                        std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)(puVar8 +
                                                                                                              1),
                                    uVar12);
                            puVar9 = (undefined8*)eastl::vector<LocationData*, eastl::allocator>::operator[](
                                (vector<LocationData*, eastl::allocator>*)this_08, uVar12);
                            std::unique_ptr<LocationData, std::default_delete<LocationData>>::reset(
                                this_07, (LocationData*)*puVar9);
                            uVar12 = uVar12 + 1;
                            uVar14 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_08);
                        } while (uVar12 < uVar14);
                    }
                    eastl::hashtable_iterator<eastl::pair<int const, eastl::vector<LocationData*, eastl::allocator>>,
                                              false, false>::
                    operator++(
                        (hashtable_iterator<eastl::pair<int const, eastl::vector<LocationData*, eastl::allocator>>,
                                            false, false>*)&local_90,
                        (int)(eastl*)&local_58);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar2 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)&local_90, extraout_RDX_01);
                } while (bVar2);
            }
            local_60->field_173 = 1;
            eastl::hash_map<int, eastl::vector<LocationData*, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::allocator, false>::~hash_map(local_e8);
        }
    }

    // 0x10020fa80, 32 bytes, placed by class name
    // PackableArea::HasGeography()
    bool PackableArea::HasGeography() {
        if (field_172 == '\0') {
            return false;
        }
        return field_173 != '\0';
    }

    // 0x10020faa0, 48 bytes, placed by class name
    // PackableArea::PackAreaGeography(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::PackAreaGeography(PacketJ* param_1) {
        if (HasGeography(this) != '\0') {
            (**(code**)(*(long*)this + 40))(this, param_1);
        }
    }

    // 0x10020fad0, 96 bytes, placed by class name
    // PackableArea::ResetAreaGeography()
    void PackableArea::ResetAreaGeography() {
        (&field_8)->clear();
        (&field_32)->clear();
        (&field_56)->clear();
        (&field_80)->clear();
        (&field_104)->clear();
        (&field_136)->clear();
        field_172 = '\0';
        field_173 = 0;
    }

    // 0x10020fb30, 48 bytes, placed by class name
    // PackableArea::PackCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::PackCompositeMetaData(PacketJ* param_1) {
        if (HasGeography(this) != '\0') {
            (**(code**)(*(long*)this + 32))(this, param_1);
        }
    }

    // 0x10020fb60, 160 bytes, placed by class name
    // PackableArea::UnpackAreaGeography(jagex3::Js5&, ErrorCapture&)
    void PackableArea::UnpackAreaGeography(Js5* param_1, ErrorCapture* param_2) {
        undefined* puVar1;
        undefined8 uVar2;
        shared_ptr<WorldmapAreaMetadata> local_38[16];

        if (HasGeography(this) == '\0') {
            shared_ptr<WorldmapAreaMetadata>::shared_ptr(local_38, (_func_decltype_nullptr*)param_1);
            puVar1 = (undefined*)((shared_ptr*)param_1)
                         ->GetFile((int)local_38, m_areaGeographyPackID, (array*)(ulong)field_132);
            if (puVar1 == DataStatus::READY) {
                uVar2 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_38);
                (**(code**)(*(long*)this + 8))(this, uVar2, param_2);
                field_172 = '\x01';
                field_173 = 1;
            }
            local_38->~shared_ptr();
        }
    }

    // 0x10020fc00, 128 bytes, placed by class name
    // PackableArea::GeneratePreview(Array<Array<int, eastl::allocator>, eastl::allocator>, int, int)
    void PackableArea::GeneratePreview(Array* param_2, undefined4 param_3, undefined4 param_4) {
        Array<Array<int, eastl::allocator>, eastl::allocator> local_48[24];

        if (HasGeography(this) != '\0') {
            Array<Array<int, eastl::allocator>, eastl::allocator>::Array(local_48, param_2);
            (**(code**)(*(long*)this + 48))(this, local_48, param_3, param_4);
            local_48->~Array();
        }
    }

    // 0x10020fc80, 80 bytes, placed by class name
    // PackableArea::GetFluId(int, int)
    int PackableArea::GetFluId(int param_1, int param_2) {
        int iVar1;
        array<unsigned short, 4096ul>* this_00;
        ushort* puVar2;

        iVar1 = -1;
        if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 64)) && (param_2 < 64)) {
            this_00 =
                (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                    (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&field_8, 0);
            puVar2 =
                (ushort*)std::array<unsigned short, 4096ul>::operator[](this_00, (ulong)(uint)(param_1 * 64 + param_2));
            iVar1 = *puVar2 - 1;
        }
        return iVar1;
    }

    // 0x10020fcd0, 32 bytes, placed by class name
    // PackableArea::SetAreaGeographyPackID(int, int)
    void PackableArea::SetAreaGeographyPackID(int param_1, int param_2) {
        m_areaGeographyPackID = param_1;
        field_132 = param_2;
    }

    // 0x10020fd50, 1040 bytes, placed by class name
    // PackableArea::GetColumnSettings(int, int)
    PackableArea* PackableArea::GetColumnSettings(int param_1, int param_2) {
        char cVar1;
        char cVar2;
        array<unsigned short, 4096ul>* paVar3;
        short* psVar4;
        array<unsigned char, 4096ul>* this_00;
        char* pcVar5;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* this_01;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_02;
        ulong uVar6;
        unique_ptr<LocationData, std::default_delete<LocationData>>* puVar7;
        long lVar8;
        int* piVar9;
        shared_ptr<configdecoder::LocType>* this_03;
        undefined1* puVar10;
        int in_ECX;
        ulong uVar11;
        undefined4 in_register_00000034;
        PackableArea* this_04;
        ulong uVar12;
        shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>* this_05;
        int iVar13;
        ulong uVar14;
        bool bVar15;

        this_04 = (PackableArea*)CONCAT44(in_register_00000034, param_1);
        new (this) ColumnData();
        if (this_04->field_168 <= this_04->field_188) {
            uVar11 = (ulong)(param_2 * 64 + in_ECX);
            uVar14 = (long)this_04->field_168;
            do {
                iVar13 = (int)uVar14;
                cVar1 = IsGroundVisible(this_04, param_2, in_ECX, iVar13);
                if (cVar1 == '\0') {
                    bVar15 = false;
                } else {
                    paVar3 = (array<unsigned short, 4096ul>*)
                        Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                            (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&this_04->field_8, uVar14);
                    psVar4 = (short*)std::array<unsigned short, 4096ul>::operator[](paVar3, uVar11);
                    bVar15 = *psVar4 != 0;
                    if (bVar15) {
                        field_4 = iVar13;
                    }
                    paVar3 = (array<unsigned short, 4096ul>*)
                        Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                            (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&this_04->field_32, uVar14);
                    psVar4 = (short*)std::array<unsigned short, 4096ul>::operator[](paVar3, uVar11);
                    if (*psVar4 != 0) {
                        if (field_4 == 4) {
                            field_4 = iVar13;
                        }
                        field_16 = 1;
                        this_00 = (array<unsigned char, 4096ul>*)
                            Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&this_04->field_56,
                                uVar14);
                        pcVar5 = (char*)std::array<unsigned char, 4096ul>::operator[](this_00, uVar11);
                        bVar15 = true;
                        if (*pcVar5 != '\0') {
                            *(undefined1*)this = 0;
                        }
                    }
                }
                this_01 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                 4096ul>*)
                    Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                     4096ul>,
                          eastl::allocator>::
                    operator[](
                        (Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                          4096ul>,
                               eastl::allocator>*)&this_04->field_136,
                        uVar14);
                this_02 = (SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                    std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                               4096ul>::operator[](this_01, uVar11);
                cVar2 = this_02->empty();
                if ((cVar2 == '\0') && (uVar6 = this_02->HeapBeginPtr(), uVar6 != 0)) {
                    this_05 =
                        (shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)(this_02 + 8);
                    uVar12 = 0;
                    do {
                        if (cVar1 != '\0') {
                            if (*(ulong*)this_02 <= uVar12) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar12, *(ulong*)this_02 - 1);
                            }
                            puVar7 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)shared_ptr<
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](this_05,
                                                                                                                uVar12);
                            lVar8 =
                                std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar7);
                            if (*(int*)(lVar8 + 4) != 0) {
                                if (*(ulong*)this_02 <= uVar12) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar12, *(ulong*)this_02 - 1);
                                }
                                puVar7 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_05, uVar12);
                                lVar8 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar7);
                                if (*(int*)(lVar8 + 4) != 2) {
                                    if (*(ulong*)this_02 <= uVar12) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar12,
                                                  *(ulong*)this_02 - 1);
                                    }
                                    puVar7 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                        shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                        operator[](this_05, uVar12);
                                    lVar8 =
                                        std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                            puVar7);
                                    if (*(int*)(lVar8 + 4) != 3) {
                                        if (*(ulong*)this_02 <= uVar12) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar12,
                                                      *(ulong*)this_02 - 1);
                                        }
                                        puVar7 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                            shared_ptr<std::unique_ptr<
                                                LocationData, std::default_delete<LocationData>>[]>::operator[](this_05,
                                                                                                                uVar12);
                                        lVar8 = std::unique_ptr<LocationData,
                                                                std::default_delete<LocationData>>::operator->(puVar7);
                                        if (*(int*)(lVar8 + 4) != 9)
                                            goto LAB_1002100ad;
                                    }
                                }
                            }
                            *(undefined1*)this = 0;
                            field_17 = 1;
                            bVar15 = true;
                        }
                    LAB_1002100ad:
                        if (*(ulong*)this_02 <= uVar12) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", uVar12, *(ulong*)this_02 - 1);
                        }
                        puVar7 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                            shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](
                                this_05, uVar12);
                        piVar9 =
                            (int*)std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(puVar7);
                        this_03 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar9);
                        lVar8 = shared_ptr<configdecoder::LocType>::operator->(this_03);
                        if (((*(int*)(lVar8 + 436) != -1) &&
                             (lVar8 = shared_ptr<configdecoder::LocType>::operator->(this_03),
                              *(int*)(lVar8 + 436) != 22)) ||
                            (lVar8 = shared_ptr<configdecoder::LocType>::operator->(this_03),
                             *(int*)(lVar8 + 432) != -1)) {
                            *(undefined1*)this = 0;
                            field_17 = 1;
                            bVar15 = true;
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar6 != uVar12);
                }
                if (bVar15) {
                    puVar10 = (undefined1*)std::array<bool, 4ul>::operator[]((array<bool, 4ul>*)&field_8, uVar14);
                    *puVar10 = 1;
                    field_12 = field_12 + 1;
                }
                bVar15 = (long)uVar14 < (long)this_04->field_188;
                uVar14 = uVar14 + 1;
            } while (bVar15);
        }
        if (1 < field_12) {
            *(undefined1*)this = 0;
        }
        if ((field_4 == 4) && (*(char*)this == '\0')) {
            field_4 = this_04->field_168;
        }
        return this;
    }

    // 0x100210160, 16 bytes, placed by class name
    // PackableArea::PackColumnEmpty(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::PackColumnEmpty(PacketJ* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 0);
    }

    // 0x100210170, 160 bytes, placed by class name
    // PackableArea::PackColumnSimple(int, int, ColumnData, PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::PackColumnSimple(long param_1, int param_2, int param_3,
                                        PacketT<Array<unsigned char, eastl::allocator>>* param_4, undefined8 param_5,
                                        undefined8 param_6, undefined8 param_7, undefined8 param_8, byte param_9) {
        array<unsigned short, 4096ul>* paVar1;
        ushort* puVar2;

        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(param_4, (ulong)param_9 * 2 + 1);
        if (param_9 != 0) {
            paVar1 =
                (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                    (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)(param_1 + 32), (long)param_7._4_4_);
            puVar2 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar1, (long)(param_2 * 64 + param_3));
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(param_4, (ulong)*puVar2);
        }
        paVar1 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)(param_1 + 8), (long)param_7._4_4_);
        puVar2 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar1, (long)(param_2 * 64 + param_3));
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(param_4, (ulong)*puVar2);
    }

    // 0x100210210, 976 bytes, placed by class name
    // PackableArea::PackColumnComplex(int, int, ColumnData, PacketJ<Array<unsigned char, eastl::allocator> >&)
    void PackableArea::PackColumnComplex(long param_1, int param_2, int param_3,
                                         PacketT<Array<unsigned char, eastl::allocator>>* param_4, undefined8 param_5,
                                         undefined8 param_6, undefined8 param_7, undefined8 param_8,
                                         undefined8 param_9) {
        byte bVar1;
        int iVar2;
        bool bVar3;
        char cVar4;
        array<unsigned short, 4096ul>* paVar5;
        ushort* puVar6;
        ulong uVar7;
        ulong uVar8;
        short* psVar9;
        array<unsigned char, 4096ul>* paVar10;
        byte* pbVar11;
        char* pcVar12;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* this;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_00;
        unique_ptr<LocationData, std::default_delete<LocationData>>* puVar13;
        int* piVar14;
        long lVar15;
        ulong uVar16;
        ulong uVar17;
        uint uVar18;
        shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>* this_01;

        uVar18 = (uint)(byte)param_9 * 2 | 4;
        if (param_9._1_1_ == '\0') {
            uVar18 = (uint)(byte)param_9 * 2;
        }
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            param_4, (ulong)(param_8._4_4_ * 8 + 24U & 24 | uVar18));
        paVar5 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)(param_1 + 8), (long)param_7._4_4_);
        uVar16 = (ulong)(param_2 * 64 + param_3);
        puVar6 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar5, uVar16);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(param_4, (ulong)*puVar6);
        if ((byte)param_9 != 0) {
            uVar7 = param_4->size();
            param_4->SetPos(uVar7 + 1);
            uVar18 = 0;
            if (param_7._4_4_ <= *(int*)(param_1 + 188)) {
                uVar18 = 0;
                uVar8 = (long)param_7._4_4_;
                do {
                    pcVar12 = (char*)std::array<bool, 4ul>::operator[]((array<bool, 4ul>*)&param_8, uVar8);
                    if (*pcVar12 != '\0') {
                        uVar18 = uVar18 + 1;
                        paVar5 = (array<unsigned short, 4096ul>*)
                            Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)(param_1 + 32), uVar8);
                        puVar6 = (ushort*)std::array<unsigned short, 4096ul>::operator[](paVar5, uVar16);
                        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(param_4, (ulong)*puVar6);
                        paVar5 = (array<unsigned short, 4096ul>*)
                            Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)(param_1 + 32), uVar8);
                        psVar9 = (short*)std::array<unsigned short, 4096ul>::operator[](paVar5, uVar16);
                        if (*psVar9 != 0) {
                            paVar10 = (array<unsigned char, 4096ul>*)
                                Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                    (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)(param_1 + 56), uVar8);
                            pbVar11 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar10, uVar16);
                            bVar1 = *pbVar11;
                            paVar10 = (array<unsigned char, 4096ul>*)
                                Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
                                    (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)(param_1 + 80), uVar8);
                            pbVar11 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar10, uVar16);
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                param_4, (ulong)((uint)*pbVar11 + (uint)bVar1 * 4));
                        }
                    }
                    bVar3 = (long)uVar8 < (long)*(int*)(param_1 + 188);
                    uVar8 = uVar8 + 1;
                } while (bVar3);
            }
            uVar8 = param_4->size();
            if (uVar8 == uVar7) {
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(param_4, 0);
            } else {
                param_4->SetPos(uVar7);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(param_4, (ulong)uVar18);
                param_4->SetPos(uVar8);
            }
        }
        if ((param_9._1_1_ != '\0') && (*(int*)(param_1 + 168) <= *(int*)(param_1 + 188))) {
            uVar7 = (long)*(int*)(param_1 + 168);
            do {
                pcVar12 = (char*)std::array<bool, 4ul>::operator[]((array<bool, 4ul>*)&param_8, uVar7);
                if (*pcVar12 != '\0') {
                    this = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                  4096ul>*)
                        Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                         4096ul>,
                              eastl::allocator>::
                        operator[](
                            (Array<std::array<
                                       SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                       4096ul>,
                                   eastl::allocator>*)(param_1 + 136),
                            uVar7);
                    this_00 = (SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                        std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                   4096ul>::operator[](this, uVar16);
                    cVar4 = this_00->empty();
                    if (cVar4 == '\0') {
                        uVar8 = this_00->HeapBeginPtr();
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(param_4, uVar8 & 4294967295);
                        if (uVar8 != 0) {
                            this_01 =
                                (shared_ptr<
                                    std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)(this_00 + 8);
                            uVar17 = 0;
                            do {
                                if (*(ulong*)this_00 <= uVar17) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar17, *(ulong*)this_00 - 1);
                                }
                                puVar13 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_01, uVar17);
                                piVar14 =
                                    (int*)std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                        puVar13);
                                param_4->pSmartInt2(*piVar14);
                                if (*(ulong*)this_00 <= uVar17) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar17, *(ulong*)this_00 - 1);
                                }
                                puVar13 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_01, uVar17);
                                lVar15 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar13);
                                iVar2 = *(int*)(lVar15 + 4);
                                if (*(ulong*)this_00 <= uVar17) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar17, *(ulong*)this_00 - 1);
                                }
                                puVar13 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                    shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                    operator[](this_01, uVar17);
                                lVar15 = std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                    puVar13);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    param_4, (ulong)(uint)(iVar2 * 4 + *(int*)(lVar15 + 8)));
                                uVar17 = uVar17 + 1;
                            } while (uVar8 != uVar17);
                        }
                    } else {
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(param_4, 0);
                    }
                }
                bVar3 = (long)uVar7 < (long)*(int*)(param_1 + 188);
                uVar7 = uVar7 + 1;
            } while (bVar3);
        }
    }

    // 0x1002105e0, 144 bytes, placed by class name
    // PackableArea::UnpackColumnSimple(int, int, PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void PackableArea::UnpackColumnSimple(int param_1, int param_2, PacketJ* param_3, int param_4) {
        array<unsigned short, 4096ul>* paVar1;
        undefined2* puVar2;
        undefined2 uVar3;

        if ((param_4 & 2U) != 0) {
            uVar3 = param_3->g2();
            paVar1 =
                (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                    (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&field_32, 0);
            puVar2 =
                (undefined2*)std::array<unsigned short, 4096ul>::operator[](paVar1, (long)(param_1 * 64 + param_2));
            *puVar2 = uVar3;
        }
        uVar3 = param_3->g2();
        paVar1 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&field_8, 0);
        puVar2 = (undefined2*)std::array<unsigned short, 4096ul>::operator[](paVar1, (long)(param_1 * 64 + param_2));
        *puVar2 = uVar3;
    }

    // 0x100210670, 880 bytes, placed by class name
    // PackableArea::UnpackColumnComplex(int, int, PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void PackableArea::UnpackColumnComplex(int param_1, int param_2, PacketJ* param_3, int param_4) {
        ulong uVar1;
        byte bVar2;
        bool bVar3;
        undefined2 uVar4;
        short sVar5;
        int iVar6;
        uint uVar7;
        array<unsigned short, 4096ul>* paVar8;
        undefined2* puVar9;
        short* psVar10;
        array<unsigned char, 4096ul>* paVar11;
        byte* pbVar12;
        array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>, 4096ul>* paVar13;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>* this_00;
        unique_ptr<LocationData, std::default_delete<LocationData>>* puVar14;
        LocationData* pLVar15;
        unique_ptr* puVar16;
        Array<std::array<unsigned char, 4096ul>, eastl::allocator>* pAVar17;
        Array<std::array<unsigned short, 4096ul>, eastl::allocator>* pAVar18;
        Array<std::array<unsigned short, 4096ul>, eastl::allocator>* pAVar19;
        SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>> local_88[24];
        PacketJ* local_70;
        ulong local_68;
        Array<std::array<unsigned short, 4096ul>, eastl::allocator>* local_60;
        Array<std::array<unsigned char, 4096ul>, eastl::allocator>* local_58;
        Array<std::array<unsigned char, 4096ul>, eastl::allocator>* local_50;
        PackableArea* local_48;
        ulong local_40;
        Array<std::array<unsigned char, 4096ul>, eastl::allocator>* local_38;

        uVar4 = param_3->g2();
        local_38 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)CONCAT62(local_38._2_6_, uVar4);
        local_48 = this;
        paVar8 =
            (array<unsigned short, 4096ul>*)Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](
                (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&field_8, 0);
        local_68 = (ulong)(param_1 * 64 + param_2);
        puVar9 = (undefined2*)std::array<unsigned short, 4096ul>::operator[](paVar8, local_68);
        *puVar9 = local_38._0_2_;
        local_40 = (ulong)(uint)param_4;
        if ((param_4 & 2U) != 0) {
            bVar2 = param_3->g1();
            uVar1 = local_68;
            if (bVar2 != 0) {
                local_60 = (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)&local_48->field_32;
                local_58 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&local_48->field_56;
                local_50 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&local_48->field_80;
                local_38 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)(ulong)bVar2;
                pAVar17 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)0;
                do {
                    sVar5 = param_3->g2();
                    if (sVar5 != 0) {
                        paVar8 = (array<unsigned short, 4096ul>*)
                            Array<std::array<unsigned short, 4096ul>, eastl::allocator>::operator[](local_60,
                                                                                                    (ulong)pAVar17);
                        psVar10 = (short*)std::array<unsigned short, 4096ul>::operator[](paVar8, uVar1);
                        *psVar10 = sVar5;
                        bVar2 = param_3->g1();
                        paVar11 = (array<unsigned char, 4096ul>*)
                            Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](local_58,
                                                                                                   (ulong)pAVar17);
                        pbVar12 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar11, uVar1);
                        *pbVar12 = bVar2 >> 2;
                        paVar11 = (array<unsigned char, 4096ul>*)
                            Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](local_50,
                                                                                                   (ulong)pAVar17);
                        pbVar12 = (byte*)std::array<unsigned char, 4096ul>::operator[](paVar11, uVar1);
                        *pbVar12 = bVar2 & 3;
                    }
                    pAVar17 = pAVar17 + 1;
                } while (local_38 != pAVar17);
            }
        }
        if ((local_40 & 4) != 0) {
            local_48 = (PackableArea*)&local_48->field_136;
            local_40 = (ulong)(((uint)(local_40 >> 3) & 3) + 1);
            local_50 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)0;
            local_70 = param_3;
            do {
                bVar2 = param_3->g1();
                if (bVar2 != 0) {
                    local_60 = (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)(ulong)bVar2;
                    SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>::SharedArray(
                        local_88, (ulong)local_60);
                    pAVar17 = local_50;
                    paVar13 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                     4096ul>*)
                        Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                         4096ul>,
                              eastl::allocator>::
                        operator[](
                            (Array<std::array<
                                       SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                       4096ul>,
                                   eastl::allocator>*)local_48,
                            (ulong)local_50);
                    uVar1 = local_68;
                    this_00 = (SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>*)
                        std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                   4096ul>::operator[](paVar13, local_68);
                    SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>::operator=(
                        this_00, (SharedArray*)local_88);
                    local_88->~SharedArray();
                    paVar13 = (array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                     4096ul>*)
                        Array<std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                         4096ul>,
                              eastl::allocator>::
                        operator[](
                            (Array<std::array<
                                       SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                       4096ul>,
                                   eastl::allocator>*)local_48,
                            (ulong)pAVar17);
                    pAVar17 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)
                        std::array<SharedArray<std::unique_ptr<LocationData, std::default_delete<LocationData>>>,
                                   4096ul>::operator[](paVar13, uVar1);
                    local_38 = pAVar17 + 8;
                    pAVar19 = (Array<std::array<unsigned short, 4096ul>, eastl::allocator>*)0;
                    local_58 = pAVar17;
                    do {
                        iVar6 = param_3->gSmart2or4s();
                        uVar7 = param_3->g1();
                        if (*(Array<std::array<unsigned short, 4096ul>, eastl::allocator>**)pAVar17 <= pAVar19) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", pAVar19,
                                      *(Array<std::array<unsigned short, 4096ul>, eastl::allocator>**)pAVar17 + -1);
                        }
                        pAVar18 = pAVar19;
                        puVar16 = (unique_ptr*)
                            shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::operator[](
                                (shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)
                                    local_38,
                                (ulong)pAVar19);
                        bVar3 = std::operator!=(puVar16, (_func_decltype_nullptr*)pAVar18);
                        pAVar18 = *(Array<std::array<unsigned short, 4096ul>, eastl::allocator>**)pAVar17;
                        if (bVar3) {
                            if (pAVar18 <= pAVar19) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", pAVar19, pAVar18 + -1);
                            }
                            puVar14 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                operator[](
                                    (shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)
                                        local_38,
                                    (ulong)pAVar19);
                            pLVar15 = (LocationData*)
                                          std::unique_ptr<LocationData, std::default_delete<LocationData>>::operator->(
                                              puVar14);
                            pLVar15->Set(iVar6, uVar7 >> 2 & 63, uVar7 & 3);
                        } else {
                            if (pAVar18 <= pAVar19) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", pAVar19, pAVar18 + -1);
                            }
                            puVar14 = (unique_ptr<LocationData, std::default_delete<LocationData>>*)
                                shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>::
                                operator[](
                                    (shared_ptr<std::unique_ptr<LocationData, std::default_delete<LocationData>>[]>*)
                                        local_38,
                                    (ulong)pAVar19);
                            pLVar15 = operator_new(12);
                            LocationData::LocationData(pLVar15, iVar6, (uVar7 & 255) >> 2, uVar7 & 3);
                            std::unique_ptr<LocationData, std::default_delete<LocationData>>::reset(puVar14, pLVar15);
                            param_3 = local_70;
                            pAVar17 = local_58;
                        }
                        pAVar19 = pAVar19 + 1;
                    } while (local_60 != pAVar19);
                }
                local_50 = (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)((long)local_50 + 1);
            } while (local_50 != (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)local_40);
        }
    }

    // 0x1002109e0, 112 bytes, placed by class name
    // PackableArea::IsGroundVisible(int, int, int)
    bool PackableArea::IsGroundVisible(int param_1, int param_2, int param_3) {
        char cVar1;
        bool bVar2;

        bVar2 = true;
        if (field_168 != param_3) {
            cVar1 = IsVisibleBelow(this, param_3, param_1, param_2);
            if (cVar1 == '\0') {
                cVar1 = IsLinkBelow(this, param_3, param_1, param_2);
                if (cVar1 == '\0') {
                    return false;
                }
                bVar2 = field_168 + 1 == param_3;
            } else {
                bVar2 = field_168 == 0;
            }
        }
        return bVar2;
    }

    // 0x100210a50, 64 bytes, placed by class name
    // PackableArea::IsLinkBelow(int, int, int)
    byte PackableArea::IsLinkBelow(int param_1, int param_2, int param_3) {
        array<unsigned char, 4096ul>* this_00;
        byte* pbVar1;

        this_00 = (array<unsigned char, 4096ul>*)Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
            (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&field_104, (long)param_1);
        pbVar1 = (byte*)std::array<unsigned char, 4096ul>::operator[](this_00, (long)(param_2 * 64 + param_3));
        return (*pbVar1 & 2) >> 1;
    }

    // 0x100210a90, 64 bytes, placed by class name
    // PackableArea::IsVisibleBelow(int, int, int)
    byte PackableArea::IsVisibleBelow(int param_1, int param_2, int param_3) {
        array<unsigned char, 4096ul>* this_00;
        byte* pbVar1;

        this_00 = (array<unsigned char, 4096ul>*)Array<std::array<unsigned char, 4096ul>, eastl::allocator>::operator[](
            (Array<std::array<unsigned char, 4096ul>, eastl::allocator>*)&field_104, (long)param_1);
        pbVar1 = (byte*)std::array<unsigned char, 4096ul>::operator[](this_00, (long)(param_2 * 64 + param_3));
        return (*pbVar1 & 8) >> 3;
    }

    // 0x1002111e0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PackableArea::GetTargetMapSquareX()
    /* audio::SoundInstance::GetSoundShape() const */

    int audio::SoundInstance::GetSoundShape() {
        return m_soundShape;
    }

    // 0x1002111f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PackableArea::GetTargetMapSquareZ()
    /* game::PlayerGroup::GetUpdateNumber() const */

    int game::PlayerGroup::GetUpdateNumber() {
        return m_updateNumber;
    }

    // 0x1002135f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PackableArea::GetBaseLevel()
    /* render::ImmediateRenderContext::GetGLCoreProfileVerMinor() const */

    undefined4 render::ImmediateRenderContext::GetGLCoreProfileVerMinor() {
        return m_gLCoreProfileVerMinor;
    }

    // 0x100225ea0, 96 bytes, base-object destructor, inline, placed by class name
    // PackableArea::~PackableArea()
    void PackableArea::~PackableArea() {
        *(undefined**)this = PTR_vtable_100ee8ad8 + 16;
        (&field_136)->~Array();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x10020ca00, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pSmart1or2s(short)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pSmart1or2s(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                 short param_1) {
        int iVar1;
        undefined8 in_RAX;
        undefined4 uVar3;
        undefined8 uVar2;
        undefined6 in_register_00000032;

        uVar3 = (undefined4)((ulong)in_RAX >> 32);
        iVar1 = (int)CONCAT62(in_register_00000032, param_1);
        if ((ushort)(iVar1 + 64U) < 128) {
            p1<unsigned long>(this, (ulong)(iVar1 + 64U));
        } else if ((short)(param_1 + 16384) < 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 218,
                "pSmart1or2s out of range - val: %d", CONCAT44(uVar3, iVar1));
        } else {
            p2<unsigned long>(this, (ulong)(iVar1 + 49152));
        }
    }

} // namespace jag
