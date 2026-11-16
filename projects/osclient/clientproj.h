// projects/osclient/clientproj.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientProj {
    public:
        // virtual methods in vtable order
        virtual ~ClientProj();
        virtual ClientProj* GetTempModel(int arg1);
        virtual bool IsLit() const;
        virtual bool IsUnlit() const;
        virtual bool IsClientLocAnim() const;
        void SetTarget(int arg1, int arg2, int arg3, int arg4);
        ClientProj(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                   int arg11);
        ClientProj(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                   int arg11, int arg12);
        void Move(int arg1);

    private:
        uint8_t _unknown_8[8];
        long field_16;
        int field_24;
        int field_28;
        int field_32;
        int field_36;
        int field_40;
        int field_44;
        int field_48;
        int field_52;
        int field_56;
        int field_60;
        int field_64;
        int field_68;
        int field_72;
        int field_76;
        uint8_t field_80;
        uint8_t _unknown_81[7];
        double field_88;
        double field_96;
        double field_104;
        unsigned int field_112;
        unsigned int field_116;
        int field_120;
        uint8_t _unknown_124[4];
        double field_128;
        double field_136;
        double field_144;
        double field_152;
        double field_160;
        uint8_t _unknown_168[16];
        int field_184;
        int field_188;
        uint8_t _unknown_192[4];
    };

    // 0x10011ee30
    void PacketJ<Array<unsigned char>>::PacketT(const Array<unsigned char>& arg1) {
        new (this) PacketT(arg1);
    }

    // 0x100131f60
    ClientProj::~ClientProj() {
        field_168.~shared_ptr();
        destruct<highlight::NpcUID*>();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10011ef10
    PacketReaderMixin<PacketT<Array<unsigned char>>>*
    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringNoConversion(bool arg1) {
        bool in_DL;
        uint64_t in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1),
            (eastl::string*)this, in_DL);
        return this;
    }

} // namespace jag
