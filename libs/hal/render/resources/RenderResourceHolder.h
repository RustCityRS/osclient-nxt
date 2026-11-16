// libs/hal/render/resources/RenderResourceHolder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::render {
    class RenderResourceHolder {
    public:
        // virtual methods in vtable order
        virtual CreateRenderingResources();
        DestroyRenderingResources();
        RenderResourceHolder();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderResourceHolder::CreateRenderingResources();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderResourceHolder::DestroyRenderingResources();

    // 0x10043cdb0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // RenderResourceHolder::RenderResourceHolder()
    void RenderResourceHolder::RenderResourceHolder() {
        field_0 = PTR_vtable_100ee8680 + 16;
    }

} // namespace jag::render
