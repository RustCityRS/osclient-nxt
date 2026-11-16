// libs/hal/render/state/RasteriserState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class RasteriserState {
    public:
        class Desc;
        void GetDesc() const;
        RasteriserState();
        uint8_t Create(const Desc& desc);
        void Destroy();
        ~RasteriserState();
        void ReleaseNativeResources();

    private:
        RenderResourceLivenessMethod field_0;
        uint8_t field_4;
        uint8_t _unknown_5[3];
        uint64_t field_8;
        uint8_t _unknown_16[1];
        uint64_t field_17;
        uint64_t field_25;
    };

    class RasteriserState::Desc {
    public:
        Desc();
        void SetToDefault();
        uint8_t operator!=(const Desc& desc) const;
        uint32_t operator==(const Desc& desc) const;

    private:
        int field_0;
        int field_4;
        float field_8;
        float field_12;
        float field_16;
        char field_20;
        char field_21;
        char field_22;
        char field_23;
        uint8_t field_24;
    };

    // 0x100009d50: RasteriserState::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100bf38d0
    uint8_t RasteriserState::Create(const RasteriserState::Desc& desc) {
        uint64_t uVar1 = *(uint64_t*)desc;
        uint64_t uVar2 = *(uint64_t*)&desc.field_8;
        uint64_t uVar3 = *(uint64_t*)((long)&desc.field_16 + 1);
        field_17 = *(uint64_t*)((long)&desc.field_8 + 1);
        field_25 = uVar3;
        field_8 = uVar1;
        *(uint64_t*)&field_16 = uVar2;
        return 1;
    }

    // 0x100bf3900
    void RasteriserState::Destroy() {
        MarkAsDead();
    }

    // 0x100bf5660
    RasteriserState::RasteriserState() : RenderResource() {}

    // 0x100bf5690
    RasteriserState::~RasteriserState() {
        Destroy();
    }

    // 0x100bf56c0
    void RasteriserState::ReleaseNativeResources() {}

    // 0x100c26610
    void RasteriserState::Desc::SetToDefault() {
        field_0 = 6914;
        field_4 = 1028;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 1.0;
        field_20 = '\x01';
        field_21 = '\0';
        field_22 = '\x01';
        field_23 = '\0';
        field_24 = 0;
    }

    // 0x100c283d0
    uint8_t RasteriserState::Desc::operator!=(const RasteriserState::Desc& desc) const {
        return *this == desc ^ 1;
    }

    // 0x100c32d30
    RasteriserState::Desc::Desc() {
        SetToDefault();
    }

    // 0x100c34f00
    uint32_t RasteriserState::Desc::operator==(const RasteriserState::Desc& desc) const {
        uint32_t uVar1;

        if ((((((field_0 == desc.field_0) && (field_4 == desc.field_4)) && (field_8 == desc.field_8)) &&
              ((field_12 == desc.field_12 && (field_16 == desc.field_16)))) &&
             ((field_20 == desc.field_20 && ((field_21 == desc.field_21 && (field_22 == desc.field_22)))))) &&
            (field_23 == desc.field_23)) {
            uVar1 = (((uint32_t)((int32_t)((unsigned int)field_4 >> 8)) << 8) | (uint8_t)(field_24 == desc.field_24));
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

} // namespace jag::render
