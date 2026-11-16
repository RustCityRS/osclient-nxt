// libs/game/runetek5/scene/LinkMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LinkMap {
    public:
        LinkMap();
        void IsLinkBelow(CoordGrid const&) const;
        void GetTileLinkZero(CoordGrid const&) const;
        int GetTileLinkZero(int, int, int) const;
        void IsRemoveRoof(CoordGrid const&) const;
        void Setup(eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*, int, int, int,
                   int);
        GetTileLink(int, int, int) const;
        GetRemoveRoofID(int, int, int) const;
        byte IsLinkBelow(int, int) const;
        byte IsRemoveRoof(int, int, int) const;
        bool IsVisibleFromLevel(int, int, int, int) const;

        // data members, from how the methods use this: 28 bytes
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* field_0; // offset 0
        int field_8;                                                                                     // offset 8
        int field_12;                                                                                    // offset 12
        int field_16;                                                                                    // offset 16
        int field_20;                                                                                    // offset 20
        char _unknown_24[4];
    };

    // 0x1003f5dc0, 32 bytes, inline, placed by class name and debug map
    // LinkMap::IsLinkBelow(CoordGrid const&) const
    void LinkMap::IsLinkBelow(CoordGrid* param_1) {
        IsLinkBelow(this, param_1->field_4, param_1->field_8);
    }

    // 0x100430ae0, 32 bytes, inline, placed by class name
    // LinkMap::GetTileLinkZero(CoordGrid const&) const
    void LinkMap::GetTileLinkZero(CoordGrid* param_1) {
        GetTileLinkZero(this, param_1->field_0, param_1->field_4, param_1->field_8);
    }

    // 0x100430b10, 32 bytes, inline, placed by class name
    // LinkMap::GetTileLinkZero(int, int, int) const
    int LinkMap::GetTileLinkZero(int param_1, int param_2, int param_3) {
        int iVar1;

        iVar1 = GetTileLink(this, param_1, param_2, param_3);
        if (iVar1 == -1) {
            iVar1 = 0;
        }
        return iVar1;
    }

    // 0x100443f30, 32 bytes, inline, placed by class name
    // LinkMap::IsRemoveRoof(CoordGrid const&) const
    void LinkMap::IsRemoveRoof(CoordGrid* param_1) {
        IsRemoveRoof(this, param_1->field_0, param_1->field_4, param_1->field_8);
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003f64a0, 48 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<double>(Vector3T<double> const&, Vector3T<double> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<double> const&,
   Vector3T<double> const&) */

    bool operator==(Vector3T* param_1, Vector3T* param_2) {
        if ((*(double*)param_1 == *(double*)param_2) && (*(double*)(param_1 + 8) == *(double*)(param_2 + 8))) {
            return *(double*)(param_1 + 16) == *(double*)(param_2 + 16);
        }
        return false;
    }

} // namespace jag::math
