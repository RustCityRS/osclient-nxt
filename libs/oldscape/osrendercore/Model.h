// libs/oldscape/osrendercore/Model.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class ModelDash3dToRT7Exporter {
    public:
        ModelDash3dToRT7Exporter* Export(dash3d::ModelUnlitImpl&, bool);

        // data members, from how the methods use this: 40 bytes
        byte field_0; // offset 0
        char _unknown_1[7];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    class ModelWrapper {
    public:
        ModelWrapper(dash3d::ModelUnlitImpl&);
        ~ModelWrapper();
        Widify(Array<short, eastl::allocator> const*);

        // data members, from how the methods use this: 232 bytes
        char _unknown_0[8];
        Array<int, eastl::allocator>* field_8; // offset 8
        char _unknown_16[16];
        ModelUnlitImpl* field_32; // offset 32
        undefined4 field_40;      // offset 40
        undefined1 field_44;      // offset 44
        char _unknown_45[3];
        undefined8 field_48; // offset 48
        char _unknown_56[24];
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
    };

} // namespace jag::oldscape::rseven

namespace jag::oldscape::dash3d {
    class ModelAppendList {
    public:
        ModelAppendList();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

} // namespace jag::oldscape::dash3d
