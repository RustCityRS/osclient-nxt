// libs/oldscape/rs2lib/configdecoder/FloType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "FloType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016b9310
    int64_t FloType::m_pConfigClient;

    // 0x1016b9318
    vector<std::unique_ptr<FloType>> FloType::m_list;

    // 0x1016b9338
    int64_t FloType::m_defaultWater;

    // 0x100266450
    void FloType::Init(jagex3::Js5* js5) {
        unique_ptr<FloType>* puVar4;
        FloType* pFVar5;
        PacketJ<Array<unsigned char> _>* packetJ;
        unsigned long uVar6;
        unsigned long arg1;
        ReturnValue local_38;

        m_pConfigClient = js5;
        int iVar2 = js5->GetFileIdLimit(4);
        m_list.resize((long)iVar2);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if (m_list.size() != 0) {
            arg1 = 0;
            do {
                m_pConfigClient->GetFile(local_48, 4, (int)arg1, nullptr);
                local_38 = std::make_unique<FloType>();
                puVar4 = &m_list[arg1];
                *puVar4 = local_38;
                if (local_48 != nullptr) {
                    puVar4 = &m_list[arg1];
                    pFVar5 = (FloType*)(*puVar4).operator->();
                    packetJ = (PacketJ<Array<unsigned char> _>*)*local_48;
                    Decode(pFVar5, packetJ, (int)arg1);
                }
                puVar4 = &m_list[arg1];
                pFVar5 = (FloType*)(*puVar4).operator->();
                PostDecode(pFVar5);
                arg1 = arg1 + 1;
                uVar6 = m_list.size();
            } while (arg1 < uVar6);
        }
    }

    // 0x1002666e0
    void FloType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar3;

        unsigned long uVar1 = packetJ.size();
        unsigned long uVar2 = packetJ.GetTextureAtlas();
        if (uVar1 < uVar2) {
            do {
                bVar3 = packetJ.g1();
                if (bVar3 == 0) {
                    return;
                }
                Decode(packetJ, (unsigned int)bVar3, arg2);
                uVar1 = packetJ.size();
                uVar2 = packetJ.GetTextureAtlas();
            } while (uVar1 < uVar2);
        }
    }

    // 0x100266760
    void FloType::PostDecode() {
        if (field_12 != -1) {
            GetHsl(field_12);
            field_28 = field_16;
            field_32 = *(uint64_t*)&field_20;
        }
        GetHsl(field_0);
    }

    // 0x1002667a0
    int* FloType::List(int arg1) {
        unsigned long uVar1;
        unique_ptr<FloType>* unique_ptr;

        if (-1 < arg1) {
            uVar1 = m_list.size();
            if ((unsigned long)(long)arg1 < uVar1) {
                unique_ptr = &m_list[(long)arg1];
                return (int*)unique_ptr->get();
            }
        }
        return nullptr;
    }

    // 0x1002667f0
    void FloType::GetHsl(int arg1) {
        int iVar3;
        double dVar7;

        double dVar8 = (double)((unsigned int)arg1 >> 16 & 255) * 0.00390625f;
        double dVar5 = (double)((unsigned int)arg1 >> 8 & 255) * 0.00390625f;
        double dVar10 = (double)(arg1 & 255) * 0.00390625f;
        double dVar6 = dVar5;
        if (dVar8 <= dVar5) {
            dVar6 = dVar8;
        }
        if (dVar10 <= dVar6) {
            dVar6 = dVar10;
        }
        double dVar9 = dVar5;
        if (dVar5 <= dVar8) {
            dVar9 = dVar8;
        }
        if (dVar9 <= dVar10) {
            dVar9 = dVar10;
        }
        double dVar4 = dVar6 + dVar9;
        if (dVar6 == dVar9) {
            dVar6 = 0.0;
            dVar7 = 0.0;
        } else {
            if (dVar4 * 0.5 < 0.5) {
                dVar7 = (dVar9 - dVar6) / dVar4;
            } else {
                dVar7 = (dVar9 - dVar6) / (2.0 - dVar4);
            }
            if (dVar8 == dVar9) {
                dVar6 = (dVar5 - dVar10) / (dVar9 - dVar6);
            } else if (dVar5 == dVar9) {
                dVar6 = (dVar10 - dVar8) / (dVar9 - dVar6) + 2.0;
            } else if (dVar10 == dVar9) {
                dVar6 = (dVar8 - dVar5) / (dVar9 - dVar6) + 4.0;
            } else {
                dVar6 = 0.0;
            }
        }
        int iVar2 = (int)(dVar7 * 256.0);
        field_16 = (int)(dVar6 * 42.666666666666664);
        field_20 = iVar2;
        int iVar1 = (int)(dVar4 * 128.0);
        field_24 = iVar1;
        if (iVar2 < 0) {
            iVar3 = 0;
        } else {
            iVar3 = 255;
            if (iVar2 < 256)
                goto joined_r0x00010026695e;
        }
        field_20 = iVar3;
    joined_r0x00010026695e:
        if (iVar1 < 0) {
            iVar2 = 0;
        } else {
            iVar2 = 255;
            if (iVar1 < 256) {
                return;
            }
        }
        field_24 = iVar2;
    }

    // 0x100266970
    void FloType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3) {
        uint8_t bVar1;
        uint32_t uVar2;

        switch (arg2) {
        case 1:
            uVar2 = packetJ.g3();
            field_0 = uVar2;
            break;
        case 2:
            bVar1 = packetJ.g1();
            field_4 = (unsigned int)bVar1;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/FloType.cpp",
                      100, "Error unrecognised .floor config code: %i", arg2);
            break;
        case 5:
            field_8 = 0;
            break;
        case 7:
            uVar2 = packetJ.g3();
            field_12 = uVar2;
            break;
        case 8:
            m_defaultWater = arg3;
        }
    }

} // namespace jag::oldscape::configdecoder
