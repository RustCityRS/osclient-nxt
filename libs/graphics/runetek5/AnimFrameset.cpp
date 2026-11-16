// libs/graphics/runetek5/AnimFrameset.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimFrameset.h"

namespace jag::graphics {
    // 0x103bc0ec0, 16 bytes, __common; set at startup by ___cxx_global_var_init.5
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimFrameset::NullAnimFrameset;

    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    AnimFrameset::IsLoaded() const;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    AnimFrameset::GetLastLoadAttempt() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    AnimFrameset::GetFrames() const;

    // 0x100978700, 160 bytes, base-object constructor, placed by class name
    // AnimFrameset::AnimFrameset(unsigned int, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ArchiveSettings const&)
    void AnimFrameset::AnimFrameset(uint param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
                                    Js5ArchiveSettings* param_4) {
        new (this) MakeSharedPool<AnimFrameset, 256>();
        field_0 = 0;
        field_8 = 0;
        new (&field_16) Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>();
        field_40 = param_1;
        field_48 = param_2;
        field_56 = param_3;
        field_64 = param_4;
        field_72 = 0;
        eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
        new (&field_104) Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>();
        field_128 = 0;
    }

    // 0x100978830, 16 bytes, complete-object constructor, placed by class name
    // AnimFrameset::AnimFrameset(unsigned int, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ArchiveSettings const&): jumps straight to the base-object constructor

    // 0x100978840, 1600 bytes, placed by class name
    // AnimFrameset::Load()
    /* WARNING: Type propagation algorithm not settling */
    /* AnimFrameset::Load() */

    ulong AnimFrameset::Load() {
        undefined1* puVar1;
        undefined1* this_00;
        uint uVar2;
        AnimFrameset* pAVar3;
        char cVar4;
        bool bVar5;
        undefined2 uVar6;
        ushort uVar7;
        uint uVar8;
        undefined8 uVar9;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar10;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar11;
        undefined* puVar12;
        long lVar13;
        shared_ptr* psVar14;
        uint* puVar15;
        shared_ptr<AnimBase>* this_01;
        MakeSharedPool<AnimationFrameRT5, 20480>* this_02;
        shared_ptr<AnimationFrameRT5>* this_03;
        ulong uVar16;
        undefined4* puVar17;
        undefined4* puVar18;
        _func_decltype_nullptr* p_Var19;
        PacketT* pPVar20;
        TextureAtlasReference* this_04;
        undefined** in_RCX;
        char* pcVar21;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        vector<unsigned int, BucketAllocatorEASTL>* this_05;
        ulong uVar22;
        bool bVar23;
        _func_decltype_nullptr* p_Var24;
        shared_ptr local_c0[3];
        ulong local_90;
        Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>* local_88;
        shared_ptr local_80;
        Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>* local_70;
        uint local_64;
        shared_ptr local_60;
        uint local_4c;
        shared_ptr* local_48;
        vector<unsigned int, BucketAllocatorEASTL>* local_40;
        AnimFrameset* local_38;

        uVar9 = FrameTime::GetCurrentTimeMS();
        field_0 = uVar9;
        if (field_8 != '\0') {
            return 1;
        }
        local_38 = this;
        if (field_128 == '\0') {
            puVar1 = &field_80;
            cVar4 = puVar1->empty();
            if (cVar4 != '\0') {
                puVar12 = (undefined*)(*(code*)local_38->field_48->field_0[4])(local_38->field_48, local_c0,
                                                                               local_38->field_64);
                pAVar3 = local_38;
                in_RCX = &DataStatus::NOTLOADED;
                if (puVar12 == DataStatus::NOTLOADED) {
                    return 0;
                }
                cVar4 = local_c0[0]._0_8_->IsFileListContiguous(local_38->field_40);
                if (cVar4 == '\0') {
                    local_c0[0]._0_8_->GetFileList(puVar1, pAVar3->field_40);
                    cVar4 = puVar1->empty();
                    if (cVar4 != '\0') {
                        uVar9 = logger::default_logger();
                        pcVar21 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/AnimFrameset.cpp";
                        logger::Logger::Log(uVar9, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek5/AnimFrameset.cpp",
                                            58, "AnimFrameset: Unable to find frame files for group: %u",
                                            local_38->field_40);
                        in_RCX = (undefined**)pcVar21;
                    }
                } else {
                    uVar8 = local_c0[0]._0_8_->GetMaximumFileID(pAVar3->field_40);
                    puVar1->reserve((ulong)uVar8);
                    local_60._0_4_ = 0;
                    if (uVar8 != 0) {
                        do {
                            puVar1->push_back((uint*)&local_60);
                            local_60._0_4_ = local_60._0_4_ + 1;
                        } while ((uint)local_60._0_4_ < uVar8);
                    }
                }
                this_00 = &local_38->field_104;
                uVar16 = puVar1->size();
                this_00->set_max_size(uVar16, 0);
            }
            puVar17 = (undefined4*)puVar1->HeapBeginPtr();
            local_40 = (vector<unsigned int, BucketAllocatorEASTL>*)puVar1;
            puVar18 = (undefined4*)puVar1->end();
            if (puVar17 != puVar18) {
                bVar5 = true;
                do {
                    puVar12 = (undefined*)(*(code*)local_38->field_48->field_0[6])(
                        local_38->field_48, local_38->field_64, local_38->field_40, *puVar17, Priority::HIGH, 1);
                    in_RCX = &DataStatus::READY;
                    if (puVar12 != DataStatus::READY) {
                        bVar5 = false;
                    }
                    puVar17 = puVar17 + 1;
                } while (puVar17 != puVar18);
                if (!bVar5) {
                    return 0;
                }
            }
            this_05 = local_40;
            lVar13 = local_40->size();
            if (lVar13 != 0) {
                local_48 = (shared_ptr*)&local_38->field_104;
                uVar8 = 1;
                p_Var24 = (_func_decltype_nullptr*)0;
                do {
                    p_Var19 = p_Var24;
                    puVar15 =
                        (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](this_05, (ulong)p_Var24);
                    uVar2 = *puVar15;
                    new (local_c0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var19);
                    in_RCX = (undefined**)(ulong)local_38->field_40;
                    (local_38->field_48, local_c0, local_38->field_64, local_38->field_40, uVar2,
                     (Priority*)Priority::HIGH, true, false, false)
                        ->GetFile();
                    pPVar20 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_c0);
                    pPVar10 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                        Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>::operator[](
                            (Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>*)local_48,
                            (ulong)p_Var24);
                    PacketT<Array<unsigned char, eastl::allocator>>::operator=(pPVar10, pPVar20);
                    this_04 = (TextureAtlasReference*)
                        Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>::operator[](
                            (Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>*)local_48,
                            (ulong)p_Var24);
                    lVar13 = this_04->GetTextureAtlas();
                    if (lVar13 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_frameData[frame].GetSize() > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/AnimFrameset.cpp",
                                  84, "AnimFrameset: No data received for frame, group: %i frame: %i",
                                  (ulong)local_38->field_40, (ulong)uVar2);
                    }
                    if ((uint)local_38->field_72 < uVar2) {
                        local_38->field_72 = uVar2;
                    }
                    local_c0->~shared_ptr();
                    this_05 = local_40;
                    p_Var24 = (_func_decltype_nullptr*)(ulong)uVar8;
                    p_Var19 = (_func_decltype_nullptr*)local_40->size();
                    uVar8 = uVar8 + 1;
                } while (p_Var24 < p_Var19);
            }
            local_38->field_128 = 1;
        }
        puVar1 = &local_38->field_104;
        pPVar10 = (PacketT<Array<unsigned char, eastl::allocator>>*)puVar1->data();
        local_70 = (Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>*)puVar1;
        pPVar11 = (PacketT<Array<unsigned char, eastl::allocator>>*)puVar1->end();
        if (pPVar10 == pPVar11) {
            local_64 = 0;
        } else {
            bVar5 = true;
            do {
                pPVar10->SetPos(1);
                uVar6 = pPVar10->g2();
                puVar12 = (undefined*)(*(code*)local_38->field_48->field_0[6])(local_38->field_48, local_38->field_56,
                                                                               uVar6, 0, Priority::HIGH, 1);
                in_RCX = &DataStatus::READY;
                bVar23 = false;
                if (puVar12 == DataStatus::READY) {
                    bVar23 = bVar5;
                }
                pPVar10 = pPVar10 + 32;
                bVar5 = bVar23;
            } while (pPVar10 != pPVar11);
            uVar16 = CONCAT71((int7)((ulong)puVar12 >> 8), !bVar23);
            local_64 = (uint)uVar16;
            if (!bVar23)
                goto LAB_100978be0;
        }
        pAVar3 = local_38;
        local_88 = (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)&local_38->field_16;
        local_88->set_max_size((ulong)(local_38->field_72 + 1), 0);
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&local_60, (NpcUID*)"EASTL hash_map", extraout_RDX);
        eastl::hash_map<unsigned int, shared_ptr<AnimBase>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                        BucketAllocatorEASTL, false>::hash_map((BucketAllocatorEASTL*)local_c0);
        local_40 = (vector<unsigned int, BucketAllocatorEASTL>*)&pAVar3->field_80;
        lVar13 = local_40->size();
        if (lVar13 != 0) {
            uVar16 = 0;
            uVar22 = 1;
            do {
                psVar14 = (shared_ptr*)
                    Array<PacketT<Array<unsigned char, eastl::allocator>>, BucketAllocatorEASTL>::operator[](local_70,
                                                                                                             uVar16);
                psVar14->SetPos(1);
                local_48 = psVar14;
                uVar7 = psVar14->g2();
                psVar14 = &local_80;
                local_4c = (uint)uVar7;
                local_90 = uVar16;
                eastl::hashtable<
                    unsigned int, eastl::pair<unsigned int const, shared_ptr<AnimBase>>, BucketAllocatorEASTL,
                    eastl::use_first<eastl::pair<unsigned int const, shared_ptr<AnimBase>>>,
                    eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)&local_60);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar5 = eastl::operator==((eastl*)&local_60, (hashtable_iterator_base*)psVar14, extraout_RDX_00);
                uVar16 = local_90;
                if (bVar5) {
                    new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar14);
                    in_RCX = (undefined**)(ulong)local_4c;
                    (local_38->field_48, &local_60, local_38->field_56, local_4c, 0, (Priority*)Priority::HIGH, true,
                     false, false)
                        ->GetFile();
                    puVar15 = (uint*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_60);
                    MakeSharedPool<AnimBase, 256>::MakeShared<unsigned int&,
                                                              PacketT<Array<unsigned char, eastl::allocator>>&>(
                        &local_80, (MakeSharedPool<AnimBase, 256>*)&local_4c, puVar15, (PacketT*)in_RCX);
                    this_01 = (shared_ptr<AnimBase>*)
                        eastl::hash_map<unsigned int, shared_ptr<AnimBase>, eastl::hash<unsigned int>,
                                        eastl::equal_to<unsigned int>, BucketAllocatorEASTL, false>::
                        operator[]((hash_map<unsigned int, shared_ptr<AnimBase>, eastl::hash<unsigned int>,
                                             eastl::equal_to<unsigned int>, BucketAllocatorEASTL, false>*)local_c0,
                                   &local_4c);
                    shared_ptr<AnimBase>::operator=(this_01, &local_80);
                    local_80.~shared_ptr();
                    local_60.~shared_ptr();
                }
                local_48->SetPos(0);
                this_02 = (MakeSharedPool<AnimationFrameRT5, 20480>*)eastl::hash_map<
                    unsigned int, shared_ptr<AnimBase>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                    BucketAllocatorEASTL,
                    false>::operator[]((hash_map<unsigned int, shared_ptr<AnimBase>, eastl::hash<unsigned int>,
                                                 eastl::equal_to<unsigned int>, BucketAllocatorEASTL, false>*)local_c0,
                                       &local_4c);
                MakeSharedPool<AnimationFrameRT5, 20480>::MakeShared<shared_ptr<AnimBase>&,
                                                                     PacketT<Array<unsigned char, eastl::allocator>>&>(
                    &local_60, this_02, local_48, (PacketT*)in_RCX);
                puVar15 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_40, uVar16);
                this_03 =
                    (shared_ptr<AnimationFrameRT5>*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                        local_88, (ulong)*puVar15);
                shared_ptr<AnimationFrameRT5>::operator=(this_03, &local_60);
                local_60.~shared_ptr();
                uVar16 = local_40->size();
                bVar5 = uVar22 < uVar16;
                uVar16 = uVar22;
                uVar22 = (ulong)((int)uVar22 + 1);
            } while (bVar5);
        }
        eastl::vector<unsigned int, BucketAllocatorEASTL>::set_capacity(local_40, 0);
        local_70->clear();
        local_38->field_8 = 1;
        local_c0->~hash_map();
        uVar16 = (ulong)local_64;
    LAB_100978be0:
        return uVar16 ^ 1;
    }

    // 0x1009a7020, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&AnimFrameset::NullAnimFrameset) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5350, &AnimFrameset::NullAnimFrameset, 4294967296);
    }

} // namespace jag::graphics
