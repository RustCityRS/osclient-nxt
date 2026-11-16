// libs/oldscape/jagex3/js5/Js5LocalLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5LocalLoader {
    public:
        class Js5Local;
        // virtual methods in vtable order
        virtual void MainLogic();
        virtual ~Js5LocalLoader();
        virtual uint64_t OpenJs5(Js5ArchiveId js5ArchiveId, bool arg2, bool arg3, bool arg4, bool arg5, Error* error);
        virtual void Shutdown();
        virtual uint64_t GetIndexPercentage(Js5ArchiveId arg1) const;
        virtual uint64_t GetGroupCountInCache(Js5ArchiveId js5ArchiveId) const;
        virtual uint8_t* BlockingFetch(const Js5RequestKey& js5RequestKey,
                                       const Js5RequestParameters& js5RequestParameters);
        uint64_t GetGroupLoadPercentage(Js5ArchiveId arg1, Js5GroupId arg2) const;
        unsigned long Initialize(const char** arg1, unsigned int arg2, const Filename& filename);

    private:
        uint8_t _unknown_8[24];
        Js5RequestKey field_32;
        uint8_t _unknown_44[364];
    };

    class Js5LocalLoader::Js5Local {
    public:
        // virtual methods in vtable order
        virtual ~Js5Local();
        int Open(const Filename& filename);
        int LoadIndexDataFromFile();
        int LoadGroupDataFromFile(PacketJ<Array<unsigned char>>& packetJ, Js5GroupId js5GroupId);
        int ReadFirstPacketPage(unsigned char (&arg1)[4096], unsigned int& arg2, unsigned int arg3);
        unsigned long ReadPacketPart2(PacketJ<Array<unsigned char>>& packetJ, unsigned char const (&arg2)[4096],
                                      unsigned int arg3);
        Js5Local(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4, bool arg5);

    private:
        uint8_t _unknown_8[12];
        uint32_t field_20;
        unsigned int field_24;
        uint32_t field_28;
        uint8_t _unknown_32[400];
        File field_432;
    };

    // 0x1002bae60
    int Js5LocalLoader::Js5Local::Open(const Filename& filename) {
        uint8_t local_168[320];

        new (local_168) callstack::Callstack();
        field_128 = filename;
        new ((local_168 + 8)) File(filename, 0, local_168);
        if (local_168->IsValid() == '\0') {
            *field_432 = (*((local_168 + 8)));
        }
        ((local_168 + 8))->~File();
        return local_168._0_4_;
    }

    // 0x1002bb0d0
    int Js5LocalLoader::Js5Local::LoadIndexDataFromFile() {
        Array<Js5LocalLoader::Js5Local::GroupOffsets>* this_00;
        unsigned int uVar1;
        unsigned int uVar2;
        unsigned long arg1;
        unsigned int* puVar4;
        long lVar5;
        uint32_t* puVar6;
        unsigned int uVar7;
        unsigned long arg1_00;
        Array<Js5::GroupState>* this_02;
        unsigned long local_1078;
        Array<Js5::GroupState>* local_1070;
        Array<Js5LocalLoader::Js5Local::GroupOffsets>* local_1060;
        unsigned int local_1054;
        unsigned int local_1050;
        unsigned int local_104c;
        int local_1048;
        char local_1041;
        WaterNormalParamsTarget local_1040;

        local_1040[0].field_0 = ReadFirstPacketPage(&local_1040[0].field_8, local_1054, 0);
        if (local_1040.IsValid()) {
            local_1048 = local_1040[0].field_0;
            goto LAB_1002bb31d;
        }
        WindowSavedPosition local_1098;
        local_1040[0].field_0 = ReadPacketPart2(local_1098, &local_1040[0].field_8, local_1054);
        if (!(local_1040.IsValid())) {
            if (LoadIndex(local_1098)) {
                this_02 = (Array<Js5::GroupState>*)&field_32;
                arg1 = this_02->end();
                local_1060 = (Array<Js5LocalLoader::Js5Local::GroupOffsets>*)&field_104;
                local_1060->set_max_size(arg1, 3);
                if (arg1 != 0) {
                    uVar7 = 1;
                    local_104c = local_1054;
                    arg1_00 = 0;
                    local_1078 = arg1;
                    local_1070 = this_02;
                    do {
                        if (!(((StyleSheet*)(*this_02)[arg1_00])->HasParent())) {
                            puVar6 = (uint32_t*)(*local_1060)[arg1_00];
                            *puVar6 = 0;
                            lVar5 = (*local_1060)[arg1_00];
                            *(uint32_t*)(lVar5 + 4) = 0;
                        } else {
                            local_1040[0].field_0 = ReadFirstPacketPage(&local_1040[0].field_8, local_1050, local_104c);
                            local_1041 = local_1040.IsValid();
                            this_00 = local_1060;
                            if (local_1041 == '\0') {
                                puVar4 = (unsigned int*)(*local_1060)[arg1_00];
                                uVar2 = local_104c;
                                uVar1 = local_1050;
                                *puVar4 = local_104c;
                                lVar5 = (*this_00)[arg1_00];
                                *(unsigned int*)(lVar5 + 4) = uVar1;
                                local_104c = uVar2 + local_1050;
                                this = this;
                            } else {
                                local_1048 = local_1040[0].field_0;
                            }
                            arg1 = local_1078;
                            this_02 = local_1070;
                            if (local_1041 != '\0')
                                goto LAB_1002bb311;
                        }
                        arg1_00 = (unsigned long)uVar7;
                        uVar7 = uVar7 + 1;
                    } while (arg1_00 < arg1);
                }
                goto LAB_1002bb16e;
            }
            local_1048.XPlotBlender<int>(92);
        } else {
        LAB_1002bb16e:
            local_1048 = local_1040[0].field_0;
        }
    LAB_1002bb311:
    LAB_1002bb31d:
        return local_1048;
    }

    // 0x1002bb370
    int Js5LocalLoader::Js5Local::LoadGroupDataFromFile(PacketJ<Array<unsigned char>>& packetJ, Js5GroupId js5GroupId) {
        unsigned int arg2;
        long lVar3;
        unsigned int* puVar4;
        unsigned char* arg1;
        return local_40;
        Error local_38;

        uint8_t* this_00 = &field_104;
        unsigned long uVar2 = this_00->end();
        if ((unsigned long)js5GroupId < uVar2) {
            lVar3 = (*this_00)[(unsigned long)js5GroupId];
            arg2 = *(unsigned int*)(lVar3 + 4);
            packetJ.Reserve((unsigned long)arg2);
            local_38 = callstack::Callstack();
            puVar4 = (unsigned int*)(*this_00)[(unsigned long)js5GroupId];
            if (field_432->seek((unsigned long)*puVar4, 0, &local_38) != '\0') {
                arg1 = (unsigned char*)packetJ.GetDataPtr();
                field_432->read(arg1, arg2, 0, &local_38);
            }
            local_40[0] = local_38[0].m_code;
        } else {
            local_40.XPlotBlender<int>(22);
        }
        return local_40[0];
    }

    // 0x1002da190
    int Js5LocalLoader::Js5Local::ReadFirstPacketPage(unsigned char (&arg1)[4096], unsigned int& arg2,
                                                      unsigned int arg3) {
        unsigned int uVar2;
        long lVar3;
        unsigned long uVar4;
        unsigned int local_44;
        return local_40;

        return local_38;
        uint8_t* this_00 = field_432;
        this_00->seek((unsigned long)arg3, 0, &local_38);
        if (!(local_38.IsValid())) {
            lVar3 = this_00->length(&local_38);
            if (!(local_38.IsValid())) {
                uVar4 = lVar3 - (unsigned long)arg3;
                uVar2 = 4096;
                if (uVar4 < 4096) {
                    uVar2 = (unsigned int)uVar4;
                }
                this_00->read(arg1, uVar2, 0, &local_38);
                if (!(local_38.IsValid())) {
                    local_44 = *(unsigned int*)((long)arg1 + 1);
                    ReorderToBE<int>(&local_44);
                    uVar2 = local_44 + (unsigned int)(*(char*)arg1 != '\0') * 4 + 5;
                    arg2 = uVar2;
                    if (uVar4 < uVar2) {
                        local_40.XPlotBlender<int>(92);
                        return local_40[0];
                    }
                }
            }
        }
        return local_38[0];
    }

    // 0x1002da290
    unsigned long Js5LocalLoader::Js5Local::ReadPacketPart2(PacketJ<Array<unsigned char>>& packetJ,
                                                            unsigned char const (&arg2)[4096], unsigned int arg3) {
        unsigned long in_RAX;

        unsigned long local_38 = in_RAX;
        new (&local_38) callstack::Callstack();
        packetJ.Reserve((unsigned long)arg3);
        auto pvVar1 = packetJ.GetDataPtr();
        if (arg3 < 4097) {
            _memcpy(pvVar1, arg2, (unsigned long)arg3);
        } else {
            _memcpy(pvVar1, arg2, 4096);
            field_432->read((unsigned char*)packetJ.GetDataPtr(), arg3 - 4096, 4096, &local_38);
        }
        return local_38 & 4294967295;
    }

    // 0x1002dc430
    Js5LocalLoader::~Js5LocalLoader() {
        field_400.~Array();
        field_96.~pair();
    }

    // 0x1002e0bd0
    Js5LocalLoader::Js5Local::Js5Local(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4,
                                       bool arg5) {
        Js5(js5Loader, js5ArchiveId, arg3, arg4, arg5);
        new (&field_104) Array<Js5LocalLoader::Js5Local::GroupOffsets>();
        new (&field_128) Filename();
        new (field_432) File();
    }

    // 0x1002e0e90
    Js5LocalLoader::Js5Local::~Js5Local() {
        field_432->~File();
        field_128.~pair();
        field_104.~Array();
    }

} // namespace jag::oldscape::jagex3
