// libs/graphics/runetek7/renderer/Transformable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Transformable {
    public:
        Transformable();
    };

    // 0x1007c5fc0
    Matrix44T<float>* ApplyPrecisionOffset(math::Matrix44T<float>& matrix44) {
        float* pfVar1 = (float*)(*((matrix44 + 48)))[0];
        *pfVar1 = *pfVar1 + 16383.0;
        pfVar1 = (float*)(*((matrix44 + 48)))[2];
        *pfVar1 = *pfVar1 + 16383.0;
        return matrix44;
    }

    // 0x1007c6040
    void DrawableElementPool<TerrainPatch_DE>::Release() {
        GetDrawableElementPool();
        if (((FastPool<TerrainPatch_DE, int>*)&GetDrawableElementPool()::pool)->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            ((FastPool<TerrainPatch_DE, int>*)&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x100866160
    Transformable::Transformable() {
        field_0 = PTR_vtable_100ee8750 + 16;
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x1007c6e80
    FixedPrimitiveBatchData<256ul>::FixedPrimitiveBatchData() : eastl::fixed_vector<int, 256ul>() {
        new ((this + 1064)) eastl::fixed_vector<int, 256ul>();
    }

} // namespace jag::render
