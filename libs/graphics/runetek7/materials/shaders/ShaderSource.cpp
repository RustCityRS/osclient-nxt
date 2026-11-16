// libs/graphics/runetek7/materials/shaders/ShaderSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

#include "ShaderSource.h"

namespace jag::graphics {
    // 0x100009d00: ShaderSource::GetOptionalEffects() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100009d50: ShaderSource::GetMandatoryEffects() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009e70: ShaderSource::~ShaderSource() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1008926b0
    void ShaderSource::AppendRelevantEffectsAsStringDefines(
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>& basic_stringstream,
        const EffectList& effectList) const {
        EffectList* effectList_00;

        auto puVar1 = second();
        uint64_t local_38 = *puVar1;
        uint64_t uStack_30 = puVar1[1];
        effectList_00 = (EffectList*)second();
        local_38 |= *effectList_00;
        local_38 &= effectList;
        local_38.AppendAsStringDefines(basic_stringstream);
    }

} // namespace jag::graphics
