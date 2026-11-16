// libs/graphics/runetek7/water/WaterNormalMapParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterNormalMapParams {
    public:
        WaterNormalMapParams* operator=(WaterNormalMapParams const&);
        WaterNormalMapParams();

        // data members, from how the methods use this: 40 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined8 field_4;  // offset 4
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x1004c6820, 64 bytes, inline, placed by class name and debug map
    // WaterNormalMapParams::operator=(WaterNormalMapParams const&)
    /* WaterNormalMapParams::TEMPNAMEPLACEHOLDERVALUE(WaterNormalMapParams
   const&) */

    WaterNormalMapParams* WaterNormalMapParams::operator=(WaterNormalMapParams* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)&param_1->field_4 + 4);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)((long)&field_4 + 4) = uVar1;
        math::Vector2T<float>::operator=((Vector2T<float>*)&field_16, (Vector2T*)&param_1->field_16);
        math::Vector2T<float>::operator=((Vector2T<float>*)&field_24, (Vector2T*)&param_1->field_24);
        field_32 = param_1->field_32;
        return this;
    }

    // 0x1004c8f90, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterNormalMapParams::WaterNormalMapParams(): jumps straight to the base-object constructor

    // 0x1004c8fa0, 80 bytes, base-object constructor, inline, placed by class name
    // WaterNormalMapParams::WaterNormalMapParams()
    void WaterNormalMapParams::WaterNormalMapParams() {
        field_0 = 1;
        field_4 = 4575657222473777152;
        field_12 = 1056964608;
        field_16 = *(undefined8*)PTR_ONE_100ee66a0;
        field_24 = *(undefined8*)PTR_ZERO_100ee66a8;
        field_32 = 0;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1004c75b0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gFloat()
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gFloat(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        gT<float>(this);
    }

    // 0x1004c7a10, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g3()
    uint PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g3(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        byte bVar1;
        byte bVar2;
        ulong uVar3;
        byte* pbVar4;

        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar3);
        bVar1 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(long*)(this + 24) - 2);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(long*)(this + 24) - 1);
        return (uint)*pbVar4 | (uint)bVar2 << 8 | (uint)bVar1 << 16;
    }

    // 0x1004c7a70, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g2s()
    int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g2s(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        short sVar1;

        sVar1 = gT<short>(this);
        return (int)sVar1;
    }

} // namespace jag

namespace jag::math {
    // 0x1004c68e0, 96 bytes, inline, placed by debug map only (low confidence)
    // Colour3FromR8G8B8A8(unsigned int)
    undefined8 Colour3FromR8G8B8A8(uint param_1) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL((float)(param_1 >> 24) * 0.003921569, (float)(param_1 >> 16 & 255) * 0.003921569,
                                  (float)(param_1 >> 8 & 255) * 0.003921569);
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math
