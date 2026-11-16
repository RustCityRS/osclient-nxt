// libs/oldscape/rs2lib/configdecoder/FluType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class FluType {
    public:
        FluType();
        void Init(jagex3::Js5*);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void PostDecode();
        List(int);
        void GetHsl(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int);
        static /* 8 bytes */ m_pConfigClient;
        static /* 32 bytes */ m_list;

        // data members, from how the methods use this: 24 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x1016b9340, 8 bytes, __common; zero-initialised
    FluType::m_pConfigClient;

    // 0x1016b9348, 32 bytes, __common; zero-initialised
    FluType::m_list;

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    FluType::FluType();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    FluType::FluType();

    // 0x100266a50, 336 bytes, placed by class name and debug map
    // FluType::Init(jagex3::Js5*)
    void FluType::Init(Js5* param_1) {
        bool bVar1;
        int iVar2;
        unique_ptr<FluType, std::default_delete<FluType>>* puVar3;
        PacketJ* pPVar4;
        FluType* this;
        ulong uVar5;
        shared_ptr local_48;
        unique_ptr local_38[8];

        m_pConfigClient = param_1;
        iVar2 = param_1->GetFileIdLimit(1);
        m_list.resize((long)iVar2);
        new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        iVar2 = m_list.size();
        if (0 < iVar2) {
            uVar5 = 0;
            do {
                ((shared_ptr*)m_pConfigClient)->GetFile((int)&local_48, 1, (array*)(uVar5 & 4294967295));
                std::make_unique<FluType>();
                puVar3 = (unique_ptr<FluType, std::default_delete<FluType>>*)
                    eastl::vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>::operator[](
                        (vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>*)&m_list,
                        uVar5);
                std::unique_ptr<FluType, std::default_delete<FluType>>::operator=(puVar3, local_38);
                local_38->~unique_ptr();
                bVar1 = operator!=(&local_48, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    puVar3 = (unique_ptr<FluType, std::default_delete<FluType>>*)eastl::
                        vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>::operator[](
                            (vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>*)&m_list,
                            uVar5);
                    pPVar4 = (PacketJ*)std::unique_ptr<FluType, std::default_delete<FluType>>::operator->(puVar3);
                    iVar2 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_48);
                    Decode(pPVar4, iVar2);
                }
                puVar3 = (unique_ptr<FluType, std::default_delete<FluType>>*)
                    eastl::vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>::operator[](
                        (vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>*)&m_list,
                        uVar5);
                this = (FluType*)std::unique_ptr<FluType, std::default_delete<FluType>>::operator->(puVar3);
                PostDecode(this);
                uVar5 = uVar5 + 1;
                iVar2 = m_list.size();
            } while ((long)uVar5 < (long)iVar2);
        }
        local_48.~shared_ptr();
    }

    // 0x100266cc0, 112 bytes, placed by class name and debug map
    // FluType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void FluType::Decode(PacketJ* param_1, int param_2) {
        ulong uVar1;
        ulong uVar2;
        byte bVar3;
        undefined4 in_register_00000034;
        TextureAtlasReference* this;

        this = (TextureAtlasReference*)CONCAT44(in_register_00000034, param_2);
        uVar1 = size();
        uVar2 = GetTextureAtlas();
        if (uVar1 < uVar2) {
            do {
                bVar3 = g1();
                if (bVar3 == 0) {
                    return;
                }
                Decode(param_1, param_2, (uint)bVar3);
                uVar1 = size();
                uVar2 = GetTextureAtlas();
            } while (uVar1 < uVar2);
        }
    }

    // 0x100266d30, 16 bytes, placed by class name and debug map
    // FluType::PostDecode()
    void FluType::PostDecode() {
        GetHsl(this, field_0);
    }

    // 0x100266d40, 64 bytes, placed by class name and debug map
    // FluType::List(int)
    undefined8 FluType::List(int param_1) {
        ulong uVar1;
        unique_ptr<FluType, std::default_delete<FluType>>* this;
        undefined8 uVar2;

        if (-1 < param_1) {
            uVar1 = m_list.size();
            if ((ulong)(long)param_1 < uVar1) {
                this = (unique_ptr<FluType, std::default_delete<FluType>>*)
                    eastl::vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>::operator[](
                        (vector<std::unique_ptr<FluType, std::default_delete<FluType>>, eastl::allocator>*)&m_list,
                        (long)param_1);
                uVar2 = std::unique_ptr<FluType, std::default_delete<FluType>>::get(this);
                return uVar2;
            }
        }
        return 0;
    }

    // 0x100266d90, 464 bytes, placed by class name and debug map
    // FluType::GetHsl(int)
    void FluType::GetHsl(int param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;
        double dVar8;
        double dVar9;
        double dVar10;
        double dVar11;

        dVar9 = (double)((uint)param_1 >> 16 & 255) * 0.00390625;
        dVar4 = (double)((uint)param_1 >> 8 & 255) * 0.00390625;
        dVar10 = (double)(param_1 & 255) * 0.00390625;
        dVar5 = dVar4;
        if (dVar9 <= dVar4) {
            dVar5 = dVar9;
        }
        if (dVar10 <= dVar5) {
            dVar5 = dVar10;
        }
        dVar8 = dVar4;
        if (dVar4 <= dVar9) {
            dVar8 = dVar9;
        }
        if (dVar8 <= dVar10) {
            dVar8 = dVar10;
        }
        dVar7 = dVar5 + dVar8;
        dVar11 = dVar7 * 0.5;
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
        iVar2 = (int)(dVar6 * 256.0);
        field_8 = iVar2;
        iVar1 = (int)(dVar7 * 128.0);
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
        iVar2 =
            (int)(dVar6 * 512.0 *
                  (double)(~-(ulong)(0.5 < dVar11) & (ulong)dVar11 | (ulong)(1.0 - dVar11) & -(ulong)(0.5 < dVar11)));
        iVar1 = 1;
        if (0 < iVar2) {
            iVar1 = iVar2;
        }
        field_16 = iVar1;
        field_4 = (int)((double)iVar1 * dVar5 * 0.16666666666666666);
    }

    // 0x100266f60, 96 bytes, placed by class name and debug map
    // FluType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int)
    void FluType::Decode(PacketJ* param_1, int param_2, int param_3) {
        undefined4 uVar1;
        undefined8 uVar2;
        undefined4 in_register_00000034;

        if (param_3 == 1) {
            uVar1 = (CONCAT44(in_register_00000034, param_2))->g3();
            *(undefined4*)param_1 = uVar1;
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/FluType.cpp",
                                77, "Error unrecognised .floor config code: %i", param_3);
        }
    }

} // namespace jag::oldscape::configdecoder
