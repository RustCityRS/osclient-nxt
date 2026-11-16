// libs/hal/render/textures/TextureCube.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::fixedfunction {
    // 0x100bd73f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bd7430
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bd7440
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bd7450
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bd7460
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::VAOManager::DestroyRenderingResources()::$_3::operator()((__3*)this, arg1);
    }

    // 0x100bd7d20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bd8470
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&& arg1) {
        *(uint64_t*)this = 0;
        *(VAOManager**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bd84b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bd84c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bd84d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bd84e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::VAOManager::OnEndFrame()::$_4::operator()((__4*)this, arg1);
    }

    // 0x100bd8500
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bd87e0
    function<void(BaseApp*), 128ul, 16ul,
             (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, render::Format, void const*)::$_6,
                                   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                   unsigned int, unsigned int, render::Format,
                                                                   void const*)::$_6&& arg1) {
        *(uint64_t*)this = 0;
        unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                             void const*)::$_6::__6((__6*)(this + 16), (__6*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                               render::Format, void const*)::$_6,
                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                                void const*)::$_6&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                               render::Format, void const*)::$_6,
                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                                void const*)::$_6&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) =
            function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                               render::Format, void const*)::$_6,
                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                                void const*)::$_6&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bd8870
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void const*)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bd8880
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void const*)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                             void const*)::$_6::__6(arg1, (__6*)this);
    }

    // 0x100bd88e0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void const*)::$_6&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
    }

    // 0x100bd88f0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void const*)::$_6&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                             void const*)::$_6::operator()((__6*)this, arg1);
    }

    // 0x100bd8a30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void const*)::$_6::operator()(BaseApp*) const ::{
          lambda(render::RenderContext&) #1
      } && arg1) {
        *(uint64_t*)this = 0;
        const ::{
            lambda(render::RenderContext&) #1
        }
        ::RenderContext___1____((_lambda_jag__render__RenderContext___1_*)(this + 16),
                                (_lambda_jag__render__RenderContext___1_*)arg1);
        *(void (**)(...))(this + 144) =
            function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 render::Format, void const*)::$_6::operator()(BaseApp*) const ::{
            lambda(void*, void*) #1
        }
        (render::RenderContext&)#1
    },void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*)const::{
        lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(void (**)(...))this = function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, render::Format,
                                                             void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(void (**)(...))(this + 152) = function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                     unsigned int, unsigned int, render::Format,
                                                                     void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100bd8ac0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_6::operator()(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                         render::Format, void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                   void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()((_lambda_void__void___1_*)this, arg1, arg2);
}

// 0x100bd8ad0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_6::operator()(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::RenderContext___1__const__(arg1, (_lambda_jag__render__RenderContext___1_*)this);
}

// 0x100bd8b30
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_6::operator()(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                         render::Format, void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                   void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()((_lambda_void__jag__render__RenderContext___1_*)this, arg1, renderContext);
}

// 0x100bd8b40
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_6::operator()(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()((_lambda_jag__render__RenderContext___1_*)this, arg1);
}

// 0x100bd8c60
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_6::operator()(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {
    function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                         render::Format, void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                   void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator()((_lambda_void___1_*)this, arg1);
}

// 0x100bd8c70
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void const*)::$_6::operator()(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_6::operator()(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::operator()(void* arg1) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::~RenderContext((_lambda_jag__render__RenderContext___1_*)this);
}

// 0x100bd8c90
void function<void(BaseApp*), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_6,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_6&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {
    operator()(this, arg1);
}

// 0x100bd8ca0
void function<void(BaseApp*), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_6,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_6&&)::{
    lambda(void*) #1
}
::operator()(void* arg1) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void const*)::$_6::~__6((__6*)this);
}

// 0x100bd8cb0
function<void(render::RenderContext&), 128ul, 16ul,
         (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                         unsigned int, render::Format, void const*)::$_7,
                               void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                               unsigned int, render::Format, void const*)::$_7&& arg1) {
    *(uint64_t*)this = 0;
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void const*)::$_7::__7((__7*)(this + 16), (__7*)arg1);
    *(void (**)(...))(this + 144) =
        function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           render::Format, void const*)::$_7,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                            void const*)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this = function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                               unsigned int, render::Format, void const*)::$_7,
                                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                                render::Format, void const*)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           render::Format, void const*)::$_7,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                            void const*)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd8d40
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_7,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_7&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd8d50
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_7,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_7&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void const*)::$_7::__7(arg1, (__7*)this);
}

// 0x100bd8db0
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_7,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_7&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd8dc0
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_7,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_7&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void const*)::$_7::operator()((__7*)this, arg1);
}

// 0x100bd8ee0
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_7,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_7&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {
    operator()(this, arg1);
}

// 0x100bd8ef0
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void const*)::$_7,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void const*)::$_7&&)::{
    lambda(void*) #1
}
::operator()(void* arg1) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void const*)::$_7::~__7((__7*)this);
}

// 0x100bd8f00
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&& arg1) {
    *(uint64_t*)this = 0;
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void const*)::$_8::__8((__8*)(this + 16), (__8*)arg1);
    *(void (**)(...))(this + 144) =
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void const*)::$_8,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            unsigned int, render::Format, void const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void const*)::$_8,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            unsigned int, render::Format, void const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void const*)::$_8,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            unsigned int, render::Format, void const*)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd8f90
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd8fa0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void const*)::$_8::__8(arg1, (__8*)this);
}

// 0x100bd9000
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd9010
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void const*)::$_8::operator()((__8*)this, arg1);
}

// 0x100bd9190
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {
    operator()(this, arg1);
}

// 0x100bd91a0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void const*)::$_8&&)::{
    lambda(void*) #1
}
::operator()(void* arg1) const {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void const*)::$_8::~__8((__8*)this);
}

// 0x100bd91b0
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&& arg1) {
    *(uint64_t*)this = 0;
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void const*)::$_9::__9((__9*)(this + 16), (__9*)arg1);
    *(void (**)(...))(this + 144) =
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void const*)::$_9,
                 void>((render::CubeFace)
                           ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void const*)::$_9,
                 void>((render::CubeFace)
                           ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void const*)::$_9,
                 void>((render::CubeFace)
                           ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void const*)::$_9&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd9240
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd9250
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void const*)::$_9::__9(arg1, (__9*)this);
}

// 0x100bd92b0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd92c0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void const*)::$_9::operator()((__9*)this, arg1);
}

// 0x100bd9370
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {
    operator()(this, arg1);
}

// 0x100bd9380
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void const*)::$_9&&)::{
    lambda(void*) #1
}
::operator()(void* arg1) const {
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void const*)::$_9::~__9((__9*)this);
}

// 0x100bd9390
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&& arg1) {
    *(uint64_t*)this = 0;
    *(uint32_t*)(this + 16) = arg1.field_0;
    *(void (**)(...))(this + 144) =
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd93d0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd93e0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint32_t*)arg1 = *(uint32_t*)this;
}

// 0x100bd93f0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd9400
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    render::TextureRenderBuffer::Destroy()::$_10::operator()((__10*)this, arg1);
}

// 0x100bd9480
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bd9490
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&& arg1) {
    *(uint64_t*)this = 0;
    *(uint32_t*)(this + 16) = *(uint32_t*)arg1;
    *(void (**)(...))(this + 144) = function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
        render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this = function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
        render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) = function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
        render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd94d0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd94e0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint32_t*)arg1 = *(uint32_t*)this;
}

// 0x100bd94f0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd9500
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    render::Texture::ReleaseNativeResources(char const*)::$_11::operator()((__11*)this, arg1);
}

// 0x100bd95a0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bd95b0
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&& arg1) {
    *(uint64_t*)this = 0;
    *(Texture**)(this + 16) = arg1.field_0;
    *(void (**)(...))(this + 144) =
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd95f0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd9600
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint64_t*)arg1 = *(uint64_t*)this;
}

// 0x100bd9610
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd9620
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    render::Texture::GenerateMipMaps()::$_12::operator()((__12*)this, arg1);
}

// 0x100bd96f0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bd9700
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const ::$_13,
                                                                          void>(render::Texture::Invalidate()
                                                                                    const ::$_13&& arg1) {
    *(uint64_t*)this = 0;
    *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
    *(void (**)(...))(this + 144) =
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd9740
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate()
                                                                                          const ::$_13&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bd9750
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate()
                                                                                          const ::$_13&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint64_t*)arg1 = *(uint64_t*)this;
}

// 0x100bd9760
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate()
                                                                                          const ::$_13&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bd9770
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate()
                                                                                          const ::$_13&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    const ::$_13::operator()((__13*)this, arg1);
}

// 0x100bd9820
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate()
                                                                                          const ::$_13&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bda4d0
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&& arg1) {
    *(uint64_t*)this = 0;
    uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
    *(RenderResource**)(this + 16) = arg1.field_0;
    *(uint64_t*)(this + 24) = uVar1;
    *(uint64_t*)(this + 32) = *(uint64_t*)&arg1.field_16;
    *(void (**)(...))(this + 144) =
        function<render::Query::Create(render::QueryType)::$_14, void>((render::QueryType)->Create()::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Query::Create(render::QueryType)::$_14, void>((render::QueryType)->Create()::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Query::Create(render::QueryType)::$_14, void>((render::QueryType)->Create()::$_14&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bda520
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bda530
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
    uint64_t uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
}

// 0x100bda550
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bda560
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    (render::QueryType)->Create()::$_14::operator()((__14*)this, arg1);
}

// 0x100bda720
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bda730
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(
    render::Query::Destroy()::$_15&& arg1) {
    *(uint64_t*)this = 0;
    *(Query**)(this + 16) = arg1.field_0;
    *(void (**)(...))(this + 144) = function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this = function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) = function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bda770
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(
    render::Query::Destroy()::$_15&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    lambda(void*, void*) #1
}
::__invoke(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
    return;
}

// 0x100bda780
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(
    render::Query::Destroy()::$_15&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    lambda(void*, void*) #1
}
::operator()(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    *(uint64_t*)arg1 = *(uint64_t*)this;
    return;
}

// 0x100bda790
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(
    render::Query::Destroy()::$_15&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& arg2) {
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext* renderContext) {
    operator()(this, arg1, renderContext);
    return;
}

// 0x100bda7a0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(
    render::Query::Destroy()::$_15&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & arg2) const {
    lambda(void*, render::RenderContext&) #1
}
::operator()(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext * renderContext) {
    render::Query::Destroy()::$_15::operator()((__15*)this, arg1);
    return;
}

// 0x100bda800
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(
    render::Query::Destroy()::$_15&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bda810
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(
    render::Query::Begin()::$_16&& arg1) {
    *(uint64_t*)this = 0;
    uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
    *(Query**)(this + 16) = arg1.field_0;
    *(uint64_t*)(this + 24) = uVar1;
    *(void (**)(...))(this + 144) = function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this = function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) = function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bda850
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(
    render::Query::Begin()::$_16&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    lambda(void*, void*) #1
}
::__invoke(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
    return;
}

// 0x100bda860
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(
    render::Query::Begin()::$_16&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    lambda(void*, void*) #1
}
::operator()(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    uint64_t uVar1;

    uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
    return;
}

// 0x100bda870
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(
    render::Query::Begin()::$_16&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& arg2) {
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext* renderContext) {
    operator()(this, arg1, renderContext);
    return;
}

// 0x100bda880
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(
    render::Query::Begin()::$_16&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & arg2) const {
    lambda(void*, render::RenderContext&) #1
}
::operator()(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext * renderContext) {
    render::Query::Begin()::$_16::operator()((__16*)this, arg1);
    return;
}

// 0x100bdaa20
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(
    render::Query::Begin()::$_16&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bdaa30
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(
    render::Query::End()::$_17&& arg1) {
    *(uint64_t*)this = 0;
    uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
    *(RenderContext**)(this + 16) = arg1.field_0;
    *(uint64_t*)(this + 24) = uVar1;
    *(void (**)(...))(this + 144) = function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this = function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) = function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdaa70
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(
    render::Query::End()::$_17&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    lambda(void*, void*) #1
}
::__invoke(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
    return;
}

// 0x100bdaa80
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(
    render::Query::End()::$_17&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    lambda(void*, void*) #1
}
::operator()(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    uint64_t uVar1;

    uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
    return;
}

// 0x100bdaa90
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(
    render::Query::End()::$_17&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& arg2) {
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext* renderContext) {
    operator()(this, arg1, renderContext);
    return;
}

// 0x100bdaaa0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(
    render::Query::End()::$_17&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & arg2) const {
    lambda(void*, render::RenderContext&) #1
}
::operator()(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext * renderContext) {
    render::Query::End()::$_17::operator()((__17*)this, arg1);
    return;
}

// 0x100bdb010
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(
    render::Query::End()::$_17&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bdb020
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(
    render::Query::FetchResult()::$_18&& arg1) {
    *(uint64_t*)this = 0;
    Query* pQVar1 = arg1.field_8;
    *(char**)(this + 16) = arg1.field_0;
    *(Query**)(this + 24) = pQVar1;
    *(void (**)(...))(this + 144) =
        function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this = function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb060
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    lambda(void*, void*) #1
}
::__invoke(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
    return;
}

// 0x100bdb070
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    lambda(void*, void*) #1
}
::operator()(_lambda_void__void___1_* this, void* arg1, void* arg2) {
    uint64_t uVar1;

    uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
    return;
}

// 0x100bdb080
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& arg2) {
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext* renderContext) {
    operator()(this, arg1, renderContext);
    return;
}

// 0x100bdb090
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & arg2) const {
    lambda(void*, render::RenderContext&) #1
}
::operator()(_lambda_void__jag__render__RenderContext___1_* this, void* arg1, RenderContext * renderContext) {
    render::Query::FetchResult()::$_18::operator()((__18*)this, arg1);
    return;
}

// 0x100bdb220
void function<void(render::RenderContext&), 128ul, 16ul,
              (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bdb230
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(
    render::Query::FetchResult64()::$_19&& arg1) {
    *(uint64_t*)this = 0;
    Query* pQVar1 = arg1.field_8;
    *(char**)(this + 16) = arg1.field_0;
    *(Query**)(this + 24) = pQVar1;
    *(void (**)(...))(this + 144) =
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb270
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bdb280
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    uint64_t uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
}

// 0x100bdb290
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bdb2a0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    render::Query::FetchResult64()::$_19::operator()((__19*)this, arg1);
}

// 0x100bdb3b0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bdb3c0
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(
    render::Query::PrepareResult()::$_20&& arg1) {
    *(uint64_t*)this = 0;
    *(Query**)(this + 16) = arg1.field_0;
    *(void (**)(...))(this + 144) =
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb400
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bdb410
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint64_t*)arg1 = *(uint64_t*)this;
}

// 0x100bdb420
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bdb430
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    render::Query::PrepareResult()::$_20::operator()((__20*)this, arg1);
}

// 0x100bdb450
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100bdb460
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(
    render::Query::PrepareResult64()::$_21&& arg1) {
    *(uint64_t*)this = 0;
    *(Query**)(this + 16) = arg1.field_0;
    *(void (**)(...))(this + 144) =
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(void (**)(...))this =
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(void (**)(...))(this + 152) =
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb4a0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    operator()(this, arg1, arg2);
}

// 0x100bdb4b0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint64_t*)arg1 = *(uint64_t*)this;
}

// 0x100bdb4c0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    operator()(this, arg1, renderContext);
}

// 0x100bdb4d0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    render::Query::PrepareResult64()::$_21::operator()((__21*)this, arg1);
}

// 0x100bdb4f0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::render {
    class TextureCube {
    public:
        // virtual methods in vtable order
        virtual ~TextureCube();
        virtual void Destroy();
        TextureCube(const char* str);
        uint32_t Create(const Texture::Desc& desc,
                        std::array<ResourceDataT<unsigned char const> const*, 6ul> const& resourceDatas);
        void UpdateOnCurrentThread(CubeFace cubeFace, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                   unsigned int arg5, unsigned int arg6, Format format, const void* arg8);
        void CreateCubeFaceTopLevelMip(CubeFace cubeFace, const Texture::Desc& desc,
                                       const ResourceDataT<unsigned char const>* resourceData);
        void CreateSubLevelMips(unsigned int arg1,
                                std::array<ResourceDataT<unsigned char const> const*, 6ul> const& resourceDatas);
        void Create(const Texture::Desc& desc);
        void Update(CubeFace cubeFace, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                    unsigned int arg6, Format format, const void* arg8);

    private:
        uint32_t field_8;
        uint8_t _unknown_12[4];
        TextureType field_16;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        uint32_t field_36;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        unsigned int field_88;
        uint8_t field_92;
        uint8_t _unknown_93[171];
        uint32_t field_264;
        uint8_t _unknown_268[4];
        RadialHighlightState field_272;
        uint32_t field_296;
        uint8_t _unknown_300[132];
        uint8_t field_432;
        uint8_t _unknown_433[23];
    };

    // 0x100bd14b0: TextureCube::Destroy() has the same machine code as Texture2DArray::Destroy()

    // 0x100bd17e0
    VAOManager::Key::~Key() {
        field_120.~fixed_vector();
        field_8.~fixed_vector();
    }

    // 0x100bd2150
    TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                        void const*)::$_9::~$_9() {
        field_40.~WrapArrayValueCopy();
    }

    // 0x100bd3c40
    void VAOManager::~VAOManager()::$_0::operator()(const VAOManager::Key & key,
                                                    const shared_ptr<VertexArrayObject>& vertexArrayObject) const {
        if (((WaterNormalParamsTarget*)(*this).operator->())->IsValid() != '\0') {
            LogAssert("!vao->IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      64, nullptr);
        }
    }

    // 0x100bd5800
    VAOManager::Key::Key(const VAOManager::Key& key)
        : field_0(key.field_0), field_8(key.field_8), field_112(key.field_112), field_120(key.field_120),
          field_192(key.field_192) {}

    // 0x100bd6750
    bool VAOManager::GarbageCollect()::$_1::operator()(const VAOManager::Key& key,
                                                       const shared_ptr<VertexArrayObject>& vertexArrayObject) const {
        EntityHighlightState* this_00 = (EntityHighlightState*)(*this).operator->();
        float fVar1 = (float)this_00->GetAlpha();
        float fVar2 = (float)FrameTime::GetSecondsSinceProgramStart();
        return fVar1 + 10.0 < fVar2;
    }

    // 0x100bd7100
    void VAOManager::GarbageCollect()::$_2::operator()(const VAOManager::Key& key,
                                                       const shared_ptr<VertexArrayObject>& vertexArrayObject) const {
        long lVar4;
        long lVar5;

        __2 _Var1 = *this;
        long lVar2 = eastl::vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                       eastl::vector<unsigned int>>::find(*((unsigned int*)((long)_Var1 + 1016232)));
        long lVar3 =
            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((long)_Var1 + 1016232))->end();
        if (lVar2 == lVar3) {
            lVar2 = eastl::vector_set<
                IndexBuffer const*, eastl::less<IndexBuffer const*>, eastl::allocator,
                eastl::vector<IndexBuffer const*>>::find(*((RenderDeviceSecondaryContext**)((long)_Var1 + 1016312)));
            lVar3 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((long)_Var1 + 1016312))->end();
            if (lVar2 == lVar3) {
                lVar2 = key.field_120.HeapBeginPtr();
                lVar3 = key.field_120.end();
                if (lVar2 != lVar3) {
                    do {
                        lVar4 = eastl::vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                                  eastl::vector<unsigned int>>::find(*((unsigned int*)((long)_Var1 +
                                                                                                       1016272)));
                        lVar5 =
                            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((long)_Var1 + 1016272))
                                ->end();
                        if (lVar4 != lVar5)
                            goto LAB_100bd7164;
                        lVar2 = lVar2 + 4;
                    } while (lVar2 != lVar3);
                }
                lVar2 = key.field_8.HeapBeginPtr();
                lVar3 = key.field_8.end();
                if (lVar2 == lVar3) {
                    return;
                }
                while (true) {
                    lVar4 = eastl::vector_set<
                        IndexBuffer const*, eastl::less<IndexBuffer const*>, eastl::allocator,
                        eastl::vector<IndexBuffer const*>>::find(*((RenderDeviceSecondaryContext**)((long)_Var1 +
                                                                                                    1016352)));
                    lVar5 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((long)_Var1 + 1016352))
                                ->end();
                    if (lVar4 != lVar5)
                        break;
                    lVar2 = lVar2 + 8;
                    if (lVar2 == lVar3) {
                        return;
                    }
                }
            }
        }
    LAB_100bd7164:
        ((VertexArrayObject*)vertexArrayObject.operator->())->Destroy();
    }

    // 0x100bd7470
    void VAOManager::DestroyRenderingResources()::$_3::operator()(RenderContext& renderContext) const {
        function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)> local_88[48];
        function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)> local_58[48];
        long local_28;

        ResourceList<VAOManager::Key, VertexArrayObject,
                     eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul>>* this_00 =
            (ResourceList<VAOManager::Key, VertexArrayObject,
                          eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul>>*)(field_0 + 16);
        std::function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>::operator()(
            local_58, (_lambda_jag__render__VAOManager__Key_const___jag__shared_ptr<VertexArrayObject> _const___1_*)
                          renderContext);
        this_00->CallOnElements(*local_58);
        new (local_58) std::function<bool(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>();
        new (local_88) std::function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>();
        this_00->GarbageCollect(*local_58, *local_88);
    }

    // 0x100bd7cd0
    void VAOManager::DestroyRenderingResources()::$_3::operator()(RenderContext&) const ::{
        lambda(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&) #1
    }
    ::operator()(const VAOManager::Key & arg1, const shared_ptr<VertexArrayObject>& arg2) const {
        lambda(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&) #1
    }
    ::operator()(_lambda_jag__render__VAOManager__Key_const__jag__shared_ptr<VertexArrayObject> const___1_* this,
                 Key * key, shared_ptr<VertexArrayObject>* vertexArrayObject) {
        VertexArrayObject* this_00;

        this_00 = (VertexArrayObject*)(*this).operator->();
        this_00->Destroy();
        return;
    }

    // 0x100bd84f0
    void VAOManager::OnEndFrame()::$_4::operator()(RenderContext& renderContext) const {
        field_0->GarbageCollect();
    }

    // 0x100bd86a0
    void GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                     unsigned int)::$_5::operator()(unsigned char* arg1) const {
        if (this != nullptr) {
            operator_delete__(this);
        }
    }

    // 0x100bd9210
    TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                        void const*)::$_9::$_9($_9&& arg1) {
        field_32 = *(uint32_t*)(arg1 + 32);
        Texture* pTVar1 = *(Texture**)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((unsigned long)uVar2 >> 32);
        new (&field_40) WrapArrayValueCopy<unsigned char>(*((arg1 + 40)));
    }

    // 0x100bd9280
    TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                        void const*)::$_9::$_9(const $_9& arg1) {
        field_32 = *(uint32_t*)(arg1 + 32);
        Texture* pTVar1 = *(Texture**)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((unsigned long)uVar2 >> 32);
        new (&field_40) WrapArrayValueCopy<unsigned char>(*((arg1 + 40)));
    }

    // 0x100bd92d0
    void TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                             void const*)::$_9::operator()(RenderContext& renderContext) const {
        CubeFace cubeFace;
        unsigned int arg2;
        unsigned int arg3;
        unsigned int arg4;
        unsigned int arg5;
        unsigned int arg6;
        Format format;
        void* arg8;

        TextureCube* this_00 = (TextureCube*)field_0;
        if (renderContext.IsObjectAlive(&this_00->field_8)) {
            if (this_00->IsCreated()) {
                cubeFace = field_8;
                arg2 = field_12;
                arg3 = field_16;
                arg4 = field_20;
                arg5 = field_24;
                arg6 = field_28;
                format = field_32;
                arg8 = (void*)field_40.end();
                UpdateOnCurrentThread(this_00, cubeFace, arg2, arg3, arg4, arg5, arg6, format, arg8);
            }
        }
    }

    // 0x100bdb5b0
    TextureCube::~TextureCube() {
        Destroy();
    }

} // namespace jag::render

namespace jag {
    class TextureCubeUtils {
    public:
        auto BuildFragment(bool arg1);
    };

    // 0x100bd3e50
    render::VertexArrayObject* placement_new<render::VertexArrayObject>(void* arg1) {
        new (arg1) render::VertexArrayObject();
        return arg1;
    }

    // 0x100bd3e70
    MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>*
    placement_new<MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>,
                  MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData*&, render::VertexArrayObject*>(
        void* arg1, MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData*& arg2,
        render::VertexArrayObject*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>(
            arg2, arg3);
        return arg1;
    }

    // 0x100bd47a0
    MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>::
        MakeSharedPoolRefCounter(void* arg1, render::VertexArrayObject* vertexArrayObject)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b70 + 16;
        *(void**)(this + 16) = arg1;
        *(VertexArrayObject**)(this + 24) = vertexArrayObject;
    }

    // 0x100bd47e0
    void
    MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>::DeleteData() {
        if (*(VertexArrayObject**)(this + 24) != nullptr) {
            (*(VertexArrayObject**)(this + 24))->~VertexArrayObject();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100bd4810
    void
    MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<render::VertexArrayObject, 2048>::deallocate(arg1);
    }

    // 0x100bd85e0
    ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&,
                                                                                unsigned int, unsigned int)::$_5>::
        ref_counter_with_deleter(unsigned char* arg1,
                                 render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                     unsigned int)::$_5 arg2)
        : ref_counter_base() {
        *(uint8_t***)this = &PTR__ref_counter_with_deleter_100f27f60;
        *(unsigned char**)(this + 16) = arg1;
    }

    // 0x100bd8640
    void ref_counter_with_deleter<unsigned char,
                                  render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                      unsigned int)::$_5>::DeleteData() {
        unsigned char* in_RSI;

        render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                            unsigned int)::$_5::operator()(*(__5**)(this + 16), in_RSI);
        *(uint64_t*)(this + 16) = 0;
    }

    // 0x100bd8670
    void ref_counter_with_deleter<unsigned char,
                                  render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                      unsigned int)::$_5>::DeleteSelf() {
        if (this != (ref_counter_with_deleter<unsigned char,
                                              render::GutterCompressedTextureData(
                                                  unsigned char*, unsigned int&, unsigned int, unsigned int)::__5>*)0) {
            (**(void (**)(...))(*(long*)this + 8))();
        }
    }

    // 0x100bd8690
    ref_counter_with_deleter<unsigned char,
                             render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                 unsigned int)::$_5>::~ref_counter_with_deleter() {}

} // namespace jag

namespace jag::math {
    // 0x100bd21f0
    bool operator== <float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        if (((*(float*)vector41 == *(float*)vector42) && (*(float*)(vector41 + 4) == *(float*)(vector42 + 4))) &&
            (*(float*)(vector41 + 8) == *(float*)(vector42 + 8))) {
            return *(float*)(vector41 + 12) == *(float*)(vector42 + 12);
        }
        return false;
    }

} // namespace jag::math

// 0x100bd22a0
void __libcpp_strchr(const char* str, int arg2) {
    _strchr(str, 46);
}
