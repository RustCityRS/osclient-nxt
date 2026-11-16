// libs/oldscape/rs2lib/configdecoder/SpotType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "SpotType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016747c0, 8 bytes, __common; zero-initialised
    SpotType::m_pConfigClient;

    // 0x1016747c8, 8 bytes, __common; zero-initialised
    SpotType::m_pModels;

    // 0x1016747d0, 5376 bytes, __common; zero-initialised
    SpotType::m_recentUse;

    // 0x101675cd0, 2656 bytes, __common; zero-initialised
    SpotType::m_modelCache;

    // 0x1002360a0, 32 bytes, placed by class name and debug map
    // SpotType::Init(jagex3::Js5*, jagex3::Js5*)
    void SpotType::Init(Js5* param_1, Js5* param_2) {
        m_pConfigClient = param_1;
        m_pModels = param_2;
    }

    // 0x1002360c0, 304 bytes, placed by class name and debug map
    // SpotType::List(int)
    SpotType* SpotType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        int* piVar3;
        SpotType* this_00;
        PacketJ* pPVar4;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<SpotType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 13, (array*)(ulong)(uint)param_1);
            make_shared<SpotType>((jag*)&local_40);
            shared_ptr<SpotType>::operator=((shared_ptr<SpotType>*)this, &local_40);
            local_40.~shared_ptr();
            piVar3 = (int*)shared_ptr<SpotType>::operator->((shared_ptr<SpotType>*)this);
            *piVar3 = param_1;
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (SpotType*)shared_ptr<SpotType>::operator->((shared_ptr<SpotType>*)this);
                pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar4);
            }
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100236360, 64 bytes, placed by class name and debug map
    // SpotType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void SpotType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100236490, 704 bytes, placed by class name and debug map
    // SpotType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void SpotType::Decode(PacketJ* param_1, int param_2) {
        byte bVar1;
        ushort uVar2;
        undefined2 uVar3;
        undefined8 uVar4;
        undefined2* puVar5;
        ulong uVar6;
        ulong uVar7;

        switch (param_2) {
        case 1:
            uVar2 = param_1->g2();
            field_4 = (uint)uVar2;
            break;
        case 2:
            uVar2 = param_1->g2();
            *(uint*)&field_8 = (uint)uVar2;
            break;
        default:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/SpotType.cpp",
                                108, "Error unrecognised .spotanim config code: %i", param_2);
            break;
        case 4:
            uVar2 = param_1->g2();
            field_112 = (uint)uVar2;
            break;
        case 5:
            uVar2 = param_1->g2();
            field_116 = (uint)uVar2;
            break;
        case 6:
            uVar2 = param_1->g2();
            field_120 = (uint)uVar2;
            break;
        case 7:
            bVar1 = param_1->g1();
            field_124 = (uint)bVar1;
            break;
        case 8:
            bVar1 = param_1->g1();
            field_128 = (uint)bVar1;
            break;
        case 40:
            bVar1 = param_1->g1();
            uVar7 = (ulong)bVar1;
            (&field_16, uVar7, 5)->set_max_size();
            (&field_40, uVar7, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar6 = 0;
                do {
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_16, uVar6);
                    *puVar5 = uVar3;
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_40, uVar6);
                    *puVar5 = uVar3;
                    uVar6 = uVar6 + 1;
                } while (uVar7 != uVar6);
            }
            break;
        case 41:
            bVar1 = param_1->g1();
            uVar7 = (ulong)bVar1;
            (&field_64, uVar7, 5)->set_max_size();
            (&field_88, uVar7, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar6 = 0;
                do {
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_64, uVar6);
                    *puVar5 = uVar3;
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_88, uVar6);
                    *puVar5 = uVar3;
                    uVar6 = uVar6 + 1;
                } while (uVar7 != uVar6);
            }
        }
    }

    // 0x100236750, 592 bytes, placed by class name and debug map
    // SpotType::GetTempModel2(int)
    SpotType* SpotType::GetTempModel2(int param_1) {
        int iVar2;
        ModelLit* pMVar3;
        long* plVar4;
        int in_EDX;
        undefined4 in_register_00000034;
        long lVar5;
        shared_ptr<SeqType> local_70[16];
        shared_ptr<dash3d::ModelLit> local_60[16];
        shared_ptr local_50;
        shared_ptr local_40;

        lVar5 = CONCAT44(in_register_00000034, param_1);
        GetBaseModel((SpotType*)local_60);
        if (operator==((shared_ptr*)local_60, (_func_decltype_nullptr*)0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            goto LAB_10023692f;
        }
        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        if ((*(int*)(lVar5 + 8) == -1) || (in_EDX == -1)) {
            plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->(local_60);
            (**(code**)(*plVar4 + 80))(&local_50, plVar4, 1, 2);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_40, &local_50);
            local_50.~shared_ptr();
            if (*(int*)(lVar5 + 112) == 128)
                goto LAB_10023684e;
        LAB_100236858:
            plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
            (**(code**)(*plVar4 + 168))(plVar4, *(undefined4*)(lVar5 + 112), *(undefined4*)(lVar5 + 116));
        } else {
            local_70->List(*(int*)(lVar5 + 8));
            pMVar3 = (ModelLit*)shared_ptr<SeqType>::operator->(local_70);
            iVar2 = shared_ptr<dash3d::ModelLit>::operator*(local_60);
            local_50.AnimateModel(pMVar3, iVar2, in_EDX);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_40, &local_50);
            local_50.~shared_ptr();
            local_70->~shared_ptr();
            if (*(int*)(lVar5 + 112) != 128)
                goto LAB_100236858;
        LAB_10023684e:
            if (*(int*)(lVar5 + 116) != 128)
                goto LAB_100236858;
        }
        if (*(int*)(lVar5 + 120) != 0) {
            if (*(int*)(lVar5 + 120) == 90) {
                plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar4 + 128))(plVar4);
            }
            if (*(int*)(lVar5 + 120) == 180) {
                plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar4 + 128))(plVar4);
                plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar4 + 128))(plVar4);
            }
            if (*(int*)(lVar5 + 120) == 270) {
                plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar4 + 128))(plVar4);
                plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar4 + 128))(plVar4);
                plVar4 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar4 + 128))(plVar4);
            }
        }
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
        local_40.~shared_ptr();
    LAB_10023692f:
        local_60->~shared_ptr();
        return this;
    }

    // 0x1002369a0, 656 bytes, placed by class name and debug map
    // SpotType::GetBaseModel()
    SpotType* SpotType::GetBaseModel() {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        Array<short, eastl::allocator>* pAVar2;
        short sVar3;
        bool bVar4;
        char cVar5;
        shared_ptr* psVar6;
        long lVar7;
        long* plVar8;
        short* psVar9;
        ulong uVar10;
        ulong uVar11;
        int* in_RSI;
        shared_ptr local_78;
        shared_ptr local_60;
        undefined1 local_50[32];

        local_50._16_8_ = SEXT48(*in_RSI);
        if (dash3d::g_usingRSeven != '\0') {
            local_50._16_8_ = local_50._16_8_ | 4294967296;
        }
        psVar6 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Find(
            (ulonglong*)&m_modelCache);
        new (&local_60) shared_ptr<dash3d::Decor>(psVar6);
        bVar4 = operator!=(&local_60, (_func_decltype_nullptr*)0);
        if (bVar4) {
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_60);
        } else {
            local_50->Load(m_pModels, in_RSI[1], 0, false);
            bVar4 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar4) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                pAVar1 = (Array<game::VarValue, eastl::allocator>*)(in_RSI + 4);
                local_50._24_8_ = in_RSI;
                cVar5 = pAVar1->empty();
                if (cVar5 == '\0') {
                    lVar7 = pAVar1->end();
                    if (lVar7 != 0) {
                        pAVar2 = (Array<short, eastl::allocator>*)(local_50._24_8_ + 40);
                        uVar11 = 0;
                        do {
                            plVar8 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                (shared_ptr<dash3d::ModelUnlit>*)local_50);
                            psVar9 = (short*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)pAVar1, uVar11);
                            sVar3 = *psVar9;
                            psVar9 = (short*)Array<short, eastl::allocator>::operator[](pAVar2, uVar11);
                            (**(code**)(*plVar8 + 160))(plVar8, (int)sVar3, (int)*psVar9);
                            uVar11 = uVar11 + 1;
                            uVar10 = pAVar1->end();
                        } while (uVar11 < uVar10);
                    }
                }
                pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_50._24_8_ + 64);
                cVar5 = pAVar1->empty();
                if (cVar5 == '\0') {
                    lVar7 = pAVar1->end();
                    if (lVar7 != 0) {
                        pAVar2 = (Array<short, eastl::allocator>*)(local_50._24_8_ + 88);
                        uVar11 = 0;
                        do {
                            plVar8 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                                (shared_ptr<dash3d::ModelUnlit>*)local_50);
                            psVar9 = (short*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)pAVar1, uVar11);
                            sVar3 = *psVar9;
                            psVar9 = (short*)Array<short, eastl::allocator>::operator[](pAVar2, uVar11);
                            (**(code**)(*plVar8 + 168))(plVar8, (int)sVar3, (int)*psVar9);
                            uVar11 = uVar11 + 1;
                            uVar10 = pAVar1->end();
                        } while (uVar11 < uVar10);
                    }
                }
                plVar8 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_50);
                (**(code**)(*plVar8 + 72))(&local_78, plVar8, *(int*)(local_50._24_8_ + 124) + 64,
                                           *(int*)(local_50._24_8_ + 128) + 850, 4294967266, 4294967246, 4294967266);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_60, &local_78);
                this = (SpotType*)this;
                local_78.~shared_ptr();
                m_modelCache.Put(&local_60, 1, (ulonglong*)(local_50 + 16));
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_60);
            }
            local_50->~shared_ptr();
        }
        local_60.~shared_ptr();
        return this;
    }

    // 0x100236dc0, 32 bytes, placed by class name and debug map
    // SpotType::ResetCache()
    void SpotType::ResetCache() {
        m_recentUse.Reset();
        m_modelCache.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100236290, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::SpotType>::type make_shared<oldscape::configdecoder::SpotType>()
    jag* make_shared<oldscape::configdecoder::SpotType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SpotType* local_28[2];

        pvVar1 = (void*)aligned_alloc(168, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::SpotType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::SpotType>, int,
                                   oldscape::configdecoder::SpotType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
