// libs/oldscape/jagex3/graphics/Pix8.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class Pix8 {
    public:
        ~Pix8();
        void Untrim();
        Pix8(int, int, int);
        CopyHFlip();
        Copy();
        Topix32();
        void HalveSize();
        void Untrim(int);
        void Rotate90Clockwise();
        void Rotate90Anticlockwise();
        void HFlip();
        void VFlip();
        void HVFlip();
        void RgbAdjust(int, int, int);
        void Contrast(int);
        Pix8();
        Pix8(Pix8&&);

        // data members, from how the methods use this: 76 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        long field_16; // offset 16
        char _unknown_24[24];
        int field_48;  // offset 48
        uint field_52; // offset 52
        int field_56;  // offset 56
        uint field_60; // offset 60
        int field_64;  // offset 64
        int field_68;  // offset 68
        char _unknown_72[4];
    };

    class pix8multi {
    public:
        ~pix8multi();
        pix8multi(Array<Pix8, eastl::allocator>&&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100132c70, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Pix8::~Pix8(): jumps straight to the base-object destructor

    // 0x100132c80, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // Pix8::~Pix8()
    void Pix8::~Pix8() {
        (&field_24)->~SharedArray();
        ~Array();
    }

    // 0x10031f510, 16 bytes, complete-object constructor, inline, placed by class name
    // Pix8::Pix8(): jumps straight to the base-object constructor

    // 0x100327670, 48 bytes, base-object constructor, inline, placed by class name
    // Pix8::Pix8()
    void Pix8::Pix8() {
        new (this) Array<unsigned char, eastl::allocator>();
        new (&field_24) SharedArray<unsigned int>();
    }

    // 0x100337210, 16 bytes, complete-object constructor, inline, placed by class name
    // Pix8::Pix8(Pix8&&): jumps straight to the base-object constructor

    // 0x100337220, 80 bytes, base-object constructor, inline, placed by class name
    // Pix8::Pix8(Pix8&&)
    void Pix8::Pix8(Pix8* param_1) {
        int iVar1;
        uint uVar2;
        uint uVar3;

        new (this) Array<unsigned char, eastl::allocator>(param_1);
        new (&field_24, (SharedArray*)&param_1->field_24) SharedArray<Array<unsigned char, eastl::allocator>>();
        iVar1 = param_1->field_68;
        field_64 = param_1->field_64;
        field_68 = iVar1;
        uVar2 = param_1->field_52;
        iVar1 = param_1->field_56;
        uVar3 = param_1->field_60;
        field_48 = param_1->field_48;
        field_52 = uVar2;
        field_56 = iVar1;
        field_60 = uVar3;
    }

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x100133160, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::PlayerModel* placement_new<oldscape::rs2lib::PlayerModel>(void*)
    PlayerModel* placement_new<oldscape::rs2lib::PlayerModel>(void* param_1) {
        oldscape::rs2lib::PlayerModel::PlayerModel(param_1);
        return param_1;
    }

    // 0x100133180, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::PlayerModel>* placement_new<ref_counter_shared<oldscape::rs2lib::PlayerModel>, int, oldscape::rs2lib::PlayerModel*&>(void*, int&&, oldscape::rs2lib::PlayerModel*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::PlayerModel>, int, oldscape::rs2lib::PlayerModel*&>(
        void* param_1, int* param_2, PlayerModel** param_3) {
        ref_counter_shared<oldscape::rs2lib::PlayerModel>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001331a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::PlayerModel>::ref_counter_shared(unsigned long, oldscape::rs2lib::PlayerModel*): jumps straight to the base-object constructor

    // 0x1001331b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::PlayerModel>::ref_counter_shared(unsigned long, oldscape::rs2lib::PlayerModel*)
    void ref_counter_shared<oldscape::rs2lib::PlayerModel>::ref_counter_shared(ulong param_1, PlayerModel* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7810 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PlayerModel**)(this + 24) = param_2;
    }

    // 0x1001331f0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::PlayerModel>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::PlayerModel>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~PlayerModel();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 304;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::render {
    // 0x100132e20: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    GLMinMagFilter::GLMinMagFilter(unsigned int, unsigned int, unsigned int);

    // 0x100132e20: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    GLVertexElementFormat::GLVertexElementFormat(unsigned int, int, unsigned int);

} // namespace jag::render

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100132e20: the linker folded this into jag::math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    LocationData::Set(int, int, int);

    // 0x100132e20: the linker folded this into jag::math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    LocationData::LocationData(int, int, int);

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag::math {
    // 0x100132e20, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Vector3T<int>::Vector3T(int, int, int)
    /* oldscape::rs2lib::worldmap::LocationData::Set(int, int, int) */

    void oldscape::rs2lib::worldmap::LocationData::Set(int param_1, int param_2, int param_3) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
    }

} // namespace jag::math

namespace jag::game {
    // 0x100132e20: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    WaterNormalParamsTarget::WaterNormalParamsTarget(WaterNormalParamsEncoding, WaterNormalParamGroup, int);

} // namespace jag::game
