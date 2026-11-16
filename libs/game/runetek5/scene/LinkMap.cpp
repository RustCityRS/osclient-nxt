// libs/game/runetek5/scene/LinkMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LinkMap.h"

namespace jag::game {
    // 0x100189b80: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    LinkMap::LinkMap();

    // 0x10019b570: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    LinkMap::LinkMap();

    // 0x10047af70, 32 bytes, placed by class name and debug map
    // LinkMap::Setup(eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*, int, int, int, int)
    void LinkMap::Setup(vector* param_1, int param_2, int param_3, int param_4, int param_5) {
        field_0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)param_1;
        field_8 = param_2;
        field_12 = param_3;
        field_16 = param_4;
        field_20 = param_5;
    }

    // 0x10047af90, 192 bytes, placed by class name and debug map
    // LinkMap::GetTileLink(int, int, int) const
    undefined4 LinkMap::GetTileLink(int param_1, int param_2, int param_3) {
        bool bVar2;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        shared_ptr* this_01;
        MapSquare* this_02;
        int iVar3;
        int iVar4;
        undefined4 uVar5;

        uVar5 = 4294967295;
        if (field_0 != (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)0) {
            if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    field_0) == '\0') {
                iVar3 = param_2 >> 6;
                if ((((field_8 <= iVar3) && (iVar3 <= field_12)) && (iVar4 = param_3 >> 6, field_16 <= iVar4)) &&
                    (iVar4 <= field_20)) {
                    this_00 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)field_0,
                            (long)(iVar3 - field_8));
                    this_01 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        this_00, (long)iVar4 - (long)field_16);
                    bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                    uVar5 = 0;
                    if (bVar2) {
                        this_02 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                        uVar5 = this_02->GetTileLink(param_1, param_2 & 63, param_3 & 63);
                    }
                }
            }
        }
        return uVar5;
    }

    // 0x10047b050, 256 bytes, placed by class name and debug map
    // LinkMap::GetRemoveRoofID(int, int, int) const
    undefined4 LinkMap::GetRemoveRoofID(int param_1, int param_2, int param_3) {
        char cVar1;
        bool bVar2;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        shared_ptr* this_01;
        Location* this_02;
        unique_ptr* this_03;
        Terrain* this_04;
        int iVar4;
        int iVar5;

        if ((field_0 != (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)0) &&
            (cVar1 =
                 eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                     field_0),
             cVar1 == '\0')) {
            iVar4 = param_2 >> 6;
            if ((field_8 <= iVar4) &&
                (((iVar4 <= field_12 && (iVar5 = param_3 >> 6, field_16 <= iVar5)) && (iVar5 <= field_20)))) {
                this_00 = (vector<MapSquareStatus, eastl::allocator>*)
                    eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)field_0,
                        (long)(iVar4 - field_8));
                this_01 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                    this_00, (long)iVar5 - (long)field_16);
                bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                if (bVar2) {
                    this_02 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                    this_03 = (unique_ptr*)this_02->GetParentLocationType();
                    bVar2 = std::unique_ptr::operator_cast_to_bool(this_03);
                    if (bVar2) {
                        this_04 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_03);
                        return this_04->GetRemoveRoofID(param_1, param_2 & 63, param_3 & 63);
                    }
                }
            }
        }
        return 0;
    }

    // 0x10047b150, 48 bytes, placed by class name and debug map
    // LinkMap::IsLinkBelow(int, int) const
    byte LinkMap::IsLinkBelow(int param_1, int param_2) {
        uint uVar1;

        uVar1 = GetTileLink(this, 1, param_1, param_2);
        return (byte)((uVar1 & 2) >> 1) & uVar1 != 4294967295;
    }

    // 0x10047b180, 96 bytes, placed by class name and debug map
    // LinkMap::IsRemoveRoof(int, int, int) const
    byte LinkMap::IsRemoveRoof(int param_1, int param_2, int param_3) {
        byte bVar1;
        uint uVar2;

        if (0 < param_1) {
            bVar1 = IsLinkBelow(this, param_2, param_3);
            param_1 = param_1 - (uint)bVar1;
        }
        uVar2 = GetTileLink(this, param_1, param_2, param_3);
        return (byte)((uVar2 & 4) >> 2) & uVar2 != 4294967295;
    }

    // 0x10047b1e0, 80 bytes, placed by class name and debug map
    // LinkMap::IsVisibleFromLevel(int, int, int, int) const
    bool LinkMap::IsVisibleFromLevel(int param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        bool bVar2;

        uVar1 = GetTileLink(this, param_2, param_3, param_4);
        if (uVar1 == 4294967295) {
            bVar2 = true;
        } else if ((uVar1 & 8) == 0) {
            if ((0 < param_2) && ((uVar1 & 2) != 0)) {
                param_2 = param_2 + -1;
            }
            bVar2 = param_2 == param_1;
        } else {
            bVar2 = param_1 == 0;
        }
        return bVar2;
    }

} // namespace jag::game
