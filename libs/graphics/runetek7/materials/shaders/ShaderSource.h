// libs/graphics/runetek7/materials/shaders/ShaderSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ShaderSource {
    public:
        // virtual methods in vtable order
        virtual ~ShaderSource();
        GetOptionalEffects() const;
        GetMandatoryEffects() const;
        ShaderSource(EffectList const&, EffectList const&);
        void AppendRelevantEffectsAsStringDefines(
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>&, EffectList const&) const;

        // data members, from how the methods use this: 40 bytes
        undefined* field_0;  // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100852eb0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // ShaderSource::ShaderSource(EffectList const&, EffectList const&)
    void ShaderSource::ShaderSource(EffectList* param_1, EffectList* param_2) {
        undefined8 uVar1;

        field_0 = PTR_vtable_100ee8738 + 16;
        uVar1 = *(undefined8*)(param_1 + 8);
        field_8 = *(undefined8*)param_1;
        field_16 = uVar1;
        uVar1 = *(undefined8*)(param_2 + 8);
        field_24 = *(undefined8*)param_2;
        field_32 = uVar1;
    }

} // namespace jag::graphics
