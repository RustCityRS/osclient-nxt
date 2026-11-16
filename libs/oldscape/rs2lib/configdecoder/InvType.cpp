// libs/oldscape/rs2lib/configdecoder/InvType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "libs/game/runetek5/config/invtype/InvType.h"

namespace jag::oldscape::configdecoder {
    // 0x100fd68a0, 8 bytes, __common; zero-initialised
    InvType::m_pConfigClient;

    // 0x100fd68a8, 5376 bytes, __common; zero-initialised
    InvType::m_recentUse;

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    InvType::InvType();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    InvType::InvType();

    // 0x1002283f0, 16 bytes, placed by class name and debug map
    // InvType::Init(jagex3::Js5*)
    void InvType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100228400, 288 bytes, placed by class name and debug map
    // InvType::List(int)
    InvType* InvType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        InvType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<InvType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 5, (array*)(ulong)(uint)param_1);
            make_shared<InvType>((jag*)&local_40);
            shared_ptr<InvType>::operator=((shared_ptr<InvType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (InvType*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)this);
                pPVar3 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar3);
            }
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x1002286d0, 64 bytes, placed by class name and debug map
    // InvType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void InvType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100228800, 32 bytes, placed by class name and debug map
    // InvType::ResetCache()
    void InvType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x100228820, 96 bytes, placed by class name and debug map
    // InvType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void InvType::Decode(PacketJ* param_1, int param_2) {
        ushort uVar1;
        undefined8 uVar2;

        if (param_2 == 2) {
            uVar1 = param_1->g2();
            field_0 = (uint)uVar1;
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/InvType.cpp",
                                72, "Error unrecognised .inv config code: %i", param_2);
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002285c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::InvType>::type make_shared<oldscape::configdecoder::InvType>()
    jag* make_shared<oldscape::configdecoder::InvType>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        InvType* local_28[2];

        pvVar1 = (void*)aligned_alloc(24, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = (InvType*)placement_new<oldscape::configdecoder::VarpType>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::configdecoder::InvType>, int,
                                   oldscape::configdecoder::InvType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
