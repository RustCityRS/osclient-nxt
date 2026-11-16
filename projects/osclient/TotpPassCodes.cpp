// projects/osclient/TotpPassCodes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "TotpPassCodes.h"

namespace jag::oldscape {
    // 0x1000bfb60
    TotpPassCodes::TotpPassCodes() : Filename(), field_344(1) {
        bool cVar3;
        File* pFVar5;
        uint8_t local_298[312];

        new (local_298) callstack::Callstack();
        *((local_298 + 8)) = GameShell3Cache::GetRootStorage();
        auto local_2c0 = GameShell3Cache::GetPrefFilePostfix("_totp");
        auto local_160 = (*((local_298 + 8))) / &local_2c0;
        *this = local_160;
        ((local_298 + 8))->~pair();
        auto pCVar4 = Client::Instance();
        char* pcVar1 = pCVar4->field_8440->field_24;
        local_160 = eastl::string(pcVar1);
        *((local_298 + 8)) = GameShell3Cache::OpenPrefsForRead(*this, "_totp", local_160, *local_298);
        if (((local_298 + 8)) != this) {
            cVar3 = local_298->IsValid();
            if (cVar3)
                goto LAB_1000bfca6;
            pFVar5 = (File*)*(*((local_298 + 8)));
            cVar3 = InitFromFile(*pFVar5);
            pFVar5 = (File*)(*((local_298 + 8))).operator->();
            pFVar5->close(nullptr);
        LAB_1000bfdae:
            if (cVar3)
                goto LAB_1000bfdbb;
        } else {
        LAB_1000bfca6:
            pCVar4 = Client::Instance();
            pcVar1 = pCVar4->field_8440->field_24;
            local_160 = eastl::string(pcVar1);
            local_2c0 = GameShell3Cache::OpenPrefsForRead(*this, "", local_160, *local_298);
            (*((local_298 + 8))) = &local_2c0;
            if (((local_298 + 8)) != &local_2c0) {
                cVar3 = local_298->IsValid();
                if (!cVar3) {
                    pFVar5 = (File*)*(*((local_298 + 8)));
                    cVar3 = InitFromLegacyFormat(*pFVar5);
                    pFVar5 = (File*)(*((local_298 + 8))).operator->();
                    pFVar5->close(nullptr);
                    goto LAB_1000bfdae;
                }
            }
        }
        SaveToFile();
    LAB_1000bfdbb:
        ((local_298 + 8))->~unique_ptr();
    }

    // 0x1000bfea0
    uint32_t TotpPassCodes::InitFromFile(File& file) {
        uint32_t uVar2;
        unique_ptr<PacketJ<Array<unsigned char>>> local_20;

        LoadFile(&local_20, file);
        if (std::unique_ptr::operator_cast_to_bool(&local_20) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = Deserialise((PacketJ<Array<unsigned char> _>*)local_20.get());
        }
        return uVar2;
    }

    // 0x1000bff70
    unsigned long TotpPassCodes::InitFromLegacyFormat(File& file) {
        unsigned int uVar3;
        PacketT<Array<unsigned char>>* pPVar4;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar5;
        unsigned long uVar6;
        int iVar7;
        uint8_t local_50[8];
        int local_48;
        int local_44;
        unique_ptr<PacketJ<Array<unsigned char>>> local_40;
        char local_31;

        TotpPassCodes* this_00 = &local_40;
        LoadFile(this_00, file);
        if (this_00 != file) {
            pPVar4 = (PacketT<Array<unsigned char>>*)local_40.operator->();
            if (pPVar4->IsValid() != '\0') {
                pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                local_31 = pPVar5->g1s();
                if ('\x02' < local_31) {
                    pPVar4 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar4->Skip(2);
                    pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                    uVar3 = pPVar5->g1s();
                    this_00 = (TotpPassCodes*)(unsigned long)uVar3;
                    field_304.clear();
                    if ('\0' < (char)uVar3) {
                        iVar7 = (int)(char)uVar3;
                        this_00 = (TotpPassCodes*)local_50;
                        do {
                            pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                            local_48 = pPVar5->g4s();
                            pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_40.operator->();
                            local_44 = pPVar5->g4s();
                            this_00->pair<int const, int, void>(local_48, local_44);
                            field_304.insert<eastl::pair<int, int>, void>(*this_00);
                            iVar7 = iVar7 - 1;
                        } while (iVar7 != 0);
                    }
                }
                uVar6 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)('\x02' < local_31));
                goto LAB_1000c0081;
            }
        }
        uVar6 = 0;
    LAB_1000c0081:
        return uVar6 & 4294967295;
    }

    // 0x1000c00c0
    void TotpPassCodes::SaveToFile() {
        unsigned int arg2;
        File* pFVar2;
        PacketT<Array<unsigned char>>* this_00;
        unsigned char* arg1;
        uint8_t local_30[16];
        ReturnValue local_20;

        new (local_30) callstack::Callstack();
        *((local_30 + 8)) = GameShell3Cache::OpenPrefsForWrite(*this, *local_30);
        if (local_30->IsValid() == '\0') {
            Serialise(&local_20, this);
            pFVar2 = (File*)(*((local_30 + 8))).operator->();
            this_00 = (PacketT<Array<unsigned char>>*)local_20.operator->();
            arg1 = (unsigned char*)this_00->GetDataPtr();
            arg2 = ((TextureAtlasReference*)local_20.operator->())->GetTextureAtlas();
            pFVar2->write(arg1, arg2, nullptr);
            pFVar2 = (File*)(*((local_30 + 8))).operator->();
            pFVar2->close(nullptr);
        }
        ((local_30 + 8))->~unique_ptr();
    }

    // 0x1000c01c0
    void TotpPassCodes::MainLogic() {
        if (field_344 != '\0') {
            field_344 = 0;
            SaveToFile();
        }
    }

    // 0x1000c01e0
    TotpPassCodes* TotpPassCodes::LoadFile(File& file) {
        long lVar2;
        uint8_t local_40[16];

        local_40._8_8_ = this;
        new (local_40) callstack::Callstack();
        unsigned long uVar3 = 0;
        unsigned long arg1 = file.length(nullptr);
        vector<unsigned char> local_68(arg1, local_70);
        do {
            if (arg1 <= uVar3) {
                *local_40._8_8_ =
                    std::make_unique<PacketJ<Array<unsigned char>>, eastl::vector<unsigned char>&>(local_68);
            LAB_1000c0294:
                return (TotpPassCodes*)local_40._8_8_;
            }
            lVar2 = file.read(&local_68, (int)arg1 - (unsigned int)uVar3, (unsigned int)uVar3, local_40);
            if (local_40->IsValid() != '\0') {
                local_40._8_8_->unique_ptr<true, void>(&local_68);
                goto LAB_1000c0294;
            }
            uVar3 = uVar3 + lVar2;
        } while (true);
    }

    // 0x1000c02f0
    uint32_t TotpPassCodes::Deserialise(PacketJ<Array<unsigned char>>* packetJ) {
        uint64_t uVar2;
        Logger* pLVar3;
        uint32_t uVar4;
        int iVar5;
        vector_map<int, int> local_78;
        pair<int, int> local_50;
        int local_3c;
        int local_38;
        uint32_t local_34;

        char cVar1 = packetJ->IsValid();
        if (!cVar1) {
            pLVar3 = logger::default_logger();
            uVar4 = 0;
            pLVar3->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/TotpPassCodes.cpp",
                152, "Invalid packet passed in. Creating default");
        } else {
            local_78 = eastl::vector_map<int, int>();
            uVar2 = packetJ->g1s();
            cVar1 = (char)uVar2;
            local_34 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)uVar2 >> 8)) << 8) | (uint8_t)(cVar1 == '\x01'));
            if (cVar1 == '\x01') {
                cVar1 = packetJ->g1s();
                if ('\0' < cVar1) {
                    iVar5 = (int)cVar1;
                    do {
                        local_3c = packetJ->g4s();
                        local_38 = packetJ->g4s();
                        local_50.pair<int, int&, void>(local_3c, local_38);
                        local_78.insert<eastl::pair<int, int>, void>(local_50);
                        iVar5 = iVar5 - 1;
                    } while (iVar5 != 0);
                }
                field_304 = local_78;
            } else {
                pLVar3 = logger::default_logger();
                pLVar3->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "TotpPassCodes.cpp",
                            161, "Invalid version found, expected %d got %d", 1, (int)cVar1);
            }
            uVar4 = local_34;
        }
        return uVar4;
    }

    // 0x1000c05d0
    void TotpPassCodes::PutTotpPassCode(int arg1, int arg2) {
        int* this_00;
        pair<int, int>* ppVar1;
        pair<int, int>* ppVar2;
        unsigned long uVar3;
        pair<int, int> local_30;

        if (arg1 != 0) {
            this_00 = &field_304;
            ppVar1 = (pair<int, int>*)eastl::vector_map<int, int>::find(*this_00);
            ppVar2 = (pair<int, int>*)this_00->end();
            if (ppVar1 == ppVar2) {
                uVar3 = this_00->size();
                if (99 < uVar3) {
                    ppVar1 = (pair<int, int>*)this_00->HeapBeginPtr();
                    this_00->erase(ppVar1);
                    field_344 = 1;
                }
            } else {
                this_00->erase(ppVar1);
            }
            local_30.pair<int, int&, void>(arg1, arg2);
            this_00->insert<eastl::pair<int, int>, void>(local_30);
            field_344 = 1;
        }
    }

    // 0x1000c06c0
    uint32_t TotpPassCodes::GetTotpPassCode(int arg1) const {
        uint32_t uVar1;

        long lVar2 = eastl::vector_map<int, int>::find(field_304);
        long lVar3 = field_304.end();
        if (lVar2 == lVar3) {
            uVar1 = 0;
        } else {
            uVar1 = *(uint32_t*)(lVar2 + 4);
        }
        return uVar1;
    }

    // 0x1000c0710
    auto TotpPassCodes::Serialise() const {
        PacketConstants local_24;

        auto result =
            std::make_unique<PacketJ<Array<unsigned char>>, PacketT<Array<unsigned char>>::PacketConstants>(local_24);
        PacketT<Array<unsigned char>>* pPVar1 = (PacketT<Array<unsigned char>>*)(result).operator->();
        pPVar1->p1<unsigned long>(1);
        pPVar1 = (PacketT<Array<unsigned char>>*)(result).operator->();
        int* this_00 = &field_304;
        auto id = this_00->size();
        pPVar1->p1<unsigned long>(id);
        auto puVar2 = this_00->HeapBeginPtr();
        auto puVar3 = this_00->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
            pPVar1 = (PacketT<Array<unsigned char>>*)(result).operator->();
            pPVar1->p4<int>(*puVar2);
            pPVar1 = (PacketT<Array<unsigned char>>*)(result).operator->();
            pPVar1->p4<int>(puVar2[1]);
        }
        return result;
    }

} // namespace jag::oldscape
