// libs/game/runetek5/config/vartype/constants/VarDomainType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class VarDomainType {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainType();
        virtual void __pure_slot_2() = 0;
        VarDomainType* GetByID(unsigned int arg1);
        void Initialise();
        void Destroy();
        VarDomainType(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3, bool arg4);
        static int64_t PLAYER;
        static int64_t NPC;
        static int64_t CLIENT;
        static int64_t OBJECT;
        static int64_t CLAN;
        static int64_t CLAN_SETTING;
        static int64_t PLAYER_GROUP;
        static uint8_t LOOKUP_MAP[56];

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        Js5ConfigGroup* field_16;
        bool field_24;
        bool field_25;
    };

    class VarDomainTypeClient {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainTypeClient();
        virtual uint8_t* GetDefaultValue(const VarType* varType) const;
        VarDomainTypeClient(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3, bool arg4);

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        Js5ConfigGroup* field_16;
        bool field_24;
        bool field_25;
        uint8_t _unknown_26[38];
    };

    class VarDomainTypeNormal {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainTypeNormal();
        virtual void GetDefaultValue(const VarType* varType) const;
        VarDomainTypeNormal(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3, bool arg4);

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        Js5ConfigGroup* field_16;
        bool field_24;
        bool field_25;
        uint8_t _unknown_26[6];
    };

    class VarDomainTypePlayerNPC {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainTypePlayerNPC();
        virtual uint8_t* GetDefaultValue(const VarType* varType) const;
        VarDomainTypePlayerNPC(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3, bool arg4);

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        Js5ConfigGroup* field_16;
        bool field_24;
        bool field_25;
        uint8_t _unknown_26[38];
    };

    // 0x1004c5c60
    VarDomainType* VarDomainType::GetByID(unsigned int arg1) {
        uint64_t* puVar1 = &LOOKUP_MAP[arg1];
        return (VarDomainType*)*puVar1;
    }

    // 0x1004c8700
    VarDomainType::VarDomainType(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3, bool arg4)
        : field_8(arg1), field_16(js5ConfigGroup), field_24(arg3), field_25(arg4) {
        uint64_t extraout_RDX;
        pair<unsigned int const, VarDomainType*> local_38[16];
        uint32_t local_28[2];

        local_28[0] = eastl::make_pair<unsigned int&, VarDomainType*>(field_8, this);
        uint64_t local_20 = extraout_RDX;
        local_38->pair<unsigned int, VarDomainType*, void>(*local_28);
        auto local_50 = LOOKUP_MAP.insert(*local_38);
    }

} // namespace jag::game

namespace jag {
    // 0x1004c5c90
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart2or4s() {
        unsigned short uVar1;
        unsigned int uVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            uVar2 = g4(this);
            uVar2 = uVar2 & 2147483647;
        } else {
            uVar1 = g2(this);
            uVar2 = 4294967295;
            if (uVar1 != 32767) {
                uVar2 = (unsigned int)uVar1;
            }
        }
        return uVar2;
    }

} // namespace jag
