// libs/game/runetek5/config/msitype/MSIType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MSIType.h"

namespace jag::game {
    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    MSIType::GetTint() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    MSIType::GetSpriteID() const;

    // 0x1001c2200: the linker folded this into oldscape::MutationTracked<graphics::SimpleScatteringParams>::IsDirty() const, which has identical code
    MSIType::GetResize() const;

    // 0x1005181b0, 176 bytes, placed by class name and debug map
    // MSIType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* MSIType::DecodeType(PacketT* param_1, uint param_2) {
        undefined4 uVar1;
        undefined8 uVar2;

        switch (param_2) {
        case 1:
            uVar1 = param_1->gSmart2or4s();
            m_spriteID = uVar1;
            break;
        case 2:
            uVar1 = param_1->g3();
            m_tint = uVar1;
            break;
        case 3:
            m_resize = true;
            break;
        case 4:
            m_spriteID = 4294967295;
            break;
        case 5:
            m_hideOnMinimap = 1;
            break;
        default:
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/msitype/MSIType.cpp",
                                37, "Unrecognised .msi config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x100518260, 16 bytes, placed by class name and debug map
    // MSIType::PostDecode()
    void MSIType::PostDecode() {}

    // 0x100518270, 864 bytes, placed by class name and debug map
    // MSIType::GetSprite(graphics::RT7Core&, Rotation90, bool)
    PacketView* MSIType::GetSprite(RT7Core* param_1, char param_3, char param_4) {
        RT7Core* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        PacketView* this_01;
        SpriteAtlasReference* this_02;
        Js5ResourceProvider* this_03;
        undefined* puVar5;
        RGBAImage* this_04;
        TextureManager* this_05;
        void* pvVar6;
        LoginManager* this_06;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_07;
        CoordMapSquare* pCVar7;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_08;
        shared_ptr* psVar8;
        PacketView* this_09;
        PacketView local_108;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_e0[16];
        PacketView* local_d0;
        EnumType* local_c8;
        vector local_c0[28];
        uint local_a4;
        RT7Core* local_a0;
        char local_91;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_spriteID == -1) {
            this_09 = (PacketView*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
            goto LAB_100518539;
        }
        local_c8 = (EnumType*)field_24;
        this_01 = (PacketView*)MSITypeList::FindCachedSprite((int)local_c8);
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            this_02 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
            cVar2 = this_02->IsReady();
            if (cVar2 == '\0')
                goto LAB_1005182e1;
        } else {
        LAB_1005182e1:
            local_d0 = this_01;
            local_a0 = param_1;
            this_03 = (Js5ResourceProvider*)local_c8->GetOutputType();
            this_09 = &local_108;
            PacketView::PacketView(this_09);
            puVar5 = (undefined*)this_03->GetFile(this_09, Js5Archive::JS5_SPRITES, m_spriteID, 0,
                                                  (Priority*)Priority::HIGH, true, false, false);
            if (puVar5 == DataStatus::READY) {
                eastl::vector<RGBAImage, BucketAllocatorEASTL>::vector();
                local_91 = RAWDecoder::LoadFromPacket(local_c0, &local_108);
                if (local_91 != '\0') {
                    if ((param_4 != '\0') || (param_3 != '\0')) {
                        local_c0->HeapBeginPtr();
                        local_c0->end();
                    }
                    iVar3 = eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_c0, 0);
                    this_00 = local_a0;
                    local_90.PadImage(iVar3, true);
                    this_04 = (RGBAImage*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_c0, 0);
                    RGBAImage::operator=(this_04, &local_90);
                    local_90.~RGBAImage();
                    this_05 = (TextureManager*)this_00->GetTextureManager();
                    pvVar6 = (void*)this_05->GetSpriteAtlasManager();
                    this_06 = (LoginManager*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_c0, 0);
                    this_07 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)this_06->GetDevCredentialsOutputDirectory();
                    local_a0 = (RT7Core*)this_07->data();
                    pCVar7 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_c0, 0);
                    local_a4 = pCVar7->GetX();
                    pCVar7 = (CoordMapSquare*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                        (vector<RGBAImage, BucketAllocatorEASTL>*)local_c0, 0);
                    uVar4 = pCVar7->GetZ();
                    this_08 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                                (vector<RGBAImage, BucketAllocatorEASTL>*)local_c0, 0);
                    psVar8 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_08);
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                        local_e0, (_func_decltype_nullptr*)0);
                    local_90.AddRuntimeSprite(pvVar6, (uint)local_a0, local_a4, uVar4, (fixed_vector*)&DAT_00000001,
                                              psVar8);
                    local_e0->~shared_ptr();
                    this_09 = (PacketView*)local_c8->CacheSprite((shared_ptr*)&local_90, m_spriteID);
                    local_90.~shared_ptr();
                }
                local_c0->~vector();
                if (local_91 == '\0')
                    goto LAB_100518514;
                bVar1 = false;
            } else {
            LAB_100518514:
                bVar1 = true;
            }
            local_108.~PacketView();
            this_01 = local_d0;
            if (!bVar1)
                goto LAB_100518539;
        }
        this_09 = this_01;
    LAB_100518539:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this_09;
    }

} // namespace jag::game
