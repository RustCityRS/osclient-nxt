// libs/framework/baseapp/BaseApp.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "BaseApp.h"

namespace jag {
    // 0x103bdd1d8, 8 bytes, __common; zero-initialised
    BaseApp::m_pApp;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::PauseAudio();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::OsxOpenUrls(Array<eastl::string, eastl::allocator>&&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::ResumeAudio();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::MainShutdown();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::MainWindowInit(SystemInitParams const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::DeviceLostFocus();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::KeepAliveUpdate();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::SetPresentEnabled(bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::MainWindowShutdown();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::SetFastUpdateLoopEnabled(bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::SetPostLogicTickCallback(eastl::function<bool()> const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::Resize(float, float);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseApp::Configure(SystemInitParams&);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    BaseApp::GetInputHAL();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    BaseApp::GetFastUpdateLoopEnabled() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    BaseApp::GetView() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    BaseApp::GetWindow() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    BaseApp::OnMainInit(SystemInitParams const&);

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    BaseApp::GetPresentEnabled() const;

    // 0x100c99120, 176 bytes, base-object constructor, placed by class name and debug map
    // BaseApp::BaseApp()
    void BaseApp::BaseApp() {
        Logger* pLVar1;

        field_0 = &PTR__BaseApp_100f29c70;
        *(undefined2*)&field_8 = 0;
        *(undefined8*)field_16 = 0;
        *(undefined8*)(field_16 + 8) = 0;
        *(undefined8*)(field_16 + 16) = 0;
        *(undefined8*)(field_16 + 24) = 0;
        field_48 = 0;
        field_56 = 0;
        field_64 = 0;
        new (field_16) SystemInitParams();
        pLVar1 = (Logger*)logger::default_logger();
        new (&field_72, pLVar1) logger::LoggerAssertionPresenter();
        new (&field_88, (IAssertPresenter*)&field_72) ScopedAssertionPresenter();
        field_96 = 0;
        eastl::fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul, true>::
            fixed_queue((fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                     4ul, true>*)&field_104);
        new (&field_1064) std::mutex();
    }

    // 0x100c991f0, 80 bytes, base-object destructor, placed by class name and debug map
    // BaseApp::~BaseApp()
    void BaseApp::~BaseApp() {
        field_0 = &PTR__BaseApp_100f29c70;
        (&field_1064)->~mutex();
        eastl::fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul, true>::
            ~fixed_queue((fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul, true>*)&field_104);
        (&field_88)->~ScopedAssertionPresenter();
        field_16->~SystemInitParams();
    }

    // 0x100c99250, 16 bytes, complete-object destructor, placed by class name and debug map
    // BaseApp::~BaseApp(): jumps straight to the base-object destructor

    // 0x100c99260, 16 bytes, deleting destructor, placed by class name and debug map
    // BaseApp::~BaseApp()
    void BaseApp::~BaseApp() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100c99270, 128 bytes, placed by class name and debug map
    // BaseApp::QueueMainThreadEvent(fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void BaseApp::QueueMainThreadEvent(function* param_1) {
        BaseApp* local_20;

        if (this_thread::IsMainThread() == '\0') {
            new (&local_20) std::scoped_lock<std::mutex>((mutex*)&field_1064);
            eastl::queue<
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                                  true, eastl::allocator>>::
                push((queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                            eastl::fixed_list<
                                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                                true, eastl::allocator>>*)&field_104,
                     param_1);
            local_20.~scoped_lock();
        } else {
            local_20 = this;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)param_1, &local_20);
        }
    }

    // 0x100c99300, 304 bytes, placed by class name and debug map
    // BaseApp::RunSynchronousMainThreadEvent(fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void BaseApp::RunSynchronousMainThreadEvent(function* param_1) {
        Fence* local_160;
        function* local_158;
        scoped_lock<std::mutex> local_150[8];
        function local_148;
        Fence local_a0;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this_thread::IsMainThread() == '\0') {
            new (&local_a0) Fence();
            std::scoped_lock<std::mutex>::scoped_lock(local_150, (mutex*)&field_1064);
            local_160 = &local_a0;
            local_158 = param_1;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                BaseApp::RunSynchronousMainThreadEvent(
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__0,
                void>((function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_148, (__0*)&local_160);
            eastl::queue<
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                                  true, eastl::allocator>>::
                push((queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                            eastl::fixed_list<
                                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                                true, eastl::allocator>>*)&field_104,
                     &local_148);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_148);
            std::scoped_lock<std::mutex>::~scoped_lock(local_150);
            local_a0.Wait();
            local_a0.~Fence();
        } else {
            local_148.field_0 = (long)this;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)param_1, (BaseApp**)&local_148);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c99470, 32 bytes, placed by class name and debug map
    // BaseApp::UpdateInternal()
    void BaseApp::UpdateInternal() {
        this_thread::SetMainThread(false);
        ExecuteMainThreadEvents(this);
    }

    // 0x100c99490, 352 bytes, placed by class name and debug map
    // BaseApp::ExecuteMainThreadEvents()
    void BaseApp::ExecuteMainThreadEvents() {
        undefined1* this_00;
        undefined1* puVar1;
        char cVar2;
        function* pfVar3;
        int iVar4;
        BaseApp* local_e8;
        BaseApp* local_e0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e0 = this;
        cVar2 = this_thread::IsMainThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "this_thread::IsMainThread()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/baseapp/BaseApp.cpp",
                67, (char*)0);
        }
        puVar1 = &local_e0->field_1064;
        this_00 = &local_e0->field_104;
        do {
            new (local_d8) math::Vector2T<int>();
            new (&local_e8) std::scoped_lock<std::mutex>(puVar1);
            cVar2 = this_00->empty();
            iVar4 = 3;
            if (cVar2 == '\0') {
                pfVar3 = (function*)eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul, true, eastl::allocator>>::front();
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator=(
                    (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, pfVar3);
                iVar4 = 0;
                eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul, true, eastl::allocator>>::
                    pop((queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                               eastl::fixed_list<
                                   fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                                   true, eastl::allocator>>*)this_00);
            }
            local_e8.~scoped_lock();
            if (cVar2 == '\0') {
                local_e8 = local_e0;
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                    (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, &local_e8);
                iVar4 = 0;
            }
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                local_d8);
        } while (iVar4 == 0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x100c9a1e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c9a1f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void
   (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
   void>(BaseApp::RunSynchronousMainThreadEvent(function<void
   (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c9a200, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c9a210, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void
   (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0,
   void>(BaseApp::RunSynchronousMainThreadEvent(function<void
   (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        (function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)
            ->RunSynchronousMainThreadEvent()::$_0::operator()(param_1, param_2);
    }

    // 0x100c9a250, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(BaseApp::RunSynchronousMainThreadEvent(function<void (BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0, void>(
        BaseApp::RunSynchronousMainThreadEvent(function<void(BaseApp*), 128ul, 16ul, (Methods)0> const&)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction
