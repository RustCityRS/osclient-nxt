// libs/graphics/runetek7/materials/shaders/ShaderSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ShaderSource {
    public:
        // virtual methods in vtable order
        virtual ~ShaderSource();
        void GetOptionalEffects() const;
        void GetMandatoryEffects() const;
        ShaderSource(const EffectList& effectList1, const EffectList& effectList2);
        void AppendRelevantEffectsAsStringDefines(
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>& basic_stringstream,
            const EffectList& effectList) const;

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100852eb0
    ShaderSource::ShaderSource(const EffectList& effectList1, const EffectList& effectList2) {
        uint64_t uVar1 = *(uint64_t*)(effectList1 + 8);
        field_8 = *(uint64_t*)effectList1;
        field_16 = uVar1;
        uVar1 = *(uint64_t*)(effectList2 + 8);
        field_24 = *(uint64_t*)effectList2;
        field_32 = uVar1;
    }

} // namespace jag::graphics
