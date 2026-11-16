// libs/graphics/runetek7/terrain/TerrainMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TerrainMaterial.h"

// 0x1007b43c0
void jag::graphics::PLAIN_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))PLAIN_SHAPE)();
}

// 0x1007b43e0
void jag::graphics::DIAGONAL_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))DIAGONAL_SHAPE)();
}

// 0x1007b4400
void jag::graphics::LEFT_SEMI_DIAGONAL_SMALL_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))LEFT_SEMI_DIAGONAL_SMALL_SHAPE)();
}

// 0x1007b4420
void jag::graphics::RIGHT_SEMI_DIAGONAL_SMALL_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))RIGHT_SEMI_DIAGONAL_SMALL_SHAPE)();
}

// 0x1007b4440
void jag::graphics::LEFT_SEMI_DIAGONAL_BIG_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))LEFT_SEMI_DIAGONAL_BIG_SHAPE)();
}

// 0x1007b4460
void jag::graphics::RIGHT_SEMI_DIAGONAL_BIG_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))RIGHT_SEMI_DIAGONAL_BIG_SHAPE)();
}

// 0x1007b4480
void jag::graphics::HALF_SQUARE_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))HALF_SQUARE_SHAPE)();
}

// 0x1007b44a0
void jag::graphics::CORNER_SMALL_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))CORNER_SMALL_SHAPE)();
}

// 0x1007b44c0
void jag::graphics::CORNER_BIG_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))CORNER_BIG_SHAPE)();
}

// 0x1007b44e0
void jag::graphics::FAN_SMALL_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))FAN_SMALL_SHAPE)();
}

// 0x1007b4500
void jag::graphics::FAN_BIG_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))FAN_BIG_SHAPE)();
}

// 0x1007b4520
void jag::graphics::TRAPEZIUM_SHAPE(void) {
    ___tls_init();
    (*(void (*)(...))TRAPEZIUM_SHAPE)();
}

namespace jag::graphics {
    // 0x1007b3e60
    TerrainMaterial::TerrainMaterial() : RenderMaterial() {
        new ((field_528 + 8)) shared_ptr();
    }

    // 0x1007b3ec0
    TerrainMaterial::TerrainMaterial(TerrainMaterial&& terrainMaterial) : RenderMaterial(terrainMaterial) {
        ((field_528 + 8))
            ->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((terrainMaterial.field_528 + 8)));
    }

    // 0x1007b3f20
    TerrainMaterial::TerrainMaterial(const TerrainMaterial& terrainMaterial) : RenderMaterial(terrainMaterial) {
        new ((field_528 + 8)) shared_ptr((terrainMaterial.field_528 + 8));
    }

    // 0x1007b3f80
    void TerrainMaterial::InitRenderPassEffects() {
        initializer_list<EffectType>* local_88;
        uint64_t uStack_80;

        bool arg2 = (*((field_528 + 8))) != nullptr;
        auto pEVar3 = GetRenderPassEffect(4);
        uint64_t local_58 = 3616421446590472223;
        uint64_t uStack_50 = 4989474108770105710;
        uint8_t local_68 = 119;
        uint64_t uStack_67 = 8232277269106451;
        uint8_t uStack_60 = 21;
        uint64_t uStack_5f = 8505934042634006;
        uint64_t local_78 = 506097522914230528;
        uint8_t uStack_70 = 8;
        uint64_t uStack_6f = 4804934785305354;
        uint8_t local_48 = 116;
        EffectList* local_98 = (EffectList*)&local_78;
        uint64_t local_90 = 49;
        new (&local_88) EffectList(local_98);
        *(initializer_list<EffectType>**)pEVar3 = local_88;
        *(uint64_t*)(pEVar3 + 8) = uStack_80;
        pEVar3->Set(63, arg2);
        pEVar3->Set(26, false);
        pEVar3->Set(56, false);
        int iVar2 = GetEndPosition();
        pEVar3->Set(54, iVar2 != -1);
        uint8_t* this_00 = field_528;
        this_00->AddFormatType(4);
        pEVar3 = (EffectList*)GetRenderPassEffect(2);
        auto puVar4 = GetRenderPassEffect(4);
        uint64_t uVar1 = puVar4[1];
        *(uint64_t*)pEVar3 = *puVar4;
        *(uint64_t*)(pEVar3 + 8) = uVar1;
        pEVar3->Add(87);
        this_00->AddFormatType(2);
        pEVar3 = (EffectList*)GetRenderPassEffect(3);
        local_98 = (EffectList*)(((uint64_t)local_98._7_1_ << 56) | (uint64_t)25742063727099727);
        uStack_80 = 7;
        local_88 = (initializer_list<EffectType>*)&local_98;
        new (&local_78) EffectList(local_88);
        *(uint64_t*)pEVar3 = local_78;
        *(unsigned long*)(pEVar3 + 8) = (((uint64_t)uStack_6f << 8) | (uint8_t)uStack_70);
        pEVar3->Set(63, arg2);
        this_00->AddFormatType(3);
        puVar4 = (uint64_t*)GetRenderPassEffect(9);
        local_98._0_1_ = (initializer_list<EffectType>)79;
        uStack_80 = 1;
        local_88 = (initializer_list<EffectType>*)&local_98;
        new (&local_78) EffectList(local_88);
        *puVar4 = local_78;
        puVar4[1] = (((uint64_t)uStack_6f << 8) | (uint8_t)uStack_70);
        this_00->AddFormatType(9);
        puVar4 = (uint64_t*)GetRenderPassEffect(0);
        local_98 = (EffectList*)(((uint64_t)local_98._1_7_ << 8) | (uint8_t)79);
        uStack_80 = 1;
        local_88 = (initializer_list<EffectType>*)&local_98;
        new (&local_78) EffectList(local_88);
        *puVar4 = local_78;
        puVar4[1] = (((uint64_t)uStack_6f << 8) | (uint8_t)uStack_70);
        this_00->AddFormatType(0);
        pEVar3 = (EffectList*)GetRenderPassEffect(5);
        local_68 = 63;
        uStack_67 = 17525223613470237;
        uStack_60 = 69;
        local_78 = 722834354493063424;
        uStack_70 = 11;
        uStack_6f = 22886845919662092;
        local_90 = 25;
        local_98 = (EffectList*)&local_78;
        new (&local_88) EffectList(local_98);
        *(initializer_list<EffectType>**)pEVar3 = local_88;
        *(uint64_t*)(pEVar3 + 8) = uStack_80;
        pEVar3->Set(63, arg2);
        pEVar3->Set(56, false);
        this_00->AddFormatType(5);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007b46e0
    Vector3T<unsigned char> Vector3TFromVector3<unsigned char>(const Vector3T<float>& vector3) {
        unsigned long in_RAX;

        unsigned long local_28 = in_RAX;
        auto pfVar3 = vector3.SSOBeginPtr();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)vector3.y();
        float fVar2 = *pfVar3;
        pfVar3 = (float*)vector3.second();
        new (&local_28) Vector3T((schar)(int)fVar1, (schar)(int)fVar2, (schar)(int)*pfVar3);
        return local_28 & 16777215;
    }

} // namespace jag::math
