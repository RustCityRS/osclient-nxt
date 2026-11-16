// libs/oldscape/rs2lib/configdecoder/VarBitType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "VarBitType.h"

namespace jag::oldscape::configdecoder {
    // 0x101677c38, 8 bytes, __common; zero-initialised
    VarBitType::m_pConfigClient;

    // 0x101677c40, 5376 bytes, __common; zero-initialised
    VarBitType::m_recentUse;

    // 0x101679140, 128 bytes, __common; zero-initialised
    VarBitType::m_maskLookUp;

    // 0x100237360, 16 bytes, placed by class name and debug map
    // VarBitType::Init(jagex3::Js5*)
    void VarBitType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100237370, 304 bytes, placed by class name and debug map
    // VarBitType::List(int)
    VarBitType* VarBitType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        undefined* puVar3;
        VarBitType* this_00;
        PacketJ* pPVar4;
        ulonglong local_50;
        shared_ptr local_48;
        shared_ptr local_38;

        local_38._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<VarBitType, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
        if (bVar1) {
            new (this) shared_ptr<dash3d::Decor>(psVar2);
            return this;
        }
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        make_shared<VarBitType>((jag*)&local_48);
        puVar3 = (undefined*)m_pConfigClient->GetFile((int)&local_38, 14, (array*)(ulong)(uint)param_1);
        if ((puVar3 == DataStatus::READY) || (bVar1 = operator!=(&local_38, (_func_decltype_nullptr*)0), bVar1)) {
            this_00 = (VarBitType*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)&local_48);
            pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            Decode(this_00, pPVar4);
        }
        local_50 = (long)param_1;
        m_recentUse.Put(&local_48, 1, &local_50);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_48);
        local_48.~shared_ptr();
        local_38.~shared_ptr();
        return this;
    }

    // 0x1002375d0, 64 bytes, placed by class name and debug map
    // VarBitType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void VarBitType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100237700, 32 bytes, placed by class name and debug map
    // VarBitType::GetVarbitValue(int)
    uint VarBitType::GetVarbitValue(int param_1) {
        return param_1 >> ((byte)field_4 & 31) & (&m_maskLookUp)[(long)(int)field_8 - (long)(int)field_4];
    }

    // 0x100237720, 160 bytes, placed by class name and debug map
    // VarBitType::SetVarbitValue(int, int, bool*)
    uint VarBitType::SetVarbitValue(int param_1, int param_2, bool* param_3) {
        int iVar1;
        undefined8 uVar2;
        byte bVar3;
        uint uVar4;

        uVar4 = field_4;
        iVar1 = (&m_maskLookUp)[(long)(int)field_8 - (long)(int)uVar4];
        if ((param_2 < 0) || (iVar1 < param_2)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/VarBitType.cpp",
                                54, "VarBitType: Varbit setting overflow! %i, %i", param_2, iVar1);
            if (param_3 != (bool*)0) {
                *param_3 = false;
            }
        } else {
            if (param_3 != (bool*)0) {
                *param_3 = true;
            }
            bVar3 = (byte)uVar4;
            uVar4 = iVar1 << (bVar3 & 31);
            param_1 = param_2 << (bVar3 & 31) & uVar4 | ~uVar4 & param_1;
        }
        return param_1;
    }

    // 0x1002377c0, 128 bytes, placed by class name and debug map
    // VarBitType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void VarBitType::Decode(PacketJ* param_1, int param_2) {
        byte bVar1;
        ushort uVar2;
        undefined8 in_RAX;
        undefined4 uVar4;
        undefined8 uVar3;

        uVar4 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 1) {
            uVar2 = param_1->g2();
            field_0 = (uint)uVar2;
            bVar1 = param_1->g1();
            field_4 = (uint)bVar1;
            bVar1 = param_1->g1();
            field_8 = (uint)bVar1;
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/VarBitType.cpp",
                                93, "Error unrecognised .varbit config code: %d", CONCAT44(uVar4, param_2));
        }
    }

    // 0x100237840, 64 bytes, placed by class name and debug map
    // VarBitType::InitMaskLoopUpTable()
    void VarBitType::InitMaskLoopUpTable() {
        int iVar1;
        long lVar2;

        iVar1 = 2;
        lVar2 = 0;
        do {
            *(int*)((long)&m_maskLookUp + lVar2) = iVar1 + -1;
            iVar1 = iVar1 * 2;
            lVar2 = lVar2 + 4;
        } while (lVar2 != 128);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100237540, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::VarBitType>::type make_shared<oldscape::configdecoder::VarBitType>()
    jag* make_shared<oldscape::configdecoder::VarBitType>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        VarBitType* local_28[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VarBitType>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>, int,
                                   oldscape::configdecoder::VarBitType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
