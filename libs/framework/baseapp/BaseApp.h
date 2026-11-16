// libs/framework/baseapp/BaseApp.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class BaseApp : public graphics::FullscreenQuadPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BaseApp();
        virtual PauseAudio();
        virtual void MainInit(SystemInitParams const&);
        virtual void Update(float);
        virtual void SetAppRunning(bool);
        virtual GetInputHAL();
        virtual void SetWindow(std::unique_ptr<Window, std::default_delete<Window>>&&);
        virtual void SetView(shared_ptr<OpenGLView> const&);
        virtual void SetSystemInitParams(SystemInitParams const&);
        virtual OnMainInit(SystemInitParams const&);
        GetAppRunning() const;
        GetExitAfterInit();
        GetExitCode();
        OsxOpenUrls(Array<eastl::string, eastl::allocator>&&);
        ResumeAudio();
        MainShutdown();
        MainWindowInit(SystemInitParams const&);
        DeviceLostFocus();
        KeepAliveUpdate();
        SetPresentEnabled(bool);
        MainWindowShutdown();
        SetFastUpdateLoopEnabled(bool);
        SetPostLogicTickCallback(eastl::function<bool()> const&);
        Resize(float, float);
        Configure(SystemInitParams&);
        GetFastUpdateLoopEnabled() const;
        GetView() const;
        GetWindow() const;
        GetPresentEnabled() const;
        void SetAppInstance(BaseApp*);
        GetAppInstance();
        BaseApp();
        void
        QueueMainThreadEvent(fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        void RunSynchronousMainThreadEvent(
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        void UpdateInternal();
        void ExecuteMainThreadEvents();
        static /* 8 bytes */ m_pApp;

        // data members, from how the methods use this: 1072 bytes, the first 568 are FullscreenQuadPass
        char _unknown_568[504];
    };

    // 0x1000092e0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BaseApp::GetAppRunning() const
    /* ui::ButtonElement::IsMouseOver() const */

    undefined1 ui::ButtonElement::IsMouseOver() {
        return m_mouseOver;
    }

    // 0x1000096a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BaseApp::GetExitAfterInit()
    /* oldscape::rs2lib::worldmap::WorldmapRenderer::IsValid() const */

    undefined1 oldscape::rs2lib::worldmap::WorldmapRenderer::IsValid() {
        return m_valid;
    }

    // 0x100009720, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BaseApp::GetExitCode()
    /* oldscape::graphics::NXTPixScreen::GetUIHeight() const */

    undefined4 oldscape::graphics::NXTPixScreen::GetUIHeight() {
        return m_uIHeight;
    }

    // 0x100187600, 16 bytes, inline, placed by class name
    // BaseApp::SetAppInstance(BaseApp*)
    void BaseApp::SetAppInstance(BaseApp* param_1) {
        m_pApp = param_1;
    }

    // 0x100195ed0, 16 bytes, inline, placed by class name
    // BaseApp::SetAppRunning(bool)
    void BaseApp::SetAppRunning(bool param_1) {
        m_appRunning = param_1;
    }

    // 0x100c1a4a0, 16 bytes, inline, placed by class name
    // BaseApp::GetAppInstance()
    undefined8 BaseApp::GetAppInstance() {
        return m_pApp;
    }

    // 0x100c99670, 48 bytes, inline, placed by class name
    // BaseApp::MainInit(SystemInitParams const&)
    void BaseApp::MainInit(SystemInitParams* param_1) {
        (*(code*)field_0[16])();
        (*(code*)field_0[26])(this, param_1);
    }

    // 0x100c996a0, 48 bytes, inline, placed by class name
    // BaseApp::Update(float)
    void BaseApp::Update(float param_1) {
        UpdateInternal(this);
        (*(code*)field_0[27])(this);
    }

    // 0x100c996d0, 32 bytes, inline, placed by class name
    // BaseApp::SetWindow(std::unique_ptr<Window, std::default_delete<Window> >&&)
    /* BaseApp::SetWindow(std::unique_ptr<Window, std::default_delete<Window> >&&) */

    void BaseApp::SetWindow(unique_ptr* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/baseapp/BaseApp.h", 92,
            (char*)0);
    }

    // 0x100c996f0, 32 bytes, inline, placed by class name
    // BaseApp::SetView(shared_ptr<OpenGLView> const&)
    void BaseApp::SetView(shared_ptr* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/baseapp/BaseApp.h", 95,
            (char*)0);
    }

    // 0x100c99710, 16 bytes, inline, placed by class name
    // BaseApp::SetSystemInitParams(SystemInitParams const&)
    void BaseApp::SetSystemInitParams(SystemInitParams* param_1) {
        SystemInitParams::operator=((SystemInitParams*)field_16, param_1);
    }

    // 0x100c9a220, 48 bytes, inline, placed by class name
    // BaseApp::RunSynchronousMainThreadEvent(fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_0::operator()(BaseApp*) const
    /* BaseApp::RunSynchronousMainThreadEvent(fixedfunction::function<void (BaseApp*),
   128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    void BaseApp::RunSynchronousMainThreadEvent(
        fixedfunction::function<void(BaseApp*), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_0::operator()(BaseApp* param_1) {
        BaseApp* local_18;

        local_18 = param_1;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            *(function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>**)(this + 8), &local_18);
        (*(Fence**)this)->Signal();
    }

} // namespace jag

namespace jag::graphics {
    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    AnimCurveSegmentCacheBase::IsReady() const;

} // namespace jag::graphics

namespace jag::game {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    uint BaseConfigTypeList::GetGroupCount() const;

} // namespace jag::game
