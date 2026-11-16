// libs/hal/render/state/DepthStencilState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class DepthStencilState {
    public:
        class Desc;
        void GetDesc() const;
        DepthStencilState();
        uint64_t Create(const Desc& desc);
        ~DepthStencilState();
        void Destroy();
        void ReleaseNativeResources();

    private:
        RenderResourceLivenessMethod field_0;
        uint8_t field_4;
        uint8_t _unknown_5[3];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint32_t field_56;
        uint8_t _unknown_60[4];
    };

    class DepthStencilState::Desc {
    public:
        Desc();
        void SetToDefault();
        uint8_t operator!=(const Desc& desc) const;
        uint64_t operator==(const Desc& desc) const;

    private:
        char field_0;
        char field_1;
        char field_2;
        char field_3;
        float field_4;
        float field_8;
        int field_12;
        char field_16;
        char field_17;
        char field_18;
        uint8_t _unknown_19[17];
        StencilOpDesc field_36;
    };

    // 0x100c265f0
    void DepthStencilState::Desc::SetToDefault() {
        field_0 = '\x01';
        field_1 = '\x01';
        field_2 = '\x01';
        field_3 = '\0';
        field_4 = 0.0;
        field_8 = 1.0;
        field_12 = 513;
        field_16 = '\0';
        field_17 = -1;
        field_18 = -1;
        field_19 = 0;
    }

    // 0x100c283c0
    uint8_t DepthStencilState::Desc::operator!=(const DepthStencilState::Desc& desc) const {
        return *this == desc ^ 1;
    }

    // 0x100c32cd0
    DepthStencilState::Desc::Desc() {
        new (&field_20) StencilOpDesc();
        new (field_36) StencilOpDesc();
        SetToDefault();
    }

    // 0x100c34e60
    uint64_t DepthStencilState::Desc::operator==(const DepthStencilState::Desc& desc) const {
        bool cVar1;

        if ((((((field_0 == desc.field_0) && (field_1 == desc.field_1)) && (field_2 == desc.field_2)) &&
              ((field_3 == desc.field_3 && (field_4 == desc.field_4)))) &&
             ((field_8 == desc.field_8 && ((field_12 == desc.field_12 && (field_16 == desc.field_16)))))) &&
            ((field_17 == desc.field_17 &&
              ((field_18 == desc.field_18 && (cVar1 = field_20 == desc.field_20, cVar1)))))) {
            return *field_36 == desc.field_36;
        }
        return 0;
    }

} // namespace jag::render
