// libs/oldscape/jagex3/dash3d/ModelLitRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    template <typename...> // 2 instantiations, e.g. <NXTPix3D>, <SoftwarePix3D>
    class ModelLitRenderer {
    public:
        ModelLitRenderer(SoftwarePix3D*);
        ModelLitRenderer(NXTPix3D*);
    };

    // 0x1002f4f90, 576 bytes, base-object constructor, inline, placed by class name and debug map
    // ModelLitRenderer<SoftwarePix3D>::ModelLitRenderer(SoftwarePix3D*)
    void ModelLitRenderer<SoftwarePix3D>::ModelLitRenderer(SoftwarePix3D* param_1) {
        array<unsigned short, 512ul>* this_00;
        array<unsigned short, 512ul>* paVar1;
        array<int, 2000ul>* this_01;
        array<int, 2000ul>* paVar2;
        uint local_2c;

        *(undefined**)this = PTR_vtable_100ee89b0 + 16;
        *(SoftwarePix3D**)(this + 6437224) = param_1;
        local_2c = local_2c & 4294967040;
        ((this + 8))->fill((bool*)&local_2c);
        local_2c = local_2c & 4294967040;
        ((this + 6508))->fill((bool*)&local_2c);
        local_2c = 0;
        ((this + 13008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 39008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 65008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 91008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 117008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 143008))->fill((int*)&local_2c);
        local_2c = local_2c & 4294901760;
        ((this + 169008))->fill((ushort*)&local_2c);
        this_00 = (array<unsigned short, 512ul>*)((this + 181008))->begin();
        paVar1 = (array<unsigned short, 512ul>*)((this + 181008))->end();
        if (this_00 != paVar1) {
            do {
                local_2c = local_2c & 4294901760;
                std::array<unsigned short, 512ul>::fill(this_00, (ushort*)&local_2c);
                this_00 = this_00 + 1024;
            } while (this_00 != paVar1);
        }
        local_2c = 0;
        ((this + 6325008))->fill((int*)&local_2c);
        this_01 = (array<int, 2000ul>*)((this + 6325056))->begin();
        paVar2 = (array<int, 2000ul>*)((this + 6325056))->end();
        if (this_01 != paVar2) {
            do {
                local_2c = 0;
                std::array<int, 2000ul>::fill(this_01, (int*)&local_2c);
                this_01 = this_01 + 8000;
            } while (this_01 != paVar2);
        }
        local_2c = 0;
        ((this + 6421056))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6429056))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437056))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437104))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437144))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437184))->fill((int*)&local_2c);
    }

    // 0x100360b00, 576 bytes, base-object constructor, inline, placed by class name
    // ModelLitRenderer<NXTPix3D>::ModelLitRenderer(NXTPix3D*)
    void ModelLitRenderer<NXTPix3D>::ModelLitRenderer(NXTPix3D* param_1) {
        array<unsigned short, 512ul>* this_00;
        array<unsigned short, 512ul>* paVar1;
        array<int, 2000ul>* this_01;
        array<int, 2000ul>* paVar2;
        uint local_2c;

        *(undefined**)this = PTR_vtable_100ee89b8 + 16;
        *(NXTPix3D**)(this + 6437224) = param_1;
        local_2c = local_2c & 4294967040;
        ((this + 8))->fill((bool*)&local_2c);
        local_2c = local_2c & 4294967040;
        ((this + 6508))->fill((bool*)&local_2c);
        local_2c = 0;
        ((this + 13008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 39008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 65008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 91008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 117008))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 143008))->fill((int*)&local_2c);
        local_2c = local_2c & 4294901760;
        ((this + 169008))->fill((ushort*)&local_2c);
        this_00 = (array<unsigned short, 512ul>*)((this + 181008))->begin();
        paVar1 = (array<unsigned short, 512ul>*)((this + 181008))->end();
        if (this_00 != paVar1) {
            do {
                local_2c = local_2c & 4294901760;
                std::array<unsigned short, 512ul>::fill(this_00, (ushort*)&local_2c);
                this_00 = this_00 + 1024;
            } while (this_00 != paVar1);
        }
        local_2c = 0;
        ((this + 6325008))->fill((int*)&local_2c);
        this_01 = (array<int, 2000ul>*)((this + 6325056))->begin();
        paVar2 = (array<int, 2000ul>*)((this + 6325056))->end();
        if (this_01 != paVar2) {
            do {
                local_2c = 0;
                std::array<int, 2000ul>::fill(this_01, (int*)&local_2c);
                this_01 = this_01 + 8000;
            } while (this_01 != paVar2);
        }
        local_2c = 0;
        ((this + 6421056))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6429056))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437056))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437104))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437144))->fill((int*)&local_2c);
        local_2c = 0;
        ((this + 6437184))->fill((int*)&local_2c);
    }

} // namespace jag::oldscape::dash3d
