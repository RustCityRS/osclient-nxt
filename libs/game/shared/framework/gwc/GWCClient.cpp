// libs/game/shared/framework/gwc/GWCClient.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

namespace jag::game {
    class GWCClient {
    public:
        long GetWorld(unsigned int arg1) const;
        void Reset();
        bool Decode(PacketT<Array<unsigned char>>& arg1);
        void DecodeStatic(PacketT<Array<unsigned char>>& arg1);
        void DecodeStatus(PacketT<Array<unsigned char>>& arg1);

    private:
        char field_0;
        uint8_t _unknown_1[63];
        int field_64;
        int field_68;
        int field_72;
        uint8_t _unknown_76[12];
    };

    // 0x1006e18b0
    long GWCClient::GetWorld(unsigned int arg1) const {
        eastl local_30;
        uint8_t local_20[16];

        if (((field_0 != '\0') && (field_64 <= (int)arg1)) && ((int)arg1 <= field_68)) {
            local_20._0_4_ = arg1 - field_64;
            &local_30 = (eastl[16])field_8.find(*local_20);
            local_20 = field_8.end();
            if (local_30 != *local_20 != '\0') {
                return local_30.HeapBeginPtr() + 8;
            }
        }
        return 0;
    }

    // 0x1006e19c0
    void GWCClient::Reset() {
        field_8.clear();
        field_80.set_max_size(0, 0);
        field_0 = '\0';
    }

    // 0x1006e1b70
    bool GWCClient::Decode(PacketT<Array<unsigned char>>& arg1) {
        char cVar1 = arg1.g1();
        if (cVar1 == '\x02') {
            if (arg1.g1() == '\x01') {
                Reset();
                DecodeStatic(arg1);
            }
            DecodeStatus(arg1);
        }
        return cVar1 == '\x02';
    }

    // 0x1006e1bd0
    void GWCClient::DecodeStatic(PacketT<Array<unsigned char>>& arg1) {
        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_00;
        eastl::string* this_01;
        uint8_t bVar2;
        uint32_t uVar4;
        GWCLocation* pGVar5;
        GWCWorld* this_02;
        unsigned int uVar6;
        int iVar8;
        uint8_t local_168[200];
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_a0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_80;
        hash_map<unsigned int, GWCWorld>* local_60;
        unsigned int local_4c;
        unsigned short local_34;
        unsigned short local_32;

        unsigned short uVar3 = arg1.gSmart1or2();
        Array<GWCLocation>* local_58 = (Array<GWCLocation>*)&field_80;
        unsigned long uVar7 = (unsigned long)uVar3;
        GWCClient* local_40 = this;
        local_58->set_max_size(uVar7, 0);
        unsigned long local_48 = uVar7;
        if (uVar3 != 0) {
            uVar7 = 0;
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(local_168 + 168);
            do {
                uVar3 = arg1.gSmart1or2();
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(this_00,
                                                                                                     (uint8_t)arg1);
                new (local_168) GWCLocation((unsigned int)uVar3, *this_00);
                pGVar5 = (GWCLocation*)(*local_58)[uVar7];
                *pGVar5 = *local_168;
                this_00->~basic_string();
                uVar7 = uVar7 + 1;
            } while (local_48 != uVar7);
        }
        uVar3 = arg1.gSmart1or2();
        GWCClient* pGVar1 = local_40;
        local_40->field_64 = (unsigned int)uVar3;
        uVar3 = arg1.gSmart1or2();
        pGVar1->field_68 = (unsigned int)uVar3;
        uVar3 = arg1.gSmart1or2();
        pGVar1->field_72 = (unsigned int)uVar3;
        if (uVar3 != 0) {
            local_60 = (hash_map<unsigned int, GWCWorld>*)&local_40->field_8;
            iVar8 = 0;
            this_01 = (eastl::string*)(local_168 + 168);
            do {
                local_34 = arg1.gSmart1or2();
                bVar2 = arg1.g1();
                uVar4 = arg1.g4();
                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar4);
                uVar3 = arg1.gSmart1or2();
                new (this_01) eastl::string();
                local_32 = uVar3;
                if (uVar3 != 0) {
                    local_168->gStringCP1252ToUTF8<eastl::string>((uint8_t)arg1);
                    *this_01 = local_168;
                }
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_a0,
                                                                                                     (uint8_t)arg1);
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_80,
                                                                                                     (uint8_t)arg1);
                pGVar5 = (GWCLocation*)(*local_58)[(unsigned long)bVar2];
                uVar6 = (unsigned int)local_34;
                new (local_168) GWCWorld((unsigned int)bVar2, *pGVar5, (unsigned int)local_48, (unsigned int)local_32,
                                         *this_01, local_40->field_64 + uVar6, local_a0, local_80, -1);
                local_4c = uVar6;
                this_02 = (GWCWorld*)(*local_60)[local_4c];
                *this_02 = *local_168;
                this_01->~basic_string();
                iVar8 = iVar8 + 1;
            } while (iVar8 < local_40->field_72);
        }
        uVar4 = arg1.g4();
        *(uint32_t*)&local_40[1].field_16 = uVar4;
        local_40->field_0 = '\x01';
    }

    // 0x1006e1ec0
    void GWCClient::DecodeStatus(PacketT<Array<unsigned char>>& arg1) {
        unsigned short uVar2;
        unsigned short uVar3;
        long lVar4;
        BussType bussType;
        int iVar5;
        ReturnValue local_60;
        ReturnValue local_50;

        if (0 < field_72) {
            iVar5 = 0;
            do {
                uVar2 = arg1.gSmart1or2();
                uVar3 = arg1.g2();
                local_50[0]._0_4_ = (uint32_t)uVar2;
                local_60 = field_8.find(local_50);
                local_50 = field_8.end();
                if (local_60 != local_50 != '\0') {
                    bussType = (BussType)uVar3;
                    if (uVar3 == 65535) {
                        bussType = 4294967295;
                    }
                    lVar4 = local_60.HeapBeginPtr();
                    ((lVar4 + 8))->SetPlayers(bussType);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < field_72);
        }
    }

} // namespace jag::game
