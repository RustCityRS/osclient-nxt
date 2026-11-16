// libs/hal/render/resources/RenderResourceHolder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::render {
    class RenderResourceHolder {
    public:
        // virtual methods in vtable order
        virtual void CreateRenderingResources();
        void DestroyRenderingResources();
        RenderResourceHolder();
    };

    // 0x100009e70: RenderResourceHolder::CreateRenderingResources() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: RenderResourceHolder::DestroyRenderingResources() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10043cdb0
    RenderResourceHolder::RenderResourceHolder() {}

} // namespace jag::render
