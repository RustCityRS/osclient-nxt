// libs/oldscape/jagex3/graphics/Pix8.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class Pix8 {
    public:
        ~Pix8();
        void Untrim();
        Pix8(int arg1, int arg2, int arg3);
        Pix8* CopyHFlip();
        auto Copy();
        auto Topix32();
        void HalveSize();
        void Untrim(int arg1);
        void Rotate90Clockwise();
        void Rotate90Anticlockwise();
        void HFlip();
        void VFlip();
        void HVFlip();
        void RgbAdjust(int arg1, int arg2, int arg3);
        void Contrast(int arg1);
        Pix8();
        Pix8(Pix8&& pix8);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
        uint8_t _unknown_24[24];
        int field_48;
        unsigned int field_52;
        int field_56;
        unsigned int field_60;
        int field_64;
        int field_68;
        uint8_t _unknown_72[4];
    };

    class pix8multi {
    public:
        ~pix8multi();
        pix8multi(Array<Pix8>&& pix8s);

        uint8_t _unknown_0[1];
    };

    // 0x100132c80
    Pix8::~Pix8() {
        field_24.~SharedArray();
    }

    // 0x100327670
    Pix8::Pix8() : Array<unsigned char>() {}

    // 0x100337220
    Pix8::Pix8(Pix8&& pix8) : Array<unsigned char>(pix8), field_24(&pix8.field_24) {
        int iVar1 = pix8.field_68;
        field_64 = pix8.field_64;
        field_68 = iVar1;
        unsigned int uVar2 = pix8.field_52;
        iVar1 = pix8.field_56;
        unsigned int uVar3 = pix8.field_60;
        field_48 = pix8.field_48;
        field_52 = uVar2;
        field_56 = iVar1;
        field_60 = uVar3;
    }

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x100133160
    oldscape::rs2lib::PlayerModel* placement_new<oldscape::rs2lib::PlayerModel>(void* arg1) {
        new (arg1) oldscape::rs2lib::PlayerModel();
        return arg1;
    }

    // 0x100133180
    ref_counter_shared<oldscape::rs2lib::PlayerModel>*
    placement_new<ref_counter_shared<oldscape::rs2lib::PlayerModel>, int, oldscape::rs2lib::PlayerModel*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::PlayerModel*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::PlayerModel>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001331b0
    ref_counter_shared<oldscape::rs2lib::PlayerModel>::ref_counter_shared(unsigned long arg1,
                                                                          oldscape::rs2lib::PlayerModel* playerModel)
        : ref_counter_base() {}

    // 0x1001331f0
    void ref_counter_shared<oldscape::rs2lib::PlayerModel>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::PlayerModel> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((PlayerModel*)((long)&(this[3]._vptr)->_dtor + lVar2))->~PlayerModel();
                    prVar1 = (ref_counter_shared<oldscape::rs2lib::PlayerModel> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 304;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::render {
    // 0x100132e20: GLMinMagFilter::GLMinMagFilter(unsigned int, unsigned int, unsigned int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

    // 0x100132e20: GLVertexElementFormat::GLVertexElementFormat(unsigned int, int, unsigned int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

} // namespace jag::render

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100132e20: LocationData::Set(int, int, int) has the same machine code as jag::math::Vector3T<int>::Vector3T(int, int, int)

    // 0x100132e20: LocationData::LocationData(int, int, int) has the same machine code as jag::math::Vector3T<int>::Vector3T(int, int, int)

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag::math {
    // 0x100132e20
    Vector3T<int>::Vector3T(int waterNormalParamsEncoding, int waterNormalParamGroup, int arg3)
        : field_0(waterNormalParamsEncoding), field_4(waterNormalParamGroup), field_8(arg3) {}

} // namespace jag::math

namespace jag::game {
    // 0x100132e20: WaterNormalParamsTarget::WaterNormalParamsTarget(WaterNormalParamsEncoding, WaterNormalParamGroup, int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

} // namespace jag::game
