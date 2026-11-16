// libs/hal/render/state/BlendState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class BlendState {
    public:
        class Desc;
        void GetDesc() const;
        BlendState();
        ~BlendState();
        void Destroy();
        uint64_t Create(const Desc& desc);
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
        uint64_t field_56;
        uint64_t field_64;
        uint32_t field_72;
        uint8_t _unknown_76[4];
    };

    class BlendState::Desc {
    public:
        Desc();
        void SetToDefault();
        uint8_t operator!=(const Desc& desc) const;
        bool operator==(const Desc& desc) const;

    private:
        char field_0;
        char field_1;
        uint8_t _unknown_2[10];
    };

    // 0x100c26640
    void BlendState::Desc::SetToDefault() {
        field_0 = '\0';
        field_1 = '\0';
        RenderTargetBlendDesc* this_00 = (RenderTargetBlendDesc*)std::array<RenderTargetBlendDesc, 2ul>::begin();
        RenderTargetBlendDesc* pRVar1 = (RenderTargetBlendDesc*)std::array<RenderTargetBlendDesc, 2ul>::end();
        for (; this_00 != pRVar1; this_00 = this_00 + 1) {
            this_00->SetToDefault();
        }
    }

    // 0x100c26940
    void RenderContextStateCache::ValidateBoundFBO() const {}

    // 0x100c283e0
    uint8_t BlendState::Desc::operator!=(const BlendState::Desc& desc) const {
        return *this == desc ^ 1;
    }

    // 0x100c32d40
    BlendState::Desc::Desc() {
        new (&field_4) std::array<RenderTargetBlendDesc, 2ul>();
        SetToDefault();
    }

    // 0x100c34f70
    bool BlendState::Desc::operator==(const BlendState::Desc& desc) const {
        if ((field_0 == desc.field_0) && (field_1 == desc.field_1)) {
            return &field_4 == &desc.field_4;
        }
        return false;
    }

} // namespace jag::render
