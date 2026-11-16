// libs/hal/render/state/SamplerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class SamplerState {
    public:
        class Desc;
        void GetDesc() const;
        SamplerState* operator=(const SamplerState& samplerState);
        SamplerState();
        uint8_t Create(const Desc& desc);
        ~SamplerState();
        void Destroy();
        void ReleaseNativeResources();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        float field_16;
        float field_20;
        uint32_t field_24;
        uint8_t _unknown_28[20];
        float field_48;
        float field_52;
    };

    class SamplerState::Desc {
    public:
        uint8_t operator!=(const Desc& desc) const;
        uint64_t operator==(const Desc& desc) const;
        Desc();
        Desc* operator=(const Desc& desc);
        void SetToDefault();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        float field_16;
        float field_20;
        uint32_t field_24;
        uint8_t _unknown_28[20];
        float field_48;
        float field_52;
        uint8_t _unknown_56[4];
    };

    // 0x100bcdc20
    SamplerState* SamplerState::operator=(const SamplerState& samplerState) {
        *this = samplerState;
        return this;
    }

    // 0x100bcdff0
    uint8_t SamplerState::Desc::operator!=(const SamplerState::Desc& desc) const {
        return *this == desc ^ 1;
    }

    // 0x100bd2160
    uint64_t SamplerState::Desc::operator==(const SamplerState::Desc& desc) const {
        bool bVar1;

        if ((((((field_0 == desc.field_0) && (field_4 == desc.field_4)) && (field_8 == desc.field_8)) &&
              ((field_12 == desc.field_12 && (field_16 == desc.field_16)))) &&
             ((field_20 == desc.field_20 &&
               ((field_24 == desc.field_24 && (bVar1 = field_32 == desc.field_32, bVar1)))))) &&
            (field_48 == desc.field_48)) {
            return field_52 == desc.field_52;
        }
        return 0;
    }

    // 0x100bf3970
    Desc* SamplerState::Desc::operator=(const SamplerState::Desc& desc) {
        float fVar1 = desc.field_16;
        float fVar2 = desc.field_20;
        uint32_t uVar3 = desc.field_24;
        field_12 = desc.field_12;
        field_16 = fVar1;
        field_20 = fVar2;
        field_24 = uVar3;
        int iVar4 = desc.field_4;
        int iVar5 = desc.field_8;
        int iVar6 = desc.field_12;
        field_0 = desc.field_0;
        field_4 = iVar4;
        field_8 = iVar5;
        field_12 = iVar6;
        field_32 = desc.field_32;
        fVar1 = desc.field_52;
        field_48 = desc.field_48;
        field_52 = fVar1;
        return this;
    }

    // 0x100bf8540
    SamplerState::Desc::Desc() {
        new (&field_32) math::Vector4T();
        SetToDefault();
    }

    // 0x100bf8570
    void SamplerState::Desc::SetToDefault() {
        field_0 = 7;
        field_4 = 33071;
        field_8 = 33071;
        field_12 = 33071;
        field_16 = 0.0;
        field_20 = 1.0;
        field_24 = 512;
        field_32.Set(*PTR_ZERO_100ee6708);
        field_48 = -3.4028235e+38;
        field_52 = 3.4028235e+38;
    }

} // namespace jag::render
