// libs/oldscape/rs2lib/configdecoder/HeadbarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "HeadbarType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016b9368, 8 bytes, __common; zero-initialised
    HeadbarType::m_dataNotReady;

    // 0x1016b9370, 5376 bytes, __common; zero-initialised
    HeadbarType::m_recentUse;

    // 0x1016ba870, 5376 bytes, __common; set at startup by ___cxx_global_var_init.1119
    LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long> HeadbarType::m_spriteCache =
        LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");

    // 0x1016bbd70, 8 bytes, __common; zero-initialised
    HeadbarType::m_pSprites;

    // 0x1016bbd78, 8 bytes, __common; zero-initialised
    HeadbarType::m_pConfigClient;

    // 0x1002670a0, 32 bytes, placed by class name and debug map
    // HeadbarType::Init(jagex3::Js5*, jagex3::Js5*)
    void HeadbarType::Init(Js5* param_1, Js5* param_2) {
        m_pConfigClient = param_1;
        m_pSprites = param_2;
    }

    // 0x1002670c0, 304 bytes, placed by class name and debug map
    // HeadbarType::List(long long)
    HeadbarType* HeadbarType::List(longlong param_1) {
        shared_ptr* psVar2;
        undefined* puVar3;
        undefined4* puVar4;
        HeadbarType* this_00;
        PacketJ* pPVar5;
        shared_ptr local_40;
        longlong local_30[2];

        local_30[0] = param_1;
        psVar2 = (shared_ptr*)LRUHashCache<HeadbarType, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        if (!operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
            new (local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            puVar3 = (undefined*)m_pConfigClient->GetFile((int)local_30, 33, (array*)(param_1 & 4294967295));
            make_shared<HeadbarType>((jag*)&local_40);
            shared_ptr<HeadbarType>::operator=((shared_ptr<HeadbarType>*)this, &local_40);
            local_40.~shared_ptr();
            puVar4 = (undefined4*)shared_ptr<HeadbarType>::operator->((shared_ptr<HeadbarType>*)this);
            *puVar4 = (int)param_1;
            if (puVar3 == DataStatus::READY) {
                this_00 = (HeadbarType*)shared_ptr<HeadbarType>::operator->((shared_ptr<HeadbarType>*)this);
                pPVar5 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_30);
                Decode(this_00, pPVar5);
            }
            local_40._0_8_ = param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30->~shared_ptr();
        }
        return this;
    }

    // 0x100267360, 64 bytes, placed by class name and debug map
    // HeadbarType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void HeadbarType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100267490, 288 bytes, placed by class name and debug map
    // HeadbarType::GetFullSprite()
    HeadbarType* HeadbarType::GetFullSprite() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        m_dataNotReady._0_1_ = 0;
        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 32));
        if ((long)local_30._0_8_ < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.Makepix32(m_pSprites, *(int*)(in_RSI + 32), 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_40, &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 32));
                    m_spriteCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x100267740, 288 bytes, placed by class name and debug map
    // HeadbarType::GetEmptySprite()
    HeadbarType* HeadbarType::GetEmptySprite() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        m_dataNotReady._0_1_ = 0;
        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 36));
        if ((long)local_30._0_8_ < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.Makepix32(m_pSprites, *(int*)(in_RSI + 36), 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_40, &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 36));
                    m_spriteCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x100267860, 32 bytes, placed by class name and debug map
    // HeadbarType::ResetCache()
    void HeadbarType::ResetCache() {
        m_recentUse.Reset();
        m_spriteCache.Reset();
    }

    // 0x100267880, 16 bytes, placed by class name and debug map
    // HeadbarType::PostDecode()
    void HeadbarType::PostDecode() {}

    // 0x100267890, 272 bytes, placed by class name and debug map
    // HeadbarType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void HeadbarType::Decode(PacketJ* param_1, int param_2) {
        byte bVar1;
        ushort uVar2;
        undefined4 uVar3;

        switch (param_2) {
        case 1:
            uVar2 = param_1->g2();
            field_4 = (uint)uVar2;
            break;
        case 2:
            bVar1 = param_1->g1();
            field_8 = (uint)bVar1;
            break;
        case 3:
            bVar1 = param_1->g1();
            field_12 = (uint)bVar1;
            break;
        case 4:
            field_16 = 0;
            break;
        case 5:
            uVar2 = param_1->g2();
            field_24 = (uint)uVar2;
            break;
        case 6:
            bVar1 = param_1->g1();
            field_28 = (uint)bVar1;
            break;
        case 7:
            uVar3 = param_1->gSmart2or4s();
            field_32 = uVar3;
            break;
        case 8:
            uVar3 = param_1->gSmart2or4s();
            field_36 = uVar3;
            break;
        case 11:
            uVar2 = param_1->g2();
            field_16 = (uint)uVar2;
            break;
        case 14:
            bVar1 = param_1->g1();
            field_40 = (uint)bVar1;
            break;
        case 15:
            bVar1 = param_1->g1();
            field_44 = (uint)bVar1;
        }
    }

    // 0x100290f00, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1119
    void ___cxx_global_var_init_1119() {
        new (&HeadbarType::m_spriteCache)
            LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee58f0, &HeadbarType::m_spriteCache, 4294967296);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100267290, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::HeadbarType>::type make_shared<oldscape::configdecoder::HeadbarType>()
    jag* make_shared<oldscape::configdecoder::HeadbarType>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        HeadbarType* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::HeadbarType>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>, int,
                                   oldscape::configdecoder::HeadbarType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
