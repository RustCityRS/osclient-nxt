// libs/game/shared/framework/gwc/GWCClient.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

namespace jag::game {
    class GWCClient {
    public:
        long GetWorld(unsigned int) const;
        void Reset();
        bool Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeStatic(PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeStatus(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 88 bytes
        char field_0; // offset 0
        char _unknown_1[63];
        int field_64; // offset 64
        int field_68; // offset 68
        int field_72; // offset 72
        char _unknown_76[12];
    };

    // 0x1006e18b0, 128 bytes, placed by class name and debug map
    // GWCClient::GetWorld(unsigned int) const
    long GWCClient::GetWorld(uint param_1) {
        eastl local_30[16];
        undefined1 local_20[16];

        if (((field_0 != '\0') && (field_64 <= (int)param_1)) && ((int)param_1 <= field_68)) {
            local_20._0_4_ = param_1 - field_64;
            local_30 = (eastl[16])(&field_8, (uint*)local_20)->find();
            local_20 = (&field_8)->end();
            if (eastl::operator!=(local_30, (hashtable_iterator_base*)local_20, local_20._8_8_)) {
                return local_30->HeapBeginPtr() + 8;
            }
        }
        return 0;
    }

    // 0x1006e19c0, 48 bytes, placed by class name and debug map
    // GWCClient::Reset()
    void GWCClient::Reset() {
        (&field_8)->clear();
        (&field_80, 0, 0)->set_max_size();
        field_0 = '\0';
    }

    // 0x1006e1b70, 96 bytes, placed by class name and debug map
    // GWCClient::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    bool GWCClient::Decode(PacketT* param_1) {
        char cVar1;
        char cVar2;

        cVar1 = param_1->g1();
        if (cVar1 == '\x02') {
            cVar2 = param_1->g1();
            if (cVar2 == '\x01') {
                Reset(this);
                DecodeStatic(this, param_1);
            }
            DecodeStatus(this, param_1);
        }
        return cVar1 == '\x02';
    }

    // 0x1006e1bd0, 752 bytes, placed by class name and debug map
    // GWCClient::DecodeStatic(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GWCClient::DecodeStatic(PacketT* param_1) {
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        eastl::string* this_01;
        GWCClient* pGVar1;
        byte bVar2;
        ushort uVar3;
        undefined4 uVar4;
        GWCLocation* pGVar5;
        GWCWorld* this_02;
        uint uVar6;
        ulong uVar7;
        bool bVar8;
        int iVar9;
        undefined1 local_168[200];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_a0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_80[32];
        hash_map<unsigned int, GWCWorld, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, eastl::allocator,
                 false>* local_60;
        Array<GWCLocation, eastl::allocator>* local_58;
        uint local_4c;
        ulong local_48;
        GWCClient* local_40;
        ushort local_34;
        ushort local_32;

        uVar3 = param_1->gSmart1or2();
        local_58 = (Array<GWCLocation, eastl::allocator>*)&field_80;
        uVar7 = (ulong)uVar3;
        local_40 = this;
        local_58->set_max_size(uVar7, 0);
        bVar8 = SUB81(param_1, 0);
        local_48 = uVar7;
        if (uVar3 != 0) {
            uVar7 = 0;
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)(local_168 + 168);
            do {
                uVar3 = param_1->gSmart1or2();
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    this_00, bVar8);
                new (local_168) GWCLocation((uint)uVar3, this_00);
                pGVar5 = (GWCLocation*)Array<GWCLocation, eastl::allocator>::operator[](local_58, uVar7);
                GWCLocation::operator=(pGVar5, (GWCLocation*)local_168);
                local_168->~LanguageMessage();
                this_00->~basic_string();
                uVar7 = uVar7 + 1;
            } while (local_48 != uVar7);
        }
        uVar3 = param_1->gSmart1or2();
        pGVar1 = local_40;
        local_40->field_64 = (uint)uVar3;
        uVar3 = param_1->gSmart1or2();
        pGVar1->field_68 = (uint)uVar3;
        uVar3 = param_1->gSmart1or2();
        pGVar1->field_72 = (uint)uVar3;
        if (uVar3 != 0) {
            local_60 = (hash_map<unsigned int, GWCWorld, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                 eastl::allocator, false>*)&local_40->field_8;
            iVar9 = 0;
            this_01 = (eastl::string*)(local_168 + 168);
            do {
                local_34 = param_1->gSmart1or2();
                bVar2 = param_1->g1();
                uVar4 = param_1->g4();
                local_48 = CONCAT44(local_48._4_4_, uVar4);
                uVar3 = param_1->gSmart1or2();
                eastl::string::basic_string(this_01);
                local_32 = uVar3;
                if (uVar3 != 0) {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_168,
                                       bVar8);
                    eastl::string::operator=(this_01, (basic_string*)local_168);
                    local_168->~basic_string();
                }
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    local_a0, bVar8);
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    local_80, bVar8);
                pGVar5 = (GWCLocation*)Array<GWCLocation, eastl::allocator>::operator[](local_58, (ulong)bVar2);
                uVar6 = (uint)local_34;
                new (local_168)
                    GWCWorld((uint)bVar2, pGVar5, (uint)local_48, (uint)local_32, this_01, local_40->field_64 + uVar6,
                             (basic_string*)local_a0, (basic_string*)local_80, -1);
                local_4c = uVar6;
                this_02 = (GWCWorld*)
                    eastl::hash_map<unsigned int, GWCWorld, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                    eastl::allocator, false>::operator[](local_60, &local_4c);
                GWCWorld::operator=(this_02, (GWCWorld*)local_168);
                local_168->~GWCWorld();
                local_80->~basic_string();
                local_a0->~basic_string();
                eastl::string::~basic_string(this_01);
                iVar9 = iVar9 + 1;
            } while (iVar9 < local_40->field_72);
        }
        uVar4 = param_1->g4();
        *(undefined4*)&local_40[1].field_16 = uVar4;
        local_40->field_0 = '\x01';
    }

    // 0x1006e1ec0, 208 bytes, placed by class name and debug map
    // GWCClient::DecodeStatus(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GWCClient::DecodeStatus(PacketT* param_1) {
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        ushort uVar2;
        ushort uVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        uint uVar5;
        int iVar6;
        eastl local_60[16];
        uint local_50[4];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* local_40;

        if (0 < field_72) {
            iVar6 = 0;
            local_40 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1;
            do {
                this_00 = local_40;
                uVar2 = local_40->gSmart1or2();
                uVar3 = this_00->g2();
                local_50[0] = (uint)uVar2;
                eastl::hashtable<unsigned int, eastl::pair<unsigned int const, GWCWorld>, eastl::allocator,
                                 eastl::use_first<eastl::pair<unsigned int const, GWCWorld>>,
                                 eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::find((uint*)local_60);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                if (eastl::operator!=(local_60, (hashtable_iterator_base*)local_50, extraout_RDX)) {
                    uVar5 = (uint)uVar3;
                    if (uVar3 == 65535) {
                        uVar5 = 4294967295;
                    }
                    lVar4 = local_60->HeapBeginPtr();
                    ((lVar4 + 8))->SetPlayers(uVar5);
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < ((GWCClient*)this)->field_72);
        }
    }

} // namespace jag::game
