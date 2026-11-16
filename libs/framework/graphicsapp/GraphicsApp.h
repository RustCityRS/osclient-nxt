// libs/framework/graphicsapp/GraphicsApp.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class GraphicsApp : public BaseApp // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GraphicsApp();
        virtual OnFirstUpdate();
        virtual void MainWindowInit(SystemInitParams const&);
        virtual void MainWindowShutdown();
        virtual MainInit(SystemInitParams const&);
        virtual void MainShutdown();
        virtual void Update(float);
        virtual void KeepAliveUpdate();
        virtual void GetWindow() const;
        virtual void SetWindow(std::unique_ptr<Window, std::default_delete<Window>>&&);
        virtual void GetView() const;
        virtual void SetView(shared_ptr<OpenGLView> const&);
        virtual void SetSystemInitParams(SystemInitParams const&);
        virtual void SetPostLogicTickCallback(eastl::function<bool()> const&);
        virtual void SetFastUpdateLoopEnabled(bool);
        virtual void GetFastUpdateLoopEnabled() const;
        virtual void SetPresentEnabled(bool);
        virtual GetPresentEnabled() const;
        virtual void MainLogic();
        virtual IsInsideMainLogic();
        virtual void ProcessArguments(SystemInitParams const&);
        virtual void PrintArgUsage();
        virtual void __pure_slot_32() = 0;
        virtual void __pure_slot_33() = 0;
        virtual WindowClosedCallback();
        virtual void OnEndFrame();
        SaveWindowPosition(Window const*);
        RenderContextInit(render::RenderContextDesc&) const;
        void Instance();
        void SetWindowInitParams(WindowInitParams const&);
        void SetWindowTitle(char const*);
        void SetMaxForegroundFps(int);
        void SetMaxBackgroundFps(int);
        void GetMainLoopInterval() const;
        void GetFrameCount() const;
        void GetMainLoopRate() const;
        void GetLogicTick() const;
        void GetFPSCounter();
        void GetUniqueLoopID() const;
        GraphicsApp();
        int* GetWindowInitParams();
        void ToggleFullscreenMode();
        GetDefaultRenderContext() const;
        void EnableNVAPI();
        void UpdateMainAppWindow();
        ulong HasFocus();
        void ExecuteMainDrawEvents();
        bool HasMainWindowView() const;
        void SetFullScreenMode(bool);
        void SetCursor(RGBAImage const&, unsigned int, unsigned int);
        void ResetCursor();
        void LoadingComplete();
        void QueueMainDrawThreadEvent(
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        void SetupGaiaConnection(unsigned char);
        void ProcessGaiaConnection();
        void SignalApplicationReadyForGaiaProcessing();

        // data members, from how the methods use this: 101384 bytes, the first 1072 are BaseApp
        char _unknown_1072[56];
        undefined** field_1128; // offset 1128
        char _unknown_1136[8];
        undefined** field_1144; // offset 1144
        char _unknown_1152[1];
        undefined1 field_1153; // offset 1153
        char _unknown_1154[6];
        MainLoopFrameTimer field_1160; // offset 1160
        char _unknown_99888[16];
        int m_maxForegroundFps; // offset 99904
        int m_maxBackgroundFps; // offset 99908
        char _unknown_99912[8];
        shared_ptr field_99920; // offset 99920
        char _unknown_99936[288];
        undefined1 field_100224; // offset 100224
        char _unknown_100225[47];
        int m_windowInitParams;  // offset 100272
        undefined4 field_100276; // offset 100276
        undefined1 field_100280; // offset 100280
        char _unknown_100281[95];
        undefined1 field_100376;      // offset 100376
        bool m_presentEnabled;        // offset 100377
        undefined1 m_insideMainLogic; // offset 100378
        char _unknown_100379[1005];
    };

    // 0x1000e2da0, 32 bytes, inline, placed by class name and debug map
    // GraphicsApp::SetWindowInitParams(WindowInitParams const&)
    void GraphicsApp::SetWindowInitParams(WindowInitParams* param_1) {
        WindowInitParams::operator=((WindowInitParams*)&m_windowInitParams, param_1);
    }

    // 0x100188b40, 48 bytes, inline, placed by class name
    // GraphicsApp::SetWindowTitle(char const*)
    void GraphicsApp::SetWindowTitle(char* param_1) {
        Window* this_00;

        this_00 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
        this_00->SetWindowTitle(param_1);
    }

    // 0x1001892a0, 16 bytes, inline, placed by class name
    // GraphicsApp::SetMaxForegroundFps(int)
    void GraphicsApp::SetMaxForegroundFps(int param_1) {
        m_maxForegroundFps = param_1;
    }

    // 0x1001892b0, 16 bytes, inline, placed by class name
    // GraphicsApp::SetMaxBackgroundFps(int)
    void GraphicsApp::SetMaxBackgroundFps(int param_1) {
        m_maxBackgroundFps = param_1;
    }

    // 0x100195eb0, 32 bytes, inline, placed by class name
    // GraphicsApp::KeepAliveUpdate()
    void GraphicsApp::KeepAliveUpdate() {
        FPSCounter* this_00;

        this_00 = (FPSCounter*)field_1160->GetMaterial();
        this_00->Reset();
    }

    // 0x100195ef0, 32 bytes, inline, placed by class name
    // GraphicsApp::GetWindow() const
    void GraphicsApp::GetWindow() {
        (&field_99912)->get();
    }

    // 0x100195f10, 32 bytes, inline, placed by class name
    // GraphicsApp::GetView() const
    void GraphicsApp::GetView() {
        field_99920->end();
    }

    // 0x100195f30, 32 bytes, inline, placed by class name
    // GraphicsApp::SetPostLogicTickCallback(eastl::function<bool ()> const&)
    void GraphicsApp::SetPostLogicTickCallback(function* param_1) {
        eastl::function<bool()>::operator=((function<bool()>*)&field_100384, param_1);
    }

    // 0x100195f50, 32 bytes, inline, placed by class name
    // GraphicsApp::SetFastUpdateLoopEnabled(bool)
    void GraphicsApp::SetFastUpdateLoopEnabled(bool param_1) {
        (field_1160, param_1)->SetAlphaTestThreshold();
    }

    // 0x100195f70, 32 bytes, inline, placed by class name
    // GraphicsApp::GetFastUpdateLoopEnabled() const
    void GraphicsApp::GetFastUpdateLoopEnabled() {
        field_1160->GetFastUpdateLoopEnabled();
    }

    // 0x100195f90, 16 bytes, inline, placed by class name
    // GraphicsApp::SetPresentEnabled(bool)
    void GraphicsApp::SetPresentEnabled(bool param_1) {
        m_presentEnabled = param_1;
    }

    // 0x100195fa0, 16 bytes, inline, placed by class name
    // GraphicsApp::GetPresentEnabled() const
    undefined1 GraphicsApp::GetPresentEnabled() {
        return m_presentEnabled;
    }

    // 0x100195fb0, 32 bytes, inline, placed by class name
    // GraphicsApp::MainLogic()
    void GraphicsApp::MainLogic() {
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/GraphicsApp.h",
            234, (char*)0);
    }

    // 0x100195fd0, 16 bytes, inline, placed by class name
    // GraphicsApp::IsInsideMainLogic()
    undefined1 GraphicsApp::IsInsideMainLogic() {
        return m_insideMainLogic;
    }

    // 0x1003f5d10, 32 bytes, inline, placed by class name
    // GraphicsApp::GetMainLoopInterval() const
    void GraphicsApp::GetMainLoopInterval() {
        field_1160->GetX();
    }

    // 0x10042e180, 32 bytes, inline, placed by class name
    // GraphicsApp::GetFrameCount() const
    void GraphicsApp::GetFrameCount() {
        field_1160->GetMaxLineWidth();
    }

    // 0x100561de0, 32 bytes, inline, placed by class name
    // GraphicsApp::GetMainLoopRate() const
    void GraphicsApp::GetMainLoopRate() {
        field_1160->GetZ();
    }

    // 0x1008fc490, 32 bytes, inline, placed by class name
    // GraphicsApp::GetLogicTick() const
    void GraphicsApp::GetLogicTick() {
        field_1160->GetPos();
    }

    // 0x1008fcad0, 32 bytes, inline, placed by class name
    // GraphicsApp::GetFPSCounter()
    void GraphicsApp::GetFPSCounter() {
        field_1160->GetMaterial();
    }

    // 0x100a3cf20, 32 bytes, inline, placed by class name
    // GraphicsApp::GetUniqueLoopID() const
    void GraphicsApp::GetUniqueLoopID() {
        field_1160->GetSpritesArchive();
    }

    // 0x100b03f40, 16 bytes, inline, placed by class name
    // GraphicsApp::GetWindowInitParams()
    int* GraphicsApp::GetWindowInitParams() {
        return &m_windowInitParams;
    }

    // 0x100b04110, 48 bytes, inline, placed by class name
    // GraphicsApp::GetDefaultRenderContext() const
    undefined8 GraphicsApp::GetDefaultRenderContext() {
        RenderDevice* this_00;

        if (Singleton<render::RenderDevice>::InstancePtr() == 0) {
            return 0;
        }
        this_00 = (RenderDevice*)Instance();
        return this_00->GetPrimaryRenderContext();
    }

    // 0x100b05de0, 16 bytes, complete-object destructor, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::~$_3(): jumps straight to the base-object destructor

    // 0x100b067d0, 16 bytes, base-object destructor, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::~$_3()
    /* ~$_3() */

    void GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::~__3() {
        ~shared_ptr();
    }

    // 0x100b0af00, 32 bytes, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2::operator()(render::RenderContext&) const
    /* GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const */

    void GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2::operator()(RenderContext* param_1) {
        param_1->SetView(*(shared_ptr**)this);
    }

    // 0x100b0af80, 16 bytes, complete-object constructor, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::$_3($_3&&): jumps straight to the base-object constructor

    // 0x100b0af90, 16 bytes, base-object constructor, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::$_3($_3&&)
    /* $_3($_3&&) */

    void GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::__3(__3* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
    }

    // 0x100b0afd0, 16 bytes, complete-object constructor, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::$_3($_3 const&): jumps straight to the base-object constructor

    // 0x100b0afe0, 16 bytes, base-object constructor, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::$_3($_3 const&)
    /* $_3($_3 const&) */

    void GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::__3(__3* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
    }

    // 0x100b0b010, 32 bytes, inline, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::operator()(render::RenderContext&) const
    /* GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const */

    void GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3::operator()(RenderContext* param_1) {
        param_1->SetView(this);
    }

} // namespace jag
