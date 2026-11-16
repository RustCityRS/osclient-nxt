// libs/graphics/runetek7/effects/Effect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "Effect.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::OnDisabled();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::OnEndFrame();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::DestroyRenderingResources();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::OnEnabled();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::~Effect();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::RenderDebug(render::Viewport const&) const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Effect::BindConstBufferToShader(render::ShaderProgram const&) const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    Effect::~Effect();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Effect::CreateRenderingResources();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Effect::IsSupported() const;

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    Effect::~Effect();

    // 0x10092a800, 32 bytes, placed by class name and debug map
    // Effect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void Effect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "effects/Effect.cpp",
                        13, (char*)0);
    }

    // 0x100936d40: the linker folded this into Effect::Effect(), which has identical code
    Effect::Effect(RT7Core&);

} // namespace jag::graphics
