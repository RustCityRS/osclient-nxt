// libs/oldscape/rs2lib/worldmap/MapZoneData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MapZoneData {
    public:
        // virtual methods in vtable order
        virtual void DeserialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&);
        virtual void DeserialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&);
        virtual uint GetZoneX();
        virtual uint GetZoneZ();
        virtual void SerialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator>>&);
        virtual void SerialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator>>&);
        virtual GeneratePreviewInner(Array<Array<int, eastl::allocator>, eastl::allocator>, int, int);
        MapZoneData();
        MapZoneData(int, int, int, int, int, int, int, int, int, int);
        bool TargetContainsMapTile(int, int);
        uint HashCode();
        uint GetTargetZoneX();
        uint GetTargetZoneZ();
        ~MapZoneData();

        // data members, from how the methods use this: 212 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[120];
        int field_128;  // offset 128
        uint field_132; // offset 132
        char _unknown_136[24];
        uint field_160;       // offset 160
        uint field_164;       // offset 164
        uint field_168;       // offset 168
        char field_172;       // offset 172
        undefined1 field_173; // offset 173
        char _unknown_174[2];
        uint field_176;     // offset 176
        uint field_180;     // offset 180
        uint field_184;     // offset 184
        int field_188;      // offset 188
        uint m_zoneX;       // offset 192
        uint m_zoneZ;       // offset 196
        uint m_targetZoneX; // offset 200
        uint m_targetZoneZ; // offset 204
        char _unknown_208[4];
    };

    // 0x10020cc80, 32 bytes, base-object constructor, placed by class name and debug map
    // MapZoneData::MapZoneData()
    void MapZoneData::MapZoneData() {
        new (this) PackableArea();
        field_0 = &PTR_DeserialiseCompositeMetaData_100ef7590;
    }

    // 0x10020cca0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapZoneData::MapZoneData(): jumps straight to the base-object constructor

    // 0x10020ccb0, 112 bytes, base-object constructor, placed by class name and debug map
    // MapZoneData::MapZoneData(int, int, int, int, int, int, int, int, int, int)
    void MapZoneData::MapZoneData(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7, int param_8, int param_9, int param_10) {
        new (this) PackableArea(param_1, param_2, param_3, param_4, param_7, param_8);
        field_0 = &PTR_DeserialiseCompositeMetaData_100ef7590;
        m_zoneX = param_5;
        m_zoneZ = param_6;
        m_targetZoneX = param_9;
        m_targetZoneZ = param_10;
    }

    // 0x10020cd20, 64 bytes, complete-object constructor, placed by class name and debug map
    // MapZoneData::MapZoneData(int, int, int, int, int, int, int, int, int, int)
    void MapZoneData::MapZoneData(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7, int param_8, int param_9, int param_10) {
        MapZoneData(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);
    }

    // 0x10020cd60, 320 bytes, placed by class name and debug map
    // MapZoneData::DeserialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    void MapZoneData::DeserialiseCompositeMetaData(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        int iVar4;
        uint uVar5;
        undefined8 uVar6;

        cVar1 = param_1->g1();
        if (cVar1 == '\x01') {
            bVar2 = param_1->g1();
            field_168 = (uint)bVar2;
            bVar2 = param_1->g1();
            field_184 = (uint)bVar2;
            uVar3 = param_1->g2();
            field_160 = (uint)uVar3;
            uVar3 = param_1->g2();
            field_164 = (uint)uVar3;
            bVar2 = param_1->g1();
            m_zoneX = (uint)bVar2;
            bVar2 = param_1->g1();
            m_zoneZ = (uint)bVar2;
            uVar3 = param_1->g2();
            field_176 = (uint)uVar3;
            uVar3 = param_1->g2();
            field_180 = (uint)uVar3;
            bVar2 = param_1->g1();
            m_targetZoneX = (uint)bVar2;
            bVar2 = param_1->g1();
            m_targetZoneZ = (uint)bVar2;
            iVar4 = param_1->gSmart2or4();
            field_128 = iVar4;
            uVar5 = param_1->gSmart2or4();
            field_132 = uVar5;
        } else {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "worldmap/MapZoneData.cpp",
                                36, "MapZoneData.unpack - composite map entry is not for a zone!");
            param_2->Raise("MapZoneData.unpack - composite map entry is not for a zone!");
        }
    }

    // 0x10020cea0, 416 bytes, placed by class name and debug map
    // MapZoneData::DeserialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    void MapZoneData::DeserialiseAreaGeography(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        byte bVar2;
        byte bVar3;
        uint uVar4;
        uint uVar5;
        uint* puVar6;
        int iVar7;
        char* pcVar8;
        int iVar9;
        int local_3c;
        ErrorCapture* local_38;

        local_3c = 4;
        puVar6 = (uint*)std::min<int>((int*)&field_184, &local_3c);
        field_184 = *puVar6;
        (&field_8, 1, 3)->set_max_size();
        (&field_32, (long)(int)field_184, 3)->set_max_size();
        (&field_56, (long)(int)field_184, 3)->set_max_size();
        (&field_80, (long)(int)field_184, 3)->set_max_size();
        (&field_136, (long)(int)field_184, 3)->set_max_size();
        cVar1 = param_1->g1();
        if (cVar1 == '\x01') {
            local_38 = param_2;
            bVar2 = param_1->g1();
            uVar4 = param_1->g1();
            uVar5 = param_1->g1();
            bVar3 = param_1->g1();
            pcVar8 = "MapZoneData.unpack - area entry is not for the same target as the composite map entry!";
            param_2 = local_38;
            if ((((field_176 == (uint)bVar2) && (field_180 == (uVar4 & 255))) && (m_targetZoneX == (uVar5 & 255))) &&
                (m_targetZoneZ == (uint)bVar3)) {
                iVar9 = 0;
                do {
                    iVar7 = 0;
                    do {
                        UnpackColumn(iVar9 + m_targetZoneX * 8, iVar7 + m_targetZoneZ * 8, param_1);
                        iVar7 = iVar7 + 1;
                    } while (iVar7 != 8);
                    iVar9 = iVar9 + 1;
                } while (iVar9 != 8);
                return;
            }
        } else {
            pcVar8 = "MapZoneData.unpack - area entry is not for a zone!";
        }
        param_2->Raise(pcVar8);
    }

    // 0x10020d040, 64 bytes, placed by class name and debug map
    // MapZoneData::TargetContainsMapTile(int, int)
    bool MapZoneData::TargetContainsMapTile(int param_1, int param_2) {
        int iVar1;
        int iVar2;

        iVar1 = m_targetZoneX * 8;
        if (((param_1 < iVar1) || (iVar2 = m_targetZoneZ * 8, param_2 < iVar2)) || (iVar1 + 8 <= param_1)) {
            return false;
        }
        return param_2 < iVar2 + 8;
    }

    // 0x10020d080, 48 bytes, placed by class name and debug map
    // MapZoneData::HashCode()
    uint MapZoneData::HashCode() {
        return m_targetZoneZ << 24 | m_targetZoneX << 16 | field_180 << 8 | field_176;
    }

    // 0x10020d0b0, 16 bytes, placed by class name and debug map
    // MapZoneData::GetZoneX()
    uint MapZoneData::GetZoneX() {
        return m_zoneX;
    }

    // 0x10020d0c0, 16 bytes, placed by class name and debug map
    // MapZoneData::GetZoneZ()
    uint MapZoneData::GetZoneZ() {
        return m_zoneZ;
    }

    // 0x10020d0d0, 16 bytes, placed by class name and debug map
    // MapZoneData::GetTargetZoneX()
    uint MapZoneData::GetTargetZoneX() {
        return m_targetZoneX;
    }

    // 0x10020d0e0, 16 bytes, placed by class name and debug map
    // MapZoneData::GetTargetZoneZ()
    uint MapZoneData::GetTargetZoneZ() {
        return m_targetZoneZ;
    }

    // 0x10020d0f0, 208 bytes, placed by class name and debug map
    // MapZoneData::SerialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void MapZoneData::SerialiseAreaGeography(PacketJ* param_1) {
        bool bVar1;
        int iVar2;
        int iVar3;

        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 1);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_176);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_180);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)m_targetZoneX);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)m_targetZoneZ);
        iVar3 = m_zoneX << 3;
        do {
            iVar2 = m_zoneZ << 3;
            do {
                PackColumn(iVar3, iVar2, param_1);
                bVar1 = iVar2 < (int)(m_zoneZ * 8 + 7);
                iVar2 = iVar2 + 1;
            } while (bVar1);
            bVar1 = iVar3 < (int)(m_zoneX * 8 + 7);
            iVar3 = iVar3 + 1;
        } while (bVar1);
    }

    // 0x10020d1c0, 224 bytes, placed by class name and debug map
    // MapZoneData::SerialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void MapZoneData::SerialiseCompositeMetaData(PacketJ* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 1);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_168);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_184);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_160);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_164);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)m_zoneX);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)m_zoneZ);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_176);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_180);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)m_targetZoneX);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)m_targetZoneZ);
        param_1->pSmart1or2((ushort)field_128);
        param_1->pSmart1or2((ushort)field_132);
    }

    // 0x10020d300, 272 bytes, placed by class name and debug map
    // MapZoneData::GeneratePreviewInner(Array<Array<int, eastl::allocator>, eastl::allocator>, int, int)
    undefined8 MapZoneData::GeneratePreviewInner(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_2,
                                                 int param_3, int param_4) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        undefined4 uVar5;
        long lVar6;
        Array<int, eastl::allocator>* this_00;
        undefined4* puVar7;
        ulong uVar8;
        long lVar9;
        long local_38;

        uVar1 = field_176;
        uVar2 = field_180;
        uVar3 = m_targetZoneX;
        uVar4 = m_targetZoneZ;
        lVar6 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_2);
        local_38 = 0;
        do {
            lVar9 = 0;
            uVar8 = ~(long)(int)((uVar2 * 64 - param_4) + uVar4 * 8) + lVar6;
            do {
                uVar5 = GetGroundColour((int)local_38 + m_zoneX * 8, (int)lVar9 + m_zoneZ * 8);
                this_00 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)param_2, uVar8);
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    this_00, (long)(int)((uVar1 * 64 - param_3) + uVar3 * 8 + (int)local_38));
                *puVar7 = uVar5;
                lVar9 = lVar9 + 1;
                uVar8 = uVar8 - 1;
            } while (lVar9 != 8);
            local_38 = local_38 + 1;
        } while (local_38 != 8);
        return 8;
    }

    // 0x100225e80: the linker folded this into MapSquareData::~MapSquareData(), which has identical code
    MapZoneData::~MapZoneData();

    // 0x100225e90: the linker folded this into MapSquareData::~MapSquareData(), which has identical code
    MapZoneData::~MapZoneData();

} // namespace jag::oldscape::rs2lib::worldmap
