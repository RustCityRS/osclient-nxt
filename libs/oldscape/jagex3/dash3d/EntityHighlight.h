// libs/oldscape/jagex3/dash3d/EntityHighlight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class EntityHighlight {
    public:
        uint8_t SaveToFileEnable() const;
        bool HasModelHighlight() const;
        bool HasTileHighlight() const;
        bool HasTileOutline() const;
        bool HasTileFill() const;
        uint8_t IgnoreRebuild() const;
        EntityHighlight();
        uint16_t GetColour() const;
        short GetModelOutlineWidth() const;
        char GetModelTintAlpha() const;
        uint8_t AlwaysOnTop() const;
        bool HasModelOutline() const;
        bool HasModelFill() const;
        uint8_t SnapToGrid() const;
        void TransferTileOptionsToModel();
        uint8_t SouthWestOnly() const;
        unsigned long GetModelOverlayProperties() const;
        uint8_t ShowInsideEdges() const;
        short GetTileOutlineWidth() const;
        char GetTileTintAlpha() const;

    private:
        uint16_t m_colour;
        short field_2;
        char field_4;
        uint8_t _unknown_5[1];
        uint8_t field_6;
        uint8_t _unknown_7[1];
        uint8_t field_8;
        char field_9;
        uint8_t _unknown_10[6];
    };

    // 0x1000157e0
    uint8_t EntityHighlight::SaveToFileEnable() const {
        return (field_8 & 64) >> 6;
    }

    // 0x10002ab80
    bool EntityHighlight::HasModelHighlight() const {
        bool cVar1 = HasModelOutline();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = HasModelFill();
        }
        return uVar2;
    }

    // 0x10002abb0
    bool EntityHighlight::HasTileHighlight() const {
        bool cVar1 = HasTileOutline();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = HasTileFill();
        }
        return uVar2;
    }

    // 0x10002abe0
    bool EntityHighlight::HasTileOutline() const {
        if ((field_8 & 2) == 0) {
            return false;
        }
        return field_2 != 0;
    }

    // 0x10002ac00
    bool EntityHighlight::HasTileFill() const {
        if ((field_8 & 8) == 0) {
            return false;
        }
        return field_4 != '\0';
    }

    // 0x10002ac20
    uint8_t EntityHighlight::IgnoreRebuild() const {
        return (field_9 & 2U) >> 1;
    }

    // 0x10012cc80
    EntityHighlight::EntityHighlight() : m_colour(0), field_2(0) {
        *(uint16_t*)&field_4 = 256;
        field_6 = 1;
        field_8 = 0;
        field_9 = '\0';
    }

    // 0x1001d15b0
    uint16_t EntityHighlight::GetColour() const {
        return m_entityID;
    }

    // 0x1001d15c0
    short EntityHighlight::GetModelOutlineWidth() const {
        short sVar2;

        if (HasModelOutline() == '\0') {
            sVar2 = 0;
        } else {
            sVar2 = field_2;
        }
        return sVar2;
    }

    // 0x1001d15f0
    char EntityHighlight::GetModelTintAlpha() const {
        char cVar1 = HasModelFill();
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = field_4;
        }
        return cVar1;
    }

    // 0x1001d1620
    uint8_t EntityHighlight::AlwaysOnTop() const {
        return (field_8 & 16) >> 4;
    }

    // 0x1001dfa00
    bool EntityHighlight::HasModelOutline() const {
        if ((field_8 & 1) == 0) {
            return false;
        }
        return field_2 != 0;
    }

    // 0x1001dfa20
    bool EntityHighlight::HasModelFill() const {
        if ((field_8 & 4) == 0) {
            return false;
        }
        return field_4 != '\0';
    }

    // 0x1002f0b30
    uint8_t EntityHighlight::SnapToGrid() const {
        return field_8 >> 7;
    }

    // 0x1002f1590
    void EntityHighlight::TransferTileOptionsToModel() {
        unsigned short uVar1;

        uVar1._0_1_ = field_8;
        uVar1._1_1_ = field_9;
        uVar1 = uVar1 >> 1 & 1 | uVar1 >> 1 & 4 | uVar1 & 65530;
        field_8 = (char)uVar1;
        field_9 = (char)(uVar1 >> 8);
    }

    // 0x10030dab0
    uint8_t EntityHighlight::SouthWestOnly() const {
        return (uint8_t)this[9] & 1;
    }

    // 0x10034ac90
    unsigned long EntityHighlight::GetModelOverlayProperties() const {
        uint64_t in_RAX;

        return local_18 = in_RAX;
        local_18 = game::GamepadEvent();
        local_18 = (((uint64_t)local_18._2_6_ << 16) | (uint16_t)m_colour);
        uint16_t uVar2 = GetModelOutlineWidth();
        local_18._0_4_ = (((uint32_t)uVar2 << 16) | (uint16_t)((uint16_t)local_18));
        uint8_t uVar1 = GetModelTintAlpha();
        local_18 = (((uint64_t)0 << 40) | (uint64_t)((((uint64_t)uVar1 << 32) | (uint32_t)((uint32_t)local_18))));
        return local_18;
    }

    // 0x10034aef0
    uint8_t EntityHighlight::ShowInsideEdges() const {
        return (field_8 & 32) >> 5;
    }

    // 0x10034af00
    short EntityHighlight::GetTileOutlineWidth() const {
        short sVar2;

        if (HasTileOutline() == '\0') {
            sVar2 = 0;
        } else {
            sVar2 = field_2;
        }
        return sVar2;
    }

    // 0x10034af30
    char EntityHighlight::GetTileTintAlpha() const {
        char cVar1 = HasTileFill();
        if (!cVar1) {
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

        uint8_t _unknown_0[24];
    };

    // 0x100432570
    EntityHighlightVisualData::EntityHighlightVisualData() {
        new (&field_16) math::Vector4T();
    }

} // namespace jag::game
