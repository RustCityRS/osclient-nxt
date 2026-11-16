// libs/hal/render/textures/TextureCube.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::fixedfunction {
    // 0x100bd73f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::__3, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __3* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::VAOManager::DestroyRenderingResources()::$_3, void>(
            render::VAOManager::DestroyRenderingResources()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bd7430, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bd7440, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3,
   void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bd7450, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bd7460, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3,
   void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::VAOManager::DestroyRenderingResources()::$_3::operator()(param_1, param_2);
    }

    // 0x100bd7d20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::DestroyRenderingResources()::$_3, void>(render::VAOManager::DestroyRenderingResources()::$_3&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::DestroyRenderingResources()::$_3, void>(
        render::VAOManager::DestroyRenderingResources()::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bd8470, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::__4, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __4* param_1) {
        *(undefined8*)this = 0;
        *(VAOManager**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bd84b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bd84c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4,
   void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bd84d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bd84e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4,
   void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::VAOManager::OnEndFrame()::$_4::operator()(param_1, param_2);
    }

    // 0x100bd8500, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::VAOManager::OnEndFrame()::$_4, void>(render::VAOManager::OnEndFrame()::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bd87e0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)
    void
    function<void(BaseApp*), 128ul, 16ul,
             (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, render::Format, void_const*)::__6,
                                   void>(function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __6* param_1) {
        *(undefined8*)this = 0;
        unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                             void_const*)::$_6::__6((__6*)(this + 16), (__6*)param_1);
        *(code**)(this + 144) =
            function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                               render::Format, void_const*)::$_6,
                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                                void_const*)::$_6&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, render::Format, void_const*)::$_6,
                                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                            render::Format, void_const*)::$_6&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) =
            function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                               render::Format, void_const*)::$_6,
                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                                void_const*)::$_6&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bd8870, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void_const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void_const*)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bd8880, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6,
   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void_const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void_const*)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                             void_const*)::$_6::__6(param_2, param_1);
    }

    // 0x100bd88e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void_const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void_const*)::$_6&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bd88f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6,
   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                  void_const*)::$_6,
        void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        render::Format, void_const*)::$_6&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                             void_const*)::$_6::operator()(param_1, param_2);
    }

    // 0x100bd8a10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&): jumps straight to the base-object constructor

    // 0x100bd8a30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}&&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::operator()(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
        _lambda_jag__render__RenderContext___1_* param_1) {
        *(undefined8*)this = 0;
        const ::{
            lambda(render::RenderContext&) #1
        }
        ::RenderContext___1____(this + 16);
        *(code**)(this + 144) =
            function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                 render::Format, void_const*)::$_6::operator()(BaseApp*) const ::{
            lambda(void*, void*) #1
        }
        (render::RenderContext&)#1
    },void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void_const*)::$_6::operator()(BaseApp*)const::{
        lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this = function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                     unsigned int, render::Format,
                                                     void_const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void_const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(code**)(this + 152) = function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                             unsigned int, render::Format,
                                                             void_const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void_const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100bd8ac0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*, void*) #1
}
(render::RenderContext&)#1
},void>(render::Texture2D::Update(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,render::Format,void_const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                         render::Format, void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                   void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100bd8ad0, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::RenderContext___1__const__(param_2, param_1);
}

// 0x100bd8b30, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(render::Texture2D::Update(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,render::Format,void_const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                         render::Format, void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                   void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100bd8b40, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100bd8c60, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_6::operator()(BaseApp*) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(render::Texture2D::Update(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,render::Format,void_const*)::$_6::operator()(BaseApp*)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)
::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    function < render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                         render::Format, void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                                   void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator()((_lambda_void___1_*)this, param_1);
}

// 0x100bd8c70, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::operator()(void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}, void>(render::Texture2D::Update(unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const ::{
    lambda(render::RenderContext&) #1
}
, void > (render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::operator()(void* param_1) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::~RenderContext((_lambda_jag__render__RenderContext___1_*)this);
}

// 0x100bd8c90, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void function<void(BaseApp*), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void_const*)::$_6,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void_const*)::$_6&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    operator()(this, param_1);
}

// 0x100bd8ca0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6&&)::{lambda(void*)#1}::operator()(void*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_6,
   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, render::Format, void
   const*)::$_6&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

void function<void(BaseApp*), 128ul, 16ul,
              (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                              unsigned int, render::Format, void_const*)::$_6,
                                    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int,
                                                                    unsigned int, unsigned int, render::Format,
                                                                    void_const*)::$_6&&)::{
    lambda(void*) #1
}
::operator()(void* param_1) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void_const*)::$_6::~__6((__6*)this);
}

// 0x100bd8cb0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::__7,
    void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __7* param_1) {
    *(undefined8*)this = 0;
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void_const*)::$_7::__7((__7*)(this + 16), (__7*)param_1);
    *(code**)(this + 144) = function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                               unsigned int, render::Format, void_const*)::$_7,
                                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                                render::Format, void_const*)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                       unsigned int, render::Format, void_const*)::$_7,
                             void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                        render::Format, void_const*)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) = function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                               unsigned int, render::Format, void_const*)::$_7,
                                     void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int,
                                                                render::Format, void_const*)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd8d40, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_7,
    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_7&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd8d50, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7,
   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_7,
    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_7&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void_const*)::$_7::__7(param_2, param_1);
}

// 0x100bd8db0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_7,
    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_7&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd8dc0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7,
   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_7,
    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_7&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void_const*)::$_7::operator()(param_1, param_2);
}

// 0x100bd8ee0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_7,
    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_7&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    operator()(this, param_1);
}

// 0x100bd8ef0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7, void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7&&)::{lambda(void*)#1}::operator()(void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture2D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_7,
   void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, render::Format, void
   const*)::$_7&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                              void_const*)::$_7,
    void>(render::Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_7&&)::{
    lambda(void*) #1
}
::operator()(void* param_1) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                         void_const*)::$_7::~__7((__7*)this);
}

// 0x100bd8f00, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::__8,
    void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __8* param_1) {
    *(undefined8*)this = 0;
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void_const*)::$_8::__8((__8*)(this + 16), (__8*)param_1);
    *(code**)(this + 144) =
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void_const*)::$_8,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            unsigned int, render::Format, void_const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this =
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void_const*)::$_8,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            unsigned int, render::Format, void_const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                           unsigned int, unsigned int, render::Format, void_const*)::$_8,
                 void>(unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                            unsigned int, render::Format, void_const*)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd8f90, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void_const*)::$_8&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd8fa0, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
   void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_8&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void_const*)::$_8&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void_const*)::$_8::__8(param_2, param_1);
}

// 0x100bd9000, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void_const*)::$_8&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9010, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
   void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void_const*)::$_8&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void_const*)::$_8::operator()(param_1, param_2);
}

// 0x100bd9190, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void_const*)::$_8&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    operator()(this, param_1);
}

// 0x100bd91a0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_8&&)::{lambda(void*)#1}::operator()(void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture3D::Update(unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
   void const*)::$_8, void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_8&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                              unsigned int, render::Format, void_const*)::$_8,
    void>(render::Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    unsigned int, render::Format, void_const*)::$_8&&)::{
    lambda(void*) #1
}
::operator()(void* param_1) {
    unsigned int->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         render::Format, void_const*)::$_8::~__8((__8*)this);
}

// 0x100bd91b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::__9,
    void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __9* param_1) {
    *(undefined8*)this = 0;
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void_const*)::$_9::__9((__9*)(this + 16), (__9*)param_1);
    *(code**)(this + 144) =
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void_const*)::$_9,
                 void>((render::CubeFace)
                           ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int,
                                                         unsigned int, unsigned int, render::Format, void_const*)::$_9,
                             void>((render::CubeFace)
                                       ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                                render::Format, void_const*)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, render::Format, void_const*)::$_9,
                 void>((render::CubeFace)
                           ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                    render::Format, void_const*)::$_9&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd9240, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void_const*)::$_9&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9250, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::TextureCube::Update(render::CubeFace,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_9&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void_const*)::$_9&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void_const*)::$_9::__9(param_2, param_1);
}

// 0x100bd92b0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void_const*)::$_9&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd92c0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::TextureCube::Update(render::CubeFace,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void_const*)::$_9&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void_const*)::$_9::operator()(param_1, param_2);
}

// 0x100bd9370, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void_const*)::$_9&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    operator()(this, param_1);
}

// 0x100bd9380, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void const*)::$_9&&)::{lambda(void*)#1}::operator()(void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::TextureCube::Update(render::CubeFace,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_9, void>(render::TextureCube::Update(render::CubeFace, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, render::Format, void
   const*)::$_9&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                render::Format, void_const*)::$_9,
    void>(render::TextureCube::Update(render::CubeFace, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, render::Format, void_const*)::$_9&&)::{
    lambda(void*) #1
}
::operator()(void* param_1) {
    (render::CubeFace)
        ->Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, render::Format,
                 void_const*)::$_9::~__9((__9*)this);
}

// 0x100bd9390, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::__10, void>(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __10* param_1) {
    *(undefined8*)this = 0;
    *(undefined4*)(this + 16) = param_1->field_0;
    *(code**)(this + 144) =
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this =
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd93d0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd93e0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10,
   void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined4*)param_2 = *(undefined4*)param_1;
}

// 0x100bd93f0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9400, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10,
   void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::TextureRenderBuffer::Destroy()::$_10::operator()(param_1, param_2);
}

// 0x100bd9480, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::TextureRenderBuffer::Destroy()::$_10, void>(render::TextureRenderBuffer::Destroy()::$_10&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bd9490, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::__11, void>(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __11* param_1) {
    *(undefined8*)this = 0;
    *(uint*)(this + 16) = param_1->field_0;
    *(code**)(this + 144) = function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
        render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
        render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) = function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
        render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd94d0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd94e0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture::ReleaseNativeResources(char
   const*)::$_11, void>(render::Texture::ReleaseNativeResources(char
   const*)::$_11&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined4*)param_2 = *(undefined4*)param_1;
}

// 0x100bd94f0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9500, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture::ReleaseNativeResources(char
   const*)::$_11, void>(render::Texture::ReleaseNativeResources(char
   const*)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Texture::ReleaseNativeResources(char const*)::$_11::operator()(param_1, param_2);
}

// 0x100bd95a0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::ReleaseNativeResources(char const*)::$_11, void>(
    render::Texture::ReleaseNativeResources(char const*)::$_11&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bd95b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::__12, void>(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __12* param_1) {
    *(undefined8*)this = 0;
    *(Texture**)(this + 16) = param_1->field_0;
    *(code**)(this + 144) =
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this =
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd95f0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9600, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12,
   void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined8*)param_2 = *(undefined8*)param_1;
}

// 0x100bd9610, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9620, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12,
   void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Texture::GenerateMipMaps()::$_12::operator()(param_1, param_2);
}

// 0x100bd96f0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bd9700, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::Invalidate() const ::__13, void>(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __13* param_1) {
    *(undefined8*)this = 0;
    *(undefined8*)(this + 16) = *(undefined8*)param_1;
    *(code**)(this + 144) =
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this =
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bd9740, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9750, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture::Invalidate() const::$_13,
   void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined8*)param_2 = *(undefined8*)param_1;
}

// 0x100bd9760, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bd9770, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Texture::Invalidate() const::$_13,
   void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    const ::$_13::operator()(param_1, param_2);
}

// 0x100bd9820, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::Invalidate() const::$_13, void>(render::Texture::Invalidate() const::$_13&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Texture::Invalidate() const ::$_13, void>(render::Texture::Invalidate() const ::$_13&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bda4d0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::__14, void>(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __14* param_1) {
    undefined8 uVar1;

    *(undefined8*)this = 0;
    uVar1 = *(undefined8*)&param_1->field_8;
    *(RenderResource**)(this + 16) = param_1->field_0;
    *(undefined8*)(this + 24) = uVar1;
    *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
    *(code**)(this + 144) =
        function<render::Query::Create(render::QueryType)::$_14, void>((render::QueryType)->Create()::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this =
        function<render::Query::Create(render::QueryType)::$_14, void>((render::QueryType)->Create()::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Query::Create(render::QueryType)::$_14, void>((render::QueryType)->Create()::$_14&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bda520, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bda530, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::Create(render::QueryType)::$_14,
   void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100bda550, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bda560, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::Create(render::QueryType)::$_14,
   void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    (render::QueryType)->Create()::$_14::operator()(param_1, param_2);
}

// 0x100bda720, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bda730, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Destroy()::__15, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                          __15* param_1) {
    *(undefined8*)this = 0;
    *(Query**)(this + 16) = param_1->field_0;
    *(code**)(this + 144) = function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) = function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bda770, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bda780, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::Destroy()::$_15,
   void>(render::Query::Destroy()::$_15&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined8*)param_2 = *(undefined8*)param_1;
}

// 0x100bda790, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bda7a0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::Destroy()::$_15,
   void>(render::Query::Destroy()::$_15&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::Destroy()::$_15::operator()(param_1, param_2);
}

// 0x100bda800, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bda810, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Begin()::__16, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                        __16* param_1) {
    undefined8 uVar1;

    *(undefined8*)this = 0;
    uVar1 = *(undefined8*)&param_1->field_8;
    *(Query**)(this + 16) = param_1->field_0;
    *(undefined8*)(this + 24) = uVar1;
    *(code**)(this + 144) = function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) = function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bda850, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bda860, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::Begin()::$_16,
   void>(render::Query::Begin()::$_16&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100bda870, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bda880, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::Begin()::$_16,
   void>(render::Query::Begin()::$_16&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::Begin()::$_16::operator()(param_1, param_2);
}

// 0x100bdaa20, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bdaa30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::End()::__17, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                      __17* param_1) {
    undefined8 uVar1;

    *(undefined8*)this = 0;
    uVar1 = *(undefined8*)&param_1->field_8;
    *(RenderContext**)(this + 16) = param_1->field_0;
    *(undefined8*)(this + 24) = uVar1;
    *(code**)(this + 144) = function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) = function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdaa70, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                             (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdaa80, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::End()::$_17,
   void>(render::Query::End()::$_17&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                             (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100bdaa90, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                             (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdaaa0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::End()::$_17,
   void>(render::Query::End()::$_17&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                             (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::End()::$_17::operator()(param_1, param_2);
}

// 0x100bdb010, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                             (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bdb020, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult()::__18, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                              __18* param_1) {
    Query* pQVar1;

    *(undefined8*)this = 0;
    pQVar1 = param_1->field_8;
    *(char**)(this + 16) = param_1->field_0;
    *(Query**)(this + 24) = pQVar1;
    *(code**)(this + 144) = function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) = function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb060, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb070, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::FetchResult()::$_18,
   void>(render::Query::FetchResult()::$_18&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100bdb080, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb090, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::FetchResult()::$_18,
   void>(render::Query::FetchResult()::$_18&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::FetchResult()::$_18::operator()(param_1, param_2);
}

// 0x100bdb220, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bdb230, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::__19, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                                __19* param_1) {
    Query* pQVar1;

    *(undefined8*)this = 0;
    pQVar1 = param_1->field_8;
    *(char**)(this + 16) = param_1->field_0;
    *(Query**)(this + 24) = pQVar1;
    *(code**)(this + 144) =
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb270, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb280, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::FetchResult64()::$_19,
   void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100bdb290, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb2a0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::FetchResult64()::$_19,
   void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::FetchResult64()::$_19::operator()(param_1, param_2);
}

// 0x100bdb3b0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bdb3c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::__20, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                                __20* param_1) {
    *(undefined8*)this = 0;
    *(Query**)(this + 16) = param_1->field_0;
    *(code**)(this + 144) =
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb400, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb410, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::PrepareResult()::$_20,
   void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined8*)param_2 = *(undefined8*)param_1;
}

// 0x100bdb420, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb430, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::PrepareResult()::$_20,
   void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::PrepareResult()::$_20::operator()(param_1, param_2);
}

// 0x100bdb450, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100bdb460, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::__21, void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
                                                  __21* param_1) {
    *(undefined8*)this = 0;
    *(Query**)(this + 16) = param_1->field_0;
    *(code**)(this + 144) =
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke;
    *(code**)this = function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__;
    *(code**)(this + 152) =
        function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
        lambda(void*) #1
    }
    ::__invoke;
}

// 0x100bdb4a0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb4b0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::PrepareResult64()::$_21,
   void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined8*)param_2 = *(undefined8*)param_1;
}

// 0x100bdb4c0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    operator()(param_1, param_2);
}

// 0x100bdb4d0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::Query::PrepareResult64()::$_21,
   void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    render::Query::PrepareResult64()::$_21::operator()(param_1, param_2);
}

// 0x100bdb4f0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
    render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&)::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::render {
    class TextureCube {
    public:
        // virtual methods in vtable order
        virtual ~TextureCube();
        virtual void Destroy();
        TextureCube(char const*);
        Create(Texture::Desc const&, std::array<ResourceDataT<unsigned char const> const*, 6ul> const&);
        void UpdateOnCurrentThread(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                   Format, void const*);
        void CreateCubeFaceTopLevelMip(CubeFace, Texture::Desc const&, ResourceDataT<unsigned char const> const*);
        void CreateSubLevelMips(unsigned int, std::array<ResourceDataT<unsigned char const> const*, 6ul> const&);
        void Create(Texture::Desc const&);
        void Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                    void const*);

        // data members, from how the methods use this: 504 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        int field_16; // offset 16
        char _unknown_20[4];
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        uint field_32;       // offset 32
        undefined4 field_36; // offset 36
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined8 field_72; // offset 72
        undefined8 field_80; // offset 80
        uint field_88;       // offset 88
        undefined1 field_92; // offset 92
        char _unknown_93[171];
        float field_264; // offset 264
        char _unknown_268[4];
        RadialHighlightState field_272; // offset 272
        undefined4 field_296;           // offset 296
        char _unknown_300[4];
        SamplerState field_304; // offset 304
        char _unknown_360[72];
        undefined1 field_432; // offset 432
        char _unknown_433[15];
        SamplerState field_448; // offset 448
    };

    // 0x100bd14b0: the linker folded this into Texture2DArray::Destroy(), which has identical code
    TextureCube::Destroy();

    // 0x100bd14f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TextureCube::~TextureCube(): jumps straight to the base-object destructor

    // 0x100bd1500, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // TextureCube::~TextureCube()
    void TextureCube::~TextureCube() {
        ~TextureCube(this);
        operator_delete(this);
    }

    // 0x100bd17e0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // VAOManager::Key::~Key()
    void VAOManager::Key::~Key() {
        (&field_120)->~fixed_vector();
        (&field_8)->~fixed_vector();
    }

    // 0x100bd2150, 16 bytes, base-object destructor, placed by class name
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::~$_9()
    /* ~$_9() */

    void TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                             void_const*)::$_9::~__9() {
        (&field_40)->~WrapArrayValueCopy();
    }

    // 0x100bd3c40, 64 bytes, inline, placed by debug map only (low confidence)
    // VAOManager::~VAOManager()::$_0::operator()(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&) const
    /* VAOManager::~VAOManager()::$_0::TEMPNAMEPLACEHOLDERVALUE(VAOManager::Key
   const&, shared_ptr<VertexArrayObject> const&) const */

    void VAOManager::~VAOManager()::$_0::operator()(Key * param_1, shared_ptr * param_2) {
        WaterNormalParamsTarget* this;

        this = (WaterNormalParamsTarget*)shared_ptr<VertexArrayObject>::operator->(
            (shared_ptr<VertexArrayObject>*)param_1);
        if (IsValid() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!vao->IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      64, (char*)0);
        }
    }

    // 0x100bd57f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VAOManager::Key::Key(VAOManager::Key const&): jumps straight to the base-object constructor

    // 0x100bd5800, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VAOManager::Key::Key(VAOManager::Key const&)
    void VAOManager::Key::Key(Key* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8)
            eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator>();
        field_112 = param_1->field_112;
        new (&field_120, (fixed_vector*)&param_1->field_120)
            eastl::fixed_vector<unsigned int, 8ul, true, eastl::allocator>();
        field_192 = param_1->field_192;
    }

    // 0x100bd6750, 64 bytes, inline, placed by debug map only (low confidence)
    // VAOManager::GarbageCollect()::$_1::operator()(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&) const
    /* VAOManager::GarbageCollect()::$_1::TEMPNAMEPLACEHOLDERVALUE(VAOManager::Key
   const&, shared_ptr<VertexArrayObject> const&) const */

    bool VAOManager::GarbageCollect()::$_1::operator()(Key* param_1, shared_ptr* param_2) {
        EntityHighlightState* this;
        float fVar1;
        float fVar2;

        this =
            (EntityHighlightState*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)param_1);
        fVar1 = (float)GetAlpha();
        fVar2 = (float)FrameTime::GetSecondsSinceProgramStart();
        return fVar1 + 10.0 < fVar2;
    }

    // 0x100bd7100, 336 bytes, inline, placed by debug map only (low confidence)
    // VAOManager::GarbageCollect()::$_2::operator()(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&) const
    /* VAOManager::GarbageCollect()::$_2::TEMPNAMEPLACEHOLDERVALUE(VAOManager::Key
   const&, shared_ptr<VertexArrayObject> const&) const */

    void VAOManager::GarbageCollect()::$_2::operator()(Key* param_1, shared_ptr* param_2) {
        long lVar1;
        long lVar2;
        long lVar3;
        VertexArrayObject* this_00;
        uint* puVar4;
        uint* puVar5;
        undefined8* puVar6;
        undefined8* puVar7;
        VertexBuffer** this_01;
        IndexBuffer* local_50;
        Key* local_48;
        shared_ptr* local_40;
        uint local_34;

        lVar1 = field_0;
        lVar2 = ((lVar1 + 1016232))->find(&param_1->field_112);
        lVar3 = ((lVar1 + 1016232))->end();
        if (lVar2 == lVar3) {
            lVar2 = ((lVar1 + 1016312))->find(param_1);
            lVar3 = ((lVar1 + 1016312))->end();
            if (lVar2 == lVar3) {
                local_48 = param_1;
                local_40 = param_2;
                puVar4 = (uint*)(&param_1->field_120)->HeapBeginPtr();
                puVar5 = (uint*)(&param_1->field_120)->end();
                if (puVar4 != puVar5) {
                    do {
                        local_34 = *puVar4;
                        lVar2 = ((lVar1 + 1016272))->find(&local_34);
                        lVar3 = ((lVar1 + 1016272))->end();
                        if (lVar2 != lVar3)
                            goto LAB_100bd7240;
                        puVar4 = puVar4 + 1;
                    } while (puVar4 != puVar5);
                }
                this_01 = &local_48->field_8;
                puVar6 = (undefined8*)this_01->HeapBeginPtr();
                puVar7 = (undefined8*)this_01->end();
                if (puVar6 == puVar7) {
                    return;
                }
                while (true) {
                    local_50 = (IndexBuffer*)*puVar6;
                    lVar2 = ((lVar1 + 1016352))->find(&local_50);
                    lVar3 = ((lVar1 + 1016352))->end();
                    if (lVar2 != lVar3)
                        break;
                    puVar6 = puVar6 + 1;
                    if (puVar6 == puVar7) {
                        return;
                    }
                }
            LAB_100bd7240:
                param_2 = local_40;
            }
        }
        this_00 =
            (VertexArrayObject*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)param_2);
        this_00->Destroy();
    }

    // 0x100bd7470, 208 bytes, placed by debug map only (low confidence)
    // VAOManager::DestroyRenderingResources()::$_3::operator()(RenderContext&) const
    /* VAOManager::DestroyRenderingResources()::$_3::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void VAOManager::DestroyRenderingResources()::$_3::operator()(RenderContext* param_1) {
        ResourceList<VAOManager::Key, VertexArrayObject,
                     eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul, true,
                                      eastl::less<VAOManager::Key>, eastl::allocator>>* this_00;
        function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)> local_88[48];
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (ResourceList<VAOManager::Key, VertexArrayObject,
                                eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul, true,
                                                 eastl::less<VAOManager::Key>, eastl::allocator>>*)(field_0 + 16);
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::operator()(
            (function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_58);
        this_00->CallOnElements(local_58);
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(
            (function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_58);
        std::function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::function(
            (function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_58);
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::function(local_88);
        this_00->GarbageCollect(local_58, local_88);
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(local_88);
        std::function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(
            (function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bd7cd0, 32 bytes, inline, placed by debug map only (low confidence)
    // VAOManager::DestroyRenderingResources()::$_3::operator()(RenderContext&) const::{lambda(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)#1}::operator()(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&) const
    /* VAOManager::DestroyRenderingResources()::$_3::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const::{lambda(VAOManager::Key const&,
   shared_ptr<VertexArrayObject>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(VAOManager::Key const&,
   shared_ptr<VertexArrayObject> const&) const */

    _func_TEMPNAMEPLACEHOLDERVALUE_RenderContext_ptr* const ::{
        lambda(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&) #1
    }
    ::operator()(Key * param_1, shared_ptr * param_2)

    {
        VertexArrayObject* this;
        _func_TEMPNAMEPLACEHOLDERVALUE_RenderContext_ptr* p_Var1;

        this = (VertexArrayObject*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)param_1);
        p_Var1 = (_func_TEMPNAMEPLACEHOLDERVALUE_RenderContext_ptr*)Destroy();
        return p_Var1;
    }

    // 0x100bd84f0, 16 bytes, placed by debug map only (low confidence)
    // VAOManager::OnEndFrame()::$_4::operator()(RenderContext&) const
    /* VAOManager::OnEndFrame()::$_4::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void VAOManager::OnEndFrame()::$_4::operator()(RenderContext* param_1) {
        field_0->GarbageCollect();
    }

    // 0x100bd86a0, 16 bytes, placed by debug map only (low confidence)
    // GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5::operator()(unsigned char*) const
    /* GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned
   int)::$_5::TEMPNAMEPLACEHOLDERVALUE(unsigned char*) const */

    void GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                     unsigned int)::$_5::operator()(uchar* param_1) {
        if (this != (__5*)0) {
            operator_delete__(this);
        }
    }

    // 0x100bd9200, 16 bytes, complete-object constructor, placed by class name
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::$_9($_9&&): jumps straight to the base-object constructor

    // 0x100bd9210, 48 bytes, base-object constructor, placed by class name
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::$_9($_9&&)
    /* $_9($_9&&) */

    void TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                             void_const*)::$_9::__9(__9* param_1) {
        Texture* pTVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        field_32 = *(undefined4*)(param_1 + 32);
        pTVar1 = *(Texture**)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        new (&field_40, (WrapArrayValueCopy*)(param_1 + 40)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd9270, 16 bytes, complete-object constructor, placed by class name
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::$_9($_9 const&): jumps straight to the base-object constructor

    // 0x100bd9280, 48 bytes, base-object constructor, placed by class name
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::$_9($_9 const&)
    /* $_9($_9 const&) */

    void TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                             void_const*)::$_9::__9(__9* param_1) {
        Texture* pTVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        field_32 = *(undefined4*)(param_1 + 32);
        pTVar1 = *(Texture**)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        new (&field_40, (WrapArrayValueCopy*)(param_1 + 40)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd92d0, 160 bytes, placed by class name
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::operator()(RenderContext&) const
    /* TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, Format, void
   const*)::$_9::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                             void_const*)::$_9::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        TextureCube* this_00;
        char cVar8;
        undefined8 uVar9;

        this_00 = (TextureCube*)field_0;
        cVar8 = param_1->IsObjectAlive((RenderResource*)&this_00->field_8);
        if (cVar8 != '\0') {
            cVar8 = this_00->IsCreated();
            if (cVar8 != '\0') {
                uVar1 = field_8;
                uVar2 = field_12;
                uVar3 = field_16;
                uVar4 = field_20;
                uVar5 = field_24;
                uVar6 = field_28;
                uVar7 = field_32;
                uVar9 = (&field_40)->end();
                UpdateOnCurrentThread(this_00, uVar1, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, uVar9);
            }
        }
    }

    // 0x100bdb5b0, 61 bytes, base-object destructor, inline, placed by class name and debug map
    // TextureCube::~TextureCube()
    void TextureCube::~TextureCube() {
        field_0 = (undefined**)(PTR_vtable_100ee8650 + 16);
        Destroy();
        ~Texture();
    }

} // namespace jag::render

namespace jag {
    class TextureCubeUtils {
    public:
        TextureCubeUtils* BuildFragment(bool);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100bd3e50, 32 bytes, inline, placed by debug map only (low confidence)
    // render::VertexArrayObject* placement_new<render::VertexArrayObject>(void*)
    VertexArrayObject* placement_new<render::VertexArrayObject>(void* param_1) {
        render::VertexArrayObject::VertexArrayObject(param_1);
        return param_1;
    }

    // 0x100bd3e70, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048> >* placement_new<MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048> >, MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData*&, render::VertexArrayObject*>(void*, MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData*&, render::VertexArrayObject*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>,
        MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData*&, render::VertexArrayObject*>(
        void* param_1, RefCounterAndData** param_2, VertexArrayObject** param_3) {
        MakeSharedPoolRefCounter<render::VertexArrayObject,
                                 MakeSharedPool<render::VertexArrayObject, 2048>>::MakeSharedPoolRefCounter(param_1,
                                                                                                            *param_2,
                                                                                                            *param_3);
        return param_1;
    }

    // 0x100bd4790, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048> >::MakeSharedPoolRefCounter(void*, render::VertexArrayObject*): jumps straight to the base-object constructor

    // 0x100bd47a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048> >::MakeSharedPoolRefCounter(void*, render::VertexArrayObject*)
    void jag::MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>* this,
            void* param_1, VertexArrayObject* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b70 + 16;
        *(void**)(this + 16) = param_1;
        *(VertexArrayObject**)(this + 24) = param_2;
    }

    // 0x100bd47e0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>::
        DeleteData(MakeSharedPoolRefCounter<render::VertexArrayObject,
                                            MakeSharedPool<render::VertexArrayObject, 2048>>* this) {
        if (*(VertexArrayObject**)(this + 24) != (VertexArrayObject*)0) {
            (*(VertexArrayObject**)(this + 24))->~VertexArrayObject();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100bd4810, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<render::VertexArrayObject, MakeSharedPool<render::VertexArrayObject, 2048>>::
        DeleteSelf(MakeSharedPoolRefCounter<render::VertexArrayObject,
                                            MakeSharedPool<render::VertexArrayObject, 2048>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<render::VertexArrayObject, 2048>::deallocate(pvVar1);
    }

    // 0x100bd85d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::ref_counter_with_deleter(unsigned char*, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5): jumps straight to the base-object constructor

    // 0x100bd85e0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::ref_counter_with_deleter(unsigned char*, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5)
    void
    jag::ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&,
                                                                                     unsigned int, unsigned int)::$_5>::
        ref_counter_with_deleter(ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(
                                                                             unsigned char*, unsigned int&,
                                                                             unsigned int, unsigned int)::__5>* this,
                                 undefined8 param_1) {
        new (this) ref_counter_base();
        *(undefined***)this = &PTR__ref_counter_with_deleter_100f27f60;
        *(undefined8*)(this + 16) = param_1;
    }

    // 0x100bd8610, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::~ref_counter_with_deleter(): jumps straight to the base-object destructor

    // 0x100bd8620, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::~ref_counter_with_deleter()
    void jag::ref_counter_with_deleter<unsigned char,
                                       render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                           unsigned int)::$_5>::
        ~ref_counter_with_deleter(ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(
                                                                              unsigned char*, unsigned int&,
                                                                              unsigned int, unsigned int)::__5>* this) {
        ~ref_counter_with_deleter(this);
        operator_delete(this);
    }

    // 0x100bd8640, 48 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::DeleteData()
    void
    jag::ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&,
                                                                                     unsigned int, unsigned int)::$_5>::
        DeleteData(ref_counter_with_deleter<
                   unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                      unsigned int)::__5>* this) {
        uchar* in_RSI;

        (unsigned char*)
            ->GutterCompressedTextureData(unsigned int&, unsigned int,
                                          unsigned int)::$_5::operator()(*(__5**)(this + 16), in_RSI);
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100bd8670, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::DeleteSelf()
    void
    jag::ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&,
                                                                                     unsigned int, unsigned int)::$_5>::
        DeleteSelf(ref_counter_with_deleter<
                   unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                      unsigned int)::__5>* this) {
        if (this !=
            (ref_counter_with_deleter<
                unsigned char,
                (unsigned char*)->GutterCompressedTextureData(unsigned int&, unsigned int, unsigned int)::__5>*)0) {
            (**(code**)(*(long*)this + 8))();
        }
    }

    // 0x100bd8690, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5>::~ref_counter_with_deleter()
    void jag::ref_counter_with_deleter<unsigned char,
                                       render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                           unsigned int)::$_5>::
        ~ref_counter_with_deleter(ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(
                                                                              unsigned char*, unsigned int&,
                                                                              unsigned int, unsigned int)::__5>* this) {
        AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
    }

} // namespace jag

namespace jag::math {
    // 0x100bd21f0, 64 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<float>(Vector4T<float> const&, Vector4T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Vector4T<float> const&) */

    bool operator==(Vector4T* param_1, Vector4T* param_2) {
        if (((*(float*)param_1 == *(float*)param_2) && (*(float*)(param_1 + 4) == *(float*)(param_2 + 4))) &&
            (*(float*)(param_1 + 8) == *(float*)(param_2 + 8))) {
            return *(float*)(param_1 + 12) == *(float*)(param_2 + 12);
        }
        return false;
    }

} // namespace jag::math

// 0x100bd22a0, 16 bytes, placed by debug map only (low confidence)
// __libcpp_strchr(char const*, int)
void __libcpp_strchr(char* param_1, int param_2) {
    _strchr(param_1, 46);
}
