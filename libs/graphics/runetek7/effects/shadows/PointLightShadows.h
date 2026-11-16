// libs/graphics/runetek7/effects/shadows/PointLightShadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightShadows {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~PointLightShadows();
        virtual byte Initialise();
        virtual void OnEnabled();
        virtual void OnDisabled();
        virtual IsSupported() const;
        virtual void RenderDebug(render::Viewport const&) const;
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        virtual OnQualityChange(GraphicsQuality);
        SceneManager GetPointLightSMManager();
        SceneManager GetPointLightSMManager() const;
        PointLightShadows(RT7Core&, int);
        void Update();
        void UpdateShaderConstants();
        void SetShaderConstantsDirect(render::DrawCallState&, render::RenderContext&,
                                      render::ShaderProgram const&) const;

        // data members, from how the methods use this: 1040 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[656];
        uint field_680;                     // offset 680
        int field_684;                      // offset 684
        SceneManager m_pointLightSMManager; // offset 688
    };

    class PointLightShadows::ShaderConsts {
    public:
        void Clear();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10047dbc0, 16 bytes, inline, placed by class name and debug map
    // PointLightShadows::GetPointLightSMManager()
    /* PointLightShadows::GetPointLightSMManager() const */

    undefined1* PointLightShadows::GetPointLightSMManager() {
        return m_pointLightSMManager;
    }

    // 0x100919320, 80 bytes, inline, placed by class name
    // PointLightShadows::ShaderConsts::Clear()
    void PointLightShadows::ShaderConsts::Clear() {
        ShaderConsts* this_00;
        ShaderConsts* pSVar1;

        this_00 = (ShaderConsts*)begin();
        pSVar1 = (ShaderConsts*)end();
        for (; this_00 != pSVar1; this_00 = (ShaderConsts*)&this_00[2].field_32) {
            this_00->Clear();
        }
    }

    // 0x100921f10, 16 bytes, complete-object destructor, inline, placed by class name
    // PointLightShadows::~PointLightShadows(): jumps straight to the base-object destructor

    // 0x100921f20, 32 bytes, deleting destructor, inline, placed by class name
    // PointLightShadows::~PointLightShadows()
    void PointLightShadows::~PointLightShadows() {
        ~PointLightShadows(this);
        operator_delete(this);
    }

    // 0x1009233e0, 64 bytes, base-object destructor, inline, placed by class name
    // PointLightShadows::~PointLightShadows()
    void PointLightShadows::~PointLightShadows() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__PointLightShadows_100f192f0;
        m_pointLightSMManager->~PointLightSMManager();
        (&field_608)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
