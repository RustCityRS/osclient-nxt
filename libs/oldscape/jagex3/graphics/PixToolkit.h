// libs/oldscape/jagex3/graphics/PixToolkit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics {
    template <typename...> // 2 instantiations, e.g. <NXTPix2D, dash3d::NXTPix3D>, <NXTPix2D, dash3d::SoftwarePix3D>
    class PixToolkit {
    public:
        void PrepareRender();
        PixToolkit();
    };

    // 0x1000e3050, 48 bytes, inline, placed by class name and debug map
    // PixToolkit<NXTPix2D, dash3d::NXTPix3D>::PrepareRender()
    void graphics::PixToolkit<NXTPix2D, dash3d::NXTPix3D>::PrepareRender(PixToolkit<NXTPix2D, dash3d::NXTPix3D>* this) {
        long* plVar1;
        undefined8* puVar2;

        plVar1 = (long*)(**(code**)(*(long*)this + 8))();
        (**(code**)(*plVar1 + 56))(plVar1);
        puVar2 = (undefined8*)(*(code*)**(undefined8**)this)(this);
        (**(code**)*puVar2)(puVar2);
    }

    // 0x1002175f0, 32 bytes, base-object constructor, inline, placed by class name
    // PixToolkit<NXTPix2D, dash3d::SoftwarePix3D>::PixToolkit()
    void graphics::PixToolkit<NXTPix2D, dash3d::SoftwarePix3D>::PixToolkit(
        PixToolkit<NXTPix2D, dash3d::SoftwarePix3D>* this) {
        *(undefined**)this = PTR_vtable_100ee8c40 + 16;
    }

    // 0x10031b720, 32 bytes, base-object constructor, inline, placed by class name
    // PixToolkit<NXTPix2D, dash3d::NXTPix3D>::PixToolkit()
    void graphics::PixToolkit<NXTPix2D, dash3d::NXTPix3D>::PixToolkit(PixToolkit<NXTPix2D, dash3d::NXTPix3D>* this) {
        *(undefined**)this = PTR_vtable_100ee8c48 + 16;
    }

} // namespace jag::oldscape::graphics
