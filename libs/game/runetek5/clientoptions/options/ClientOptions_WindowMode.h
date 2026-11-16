// libs/game/runetek5/clientoptions/options/ClientOptions_WindowMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class WindowMode {
    public:
        // virtual methods in vtable order
        virtual ~WindowMode();
        virtual void IsModifiable(const graphics::RT7Core* rt7Core) const;
        virtual bool IsAvailable(OptionClient optionClient) const;
        virtual uint64_t GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      jag::WindowMode windowMode);
        virtual void OnSaveSetting();
        virtual void OnLoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager);
        WindowMode(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
        void ApplyFullscreenMode(graphics::RT7Core& rt7Core);
        void SetFullscreenResolution(int arg1, int arg2);
        void GetFullscreenResolution(int& arg1, int& arg2);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[56];
        int m_fullscreenResolution;
        int field_204;
        uint8_t _unknown_208[4];
    };

    // 0x1005f8650
    WindowMode::WindowMode(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<jag::WindowMode>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(1, 3);
        new (this) Option<jag::WindowMode>(rt7Core, settings, str, local_30);
        m_fullscreenResolution = 0;
        field_204 = 0;
        if (Window::SupportsFullScreen() == '\0') {
            field_28->SetZ(2);
        }
    }

    // 0x1005f87e0
    void WindowMode::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      jag::WindowMode windowMode) {
        if (GetValue() - 1U < 2) {
            fullscreen::ExitFullscreen(*((RenderContext*)GetRenderContext()));
        }
    }

    // 0x1005f8820
    void WindowMode::IsModifiable(const graphics::RT7Core* rt7Core) const {
        Window::SupportsFullScreen();
    }

    // 0x1005f8830
    void WindowMode::ApplyFullscreenMode(graphics::RT7Core& rt7Core) {
        int arg2;
        RenderContext* pRVar2;
        uint64_t uVar3;
        RT7Core* this_00;

        int iVar1 = rt7Core.GetValue();
        if (iVar1 == 3) {
            this_00 = (RT7Core*)(rt7Core.m_immediateThreadPool + 56);
            pRVar2 = (RenderContext*)rt7Core.GetRenderContext();
            fullscreen::GetAvailableResolution(*this_00, *((rt7Core.m_immediateThreadPool + 60)), 0, *pRVar2);
            iVar1 = *(int*)(rt7Core.m_immediateThreadPool + 56);
            arg2 = *(int*)(rt7Core.m_immediateThreadPool + 60);
            pRVar2 = (RenderContext*)this_00->GetRenderContext();
            uVar3 = fullscreen::EnterFullscreen(iVar1, arg2, *pRVar2);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1005f88a0
    void WindowMode::OnLoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        field_8->GetValue<int>(m_fullscreenResolution, "FullScreenWidth");
        field_8->GetValue<int>(field_204, "FullScreenHeight");
    }

    // 0x1005f8900
    void WindowMode::OnSaveSetting() {
        field_8->SetValue<int>("FullScreenWidth", m_fullscreenResolution);
        field_8->SetValue<int>("FullScreenHeight", field_204);
    }

    // 0x1005f8950
    void WindowMode::SetFullscreenResolution(int arg1, int arg2) {
        m_fullscreenResolution = arg1;
        field_204 = arg2;
    }

    // 0x1005f8970
    void WindowMode::GetFullscreenResolution(int& arg1, int& arg2) {
        arg1 = m_fullscreenResolution;
        arg2 = field_204;
    }

} // namespace jag::game::option
