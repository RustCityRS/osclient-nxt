// libs/game/runetek5/config/vartype/constants/VarDomainType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class VarDomainType {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainType();
        virtual void __pure_slot_2() = 0;
        GetByID(unsigned int);
        void Initialise();
        void Destroy();
        VarDomainType(unsigned int, Js5ConfigGroup const*, bool, bool);
        static /* 8 bytes */ PLAYER;
        static /* 8 bytes */ NPC;
        static /* 8 bytes */ CLIENT;
        static /* 8 bytes */ OBJECT;
        static /* 8 bytes */ CLAN;
        static /* 8 bytes */ CLAN_SETTING;
        static /* 8 bytes */ PLAYER_GROUP;
        static /* 56 bytes */ LOOKUP_MAP;

        // data members, from how the methods use this: 26 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint field_8;       // offset 8
        char _unknown_12[4];
        Js5ConfigGroup* field_16; // offset 16
        bool field_24;            // offset 24
        bool field_25;            // offset 25
    };

    class VarDomainTypeClient {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainTypeClient();
        virtual GetDefaultValue(VarType const*) const;
        VarDomainTypeClient(unsigned int, Js5ConfigGroup const*, bool, bool);

        // data members, from how the methods use this: 64 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint field_8;       // offset 8
        char _unknown_12[4];
        Js5ConfigGroup* field_16; // offset 16
        bool field_24;            // offset 24
        bool field_25;            // offset 25
        char _unknown_26[38];
    };

    class VarDomainTypeNormal {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainTypeNormal();
        virtual void GetDefaultValue(VarType const*) const;
        VarDomainTypeNormal(unsigned int, Js5ConfigGroup const*, bool, bool);

        // data members, from how the methods use this: 32 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint field_8;       // offset 8
        char _unknown_12[4];
        Js5ConfigGroup* field_16; // offset 16
        bool field_24;            // offset 24
        bool field_25;            // offset 25
        char _unknown_26[6];
    };

    class VarDomainTypePlayerNPC {
    public:
        // virtual methods in vtable order
        virtual ~VarDomainTypePlayerNPC();
        virtual GetDefaultValue(VarType const*) const;
        VarDomainTypePlayerNPC(unsigned int, Js5ConfigGroup const*, bool, bool);

        // data members, from how the methods use this: 64 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint field_8;       // offset 8
        char _unknown_12[4];
        Js5ConfigGroup* field_16; // offset 16
        bool field_24;            // offset 24
        bool field_25;            // offset 25
        char _unknown_26[38];
    };

    // 0x1004c5c60, 48 bytes, inline, placed by class name and debug map
    // VarDomainType::GetByID(unsigned int)
    undefined8 VarDomainType::GetByID(uint param_1) {
        undefined8* puVar1;
        uint local_c;

        local_c = param_1;
        puVar1 = (undefined8*)eastl::hash_map<
            unsigned int, VarDomainType*, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, eastl::allocator,
            false>::operator[]((hash_map<unsigned int, VarDomainType*, eastl::hash<unsigned int>,
                                         eastl::equal_to<unsigned int>, eastl::allocator, false>*)&LOOKUP_MAP,
                               &local_c);
        return *puVar1;
    }

    // 0x1004c5f50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VarDomainTypePlayerNPC::VarDomainTypePlayerNPC(unsigned int, Js5ConfigGroup const*, bool, bool): jumps straight to the base-object constructor

    // 0x1004c5f60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VarDomainTypeClient::VarDomainTypeClient(unsigned int, Js5ConfigGroup const*, bool, bool): jumps straight to the base-object constructor

    // 0x1004c5f70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VarDomainTypeNormal::VarDomainTypeNormal(unsigned int, Js5ConfigGroup const*, bool, bool): jumps straight to the base-object constructor

    // 0x1004c8700, 112 bytes, base-object constructor, inline, placed by class name
    // VarDomainType::VarDomainType(unsigned int, Js5ConfigGroup const*, bool, bool)
    void VarDomainType::VarDomainType(uint param_1, Js5ConfigGroup* param_2, bool param_3, bool param_4) {
        undefined8 extraout_RDX;
        pair local_50[24];
        pair<unsigned int const, VarDomainType*> local_38[16];
        undefined4 local_28[2];
        undefined8 local_20;
        VarDomainType* local_18;

        field_0 = PTR_vtable_100ee7f38 + 16;
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_3;
        field_25 = param_4;
        local_18 = this;
        local_28[0] = eastl::make_pair<unsigned int&, VarDomainType*>(&field_8, &local_18);
        local_20 = extraout_RDX;
        eastl::pair<unsigned int const, VarDomainType*>::pair<unsigned int, VarDomainType*, void>(local_38,
                                                                                                  (pair*)local_28);
        eastl::hashtable<unsigned int, eastl::pair<unsigned int const, VarDomainType*>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned int const, VarDomainType*>>,
                         eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::insert(local_50);
    }

} // namespace jag::game

namespace jag {
    // 0x1004c5c90, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart2or4s()
    uint PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart2or4s(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ushort uVar1;
        uint uVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            uVar2 = g4(this);
            uVar2 = uVar2 & 2147483647;
        } else {
            uVar1 = g2(this);
            uVar2 = 4294967295;
            if (uVar1 != 32767) {
                uVar2 = (uint)uVar1;
            }
        }
        return uVar2;
    }

} // namespace jag
