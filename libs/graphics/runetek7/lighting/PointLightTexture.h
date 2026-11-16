// libs/graphics/runetek7/lighting/PointLightTexture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightGridTexture {
    public:
        GetEffect() const;
        PointLightGridTexture();
        ~PointLightGridTexture();
        void Create(PointLightGridTextureData const*, RT7Core&, int, int);
        void CreateTexture(PointLightGridTextureData const*);
        void CreatePointLightIndicesEffect(RT7Core&, int, int);
        void Destroy(int, int);
        void UpdateTexture(shared_ptr<PointLightGridTextureData> const&);

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[8];
        long field_8;        // offset 8
        shared_ptr field_16; // offset 16
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    class PointLightGridTextureData {
    public:
        PointLightGridTextureData();
        void ApplyLightIDToTextureData(unsigned int, int, int, int, int, int, int, int, int,
                                       Array<std::array<bool, 129ul>, BucketAllocatorEASTL> const&);
        void ApplyLightDataToTextureData(PointLight const&, unsigned int, int);

        // data members, from how the methods use this: 131080 bytes
        char _unknown_0[131072];
        ulong field_131072; // offset 131072
    };

    // 0x1001ef980, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::PointLightGridTexture(): jumps straight to the base-object constructor

    // 0x1001f00d0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::PointLightGridTexture()
    void PointLightGridTexture::PointLightGridTexture() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_32 = 0;
        new (&field_40) std::future<void>();
    }

} // namespace jag::graphics
