// libs/oldscape/rs2lib/configdecoder/FluType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class FluType {
    public:
        FluType();
        void Init(jagex3::Js5* js5);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void PostDecode();
        void List(int arg1);
        void GetHsl(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3);
        static int64_t m_pConfigClient;
        static vector<std::unique_ptr<FluType>> m_list;

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
    };

    // 0x1016b9340
    int64_t FluType::m_pConfigClient;

    // 0x1016b9348
    vector<std::unique_ptr<FluType>> FluType::m_list;

    // 0x1001981a0: FluType::FluType() has the same machine code as Error::Error()

    // 0x100266a50
    void FluType::Init(jagex3::Js5* js5) {
        unique_ptr<FluType>* puVar3;
        PacketJ<Array<unsigned char> _>* packetJ;
        unsigned long arg1;
        ReturnValue local_38;

        m_pConfigClient = js5;
        int iVar2 = js5->GetFileIdLimit(1);
        m_list.resize((long)iVar2);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        iVar2 = m_list.size();
        if (0 < iVar2) {
            arg1 = 0;
            do {
                m_pConfigClient->GetFile(local_48, 1, (int)arg1, nullptr);
                local_38 = std::make_unique<FluType>();
                puVar3 = &m_list[arg1];
                *puVar3 = local_38;
                if (local_48 != nullptr) {
                    puVar3 = &m_list[arg1];
                    packetJ = (PacketJ<Array<unsigned char> _>*)(*puVar3).operator->();
                    iVar2 = *local_48;
                    Decode(packetJ, iVar2);
                }
                puVar3 = &m_list[arg1];
                PostDecode((FluType*)(*puVar3).operator->());
                arg1 = arg1 + 1;
                iVar2 = m_list.size();
            } while ((long)arg1 < (long)iVar2);
        }
    }

    // 0x100266cc0
    void FluType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar3;
        uint32_t in_register_00000034;

        TextureAtlasReference* textureAtlasReference =
            (TextureAtlasReference*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        unsigned long uVar1 = textureAtlasReference->size();
        unsigned long uVar2 = textureAtlasReference->GetTextureAtlas();
        if (uVar1 < uVar2) {
            do {
                bVar3 = textureAtlasReference->g1();
                if (bVar3 == 0) {
                    return;
                }
                Decode(packetJ, arg2, (unsigned int)bVar3);
                uVar1 = textureAtlasReference->size();
                uVar2 = textureAtlasReference->GetTextureAtlas();
            } while (uVar1 < uVar2);
        }
    }

    // 0x100266d30
    void FluType::PostDecode() {
        GetHsl(field_0);
    }

    // 0x100266d40
    void FluType::List(int arg1) {
        unsigned long uVar1;
        unique_ptr<FluType>* unique_ptr;

        if (-1 < arg1) {
            uVar1 = m_list.size();
            if ((unsigned long)(long)arg1 < uVar1) {
                unique_ptr = &m_list[(long)arg1];
                return unique_ptr->get();
            }
        }
        return 0;
    }

    // 0x100266d90
    void FluType::GetHsl(int arg1) {
        int iVar3;
        double dVar6;

        double dVar9 = (double)((unsigned int)arg1 >> 16 & 255) * 0.00390625f;
        double dVar4 = (double)((unsigned int)arg1 >> 8 & 255) * 0.00390625f;
        double dVar10 = (double)(arg1 & 255) * 0.00390625f;
        double dVar5 = dVar4;
        if (dVar9 <= dVar4) {
            dVar5 = dVar9;
        }
        if (dVar10 <= dVar5) {
            dVar5 = dVar10;
        }
        double dVar8 = dVar4;
        if (dVar4 <= dVar9) {
            dVar8 = dVar9;
        }
        if (dVar8 <= dVar10) {
            dVar8 = dVar10;
        }
        double dVar7 = dVar5 + dVar8;
        double dVar11 = dVar7 * 0.5;
        if (dVar5 == dVar8) {
            dVar5 = 0.0;
            dVar6 = 0.0;
        } else {
            if (dVar11 < 0.5) {
                dVar6 = (dVar8 - dVar5) / dVar7;
            } else {
                dVar6 = (dVar8 - dVar5) / (2.0 - dVar7);
            }
            if (dVar9 == dVar8) {
                dVar5 = (dVar4 - dVar10) / (dVar8 - dVar5);
            } else if (dVar4 == dVar8) {
                dVar5 = (dVar10 - dVar9) / (dVar8 - dVar5) + 2.0;
            } else if (dVar10 == dVar8) {
                dVar5 = (dVar9 - dVar4) / (dVar8 - dVar5) + 4.0;
            } else {
                dVar5 = 0.0;
            }
        }
        int iVar2 = (int)(dVar6 * 256.0);
        field_8 = iVar2;
        int iVar1 = (int)(dVar7 * 128.0);
        field_12 = iVar1;
        if (iVar2 < 0) {
            iVar3 = 0;
        LAB_100266ef1:
            field_8 = iVar3;
            if (-1 < iVar1)
                goto LAB_100266ee1;
        LAB_100266ef8:
            iVar2 = 0;
        } else {
            iVar3 = 255;
            if (255 < iVar2)
                goto LAB_100266ef1;
            if (iVar1 < 0)
                goto LAB_100266ef8;
        LAB_100266ee1:
            iVar2 = 255;
            if (iVar1 < 256)
                goto LAB_100266efd;
        }
        field_12 = iVar2;
    LAB_100266efd:
        iVar2 = (int)(dVar6 * 512.0 *
                      (double)(~-(unsigned long)(0.5 < dVar11) & (unsigned long)dVar11 |
                               (unsigned long)(1.0 - dVar11) & -(unsigned long)(0.5 < dVar11)));
        iVar1 = 1;
        if (0 < iVar2) {
            iVar1 = iVar2;
        }
        field_16 = iVar1;
        field_4 = (int)((double)iVar1 * dVar5 * 0.16666666666666666);
    }

    // 0x100266f60
    void FluType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3) {
        uint32_t uVar1;
        uint32_t in_register_00000034;

        if (arg3 == 1) {
            uVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                         (uint32_t)arg2))
                        ->g3();
            *(uint32_t*)packetJ = uVar1;
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/FluType.cpp",
                      77, "Error unrecognised .floor config code: %i", arg3);
        }
    }

} // namespace jag::oldscape::configdecoder
