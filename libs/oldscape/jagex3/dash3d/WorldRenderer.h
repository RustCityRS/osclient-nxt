// libs/oldscape/jagex3/dash3d/WorldRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    template <typename...> // 2 instantiations, e.g. <NXTPix3D>, <SoftwarePix3D>
    class WorldRenderer {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual void __pure_slot_1() = 0;
        WorldRenderer();
    };

    // 0x100301d40
    WorldRenderer<SoftwarePix3D>::WorldRenderer() {}

    // 0x100368000
    WorldRenderer<NXTPix3D>::WorldRenderer() {}

} // namespace jag::oldscape::dash3d
