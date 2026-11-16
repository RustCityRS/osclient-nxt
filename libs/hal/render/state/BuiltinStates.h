// libs/hal/render/state/BuiltinStates.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class BuiltinStates {
    public:
        // virtual methods in vtable order
        virtual ~BuiltinStates();
        AlphaMode* GetShadowPassRS(CullMode cullMode) const;
        BuiltinStates();
        void SetAnisotropy(float arg1);
        void CreateShadowSamplerState(SamplerState& samplerState);

    private:
        uint8_t _unknown_8[2664];
    };

    // 0x1008b0380
    AlphaMode* BuiltinStates::GetShadowPassRS(CullMode cullMode) const {
        int iVar2 = GetCullModeIndex(cullMode);
        return (AlphaMode*)field_1344[(long)iVar2];
    }

    // 0x100c0c180
    BuiltinStates::~BuiltinStates() {
        field_2588.~BlendState();
        field_2512.~BlendState();
        field_2436.~BlendState();
        field_2360.~BlendState();
        field_2284.~BlendState();
        field_2208.~BlendState();
        field_2132.~BlendState();
        field_2056.~BlendState();
        field_1980.~BlendState();
        field_1904.~BlendState();
        field_1828.~BlendState();
        field_1752.~BlendState();
        field_1676.~BlendState();
        field_1600.~BlendState();
        field_1524.~BlendState();
        field_1488.~RasteriserState();
        field_1344.~array();
        field_1308.~RasteriserState();
        field_1272.~RasteriserState();
        field_1236.~RasteriserState();
        field_1200.~RasteriserState();
        field_1140.~DepthStencilState();
        field_1080.~DepthStencilState();
        field_1020.~DepthStencilState();
        field_960.~DepthStencilState();
        field_900.~DepthStencilState();
        field_840.~DepthStencilState();
        field_780.~DepthStencilState();
        field_720.~DepthStencilState();
    }

} // namespace jag::render
