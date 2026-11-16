// libs/framework/baseapp/BaseApp.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

#include "BaseApp.h"

namespace jag {
    // 0x103bdd1d8
    int64_t BaseApp::m_pApp;

    // 0x100009e70: BaseApp::PauseAudio() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::OsxOpenUrls(Array<eastl::string>&&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::ResumeAudio() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::MainShutdown() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::MainWindowInit(SystemInitParams const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::DeviceLostFocus() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::KeepAliveUpdate() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::SetPresentEnabled(bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::MainWindowShutdown() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::SetFastUpdateLoopEnabled(bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::SetPostLogicTickCallback(eastl::function<bool ()> const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::Resize(float, float) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseApp::Configure(SystemInitParams&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: BaseApp::GetInputHAL() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: BaseApp::GetFastUpdateLoopEnabled() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: BaseApp::GetView() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: BaseApp::GetWindow() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: BaseApp::OnMainInit(SystemInitParams const&) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: BaseApp::GetPresentEnabled() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100c99120
    BaseApp::BaseApp() {
        Logger* logger;

        *(uint16_t*)&field_8 = 0;
        *(uint64_t*)field_16 = 0;
        *(uint64_t*)(field_16 + 8) = 0;
        *(uint64_t*)(field_16 + 16) = 0;
        *(uint64_t*)(field_16 + 24) = 0;
        field_48 = 0;
        field_56 = 0;
        field_64 = 0;
        new (field_16) SystemInitParams();
        logger = logger::default_logger();
        new (&field_72) logger::LoggerAssertionPresenter(*logger);
        new (&field_88) ScopedAssertionPresenter(field_72);
        m_exitCode = 0;
        new (&field_104)
            eastl::fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                               true>();
        new (&field_1064) std::mutex();
    }

    // 0x100c991f0
    BaseApp::~BaseApp() {
        (&field_1064)->~mutex();
        field_104.~fixed_queue();
        field_88.~ScopedAssertionPresenter();
        field_16->~SystemInitParams();
    }

    // 0x100c99270
    void BaseApp::QueueMainThreadEvent(
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        BaseApp* local_20;

        if (this_thread::IsMainThread() == '\0') {
            new (&local_20) std::scoped_lock(field_1064);
            field_104.push(callback);
        } else {
            local_20 = this;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)callback, &local_20);
        }
    }

    // 0x100c99300
    void BaseApp::RunSynchronousMainThreadEvent(
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        Fence* local_160;
        function<void_(BaseApp*), _128ul, _16ul, _(fixedfunction::Methods) 0>* local_158;
        scoped_lock<std::mutex> local_150;
        BaseApp* local_148[21];
        Fence local_a0;
        long local_28;

        if (!(this_thread::IsMainThread())) {
            local_a0 = Fence();
            local_150 = std::scoped_lock(field_1064);
            local_160 = &local_a0;
            local_158 = callback;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                BaseApp::RunSynchronousMainThreadEvent(
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__0,
                void>((function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_148, (__0*)&local_160);
            field_104.push(*local_148);
            local_a0.Wait();
        } else {
            local_148[0] = this;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)callback, local_148);
        }
    }

    // 0x100c99470
    void BaseApp::UpdateInternal() {
        this_thread::SetMainThread(false);
        ExecuteMainThreadEvents();
    }

    // 0x100c99490
    void BaseApp::ExecuteMainThreadEvents() {
        function<void_(BaseApp*), _128ul, _16ul, _(fixedfunction::Methods) 0>* callback;
        int iVar2;
        BaseApp* local_e8;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        BaseApp* local_e0 = this;
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert(
                "this_thread::IsMainThread()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/baseapp/BaseApp.cpp",
                67, nullptr);
        }
        uint8_t* mutex = &local_e0->field_1064;
        uint8_t* this_00 = &local_e0->field_104;
        do {
            new (local_d8) math::Vector2T();
            new (&local_e8) std::scoped_lock(*mutex);
            cVar1 = this_00->empty();
            iVar2 = 3;
            if (!cVar1) {
                callback = (function<void_(BaseApp*), _128ul, _16ul, _(fixedfunction::Methods) 0>*)eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul>>::front();
                *local_d8 = *callback;
                iVar2 = 0;
                eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul>>::pop();
            }
            if (!cVar1) {
                local_e8 = local_e0;
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                    (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, &local_e8);
                iVar2 = 0;
            }
        } while (iVar2 == 0);
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x100c9a1e0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c9a1f0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c9a200
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
    }

    // 0x100c9a210
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)
            ->RunSynchronousMainThreadEvent()::$_0::operator()((__0*)this, arg1);
    }

    // 0x100c9a250
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction
