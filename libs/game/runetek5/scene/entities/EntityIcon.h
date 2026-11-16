// libs/game/runetek5/scene/entities/EntityIcon.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class EntityIcon {
    public:
        ~EntityIcon();
        EntityIcon(int arg1, const math::Point<int>& point);
        void LoadSprite(graphics::RT7Core& rt7Core);
        bool IsMouseOver(game::Mouse& mouse) const;

    private:
        unsigned int field_0;
        unsigned int field_4;
        int field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
    };

    // 0x1000782e0: EntityIcon::~EntityIcon() has the same machine code as oldscape::MinimapElement::~MinimapElement()

    // 0x100428110
    EntityIcon::EntityIcon(int arg1, const math::Point<int>& point) : math::Point(point), field_8(arg1) {
        new (field_16) shared_ptr();
    }

    // 0x100428150
    void EntityIcon::LoadSprite(graphics::RT7Core& rt7Core) {
        int iVar1;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        ReturnValue local_38;

        SpriteAtlasManager* this_02 = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
        uint8_t* this_00 = field_16;
        if (this_00->operator_cast_to_bool() == '\0') {
            iVar1 = field_8;
            local_48 = shared_ptr();
            local_38 = this_02->GetSpriteReference((long)iVar1, local_48, 2);
            *this_00 = local_38;
        }
        ((SpriteAtlasReference*)(*this_00).operator->())->IsReady();
    }

    // 0x100428220
    bool EntityIcon::IsMouseOver(game::Mouse& mouse) const {
        Vector2T<float>* vector2;

        long lVar3 = mouse.GetOldestClick();
        Vector2T<int> local_28;
        if (lVar3 == 0) {
            vector2 = (Vector2T<float>*)mouse.GetScaledMousePosition();
        } else {
            vector2 = (Vector2T<float>*)(lVar3 + 12);
        }
        local_28 = *vector2;
        auto pfVar4 = local_28.SSOBeginPtr();
        float fVar1 = *pfVar4;
        int iVar2 = GetX();
        if (iVar2 <= (int)fVar1) {
            pfVar4 = (float*)local_28.SSOBeginPtr();
            fVar1 = *pfVar4;
            iVar2 = GetX();
            if ((int)fVar1 <= iVar2 + 18) {
                pfVar4 = (float*)local_28.y();
                fVar1 = *pfVar4;
                iVar2 = GetZ();
                if (iVar2 <= (int)fVar1) {
                    pfVar4 = (float*)local_28.y();
                    fVar1 = *pfVar4;
                    iVar2 = GetZ();
                    return (int)fVar1 <= iVar2 + 18;
                }
            }
        }
        return 0;
    }

} // namespace jag
