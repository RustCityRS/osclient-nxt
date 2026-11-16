// libs/oldscape/jagex3/dash3d/ModelLitRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    template <typename...> // 2 instantiations, e.g. <NXTPix3D>, <SoftwarePix3D>
    class ModelLitRenderer {
    public:
        ModelLitRenderer(SoftwarePix3D* softwarePix3D);
        ModelLitRenderer(NXTPix3D* nxtPix3D);
    };

    // 0x1002f4f90
    ModelLitRenderer<SoftwarePix3D>::ModelLitRenderer(SoftwarePix3D* softwarePix3D) {
        unsigned int local_2c;

        *(uint8_t**)this = PTR_vtable_100ee89b0 + 16;
        *(SoftwarePix3D**)(this + 6437224) = softwarePix3D;
        local_2c = local_2c & 4294967040;
        ((this + 8))->fill(local_2c);
        local_2c = local_2c & 4294967040;
        ((this + 6508))->fill(local_2c);
        local_2c = 0;
        ((this + 13008))->fill(local_2c);
        local_2c = 0;
        ((this + 39008))->fill(local_2c);
        local_2c = 0;
        ((this + 65008))->fill(local_2c);
        local_2c = 0;
        ((this + 91008))->fill(local_2c);
        local_2c = 0;
        ((this + 117008))->fill(local_2c);
        local_2c = 0;
        ((this + 143008))->fill(local_2c);
        local_2c = local_2c & 4294901760;
        ((this + 169008))->fill(local_2c);
        array<unsigned short, _512ul>* this_00 = std::array<std::array<unsigned short, 512ul>, 6000ul>::begin();
        array<unsigned short, _512ul>* paVar1 = std::array<std::array<unsigned short, 512ul>, 6000ul>::end();
        if (this_00 != paVar1) {
            do {
                local_2c = local_2c & 4294901760;
                this_00->fill(local_2c);
                this_00 = this_00 + 1024;
            } while (this_00 != paVar1);
        }
        local_2c = 0;
        ((this + 6325008))->fill(local_2c);
        array<int, _2000ul>* this_01 = std::array<std::array<int, 2000ul>, 12ul>::begin();
        array<int, _2000ul>* paVar2 = std::array<std::array<int, 2000ul>, 12ul>::end();
        if (this_01 != paVar2) {
            do {
                local_2c = 0;
                this_01->fill(local_2c);
                this_01 = this_01 + 8000;
            } while (this_01 != paVar2);
        }
        local_2c = 0;
        ((this + 6421056))->fill(local_2c);
        local_2c = 0;
        ((this + 6429056))->fill(local_2c);
        local_2c = 0;
        ((this + 6437056))->fill(local_2c);
        local_2c = 0;
        ((this + 6437104))->fill(local_2c);
        local_2c = 0;
        ((this + 6437144))->fill(local_2c);
        local_2c = 0;
        ((this + 6437184))->fill(local_2c);
    }

    // 0x100360b00
    ModelLitRenderer<NXTPix3D>::ModelLitRenderer(NXTPix3D* nxtPix3D) {
        unsigned int local_2c;

        *(uint8_t**)this = PTR_vtable_100ee89b8 + 16;
        *(NXTPix3D**)(this + 6437224) = nxtPix3D;
        local_2c = local_2c & 4294967040;
        ((this + 8))->fill(local_2c);
        local_2c = local_2c & 4294967040;
        ((this + 6508))->fill(local_2c);
        local_2c = 0;
        ((this + 13008))->fill(local_2c);
        local_2c = 0;
        ((this + 39008))->fill(local_2c);
        local_2c = 0;
        ((this + 65008))->fill(local_2c);
        local_2c = 0;
        ((this + 91008))->fill(local_2c);
        local_2c = 0;
        ((this + 117008))->fill(local_2c);
        local_2c = 0;
        ((this + 143008))->fill(local_2c);
        local_2c = local_2c & 4294901760;
        ((this + 169008))->fill(local_2c);
        array<unsigned short, _512ul>* this_00 = std::array<std::array<unsigned short, 512ul>, 6000ul>::begin();
        array<unsigned short, _512ul>* paVar1 = std::array<std::array<unsigned short, 512ul>, 6000ul>::end();
        if (this_00 != paVar1) {
            do {
                local_2c = local_2c & 4294901760;
                this_00->fill(local_2c);
                this_00 = this_00 + 1024;
            } while (this_00 != paVar1);
        }
        local_2c = 0;
        ((this + 6325008))->fill(local_2c);
        array<int, _2000ul>* this_01 = std::array<std::array<int, 2000ul>, 12ul>::begin();
        array<int, _2000ul>* paVar2 = std::array<std::array<int, 2000ul>, 12ul>::end();
        if (this_01 != paVar2) {
            do {
                local_2c = 0;
                this_01->fill(local_2c);
                this_01 = this_01 + 8000;
            } while (this_01 != paVar2);
        }
        local_2c = 0;
        ((this + 6421056))->fill(local_2c);
        local_2c = 0;
        ((this + 6429056))->fill(local_2c);
        local_2c = 0;
        ((this + 6437056))->fill(local_2c);
        local_2c = 0;
        ((this + 6437104))->fill(local_2c);
        local_2c = 0;
        ((this + 6437144))->fill(local_2c);
        local_2c = 0;
        ((this + 6437184))->fill(local_2c);
    }

} // namespace jag::oldscape::dash3d
