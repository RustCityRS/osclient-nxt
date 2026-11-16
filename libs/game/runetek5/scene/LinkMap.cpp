// libs/game/runetek5/scene/LinkMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LinkMap.h"

namespace jag::game {
    // 0x10019b570: LinkMap::LinkMap() has the same machine code as hardware::MemoryInfo::MemoryInfo()

    // 0x10047af70
    void LinkMap::Setup(eastl::vector<eastl::vector<MapSquareStatus>>* mapSquareStatusss, int arg2, int arg3, int arg4,
                        int arg5) {
        field_0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)mapSquareStatusss;
        field_8 = arg2;
        field_12 = arg3;
        field_16 = arg4;
        field_20 = arg5;
    }

    // 0x10047af90
    uint32_t LinkMap::GetTileLink(int arg1, int arg2, int arg3) const {
        bool cVar1;
        vector<MapSquareStatus>* this_00;
        shared_ptr* this_01;
        int iVar2;
        int iVar3;

        uint32_t uVar4 = 4294967295;
        if (field_0 != nullptr) {
            cVar1 = field_0->empty();
            if (!cVar1) {
                iVar2 = arg2 >> 6;
                if ((((field_8 <= iVar2) && (iVar2 <= field_12)) && (iVar3 = arg3 >> 6, field_16 <= iVar3)) &&
                    (iVar3 <= field_20)) {
                    this_00 = (vector<MapSquareStatus>*)(*field_0)[(long)(iVar2 - field_8)];
                    this_01 = (shared_ptr*)(*this_00)[(long)iVar3 - (long)field_16];
                    cVar1 = shared_ptr::operator_cast_to_bool(this_01);
                    uVar4 = 0;
                    if (cVar1) {
                        uVar4 = ((MapSquare*)(*this_01).operator->())->GetTileLink(arg1, arg2 & 63, arg3 & 63);
                    }
                }
            }
        }
        return uVar4;
    }

    // 0x10047b050
    uint32_t LinkMap::GetRemoveRoofID(int arg1, int arg2, int arg3) const {
        bool cVar1;
        vector<MapSquareStatus>* this_00;
        shared_ptr* this_01;
        Location* this_02;
        unique_ptr* this_03;
        int iVar3;
        int iVar4;

        if ((field_0 != nullptr) && (cVar1 = field_0->empty(), !cVar1)) {
            iVar3 = arg2 >> 6;
            if ((field_8 <= iVar3) &&
                (((iVar3 <= field_12 && (iVar4 = arg3 >> 6, field_16 <= iVar4)) && (iVar4 <= field_20)))) {
                this_00 = (vector<MapSquareStatus>*)(*field_0)[(long)(iVar3 - field_8)];
                this_01 = (shared_ptr*)(*this_00)[(long)iVar4 - (long)field_16];
                cVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (cVar1) {
                    this_02 = (Location*)(*this_01).operator->();
                    this_03 = (unique_ptr*)this_02->GetParentLocationType();
                    cVar1 = std::unique_ptr::operator_cast_to_bool(this_03);
                    if (cVar1) {
                        return ((Terrain*)(*this_03).operator->())->GetRemoveRoofID(arg1, arg2 & 63, arg3 & 63);
                    }
                }
            }
        }
        return 0;
    }

    // 0x10047b150
    bool LinkMap::IsLinkBelow(int arg1, int arg2) const {
        unsigned int uVar1 = GetTileLink(1, arg1, arg2);
        return (uint8_t)((uVar1 & 2) >> 1) & uVar1 != 4294967295;
    }

    // 0x10047b180
    bool LinkMap::IsRemoveRoof(int arg1, int arg2, int arg3) const {
        uint8_t bVar1;

        if (0 < arg1) {
            bVar1 = IsLinkBelow(arg2, arg3);
            arg1 = arg1 - (unsigned int)bVar1;
        }
        unsigned int uVar2 = GetTileLink(arg1, arg2, arg3);
        return (uint8_t)((uVar2 & 4) >> 2) & uVar2 != 4294967295;
    }

    // 0x10047b1e0
    bool LinkMap::IsVisibleFromLevel(int arg1, int arg2, int arg3, int arg4) const {
        bool bVar2;

        unsigned int uVar1 = GetTileLink(arg2, arg3, arg4);
        if (uVar1 == 4294967295) {
            bVar2 = true;
        } else if ((uVar1 & 8) == 0) {
            if ((0 < arg2) && ((uVar1 & 2) != 0)) {
                arg2 = arg2 - 1;
            }
            bVar2 = arg2 == arg1;
        } else {
            bVar2 = arg1 == 0;
        }
        return bVar2;
    }

} // namespace jag::game
