// libs/framework/graphicsapp/GraphicsApp.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class GraphicsApp : public BaseApp // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GraphicsApp();
        virtual void OnFirstUpdate();
        virtual void MainWindowInit(const SystemInitParams& systemInitParams);
        virtual void MainWindowShutdown();
        virtual unsigned long MainInit(const SystemInitParams& systemInitParams);
        virtual void MainShutdown();
        virtual void Update(float arg1);
        virtual void KeepAliveUpdate();
        virtual void GetWindow() const;
        virtual void SetWindow(std::unique_ptr<Window>&& window);
        virtual void GetView() const;
        virtual void SetView(const shared_ptr<OpenGLView>& openGLView);
        virtual void SetSystemInitParams(const SystemInitParams& systemInitParams);
        virtual void SetPostLogicTickCallback(const eastl::function<bool()>& callback);
        virtual void SetFastUpdateLoopEnabled(bool arg1);
        virtual void GetFastUpdateLoopEnabled() const;
        virtual void SetPresentEnabled(bool arg1);
        virtual bool GetPresentEnabled() const;
        virtual void MainLogic();
        virtual bool IsInsideMainLogic();
        virtual void ProcessArguments(const SystemInitParams& systemInitParams);
        virtual void PrintArgUsage();
        virtual void __pure_slot_32() = 0;
        virtual void __pure_slot_33() = 0;
        virtual uint64_t WindowClosedCallback();
        virtual void OnEndFrame();
        void SaveWindowPosition(const Window* arg1);
        void RenderContextInit(render::RenderContextDesc& arg1) const;
        void Instance();
        void SetWindowInitParams(const WindowInitParams& windowInitParams);
        void SetWindowTitle(const char* str);
        void SetMaxForegroundFps(int arg1);
        void SetMaxBackgroundFps(int arg1);
        void GetMainLoopInterval() const;
        void GetFrameCount() const;
        void GetMainLoopRate() const;
        void GetLogicTick() const;
        void GetFPSCounter();
        void GetUniqueLoopID() const;
        GraphicsApp();
        int* GetWindowInitParams();
        void ToggleFullscreenMode();
        RenderContext* GetDefaultRenderContext() const;
        void EnableNVAPI();
        void UpdateMainAppWindow();
        unsigned long HasFocus();
        void ExecuteMainDrawEvents();
        bool HasMainWindowView() const;
        void SetFullScreenMode(bool arg1);
        void SetCursor(const RGBAImage& rgbaImage, unsigned int arg2, unsigned int arg3);
        void ResetCursor();
        void LoadingComplete();
        void QueueMainDrawThreadEvent(
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        void SetupGaiaConnection(unsigned char arg1);
        void ProcessGaiaConnection();
        void SignalApplicationReadyForGaiaProcessing();

    private:
        uint8_t _unknown_1072[56];
        uint8_t** field_1128;
        uint8_t _unknown_1136[8];
        uint8_t** field_1144;
        uint8_t _unknown_1152[1];
        uint8_t field_1153;
        uint8_t _unknown_1154[6];
        MainLoopFrameTimer field_1160;
        uint8_t _unknown_99888[16];
        int m_maxForegroundFps;
        int m_maxBackgroundFps;
        uint8_t _unknown_99912[8];
        shared_ptr field_99920;
        uint8_t _unknown_99936[336];
        int m_windowInitParams;
        uint32_t field_100276;
        uint8_t field_100280;
        uint8_t _unknown_100281[95];
        uint8_t field_100376;
        bool m_presentEnabled;
        uint8_t m_insideMainLogic;
        uint8_t _unknown_100379[1005];
    };

    // 0x1000e2da0
    void GraphicsApp::SetWindowInitParams(const WindowInitParams& windowInitParams) {
        m_windowInitParams = windowInitParams;
    }

    // 0x100188b40
    void GraphicsApp::SetWindowTitle(const char* str) {
        ((Window*)field_99912.operator->())->SetWindowTitle(str);
    }

    // 0x1001892a0
    void GraphicsApp::SetMaxForegroundFps(int arg1) {
        m_maxForegroundFps = arg1;
    }

    // 0x1001892b0
    void GraphicsApp::SetMaxBackgroundFps(int arg1) {
        m_maxBackgroundFps = arg1;
    }

    // 0x100195eb0
    void GraphicsApp::KeepAliveUpdate() {
        ((FPSCounter*)field_1160->GetMaterial())->Reset();
    }

    // 0x100195ef0
    void GraphicsApp::GetWindow() const {
        field_99912.get();
    }

    // 0x100195f10
    void GraphicsApp::GetView() const {
        field_99920->end();
    }

    // 0x100195f30
    void GraphicsApp::SetPostLogicTickCallback(const eastl::function<bool()>& callback) {
        field_100384 = callback;
    }

    // 0x100195f50
    void GraphicsApp::SetFastUpdateLoopEnabled(bool arg1) {
        field_1160->SetAlphaTestThreshold(arg1);
    }

    // 0x100195f70
    void GraphicsApp::GetFastUpdateLoopEnabled() const {
        field_1160->GetFastUpdateLoopEnabled();
    }

    // 0x100195f90
    void GraphicsApp::SetPresentEnabled(bool arg1) {
        m_presentEnabled = arg1;
    }

    // 0x100195fa0
    bool GraphicsApp::GetPresentEnabled() const {
        return m_presentEnabled;
    }

    // 0x100195fb0
    void GraphicsApp::MainLogic() {
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/GraphicsApp.h",
            234, nullptr);
    }

    // 0x100195fd0
    bool GraphicsApp::IsInsideMainLogic() {
        return m_insideMainLogic;
    }

    // 0x1003f5d10
    void GraphicsApp::GetMainLoopInterval() const {
        field_1160->GetX();
    }

    // 0x10042e180
    void GraphicsApp::GetFrameCount() const {
        field_1160->GetMaxLineWidth();
    }

    // 0x100561de0
    void GraphicsApp::GetMainLoopRate() const {
        field_1160->GetZ();
    }

    // 0x1008fc490
    void GraphicsApp::GetLogicTick() const {
        field_1160->GetPos();
    }

    // 0x1008fcad0
    void GraphicsApp::GetFPSCounter() {
        field_1160->GetMaterial();
    }

    // 0x100a3cf20
    void GraphicsApp::GetUniqueLoopID() const {
        field_1160->GetSpritesArchive();
    }

    // 0x100b03f40
    int* GraphicsApp::GetWindowInitParams() {
        return &m_windowInitParams;
    }

    // 0x100b04110
    RenderContext* GraphicsApp::GetDefaultRenderContext() const {
        auto pRVar1 = InstancePtr();
        if (pRVar1 == nullptr) {
            return nullptr;
        }
        pRVar1 = (RenderDevice*)Instance();
        return (RenderContext*)pRVar1->GetPrimaryRenderContext();
    }

    // 0x100b067d0
    GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::~$_3() {}

    // 0x100b0af00
    void
    GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2::operator()(render::RenderContext& renderContext) const {
        renderContext.SetView(*(*(shared_ptr<OpenGLView>**)this));
    }

    // 0x100b0af90
    GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::$_3($_3&& arg1) : shared_ptr(arg1) {}

    // 0x100b0afe0
    GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::$_3(const $_3& arg1) : shared_ptr(arg1) {}

    // 0x100b0b010
    void
    GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::operator()(render::RenderContext& renderContext) const {
        renderContext.SetView(*this);
    }

} // namespace jag
