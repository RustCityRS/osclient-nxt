// libs/oldscape/rs2lib/configdecoder/IdkType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "IdkType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016c03f0, 8 bytes, __common; zero-initialised
    IdkType::m_pConfigClient;

    // 0x1016c03f8, 8 bytes, __common; zero-initialised
    IdkType::m_pModels;

    // 0x1016c0400, 8 bytes, __common; zero-initialised
    IdkType::m_numDefinitions;

    // 0x1016c0408, 5384 bytes, __common; zero-initialised
    IdkType::m_recentUse;

    // 0x100268ce0, 48 bytes, placed by class name and debug map
    // IdkType::Init(jagex3::Js5*, jagex3::Js5*)
    void IdkType::Init(Js5* param_1, Js5* param_2) {
        m_pConfigClient = param_1;
        m_pModels = param_2;
        m_numDefinitions = param_1->GetFileIdLimit(3);
    }

    // 0x100268d10, 288 bytes, placed by class name and debug map
    // IdkType::List(int)
    IdkType* IdkType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        IdkType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<IdkType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 3, (array*)(ulong)(uint)param_1);
            make_shared<IdkType>((jag*)&local_40);
            shared_ptr<IdkType>::operator=((shared_ptr<IdkType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (IdkType*)shared_ptr<IdkType>::operator->((shared_ptr<IdkType>*)this);
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

    // 0x100268fa0, 64 bytes, placed by class name and debug map
    // IdkType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void IdkType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x1002690d0, 704 bytes, placed by class name and debug map
    // IdkType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void IdkType::Decode(PacketJ* param_1, int param_2) {
        byte bVar1;
        ushort uVar2;
        undefined2 uVar3;
        uint* puVar4;
        undefined2* puVar5;
        undefined8 uVar6;
        ulong uVar7;
        ulong uVar8;

        switch (param_2) {
        case 1:
            bVar1 = param_1->g1();
            field_0 = (uint)bVar1;
            break;
        case 2:
            bVar1 = param_1->g1();
            (&field_8, (ulong)bVar1, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar7 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar4 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_8, uVar7);
                    *puVar4 = (uint)uVar2;
                    uVar7 = uVar7 + 1;
                } while (bVar1 != uVar7);
            }
            break;
        case 3:
            field_148 = 1;
            break;
        default:
            if (param_2 - 60U < 10) {
                uVar2 = param_1->g2();
                (&field_128)[param_2 - 60U] = (uint)uVar2;
            } else {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/configdecoder/IdkType.cpp",
                                    104, "Error unrecognised .idk config code: %i", param_2);
            }
            break;
        case 40:
            bVar1 = param_1->g1();
            uVar7 = (ulong)bVar1;
            (&field_32, uVar7, 5)->set_max_size();
            (&field_56, uVar7, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_32, uVar8);
                    *puVar5 = uVar3;
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_56, uVar8);
                    *puVar5 = uVar3;
                    uVar8 = uVar8 + 1;
                } while (uVar7 != uVar8);
            }
            break;
        case 41:
            bVar1 = param_1->g1();
            uVar7 = (ulong)bVar1;
            (&field_80, uVar7, 5)->set_max_size();
            (&field_104, uVar7, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_80, uVar8);
                    *puVar5 = uVar3;
                    uVar3 = param_1->g2();
                    puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&field_104, uVar8);
                    *puVar5 = uVar3;
                    uVar8 = uVar8 + 1;
                } while (uVar7 != uVar8);
            }
        }
    }

    // 0x100269390, 128 bytes, placed by class name and debug map
    // IdkType::CheckModel()
    ulong IdkType::CheckModel() {
        char cVar1;
        int* piVar2;
        int* piVar3;
        undefined8 unaff_RBX;
        ulong uVar4;
        long* this_00;

        this_00 = &field_8;
        cVar1 = this_00->empty();
        uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (cVar1 == '\0') {
            piVar2 = (int*)this_00->data();
            piVar3 = (int*)this_00->end();
            if (piVar2 != piVar3) {
                uVar4 = 1;
                do {
                    cVar1 = ((int)m_pModels)->RequestDownload(*piVar2);
                    if (cVar1 == '\0') {
                        uVar4 = 0;
                    }
                    piVar2 = piVar2 + 1;
                } while (piVar2 != piVar3);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100269410, 672 bytes, placed by class name and debug map
    // IdkType::GetModelNoCheck()
    IdkType* IdkType::GetModelNoCheck() {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        Array<short, eastl::allocator>* this_00;
        short sVar2;
        Js5* pJVar3;
        char cVar4;
        long lVar5;
        int* piVar6;
        shared_ptr<dash3d::ModelUnlit>* this_01;
        ulong uVar7;
        shared_ptr* psVar8;
        long* plVar9;
        short* psVar10;
        Array<short, eastl::allocator>* in_RSI;
        ulong uVar11;
        undefined1 auVar12[16];
        undefined1 local_78[24];
        vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL> local_60[24];
        shared_ptr local_48;
        Array<short, eastl::allocator>* local_38;

        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(in_RSI + 8);
        local_38 = in_RSI;
        cVar4 = pAVar1->empty();
        if (cVar4 == '\0') {
            local_78._16_8_ = this;
            auVar12 = pAVar1->end();
            eastl::destruct<highlight::NpcUID*>((eastl*)&local_48, (NpcUID*)"EASTL vector", auVar12._8_8_);
            eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::vector(
                local_60, auVar12._0_8_, (BucketAllocatorEASTL*)&local_48);
            lVar5 = pAVar1->end();
            if (lVar5 != 0) {
                uVar11 = 0;
                do {
                    pJVar3 = m_pModels;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar1, uVar11);
                    local_48.Load(pJVar3, *piVar6, 0, false);
                    this_01 = (shared_ptr<dash3d::ModelUnlit>*)
                        eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](local_60,
                                                                                                        uVar11);
                    shared_ptr<dash3d::ModelUnlit>::operator=(this_01, &local_48);
                    local_48.~shared_ptr();
                    uVar11 = uVar11 + 1;
                    uVar7 = pAVar1->end();
                } while (uVar11 < uVar7);
            }
            new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar5 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_60);
            if (lVar5 == 1) {
                psVar8 = (shared_ptr*)eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                    local_60, 0);
                shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_48, psVar8);
            } else {
                local_78->Combine(local_60);
                shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_48,
                                                          (shared_ptr*)local_78);
                local_78->~shared_ptr();
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 32);
            cVar4 = pAVar1->empty();
            if (cVar4 == '\0') {
                lVar5 = pAVar1->end();
                if (lVar5 != 0) {
                    this_00 = local_38 + 56;
                    uVar11 = 0;
                    do {
                        plVar9 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)&local_48);
                        psVar10 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar11);
                        sVar2 = *psVar10;
                        psVar10 = (short*)Array<short, eastl::allocator>::operator[](this_00, uVar11);
                        (**(code**)(*plVar9 + 160))(plVar9, (int)sVar2, (int)*psVar10);
                        uVar11 = uVar11 + 1;
                        uVar7 = pAVar1->end();
                    } while (uVar11 < uVar7);
                }
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 80);
            cVar4 = pAVar1->empty();
            if (cVar4 == '\0') {
                lVar5 = pAVar1->end();
                if (lVar5 != 0) {
                    local_38 = local_38 + 104;
                    uVar11 = 0;
                    do {
                        plVar9 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)&local_48);
                        psVar10 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar11);
                        sVar2 = *psVar10;
                        psVar10 = (short*)Array<short, eastl::allocator>::operator[](local_38, uVar11);
                        (**(code**)(*plVar9 + 168))(plVar9, (int)sVar2, (int)*psVar10);
                        uVar11 = uVar11 + 1;
                        uVar7 = pAVar1->end();
                    } while (uVar11 < uVar7);
                }
            }
            this = (IdkType*)local_78._16_8_;
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)local_78._16_8_, &local_48);
            local_48.~shared_ptr();
            eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::~vector(local_60);
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x1002696b0, 112 bytes, placed by class name and debug map
    // IdkType::CheckHead()
    ulong IdkType::CheckHead() {
        char cVar1;
        long lVar2;
        undefined8 unaff_R12;
        ulong uVar3;

        uVar3 = CONCAT71((int7)((ulong)unaff_R12 >> 8), 1);
        lVar2 = 0;
        do {
            if ((&field_128)[lVar2] != -1) {
                cVar1 = ((int)m_pModels)->RequestDownload((&field_128)[lVar2]);
                uVar3 = uVar3 & 255;
                if (cVar1 == '\0') {
                    uVar3 = 0;
                }
            }
            lVar2 = lVar2 + 1;
        } while (lVar2 != 5);
        return uVar3 & 4294967041;
    }

    // 0x100269720, 496 bytes, placed by class name and debug map
    // IdkType::GetHeadNoCheck()
    IdkType* IdkType::GetHeadNoCheck() {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        short sVar2;
        int iVar3;
        char cVar4;
        shared_ptr<dash3d::ModelUnlit>* this_00;
        long* plVar5;
        short* psVar6;
        ulong uVar7;
        NpcUID* in_RDX;
        long lVar8;
        ulong uVar9;
        long in_RSI;
        int iVar10;
        undefined1 local_68[40];
        Array<short, eastl::allocator>* local_40;

        eastl::destruct<highlight::NpcUID*>((eastl*)local_68, (NpcUID*)"EASTL vector", in_RDX);
        new ((local_68 + 16)) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(5, local_68);
        lVar8 = 0;
        iVar10 = 0;
        do {
            iVar3 = *(int*)(in_RSI + 128 + lVar8 * 4);
            if (iVar3 != -1) {
                local_68->Load(m_pModels, iVar3, 0, false);
                this_00 = (shared_ptr<dash3d::ModelUnlit>*)
                    eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::operator[](
                        (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(local_68 + 16), (long)iVar10);
                shared_ptr<dash3d::ModelUnlit>::operator=(this_00, (shared_ptr*)local_68);
                iVar10 = iVar10 + 1;
                local_68->~shared_ptr();
            }
            lVar8 = lVar8 + 1;
        } while (lVar8 != 5);
        ((IdkType*)this)->Combine((vector*)(local_68 + 16));
        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(in_RSI + 32);
        cVar4 = pAVar1->empty();
        if (cVar4 == '\0') {
            lVar8 = pAVar1->end();
            if (lVar8 != 0) {
                local_40 = (Array<short, eastl::allocator>*)(in_RSI + 56);
                uVar9 = 0;
                do {
                    plVar5 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                        (shared_ptr<dash3d::ModelUnlit>*)(IdkType*)this);
                    psVar6 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)pAVar1,
                                                                                uVar9);
                    sVar2 = *psVar6;
                    psVar6 = (short*)Array<short, eastl::allocator>::operator[](local_40, uVar9);
                    (**(code**)(*plVar5 + 160))(plVar5, (int)sVar2, (int)*psVar6);
                    uVar9 = uVar9 + 1;
                    uVar7 = pAVar1->end();
                } while (uVar9 < uVar7);
            }
        }
        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(in_RSI + 80);
        cVar4 = pAVar1->empty();
        if (cVar4 == '\0') {
            lVar8 = pAVar1->end();
            if (lVar8 != 0) {
                uVar9 = 0;
                do {
                    plVar5 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                        (shared_ptr<dash3d::ModelUnlit>*)(IdkType*)this);
                    psVar6 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)pAVar1,
                                                                                uVar9);
                    sVar2 = *psVar6;
                    psVar6 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)(in_RSI + 104), uVar9);
                    (**(code**)(*plVar5 + 168))(plVar5, (int)sVar2, (int)*psVar6);
                    uVar9 = uVar9 + 1;
                    uVar7 = pAVar1->end();
                } while (uVar9 < uVar7);
            }
        }
        ((local_68 + 16))->~vector();
        return (IdkType*)this;
    }

    // 0x100269910, 32 bytes, placed by class name and debug map
    // IdkType::ResetCache()
    void IdkType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100268ed0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::IdkType>::type make_shared<oldscape::configdecoder::IdkType>()
    jag* make_shared<oldscape::configdecoder::IdkType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        IdkType* local_28[2];

        pvVar1 = (void*)aligned_alloc(184, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::IdkType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::IdkType>, int,
                                   oldscape::configdecoder::IdkType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10026b540, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelUser* placement_new<oldscape::rs2lib::social::ClanChannelUser>(void*)
    ClanChannelUser* placement_new<oldscape::rs2lib::social::ClanChannelUser>(void* param_1) {
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::rs2lib::social::ClanChannelUser::ClanChannelUser(param_1);
        return param_1;
    }

    // 0x10026b580, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>, int, oldscape::rs2lib::social::ClanChannelUser*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelUser*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>, int,
                                           oldscape::rs2lib::social::ClanChannelUser*&>(void* param_1, int* param_2,
                                                                                        ClanChannelUser** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::ref_counter_shared(param_1, (long)*param_2,
                                                                                          *param_3);
        return param_1;
    }

} // namespace jag
