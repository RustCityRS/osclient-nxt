// libs/game/runetek5/scene/loaders/EnvironmentLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EnvironmentLoader.h"

namespace jag::game {
    // 0x1039b4b08, 16 bytes, __common; zero-initialised
    EnvironmentLoader::DEFAULT_ENVIRONMENT_SETTINGS;

    // 0x1003dae50, 128 bytes, base-object constructor, placed by class name and debug map
    // EnvironmentLoader::EnvironmentLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&)
    void EnvironmentLoader::EnvironmentLoader(uint param_1, uint param_2, shared_ptr* param_3) {
        new (this) MakeUniquePool<EnvironmentLoader, 48>();
        field_0 = param_1;
        field_4 = param_2;
        new (field_8, param_3) shared_ptr<oldscape::dash3d::Decor>();
        new (field_24, (_func_decltype_nullptr*)param_3) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_40, (_func_decltype_nullptr*)param_3) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1003daf30, 16 bytes, complete-object constructor, placed by class name and debug map
    // EnvironmentLoader::EnvironmentLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&): jumps straight to the base-object constructor

    // 0x1003daf40, 64 bytes, placed by class name and debug map
    // EnvironmentLoader::IsLoaded() const
    bool EnvironmentLoader::IsLoaded() {
        bool bVar1;
        bool bVar2;

        bVar1 = operator!=((shared_ptr*)field_24, (_func_decltype_nullptr*)0);
        bVar2 = true;
        if (!bVar1) {
            bVar2 = operator!=((shared_ptr*)field_40, (_func_decltype_nullptr*)0);
        }
        return bVar2;
    }

    // 0x1003daf80, 336 bytes, placed by class name and debug map
    // EnvironmentLoader::GetEnvironmentSettings(shared_ptr<MapEnvironmentSettings>&, unsigned int, unsigned int, unsigned int) const
    undefined* EnvironmentLoader::GetEnvironmentSettings(shared_ptr* param_1, uint param_2, uint param_3,
                                                         uint param_4) {
        CoordGrid* this_00;
        char cVar1;
        bool bVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                                   8ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<1384ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<shared_ptr<MapEnvironmentSettings>,
               eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        shared_ptr* psVar6;
        undefined** ppuVar7;
        undefined1 local_50[32];

        cVar1 = IsLoaded(this);
        if (cVar1 == '\0') {
            shared_ptr<MapEnvironmentSettings>::reset();
            ppuVar7 = &DataStatus::NOTLOADED;
        } else {
            uVar3 = field_0 * 8192;
            if ((((param_2 < uVar3 + 8192) && (uVar3 <= param_2)) && (uVar3 = field_4 * 8192, uVar3 <= param_3)) &&
                (param_3 < uVar3 + 8192)) {
                bVar2 = field_8->operator_cast_to_bool();
                if (bVar2) {
                    new (local_50) CoordFine(0, (float)param_2, (float)param_3);
                    this_00 = (CoordGrid*)(local_50 + 16);
                    game::CoordGrid::CoordGrid(this_00, (CoordFine*)local_50);
                    iVar4 = this_00->GetLocalX();
                    iVar5 = this_00->GetLocalZ();
                    this_01 = (vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul,
                                                                              true, eastl::allocator>,
                                                          8ul, true, eastl::allocator>,
                                      eastl::fixed_vector_allocator<1384ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::fixed_vector<
                            eastl::fixed_vector<
                                eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                                8ul, true, eastl::allocator>,
                            4ul, true, eastl::allocator>>::
                        operator*((shared_ptr<eastl::fixed_vector<
                                       eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul,
                                                                               true, eastl::allocator>,
                                                           8ul, true, eastl::allocator>,
                                       4ul, true, eastl::allocator>>*)field_40);
                    this_02 =
                        (vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                            eastl::vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>,
                                                                                  8ul, true, eastl::allocator>,
                                                              8ul, true, eastl::allocator>,
                                          eastl::fixed_vector_allocator<1384ul, 4ul, 8ul, 0ul, true,
                                                                        eastl::allocator>>::operator[](this_01,
                                                                                                       (ulong)param_4);
                    this_03 = (vector<shared_ptr<MapEnvironmentSettings>,
                                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<
                            eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                            eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](this_02, (ulong)(uint)(iVar4 >> 3));
                    psVar6 = (shared_ptr*)
                        eastl::vector<shared_ptr<MapEnvironmentSettings>,
                                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](this_03, (ulong)(uint)(iVar5 >> 3));
                } else {
                    psVar6 = (shared_ptr*)field_24;
                }
                shared_ptr<MapEnvironmentSettings>::operator=((shared_ptr<MapEnvironmentSettings>*)param_1, psVar6);
                ppuVar7 = &DataStatus::READY;
            } else {
                shared_ptr<MapEnvironmentSettings>::reset();
                ppuVar7 = &DataStatus::MISSING;
            }
        }
        return *ppuVar7;
    }

    // 0x1003db1f0, 752 bytes, placed by class name and debug map
    // EnvironmentLoader::Load(Js5ResourceProvider*)
    undefined* EnvironmentLoader::Load(Js5ResourceProvider* param_1) {
        undefined1* this_00;
        EnvironmentLoader* this_01;
        uint uVar1;
        bool bVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        ulong uVar6;
        Js5ResourceProvider* pJVar7;
        uint* puVar8;
        shared_ptr<MapEnvironmentSettings>* psVar9;
        undefined** ppuVar10;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                   eastl::allocator>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*
            this_04;
        ClientCompositeZone* this_05;
        shared_ptr* psVar11;
        undefined* puVar12;
        uint uVar13;
        Js5ResourceProvider* pJVar14;
        ulong uVar15;
        undefined1 local_70[56];
        shared_ptr<ClientCompositeData>* local_38;

        this_00 = field_8;
        pJVar7 = param_1;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            local_70._48_8_ = this;
            local_38 = (shared_ptr<ClientCompositeData>*)this_00;
            lVar5 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_00);
            uVar6 = ((lVar5 + 9800))->size();
            new (local_70) Array<shared_ptr<MapEnvironmentSettings>, BucketAllocatorEASTL>(uVar6);
            bVar2 = true;
            uVar13 = 0;
            this_01 = (EnvironmentLoader*)(local_70 + 24);
            while (true) {
                lVar5 = shared_ptr<ClientCompositeData>::operator->(local_38);
                pJVar14 = (Js5ResourceProvider*)(ulong)uVar13;
                pJVar7 = (Js5ResourceProvider*)((lVar5 + 9800))->size();
                if (pJVar7 <= pJVar14)
                    break;
                lVar5 = shared_ptr<ClientCompositeData>::operator->(local_38);
                puVar8 = (uint*)eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                    (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar5 + 9800), (ulong)pJVar14);
                uVar1 = *puVar8;
                lVar5 = shared_ptr<ClientCompositeData>::operator->(local_38);
                pJVar7 = pJVar14;
                eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                    (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar5 + 9800), (ulong)pJVar14);
                LoadMapSquare(this_01, pJVar7, (uint)param_1, uVar1);
                bVar3 = this_01->operator_cast_to_bool();
                if (bVar3) {
                    psVar9 = (shared_ptr<MapEnvironmentSettings>*)
                        Array<shared_ptr<MapEnvironmentSettings>, BucketAllocatorEASTL>::operator[](
                            (Array<shared_ptr<MapEnvironmentSettings>, BucketAllocatorEASTL>*)local_70, (ulong)pJVar14);
                    shared_ptr<MapEnvironmentSettings>::operator=(psVar9, (shared_ptr*)this_01);
                } else {
                    bVar2 = false;
                }
                this_01->~shared_ptr();
                uVar13 = uVar13 + 1;
            }
            if (bVar2) {
                make_shared<
                    eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul,
                                                                                true, eastl::allocator>,
                                                            8ul, true, eastl::allocator>,
                                        4ul, true, eastl::allocator>>((jag*)(local_70 + 24));
                local_70._48_8_ = local_70._48_8_ + 40;
                shared_ptr<
                    eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul,
                                                                                true, eastl::allocator>,
                                                            8ul, true, eastl::allocator>,
                                        4ul, true, eastl::allocator>>::
                operator=(
                    (shared_ptr<
                        eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>,
                                                                                    8ul, true, eastl::allocator>,
                                                                8ul, true, eastl::allocator>,
                                            4ul, true, eastl::allocator>>*)local_70._48_8_,
                    (shared_ptr*)(local_70 + 24));
                ((local_70 + 24))->~shared_ptr();
                local_70._40_8_ = 0;
                do {
                    shared_ptr<
                        eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>,
                                                                                    8ul, true, eastl::allocator>,
                                                                8ul, true, eastl::allocator>,
                                            4ul, true, eastl::allocator>>::
                    operator->(
                        (shared_ptr<eastl::fixed_vector<
                             eastl::fixed_vector<
                                 eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                                 8ul, true, eastl::allocator>,
                             4ul, true, eastl::allocator>>*)local_70._48_8_);
                    eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul,
                                                                                true, eastl::allocator>,
                                                            8ul, true, eastl::allocator>,
                                        4ul, true, eastl::allocator>::push_back();
                    uVar6 = 0;
                    do {
                        eastl::fixed_vector<
                            eastl::fixed_vector<shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul,
                            true, eastl::allocator>::push_back();
                        uVar6 = uVar6 + 1;
                        uVar15 = 1;
                        do {
                            psVar9 = (shared_ptr<MapEnvironmentSettings>*)eastl::fixed_vector<
                                shared_ptr<MapEnvironmentSettings>, 8ul, true, eastl::allocator>::push_back();
                            this_02 =
                                (vector<eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    shared_ptr<ClientCompositeData>::operator->(local_38);
                            this_03 =
                                (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    eastl::vector<
                                        eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](this_02, local_70._40_8_);
                            this_04 = (vector<ClientCompositeZone, eastl::fixed_vector_allocator<
                                                                       20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_03,
                                                                                                           uVar6);
                            this_05 = (ClientCompositeZone*)
                                eastl::vector<ClientCompositeZone,
                                              eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_04,
                                                                                                           uVar15);
                            cVar4 = this_05->IsValid();
                            if (cVar4 == '\0') {
                                shared_ptr<MapEnvironmentSettings>::operator=(
                                    psVar9, (shared_ptr*)&DEFAULT_ENVIRONMENT_SETTINGS);
                            } else {
                                psVar11 = (shared_ptr*)
                                    Array<shared_ptr<MapEnvironmentSettings>, BucketAllocatorEASTL>::operator[](
                                        (Array<shared_ptr<MapEnvironmentSettings>, BucketAllocatorEASTL>*)local_70,
                                        (ulong)(uint)this_05->field_16);
                                shared_ptr<MapEnvironmentSettings>::operator=(psVar9, psVar11);
                            }
                            uVar15 = uVar15 + 1;
                        } while (uVar15 != 9);
                    } while (uVar6 != 8);
                    local_70._40_8_ = local_70._40_8_ + 1;
                } while (local_70._40_8_ != 4);
                ppuVar10 = &DataStatus::READY;
                local_70._40_8_ = 4;
            } else {
                ppuVar10 = &DataStatus::NOTLOADED;
            }
            puVar12 = *ppuVar10;
            local_70->~Array();
        } else {
            LoadMapSquare((EnvironmentLoader*)local_70, pJVar7, (uint)param_1, field_0);
            shared_ptr<MapEnvironmentSettings>::operator=((shared_ptr<MapEnvironmentSettings>*)field_24,
                                                          (shared_ptr*)local_70);
            local_70->~shared_ptr();
            bVar2 = field_24->operator_cast_to_bool();
            if (bVar2) {
                ppuVar10 = &DataStatus::READY;
            } else {
                ppuVar10 = &DataStatus::NOTLOADED;
            }
            puVar12 = *ppuVar10;
        }
        return puVar12;
    }

    // 0x1003db4e0, 272 bytes, placed by class name and debug map
    // EnvironmentLoader::LoadMapSquare(Js5ResourceProvider*, unsigned int, unsigned int)
    EnvironmentLoader* EnvironmentLoader::LoadMapSquare(Js5ResourceProvider* param_1, uint param_2, uint param_3) {
        undefined* puVar1;
        undefined4 in_register_00000014;
        int in_R8D;
        undefined1 auVar2[16];
        shared_ptr local_48;
        shared_ptr local_38;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        puVar1 = (undefined*)(CONCAT44(in_register_00000014, param_2))
                     ->GetFile(&local_38, Js5Archive::JS5_MAPS, in_R8D << 7 | param_3, 6, (Priority*)Priority::HIGH,
                               true, false, false);
        if (puVar1 == DataStatus::MISSING) {
            shared_ptr<MapEnvironmentSettings>::operator=((shared_ptr<MapEnvironmentSettings>*)this,
                                                          (shared_ptr*)&DEFAULT_ENVIRONMENT_SETTINGS);
        } else if (puVar1 == DataStatus::READY) {
            auVar2 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_38);
            MakeSharedPool<MapEnvironmentSettings, 48>::MakeShared<PacketT<Array<unsigned char, eastl::allocator>>&>(
                &local_48, auVar2._0_8_, auVar2._8_8_);
            shared_ptr<MapEnvironmentSettings>::operator=((shared_ptr<MapEnvironmentSettings>*)this, &local_48);
            local_48.~shared_ptr();
        }
        local_38.~shared_ptr();
        return this;
    }

} // namespace jag::game

namespace jag {
    // 0x1003db6c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator> >::type make_shared<eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul, true, eastl::allocator>, 4ul, true, eastl::allocator>>()
    jag* jag::make_shared<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>,
                            8ul, true, eastl::allocator>,
        4ul, true, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        fixed_vector* local_28[2];

        pvVar1 = (void*)aligned_alloc(5608, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<
                eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>,
                                                                            8ul, true, eastl::allocator>,
                                                        8ul, true, eastl::allocator>,
                                    4ul, true, eastl::allocator>>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<eastl::fixed_vector<
                    eastl::fixed_vector<
                        eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul, true, eastl::allocator>, 8ul,
                        true, eastl::allocator>,
                    4ul, true, eastl::allocator>>,
                int,
                eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>,
                                                                            8ul, true, eastl::allocator>,
                                                        8ul, true, eastl::allocator>,
                                    4ul, true, eastl::allocator>*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
