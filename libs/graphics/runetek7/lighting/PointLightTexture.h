// libs/graphics/runetek7/lighting/PointLightTexture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightGridTexture {
    public:
        shared_ptr GetEffect() const;
        PointLightGridTexture();
        ~PointLightGridTexture();
        void Create(const PointLightGridTextureData* pointLightGridTextureData, RT7Core& rt7Core, int arg3, int arg4);
        void CreateTexture(const PointLightGridTextureData* pointLightGridTextureData);
        void CreatePointLightIndicesEffect(RT7Core& rt7Core, int arg2, int arg3);
        void Destroy(int arg1, int arg2);
        void UpdateTexture(const shared_ptr<PointLightGridTextureData>& pointLightGridTextureData);

    private:
        uint8_t _unknown_0[8];
        long field_8;
        shared_ptr m_effect;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    class PointLightGridTextureData {
    public:
        PointLightGridTextureData();
        void ApplyLightIDToTextureData(unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                       int arg8, int arg9, const Array<std::array<bool, 129ul>>& arg10);
        void ApplyLightDataToTextureData(const PointLight& pointLight, unsigned int arg2, int arg3);

    private:
        uint8_t _unknown_0[131072];
        unsigned long field_131072;
    };

    // 0x1001f00d0
    PointLightGridTexture::PointLightGridTexture() : shared_ptr(), field_32(0) {}

} // namespace jag::graphics
