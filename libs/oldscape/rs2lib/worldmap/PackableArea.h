// libs/oldscape/rs2lib/worldmap/PackableArea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class PackableArea {
    public:
        int GetMaxLevels();
        PackableArea();
        PackableArea(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void UnpackColumn(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ);
        void PackColumn(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ);
        uint32_t GetGroundColour(int arg1, int arg2);
        void LoadGround(PacketJ<Array<unsigned char>>& packetJ);
        void LoadLocations(PacketJ<Array<unsigned char>>& packetJ);
        bool HasGeography();
        void PackAreaGeography(PacketJ<Array<unsigned char>>& packetJ);
        void ResetAreaGeography();
        void PackCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ);
        void UnpackAreaGeography(jagex3::Js5& js5, ErrorCapture& errorCapture);
        void GeneratePreview(Array<Array<int>> arg1, int arg2, int arg3);
        int GetFluId(int arg1, int arg2);
        void SetAreaGeographyPackID(int arg1, int arg2);
        ColumnData GetColumnSettings(int arg1, int arg2);
        void PackColumnEmpty(PacketJ<Array<unsigned char>>& packetJ);
        void PackColumnSimple(int arg1, int arg2, ColumnData columnData, PacketJ<Array<unsigned char>>& packetJ);
        void PackColumnComplex(int arg1, int arg2, ColumnData columnData, PacketJ<Array<unsigned char>>& packetJ);
        void UnpackColumnSimple(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ, int arg4);
        void UnpackColumnComplex(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ, int arg4);
        bool IsGroundVisible(int arg1, int arg2, int arg3);
        bool IsLinkBelow(int arg1, int arg2, int arg3);
        bool IsVisibleBelow(int arg1, int arg2, int arg3);
        int GetTargetMapSquareX();
        int GetTargetMapSquareZ();
        int GetBaseLevel();
        ~PackableArea();

    private:
        uint8_t _unknown_8[120];
        int m_areaGeographyPackID;
        int field_132;
        uint8_t _unknown_136[24];
        int field_160;
        int field_164;
        int m_baseLevel;
        char field_172;
        uint8_t field_173;
        uint8_t _unknown_174[2];
        int m_targetMapSquareX;
        int m_targetMapSquareZ;
        int m_maxLevels;
        int field_188;
        uint8_t _unknown_192[4];
    };

    // 0x100159b70: PackableArea::GetMaxLevels() has the same machine code as InputField::GetEnterAction() const

    // 0x10020be60
    PackableArea::PackableArea() {
        field_0 = PTR_vtable_100ee8ad8 + 16;
        new (&field_8) Array<std::array<unsigned short, 4096ul>>();
        new (&field_32) Array<std::array<unsigned short, 4096ul>>();
        new (&field_56) Array<std::array<unsigned char, 4096ul>>();
        new (&field_80) Array<std::array<unsigned char, 4096ul>>();
        new (&field_104) Array<std::array<unsigned char, 4096ul>>();
        m_areaGeographyPackID = -1;
        field_132 = -1;
        new (&field_136) Array<std::array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>>();
        field_172 = '\0';
        field_173 = 0;
    }

    // 0x10020bf80
    PackableArea::PackableArea(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        field_0 = PTR_vtable_100ee8ad8 + 16;
        new (&field_8) Array<std::array<unsigned short, 4096ul>>();
        new (&field_32) Array<std::array<unsigned short, 4096ul>>();
        new (&field_56) Array<std::array<unsigned char, 4096ul>>();
        new (&field_80) Array<std::array<unsigned char, 4096ul>>();
        new (&field_104) Array<std::array<unsigned char, 4096ul>>();
        m_areaGeographyPackID = -1;
        field_132 = -1;
        new (&field_136) Array<std::array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>>();
        field_172 = '\0';
        field_173 = 0;
        m_baseLevel = arg1;
        m_maxLevels = arg2;
        field_160 = arg3;
        field_164 = arg4;
        m_targetMapSquareX = arg5;
        m_targetMapSquareZ = arg6;
        field_188 = arg1 - 1 + arg2;
        auto piVar1 = std::min<int>(field_188, 3);
        field_188 = *piVar1;
    }

    // 0x10020c7b0
    void PackableArea::UnpackColumn(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1 = packetJ.g1();
        if (bVar1 != 0) {
            if ((bVar1 & 1) == 0) {
                UnpackColumnComplex(arg1, arg2, packetJ, (unsigned int)bVar1);
            } else {
                UnpackColumnSimple(arg1, arg2, packetJ, (unsigned int)bVar1);
            }
        }
    }

    // 0x10020c8c0
    void PackableArea::PackColumn(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ) {
        ColumnData columnData;
        ColumnData columnData_00;
        uint32_t local_40;
        int iStack_3c;
        uint32_t uStack_38;
        uint32_t uStack_34;
        uint32_t local_30;

        GetColumnSettings((ReturnValue*)(PackableArea*)&local_40, this, arg1, arg2);
        if (iStack_3c == 4) {
            PackColumnEmpty((PackableArea*)&local_40, packetJ);
        } else if ((char)local_40 == '\0') {
            columnData_00.field_4 = iStack_3c;
            columnData_00._0_4_ = local_40;
            columnData_00._8_4_ = uStack_38;
            columnData_00.field_12 = uStack_34;
            columnData_00._16_4_ = local_30;
            PackColumnComplex(arg1, arg2, columnData_00, packetJ);
        } else {
            columnData.field_4 = iStack_3c;
            columnData._0_4_ = local_40;
            columnData._8_4_ = uStack_38;
            columnData.field_12 = uStack_34;
            columnData._16_4_ = local_30;
            PackColumnSimple(arg1, arg2, columnData, packetJ);
        }
    }

    // 0x10020cb60
    uint32_t PackableArea::GetGroundColour(int arg1, int arg2) {
        bool bVar1;
        array<unsigned short, 4096ul>* paVar3;
        unsigned short* puVar4;
        unsigned long arg1_00;
        unsigned long arg1_01;

        return local_34 = 4278190080;
        if (m_baseLevel <= field_188) {
            arg1_01 = (unsigned long)(arg1 * 64 + arg2);
            arg1_00 = (long)m_baseLevel;
            do {
                if (IsGroundVisible(arg1, arg2, (int)arg1_00) != '\0') {
                    paVar3 = &field_32[arg1_00];
                    puVar4 = (unsigned short*)(*paVar3)[arg1_01];
                    if (*puVar4 == 0) {
                        paVar3 = &field_8[arg1_00];
                        puVar4 = (unsigned short*)(*paVar3)[arg1_01];
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
                bVar1 = (long)arg1_00 < (long)field_188;
                arg1_00 = arg1_00 + 1;
            } while (bVar1);
        }
        return 4278190080;
    }

    // 0x10020ee60
    void PackableArea::LoadGround(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t* this_02;
        uint8_t* this_03;
        unsigned long arg1;
        uint16_t uVar1;
        unsigned short uVar2;
        long lVar3;
        uint16_t* puVar4;
        uint8_t* puVar5;
        uint8_t* pbVar6;
        array<unsigned char, 4096ul>* paVar7;
        char* pcVar8;
        array<unsigned short, 4096ul>* paVar9;
        short* psVar10;
        long lVar11;
        unsigned int uVar12;
        unsigned int uVar13;
        unsigned long arg1_00;

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
            field_104.clear();
            arg1_00 = 0;
            do {
                lVar3 = 0;
                do {
                    lVar11 = 0;
                    do {
                        arg1 = lVar11 + lVar3 * 64;
                        while (true) {
                            uVar2 = packetJ.g2();
                            if (uVar2 == 0)
                                break;
                            if (uVar2 == 1) {
                                packetJ.g1();
                                break;
                            }
                            if (uVar2 < 50) {
                                uVar1 = packetJ.g2();
                                paVar9 = (array<unsigned short, 4096ul>*)(*this_01)[arg1_00];
                                puVar4 = (uint16_t*)(*paVar9)[arg1];
                                *puVar4 = uVar1;
                                uVar12 = uVar2 - 2;
                                uVar13 = uVar2 + 1;
                                if (-1 < (int)uVar12) {
                                    uVar13 = uVar12;
                                }
                                paVar7 = (array<unsigned char, 4096ul>*)(*this_02)[arg1_00];
                                puVar5 = (uint8_t*)(*paVar7)[arg1];
                                *puVar5 = (char)(uVar13 >> 2);
                                paVar7 = (array<unsigned char, 4096ul>*)(*this_03)[arg1_00];
                                pbVar6 = (uint8_t*)(*paVar7)[arg1];
                                *pbVar6 = (uint8_t)uVar12 & 3;
                            } else if (uVar2 < 82) {
                                paVar7 = &field_104[arg1_00];
                                pcVar8 = (char*)(*paVar7)[arg1];
                                *pcVar8 = (char)uVar2 - 49;
                            } else {
                                paVar9 = (array<unsigned short, 4096ul>*)(*this_00)[arg1_00];
                                psVar10 = (short*)(*paVar9)[arg1];
                                *psVar10 = uVar2 - 81;
                            }
                        }
                        lVar11 = lVar11 + 1;
                    } while (lVar11 != 64);
                    lVar3 = lVar3 + 1;
                } while (lVar3 != 64);
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 4);
            field_172 = '\x01';
        }
    }

    // 0x10020f270
    void PackableArea::LoadLocations(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        uint8_t bVar1;
        bool cVar2;
        int iVar3;
        shared_ptr<configdecoder::LocType>* this_02;
        long lVar4;
        array<unsigned char, 4096ul>* this_03;
        uint8_t* pbVar5;
        vector<LocationData*>* this_04;
        ReturnValue this_05;
        unsigned int* puVar6;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* paVar7;
        SharedArray<std::unique_ptr<LocationData>>* this_06;
        unsigned long* puVar8;
        unique_ptr<LocationData>* this_07;
        uint64_t* puVar9;
        unsigned int uVar10;
        int iVar11;
        unsigned long uVar12;
        vector<eastl::pair<int, int>>* this_08;
        unsigned int arg2;
        unsigned long uVar13;
        hash_map<int, eastl::vector<LocationData*>> local_e8[56];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_b0;
        long local_a8;
        shared_ptr<configdecoder::LocType>* local_a0;
        Array<std::array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>>* local_98;
        ReturnValue local_90;
        uint64_t uStack_88;
        int local_6c;
        ReturnValue local_58;
        uint64_t uStack_50;
        int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        if (field_173 == '\0') {
            this_00 = &field_136;
            this_00->clear();
            local_98 = (Array<std::array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>>*)this_00;
            this_00->set_max_size(4, 1);
            new (local_e8) eastl::hash_map<int, eastl::vector<LocationData*>>(local_90);
            local_b0 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_104;
            local_3c = -1;
            do {
                local_6c = packetJ.gSmarts();
                if (local_6c != 0) {
                    local_3c = local_3c + local_6c;
                    local_38 = 0;
                    while (iVar3 = packetJ.gSmarts(), iVar3 != 0) {
                        uVar10 = (iVar3 + local_38) - 1;
                        local_38 = uVar10;
                        bVar1 = packetJ.g1();
                        if (m_baseLevel <= (int)uVar10 >> 12) {
                            this_02 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_3c);
                            lVar4 = (*this_02).operator->();
                            if (*(int*)(lVar4 + 436) != 22) {
                                lVar4 = (*this_02).operator->();
                                this_01 = local_b0;
                                local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)lVar4 >> 8)) << 8) |
                                                          (uint8_t)(*(int*)(lVar4 + 432) != -1));
                                local_a8 = (long)m_baseLevel;
                                uVar12 = local_a8 + 1;
                                local_a0 = this_02;
                                iVar3 = local_b0->end();
                                iVar11 = (int)uVar12;
                                if (iVar11 < iVar3) {
                                    this_03 = (array<unsigned char, 4096ul>*)(*this_01)[uVar12];
                                    pbVar5 = (uint8_t*)(*this_03)[(unsigned long)(uVar10 & 4095)];
                                    iVar3 = (int)local_a8;
                                    if ((*pbVar5 & 2) != 0) {
                                        iVar3 = iVar11;
                                    }
                                } else {
                                    iVar3 = (int)local_a8;
                                }
                                arg2 = (unsigned int)(bVar1 >> 2);
                                if ((int)uVar10 >> 12 == iVar3) {
                                    local_34 = local_34 & 255;
                                    if (arg2 == 9) {
                                        local_34 = 1;
                                    }
                                    if ((arg2 - 2 & 4294967294) == 0) {
                                        local_34 = 1;
                                    }
                                    if (bVar1 < 4) {
                                        local_34 = 1;
                                    }
                                    if ((bVar1 & 4294967288) == 40) {
                                        lVar4 = (*local_a0).operator->();
                                        local_34 = local_34 & 255;
                                        if (*(int*)(lVar4 + 436) != -1) {
                                            local_34 = 1;
                                        }
                                    }
                                    if (arg2 == 22) {
                                        lVar4 = (*local_a0).operator->();
                                        local_34 = local_34 & 255;
                                        if (*(int*)(lVar4 + 436) != -1) {
                                            local_34 = 1;
                                        }
                                    }
                                }
                                if ((char)local_34 != '\0') {
                                    local_58 = local_e8->find(local_38);
                                    local_90 = local_e8->end();
                                    cVar2 = local_58 == local_90;
                                    if (cVar2) {
                                        new (&local_90) eastl::vector<LocationData*>();
                                        this_04 = (vector<LocationData*>*)(*local_e8)[local_38];
                                        *this_04 = local_90;
                                        local_90 = local_e8->find(local_38);
                                        local_58 = local_90;
                                        uStack_50 = uStack_88;
                                    }
                                    lVar4 = local_58.HeapBeginPtr();
                                    this_05 = (ReturnValue) operator new(12);
                                    new (this_05) LocationData(local_3c, arg2, bVar1 & 3);
                                    local_90 = this_05;
                                    ((lVar4 + 8))->push_back(local_90);
                                }
                            }
                        }
                    }
                }
            } while (local_6c != 0);
            new (&local_58) eastl::hashtable_iterator(nullptr, nullptr);
            local_90 = local_e8->begin();
            local_58 = local_90;
            uStack_50 = uStack_88;
            local_90 = local_e8->end();
            cVar2 = local_58 != local_90;
            while (cVar2) {
                puVar6 = (unsigned int*)local_58.HeapBeginPtr();
                uVar10 = *puVar6;
                lVar4 = local_58.HeapBeginPtr();
                this_08 = (vector<eastl::pair<int, int>>*)(lVar4 + 8);
                uVar12 = this_08->size();
                new (&local_90) SharedArray(uVar12);
                uVar13 = (unsigned long)((int)uVar10 >> 12);
                paVar7 = (array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>*)(*local_98)[uVar13];
                uVar12 = (unsigned long)(uVar10 & 4095);
                this_06 = (SharedArray<std::unique_ptr<LocationData>>*)(*paVar7)[uVar12];
                *this_06 = local_90;
                paVar7 = (array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>*)(*local_98)[uVar13];
                puVar8 = (unsigned long*)(*paVar7)[uVar12];
                lVar4 = this_08->size();
                if (lVar4 != 0) {
                    uVar12 = 0;
                    do {
                        if (*puVar8 <= uVar12) {
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", uVar12, *puVar8 - 1);
                        }
                        this_07 = (unique_ptr<LocationData>*)(*(
                            (shared_ptr<std::unique_ptr<LocationData>[]>*)(puVar8 + 1)))[uVar12];
                        puVar9 = (uint64_t*)(*this_08)[uVar12];
                        this_07->reset(*puVar9);
                        uVar12 = uVar12 + 1;
                        uVar13 = this_08->size();
                    } while (uVar12 < uVar13);
                }
                local_90++;
                local_90 = local_e8->end();
                cVar2 = local_58 != local_90;
            }
            field_173 = 1;
        }
    }

    // 0x10020fa80
    bool PackableArea::HasGeography() {
        if (field_172 == '\0') {
            return false;
        }
        return field_173 != '\0';
    }

    // 0x10020faa0
    void PackableArea::PackAreaGeography(PacketJ<Array<unsigned char>>& packetJ) {
        if (HasGeography() != '\0') {
            (**(void (**)(...))(field_0 + 40))(this, packetJ);
        }
    }

    // 0x10020fad0
    void PackableArea::ResetAreaGeography() {
        field_8.clear();
        field_32.clear();
        field_56.clear();
        field_80.clear();
        field_104.clear();
        field_136.clear();
        field_172 = '\0';
        field_173 = 0;
    }

    // 0x10020fb30
    void PackableArea::PackCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ) {
        if (HasGeography() != '\0') {
            (**(void (**)(...))(field_0 + 32))(this, packetJ);
        }
    }

    // 0x10020fb60
    void PackableArea::UnpackAreaGeography(jagex3::Js5& js5, ErrorCapture& errorCapture) {
        uint64_t uVar2;
        shared_ptr<WorldmapAreaMetadata> local_38;

        if (HasGeography() == '\0') {
            local_38 = shared_ptr();
            if ((uint8_t*)js5.GetFile(local_38, m_areaGeographyPackID, field_132, nullptr) == DataStatus::READY) {
                uVar2 = *local_38;
                (**(void (**)(...))(field_0 + 8))(this, uVar2, errorCapture);
                field_172 = '\x01';
                field_173 = 1;
            }
        }
    }

    // 0x10020fc00
    void PackableArea::GeneratePreview(Array<Array<int>> arg1, int arg2, int arg3) {
        Array<Array<int>> local_48;

        if (HasGeography() != '\0') {
            local_48 = Array<Array<int>>(arg1);
            (**(void (**)(...))(field_0 + 48))(this, &local_48, arg2, arg3);
        }
    }

    // 0x10020fc80
    int PackableArea::GetFluId(int arg1, int arg2) {
        array<unsigned short, 4096ul>* this_00;
        unsigned short* puVar2;

        int iVar1 = -1;
        if ((((-1 < arg1) && (-1 < arg2)) && (arg1 < 64)) && (arg2 < 64)) {
            this_00 = &field_8[0];
            puVar2 = (unsigned short*)(*this_00)[(unsigned long)(unsigned int)(arg1 * 64 + arg2)];
            iVar1 = *puVar2 - 1;
        }
        return iVar1;
    }

    // 0x10020fcd0
    void PackableArea::SetAreaGeographyPackID(int arg1, int arg2) {
        m_areaGeographyPackID = arg1;
        field_132 = arg2;
    }

    // 0x10020fd50
    ColumnData PackableArea::GetColumnSettings(int arg1, int arg2) {
        bool cVar1;
        array<unsigned short, 4096ul>* paVar3;
        short* psVar4;
        array<unsigned char, 4096ul>* this_00;
        char* pcVar5;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* this_01;
        SharedArray<std::unique_ptr<LocationData>>* this_02;
        unsigned long uVar6;
        unique_ptr<LocationData>* puVar7;
        long lVar8;
        int* piVar9;
        shared_ptr<configdecoder::LocType>* this_03;
        uint8_t* puVar10;
        unsigned long arg1_00;
        unsigned long arg1_01;
        shared_ptr<std::unique_ptr<LocationData>[]>* this_04;
        int arg3;
        unsigned long arg1_02;
        bool bVar11;

        ColumnData result;
        if (m_baseLevel <= field_188) {
            arg1_00 = (unsigned long)(arg1 * 64 + arg2);
            arg1_02 = (long)m_baseLevel;
            do {
                arg3 = (int)arg1_02;
                cVar1 = IsGroundVisible(arg1, arg2, arg3);
                if (!cVar1) {
                    bVar11 = false;
                } else {
                    paVar3 = &field_8[arg1_02];
                    psVar4 = (short*)(*paVar3)[arg1_00];
                    bVar11 = *psVar4 != 0;
                    if (bVar11) {
                        *(int*)&result.field_4 = arg3;
                    }
                    paVar3 = &field_32[arg1_02];
                    psVar4 = (short*)(*paVar3)[arg1_00];
                    if (*psVar4 != 0) {
                        if (*(int*)&result.field_4 == 4) {
                            *(int*)&result.field_4 = arg3;
                        }
                        *(uint8_t*)(&result + 2) = 1;
                        this_00 = &field_56[arg1_02];
                        pcVar5 = (char*)(*this_00)[arg1_00];
                        bVar11 = true;
                        if (*pcVar5 != '\0') {
                            result = 0;
                        }
                    }
                }
                this_01 = &field_136[arg1_02];
                this_02 = (SharedArray<std::unique_ptr<LocationData>>*)(*this_01)[arg1_00];
                if ((this_02->empty() == '\0') && (uVar6 = this_02->HeapBeginPtr(), uVar6 != 0)) {
                    this_04 = (shared_ptr<std::unique_ptr<LocationData>[]>*)(this_02 + 8);
                    arg1_01 = 0;
                    do {
                        if (cVar1) {
                            if (*(unsigned long*)this_02 <= arg1_01) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_01,
                                          *(unsigned long*)this_02 - 1);
                            }
                            puVar7 = (unique_ptr<LocationData>*)(*this_04)[arg1_01];
                            lVar8 = (*puVar7).operator->();
                            if (*(int*)(lVar8 + 4) != 0) {
                                if (*(unsigned long*)this_02 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_02 - 1);
                                }
                                puVar7 = (unique_ptr<LocationData>*)(*this_04)[arg1_01];
                                lVar8 = (*puVar7).operator->();
                                if (*(int*)(lVar8 + 4) != 2) {
                                    if (*(unsigned long*)this_02 <= arg1_01) {
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", arg1_01,
                                                  *(unsigned long*)this_02 - 1);
                                    }
                                    puVar7 = (unique_ptr<LocationData>*)(*this_04)[arg1_01];
                                    lVar8 = (*puVar7).operator->();
                                    if (*(int*)(lVar8 + 4) != 3) {
                                        if (*(unsigned long*)this_02 <= arg1_01) {
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", arg1_01,
                                                      *(unsigned long*)this_02 - 1);
                                        }
                                        puVar7 = (unique_ptr<LocationData>*)(*this_04)[arg1_01];
                                        lVar8 = (*puVar7).operator->();
                                        if (*(int*)(lVar8 + 4) != 9)
                                            goto LAB_1002100ad;
                                    }
                                }
                            }
                            result = 0;
                            &result[2].field_1 = 1;
                            bVar11 = true;
                        }
                    LAB_1002100ad:
                        if (*(unsigned long*)this_02 <= arg1_01) {
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", arg1_01, *(unsigned long*)this_02 - 1);
                        }
                        puVar7 = (unique_ptr<LocationData>*)(*this_04)[arg1_01];
                        piVar9 = (int*)(*puVar7).operator->();
                        this_03 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(*piVar9);
                        lVar8 = (*this_03).operator->();
                        if (((*(int*)(lVar8 + 436) != -1) &&
                             (lVar8 = (*this_03).operator->(), *(int*)(lVar8 + 436) != 22)) ||
                            (lVar8 = (*this_03).operator->(), *(int*)(lVar8 + 432) != -1)) {
                            result = 0;
                            &result[2].field_1 = 1;
                            bVar11 = true;
                        }
                        arg1_01 = arg1_01 + 1;
                    } while (uVar6 != arg1_01);
                }
                if (bVar11) {
                    puVar10 = (uint8_t*)(*((&result + 1)))[arg1_02];
                    *puVar10 = 1;
                    *(int*) && result[1].field_4 = *(int*) && result[1].field_4 + 1;
                }
                bVar11 = (long)arg1_02 < (long)field_188;
                arg1_02 = arg1_02 + 1;
            } while (bVar11);
        }
        if (1 < *(int*) && result[1].field_4) {
            result = 0;
        }
        if ((*(int*)&result.field_4 == 4) && (result == '\0')) {
            *(int*)&result.field_4 = m_baseLevel;
        }
        return result;
    }

    // 0x100210160
    void PackableArea::PackColumnEmpty(PacketJ<Array<unsigned char>>& packetJ) {
        packetJ.p1<unsigned long>(0);
    }

    // 0x100210170
    void PackableArea::PackColumnSimple(int arg1, int arg2, ColumnData columnData,
                                        PacketJ<Array<unsigned char>>& packetJ) {
        array<unsigned short, 4096ul>* paVar1;
        unsigned short* puVar2;

        packetJ.p1<unsigned long>((unsigned int)(uint8_t)columnData._16_1_ * 2 + 1);
        if (columnData._16_1_ != '\0') {
            paVar1 = &field_32[(long)columnData.field_4];
            puVar2 = (unsigned short*)(*paVar1)[(long)(arg1 * 64 + arg2)];
            packetJ.p2<unsigned long>(*puVar2);
        }
        paVar1 = &field_8[(long)columnData.field_4];
        puVar2 = (unsigned short*)(*paVar1)[(long)(arg1 * 64 + arg2)];
        packetJ.p2<unsigned long>(*puVar2);
    }

    // 0x100210210
    void PackableArea::PackColumnComplex(int arg1, int arg2, ColumnData columnData,
                                         PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;
        int iVar2;
        bool bVar3;
        unsigned long uVar7;
        unsigned long uVar8;
        short* psVar9;
        array<unsigned char, 4096ul>* paVar10;
        uint8_t* pbVar11;
        char* pcVar12;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* this_00;
        SharedArray<std::unique_ptr<LocationData>>* this_01;
        unique_ptr<LocationData>* puVar13;
        int* piVar14;
        long lVar15;
        unsigned long arg1_01;
        shared_ptr<std::unique_ptr<LocationData>[]>* this_02;

        ID IVar16 = (unsigned int)(uint8_t)columnData._16_1_ * 2 | 4;
        if (columnData._17_1_ == '\0') {
            IVar16 = (unsigned int)(uint8_t)columnData._16_1_ * 2;
        }
        packetJ.p1<unsigned long>(columnData.field_12 * 8 + 24 & 24 | IVar16);
        array<unsigned short, 4096ul>* paVar5 = &field_8[(long)columnData.field_4];
        unsigned long arg1_00 = (unsigned long)(arg1 * 64 + arg2);
        unsigned short* puVar6 = (unsigned short*)(*paVar5)[arg1_00];
        packetJ.p2<unsigned long>(*puVar6);
        if (columnData._16_1_ != '\0') {
            uVar7 = packetJ.size();
            packetJ.SetPos(uVar7 + 1);
            IVar16 = 0;
            if (columnData.field_4 <= field_188) {
                IVar16 = 0;
                uVar8 = (long)columnData.field_4;
                do {
                    pcVar12 = &columnData.field_8[uVar8];
                    if (*pcVar12 != '\0') {
                        IVar16 = IVar16 + 1;
                        paVar5 = &field_32[uVar8];
                        puVar6 = (unsigned short*)(*paVar5)[arg1_00];
                        packetJ.p2<unsigned long>(*puVar6);
                        paVar5 = &field_32[uVar8];
                        psVar9 = (short*)(*paVar5)[arg1_00];
                        if (*psVar9 != 0) {
                            paVar10 = &field_56[uVar8];
                            pbVar11 = (uint8_t*)(*paVar10)[arg1_00];
                            bVar1 = *pbVar11;
                            paVar10 = &field_80[uVar8];
                            pbVar11 = (uint8_t*)(*paVar10)[arg1_00];
                            packetJ.p1<unsigned long>((unsigned int)*pbVar11 + (unsigned int)bVar1 * 4);
                        }
                    }
                    bVar3 = (long)uVar8 < (long)field_188;
                    uVar8 = uVar8 + 1;
                } while (bVar3);
            }
            uVar8 = packetJ.size();
            if (uVar8 == uVar7) {
                packetJ.p1<unsigned long>(0);
            } else {
                packetJ.SetPos(uVar7);
                packetJ.p1<unsigned long>(IVar16);
                packetJ.SetPos(uVar8);
            }
        }
        if ((columnData._17_1_ != '\0') && (m_baseLevel <= field_188)) {
            uVar7 = (long)m_baseLevel;
            do {
                pcVar12 = &columnData.field_8[uVar7];
                if (*pcVar12 != '\0') {
                    this_00 = &field_136[uVar7];
                    this_01 = (SharedArray<std::unique_ptr<LocationData>>*)(*this_00)[arg1_00];
                    if (this_01->empty() == '\0') {
                        uVar8 = this_01->HeapBeginPtr();
                        packetJ.p1<unsigned long>((ID)uVar8);
                        if (uVar8 != 0) {
                            this_02 = (shared_ptr<std::unique_ptr<LocationData>[]>*)(this_01 + 8);
                            arg1_01 = 0;
                            do {
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar13 = (unique_ptr<LocationData>*)(*this_02)[arg1_01];
                                piVar14 = (int*)(*puVar13).operator->();
                                packetJ.pSmartInt2(*piVar14);
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar13 = (unique_ptr<LocationData>*)(*this_02)[arg1_01];
                                lVar15 = (*puVar13).operator->();
                                iVar2 = *(int*)(lVar15 + 4);
                                if (*(unsigned long*)this_01 <= arg1_01) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_01,
                                              *(unsigned long*)this_01 - 1);
                                }
                                puVar13 = (unique_ptr<LocationData>*)(*this_02)[arg1_01];
                                lVar15 = (*puVar13).operator->();
                                packetJ.p1<unsigned long>(iVar2 * 4 + *(int*)(lVar15 + 8));
                                arg1_01 = arg1_01 + 1;
                            } while (uVar8 != arg1_01);
                        }
                    } else {
                        packetJ.p1<unsigned long>(0);
                    }
                }
                bVar3 = (long)uVar7 < (long)field_188;
                uVar7 = uVar7 + 1;
            } while (bVar3);
        }
    }

    // 0x1002105e0
    void PackableArea::UnpackColumnSimple(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ, int arg4) {
        array<unsigned short, 4096ul>* paVar1;
        uint16_t* puVar2;
        uint16_t uVar3;

        if ((arg4 & 2U) != 0) {
            uVar3 = packetJ.g2();
            paVar1 = &field_32[0];
            puVar2 = (uint16_t*)(*paVar1)[(long)(arg1 * 64 + arg2)];
            *puVar2 = uVar3;
        }
        uVar3 = packetJ.g2();
        paVar1 = &field_8[0];
        puVar2 = (uint16_t*)(*paVar1)[(long)(arg1 * 64 + arg2)];
        *puVar2 = uVar3;
    }

    // 0x100210670
    void PackableArea::UnpackColumnComplex(int arg1, int arg2, PacketJ<Array<unsigned char>>& packetJ, int arg4) {
        unsigned long uVar1;
        uint8_t bVar2;
        bool bVar3;
        short sVar5;
        WaterNormalParamsEncoding waterNormalParamsEncoding;
        unsigned int uVar6;
        short* psVar9;
        array<unsigned char, 4096ul>* paVar10;
        uint8_t* pbVar11;
        array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>* paVar12;
        SharedArray<std::unique_ptr<LocationData>>* this_00;
        unique_ptr<LocationData>* puVar13;
        LocationData* pLVar14;
        Array<std::array<unsigned char, 4096ul>>* pAVar15;
        Array<std::array<unsigned short, 4096ul>>* pAVar16;
        Array<std::array<unsigned short, 4096ul>>* arg1_00;
        SharedArray<std::unique_ptr<LocationData>> local_88;
        PacketJ<Array<unsigned char> _>* local_70;
        Array<std::array<unsigned short, 4096ul>>* local_60;
        Array<std::array<unsigned char, 4096ul>>* local_58;
        Array<std::array<unsigned char, 4096ul>>* local_50;
        Array<std::array<unsigned char, 4096ul>>* local_38;

        uint16_t uVar4 = packetJ.g2();
        local_38 = (Array<std::array<unsigned char, 4096ul>>*)(((uint64_t)local_38._2_6_ << 16) | (uint16_t)uVar4);
        PackableArea* local_48 = this;
        array<unsigned short, 4096ul>* paVar7 = &field_8[0];
        unsigned long local_68 = (unsigned long)(arg1 * 64 + arg2);
        uint16_t* puVar8 = (uint16_t*)(*paVar7)[local_68];
        *puVar8 = local_38._0_2_;
        unsigned long local_40 = (unsigned long)(unsigned int)arg4;
        if ((arg4 & 2U) != 0) {
            bVar2 = packetJ.g1();
            uVar1 = local_68;
            if (bVar2 != 0) {
                local_60 = (Array<std::array<unsigned short, 4096ul>>*)&local_48->field_32;
                local_58 = (Array<std::array<unsigned char, 4096ul>>*)&local_48->field_56;
                local_50 = (Array<std::array<unsigned char, 4096ul>>*)&local_48->field_80;
                local_38 = (Array<std::array<unsigned char, 4096ul>>*)(unsigned long)bVar2;
                pAVar15 = nullptr;
                do {
                    sVar5 = packetJ.g2();
                    if (sVar5 != 0) {
                        paVar7 = (array<unsigned short, 4096ul>*)(*local_60)[(unsigned long)pAVar15];
                        psVar9 = (short*)(*paVar7)[uVar1];
                        *psVar9 = sVar5;
                        bVar2 = packetJ.g1();
                        paVar10 = (array<unsigned char, 4096ul>*)(*local_58)[(unsigned long)pAVar15];
                        pbVar11 = (uint8_t*)(*paVar10)[uVar1];
                        *pbVar11 = bVar2 >> 2;
                        paVar10 = (array<unsigned char, 4096ul>*)(*local_50)[(unsigned long)pAVar15];
                        pbVar11 = (uint8_t*)(*paVar10)[uVar1];
                        *pbVar11 = bVar2 & 3;
                    }
                    pAVar15 = pAVar15 + 1;
                } while (local_38 != pAVar15);
            }
        }
        if ((local_40 & 4) != 0) {
            local_48 = (PackableArea*)&local_48->field_136;
            local_40 = (unsigned long)(((unsigned int)(local_40 >> 3) & 3) + 1);
            local_50 = nullptr;
            local_70 = packetJ;
            do {
                bVar2 = packetJ.g1();
                if (bVar2 != 0) {
                    local_60 = (Array<std::array<unsigned short, 4096ul>>*)(unsigned long)bVar2;
                    local_88 = SharedArray((unsigned long)local_60);
                    pAVar15 = local_50;
                    paVar12 = (array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>*)(*local_48)[(
                        unsigned long)local_50];
                    uVar1 = local_68;
                    this_00 = (SharedArray<std::unique_ptr<LocationData>>*)(*paVar12)[local_68];
                    *this_00 = local_88;
                    paVar12 =
                        (array<SharedArray<std::unique_ptr<LocationData>>, 4096ul>*)(*local_48)[(unsigned long)pAVar15];
                    pAVar15 = (Array<std::array<unsigned char, 4096ul>>*)(*paVar12)[uVar1];
                    local_38 = pAVar15 + 8;
                    arg1_00 = nullptr;
                    local_58 = pAVar15;
                    do {
                        waterNormalParamsEncoding = packetJ.gSmart2or4s();
                        uVar6 = packetJ.g1();
                        if (*(Array<std::array<unsigned short, 4096ul>>**)pAVar15 <= arg1_00) {
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", arg1_00,
                                      *(Array<std::array<unsigned short, 4096ul>>**)pAVar15 - 1);
                        }
                        pAVar16 = arg1_00;
                        bVar3 = (unique_ptr<LocationData, std::default_delete<LocationData> _>*)(*(
                                    (shared_ptr<std::unique_ptr<LocationData>[]>*)local_38))[(unsigned long)arg1_00] !=
                                pAVar16;
                        pAVar16 = *(Array<std::array<unsigned short, 4096ul>>**)pAVar15;
                        if (bVar3) {
                            if (pAVar16 <= arg1_00) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_00, pAVar16 - 1);
                            }
                            puVar13 = (unique_ptr<LocationData>*)(*(
                                (shared_ptr<std::unique_ptr<LocationData>[]>*)local_38))[(unsigned long)arg1_00];
                            pLVar14 = (LocationData*)(*puVar13).operator->();
                            pLVar14->Set(waterNormalParamsEncoding, uVar6 >> 2 & 63, uVar6 & 3);
                        } else {
                            if (pAVar16 <= arg1_00) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_00, pAVar16 - 1);
                            }
                            puVar13 = (unique_ptr<LocationData>*)(*(
                                (shared_ptr<std::unique_ptr<LocationData>[]>*)local_38))[(unsigned long)arg1_00];
                            pLVar14 = (LocationData*)operator new(12);
                            new (pLVar14) LocationData(waterNormalParamsEncoding, (uVar6 & 255) >> 2, uVar6 & 3);
                            puVar13->reset(pLVar14);
                            packetJ = local_70;
                            pAVar15 = local_58;
                        }
                        arg1_00 = arg1_00 + 1;
                    } while (local_60 != arg1_00);
                }
                local_50 = (Array<std::array<unsigned char, 4096ul>>*)((long)local_50 + 1);
            } while (local_50 != (Array<std::array<unsigned char, 4096ul>>*)local_40);
        }
    }

    // 0x1002109e0
    bool PackableArea::IsGroundVisible(int arg1, int arg2, int arg3) {
        bool bVar2 = true;
        if (m_baseLevel != arg3) {
            if (!(IsVisibleBelow(arg3, arg1, arg2))) {
                if (!(IsLinkBelow(arg3, arg1, arg2))) {
                    return false;
                }
                bVar2 = m_baseLevel + 1 == arg3;
            } else {
                bVar2 = m_baseLevel == 0;
            }
        }
        return bVar2;
    }

    // 0x100210a50
    bool PackableArea::IsLinkBelow(int arg1, int arg2, int arg3) {
        array<unsigned char, 4096ul>* this_00 = &field_104[(long)arg1];
        uint8_t* pbVar1 = (uint8_t*)(*this_00)[(long)(arg2 * 64 + arg3)];
        return (*pbVar1 & 2) >> 1;
    }

    // 0x100210a90
    bool PackableArea::IsVisibleBelow(int arg1, int arg2, int arg3) {
        array<unsigned char, 4096ul>* this_00 = &field_104[(long)arg1];
        uint8_t* pbVar1 = (uint8_t*)(*this_00)[(long)(arg2 * 64 + arg3)];
        return (*pbVar1 & 8) >> 3;
    }

    // 0x1002111e0
    int PackableArea::GetTargetMapSquareX() {
        return m_soundShape;
    }

    // 0x1002111f0
    int PackableArea::GetTargetMapSquareZ() {
        return m_updateNumber;
    }

    // 0x1002135f0
    int PackableArea::GetBaseLevel() {
        return m_gLCoreProfileVerMinor;
    }

    // 0x100225ea0
    PackableArea::~PackableArea() {
        field_0 = PTR_vtable_100ee8ad8 + 16;
        field_136.~Array();
        field_104.~Array();
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
        field_8.~Array();
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x10020ca00
    void PacketT<Array<unsigned char>>::pSmart1or2s(short arg1) {
        uint64_t in_RAX;
        uint64_t in_register_00000032;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        int iVar1 = (int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1);
        ID id = iVar1 + 64;
        if ((unsigned short)id < 128) {
            p1<unsigned long>(this, id);
        } else if ((short)(arg1 + 16384) < 0) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      218, "pSmart1or2s out of range - val: %d", (((uint64_t)uVar2 << 32) | (uint32_t)iVar1));
        } else {
            p2<unsigned long>(this, arg1 + 49152);
        }
    }

} // namespace jag
