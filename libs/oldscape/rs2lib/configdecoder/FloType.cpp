// libs/oldscape/rs2lib/configdecoder/FloType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "FloType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016b9310, 8 bytes, __common; zero-initialised
    FloType::m_pConfigClient;

    // 0x1016b9318, 32 bytes, __common; zero-initialised
    FloType::m_list;

    // 0x1016b9338, 8 bytes, __common; zero-initialised
    FloType::m_defaultWater;

    // 0x100266450, 352 bytes, placed by class name and debug map
    // FloType::Init(jagex3::Js5*)
    void FloType::Init(Js5* param_1) {
        long lVar1;
        unique_ptr<FloType, std::default_delete<FloType>>* puVar2;
        FloType* pFVar3;
        PacketJ* pPVar4;
        ulong uVar5;
        bool bVar6;
        int iVar7;
        ulong uVar8;
        shared_ptr local_48;
        unique_ptr local_38[8];

        m_pConfigClient = param_1;
        iVar7 = param_1->GetFileIdLimit(4);
        m_list.resize((long)iVar7);
        new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        lVar1 = m_list.size();
        if (lVar1 != 0) {
            uVar8 = 0;
            do {
                ((shared_ptr*)m_pConfigClient)->GetFile((int)&local_48, 4, (array*)(uVar8 & 4294967295));
                std::make_unique<FloType>();
                puVar2 = (unique_ptr<FloType, std::default_delete<FloType>>*)
                    eastl::vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>::operator[](
                        (vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>*)&m_list,
                        uVar8);
                std::unique_ptr<FloType, std::default_delete<FloType>>::operator=(puVar2, local_38);
                local_38->~unique_ptr();
                bVar6 = operator!=(&local_48, (_func_decltype_nullptr*)0);
                if (bVar6) {
                    puVar2 = (unique_ptr<FloType, std::default_delete<FloType>>*)eastl::
                        vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>::operator[](
                            (vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>*)&m_list,
                            uVar8);
                    pFVar3 = (FloType*)std::unique_ptr<FloType, std::default_delete<FloType>>::operator->(puVar2);
                    pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_48);
                    Decode(pFVar3, pPVar4, (int)uVar8);
                }
                puVar2 = (unique_ptr<FloType, std::default_delete<FloType>>*)
                    eastl::vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>::operator[](
                        (vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>*)&m_list,
                        uVar8);
                pFVar3 = (FloType*)std::unique_ptr<FloType, std::default_delete<FloType>>::operator->(puVar2);
                PostDecode(pFVar3);
                uVar8 = uVar8 + 1;
                uVar5 = m_list.size();
            } while (uVar8 < uVar5);
        }
        local_48.~shared_ptr();
    }

    // 0x1002666e0, 128 bytes, placed by class name and debug map
    // FloType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void FloType::Decode(PacketJ* param_1, int param_2) {
        ulong uVar1;
        ulong uVar2;
        byte bVar3;

        uVar1 = param_1->size();
        uVar2 = param_1->GetTextureAtlas();
        if (uVar1 < uVar2) {
            do {
                bVar3 = param_1->g1();
                if (bVar3 == 0) {
                    return;
                }
                Decode(this, param_1, (uint)bVar3, param_2);
                uVar1 = param_1->size();
                uVar2 = param_1->GetTextureAtlas();
            } while (uVar1 < uVar2);
        }
    }

    // 0x100266760, 64 bytes, placed by class name and debug map
    // FloType::PostDecode()
    void FloType::PostDecode() {
        if (field_12 != -1) {
            GetHsl(this, field_12);
            field_28 = field_16;
            field_32 = *(undefined8*)&field_20;
        }
        GetHsl(this, field_0);
    }

    // 0x1002667a0, 64 bytes, placed by class name and debug map
    // FloType::List(int)
    undefined8 FloType::List(int param_1) {
        ulong uVar1;
        unique_ptr<FloType, std::default_delete<FloType>>* this;
        undefined8 uVar2;

        if (-1 < param_1) {
            uVar1 = m_list.size();
            if ((ulong)(long)param_1 < uVar1) {
                this = (unique_ptr<FloType, std::default_delete<FloType>>*)
                    eastl::vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>::operator[](
                        (vector<std::unique_ptr<FloType, std::default_delete<FloType>>, eastl::allocator>*)&m_list,
                        (long)param_1);
                uVar2 = std::unique_ptr<FloType, std::default_delete<FloType>>::get(this);
                return uVar2;
            }
        }
        return 0;
    }

    // 0x1002667f0, 384 bytes, placed by class name and debug map
    // FloType::GetHsl(int)
    void FloType::GetHsl(int param_1) {
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

        dVar8 = (double)((uint)param_1 >> 16 & 255) * 0.00390625;
        dVar5 = (double)((uint)param_1 >> 8 & 255) * 0.00390625;
        dVar10 = (double)(param_1 & 255) * 0.00390625;
        dVar6 = dVar5;
        if (dVar8 <= dVar5) {
            dVar6 = dVar8;
        }
        if (dVar10 <= dVar6) {
            dVar6 = dVar10;
        }
        dVar9 = dVar5;
        if (dVar5 <= dVar8) {
            dVar9 = dVar8;
        }
        if (dVar9 <= dVar10) {
            dVar9 = dVar10;
        }
        dVar4 = dVar6 + dVar9;
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
        iVar2 = (int)(dVar7 * 256.0);
        field_16 = (int)(dVar6 * 42.666666666666664);
        field_20 = iVar2;
        iVar1 = (int)(dVar4 * 128.0);
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

    // 0x100266970, 192 bytes, placed by class name and debug map
    // FloType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* FloType::Decode(PacketJ<Array<unsigned char,
   eastl::allocator> >&, int, int) */

    void FloType::Decode(PacketJ* param_1, int param_2, int param_3) {
        byte bVar1;
        undefined4 uVar2;
        undefined8 uVar3;

        switch (param_2) {
        case 1:
            uVar2 = param_1->g3();
            field_0 = uVar2;
            break;
        case 2:
            bVar1 = param_1->g1();
            field_4 = (uint)bVar1;
            break;
        default:
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/FloType.cpp",
                                100, "Error unrecognised .floor config code: %i", param_2);
            break;
        case 5:
            field_8 = 0;
            break;
        case 7:
            uVar2 = param_1->g3();
            field_12 = uVar2;
            break;
        case 8:
            _m_defaultWater = param_3;
        }
    }

} // namespace jag::oldscape::configdecoder
