// libs/game/runetek5/config/hitmarktype/HitmarkType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "HitmarkType.h"

namespace jag::game {
    // 0x1039bbc40, 16 bytes, __common; set at startup by ___cxx_global_var_init.17
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> HitmarkType::NullHitmarkType;

    // 0x1003cf2c0: the linker folded this into MapElementType::GetTextRGBA() const, which has identical code
    uint HitmarkType::GetOverride() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    uint HitmarkType::GetDuration() const;

    // 0x100544e30, 192 bytes, base-object constructor, placed by class name and debug map
    // HitmarkType::HitmarkType(BaseTemplateConfigTypeList<HitmarkType>*, int)
    void HitmarkType::HitmarkType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<HitmarkType>(param_1, param_2);
        new (this) MakeSharedPool<HitmarkType, 32>();
        field_0 = &PTR__HitmarkType_100f03f50;
        field_56 = 0;
        field_60 = 4294967295;
        field_64 = 16777215;
        m_duration = 70;
        field_72 = 4294967295;
        field_76 = 4294967295;
        field_80 = 4294967295;
        field_84 = 4294967295;
        field_88 = 0;
        field_92 = 0;
        field_96 = 4294967295;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        m_override = 4294967295;
        field_132 = 0;
        field_136 = 0;
        field_140 = 0;
        new (&field_144) Array<int, eastl::allocator>();
        field_168 = 4294967295;
        field_172 = 4294967295;
        field_176 = 1;
        field_180 = 1;
    }

    // 0x100544fb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HitmarkType::HitmarkType(BaseTemplateConfigTypeList<HitmarkType>*, int): jumps straight to the base-object constructor

    // 0x100544fc0, 768 bytes, placed by class name and debug map
    // HitmarkType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* HitmarkType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        short sVar3;
        uint uVar4;
        undefined4 uVar5;
        uint* puVar6;
        int* piVar7;
        undefined4* puVar8;
        undefined8 uVar9;
        ulong uVar10;
        undefined1* this_00;

        switch (param_2) {
        case 1:
            uVar5 = param_1->gSmart2or4s();
            field_60 = uVar5;
            break;
        case 2:
            uVar5 = param_1->g3();
            field_64 = uVar5;
            field_56 = 1;
            break;
        case 3:
            uVar5 = param_1->gSmart2or4s();
            field_72 = uVar5;
            break;
        case 4:
            uVar5 = param_1->gSmart2or4s();
            field_80 = uVar5;
            break;
        case 5:
            uVar5 = param_1->gSmart2or4s();
            field_76 = uVar5;
            break;
        case 6:
            uVar5 = param_1->gSmart2or4s();
            field_84 = uVar5;
            break;
        case 7:
            sVar3 = param_1->g2s();
            field_88 = (int)sVar3;
            break;
        case 8:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)&field_104,
                true);
            break;
        case 9:
            uVar2 = param_1->g2();
            m_duration = (uint)uVar2;
            break;
        case 10:
            sVar3 = param_1->g2s();
            field_92 = (int)sVar3;
            break;
        case 11:
            field_96 = 0;
            break;
        case 12:
            bVar1 = param_1->g1();
            m_override = (uint)bVar1;
            break;
        case 13:
            sVar3 = param_1->g2s();
            field_132 = (int)sVar3;
            break;
        case 14:
            uVar2 = param_1->g2();
            field_96 = (uint)uVar2;
            break;
        default:
            uVar9 = logger::default_logger();
            logger::Logger::Log(uVar9, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/hitmarktype/HitmarkType.cpp",
                                144, "Unrecognised .hitmark config code: %u", param_2);
            break;
        case 16:
            sVar3 = param_1->g2s();
            field_136 = (int)sVar3;
            sVar3 = param_1->g2s();
            field_140 = (int)sVar3;
            break;
        case 17:
        case 18:
            uVar2 = param_1->g2();
            uVar4 = (uint)uVar2;
            if (uVar2 == 65535) {
                uVar4 = 4294967295;
            }
            field_172 = uVar4;
            uVar2 = param_1->g2();
            uVar4 = (uint)uVar2;
            if (uVar2 == 65535) {
                uVar4 = 4294967295;
            }
            field_168 = uVar4;
            uVar4 = 4294967295;
            if (param_2 == 18) {
                uVar2 = param_1->g2();
                uVar4 = 4294967295;
                if (uVar2 != 65535) {
                    uVar4 = (uint)uVar2;
                }
            }
            bVar1 = param_1->g1();
            this_00 = &field_144;
            uVar10 = 0;
            this_00->set_max_size((ulong)(bVar1 + 2), 0);
            do {
                uVar2 = param_1->g2();
                puVar6 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar10);
                *puVar6 = (uint)uVar2;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar10);
                if (*piVar7 == 65535) {
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar10);
                    *puVar8 = 4294967295;
                }
                uVar10 = uVar10 + 1;
            } while (bVar1 + 1 != uVar10);
            puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                     (ulong)(bVar1 + 1));
            *puVar6 = uVar4;
            break;
        case 19:
            sVar3 = param_1->g2s();
            field_176 = (int)sVar3;
            break;
        case 20:
            sVar3 = param_1->g2s();
            field_180 = (int)sVar3;
        }
        return DataStatus::READY;
    }

    // 0x1005452c0, 16 bytes, placed by class name and debug map
    // HitmarkType::PostDecode()
    void HitmarkType::PostDecode() {}

    // 0x1005452d0, 272 bytes, placed by class name and debug map
    // HitmarkType::GetText(int)
    HitmarkType* HitmarkType::GetText(int param_1) {
        int iVar1;
        int iVar2;
        char* pcVar3;
        ulong uVar4;
        int in_EDX;
        undefined4 in_register_00000034;
        basic_string<char, BucketAllocatorEASTL> local_48[24];

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        assign(pcVar3, uVar4);
        iVar1 = *(int*)(CONCAT44(in_register_00000034, param_1) + 176);
        iVar2 = *(int*)(CONCAT44(in_register_00000034, param_1) + 180);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        eastl::basic_string<char, BucketAllocatorEASTL>::sprintf((char*)local_48, "%d",
                                                                 (long)(iVar1 * in_EDX) / (long)iVar2 & 4294967295);
        while (true) {
            uVar4 = find("%1", 0);
            if (uVar4 == 18446744073709551615)
                break;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            replace(uVar4, 2, pcVar3);
        }
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        return this;
    }

    // 0x100545420, 128 bytes, placed by class name and debug map
    // HitmarkType::GetSpriteInner(graphics::RT7Core&, int)
    shared_ptr* HitmarkType::GetSpriteInner(RT7Core* param_1, int param_2) {
        shared_ptr* psVar3;
        SpriteAtlasReference* this_00;
        int iVar4;

        if (param_2 < 0) {
            psVar3 = (shared_ptr*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        } else {
            iVar4 = (int)field_24;
            psVar3 = (shared_ptr*)HitmarkTypeList::FindCachedSprite(iVar4);
            if (shared_ptr::operator_cast_to_bool(psVar3)) {
                this_00 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar3);
                if (this_00->IsReady() != '\0') {
                    return psVar3;
                }
            }
            CacheSprites(this, param_1);
            psVar3 = (shared_ptr*)HitmarkTypeList::FindCachedSprite(iVar4);
        }
        return psVar3;
    }

    // 0x1005454a0, 80 bytes, placed by class name and debug map
    // HitmarkType::CacheSprites(graphics::RT7Core&)
    void HitmarkType::CacheSprites(RT7Core* param_1) {
        CacheSpriteInner(this, param_1, field_72);
        CacheSpriteInner(this, param_1, field_76);
        CacheSpriteInner(this, param_1, field_80);
        CacheSpriteInner(this, param_1, field_84);
    }

    // 0x1005454f0, 16 bytes, placed by class name and debug map
    // HitmarkType::GetIconSprite(graphics::RT7Core&)
    void HitmarkType::GetIconSprite(RT7Core* param_1) {
        GetSpriteInner(this, param_1, field_72);
    }

    // 0x100545500, 16 bytes, placed by class name and debug map
    // HitmarkType::GetBackgroundSprite(graphics::RT7Core&)
    void HitmarkType::GetBackgroundSprite(RT7Core* param_1) {
        GetSpriteInner(this, param_1, field_76);
    }

    // 0x100545510, 16 bytes, placed by class name and debug map
    // HitmarkType::GetBackgroundLeftSprite(graphics::RT7Core&)
    void HitmarkType::GetBackgroundLeftSprite(RT7Core* param_1) {
        GetSpriteInner(this, param_1, field_80);
    }

    // 0x100545520, 16 bytes, placed by class name and debug map
    // HitmarkType::GetBackgroundRightSprite(graphics::RT7Core&)
    void HitmarkType::GetBackgroundRightSprite(RT7Core* param_1) {
        GetSpriteInner(this, param_1, field_84);
    }

    // 0x100545530, 400 bytes, placed by class name and debug map
    // HitmarkType::GetMultiHitmark(PlayerVarDomain const*, ConfigProvider*)
    HitmarkType* HitmarkType::GetMultiHitmark(PlayerVarDomain* param_1, ConfigProvider* param_2) {
        undefined1* this_00;
        char cVar2;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        int* piVar7;
        long lVar8;
        shared_ptr* psVar9;
        VarValue* this_01;
        ConfigProvider* in_RCX;
        shared_ptr* extraout_RDX;
        enable_shared_from_this<PathingEntity> local_50[16];
        ConfigProvider* local_40;

        local_40 = param_1->field_24;
        this_00 = &param_1->field_144;
        cVar2 = this_00->empty();
        if ((cVar2 != '\0') || (param_2 == (ConfigProvider*)0)) {
            local_50->shared_from_this();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)this,
                                                                                         (jag*)local_50, extraout_RDX);
            local_50->~shared_ptr();
            return this;
        }
        if (*(int*)&param_1->field_172 == -1) {
            iVar4 = -1;
            if (*(int*)&param_1->field_168 != -1) {
                psVar9 = (shared_ptr*)in_RCX->GetVarType(VarDomainType::PLAYER, *(int*)&param_1->field_168);
                if (shared_ptr::operator_cast_to_bool(psVar9)) {
                    this_01 = (VarValue*)(*(code*)param_2->field_0[2])(param_2, psVar9);
                    iVar4 = this_01->GetInt();
                }
            }
        } else {
            uVar6 = in_RCX->GetVarBitType(*(int*)&param_1->field_172);
            iVar4 = (*(code*)param_2->field_0[4])(param_2, uVar6);
        }
        if ((iVar4 < 0) || (iVar5 = this_00->end(), iVar5 + -1 <= iVar4)) {
            lVar8 = this_00->end();
            piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, lVar8 - 1);
            iVar4 = *piVar7;
            if (iVar4 == -1)
                goto LAB_100545683;
        } else {
            piVar7 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar4);
            if (*piVar7 == -1) {
            LAB_100545683:
                psVar9 = (shared_ptr*)&NullHitmarkType;
                goto LAB_100545691;
            }
            piVar7 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar4);
            iVar4 = *piVar7;
        }
        psVar9 = (shared_ptr*)local_40->List(iVar4, 0);
    LAB_100545691:
        new ((HitmarkType*)this) shared_ptr<oldscape::dash3d::Decor>(psVar9);
        return (HitmarkType*)this;
    }

    // 0x1005456c0, 528 bytes, placed by class name and debug map
    // HitmarkType::CacheSpriteInner(graphics::RT7Core&, int)
    void HitmarkType::CacheSpriteInner(RT7Core* param_1, int param_2) {
        EnumType* this_00;
        bool bVar1;
        char cVar2;
        uint uVar3;
        Js5ResourceProvider* this_01;
        shared_ptr* psVar4;
        undefined* puVar5;
        TextureManager* this_02;
        LoginManager* this_03;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_04;
        CoordMapSquare* pCVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_05;
        PacketView local_a8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80[16];
        shared_ptr local_70;
        void* local_60;
        undefined8 local_58;
        vector local_50[28];
        uint local_34;

        this_00 = (EnumType*)field_24;
        this_01 = (Js5ResourceProvider*)this_00->GetOutputType();
        if (-1 < param_2) {
            psVar4 = (shared_ptr*)HitmarkTypeList::FindCachedSprite((int)this_00);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if (!bVar1) {
                new (&local_a8) PacketView();
                puVar5 = (undefined*)this_01->GetFile(&local_a8, Js5Archive::JS5_SPRITES, param_2, 0,
                                                      (Priority*)Priority::HIGH, true, false, false);
                if (puVar5 == DataStatus::READY) {
                    eastl::vector<RGBAImage, BucketAllocatorEASTL>::vector();
                    cVar2 = RAWDecoder::LoadFromPacket(local_50, &local_a8);
                    if (cVar2 != '\0') {
                        this_02 = (TextureManager*)param_1->GetTextureManager();
                        local_60 = (void*)this_02->GetSpriteAtlasManager();
                        this_03 = (LoginManager*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                            (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                        this_04 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                         std::default_delete<LoadingScreenScript::AnimLayer>>,
                                         eastl::allocator>*)this_03->GetDevCredentialsOutputDirectory();
                        local_58 = this_04->data();
                        pCVar6 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                            (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                        local_34 = pCVar6->GetX();
                        pCVar6 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                            (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                        uVar3 = pCVar6->GetZ();
                        this_05 = (compressed_pair_imp<
                                   std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator, 0>*)
                            eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                (vector<RGBAImage, BucketAllocatorEASTL>*)local_50, 0);
                        psVar4 = (shared_ptr*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_05);
                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                            local_80, (_func_decltype_nullptr*)0);
                        local_70.AddRuntimeSprite(local_60, (uint)local_58, local_34, uVar3,
                                                  (fixed_vector*)&DAT_00000001, psVar4);
                        local_80->~shared_ptr();
                        this_00->CacheSprite(&local_70, param_2);
                        local_70.~shared_ptr();
                    }
                    local_50->~vector();
                }
                local_a8.~PacketView();
            }
        }
    }

    // 0x10054da60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.17
    void ___cxx_global_var_init_17(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&HitmarkType::NullHitmarkType) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee51c0, &HitmarkType::NullHitmarkType, 4294967296);
    }

} // namespace jag::game
