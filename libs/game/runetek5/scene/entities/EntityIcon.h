// libs/game/runetek5/scene/entities/EntityIcon.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class EntityIcon {
    public:
        ~EntityIcon();
        EntityIcon(int, math::Point<int> const&);
        void LoadSprite(graphics::RT7Core&);
        IsMouseOver(game::Mouse&) const;

        // data members, from how the methods use this: 32 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        int field_8;  // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
    };

    // 0x1000694d0: the linker folded this into oldscape::MinimapElement::~MinimapElement(), which has identical code
    EntityIcon::~EntityIcon();

    // 0x1000782e0: the linker folded this into oldscape::MinimapElement::~MinimapElement(), which has identical code
    EntityIcon::~EntityIcon();

    // 0x100428110, 48 bytes, base-object constructor, placed by class name
    // EntityIcon::EntityIcon(int, math::Point<int> const&)
    void EntityIcon::EntityIcon(int param_1, Point* param_2) {
        new (this) math::Point<int>(param_2);
        field_8 = param_1;
        new (field_16, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100428140, 16 bytes, complete-object constructor, placed by class name
    // EntityIcon::EntityIcon(int, math::Point<int> const&): jumps straight to the base-object constructor

    // 0x100428150, 192 bytes, placed by class name
    // EntityIcon::LoadSprite(graphics::RT7Core&)
    void EntityIcon::LoadSprite(RT7Core* param_1) {
        undefined1* this_00;
        int iVar1;
        TextureManager* this_01;
        undefined8 uVar2;
        SpriteAtlasReference* this_02;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        shared_ptr local_38;

        this_01 = (TextureManager*)param_1->GetTextureManager();
        uVar2 = this_01->GetSpriteAtlasManager();
        this_00 = field_16;
        if (!this_00->operator_cast_to_bool()) {
            iVar1 = field_8;
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48,
                                                                                     (_func_decltype_nullptr*)0);
            graphics::SpriteAtlasManager::GetSpriteReference(&local_38, uVar2, (long)iVar1, local_48, 2);
            shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)this_00,
                                                                  &local_38);
            local_38.~shared_ptr();
            local_48->~shared_ptr();
        }
        this_02 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
        this_02->IsReady();
    }

    // 0x100428220, 208 bytes, placed by class name
    // EntityIcon::IsMouseOver(game::Mouse&) const
    undefined4 EntityIcon::IsMouseOver(Mouse* param_1) {
        float fVar1;
        int iVar2;
        long lVar3;
        vector* pvVar4;
        float* pfVar5;
        Vector2T* pVVar6;
        Vector2T<int> local_28[8];

        lVar3 = param_1->GetOldestClick();
        math::Vector2T<int>::Vector2T(local_28);
        if (lVar3 == 0) {
            pVVar6 = (Vector2T*)param_1->GetScaledMousePosition();
        } else {
            pVVar6 = (Vector2T*)(lVar3 + 12);
        }
        math::Vector2T<float>::operator=((Vector2T<float>*)local_28, pVVar6);
        pvVar4 = local_28->SSOBeginPtr(pVVar6);
        fVar1 = *(float*)pvVar4;
        iVar2 = GetX();
        if (iVar2 <= (int)fVar1) {
            pvVar4 = local_28->SSOBeginPtr(pVVar6);
            fVar1 = *(float*)pvVar4;
            iVar2 = GetX();
            if ((int)fVar1 <= iVar2 + 18) {
                pfVar5 = (float*)local_28->y();
                fVar1 = *pfVar5;
                iVar2 = GetZ();
                if (iVar2 <= (int)fVar1) {
                    pfVar5 = (float*)local_28->y();
                    fVar1 = *pfVar5;
                    iVar2 = GetZ();
                    return CONCAT31((int3)((uint)(iVar2 + 18) >> 8), (int)fVar1 <= iVar2 + 18);
                }
            }
        }
        return 0;
    }

} // namespace jag
