// libs/oldscape/rs2lib/worldmap/MapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MapElement {
    public:
        MapElement(CoordGrid const&, CoordGrid const&);
        Contains(int, int);
        ContainsSprite(int, int);
        ContainsText(int, int);
        bool IsValid();

        // data members, from how the methods use this: 44 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        int field_32;        // offset 32
        int field_36;        // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[3];
    };

    // 0x10020ba00, 64 bytes, base-object constructor, placed by class name
    // MapElement::MapElement(CoordGrid const&, CoordGrid const&)
    void MapElement::MapElement(CoordGrid* param_1, CoordGrid* param_2) {
        field_0 = PTR_vtable_100ee8ad0 + 16;
        new (&field_8, param_2) rs2lib::CoordGrid();
        new (&field_20, param_1) rs2lib::CoordGrid();
        field_40 = 0;
    }

    // 0x10020ba40, 64 bytes, placed by class name
    // MapElement::Contains(int, int)
    undefined4 MapElement::Contains(int param_1, int param_2) {
        char cVar1;
        undefined4 uVar2;

        cVar1 = ContainsSprite(this, param_1, param_2);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = ContainsText(this, param_1, param_2);
        }
        return uVar2;
    }

    // 0x10020ba80, 304 bytes, placed by class name
    // MapElement::ContainsSprite(int, int)
    undefined8 MapElement::ContainsSprite(int param_1, int param_2) {
        uint uVar1;
        int iVar3;
        int iVar4;
        long lVar5;
        ulong uVar6;
        ulong uVar7;
        undefined8 uVar8;

        if (IsValid(this) == '\0') {
            uVar8 = 0;
        } else {
            iVar3 = (**(code**)(field_0 + 8))(this);
            lVar5 = configdecoder::MapElementType::List(iVar3);
            iVar4 = (**(code**)(field_0 + 32))(this);
            uVar6 = (**(code**)(field_0 + 40))(this);
            iVar3 = *(int*)(lVar5 + 376);
            if (iVar3 == 2) {
                if (param_1 < field_32) {
                    return 0;
                }
                if (field_32 + iVar4 <= param_1) {
                    return 0;
                }
            } else if (iVar3 == 1) {
                if (param_1 < field_32 - iVar4 / 2) {
                    return 0;
                }
                if (field_32 + iVar4 / 2 < param_1) {
                    return 0;
                }
            } else if (iVar3 == 0) {
                if (field_32 < param_1) {
                    return 0;
                }
                if (param_1 <= field_32 - iVar4) {
                    return 0;
                }
            }
            uVar1 = *(uint*)(lVar5 + 380);
            uVar7 = (ulong)uVar1;
            iVar3 = (int)uVar6;
            if (uVar1 == 2) {
                uVar7 = 0;
                if (param_2 < field_36) {
                    return 0;
                }
                if (field_36 + iVar3 <= param_2) {
                    return 0;
                }
            } else if (uVar1 == 1) {
                iVar3 = (int)(((uint)(uVar6 >> 31) & 1) + iVar3) >> 1;
                uVar7 = 0;
                if (param_2 < field_36 - iVar3) {
                    return 0;
                }
                if (field_36 + iVar3 < param_2) {
                    return 0;
                }
            } else if (uVar1 == 0) {
                uVar7 = 0;
                if (field_36 < param_2) {
                    return 0;
                }
                if (param_2 <= field_36 - iVar3) {
                    return 0;
                }
            }
            uVar8 = CONCAT71((int7)(uVar7 >> 8), 1);
        }
        return uVar8;
    }

    // 0x10020bbb0, 112 bytes, placed by class name
    // MapElement::ContainsText(int, int)
    undefined4 MapElement::ContainsText(int param_1, int param_2) {
        long lVar2;
        int iVar3;

        if ((**(code**)(field_0 + 24))() != '\0') {
            lVar2 = (**(code**)(field_0 + 16))(this);
            iVar3 = *(int*)(lVar2 + 32) / 2;
            if (param_1 < field_32 - iVar3) {
                return 0;
            }
            if (iVar3 + field_32 < param_1) {
                return 0;
            }
            if (field_36 <= param_2) {
                iVar3 = field_36 + *(int*)(lVar2 + 36);
                return CONCAT31((int3)((uint)iVar3 >> 8), param_2 <= iVar3);
            }
        }
        return 0;
    }

    // 0x10020bc20, 32 bytes, placed by class name
    // MapElement::IsValid()
    bool MapElement::IsValid() {
        int iVar1;

        iVar1 = (**(code**)(field_0 + 8))();
        return -1 < iVar1;
    }

} // namespace jag::oldscape::rs2lib::worldmap
