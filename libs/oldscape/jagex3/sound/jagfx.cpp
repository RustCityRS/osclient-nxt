// libs/oldscape/jagex3/sound/jagfx.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "jagfx.h"

namespace jag::oldscape::sound {
    // 0x100297f20
    auto JagFX::Load(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;
        PacketJ<Array<unsigned char> _>* packetJ;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        if ((uint8_t*)js5.GetFile(*&local_40, str1, str2, nullptr) == DataStatus::READY) {
            packetJ = (PacketJ<Array<unsigned char> _>*)*local_40;
            result = std::make_unique<JagFX, PacketJ<Array<unsigned char>>&>(*packetJ);
        } else {
            result.unique_ptr<true, void>(&local_40);
        }
        local_40.~&local_40();
        return result;
    }

    // 0x100298030
    auto JagFX::Load(jagex3::Js5& js5, const char* str) {
        auto result;
        PacketJ<Array<unsigned char> _>* packetJ;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        if ((uint8_t*)js5.GetFile(*&local_38, str) == DataStatus::READY) {
            packetJ = (PacketJ<Array<unsigned char> _>*)*local_38;
            result = std::make_unique<JagFX, PacketJ<Array<unsigned char>>&>(*packetJ);
        } else {
            result.unique_ptr<true, void>(&local_38);
        }
        local_38.~&local_38();
        return result;
    }

    // 0x1002980c0
    auto JagFX::Load(jagex3::Js5& js5, int arg2, int arg3) {
        auto result;
        PacketJ<Array<unsigned char> _>* packetJ;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        if ((uint8_t*)js5.GetFile(*&local_40, arg2, arg3, nullptr) == DataStatus::READY) {
            packetJ = (PacketJ<Array<unsigned char> _>*)*local_40;
            result = std::make_unique<JagFX, PacketJ<Array<unsigned char>>&>(*packetJ);
        } else {
            result.unique_ptr<true, void>(&local_40);
        }
        local_40.~&local_40();
        return result;
    }

    // 0x100298160
    auto JagFX::Load(jagex3::Js5& js5, int arg2) {
        auto result;
        PacketJ<Array<unsigned char> _>* packetJ;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        if ((uint8_t*)js5.GetFile(*&local_38, arg2) == DataStatus::READY) {
            packetJ = (PacketJ<Array<unsigned char> _>*)*local_38;
            result = std::make_unique<JagFX, PacketJ<Array<unsigned char>>&>(*packetJ);
        } else {
            result.unique_ptr<true, void>(&local_38);
        }
        local_38.~&local_38();
        return result;
    }

    // 0x1002981f0
    JagFX::JagFX(PacketJ<Array<unsigned char>>& packetJ)
        : std::array<std::unique_ptr<Tone>, 10ul>(), field_80(0), field_84(0) {
        unique_ptr<Tone>* this_00;
        ReturnValue local_38;

        unsigned long arg1 = 0;
        do {
            if (packetJ.g1() != '\0') {
                packetJ.SetPos(packetJ.size() - 1);
                local_38 = std::make_unique<Tone>();
                this_00 = (unique_ptr<Tone>*)(*this)[arg1];
                *this_00 = local_38;
                ((Tone*)(*this_00).operator->())->Load(packetJ);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 10);
        unsigned short uVar2 = packetJ.g2();
        field_80 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_84 = (unsigned int)uVar2;
    }

    // 0x100298730
    auto JagFX::FromUncompressedSynth(Array<unsigned char>& arg1) {
        unsigned short uVar2;
        array<std::unique_ptr<Tone>, 10ul>* paVar3;
        unique_ptr<Tone>* puVar4;
        long lVar5;
        ReturnValue local_58;
        WindowSavedPosition local_50;

        local_50.PacketT(arg1);
        auto result = std::make_unique<JagFX>();
        uint8_t bVar1 = local_50.g1();
        unsigned long uVar6 = 0;
        do {
            local_58 = std::make_unique<Tone>();
            paVar3 = (array<std::unique_ptr<Tone>, 10ul>*)(result).operator->();
            puVar4 = (unique_ptr<Tone>*)(*paVar3)[uVar6];
            *puVar4 = local_58;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 10);
        if (bVar1 < 2) {
            uVar2 = local_50.g2();
            uVar6 = 0;
            do {
                paVar3 = (array<std::unique_ptr<Tone>, 10ul>*)(result).operator->();
                puVar4 = (unique_ptr<Tone>*)(*paVar3)[uVar6];
                lVar5 = (*puVar4).operator->();
                *(unsigned int*)(lVar5 + 4) = (unsigned int)uVar2;
                paVar3 = (array<std::unique_ptr<Tone>, 10ul>*)(result).operator->();
                puVar4 = (unique_ptr<Tone>*)(*paVar3)[uVar6];
                lVar5 = (*puVar4).operator->();
                *(uint32_t*)(lVar5 + 8) = 0;
                uVar6 = uVar6 + 1;
            } while (uVar6 != 10);
        }
        uVar6 = 0;
        do {
            paVar3 = (array<std::unique_ptr<Tone>, 10ul>*)(result).operator->();
            puVar4 = (unique_ptr<Tone>*)(*paVar3)[uVar6];
            ((Tone*)(*puVar4).operator->())->LoadUncompressed(local_50, (unsigned int)bVar1);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 10);
        if ((uint8_t)(bVar1 - 1) < 2) {
            local_50.g3();
            local_50.g3();
        }
        lVar5 = (result).operator->();
        *(uint32_t*)(lVar5 + 80) = 0;
        lVar5 = (result).operator->();
        *(uint32_t*)(lVar5 + 84) = 0;
        if (2 < bVar1) {
            uVar2 = local_50.g2();
            lVar5 = (result).operator->();
            *(unsigned int*)(lVar5 + 80) = (unsigned int)uVar2;
            uVar2 = local_50.g2();
            lVar5 = (result).operator->();
            *(unsigned int*)(lVar5 + 84) = (unsigned int)uVar2;
        }
        return result;
    }

    // 0x100298cf0
    auto JagFX::ToWave() {
        Array<signed char> local_48;
        MakeSound(local_48);
        int local_28 = (int)(field_80 * 22050) / 1000;
        int local_24 = (int)(field_84 * 22050) / 1000;
        auto result = std::make_unique<Wave, int, Array<signed char>, int, int>(22050, local_48, local_28, local_24);
        return result;
    }

    // 0x100298db0
    void JagFX::MakeSound(Array<signed char>& arg1) {
        unsigned long arg1_00;
        bool cVar1;
        int iVar2;
        unsigned int arg1_01;
        bool bVar3;
        unique_ptr<Tone, std::default_delete<Tone> _>* puVar4;
        char* pcVar5;
        Tone* this_00;
        int* piVar6;
        uint8_t* puVar7;
        unsigned int uVar8;
        unsigned long arg1_02;
        void* pvVar10;
        unsigned int uVar11;
        ReturnValue local_68;
        long local_50;
        void* local_48;

        void* pvVar9 = nullptr;
        int iVar12 = 0;
        do {
            pvVar10 = pvVar9;
            puVar4 = (unique_ptr<Tone, std::default_delete<Tone> _>*)(*this)[(unsigned long)pvVar9];
            bVar3 = puVar4 != pvVar10;
            if (((bVar3) && (pcVar5 = (char*)(*puVar4).operator->(), *pcVar5 != '\0')) &&
                (iVar12 < *(int*)(pcVar5 + 8) + *(int*)(pcVar5 + 4))) {
                iVar12 = *(int*)(pcVar5 + 8) + *(int*)(pcVar5 + 4);
            }
            pvVar9 = (void*)((long)pvVar9 + 1);
        } while (pvVar9 != (void*)10);
        if (iVar12 != 0) {
            arg1.set_max_size((long)((iVar12 * 22050) / 1000), 3);
            pvVar9 = nullptr;
            do {
                pvVar10 = pvVar9;
                puVar4 = (unique_ptr<Tone, std::default_delete<Tone> _>*)(*this)[(unsigned long)pvVar9];
                bVar3 = puVar4 != pvVar10;
                if ((bVar3) && (pcVar5 = (char*)(*puVar4).operator->(), *pcVar5 != '\0')) {
                    iVar12 = *(int*)(pcVar5 + 4);
                    arg1_01 = (iVar12 * 22050) / 1000;
                    iVar2 = *(int*)(pcVar5 + 8);
                    local_48 = pvVar9;
                    this_00 = (Tone*)(*puVar4).operator->();
                    local_68 = this_00->Generate(arg1_01, this_00->field_4);
                    if (999 < iVar12 * 22050) {
                        local_50 = (long)((iVar2 * 22050) / 1000);
                        arg1_02 = 0;
                        do {
                            arg1_00 = local_50 + arg1_02;
                            pcVar5 = &arg1[arg1_00];
                            cVar1 = *pcVar5;
                            piVar6 = &local_68[arg1_02];
                            iVar12 = *piVar6;
                            puVar7 = (uint8_t*)arg1[arg1_00];
                            uVar11 = (iVar12 >> 8) + (int)cVar1;
                            uVar8 = (unsigned int)(uint8_t)((uint8_t)((int)uVar11 >> 31) ^ 127);
                            if ((int)(char)uVar11 == uVar11) {
                                uVar8 = uVar11;
                            }
                            *puVar7 = (char)uVar8;
                            arg1_02 = arg1_02 + 1;
                        } while (arg1_01 != arg1_02);
                    }
                    pvVar9 = local_48;
                    this = this;
                }
                pvVar9 = (void*)((long)pvVar9 + 1);
            } while (pvVar9 != (void*)10);
        }
    }

    // 0x100299000
    int JagFX::OptimiseStart() {
        int iVar4;
        unique_ptr<Tone, std::default_delete<Tone> _>* puVar5;
        long lVar6;
        void* pvVar8;

        int iVar9 = 9999999;
        void* pvVar7 = nullptr;
        do {
            pvVar8 = pvVar7;
            puVar5 = (unique_ptr<Tone, std::default_delete<Tone> _>*)(*this)[(unsigned long)pvVar7];
            if (puVar5 != pvVar8) {
                lVar6 = (*puVar5).operator->();
                iVar4 = *(int*)(lVar6 + 8) / 20;
                if (iVar9 <= iVar4) {
                    iVar4 = iVar9;
                }
                iVar9 = iVar4;
            }
            pvVar7 = (void*)((long)pvVar7 + 1);
        } while (pvVar7 != (void*)10);
        unsigned int uVar1 = field_80;
        unsigned int uVar2 = field_84;
        if ((int)uVar1 < (int)uVar2) {
            iVar4 = (int)uVar1 / 20;
            if (iVar9 <= (int)uVar1 / 20) {
                iVar4 = iVar9;
            }
            iVar9 = iVar4;
        }
        iVar4 = 0;
        if ((iVar9 != 0) && (iVar9 != 9999999)) {
            pvVar7 = nullptr;
            do {
                pvVar8 = pvVar7;
                puVar5 = (unique_ptr<Tone, std::default_delete<Tone> _>*)(*this)[(unsigned long)pvVar7];
                if (puVar5 != pvVar8) {
                    lVar6 = (*puVar5).operator->();
                    *(int*)(lVar6 + 8) = *(int*)(lVar6 + 8) + iVar9 * -20;
                }
                pvVar7 = (void*)((long)pvVar7 + 1);
            } while (pvVar7 != (void*)10);
            if ((int)uVar1 < (int)uVar2) {
                field_80 = uVar1 + iVar9 * -20;
                field_84 = uVar2 + iVar9 * -20;
            }
            iVar4 = iVar9;
        }
        return iVar4;
    }

} // namespace jag::oldscape::sound
