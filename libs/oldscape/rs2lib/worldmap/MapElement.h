// libs/oldscape/rs2lib/worldmap/MapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MapElement {
    public:
        MapElement(const CoordGrid& coordGrid1, const CoordGrid& coordGrid2);
        uint32_t Contains(int arg1, int arg2);
        bool ContainsSprite(int arg1, int arg2);
        bool ContainsText(int arg1, int arg2);
        bool IsValid();

    private:
        uint8_t _unknown_8[24];
        int field_32;
        int field_36;
        uint8_t field_40;
        uint8_t _unknown_41[3];
    };

    // 0x10020ba00
    MapElement::MapElement(const CoordGrid& coordGrid1, const CoordGrid& coordGrid2) {
        field_0 = PTR_vtable_100ee8ad0 + 16;
        new (&field_8) rs2lib::CoordGrid(coordGrid2);
        new (&field_20) rs2lib::CoordGrid(coordGrid1);
        field_40 = 0;
    }

    // 0x10020ba40
    uint32_t MapElement::Contains(int arg1, int arg2) {
        bool cVar1 = ContainsSprite(arg1, arg2);
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = ContainsText(arg1, arg2);
        }
        return uVar2;
    }

    // 0x10020ba80
    bool MapElement::ContainsSprite(int arg1, int arg2) {
        unsigned int uVar1;
        int iVar3;
        MapElementType* pMVar4;
        unsigned long uVar5;
        unsigned long uVar6;
        uint64_t uVar7;

        if (IsValid() == '\0') {
            uVar7 = 0;
        } else {
            iVar3 = (**(void (**)(...))(field_0 + 8))(this);
            pMVar4 = configdecoder::MapElementType::List(iVar3);
            iVar3 = (**(void (**)(...))(field_0 + 32))(this);
            uVar5 = (**(void (**)(...))(field_0 + 40))(this);
            uVar1 = pMVar4->field_376;
            if (uVar1 == 2) {
                if (arg1 < field_32) {
                    return 0;
                }
                if (field_32 + iVar3 <= arg1) {
                    return 0;
                }
            } else if (uVar1 == 1) {
                if (arg1 < field_32 - iVar3 / 2) {
                    return 0;
                }
                if (field_32 + iVar3 / 2 < arg1) {
                    return 0;
                }
            } else if (uVar1 == 0) {
                if (field_32 < arg1) {
                    return 0;
                }
                if (arg1 <= field_32 - iVar3) {
                    return 0;
                }
            }
            uVar1 = pMVar4->field_380;
            uVar6 = (unsigned long)uVar1;
            iVar3 = (int)uVar5;
            if (uVar1 == 2) {
                uVar6 = 0;
                if (arg2 < field_36) {
                    return 0;
                }
                if (field_36 + iVar3 <= arg2) {
                    return 0;
                }
            } else if (uVar1 == 1) {
                iVar3 = (int)(((unsigned int)(uVar5 >> 31) & 1) + iVar3) >> 1;
                uVar6 = 0;
                if (arg2 < field_36 - iVar3) {
                    return 0;
                }
                if (field_36 + iVar3 < arg2) {
                    return 0;
                }
            } else if (uVar1 == 0) {
                uVar6 = 0;
                if (field_36 < arg2) {
                    return 0;
                }
                if (arg2 <= field_36 - iVar3) {
                    return 0;
                }
            }
            uVar7 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar7;
    }

    // 0x10020bbb0
    bool MapElement::ContainsText(int arg1, int arg2) {
        long lVar2;
        int iVar3;

        if ((**(void (**)(...))(field_0 + 24))() != '\0') {
            lVar2 = (**(void (**)(...))(field_0 + 16))(this);
            iVar3 = *(int*)(lVar2 + 32) / 2;
            if (arg1 < field_32 - iVar3) {
                return 0;
            }
            if (iVar3 + field_32 < arg1) {
                return 0;
            }
            if (field_36 <= arg2) {
                iVar3 = field_36 + *(int*)(lVar2 + 36);
                return arg2 <= iVar3;
            }
        }
        return 0;
    }

    // 0x10020bc20
    bool MapElement::IsValid() {
        int iVar1 = (**(void (**)(...))(field_0 + 8))();
        return -1 < iVar1;
    }

} // namespace jag::oldscape::rs2lib::worldmap
