// libs/graphics/runetek7/water/WaterNormalMapParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterNormalMapParams {
    public:
        WaterNormalMapParams* operator=(const WaterNormalMapParams& waterNormalMapParams);
        WaterNormalMapParams();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint64_t field_4;
        uint32_t field_12;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x1004c6820
    WaterNormalMapParams* WaterNormalMapParams::operator=(const WaterNormalMapParams& waterNormalMapParams) {
        uint64_t uVar1 = *(uint64_t*)((long)&waterNormalMapParams.field_4 + 4);
        *(uint64_t*)this = *(uint64_t*)waterNormalMapParams;
        *(uint64_t*)((long)&field_4 + 4) = uVar1;
        field_16 = waterNormalMapParams.field_16;
        field_24 = waterNormalMapParams.field_24;
        field_32 = waterNormalMapParams.field_32;
        return this;
    }

    // 0x1004c8fa0
    WaterNormalMapParams::WaterNormalMapParams() : field_0(1), field_4(4575657222473777152), field_12(1056964608) {
        field_16 = *(uint64_t*)PTR_ONE_100ee66a0;
        field_24 = *(uint64_t*)PTR_ZERO_100ee66a8;
        field_32 = 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1004c75b0
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::gFloat() {
        gT<float>(this);
    }

    // 0x1004c7a10
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char>>>::g3() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 3;
        uint8_t* pbVar3 = (uint8_t*)(*this)[arg1];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        uint8_t bVar2 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        return (unsigned int)*pbVar3 | (unsigned int)bVar2 << 8 | (unsigned int)bVar1 << 16;
    }

    // 0x1004c7a70
    int PacketReaderMixin<PacketT<Array<unsigned char>>>::g2s() {
        short sVar1 = gT<short>(this);
        return (int)sVar1;
    }

} // namespace jag

namespace jag::math {
    // 0x1004c68e0
    void Colour3FromR8G8B8A8(unsigned int arg1) {
        uint64_t uVar1;

        ColourHSL local_18((float)(arg1 >> 24) * 0.003921569f, (float)(arg1 >> 16 & 255) * 0.003921569f,
                           (float)(arg1 >> 8 & 255) * 0.003921569f);
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math
