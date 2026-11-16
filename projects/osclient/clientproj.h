// projects/osclient/clientproj.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientProj {
    public:
        // virtual methods in vtable order
        virtual ~ClientProj();
        virtual ClientProj* GetTempModel(int);
        virtual IsLit() const;
        virtual IsUnlit() const;
        virtual IsClientLocAnim() const;
        void SetTarget(int, int, int, int);
        ClientProj(int, int, int, int, int, int, int, int, int, int, int);
        ClientProj(int, int, int, int, int, int, int, int, int, int, int, int);
        void Move(int);

        // data members, from how the methods use this: 196 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        long field_16;       // offset 16
        int field_24;        // offset 24
        int field_28;        // offset 28
        int field_32;        // offset 32
        int field_36;        // offset 36
        int field_40;        // offset 40
        int field_44;        // offset 44
        int field_48;        // offset 48
        int field_52;        // offset 52
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        int field_72;        // offset 72
        int field_76;        // offset 76
        undefined1 field_80; // offset 80
        char _unknown_81[7];
        double field_88;  // offset 88
        double field_96;  // offset 96
        double field_104; // offset 104
        uint field_112;   // offset 112
        uint field_116;   // offset 116
        int field_120;    // offset 120
        char _unknown_124[4];
        double field_128;     // offset 128
        double field_136;     // offset 136
        double field_144;     // offset 144
        double field_152;     // offset 152
        double field_160;     // offset 160
        shared_ptr field_168; // offset 168
        int field_184;        // offset 184
        int field_188;        // offset 188
        char _unknown_192[4];
    };

    // 0x10011ee30, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(Array<unsigned char, eastl::allocator> const&)
    void PacketJ<Array<unsigned char, eastl::allocator>>::PacketT(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                  Array* param_1) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1);
    }

    // 0x100124af0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientProj::~ClientProj(): jumps straight to the base-object destructor

    // 0x100124b00, 32 bytes, deleting destructor, inline, placed by class name
    // ClientProj::~ClientProj()
    void ClientProj::~ClientProj() {
        ~ClientProj(this);
        operator_delete(this);
    }

    // 0x100131f60, 48 bytes, base-object destructor, inline, placed by class name
    // ClientProj::~ClientProj()
    void ClientProj::~ClientProj() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_168->~shared_ptr();
        eastl::destruct<highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10011ef10, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringNoConversion(bool)
    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, bool param_1) {
        bool in_DL;
        undefined7 in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                               CONCAT71(in_register_00000031, param_1),
                                           (basic_string*)this, in_DL);
        return this;
    }

} // namespace jag
