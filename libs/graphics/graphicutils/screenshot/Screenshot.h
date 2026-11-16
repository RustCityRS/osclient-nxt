// libs/graphics/graphicutils/screenshot/Screenshot.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    // 0x100b0ae80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::__2, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __2* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_2&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100b0aec0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100b0aed0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_2&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100b0aee0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100b0aef0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_2&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_2::operator()(param_1, param_2);
    }

    // 0x100b0af20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100b0af30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::__3, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __3* param_1) {
        *(undefined8*)this = 0;
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::__3((__3*)(this + 16), (__3*)param_1);
        *(code**)(this + 144) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100b0afa0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100b0afb0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::__3(param_2, param_1);
    }

    // 0x100b0aff0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100b0b000, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::operator()(param_1, param_2);
    }

    // 0x100b0b030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100b0b040, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView>
   const&)::$_3&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::~__3((__3*)this);
    }

} // namespace jag::fixedfunction

namespace jag {
    // 0x100b080c0, 64 bytes, inline, placed by debug map only (low confidence)
    // OpenGLView* placement_new<OpenGLView, float, float, float, float, Window*, input::Input*>(void*, float&&, float&&, float&&, float&&, Window*&&, input::Input*&&)
    OpenGLView* placement_new<OpenGLView, float, float, float, float, Window*, input::Input*>(
        void* param_1, float* param_2, float* param_3, float* param_4, float* param_5, Window** param_6,
        Input** param_7) {
        OpenGLView::OpenGLView(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7);
        return param_1;
    }

    // 0x100b08100, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<OpenGLView>* placement_new<ref_counter_shared<OpenGLView>, int, OpenGLView*&>(void*, int&&, OpenGLView*&)
    ref_counter_shared* placement_new<ref_counter_shared<OpenGLView>, int, OpenGLView*&>(void* param_1, int* param_2,
                                                                                         OpenGLView** param_3) {
        ref_counter_shared<OpenGLView>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100b08120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<OpenGLView>::ref_counter_shared(unsigned long, OpenGLView*): jumps straight to the base-object constructor

    // 0x100b08130, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<OpenGLView>::ref_counter_shared(unsigned long, OpenGLView*)
    void ref_counter_shared<OpenGLView>::ref_counter_shared(ulong param_1, OpenGLView* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7200 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OpenGLView**)(this + 24) = param_2;
    }

    // 0x100b08170, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<OpenGLView>::DeleteData()
    void ref_counter_shared<OpenGLView>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 376;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100b08b00, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char
   const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#1},
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char
   const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#1},
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                          GraphicsApp::MainShutdown()::$_0&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

} // namespace jag

namespace jag::graphicutils {
    class Screengrabber {
    public:
        GetScreenshotData() const;
        SetScreenshotSaveMode(unsigned char);
        Screengrabber();
        ~Screengrabber();
        void ClearRecentScreenshotData();
        void RequestScreenshot(eastl::string const&);
        void RegisterOnScreenGrabbedListener(
            std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)> const&);
        void OnScreenGrabbed();
        Screengrabber* ReadBackbuffer(int, int, int);
        void WriteOutScreenshots(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&, int,
                                 int, int);
        static /* 8 bytes */ DEFAULT_PNG_FILENAME; // = "test_screenshot.png"

        // data members, from how the methods use this: 104 bytes
        pair* field_0; // offset 0
        pair* field_8; // offset 8
        char _unknown_16[16];
        undefined1 field_32; // offset 32
        char _unknown_33[71];
    };

    // 0x100b07a70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Screengrabber::Screengrabber(): jumps straight to the base-object constructor

    // 0x100b07a90, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Screengrabber::Screengrabber()
    void Screengrabber::Screengrabber() {
        new (this) Singleton<Screengrabber>();
        new (this) eastl::vector<eastl::pair<PacketT<Array<unsigned char, eastl::allocator>>, eastl::string>,
                                 eastl::allocator>();
        field_32 = 2;
        new (&field_40) eastl::vector<eastl::string, eastl::allocator>();
        eastl::vector<
            std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)>,
            eastl::allocator>::
            vector((vector<
                    std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)>,
                    eastl::allocator>*)&field_72);
    }

    // 0x100b07c20, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Screengrabber::~Screengrabber(): jumps straight to the base-object destructor

    // 0x100b07c30, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Screengrabber::~Screengrabber()
    void Screengrabber::~Screengrabber() {
        eastl::vector<
            std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)>,
            eastl::allocator>::
            ~vector((vector<
                     std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)>,
                     eastl::allocator>*)&field_72);
        (&field_40)->~vector();
        ~vector();
        ~AutoSingleton();
    }

} // namespace jag::graphicutils
