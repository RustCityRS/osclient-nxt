// libs/graphics/runetek7/materials/shaders/ShaderSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "ShaderSource.h"

namespace jag::graphics {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    ShaderSource::GetOptionalEffects() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ShaderSource::GetMandatoryEffects() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ShaderSource::~ShaderSource();

    // 0x1008926b0, 96 bytes, placed by class name and debug map
    // ShaderSource::AppendRelevantEffectsAsStringDefines(std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, EffectList const&) const
    /* ShaderSource::AppendRelevantEffectsAsStringDefines(std::basic_stringstream<char,
   std::char_traits<char>, BucketAllocatorSTL<char> >&, EffectList const&) const
    */

    void ShaderSource::AppendRelevantEffectsAsStringDefines(basic_stringstream* param_1, EffectList* param_2) {
        undefined8* puVar1;
        EffectList* pEVar2;
        undefined8 local_38;
        undefined8 uStack_30;

        puVar1 = (undefined8*)second();
        local_38 = *puVar1;
        uStack_30 = puVar1[1];
        pEVar2 = (EffectList*)second();
        EffectList::operator|=((EffectList*)&local_38, pEVar2);
        EffectList::operator&=((EffectList*)&local_38, param_2);
        local_38.AppendAsStringDefines(param_1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ShaderSource::~ShaderSource();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ShaderSource::~ShaderSource();

} // namespace jag::graphics
