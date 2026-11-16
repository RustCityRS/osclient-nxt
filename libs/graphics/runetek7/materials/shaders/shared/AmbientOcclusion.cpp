// libs/graphics/runetek7/materials/shaders/shared/AmbientOcclusion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/game/runetek5/clientoptions/options/ClientOptions_AmbientOcclusion.h"

namespace jag::game::option {
    // 0x100029ea0: AmbientOcclusion::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100611380
    AmbientOcclusion::~AmbientOcclusion() {
        ~Option(this);
    }

} // namespace jag::game::option

namespace jag::graphics {
    // 0x1008532b0
    auto AmbientOcclusion::BuildUniforms() {
        auto result;
        result.basic_string<decltype(nullptr)>("\nuniform sampler2D uSSAOMap;\n");
        return result;
    }

} // namespace jag::graphics
