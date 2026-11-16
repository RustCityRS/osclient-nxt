// libs/oldscape/rs2lib/defaults/GraphicsDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::defaults {
    class GraphicsDefaults {
    public:
        GraphicsDefaults();
        void Unpack(jagex3::Js5&);

        // data members, from how the methods use this: 52 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        char _unknown_48[4];
    };

    // 0x1000c4350, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GraphicsDefaults::GraphicsDefaults(): jumps straight to the base-object constructor

    // 0x1000d9aa0, 544 bytes, inline, placed by class name
    // GraphicsDefaults::Unpack(jagex3::Js5&)
    void GraphicsDefaults::Unpack(Js5* param_1) {
        char cVar1;
        undefined4 uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar3;
        undefined8 uVar4;
        char* pcVar5;
        eastl::string local_60[32];
        shared_ptr local_40;

        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        param_1->GetFile(&local_40, DefaultsGroup::GRAPHICS);
        while (true) {
            while (true) {
                while (true) {
                    pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                     (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    cVar1 = pPVar3->g1();
                    if (cVar1 != '\x01')
                        break;
                    pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                     (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    uVar2 = pPVar3->g3();
                    field_0 = uVar2;
                }
                if (cVar1 != '\x02')
                    break;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_4 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_8 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_12 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_16 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_20 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_24 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_28 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_32 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_36 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_40 = uVar2;
                pPVar3 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                uVar2 = pPVar3->gSmart2or4s();
                field_44 = uVar2;
            }
            if (cVar1 == '\0')
                break;
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "defaults/GraphicsDefaults.h",
                                68, "Unknown graphics defaults code: %i", cVar1);
            eastl::string::basic_string(local_60, "Unknown graphics defaults code: %i", cVar1);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            OldscapeClientError::ReportError(pcVar5, (Callstack*)0);
            eastl::string::~basic_string(local_60);
        }
        local_40.~shared_ptr();
    }

    // 0x1001288a0, 32 bytes, base-object constructor, inline, placed by class name
    // GraphicsDefaults::GraphicsDefaults()
    void GraphicsDefaults::GraphicsDefaults() {
        field_32 = 4294967295;
        field_36 = 4294967295;
        field_40 = 4294967295;
        field_44 = 4294967295;
        field_16 = 4294967295;
        field_20 = 4294967295;
        field_24 = 4294967295;
        field_28 = 4294967295;
        field_0 = 4294967295;
        field_4 = 4294967295;
        field_8 = 4294967295;
        field_12 = 4294967295;
    }

} // namespace jag::oldscape::defaults
