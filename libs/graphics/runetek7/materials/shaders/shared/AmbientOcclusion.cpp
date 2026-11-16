// libs/graphics/runetek7/materials/shaders/shared/AmbientOcclusion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/game/runetek5/clientoptions/options/ClientOptions_AmbientOcclusion.h"

namespace jag::game::option {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AmbientOcclusion::GetDefault();

    // 0x100604880, 32 bytes, deleting destructor, inline, placed by class name
    // AmbientOcclusion::~AmbientOcclusion()
    void AmbientOcclusion::~AmbientOcclusion() {
        ~AmbientOcclusion(this);
        operator_delete(this);
    }

    // 0x1006091b0, 16 bytes, complete-object destructor, inline, placed by class name
    // AmbientOcclusion::~AmbientOcclusion(): jumps straight to the base-object destructor

    // 0x100611380, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AmbientOcclusion::~AmbientOcclusion()
    /* Option<graphics::SSAOPass::Mode>::~Option() */

    void Option<graphics::SSAOPass::Mode>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option

namespace jag::graphics {
    // 0x1008532b0, 32 bytes, placed by class name and debug map
    // AmbientOcclusion::BuildUniforms()
    AmbientOcclusion* AmbientOcclusion::BuildUniforms() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\nuniform sampler2D uSSAOMap;\n");
        return this;
    }

} // namespace jag::graphics
