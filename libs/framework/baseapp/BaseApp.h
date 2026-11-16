// libs/framework/baseapp/BaseApp.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class BaseApp : public graphics::FullscreenQuadPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BaseApp();
        virtual void PauseAudio();
        virtual void MainInit(const SystemInitParams& systemInitParams);
        virtual void Update(float arg1);
        virtual void SetAppRunning(bool arg1);
        virtual uint64_t GetInputHAL();
        virtual void SetWindow(std::unique_ptr<Window>&& window);
        virtual void SetView(const shared_ptr<OpenGLView>& openGLView);
        virtual void SetSystemInitParams(const SystemInitParams& systemInitParams);
        virtual uint8_t OnMainInit(const SystemInitParams& arg1);
        uint8_t GetAppRunning() const;
        uint8_t GetExitAfterInit();
        uint32_t GetExitCode();
        void OsxOpenUrls(Array<eastl::string>&& arg1);
        void ResumeAudio();
        void MainShutdown();
        void MainWindowInit(const SystemInitParams& arg1);
        void DeviceLostFocus();
        void KeepAliveUpdate();
        void SetPresentEnabled(bool arg1);
        void MainWindowShutdown();
        void SetFastUpdateLoopEnabled(bool arg1);
        void SetPostLogicTickCallback(const eastl::function<bool()>& arg1);
        void Resize(float arg1, float arg2);
        void Configure(SystemInitParams& arg1);
        uint64_t GetFastUpdateLoopEnabled() const;
        uint64_t GetView() const;
        uint64_t GetWindow() const;
        uint8_t GetPresentEnabled() const;
        void SetAppInstance(BaseApp* baseApp);
        BaseApp* GetAppInstance();
        BaseApp();
        void QueueMainThreadEvent(
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        void RunSynchronousMainThreadEvent(
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        void UpdateInternal();
        void ExecuteMainThreadEvents();
        static int64_t m_pApp;

    private:
        uint8_t _unknown_568[504];
    };

    // 0x1000092e0
    uint8_t BaseApp::GetAppRunning() const {
        return m_mouseOver;
    }

    // 0x1000096a0
    uint8_t BaseApp::GetExitAfterInit() {
        return m_valid;
    }

    // 0x100009720
    uint32_t BaseApp::GetExitCode() {
        return m_uIHeight;
    }

    // 0x100187600
    void BaseApp::SetAppInstance(BaseApp* baseApp) {
        m_pApp = baseApp;
    }

    // 0x100195ed0
    void BaseApp::SetAppRunning(bool arg1) {
        m_appRunning = arg1;
    }

    // 0x100c1a4a0
    BaseApp* BaseApp::GetAppInstance() {
        return m_pApp;
    }

    // 0x100c99670
    void BaseApp::MainInit(const SystemInitParams& systemInitParams) {
        SetSystemInitParams();
        GetPresentEnabled(systemInitParams);
    }

    // 0x100c996a0
    void BaseApp::Update(float arg1) {
        UpdateInternal();
        (*this->_vptr[1]._dtor)(this);
    }

    // 0x100c996d0
    void BaseApp::SetWindow(std::unique_ptr<Window>&& window) {
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/baseapp/BaseApp.h", 92,
            nullptr);
    }

    // 0x100c996f0
    void BaseApp::SetView(const shared_ptr<OpenGLView>& openGLView) {
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/baseapp/BaseApp.h", 95,
            nullptr);
    }

    // 0x100c99710
    void BaseApp::SetSystemInitParams(const SystemInitParams& systemInitParams) {
        *field_16 = systemInitParams;
    }

    // 0x100c9a220
    void BaseApp::RunSynchronousMainThreadEvent(
        fixedfunction::function<void(BaseApp*), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_0::operator()(BaseApp* baseApp) const {
        BaseApp* local_18 = baseApp;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            *(function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>**)(this + 8), &local_18);
        (*(Fence**)this)->Signal();
    }

} // namespace jag

namespace jag::graphics {
    // 0x1000096a0: AnimCurveSegmentCacheBase::IsReady() const has the same machine code as BaseApp::GetExitAfterInit()

} // namespace jag::graphics

namespace jag::game {
    // 0x100009720: BaseConfigTypeList::GetGroupCount() const has the same machine code as BaseApp::GetExitCode()

} // namespace jag::game
