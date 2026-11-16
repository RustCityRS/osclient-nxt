// libs/hal/render/shaders/Shader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "Shader.h"

namespace jag::render {
    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    int Shader::GetNativeShader() const;

    // 0x100be8770, 112 bytes, base-object constructor, placed by class name
    // Shader::Shader()
    void Shader::Shader() {
        field_0 = &PTR__Shader_100f28280;
        new (&field_8) eastl::string();
        new (&field_40) std::atomic<ShaderCompileState>();
        field_41 = '\0';
        new (field_48) game::EntityHighlightGlobalState::RadialHighlightState();
        m_nativeShader = 0;
        new (&field_80) std::mutex();
    }

    // 0x100be8830, 48 bytes, placed by class name and debug map
    // Shader::Destroy()
    void Shader::Destroy() {
        ReleaseNativeResources(this);
        field_48->Unregister();
    }

} // namespace jag::render
