// libs/game/runetek5/config/headbartype/HeadbarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "HeadbarType.h"

namespace jag::game {
    // 0x1039bbc30, set at startup by ___cxx_global_var_init.14
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> HeadbarType::NullHeadbarType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100061e30: HeadbarType::GetPriority() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x10016b4a0: HeadbarType::GetStickTime() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const

    // 0x1001be5d0: HeadbarType::GetDisplayOrder() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x100544900
    uint8_t* HeadbarType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint32_t uVar3;

        switch (arg2) {
        case 1:
        case 6:
            arg1.Skip(2);
            break;
        case 2:
            bVar1 = arg1.g1();
            m_displayOrder = (unsigned int)bVar1;
            break;
        case 3:
            bVar1 = arg1.g1();
            m_priority = (unsigned int)bVar1;
            break;
        case 4:
            field_68 = 0;
            break;
        case 5:
            uVar2 = arg1.g2();
            m_stickTime = (unsigned int)uVar2;
            break;
        case 7:
            uVar3 = arg1.gSmart2or4s();
            field_80 = uVar3;
            break;
        case 8:
            uVar3 = arg1.gSmart2or4s();
            field_84 = uVar3;
            break;
        case 9:
            uVar3 = arg1.gSmart2or4s();
            field_88 = uVar3;
            break;
        case 10:
            uVar3 = arg1.gSmart2or4s();
            field_92 = uVar3;
            break;
        case 11:
            uVar2 = arg1.g2();
            field_68 = (unsigned int)uVar2;
            break;
        case 12:
            uVar3 = arg1.gSmart2or4s();
            field_96 = uVar3;
            break;
        case 13:
            uVar3 = arg1.gSmart2or4s();
            field_100 = uVar3;
            break;
        case 14:
            uVar3 = arg1.gSmart2or4s();
            field_108 = uVar3;
            break;
        case 15:
            uVar3 = arg1.gSmart2or4s();
            field_112 = uVar3;
            break;
        case 16:
            field_104 = 1;
            break;
        case 17:
            bVar1 = arg1.g1();
            field_64 = (unsigned int)bVar1;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "headbartype/HeadbarType.cpp",
                      94, "Unrecognised .headbar config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x100544ab0
    void HeadbarType::PostDecode() {}

    // 0x100544ac0
    shared_ptr* HeadbarType::GetSprite(graphics::RT7Core& rt7Core, int arg2) {
        HitmarkTypeList* this_00;
        shared_ptr* psVar2;

        if (arg2 < 0) {
            psVar2 = (shared_ptr*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        } else {
            this_00 = (HitmarkTypeList*)field_24;
            psVar2 = (shared_ptr*)this_00->FindCachedSprite(arg2);
            if (shared_ptr::operator_cast_to_bool(psVar2)) {
                if (((SpriteAtlasReference*)(*psVar2).operator->())->IsReady()) {
                    return psVar2;
                }
            }
            CacheSprites(rt7Core);
            psVar2 = (shared_ptr*)this_00->FindCachedSprite(arg2);
        }
        return psVar2;
    }

    // 0x100544b70
    void HeadbarType::CacheSprites(graphics::RT7Core& rt7Core) {
        CacheSpriteInner(rt7Core, field_80);
        CacheSpriteInner(rt7Core, field_84);
        CacheSpriteInner(rt7Core, field_88);
        CacheSpriteInner(rt7Core, field_92);
        CacheSpriteInner(rt7Core, field_96);
        CacheSpriteInner(rt7Core, field_100);
        CacheSpriteInner(rt7Core, field_108);
        CacheSpriteInner(rt7Core, field_112);
    }

    // 0x100544bf0
    void HeadbarType::CacheSpriteInner(graphics::RT7Core& rt7Core, int arg2) {
        unsigned int uVar2;
        LoginManager* this_04;
        CoordMapSquare* pCVar4;
        PacketView local_a8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80;
        shared_ptr<graphics::SpriteAtlasReference> local_70;
        SpriteAtlasManager* local_60;
        uint64_t local_58;
        vector<RGBAImage, BucketAllocatorEASTL> local_50;
        unsigned int local_34;

        EnumType* this_00 = (EnumType*)field_24;
        auto this_01 = this_00->GetOutputType();
        if (-1 < arg2) {
            if (!((this_00->FindCachedSprite(arg2))->operator_cast_to_bool())) {
                local_a8 = PacketView();
                if ((uint8_t*)this_01->GetFile(local_a8, *(Js5Archive::JS5_SPRITES), arg2, 0, (Priority*)Priority::HIGH,
                                               true, false, false) == DataStatus::READY) {
                    local_50 = eastl::vector<RGBAImage, BucketAllocatorEASTL>();
                    if (RAWDecoder::LoadFromPacket(local_50, local_a8)) {
                        local_60 = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
                        this_04 = &local_50[0];
                        local_58 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                        this_04->GetDevCredentialsOutputDirectory())
                                       ->data();
                        pCVar4 = &local_50[0];
                        local_34 = pCVar4->GetX();
                        pCVar4 = &local_50[0];
                        uVar2 = pCVar4->GetZ();
                        ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)local_50[0])
                            ->second();
                        local_80 = shared_ptr();
                        graphics::SpriteAtlasManager::AddRuntimeSprite(
                            &local_70, (unsigned int)local_60, (unsigned int)local_58, local_34,
                            *((fixed_vector<int, _4ul>*)(unsigned long)uVar2), DAT_00000001);
                        this_00->CacheSprite(local_70, arg2);
                    }
                }
            }
        }
    }

} // namespace jag::game
