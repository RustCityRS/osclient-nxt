// libs/game/runetek5/scene/LinkMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LinkMap {
    public:
        LinkMap();
        void IsLinkBelow(const CoordGrid& coordGrid) const;
        void GetTileLinkZero(const CoordGrid& coordGrid) const;
        int GetTileLinkZero(int arg1, int arg2, int arg3) const;
        void IsRemoveRoof(const CoordGrid& coordGrid) const;
        void Setup(eastl::vector<eastl::vector<MapSquareStatus>>* mapSquareStatusss, int arg2, int arg3, int arg4,
                   int arg5);
        uint32_t GetTileLink(int arg1, int arg2, int arg3) const;
        uint32_t GetRemoveRoofID(int arg1, int arg2, int arg3) const;
        bool IsLinkBelow(int arg1, int arg2) const;
        bool IsRemoveRoof(int arg1, int arg2, int arg3) const;
        bool IsVisibleFromLevel(int arg1, int arg2, int arg3, int arg4) const;

    private:
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* field_0;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        uint8_t _unknown_24[4];
    };

    // 0x1003f5dc0
    void LinkMap::IsLinkBelow(const CoordGrid& coordGrid) const {
        IsLinkBelow(coordGrid.field_4, coordGrid.field_8);
    }

    // 0x100430ae0
    void LinkMap::GetTileLinkZero(const CoordGrid& coordGrid) const {
        GetTileLinkZero(coordGrid.field_0, coordGrid.field_4, coordGrid.field_8);
    }

    // 0x100430b10
    int LinkMap::GetTileLinkZero(int arg1, int arg2, int arg3) const {
        int iVar1 = GetTileLink(arg1, arg2, arg3);
        if (iVar1 == -1) {
            iVar1 = 0;
        }
        return iVar1;
    }

    // 0x100443f30
    void LinkMap::IsRemoveRoof(const CoordGrid& coordGrid) const {
        IsRemoveRoof(coordGrid.field_0, coordGrid.field_4, coordGrid.field_8);
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003f64a0
    bool operator== <double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        if ((*(double*)vector31 == *(double*)vector32) && (*(double*)(vector31 + 8) == *(double*)(vector32 + 8))) {
            return *(double*)(vector31 + 16) == *(double*)(vector32 + 16);
        }
        return false;
    }

} // namespace jag::math
