// libs/graphics/graphicutils/screenshot/Screenshot.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::fixedfunction {
    // 0x100b0ae80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_2&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100b0aec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100b0aed0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100b0aee0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100b0aef0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_2::operator()((__2*)this, arg1);
    }

    // 0x100b0af20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100b0af30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&& arg1) {
        *(uint64_t*)this = 0;
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::__3((__3*)(this + 16), (__3*)arg1);
        *(void (**)(...))(this + 144) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
            (shared_ptr<OpenGLView> const&)->SetView()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100b0afa0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100b0afb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::__3(arg1, (__3*)this);
    }

    // 0x100b0aff0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100b0b000
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::operator()((__3*)this, arg1);
    }

    // 0x100b0b030
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100b0b040
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(
        GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (shared_ptr<OpenGLView> const&)->SetView()::$_3::~__3((__3*)this);
    }

} // namespace jag::fixedfunction

namespace jag {
    // 0x100b080c0
    OpenGLView* placement_new<OpenGLView, float, float, float, float, Window*, input::Input*>(
        void* arg1, float&& arg2, float&& arg3, float&& arg4, float&& arg5, Window*&& arg6, input::Input*&& arg7) {
        new (arg1) OpenGLView(arg2, arg3, arg4, arg5, arg6, arg7);
        return arg1;
    }

    // 0x100b08100
    ref_counter_shared<OpenGLView>*
    placement_new<ref_counter_shared<OpenGLView>, int, OpenGLView*&>(void* arg1, int&& arg2, OpenGLView*& arg3) {
        new (arg1) ref_counter_shared<OpenGLView>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100b08130
    ref_counter_shared<OpenGLView>::ref_counter_shared(unsigned long arg1, OpenGLView* openGLView)
        : ref_counter_base() {}

    // 0x100b08170
    void ref_counter_shared<OpenGLView>::DeleteData() {
        long lVar1;
        ref_counter_shared<OpenGLView> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<OpenGLView> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 376;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100b08b00
    void SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                          GraphicsApp::MainShutdown()::$_0&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(std::__packaged_task_func<
                                   ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(
                                       char const*, GraphicsApp::MainShutdown()::$_0&&)::{ lambda() #1 },
                                   SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                               unsigned long arg2) {
        DeAllocate(16, arg2);
    }

} // namespace jag

namespace jag::graphicutils {
    class Screengrabber {
    public:
        void GetScreenshotData() const;
        void SetScreenshotSaveMode(unsigned char arg1);
        Screengrabber();
        ~Screengrabber();
        void ClearRecentScreenshotData();
        void RequestScreenshot(const eastl::string& str);
        void
        RegisterOnScreenGrabbedListener(std::function<void(std::unique_ptr<unsigned char[]> const&)> const& callback);
        void OnScreenGrabbed();
        auto ReadBackbuffer(int arg1, int arg2, int arg3);
        void WriteOutScreenshots(const std::unique_ptr<unsigned char[]>& arg1, int arg2, int arg3, int arg4);
        static const char* DEFAULT_PNG_FILENAME; // = "test_screenshot.png"

    private:
        pair<PacketT<Array<unsigned char>>, eastl::string>* field_0;
        pair<PacketT<Array<unsigned char>>, eastl::string>* field_8;
        uint8_t _unknown_16[16];
        uint8_t m_screenshotSaveMode;
        uint8_t _unknown_33[71];
    };

    // 0x100b07a90
    Screengrabber::Screengrabber()
        : Singleton<Screengrabber>(), eastl::vector<eastl::pair<PacketT<Array<unsigned char>>, eastl::string>>(),
          m_screenshotSaveMode(2) {
        new ((vector<std::function<void(std::unique_ptr<unsigned char[]> const&)>>*)&field_72)
            eastl::vector<std::function<void(std::unique_ptr<unsigned char[]> const&)>>();
    }

    // 0x100b07c30
    Screengrabber::~Screengrabber() {
        ((vector<std::function<void(std::unique_ptr<unsigned char[]> const&)>>*)&field_72)->~vector();
        field_40.~vector();
    }

} // namespace jag::graphicutils
