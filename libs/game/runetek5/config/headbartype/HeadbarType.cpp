// libs/game/runetek5/config/headbartype/HeadbarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "HeadbarType.h"

namespace jag::game {
    // 0x1039bbc30, 16 bytes, __common; set at startup by ___cxx_global_var_init.14
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> HeadbarType::NullHeadbarType;

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    uint HeadbarType::GetPriority() const;

    // 0x10016b4a0: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const, which has identical code
    uint HeadbarType::GetStickTime() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint HeadbarType::GetDisplayOrder() const;

    // 0x100544900, 432 bytes, placed by class name and debug map
    // HeadbarType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* HeadbarType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        undefined4 uVar3;
        undefined8 uVar4;

        switch (param_2) {
        case 1:
        case 6:
            param_1->Skip(2);
            break;
        case 2:
            bVar1 = param_1->g1();
            m_displayOrder = (uint)bVar1;
            break;
        case 3:
            bVar1 = param_1->g1();
            m_priority = (uint)bVar1;
            break;
        case 4:
            field_68 = 0;
            break;
        case 5:
            uVar2 = param_1->g2();
            m_stickTime = (uint)uVar2;
            break;
        case 7:
            uVar3 = param_1->gSmart2or4s();
            field_80 = uVar3;
            break;
        case 8:
            uVar3 = param_1->gSmart2or4s();
            field_84 = uVar3;
            break;
        case 9:
            uVar3 = param_1->gSmart2or4s();
            field_88 = uVar3;
            break;
        case 10:
            uVar3 = param_1->gSmart2or4s();
            field_92 = uVar3;
            break;
        case 11:
            uVar2 = param_1->g2();
            field_68 = (uint)uVar2;
            break;
        case 12:
            uVar3 = param_1->gSmart2or4s();
            field_96 = uVar3;
            break;
        case 13:
            uVar3 = param_1->gSmart2or4s();
            field_100 = uVar3;
            break;
        case 14:
            uVar3 = param_1->gSmart2or4s();
            field_108 = uVar3;
            break;
        case 15:
            uVar3 = param_1->gSmart2or4s();
            field_112 = uVar3;
            break;
        case 16:
            field_104 = 1;
            break;
        case 17:
            bVar1 = param_1->g1();
            field_64 = (uint)bVar1;
            break;
        default:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/headbartype/HeadbarType.cpp",
                                94, "Unrecognised .headbar config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x100544ab0, 16 bytes, placed by class name and debug map
    // HeadbarType::PostDecode()
    void HeadbarType::PostDecode() {}

    // 0x100544ac0, 128 bytes, placed by class name and debug map
    // HeadbarType::GetSprite(graphics::RT7Core&, int)
    shared_ptr* HeadbarType::GetSprite(RT7Core* param_1, int param_2) {
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

    // 0x100544b70, 128 bytes, placed by class name
    // HeadbarType::CacheSprites(graphics::RT7Core&)
    void HeadbarType::CacheSprites(RT7Core* param_1) {
        CacheSpriteInner(this, param_1, field_80);
        CacheSpriteInner(this, param_1, field_84);
        CacheSpriteInner(this, param_1, field_88);
        CacheSpriteInner(this, param_1, field_92);
        CacheSpriteInner(this, param_1, field_96);
        CacheSpriteInner(this, param_1, field_100);
        CacheSpriteInner(this, param_1, field_108);
        CacheSpriteInner(this, param_1, field_112);
    }

    // 0x100544bf0, 528 bytes, placed by class name
    // HeadbarType::CacheSpriteInner(graphics::RT7Core&, int)
    void HeadbarType::CacheSpriteInner(RT7Core* param_1, int param_2) {
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

    // 0x10054da20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&HeadbarType::NullHeadbarType) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee51b8, &HeadbarType::NullHeadbarType, 4294967296);
    }

} // namespace jag::game
