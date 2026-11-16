// libs/oldscape/jagex3/dash3d/WorldRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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

    // 0x100301d40, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // WorldRenderer<SoftwarePix3D>::WorldRenderer()
    void WorldRenderer<SoftwarePix3D>::WorldRenderer() {
        *(undefined**)this = PTR_vtable_100ee8990 + 16;
    }

    // 0x100368000, 32 bytes, base-object constructor, inline, placed by class name
    // WorldRenderer<NXTPix3D>::WorldRenderer()
    void WorldRenderer<NXTPix3D>::WorldRenderer() {
        *(undefined**)this = PTR_vtable_100ee8998 + 16;
    }

} // namespace jag::oldscape::dash3d
