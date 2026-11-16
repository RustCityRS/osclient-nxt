// libs/hal/render/shaders/Shader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "Shader.h"

namespace jag::render {
    // 0x10012dc00: Shader::GetNativeShader() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x100be8770
    Shader::Shader() {
        new (&field_8) eastl::string();
        field_41 = '\0';
        new (field_48) game::EntityHighlightGlobalState::RadialHighlightState();
        m_nativeShader = 0;
        new (&field_80) std::mutex();
    }

    // 0x100be8830
    void Shader::Destroy() {
        ReleaseNativeResources();
        field_48->Unregister();
    }

} // namespace jag::render
