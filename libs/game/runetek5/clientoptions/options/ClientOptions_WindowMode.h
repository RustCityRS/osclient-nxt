// libs/game/runetek5/clientoptions/options/ClientOptions_WindowMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class WindowMode {
    public:
        // virtual methods in vtable order
        virtual ~WindowMode();
        virtual void IsModifiable(graphics::RT7Core const*) const;
        virtual bool IsAvailable(OptionClient) const;
        virtual GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, jag::WindowMode);
        virtual void OnSaveSetting();
        virtual void OnLoadSetting(graphics::RT7Core&, graphics::EffectManager&);
        WindowMode(graphics::RT7Core&, Settings&, char const*);
        ApplyFullscreenMode(graphics::RT7Core&);
        void SetFullscreenResolution(int, int);
        void GetFullscreenResolution(int&, int&);

        // data members, from how the methods use this: 212 bytes
        undefined** field_0;    // offset 0, vtable pointer
        Settings* field_8;      // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[56];
        int m_fullscreenResolution; // offset 200
        int field_204;              // offset 204
        char _unknown_208[4];
    };

    // 0x1005f8650, 160 bytes, base-object constructor, placed by class name
    // WindowMode::WindowMode(graphics::RT7Core&, Settings&, char const*)
    void WindowMode::WindowMode(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(1, 3);
        new (this) Option<jag::WindowMode>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__WindowMode_100f09848;
        m_fullscreenResolution = 0;
        field_204 = 0;
        if (Window::SupportsFullScreen() == '\0') {
            (field_28, 2)->SetZ();
        }
    }

    // 0x1005f87d0, 16 bytes, complete-object constructor, placed by class name
    // WindowMode::WindowMode(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005f87e0, 32 bytes, placed by class name
    // WindowMode::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, jag::WindowMode)
    void WindowMode::ApplySettingImpl() {
        int iVar1;
        RenderContext* pRVar2;

        iVar1 = GetValue();
        if (iVar1 - 1U < 2) {
            pRVar2 = (RenderContext*)GetRenderContext();
            fullscreen::ExitFullscreen(pRVar2);
        }
    }

    // 0x1005f8820, 16 bytes, placed by class name
    // WindowMode::IsModifiable(graphics::RT7Core const*) const
    void WindowMode::IsModifiable(RT7Core* param_1) {
        Window::SupportsFullScreen();
    }

    // 0x1005f8830, 112 bytes, placed by class name
    // WindowMode::ApplyFullscreenMode(graphics::RT7Core&)
    undefined8 WindowMode::ApplyFullscreenMode(RT7Core* param_1) {
        int iVar1;
        int iVar2;
        RenderContext* pRVar3;
        undefined8 uVar4;
        RT7Core* this_00;

        iVar2 = param_1->GetValue();
        if (iVar2 == 3) {
            this_00 = (RT7Core*)(param_1->m_immediateThreadPool + 56);
            pRVar3 = (RenderContext*)param_1->GetRenderContext();
            fullscreen::GetAvailableResolution((int*)this_00, (int*)(param_1->m_immediateThreadPool + 60), 0, pRVar3);
            iVar2 = *(int*)(param_1->m_immediateThreadPool + 56);
            iVar1 = *(int*)(param_1->m_immediateThreadPool + 60);
            pRVar3 = (RenderContext*)this_00->GetRenderContext();
            uVar4 = fullscreen::EnterFullscreen(iVar2, iVar1, pRVar3);
        } else {
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x1005f88a0, 80 bytes, placed by class name
    // WindowMode::OnLoadSetting(graphics::RT7Core&, graphics::EffectManager&)
    void WindowMode::OnLoadSetting(RT7Core* param_1, EffectManager* param_2) {
        Settings::GetValue<int>(field_8, &m_fullscreenResolution, "FullScreenWidth");
        Settings::GetValue<int>(field_8, &field_204, "FullScreenHeight");
    }

    // 0x1005f8900, 64 bytes, placed by class name
    // WindowMode::OnSaveSetting()
    void WindowMode::OnSaveSetting() {
        Settings::SetValue<int>(field_8, "FullScreenWidth", m_fullscreenResolution);
        Settings::SetValue<int>(field_8, "FullScreenHeight", field_204);
    }

    // 0x1005f8950, 32 bytes, placed by class name
    // WindowMode::SetFullscreenResolution(int, int)
    void WindowMode::SetFullscreenResolution(int param_1, int param_2) {
        m_fullscreenResolution = param_1;
        field_204 = param_2;
    }

    // 0x1005f8970, 32 bytes, placed by class name
    // WindowMode::GetFullscreenResolution(int&, int&)
    void WindowMode::GetFullscreenResolution(int* param_1, int* param_2) {
        *param_1 = m_fullscreenResolution;
        *param_2 = field_204;
    }

} // namespace jag::game::option
