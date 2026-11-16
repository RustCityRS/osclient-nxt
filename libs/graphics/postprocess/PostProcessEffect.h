// libs/graphics/postprocess/PostProcessEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class PostProcessEffect {
    public:
        // virtual methods in vtable order
        virtual ~PostProcessEffect();
        virtual void __pure_slot_2() = 0;
        virtual RenderDebug(render::Viewport const&);
        virtual void IsReady();
        virtual Init();
        GetEnabled() const;
        Destroy();
        GetRequirements() const;
        int GetPriority() const;
        int GetID() const;
        SetEnabled(bool);
        PostProcessEffect(int, int);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullPostProcessEffect;

        // data members, from how the methods use this: 24 bytes
        undefined* field_0;   // offset 0, vtable pointer
        undefined1 m_enabled; // offset 8
        char _unknown_9[3];
        int m_iD;       // offset 12
        int m_priority; // offset 16
        char _unknown_20[4];
    };

    // 0x1009ae810, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // PostProcessEffect::PostProcessEffect(int, int)
    void PostProcessEffect::PostProcessEffect(int param_1, int param_2) {
        field_0 = PTR_vtable_100ee6fe0 + 16;
        m_enabled = 0;
        m_iD = param_1;
        m_priority = param_2;
    }

    // 0x1009b9770, 16 bytes, inline, placed by class name
    // PostProcessEffect::IsReady()
    void PostProcessEffect::IsReady() {
        IsValid();
    }

} // namespace jag::postprocess
