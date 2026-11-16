// libs/oldscape/rs2lib/defaults/GraphicsDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::defaults {
    class GraphicsDefaults {
    public:
        GraphicsDefaults();
        void Unpack(jagex3::Js5& js5);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint32_t field_20;
        uint32_t field_24;
        uint32_t field_28;
        uint32_t field_32;
        uint32_t field_36;
        uint32_t field_40;
        uint32_t field_44;
        uint8_t _unknown_48[4];
    };

    // 0x1000d9aa0
    void GraphicsDefaults::Unpack(jagex3::Js5& js5) {
        uint8_t bVar1;
        uint32_t uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar3;
        eastl::string local_60;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        js5.GetFile(local_40, DefaultsGroup::GRAPHICS);
        while (true) {
            while (true) {
                while (true) {
                    pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                    bVar1 = pPVar3->g1();
                    if (bVar1 != 1)
                        break;
                    pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                    uVar2 = pPVar3->g3();
                    field_0 = uVar2;
                }
                if (bVar1 != 2)
                    break;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_4 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_8 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_12 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_16 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_20 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_24 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_28 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_32 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_36 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_40 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                uVar2 = pPVar3->gSmart2or4s();
                field_44 = uVar2;
            }
            if (bVar1 == 0)
                break;
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/defaults/"
                      "GraphicsDefaults.h",
                      68, "Unknown graphics defaults code: %i", (unsigned int)bVar1);
            local_60 = eastl::string((CtorSprintf*)"Unknown graphics defaults code: %i",
                                     (char*)(unsigned long)(unsigned int)bVar1);
            OldscapeClientError::ReportError((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), nullptr);
        }
    }

    // 0x1001288a0
    GraphicsDefaults::GraphicsDefaults()
        : field_32(4294967295), field_36(4294967295), field_40(4294967295), field_44(4294967295), field_16(4294967295),
          field_20(4294967295), field_24(4294967295), field_28(4294967295), field_0(4294967295), field_4(4294967295),
          field_8(4294967295), field_12(4294967295) {}

} // namespace jag::oldscape::defaults
