// libs/graphics/runetek7/renderer/Transformable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Transformable {
    public:
        Transformable();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1007c5fc0, 80 bytes, inline, placed by debug map only (low confidence)
    // ApplyPrecisionOffset(math::Matrix44T<float>&)
    Matrix44T* ApplyPrecisionOffset(Matrix44T* param_1) {
        float* pfVar1;

        pfVar1 = (float*)math::Vector4T<float>::operator[]((Vector4T<float>*)&param_1->field_48, 0);
        *pfVar1 = *pfVar1 + 16383.0;
        pfVar1 = (float*)math::Vector4T<float>::operator[]((Vector4T<float>*)&param_1->field_48, 2);
        *pfVar1 = *pfVar1 + 16383.0;
        return param_1;
    }

    // 0x1007c6040, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<TerrainPatch_DE>::Release()
    void DrawableElementPool<TerrainPatch_DE>::Release() {
        char cVar1;

        GetDrawableElementPool();
        cVar1 = (&GetDrawableElementPool()::pool)->is_owner(this);
        if (cVar1 == '\0') {
            if (this != (DrawableElementPool<TerrainPatch_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            (&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x100866160, 32 bytes, base-object constructor, inline, placed by class name
    // Transformable::Transformable()
    void Transformable::Transformable() {
        field_0 = PTR_vtable_100ee8750 + 16;
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x1007c6e80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FixedPrimitiveBatchData<256ul>::FixedPrimitiveBatchData()
    void FixedPrimitiveBatchData<256ul>::FixedPrimitiveBatchData() {
        new (this) eastl::fixed_vector<int, 256ul, true, eastl::allocator>();
        new ((this + 1064)) eastl::fixed_vector<int, 256ul, true, eastl::allocator>();
    }

} // namespace jag::render
