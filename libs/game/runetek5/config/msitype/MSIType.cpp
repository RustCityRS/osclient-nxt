// libs/game/runetek5/config/msitype/MSIType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MSIType.h"

namespace jag::game {
    // 0x100061e30: MSIType::GetTint() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x1001be5d0: MSIType::GetSpriteID() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x1001c2200: MSIType::GetResize() const has the same machine code as oldscape::MutationTracked<graphics::SimpleScatteringParams>::IsDirty() const

    // 0x1005181b0
    uint8_t* MSIType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint32_t uVar1;

        switch (arg2) {
        case 1:
            uVar1 = arg1.gSmart2or4s();
            m_spriteID = uVar1;
            break;
        case 2:
            uVar1 = arg1.g3();
            m_tint = uVar1;
            break;
        case 3:
            m_resize = 1;
            break;
        case 4:
            m_spriteID = 4294967295;
            break;
        case 5:
            m_hideOnMinimap = 1;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "msitype/MSIType.cpp",
                      37, "Unrecognised .msi config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x100518260
    void MSIType::PostDecode() {}

    // 0x100518270
    PacketView* MSIType::GetSprite(graphics::RT7Core& rt7Core, Rotation90 rotation90, bool arg3) {
        bool bVar1;
        RT7Core* this_00;
        unsigned int uVar3;
        Js5ResourceProvider* this_03;
        RGBAImage* pRVar5;
        SpriteAtlasManager* pSVar6;
        LoginManager* this_05;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_06;
        CoordMapSquare* pCVar7;
        PacketView* this_08;
        PacketView local_108;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_e0;
        PacketView* local_d0;
        vector<RGBAImage, BucketAllocatorEASTL> local_c0;
        unsigned int local_a4;
        RT7Core* local_a0;
        char local_91;
        RGBAImage local_90;

        if (m_spriteID == -1) {
            this_08 = (PacketView*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
            goto LAB_100518539;
        }
        EnumType* local_c8 = (EnumType*)field_24;
        auto this_01 = local_c8->FindCachedSprite(m_spriteID);
        bool cVar2 = this_01->operator_cast_to_bool();
        if (!cVar2) {
        LAB_1005182e1:
            local_d0 = this_01;
            local_a0 = rt7Core;
            this_03 = (Js5ResourceProvider*)local_c8->GetOutputType();
            this_08 = &local_108;
            new (this_08) PacketView();
            if ((uint8_t*)this_03->GetFile(*this_08, *(Js5Archive::JS5_SPRITES), m_spriteID, 0,
                                           (Priority*)Priority::HIGH, true, false, false) == DataStatus::READY) {
                local_c0 = eastl::vector<RGBAImage, BucketAllocatorEASTL>();
                local_91 = RAWDecoder::LoadFromPacket(local_c0, local_108);
                if (local_91 != '\0') {
                    if ((arg3) || ((char)rotation90 != '\0')) {
                        local_c0.HeapBeginPtr();
                        local_c0.end();
                    }
                    pRVar5 = &local_c0[0];
                    this_00 = local_a0;
                    local_90 = pRVar5->PadImage(1, true);
                    pRVar5 = &local_c0[0];
                    *pRVar5 = local_90;
                    pSVar6 = this_00->GetTextureManager()->GetSpriteAtlasManager();
                    this_05 = &local_c0[0];
                    this_06 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                  this_05->GetDevCredentialsOutputDirectory();
                    local_a0 = (RT7Core*)this_06->data();
                    pCVar7 = &local_c0[0];
                    local_a4 = pCVar7->GetX();
                    pCVar7 = &local_c0[0];
                    uVar3 = pCVar7->GetZ();
                    ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)local_c0[0])
                        ->second();
                    local_e0 = shared_ptr();
                    graphics::SpriteAtlasManager::AddRuntimeSprite(
                        &local_90, (unsigned int)pSVar6, (unsigned int)local_a0, local_a4,
                        *((fixed_vector<int, _4ul>*)(unsigned long)uVar3), DAT_00000001);
                    this_08 = (PacketView*)local_c8->CacheSprite(local_90, m_spriteID);
                }
                if (local_91 == '\0')
                    goto LAB_100518514;
                bVar1 = false;
            } else {
            LAB_100518514:
                bVar1 = true;
            }
            this_01 = local_d0;
            if (!bVar1)
                goto LAB_100518539;
        } else {
            cVar2 = ((SpriteAtlasReference*)(*this_01).operator->())->IsReady();
            if (!cVar2)
                goto LAB_1005182e1;
        }
        this_08 = this_01;
    LAB_100518539:
        return this_08;
    }

} // namespace jag::game
