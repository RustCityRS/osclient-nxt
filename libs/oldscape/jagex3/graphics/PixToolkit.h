// libs/oldscape/jagex3/graphics/PixToolkit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics {
    template <typename...> // 2 instantiations, e.g. <NXTPix2D, dash3d::NXTPix3D>, <NXTPix2D, dash3d::SoftwarePix3D>
    class PixToolkit {
    public:
        void PrepareRender();
        PixToolkit();
    };

    // 0x1000e3050
    void PixToolkit<NXTPix2D, dash3d::NXTPix3D>::PrepareRender() {
        long* plVar1 = (long*)(**(void (**)(...))(*(long*)this + 8))();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
        uint64_t* puVar2 = (uint64_t*)(*(void (*)(...)) * *(uint64_t**)this)(this);
        (**(void (**)(...))*puVar2)(puVar2);
    }

    // 0x1002175f0
    PixToolkit<NXTPix2D, dash3d::SoftwarePix3D>::PixToolkit() {
        *(uint8_t**)this = PTR_vtable_100ee8c40 + 16;
    }

    // 0x10031b720
    PixToolkit<NXTPix2D, dash3d::NXTPix3D>::PixToolkit() {
        *(uint8_t**)this = PTR_vtable_100ee8c48 + 16;
    }

} // namespace jag::oldscape::graphics
