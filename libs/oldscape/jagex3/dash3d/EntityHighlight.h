// libs/oldscape/jagex3/dash3d/EntityHighlight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class EntityHighlight {
    public:
        byte SaveToFileEnable() const;
        HasModelHighlight() const;
        HasTileHighlight() const;
        bool HasTileOutline() const;
        bool HasTileFill() const;
        byte IgnoreRebuild() const;
        EntityHighlight();
        GetColour() const;
        short GetModelOutlineWidth() const;
        char GetModelTintAlpha() const;
        byte AlwaysOnTop() const;
        bool HasModelOutline() const;
        bool HasModelFill() const;
        byte SnapToGrid() const;
        void TransferTileOptionsToModel();
        SouthWestOnly() const;
        ulong GetModelOverlayProperties() const;
        byte ShowInsideEdges() const;
        short GetTileOutlineWidth() const;
        char GetTileTintAlpha() const;

        // data members, from how the methods use this: 16 bytes
        undefined2 m_colour; // offset 0
        short field_2;       // offset 2
        char field_4;        // offset 4
        char _unknown_5[1];
        undefined1 field_6; // offset 6
        char _unknown_7[1];
        byte field_8; // offset 8
        char field_9; // offset 9
        char _unknown_10[6];
    };

    // 0x1000157e0, 16 bytes, inline, placed by class name and debug map
    // EntityHighlight::SaveToFileEnable() const
    byte EntityHighlight::SaveToFileEnable() {
        return (field_8 & 64) >> 6;
    }

    // 0x10002ab80, 48 bytes, inline, placed by class name
    // EntityHighlight::HasModelHighlight() const
    undefined4 EntityHighlight::HasModelHighlight() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = HasModelOutline(this);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = HasModelFill(this);
        }
        return uVar2;
    }

    // 0x10002abb0, 48 bytes, inline, placed by class name
    // EntityHighlight::HasTileHighlight() const
    undefined4 EntityHighlight::HasTileHighlight() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = HasTileOutline(this);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = HasTileFill(this);
        }
        return uVar2;
    }

    // 0x10002abe0, 32 bytes, inline, placed by class name
    // EntityHighlight::HasTileOutline() const
    bool EntityHighlight::HasTileOutline() {
        if ((field_8 & 2) == 0) {
            return false;
        }
        return field_2 != 0;
    }

    // 0x10002ac00, 32 bytes, inline, placed by class name
    // EntityHighlight::HasTileFill() const
    bool EntityHighlight::HasTileFill() {
        if ((field_8 & 8) == 0) {
            return false;
        }
        return field_4 != '\0';
    }

    // 0x10002ac20, 16 bytes, inline, placed by class name
    // EntityHighlight::IgnoreRebuild() const
    byte EntityHighlight::IgnoreRebuild() {
        return (field_9 & 2U) >> 1;
    }

    // 0x10012cc70, 16 bytes, complete-object constructor, inline, placed by class name
    // EntityHighlight::EntityHighlight(): jumps straight to the base-object constructor

    // 0x10012cc80, 32 bytes, base-object constructor, inline, placed by class name
    // EntityHighlight::EntityHighlight()
    void EntityHighlight::EntityHighlight() {
        m_colour = 0;
        field_2 = 0;
        *(undefined2*)&field_4 = 256;
        field_6 = 1;
        field_8 = 0;
        field_9 = '\0';
    }

    // 0x1001d15b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EntityHighlight::GetColour() const
    /* game::EntityCombinedID::GetEntityID() const */

    undefined2 game::EntityCombinedID::GetEntityID() {
        return (short)m_entityID;
    }

    // 0x1001d15c0, 48 bytes, inline, placed by class name
    // EntityHighlight::GetModelOutlineWidth() const
    short EntityHighlight::GetModelOutlineWidth() {
        short sVar2;

        if (HasModelOutline(this) == '\0') {
            sVar2 = 0;
        } else {
            sVar2 = field_2;
        }
        return sVar2;
    }

    // 0x1001d15f0, 48 bytes, inline, placed by class name
    // EntityHighlight::GetModelTintAlpha() const
    char EntityHighlight::GetModelTintAlpha() {
        char cVar1;

        cVar1 = HasModelFill(this);
        if (cVar1 == '\0') {
            cVar1 = '\0';
        } else {
            cVar1 = field_4;
        }
        return cVar1;
    }

    // 0x1001d1620, 16 bytes, inline, placed by class name
    // EntityHighlight::AlwaysOnTop() const
    byte EntityHighlight::AlwaysOnTop() {
        return (field_8 & 16) >> 4;
    }

    // 0x1001dfa00, 32 bytes, inline, placed by class name
    // EntityHighlight::HasModelOutline() const
    bool EntityHighlight::HasModelOutline() {
        if ((field_8 & 1) == 0) {
            return false;
        }
        return field_2 != 0;
    }

    // 0x1001dfa20, 32 bytes, inline, placed by class name
    // EntityHighlight::HasModelFill() const
    bool EntityHighlight::HasModelFill() {
        if ((field_8 & 4) == 0) {
            return false;
        }
        return field_4 != '\0';
    }

    // 0x1002f0b30, 16 bytes, inline, placed by class name
    // EntityHighlight::SnapToGrid() const
    byte EntityHighlight::SnapToGrid() {
        return field_8 >> 7;
    }

    // 0x1002f1590, 48 bytes, inline, placed by class name
    // EntityHighlight::TransferTileOptionsToModel()
    void EntityHighlight::TransferTileOptionsToModel() {
        ushort uVar1;

        uVar1._0_1_ = field_8;
        uVar1._1_1_ = field_9;
        uVar1 = uVar1 >> 1 & 1 | uVar1 >> 1 & 4 | uVar1 & 65530;
        field_8 = (char)uVar1;
        field_9 = (char)(uVar1 >> 8);
    }

    // 0x10030dab0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EntityHighlight::SouthWestOnly() const
    /* Json::Value::isAllocated() const */

    byte Json::Value::isAllocated() {
        return (byte)this[9] & 1;
    }

    // 0x10034ac90, 80 bytes, inline, placed by class name
    // EntityHighlight::GetModelOverlayProperties() const
    ulong EntityHighlight::GetModelOverlayProperties() {
        undefined1 uVar1;
        undefined2 uVar2;
        undefined8 in_RAX;
        undefined8 local_18;

        local_18 = in_RAX;
        new (&local_18) game::GamepadEvent();
        local_18 = CONCAT62(local_18._2_6_, m_colour);
        uVar2 = GetModelOutlineWidth(this);
        local_18._0_4_ = CONCAT22(uVar2, (undefined2)local_18);
        uVar1 = GetModelTintAlpha(this);
        local_18 = CONCAT35(0, CONCAT14(uVar1, (undefined4)local_18));
        return local_18;
    }

    // 0x10034aef0, 16 bytes, inline, placed by class name
    // EntityHighlight::ShowInsideEdges() const
    byte EntityHighlight::ShowInsideEdges() {
        return (field_8 & 32) >> 5;
    }

    // 0x10034af00, 48 bytes, inline, placed by class name
    // EntityHighlight::GetTileOutlineWidth() const
    short EntityHighlight::GetTileOutlineWidth() {
        short sVar2;

        if (HasTileOutline(this) == '\0') {
            sVar2 = 0;
        } else {
            sVar2 = field_2;
        }
        return sVar2;
    }

    // 0x10034af30, 48 bytes, inline, placed by class name
    // EntityHighlight::GetTileTintAlpha() const
    char EntityHighlight::GetTileTintAlpha() {
        char cVar1;

        cVar1 = HasTileFill(this);
        if (cVar1 == '\0') {
            cVar1 = '\0';
        } else {
            cVar1 = field_4;
        }
        return cVar1;
    }

} // namespace jag::oldscape::dash3d

namespace jag::game {
    class EntityHighlightVisualData {
    public:
        EntityHighlightVisualData();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x100432570, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // EntityHighlightVisualData::EntityHighlightVisualData()
    void EntityHighlightVisualData::EntityHighlightVisualData() {
        new (&field_16) math::Vector4T<float>();
    }

} // namespace jag::game
