// libs/game/runetek5/config/worldareatype/WorldAreaType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WorldAreaType.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    WorldAreaType::PostDecode();

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    WorldAreaType::GetColour() const;

    // 0x1004c7af0, 352 bytes, placed by class name and debug map
    // WorldAreaType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* WorldAreaType::DecodeType(PacketT* param_1, uint param_2) {
        undefined4 uVar1;
        int iVar2;
        undefined4* puVar3;
        undefined8* puVar4;
        undefined8 uVar5;
        uint* puVar6;
        CoordGrid* this_00;
        CoordGrid* pCVar7;
        CoordGrid local_58;
        CoordGrid local_48;
        CoordGrid local_38;

        if (param_2 == 4) {
            iVar2 = param_1->g4();
            new (&local_58) game::CoordGrid(iVar2);
            uVar1 = param_1->g4();
            puVar3 = (undefined4*)eastl::map<CoordGrid, int, eastl::less<CoordGrid>, eastl::allocator>::operator[](
                (map<CoordGrid, int, eastl::less<CoordGrid>, eastl::allocator>*)&field_64, &local_58);
            *puVar3 = uVar1;
            local_38.field_0 = local_58.GetMapSquareX();
            local_38._12_4_ = local_58.GetMapSquareZ();
            this_00 = &local_48;
            pCVar7 = &local_38;
            puVar6 = (uint*)&local_38.field_12;
        } else {
            if (param_2 != 3) {
                if (param_2 == 2) {
                    uVar1 = param_1->g3();
                    field_56 = uVar1;
                    return DataStatus::READY;
                }
                uVar5 = logger::default_logger();
                logger::Logger::Log(uVar5, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/worldareatype/WorldAreaType.cpp",
                                    34, "Error unrecognised .worldarea config code: %u", param_2);
                return DataStatus::READY;
            }
            iVar2 = param_1->g4();
            new (&local_58) game::CoordGrid(iVar2);
            iVar2 = param_1->g4();
            new (&local_48) game::CoordGrid(iVar2);
            puVar4 =
                (undefined8*)eastl::map<CoordGrid, CoordGrid, eastl::less<CoordGrid>, eastl::allocator>::operator[](
                    (map<CoordGrid, CoordGrid, eastl::less<CoordGrid>, eastl::allocator>*)&field_112, &local_58);
            *puVar4 = local_48._0_8_;
            *(uint*)(puVar4 + 1) = local_48.field_8;
            local_38._12_4_ = local_58.GetMapSquareX();
            local_38.field_8 = local_58.GetMapSquareZ();
            this_00 = &local_38;
            pCVar7 = (CoordGrid*)&local_38.field_12;
            puVar6 = &local_38.field_8;
        }
        eastl::pair<int, int>::pair<int, int&, void>((pair<int, int>*)this_00, (int*)pCVar7, (int*)puVar6);
        eastl::rbtree<eastl::pair<int, int>, eastl::pair<int, int>, eastl::less<eastl::pair<int, int>>,
                      eastl::allocator, eastl::use_self<eastl::pair<int, int>>, false, true>::
            insert<eastl::pair<int, int>, void>(
                (rbtree<eastl::pair<int, int>, eastl::pair<int, int>, eastl::less<eastl::pair<int, int>>,
                        eastl::allocator, eastl::use_self<eastl::pair<int, int>>, false, true>*)&field_160,
                (pair*)this_00);
        return DataStatus::READY;
    }

    // 0x1004c7e00, 96 bytes, placed by class name and debug map
    // WorldAreaType::HasImpostorsForMapSquare(int, int)
    void WorldAreaType::HasImpostorsForMapSquare(int param_1, int param_2) {
        hashtable_iterator_base* extraout_RDX;
        pair<int, int> local_38[8];
        undefined8 local_30;
        undefined8 local_28;
        int local_20;
        int local_1c;

        local_20 = param_1;
        local_1c = param_2;
        eastl::pair<int, int>::pair<int, int&, void>(local_38, &local_20, &local_1c);
        local_30 = eastl::rbtree<eastl::pair<int, int>, eastl::pair<int, int>, eastl::less<eastl::pair<int, int>>,
                                 eastl::allocator, eastl::use_self<eastl::pair<int, int>>, false,
                                 true>::find((pair*)&field_160);
        local_28 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, extraout_RDX);
    }

    // 0x1004c7f30, 400 bytes, placed by class name and debug map
    // WorldAreaType::FillImpostorForCompositeZone(ClientCompositeZone&, int, int, int)
    ulong WorldAreaType::FillImpostorForCompositeZone(ClientCompositeZone* param_1, int param_2, int param_3,
                                                      int param_4) {
        uint uVar1;
        undefined8 uVar2;
        bool bVar3;
        int iVar4;
        long lVar5;
        undefined7 extraout_var;
        CoordGrid* this_00;
        ulong uVar6;
        undefined1* this_01;
        int iVar7;
        undefined1 auVar8[16];
        undefined1 local_60[16];
        undefined1 local_50[16];
        LocationData local_40;

        iVar4 = param_3 + 7;
        if (-1 < param_3) {
            iVar4 = param_3;
        }
        iVar7 = param_4 + 7;
        if (-1 < param_4) {
            iVar7 = param_4;
        }
        local_60._8_8_ = this;
        local_50._8_8_ = param_1;
        local_40._12_4_ = param_2;
        new (&local_40) oldscape::rs2lib::worldmap::LocationData(0, (iVar4 >> 3) << 6, (iVar7 >> 3) << 6);
        eastl::rbtree<CoordGrid, eastl::pair<CoordGrid_const, CoordGrid>, eastl::less<CoordGrid>, eastl::allocator,
                      eastl::use_first<eastl::pair<CoordGrid_const, CoordGrid>>, true, true>::find((CoordGrid*)
                                                                                                       local_50);
        auVar8 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_40._0_8_ = auVar8._0_8_;
        bVar3 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)&local_40, auVar8._8_8_);
        uVar2 = local_50._8_8_;
        if (bVar3) {
            lVar5 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            uVar2 = local_50._8_8_;
            this_00 = (CoordGrid*)(lVar5 + 12);
            *(undefined4*)local_50._8_8_ = local_40._12_4_;
            iVar4 = this_00->GetMapSquareX();
            *(int*)(uVar2 + 4) = param_3 % 8 + iVar4 * 8;
            iVar4 = this_00->GetMapSquareZ();
            *(int*)(uVar2 + 8) = param_4 % 8 + iVar4 * 8;
            *(undefined1*)(uVar2 + 12) = 0;
            uVar6 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
        } else {
            this_01 = (undefined1*)(local_60._8_8_ + 64);
            new (&local_40) oldscape::rs2lib::worldmap::LocationData(local_40._12_4_, param_3 << 3, param_4 << 3);
            eastl::rbtree<CoordGrid, eastl::pair<CoordGrid_const, int>, eastl::less<CoordGrid>, eastl::allocator,
                          eastl::use_first<eastl::pair<CoordGrid_const, int>>, true, true>::find((CoordGrid*)local_60);
            auVar8 = this_01->cend();
            local_40._0_8_ = auVar8._0_8_;
            bVar3 = eastl::operator!=((eastl*)local_60, (hashtable_iterator_base*)&local_40, auVar8._8_8_);
            uVar6 = CONCAT71(extraout_var, bVar3) & 4294967295;
            if (bVar3) {
                lVar5 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_60);
                uVar1 = *(uint*)(lVar5 + 12);
                *(undefined4*)uVar2 = uVar1 >> 24 & 3;
                *(uint*)(uVar2 + 4) = uVar1 >> 14 & 1023;
                *(uint*)(uVar2 + 8) = uVar1 >> 3 & 2047;
                *(byte*)(uVar2 + 12) = (byte)uVar1 >> 1 & 3;
            }
        }
        return uVar6 & 4294967295;
    }

} // namespace jag::game
