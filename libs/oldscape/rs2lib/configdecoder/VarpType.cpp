// libs/oldscape/rs2lib/configdecoder/VarpType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "VarpType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016824f8, 8 bytes, __common; zero-initialised
    VarpType::m_pConfigClient;

    // 0x101682500, 5376 bytes, __common; zero-initialised
    VarpType::m_recentUse;

    // 0x101683a00, 8 bytes, __common; zero-initialised
    VarpType::m_numDefinitions;

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    VarpType::VarpType();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    VarpType::VarpType();

    // 0x1002397b0, 32 bytes, placed by class name and debug map
    // VarpType::Init(jagex3::Js5*)
    void VarpType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
        m_numDefinitions = param_1->GetFileIdLimit(16);
    }

    // 0x1002397d0, 256 bytes, placed by class name and debug map
    // VarpType::List(int)
    shared_ptr* VarpType::List(int param_1) {
        shared_ptr* psVar2;
        undefined* puVar3;
        VarpType* this;
        PacketJ* pPVar4;
        ulonglong local_50;
        shared_ptr local_48;
        ulonglong local_38[2];

        local_38[0] = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<VarpType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        if (!operator!=(psVar2, (_func_decltype_nullptr*)0)) {
            new (local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            puVar3 = (undefined*)m_pConfigClient->GetFile(
                (int)(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_38, 16, (array*)(ulong)(uint)param_1);
            if (puVar3 == DataStatus::READY) {
                make_shared<VarpType>((jag*)&local_48);
                this = (VarpType*)shared_ptr<VarpType>::operator->((shared_ptr<VarpType>*)&local_48);
                pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_38);
                Decode(this, pPVar4);
                local_50 = (long)param_1;
                psVar2 = (shared_ptr*)m_recentUse.Put(&local_48, 1, &local_50);
                local_48.~shared_ptr();
            }
            local_38->~shared_ptr();
        }
        return psVar2;
    }

    // 0x100239a00, 64 bytes, placed by class name and debug map
    // VarpType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void VarpType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100239b30, 96 bytes, placed by class name and debug map
    // VarpType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void VarpType::Decode(PacketJ* param_1, int param_2) {
        ushort uVar1;
        undefined8 uVar2;

        if (param_2 == 5) {
            uVar1 = param_1->g2();
            field_0 = (uint)uVar1;
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/VarpType.cpp",
                                66, "Error unrecognised .varp config code: %d", param_2);
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100239970, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::VarpType>::type make_shared<oldscape::configdecoder::VarpType>()
    jag* make_shared<oldscape::configdecoder::VarpType>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        VarpType* local_28[2];

        pvVar1 = (void*)aligned_alloc(24, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::VarpType>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarpType>, int,
                                   oldscape::configdecoder::VarpType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
