// libs/graphics/postprocess/PostProcessEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class PostProcessEffect {
    public:
        // virtual methods in vtable order
        virtual ~PostProcessEffect();
        virtual void __pure_slot_2() = 0;
        virtual void RenderDebug(const render::Viewport& arg1);
        virtual void IsReady();
        virtual uint64_t Init();
        uint8_t GetEnabled() const;
        void Destroy();
        uint64_t GetRequirements() const;
        int GetPriority() const;
        int GetID() const;
        void SetEnabled(bool arg1);
        PostProcessEffect(int arg1, int arg2);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullPostProcessEffect; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t m_enabled;
        uint8_t _unknown_9[3];
        int m_iD;
        int m_priority;
        uint8_t _unknown_20[4];
    };

    // 0x1009ae810
    PostProcessEffect::PostProcessEffect(int arg1, int arg2) : m_enabled(0), m_iD(arg1), m_priority(arg2) {}

    // 0x1009b9770
    void PostProcessEffect::IsReady() {
        IsValid();
    }

} // namespace jag::postprocess
