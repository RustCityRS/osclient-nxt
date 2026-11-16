// libs/graphics/runetek7/effects/debug/DebugTerrainSpecularEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DebugTerrainSpecularEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugTerrainSpecularEffect();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        DebugTerrainSpecularEffect(RT7Core&);
        static float /* 4 bytes */ m_exponentLimitMin; // = -1.0f
        static float /* 4 bytes */ m_exponentOverride; // = -1.0f

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
    };

    // 0x10093dec0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DebugTerrainSpecularEffect::DebugTerrainSpecularEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x10093dee0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugTerrainSpecularEffect::DebugTerrainSpecularEffect(RT7Core&)
    void DebugTerrainSpecularEffect::DebugTerrainSpecularEffect(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f1a1c0;
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x10093efd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ResourceDataT<unsigned char>::ResourceDataT(ResourceDataT<unsigned char>&&): jumps straight to the base-object constructor

    // 0x10093efe0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResourceDataT<unsigned char>::ResourceDataT(ResourceDataT<unsigned char>&&)
    /* ResourceDataT<unsigned char
   const>::ResourceDataT(ResourceDataT<unsigned char const>&&) */

    void ResourceDataT<unsigned char const>::ResourceDataT(ResourceDataT* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined4*)(this + 12) = *(undefined4*)(param_1 + 12);
        *(ResourceDataT*)(this + 16) = param_1[16];
        param_1[16] = (ResourceDataT)0;
    }

} // namespace jag::render
