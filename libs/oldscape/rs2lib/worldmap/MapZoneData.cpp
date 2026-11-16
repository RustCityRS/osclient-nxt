// libs/oldscape/rs2lib/worldmap/MapZoneData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MapZoneData {
    public:
        // virtual methods in vtable order
        virtual void DeserialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        virtual void DeserialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        virtual unsigned int GetZoneX();
        virtual unsigned int GetZoneZ();
        virtual void SerialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ);
        virtual void SerialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ);
        virtual uint64_t GeneratePreviewInner(Array<Array<int>> arg1, int arg2, int arg3);
        MapZoneData();
        MapZoneData(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                    int arg10);
        bool TargetContainsMapTile(int arg1, int arg2);
        unsigned int HashCode();
        unsigned int GetTargetZoneX();
        unsigned int GetTargetZoneZ();
        ~MapZoneData();

    private:
        uint8_t _unknown_8[120];
        int field_128;
        int field_132;
        uint8_t _unknown_136[24];
        unsigned int field_160;
        unsigned int field_164;
        unsigned int field_168;
        char field_172;
        uint8_t field_173;
        uint8_t _unknown_174[2];
        unsigned int field_176;
        unsigned int field_180;
        unsigned int field_184;
        int field_188;
        unsigned int m_zoneX;
        unsigned int m_zoneZ;
        unsigned int m_targetZoneX;
        unsigned int m_targetZoneZ;
        uint8_t _unknown_208[4];
    };

    // 0x10020cc80
    MapZoneData::MapZoneData() : PackableArea() {}

    // 0x10020ccb0
    MapZoneData::MapZoneData(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                             int arg10)
        : PackableArea(arg1, arg2, arg3, arg4, arg7, arg8), m_zoneX(arg5), m_zoneZ(arg6), m_targetZoneX(arg9),
          m_targetZoneZ(arg10) {}

    // 0x10020cd60
    void MapZoneData::DeserialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) {
        uint8_t bVar2;
        unsigned short uVar3;
        int iVar4;

        if (packetJ.g1() == '\x01') {
            bVar2 = packetJ.g1();
            field_168 = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            field_184 = (unsigned int)bVar2;
            uVar3 = packetJ.g2();
            field_160 = (unsigned int)uVar3;
            uVar3 = packetJ.g2();
            field_164 = (unsigned int)uVar3;
            bVar2 = packetJ.g1();
            m_zoneX = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            m_zoneZ = (unsigned int)bVar2;
            uVar3 = packetJ.g2();
            field_176 = (unsigned int)uVar3;
            uVar3 = packetJ.g2();
            field_180 = (unsigned int)uVar3;
            bVar2 = packetJ.g1();
            m_targetZoneX = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            m_targetZoneZ = (unsigned int)bVar2;
            iVar4 = packetJ.gSmart2or4();
            field_128 = iVar4;
            iVar4 = packetJ.gSmart2or4();
            field_132 = iVar4;
        } else {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/worldmap/"
                      "MapZoneData.cpp",
                      36, "MapZoneData.unpack - composite map entry is not for a zone!");
            errorCapture.Raise("MapZoneData.unpack - composite map entry is not for a zone!");
        }
    }

    // 0x10020cea0
    void MapZoneData::DeserialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) {
        uint8_t bVar2;
        uint8_t bVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        int iVar7;
        char* str;
        int iVar8;
        ErrorCapture* local_38;

        auto puVar6 = std::min<int>(field_184, 4);
        field_184 = *puVar6;
        field_8.set_max_size(1, 3);
        field_32.set_max_size((long)(int)field_184, 3);
        field_56.set_max_size((long)(int)field_184, 3);
        field_80.set_max_size((long)(int)field_184, 3);
        field_136.set_max_size((long)(int)field_184, 3);
        if (packetJ.g1() == '\x01') {
            local_38 = errorCapture;
            bVar2 = packetJ.g1();
            uVar4 = packetJ.g1();
            uVar5 = packetJ.g1();
            bVar3 = packetJ.g1();
            str = "MapZoneData.unpack - area entry is not for the same target as the composite map entry!";
            errorCapture = local_38;
            if ((((field_176 == (unsigned int)bVar2) && (field_180 == (uVar4 & 255))) &&
                 (m_targetZoneX == (uVar5 & 255))) &&
                (m_targetZoneZ == (unsigned int)bVar3)) {
                iVar8 = 0;
                do {
                    iVar7 = 0;
                    do {
                        UnpackColumn(iVar8 + m_targetZoneX * 8, iVar7 + m_targetZoneZ * 8, packetJ);
                        iVar7 = iVar7 + 1;
                    } while (iVar7 != 8);
                    iVar8 = iVar8 + 1;
                } while (iVar8 != 8);
                return;
            }
        } else {
            str = "MapZoneData.unpack - area entry is not for a zone!";
        }
        errorCapture.Raise(str);
    }

    // 0x10020d040
    bool MapZoneData::TargetContainsMapTile(int arg1, int arg2) {
        int iVar2;

        int iVar1 = m_targetZoneX * 8;
        if (((arg1 < iVar1) || (iVar2 = m_targetZoneZ * 8, arg2 < iVar2)) || (iVar1 + 8 <= arg1)) {
            return false;
        }
        return arg2 < iVar2 + 8;
    }

    // 0x10020d080
    unsigned int MapZoneData::HashCode() {
        return m_targetZoneZ << 24 | m_targetZoneX << 16 | field_180 << 8 | field_176;
    }

    // 0x10020d0b0
    unsigned int MapZoneData::GetZoneX() {
        return m_zoneX;
    }

    // 0x10020d0c0
    unsigned int MapZoneData::GetZoneZ() {
        return m_zoneZ;
    }

    // 0x10020d0d0
    unsigned int MapZoneData::GetTargetZoneX() {
        return m_targetZoneX;
    }

    // 0x10020d0e0
    unsigned int MapZoneData::GetTargetZoneZ() {
        return m_targetZoneZ;
    }

    // 0x10020d0f0
    void MapZoneData::SerialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ) {
        bool bVar1;
        int arg2;

        packetJ.p1<unsigned long>(1);
        packetJ.p1<unsigned long>(field_176);
        packetJ.p1<unsigned long>(field_180);
        packetJ.p1<unsigned long>(m_targetZoneX);
        packetJ.p1<unsigned long>(m_targetZoneZ);
        int arg1 = m_zoneX << 3;
        do {
            arg2 = m_zoneZ << 3;
            do {
                PackColumn(arg1, arg2, packetJ);
                bVar1 = arg2 < (int)(m_zoneZ * 8 + 7);
                arg2 = arg2 + 1;
            } while (bVar1);
            bVar1 = arg1 < (int)(m_zoneX * 8 + 7);
            arg1 = arg1 + 1;
        } while (bVar1);
    }

    // 0x10020d1c0
    void MapZoneData::SerialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ) {
        packetJ.p1<unsigned long>(1);
        packetJ.p1<unsigned long>(field_168);
        packetJ.p1<unsigned long>(field_184);
        packetJ.p2<unsigned long>((unsigned short)field_160);
        packetJ.p2<unsigned long>((unsigned short)field_164);
        packetJ.p1<unsigned long>(m_zoneX);
        packetJ.p1<unsigned long>(m_zoneZ);
        packetJ.p2<unsigned long>((unsigned short)field_176);
        packetJ.p2<unsigned long>((unsigned short)field_180);
        packetJ.p1<unsigned long>(m_targetZoneX);
        packetJ.p1<unsigned long>(m_targetZoneZ);
        packetJ.pSmart1or2((unsigned short)field_128);
        packetJ.pSmart1or2((unsigned short)field_132);
    }

    // 0x10020d300
    uint64_t MapZoneData::GeneratePreviewInner(Array<Array<int>> arg1, int arg2, int arg3) {
        uint32_t uVar5;
        Array<int>* this_00;
        uint32_t* puVar7;
        unsigned long arg1_00;
        long lVar8;

        unsigned int uVar1 = field_176;
        unsigned int uVar2 = field_180;
        unsigned int uVar3 = m_targetZoneX;
        unsigned int uVar4 = m_targetZoneZ;
        long lVar6 = arg1->end();
        long local_38 = 0;
        do {
            lVar8 = 0;
            arg1_00 = ~(long)(int)((uVar2 * 64 - arg3) + uVar4 * 8) + lVar6;
            do {
                uVar5 = GetGroundColour((int)local_38 + m_zoneX * 8, (int)lVar8 + m_zoneZ * 8);
                this_00 = (Array<int>*)(*arg1)[arg1_00];
                puVar7 = (uint32_t*)(*this_00)[(long)(int)((uVar1 * 64 - arg2) + uVar3 * 8 + (int)local_38)];
                *puVar7 = uVar5;
                lVar8 = lVar8 + 1;
                arg1_00 = arg1_00 - 1;
            } while (lVar8 != 8);
            local_38 = local_38 + 1;
        } while (local_38 != 8);
        return 8;
    }

    // 0x100225e90: MapZoneData::~MapZoneData() has the same machine code as MapSquareData::~MapSquareData()

} // namespace jag::oldscape::rs2lib::worldmap
